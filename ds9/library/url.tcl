#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

# get generic file via url
# used by Analysis and SAMP

proc GetFileURL {url fname} {
    upvar $fname fn

    ParseURL $url rr
    switch -- $rr(scheme) {
	ftp {GetFileFTP $rr(authority) $rr(path) $fn}
	file {set fn $rr(path)}
	http -
	https -
	default {GetFileHTTP $url $fn}
    }
}

proc GetFileFTP {host path fn} {
    global debug

    set ftp [ftp::Open $host {ftp} {-ds9@} -mode passive]
    if {$ftp > -1} {
	set ftp::VERBOSE $debug(tcl,ftp)
	set "ftp::ftp${ftp}(Output)" FTPLog
	ftp::Type $ftp binary
	ftp::Get $ftp $path $fn
	ftp::Close $ftp

	# clear error from tcllib ftp
	global errorInfo
	set errorInfo {}
    }
}

proc GetFileHTTP {url fn} {
    global ihttp

    set ch [open $fn w]
    if {[catch {http::geturl $url \
		    -channel $ch \
		    -binary 1 \
		    -headers "[ProxyHTTP]"} token]} {
	close $ch
	return
    }

    #		    -timeout $ihttp(timeout) \

    # reset errorInfo (may be set in http::geturl)
    global errorInfo
    set errorInfo {}

    close $ch
    if {[info exists token]} {
	HTTPLog $token
	http::cleanup $token
    }
}

# Load fits via url
# sync with redirection
# used by command line, SAMP, SIA

proc OpenURLFits {{layer {}} {mode {}}} {
    global fitsurl

    set url $fitsurl
    if {[EntryDialog [msgcat::mc {URL}] [msgcat::mc {Enter URL}] 80 url]} {
	LoadURLFits $url $layer $mode
	FinishLoad

	set fitsurl $url
    }
}

proc LoadURLFits {url layer mode} {
    if {[string length $url] == 0} {
	return
    }

    ParseURL $url r
    switch -- $r(scheme) {
	ftp {LoadURLFitsFTP $r(authority) $r(path) $layer $mode}
	file {LoadURLFitsFile $r(path) $layer $mode}
	http -
	https -
	default {LoadURLFitsHTTP $url $layer $mode}
    }
}

proc LoadURLFitsFTP {host path layer mode} {
    global loadParam
    global ds9
    global debug

    set ftp [ftp::Open $host "ftp" "-ds9@" -mode passive]
    if {$ftp > -1} {
	set fn [tmpnam [file extension $path]]
	set ftp::VERBOSE $debug(tcl,ftp)
	set "ftp::ftp${ftp}(Output)" FTPLog
	ftp::Type $ftp binary
	if {[ftp::Get $ftp $path $fn]} {
	    LoadURLFitsFile $fn $layer $mode
	}

	ftp::Close $ftp

	if {[file exists $fn]} {
	    catch {file delete -force $fn}
	}
    }
}

proc LoadURLFitsFile {fn layer mode} {
    global loadParam

    # alloc it because we can't assume it will last
    set loadParam(file,type) fits
    set loadParam(file,mode) $mode
    set loadParam(load,type) allocgz
    set loadParam(file,name) $fn
    set loadParam(file,fn) $loadParam(file,name)
    set loadParam(load,layer) $layer

    ProcessLoad
}

proc LoadURLFitsHTTP {url layer mode} {
    global ds9
    global ihttp

    ParseURL $url r
    set fn [tmpnam [file extension $r(path)]]

    set ch [open $fn w]
    set token [http::geturl $url \
		   -channel $ch \
		   -binary 1 \
		   -headers "[ProxyHTTP]"]

    #		   -timeout $ihttp(timeout) \

    # reset errorInfo (may be set in http::geturl)
    global errorInfo
    set errorInfo {}

    catch {close $ch}

    upvar #0 $token t

    # Code
    set code [http::ncode $token]

    # Meta
    set meta $t(meta)

    # Mime-type
    # we want to strip and extra info after ';'
    regexp -nocase {([^;])*} $t(type) mime

    # Content-Encoding
    set encoding {}
    foreach {name value} $meta {
	if {[regexp -nocase ^content-encoding $name]} {
	    switch -- [string tolower $value] {
		compress -
		bzip2 {set encoding bzip2}
		Z {set encoding compress}
		pack -
		z {set encoding pack}
		default {}
	    }
	}
    }

    HTTPLog $token
    # Result?
    switch -- $code {
	200 -
	203 {}

	201 -
	300 -
	301 -
	302 -
	303 -
	305 -
	307 {
	    foreach {name value} $meta {
		if {[regexp -nocase ^location$ $name]} {
		    global debug
		    if {$debug(tcl,http)} {
			puts stderr "LoadURLFitsHTTP redirect $code to $value"
		    }
		    # clean up and resubmit
		    http::cleanup $token
		    unset token

		    if {[file exists $fn]} {
			catch {file delete -force $fn}
		    }
		    set url $value
		    LoadURLFitsHTTP $url $layer $mode
		    return
		}
	    }
	}

	default {
	    Error "HTTP [msgcat::mc {Error}] $code"
	    return
	}
    }

    http::cleanup $token

    global debug
    if {$debug(tcl,http)} {
	puts stderr "LoadURLFitsHTTP: fn $fn : code $code : meta $meta : mime $mime : encoding $encoding"
    }

    switch -- [string tolower $mime] {
	"application/octet-stream" {
	    # its never fails, someone can't get there mime types correct. 
	    # Override the mime type based on path
	    switch -- [file extension $fn] {
		.bz2 {set var(encoding) bzip2}
		.Z {set var(encoding) compress}
		.z {set var(encoding) pack}
	    }
	}

	"image/fits" -
	"application/fits" {}

	"application/fits-image" -
	"application/fits-table" -
	"application/fits-group" {}

	"image/x-fits" -
	"binary/x-fits" -
	"application/x-fits" {}

	"image/x-gfits" -
	"binary/x-gfits" -
	"image/gz-fits" -
	"application/x-gzip" -
	"display/gz-fits" {}

	"image/fits-hcompress" -
	"image/x-fits-h" {}

	"image/bz2-fits" -
	"display/bz2-fits" {set encoding bzip2}

	"image/x-cfits" -
	"binary/x-cfits" {set encoding compress}

	"image/x-zfits" -
	"binary/x-zfits" {set encoding pack}

	"text/html" -
	"text/plain" -
	default {
	    Error "[msgcat::mc {File not Found or Unable to load FITS data MIME type}] $mime"
	    return
	}
    }

    # alloc it because we are going to delete it after load
    global loadParam

    set loadParam(file,type) fits
    set loadParam(file,mode) $mode
    set loadParam(load,type) allocgz
    set loadParam(file,name) $fn
    set loadParam(file,fn) $loadParam(file,name)
    set loadParam(load,layer) $layer

    # may have to convert the file, based on content-encoding
    switch -- "$encoding" {
	bzip2 {
	    catch {set ch [open "| bunzip2 < $fn " r]}
	    set loadParam(load,type) channel
	    set loadParam(channel,name) $ch
	}
	compress {
	    catch {set ch [open "| uncompress < $fn " r]}
	    set loadParam(load,type) channel
	    set loadParam(channel,name) $ch
	}
	pack {
	    catch {set ch [open "| pcat $fn " r]}
	    set loadParam(load,type) channel
	    set loadParam(channel,name) $ch
	}
    }

    ProcessLoad
    FinishLoad

    if {[file exists $fn]} {
	catch {file delete -force $fn}
    }
}

proc ProcessURLFitsCmd {varname iname} {
    upvar $varname var
    upvar $iname i

    set layer {}
    set mode {}

    switch -- [string tolower [lindex $var $i]] {
	new {
	    incr i
	    CreateFrame
	}
	mask {
	    incr i
	    set layer mask
	}
	slice {
	    incr i
	    set mode slice
	}
    }

    LoadURLFits [lindex $var $i] $layer $mode
}

