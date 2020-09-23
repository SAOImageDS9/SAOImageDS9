#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc HVCancel {varname} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,hv)} {
	puts stderr "HVCancel"
    }

    # set state to 0 so that we don't process the finish proc
    set var(active) 0

    # stop any refresh
    if {$var(refresh,id)>0} {
	after cancel $var(refresh,id)
	set var(refresh,id) 0
    }

    # analysis
    if {$var(analysis)} {
	AnalysisTaskEnd $var(analysis,which) $var(analysis,i)
	HVSetAnalysis $varname 0 {} 0
    }

    # clean up
    HVClearTmpFile $varname

    if {[info exists var(token)]} {
	http::reset $var(token)
    }

    if {[info exists var(widget)]} {
	$var(widget) configure -cursor {}
    }
}

proc HVReset {varname} {
    upvar #0 $varname var
    global $varname

    set var(active) 0

    if {[info exists var(token)]} {
	global debug
	if {$debug(tcl,hv)} {
	    puts stderr "HVReset ***cleanup***"
	}
	http::cleanup $var(token)
	unset var(token)
    }
}

proc HVDone {varname} {
    upvar #0 $varname var
    global $varname

    HVStatus $varname {}
    HVReset $varname
}

proc HVCancelled {varname} {
    upvar #0 $varname var
    global $varname

    HVStatus $varname {}
    HVReset $varname
}

proc HVError {varname err} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,hv)} {
	puts stderr "HVError $err"
    }

    HVReset $varname
    Error $err
}

proc HVStatus {varname message} {
    upvar #0 $varname var
    global $varname

    set var(status) $message
}

proc HVResolveURL {varname url} {
    upvar #0 $varname var
    global $varname

    global debug
    global pvo

    if {$debug(tcl,hv)} {
	puts stderr "HVResolveURL $varname $url"
    }

    set sync $var(sync)
    # sub xpa method
    set exp {%40%40XPA_METHOD%40%40|@@XPA_METHOD@@}
    if {[regexp $exp $url]} {
	regsub -all $exp $url [XPAMethod] url
	if {$debug(tcl,hv)} {
	    puts stderr "HVResolveURL XPA_METHOD $url"
	}
    }

    # sub vo method
    set exp {%40%40VO_METHOD%40%40|@@VO_METHOD@@}
    if {[regexp $exp $url]} {
	regsub -all $exp $url $pvo(method) url
	if {$debug(tcl,hv)} {
	    puts stderr "HVResolveURL VO_METHOD $url"
	}
    }

    # if pvo(method) is xpa, HV has to be async
    if {$pvo(method) == {xpa}} {
	set sync 0
    }

    # some old sites have a problem with '?' in the query not encoded
    ParseURL $url rr
    if {$rr(query) != {}} {
	if {[regsub -all {\?} $rr(query) {%25} query]} {
	    set newurl "$rr(scheme)://$rr(authority)$rr(path)?$query"
	    if {$rr(fragment) != {}} {
		append newurl "#$rr(fragment)"
	    }
	    HVLoadURL $varname $newurl {} $sync
	} else {
	    HVLoadURL $varname $url {} $sync
	}
    } else {
	HVLoadURL $varname $url {} $sync
    }
}

# this is the main entry point, everybody calls here

proc HVLoadURL {varname url query {sync 0}} {
    upvar #0 $varname var
    global $varname

    # this assumes the url has been already resolved
    global debug
    if {$debug(tcl,hv)} {
	puts stderr "HVLoadURL :$varname:$url:$query:$sync:"
    }

    # do we have anything?
    if {$url == {}} {
	return
    }

    HVStatus $varname {}

    # parse url
    ParseURL $url r
    if {$debug(tcl,hv)} {
	puts stderr "HVLoadURL |$r(scheme)|$r(authority)|$r(path)|$r(query)|$r(fragment)|$query|"
    }

    switch -- $r(scheme) {
	file -
	{} {HVProcessURLFile $varname $url $query r}
	ftp {HVProcessURLFTP $varname $url $query r}
	http -
	https {HVProcessURLHTTP $varname $url $query r $sync}
	default {HVError $varname "[msgcat::mc {Sorry, DS9 does not support}] $r(scheme)"}
    }
}

proc HVProcessURLFile {varname url query rr} {
    upvar #0 $varname var
    global $varname

    upvar $rr r
    
    global ds9

    global debug
    if {$debug(tcl,hv)} {
	puts stderr "HVProcessURLFile"
    }

    if {[file exists $r(path)]} {
	if {[file isdirectory $r(path)]} {
	    HVSetURL $varname $url {} {}
	    HVSetResult $varname 200 "text/html"
	    HVSetData $varname \
		[HVFileHtmlList $r(path) [HVDirList $r(path)]] {}

	    set var(delete) 0
	    HVParse $varname
	} else {
	    HVSetURL $varname $url {} $r(fragment)
	    set var(delete) 0
	    HVLoadFile $varname $r(path)
	}
    }
}

proc HVProcessURLFTP {varname url query rr} {
    upvar #0 $varname var
    global $varname

    upvar $rr r
    
    global ds9

    global debug
    if {$debug(tcl,hv)} {
	puts stderr "HVProcessURLFTP"
	DumpURL r
    }

    set fn [tmpnam [file extension $r(path)]]
    set ftp [ftp::Open $r(authority) "ftp" "-ds9@" -mode passive]
    if {$ftp > -1} {
	# first try to get as file
	set ftp::VERBOSE $debug(tcl,ftp)
	set "ftp::ftp${ftp}(Output)" FTPLog
	ftp::Type $ftp binary
	if {[ftp::Get $ftp $r(path) "$fn"]} {
	    ftp::Close $ftp

	    if {$debug(tcl,hv)} {
		puts stderr "HVProcessURLFTP get $fn"
	    }
	    HVSetURL $varname $url {} $r(fragment)

	    set var(delete) 1
	    HVLoadFile $varname "$fn"

	    HVClearTmpFile $varname
	} else {
	    # from the prev attempt
	    catch {file delete -force "$fn"}

	    # is it a dir or file that could not be download?
	    if {[file extension $r(path)] == {}} {

		if {$debug(tcl,hv)} {
		    puts stderr "HVProcessURLFTP list"
		}

		# now as a directory
		set list [ftp::List $ftp $r(path)]
		ftp::Close $ftp

		HVSetURL $varname $url {} {}
		HVSetResult $varname 200 "text/html"
		HVSetData $varname [HVFTPHtmlList $r(authority) $r(path) $list] {}

		set var(delete) 0
		HVParse $varname
	    } else {
		HVError $varname "[msgcat::mc {Unable to open file}] $r(path)"
		return
	    }
	}
    }
}

proc HVProcessURLHTTP {varname url query rr sync} {
    upvar #0 $varname var
    global $varname

    upvar $rr r
    
    global ds9

    global debug
    if {$debug(tcl,hv)} {
	puts stderr "HVProcessURLHTTP"
    }

    # stop any refresh
    if {[info exists ${varname}(refresh,id)]} {
	if {$var(refresh,id)>0} {
	    after cancel $var(refresh,id)
	}
    }

    # do we already have it in cache?
    if {[info exists ${varname}(cache,file,$url,$query)]} {

	# has it expired?
	if {($var(cache,expire,$url,$query) == 0) ||
	    ($var(cache,expire,$url,$query) > [clock seconds])} {

	    # just in case
	    if {[file exists $var(cache,file,$url,$query)]} {
		# ok, to it
		if {$debug(tcl,hv)} {
		    puts stderr "HVProcessURLHTTP found $url at $var(cache,file,$url,$query)"
		}

		HVSetURL $varname $url $query $r(fragment)
		set var(delete) 0
		HVSetResult $varname 200 $var(cache,mime,$url,$query)
		HVSetData $varname {} $var(cache,file,$url,$query)

		HVParse $varname

		return
	    }
	}

	# expired or invalid, clean up
	if {$debug(tcl,hv)} {
	    puts stderr "HVProcessURLHTTP expired or invalid $var(cache,file,$url,$query)"
	}
	catch {file delete $var(cache,file,$url,$query)}
	unset var(cache,file,$url,$query)
	unset var(cache,mime,$url,$query)
	unset var(cache,expire,$url,$query)
    }

    HVSetURL $varname $url $query $r(fragment)
    HVSetResult $varname {} {}
    HVSetData $varname {} {}

    set var(ch) {}

    # do we have html? if so, use a var
    ParseURL $url r

    # geturl as file
    set var(fn) [tmpnam {.http}]
    if {[catch {open "$var(fn)" w} ${varname}(ch)]} {
	HVError $varname "[msgcat::mc {Unable to open file}] $var(fn)"
	return
    }

    # disable timeouts for analysis
    global ihttp
    set timeout $ihttp(timeout)
    if {$var(analysis)} {
	set timeout 0
    }

    if {$sync} {
	if {![catch {set var(token) [http::geturl $url \
					 -query "$query" \
					 -timeout $timeout \
					 -headers "[HVHTTPHeader $varname]" \
					 -progress [list HVProgress $varname] \
					 -binary 1 \
					 -channel $var(ch)]
	}]} {
	    # reset errorInfo (may be set in http::geturl)
	    global errorInfo
	    set errorInfo {}

	    set var(active) 1
	    set var(delete) 1
	    HVProcessURLHTTPFinish $varname $var(token)
	} else {
	    catch {close $var(ch)}
	    HVError $varname "[msgcat::mc {Unable to locate URL}] $url"
	}
    } else {
	if {![catch {set var(token) [http::geturl $url \
					 -query "$query" \
					 -timeout $timeout \
					 -headers "[HVHTTPHeader $varname]" \
					 -progress [list HVProgress $varname] \
					 -binary 1 \
					 -channel $var(ch) \
					 -command [list HVProcessURLHTTPFinish $varname]]
	}]} {
	    # reset errorInfo (may be set in http::geturl)
	    global errorInfo
	    set errorInfo {}

	    set var(active) 1
	    set var(delete) 1
	} else {
	    catch {close $var(ch)}
	    HVError $varname "[msgcat::mc {Unable to locate URL}] $url"
	}
    }
}

proc HVProcessURLHTTPFinish {varname token} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,hv)} {
	puts stderr "HVProcessURLHTTPFinish"
    }

    catch {close $var(ch)}

    if {!($var(active))} {
	HVCancelled $varname
	return
    }

    upvar #0 $token t

    # Code
    set var(code) [http::ncode $token]

    # Meta
    set var(meta) $t(meta)

    # Cache defaults
    set var(cache) 1
    set var(cache,images) 1
    set var(expire) 0

    HVParseMeta $varname

    # Log it
    HTTPLog $token

    # Result?
    switch -- $var(code) {
	200 -
	203 -
	404 -
	503 {
	    if {$var(cache)} {
		if {$debug(tcl,hv)} {
		    puts stderr "HVProcessURLHTTPFinish cacheing:$var(url),$var(query):$var(fn)"
		}
		set url $var(url)
		set query $var(query)
		set var(cache,file,$url,$query) $var(fn)
		set var(cache,mime,$url,$query) $var(mime)
		set var(cache,expire,$url,$query) $var(expire)
		set var(delete) 0
	    }
	    HVParse $varname
	    HVDone $varname
	}

	201 -
	300 -
	301 -
	302 -
	303 -
	305 -
	307 {
	    foreach {name value} $var(meta) {
		if {[regexp -nocase ^location$ $name]} {
		    global debug
		    if {$debug(tcl,hv)} {
			puts stderr "HVProcessURLHTTPFinish redirect $var(code) to $value"
		    }
		    # clean up and resubmit
		    http::cleanup $token
		    unset var(token)

		    HVClearTmpFile $varname

		    if {[info exists var(widget)]} {
			HVLoadURL $varname [$var(widget) resolve $value] {} $var(sync)
		    } else {
			HVLoadURL $varname $value {} $var(sync)
		    }
		}
	    }
	}

	default {HVError $varname "HTTP [msgcat::mc {Error}] $var(code)"}
    }
}

proc HVHTTPHeader {varname} {
    upvar #0 $varname var
    global $varname

    set domain {}
    ParseURL $var(url) rr
    regexp {[^:]*} $rr(authority) domain

    set result "[ProxyHTTP]"
    foreach cc $var(cookies) {
	if {$domain == [lindex $cc 2]} {
	    append result " Cookie [lindex $cc 0]=[lindex $cc 3]"
	}
    }

    global debug
    if {$debug(tcl,hv)} {
	puts stderr "HVHTTPHeader:$result"
    }

    return $result
}

proc HVParseMeta {varname} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,hv)} {
	puts stderr "HVParseMeta: $var(meta)"
    }

    foreach {name value} $var(meta) {
	switch -- [string tolower $name] {
	    content-type {
		regexp -nocase {([^;]*);?(.*)} $value foo \
		    ${varname}(mime) ${varname}(mime,param)
		set var(mime) [string tolower $var(mime)]
	    }
	    content-length {}
	    content-encoding {
		switch -- [string tolower $value] {
		    gzip -
		    x-gzip {set var(encoding) gzip}
		    bzip2 {set var(encoding) bzip2}
		    compress -
		    Z {set var(encoding) compress}
		    pack -
		    z {set var(encoding) pack}
		    default {}
		}
	    }
	    content-transfer-encoding {
		switch -- [string tolower $value] {
		    binary -
		    base64 {set var(transfer) [string tolower $value]}
		    default {}
		}
	    }

	    refresh {
		set f [split $value \;]
		set var(refresh,time) [lindex $f 0]
		set var(refresh,url) [string range [lindex $f 1] 4 end]
		if {$var(refresh,url) != {} & $var(refresh,time) != {}} {
		    set var(refresh,id) [after [expr $var(refresh,time)*1000] "HVLoadURL $varname \{$var(refresh,url)\} {} $var(sync)"]
		} else {
		    set var(refresh,id) 0
		}
	    }
	    expires {
		if {[catch {set ss [clock scan $value]}]} {
		    set var(cache) 0
		} else {
		    set var(cache) 1
		    set var(expire) $ss
		}
	    }
	    cache-control {
		foreach cc [split $value {,}] {
		    foreach {nn vv} [split $cc {=}] {
			switch $nn {
			    public {set var(cache) 1}
			    private {set var(cache) 1}
			    no-cache {set var(cache) 0}
			    no-store {set var(cache) 1}

			    s-maxage -
			    min-fresh -
			    max-age {
				set var(cache) 1
				set var(expire) \
				    [expr [file mtime $var(fn)]+$vv]
			    }
			    max-stale {}
			    no-transform {}
			    only-if-cached {}
			    cache-extension {}
			    
			    must-revalidate {}
			    proxy-revalidate {}
			}
		    }
		}
	    }
	    pragma {
		switch $value {
		    no-cache {set var(cache) 0}
		}
	    }
	    last-modified {
	    }
	    if-none-match {
	    }
	    set-cookie {
		set cname {}
		set cpath {/}
		set cdomain {}
		set cvalue {}

		ParseURL $var(url) rr
		regexp {[^:]*} $rr(authority) cdomain

		foreach cc [split $value {;}] {
		    foreach {nn vv} [split $cc {=}] {
			switch [string tolower [string trim $nn]] {
			    httponly {}
			    expires {}
			    path {set cpath $vv}
			    domain {set cdomain $vv}
			    {} {append cvalue {=}}
			    default {
				if {$nn != {}} {
				    set cname $nn
				    set cvalue $vv
				}
			    }
			}
		    }
		}
		if {$cname != {}} {
		    lappend ${varname}(cookies) [list $cname $cpath $cdomain $cvalue]
		}
	    }
	}
    }

    if {$debug(tcl,hv)} {
	puts stderr "HVParseMeta Content-Type:$var(mime):$var(mime,param):"
	puts stderr "HVParseMeta Content-Encoding:$var(encoding):"
	puts stderr "HVParseMeta Content-Transfer-Encoding:$var(transfer):"
	puts stderr "HVParseMeta Refresh:$var(refresh,time):$var(refresh,url):"
	puts stderr "HVParseMeta Cache:$var(cache)"
	puts stderr "HVParseMeta Expires:$var(expire)"
	puts stderr "HVParseMeta Cookies:$var(cookies)"
    }
}

proc HVLoadFile {varname path} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,hv)} {
	puts stderr "HVLoadFile $path"
    }

    HVSetResult $varname 200 {}
    HVSetData $varname {} $path

    # content-encoding
    switch -- [string tolower [file extension $path]] {
	.gz {
	    set path [file rootname $path]
	    set var(encoding) gzip
	}
	.bz2 {
	    set path [file rootname $path]
	    set var(encoding) bzip2
	}
	.Z {
	    set path [file rootname $path]
	    set var(encoding) compress
	}
    }

    switch -- [string tolower [file extension $path]] {
	.html -
	.htm {set var(mime) "text/html"}
	.gif {set var(mime) "image/gif"}
	.jpeg -
	.jpg {set var(mime) "image/jpeg"}
	.tiff -
	.tif {set var(mime) "image/tiff"}
	.png {set var(mime) "image/png"}

	.fits -
	.fit -
	.fts {set var(mime) "image/fits"}

	.ftz -
	.fits.gz -
	.fgz {
	    set var(mime) "image/fits"
	    set var(encoding) "gzip"
	}

	.text -
	.txt {set var(mime) "text/plain"}
	.multi {
	    set var(mime) "multipart/mixed"
	    set var(xpa,target) "*:*"
	    if {[file exists "$path"]} {
		set ch [open "$path" r]
		if {[gets $ch line] >= 0} {
		    set var(mime,param) "Content-Type: multipart/mixed; Boundary=[string range $line 2 end]"
		}
		catch {close $ch}
	    }
	}

	.sao {set var(mime) "text/x-cmap-sao"}

	default {
	    switch -- $var(encoding) {
		gzip -
		bzip2 -
		compress -
		pack {set var(mime) "application/octet-stream"}
		default {set var(mime) "text/plain"}
	    }
	}
    }

    HVParse $varname
}

proc HVParse {varname} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,hv)} {
	puts stderr "HVParse"
    }

    switch -- $var(mime) {
	"multipart/alternative" -
	"multipart/parallel" -
	"multipart/digest" -
	"multipart/related" -
	"multipart/signed" -
	"multipart/encrypted" -
	"multipart/report" {}

	"multipart/x-mixed-replace" -
	"multipart/mixed" {
	    HVParseMulti $varname
	    HVClearCache $varname
	}

	default {HVParseSingle $varname}
    }

    if {$var(analysis)} {
	AnalysisTaskEnd $var(analysis,which) $var(analysis,i)
	HVSetAnalysis $varname 0 {} 0
    }
}

proc HVParseMulti {varname} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,hv)} {
	puts stderr "HVParseMulti"
    }

    # do it now, to be restored later
    if {[info exists var(index)]} {
	incr ${varname}(index)
	set var(index,$var(index)) [list $var(url) $var(query)]
	set index $var(index)
    }

    set fn $var(fn)
    set del $var(delete)

    if {[file exists "$var(fn)"]} {
	if {[catch {open "$var(fn)" r} ch]} {
	    HVError $varname "[msgcat::mc {Unable to open file}] $var(fn)"
	    return
	}
    }

    set boundary [HVParseMimeParam $varname "boundary"]
    if {[string equal "$boundary" {}]} {
	HVError $varname [msgcat::mc {Invalid formated multipart/mixed mime type message}]
	return
    }

    set state 1
    set var(ch) {}

    HVSetResult $varname 200 {}
    HVSetData $varname {} {}

    while {[gets $ch line] >= 0} {
	if {$debug(tcl,hv)} {
	    puts stderr "HVParseMulti $state:$line"
	}

	switch -- $state {
	    1 {
		# boundary
		if {[string equal "--$boundary" $line]} {
		    set state 2
		}
	    }
	    2 {
		# header
		if {[string length $line] == 0} {
		    HVParseMeta $varname

		    # save to a file
		    set var(fn) [tmpnam {.http}]
		    set var(delete) 1
		    if {[catch {open "$var(fn)" w} ${varname}(ch)]} {
			HVError $varname "[msgcat::mc {Unable to open file}] $var(fn)"
			return
		    }
		    switch $var(transfer) {
			binary -
			base64 {
			    fconfigure $var(ch) \
				-translation binary -encoding binary
			}
		    }

		    set state 3
		} else {
		    if {[regexp -nocase {^([^:]+):(.+)$} $line x key value]} {
			lappend var(meta) $key [string trim $value]
		    }
		}
	    }
	    3 {
		# body
		if {[string equal "--$boundary" $line]} {
		    catch {close $var(ch)}
		    HVParseSingle $varname
		    HVClearTmpFile $varname

		    set var(ch) {}

		    HVSetResult $varname 200 {}

		    # we want to preserve var(text)
		    # HVSetData $varname {} {}
		    set var(data) {}
		    set var(fn) {}

		    set state 2

		} elseif {[string equal "--$boundary--" $line]} {
		    catch {close $var(ch)}
		    catch {close $ch}

		    HVParseSingle $varname
		    HVClearTmpFile $varname

		    # reset file values
		    set var(fn) $fn
		    set var(delete) $del

		    if {[info exists var(index)]} {
			# reset index
			set var(index) $index
			HVClearIndex $varname $index
		    }

		    return

		} else {
		    switch $var(transfer) {
			binary {puts -nonewline $var(ch) $line}
			base64 {
			    puts -nonewline $var(ch) [base64::decode $line]
			}
			default {puts $var(ch) $line}
		    }
		}
	    }
	}
    }

    # clean up
    catch {close $ch}
    set var(fn) $fn
}

proc HVParseSingle {varname} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,hv)} {
	puts stderr "HVParseSingle $var(url)"
    }

    switch -- $var(mime) {
	"text/html" -
	"text/plain" -
	"application/octet-stream" {
	    # it never fails, someone can't get there mime types correct. 
	    # Override the mime type based on path

	    ParseURL $var(url) r
	    set path [file tail $r(path)]  

	    # set content-encoding
	    switch -- [file extension $path] {
		.gz {
		    set path [file rootname $path]
		    set var(encoding) gzip
		}
		.bz2 {
		    set path [file rootname $path]
		    set var(encoding) bzip2
		}
		.Z {
		    set path [file rootname $path]
		    set var(encoding) compress
		}
		.z {
		    set path [file rootname $path]
		    set var(encoding) pack
		}
	    }

	    # set Content-Type
	    switch -- [file extension $path] {
		.html -
		.htm {set var(mime) "text/html"}
		.gif {set var(mime) "image/gif"}
		.jpeg -
		.jpg {set var(mime) "image/jpeg"}
		.tiff -
		.tif {set var(mime) "image/tiff"}
		.png {set var(mime) "image/png"}

		.fits -
		.fit -
		.fts {set var(mime) "image/fits"}

		.ftz -
		.fgz {
		    set var(mime) "image/fits"
		    set var(encoding) "gzip"
		}

		.xml -
		.vot -
		.votable {set var(mime) "text/xml"}

		.text -
		.txt {set var(mime) "text/plain"}

		.sao {set var(mime) "text/x-cmap-sao"}
	    }
	}
    }

    switch -- $var(mime) {
	"text/html" {HVParseHTML $varname}
	"text/plain" {HVParseText $varname}
	"application/octet-stream" {HVParseSave $varname}

	"image/gif" -
	"image/jpeg" -
	"image/tiff" -
	"image/png" {HVParseImg $varname}

	"image/fits" -
	"application/fits" {HVParseFITS $varname}

	"application/fits-image" -
	"application/fits-table" -
	"application/fits-group" {HVParseFITS $varname}

	"image/x-fits" -
	"binary/x-fits" -
	"application/x-fits" {HVParseFITS $varname}

	"image/fits-hcompress" -
	"image/x-fits-h" {HVParseFITS $varname}

	"image/x-gfits" -
	"binary/x-gfits" -
	"image/gz-fits" -
	"application/x-gzip" -
	"display/gz-fits" {
	    set var(encoding) gzip
	    HVParseFITS $varname
	}

	"image/bz2-fits" -
	"display/bz2-fits" {
	    set var(encoding) bzip2
	    HVParseFITS $varname
	}

	"image/x-cfits" -
	"binary/x-cfits" {
	    set var(encoding) compress
	    HVParseFITS $varname
	}

	"image/x-zfits" -
	"binary/x-zfits" {
	    set var(encoding) pack
	    HVParseFITS $varname
	}

	"text/xml" -
	"application/xml" -
	"application/x-votable+xml" {HVParseVOT $varname}

	"x-xpa/xpaget" {}
	"x-xpa/xpaset" {HVParseXPASet $varname}
	"x-xpa/xpainfo" {}
	"x-xpa/xpaaccess" {}

	"text/x-cmap-sao" {HVParseColormap $varname}

	default {HVParseSave $varname}
    }
}

proc HVParseText {varname} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,hv)} {
	puts stderr "HVParseText"
    }

    if {[string length $var(data)] == 0} {
	if {[file exists "$var(fn)"]} {
	    if {[catch {open "$var(fn)" r} ch]} {
		HVError $varname "[msgcat::mc {Unable to open file}] $var(fn)"
		return
	    }
	    set var(data) [read $ch]
	    close $ch
	}
    }

    if {$var(analysis)} {
	if {$debug(tcl,hv)} {
	    puts stderr "HVParseText Analysis"
	}
	AnalysisProcessGetURL $var(analysis,which) $var(analysis,i) $var(data)
    } else {
	append var(text) $var(data)
	set var(data) \
	    "<html>\n<body>\n$var(text)\n</body>\n</html>"
	HVSetResult $varname 200 "text/html"
	HVParseHTML $varname
    }

    HVClearCache $varname
}

proc HVParseHTML {varname} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,hv)} {
	puts stderr "HVParseHTML"
    }

    if {[string length $var(data)] == 0} {
	if {[file exists "$var(fn)"]} {
	    if {[catch {open "$var(fn)" r} ch]} {
		HVError $varname "[msgcat::mc {Unable to open file}] $var(fn)"
		return
	    }
	    set var(data) [read $ch]
	    close $ch
	}
    }

    # figure out the base
    # we don't want any query or fragments
    ParseURL $var(url) r

    set base {}
    # scheme
    switch $r(scheme) {
	http -
	https {append base "$r(scheme)://"}
	ftp {}
	file {}
    }
    # authority
    if {[string length $r(authority)] != 0} {
	append base "$r(authority)"
    }
    # path
    if {[string length $r(path)] != 0} {
	append base "$r(path)"
    } else {
	append base "/"
    }
    # query
    if {[string length $r(query)] != 0} {
	append base "?$r(query)"
    }

    # spaces?
    # regsub { } $base {\ } base

    $var(widget) config -base $base

    if {$debug(tcl,hv)} {
	DumpURL r
	puts stderr "HVParseHTML base [$var(widget) cget -base]"
    }

    # we have a valid html
    $var(widget) clear

    # fix forms with no action
    HVFixHTMLForm $varname

    # and now, parse it
    $var(widget) parse $var(data)

    HVGotoHTML $varname
}

proc HVParseImg {varname} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,hv)} {
	puts stderr "HVParseImg $var(url)"
    }

    if {$var(save)} {
	set fn [file tail $var(url)]
	switch -- $var(mime) {
	    "image/gif" {
		FileLast giffbox $fn
		set fn [SaveFileDialog giffbox $var(top)]
	    }
	    "image/jpeg" {
		FileLast jpegfbox $fn
		set fn [SaveFileDialog jpegfbox $var(top)]
	    }
	    "image/tiff" {
		FileLast tifffbox $fn
		set fn [SaveFileDialog tifffbox $var(top)]
	    }
	    "image/png" {
		FileLast pngfbox $fn
		set fn [SaveFileDialog pngfbox $var(top)]
	    }
	}

	if {[string length "$fn"] != 0} {
	    if {![catch {file rename -force "$var(fn)" "$fn"}]} {
		set var(fn) "$fn"
		set var(delete) 0
	    }
	}
    }

    switch -- $var(frame) {
	new {MultiLoad}
	current {}
    }

    ImportPhotoFile $var(fn) {}

    HVClearTmpFile $varname
    HVClearAll $varname
    HVUpdateDialog $varname
}

proc HVParseFITS {varname} {
    upvar #0 $varname var
    global $varname

    global ds9
    global debug

    if {$var(save)} {
	set fn [file tail $var(url)]
	switch -- $var(encoding) {
	    gzip {FileLast savefitsfbox "$fn"}
	    bzip2 {FileLast savefitsfbox "$fn"}
	    compress {FileLast savefitsfbox "$fn"}
	    pack {FileLast savefitsfbox "$fn"}
	    default {FileLast savefitsfbox "$fn"}
	}

	set fn [SaveFileDialog savefitsfbox $var(top)]
	if {[string length "$fn"] != 0} {
	    if {![catch {file rename -force "$var(fn)" "$fn"}]} {
		set var(fn) "$fn"
		set var(delete) 0
	    }
	}
    }

    switch -- $var(frame) {
	new {MultiLoad}
	current {}
    }

    global loadParam
    set loadParam(load,type) allocgz
    set loadParam(load,layer) {}
    set loadParam(file,type) fits
    set loadParam(file,mode) {}
    set loadParam(file,name) "$var(fn)"
    set loadParam(file,fn) $loadParam(file,name)

    # may have to convert the file, based on content-encoding
    switch -- "$var(encoding)" {
	bzip2 {
	    catch {set ch [open "| bunzip2 < $var(fn) " r]}
	    set loadParam(load,type) channel
	    set loadParam(channel,name) $ch
	}
	compress {
	    catch {set ch [open "| uncompress < $var(fn) " r]}
	    set loadParam(load,type) channel
	    set loadParam(channel,name) $ch
	}
	pack {
	    catch {set ch [open "| pcat $var(fn) " r]}
	    set loadParam(load,type) channel
	    set loadParam(channel,name) $ch
	}
    }

    ProcessLoad
    FinishLoad

    HVClearTmpFile $varname
    HVClearAll $varname
    HVUpdateDialog $varname
}

proc HVParseColormap {varname} {
    upvar #0 $varname var
    global $varname
    global ds9

    global debug
    if {$debug(tcl,hv)} {
	puts stderr "HVParseColormap"
    }

    set fn [HVParseMimeParam $varname "name"]
    if {$fn == {}} {
	ParseURL $var(url) r
	set fn [file tail $r(path)]
    }

    if {![catch {file rename -force $var(fn) $ds9(tmpdir)/$fn}]} {
	LoadColormapFile $ds9(tmpdir)/$fn
    }

    HVClearAll $varname
    HVUpdateDialog $varname
}

proc HVParseVOT {varname} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,hv)} {
	puts stderr "HVParseVOT"
    }

    if {[file exists "$var(fn)"]} {
	CATVOTFile "$var(fn)"
    }

    HVClearTmpFile $varname
    HVClearAll $varname
    HVUpdateDialog $varname
}

proc HVParseSave {varname} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,hv)} {
	puts stderr "HVParseSave"
    }

    set fn [HVParseMimeParam $varname "name"]
    if {$fn == {}} {
	ParseURL $var(url) r
	set fn [file tail $r(path)]
    }
    FileLast savefitsfbox $fn
    set fn [SaveFileDialog savefitsfbox $var(top)]
    if {[string length "$fn"] != 0} {
	if {![catch {file rename -force "$var(fn)" "$fn"}]} {
	    set var(delete) 0
	}
    }

    HVClearAll $varname
    HVUpdateDialog $varname
}

proc HVParseXPASet {varname} {
    upvar #0 $varname var
    global $varname
    global ds9

    global debug
    if {$debug(tcl,hv)} {
	puts stderr "HVParseXPASet: [HVParseMimeParam $varname paramlist]"
    }

    if {[info exists var(xpa,target)]} {
	set target $var(xpa,target)
    } else {
	set target [HVParseMimeParam $varname target]
    }

    if {$target == "$ds9(title)" ||
	$target == "DS9:*" ||
	$target == "DS9:$ds9(title)" ||
	$target == "*:$ds9(title)" ||
	$target == "*:*" ||
	$target == [XPAMethod]} {

	InitError hv
	CommSet $var(fn) [HVParseMimeParam $varname paramlist] 1
    } else {
	HVError $varname "[msgcat::mc {Unable to match target with XPA Mime request}] $var(url)"
    }
}

proc HVGotoHTML {varname} {
    upvar #0 $varname var
    global $varname

    incr ${varname}(index)
    set var(index,$var(index)) [list $var(url) $var(query)]

    global debug
    if {$debug(tcl,hv)} {
	puts stderr "HVGotoHTML $var(index) |$var(url)|$var(query)|$var(fragment)|"
    }

    if {[string length $var(fragment)] != 0} {
	if {$debug(tcl,idletasks)} {
	    puts stderr "HVGotoHTML"
	}
	update idletasks

	$var(widget) yview $var(fragment)
    } else {
	$var(widget) yview moveto 0
    }

    HVUpdateDialog $varname
}

proc HVClearCache {varname} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,hv)} {
	puts stderr "HVClearCache $varname"
    }

    foreach x [array names $varname "cache,file,*"] {
	catch {file delete $var($x)}
    }
    foreach x [array names $varname "cache,*"] {
	unset ${varname}($x)
    }
}

proc HVClearIndex {varname n} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,hv)} {
	puts stderr "HVClearIndex $varname $n"
    }

    foreach x [array names $varname "index,*"] {
	set f [split $x ,]
	if {[lindex $f 1] > $n} {
	    unset ${varname}($x)
	}
    }
    set var(index) $n
}

proc HVClearTmpFile {varname} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,hv)} {
	puts stderr "HVClearTmpFile"
    }

    if {$var(delete) && [string length "$var(fn)"] != 0} {
	if {[file exists "$var(fn)"]} {
	    if {$debug(tcl,hv)} {
		puts stderr "HVClearTmpFile delete $var(fn)"
	    }
	    file delete "$var(fn)"
	}
	set var(fn) {}
	set var(delete) 0
    }
}

proc HVUpdateDialog {varname} {
    upvar #0 $varname var
    global $varname

    # in case we've set the cursor
    $var(widget) configure -cursor {}

    global debug
    if {$debug(tcl,hv)} {
	puts stderr "HVUpdateDialog\n"
    }

    set id $var(index)
    set id [incr id -1]
    if {[info exists ${varname}(index,$id)]} {
	$var(mb).view entryconfig [msgcat::mc {Back}] -state normal    
    } else {
	$var(mb).view entryconfig [msgcat::mc {Back}] -state disabled
    }

    set id $var(index)
    set id [incr id 1]
    if {[info exists ${varname}(index,$id)]} {
	$var(mb).view entryconfig [msgcat::mc {Forward}] -state normal    
    } else {
	$var(mb).view entryconfig [msgcat::mc {Forward}] -state disabled
    }
}

proc HVRefresh {varname} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,hv)} {
	puts stderr "HVRefresh"
    }

    set var(delete) 0
    HVParse $varname
}

proc HVProgress {varname token totalsize currentsize} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,hv)} {
#	puts stderr "HVProgress:$varname"
    }

    if {$totalsize != 0} {
	HVStatus $varname "$currentsize bytes of $totalsize bytes [expr int(double($currentsize)/$totalsize*100)]%"
    } else {
	HVStatus $varname "$currentsize bytes"
    }
}

proc HVFTPHtmlList {host path list} {
    global debug
    if {$debug(tcl,hv)} {
	puts stderr "HVFTPHtmlList $host $path"
    }
    if {[string range $path end end] != "/"} {
	append path {/}
    }

    set html {}
    append html "<html>\n"
    append html "<head>\n"
    append html "<title>Index of $path on $host</title>\n"
    append html "</head>\n"
    append html "<body>\n"
    append html "<h1>Index on $path on $host</h1>\n"
    append html "<hr>\n"
    append html "<pre>\n"
    foreach l $list {
	switch -- [llength $l] {
	    8 {set offset 4}
	    9 {set offset 5}
	    10 {set offset 4}
	    11 {set offset 5}
	    default {set offset 5}
	}

	set ii [lindex $l [expr $offset+3]]
	switch -- [string range $l 0 0] {
	    d {
		set new "<a href=\"ftp://$host$path$ii/\">$ii</A>"
	    }
	    l {
		set new "<a href=\"ftp://$host$path$ii\">$ii</A>"
	    }
	    default {
		set new "<a href=\"ftp://$host$path$ii\">$ii</A>"
	    }
	}

	regsub $ii $l $new l
	append html "$l\n"
    }
    append html "</pre>\n"
    append html "</hr>\n"
    append html "</body>\n"

    return $html
}

proc HVFileHtmlList {path list} {
    global debug
    if {$debug(tcl,hv)} {
	puts stderr "HVFileHtmlList $path"
    }

    if {[string range $path end end] != "/"} {
	append path {/}
    }

    set html {}
    append html "<html>\n"
    append html "<head>\n"
    append html "<title>Index of $path</title>\n"
    append html "</head>\n"
    append html "<body>\n"
    append html "<h1>Index on $path</h1>\n"
    append html "<hr>\n"
    append html "<pre>\n"
    foreach l $list {
	switch -- [llength $l] {
	    8 {set offset 4}
	    9 {set offset 5}
	    10 {set offset 4}
	    11 {set offset 5}
	    default {set offset 5}
	}

	set ii [lindex $l [expr $offset+3]]
	switch -- [string range $l 0 0] {
	    d {
		set new "<a href=\"file:$path$ii/\">$ii</A>"
	    }
	    l {
		set new "<a href=\"file:$path$ii\">$ii</A>"
	    }
	    default {
		set new "<a href=\"file:$path$ii\">$ii</A>"
	    }
	}

	regsub $ii $l $new l
	append html "$l\n"
    }
    append html "</pre>\n"
    append html "</hr>\n"
    append html "</body>\n"

    return $html
}

proc HVDirList {path} {
    global debug
    if {$debug(tcl,hv)} {
	puts stderr "HVDirList $path"
    }
    return [split [exec ls -l $path] \n]
}

proc HVSetURL {varname url query fragment} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,hv)} {
	puts stderr "HVSetURL $url $query $fragment"
    }

    set var(url) $url
    set var(query) $query
    set var(fragment) $fragment
}

proc HVSetResult {varname code mime} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,hv)} {
	puts stderr "HVSetResult $code $mime"
    }

    set var(code) $code
    set var(meta) {}
    set var(mime) $mime
    set var(mime,param) {}
    set var(cache) 0
    set var(cache,images) 1
    set var(expire) 0
    set var(encoding) {}
    set var(transfer) {}
    set var(refresh,time) 0
    set var(refresh,url) {}
    set var(refresh,id) 0
}

proc HVSetData {varname data fn} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,hv)} {
	puts stderr "HVSetData $fn"
    }

    set var(data) $data
    set var(text) {}
    set var(fn) "$fn"
}

proc HVSetAnalysis {varname aa which ii} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,hv)} {
	puts stderr "HVSetAnalysis"
    }

    set var(analysis) $aa
    set var(analysis,which) $which
    set var(analysis,i) $ii
}

proc HVClearAll {varname} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,hv)} {
	puts stderr "HVClearAll"
    }

    HVSetURL $varname {} {} {}
    HVSetResult $varname {} {}
    HVSetData $varname {} {}
    HVSetAnalysis $varname 0 {} 0
}

# CallBacks

proc HVImageCB {varname args} {
    upvar #0 $varname var
    global $varname

    global ds9

    global debug
    if {$debug(tcl,hv)} {
	puts stderr "HVImageCB $varname args: $args"
    }

    set url [lindex $args 0]
    if {$debug(tcl,hv)} {
	puts stderr "HVImageCB url: $url"
    }

    # do we have anything?
    if {[string length $url] == 0} {
	return
    }

    # do we have a width/height?
    set aa [lindex $args 3]
    set width [HVattrs width $aa 0]
    set height [HVattrs height $aa 0]
    set src [HVattrs src $aa 0]

    # check for percent (100%) in width/height
    if {![string is integer $width]} {
	set width 0
    }
    if {![string is integer $height]} {
	set height 0
    }

    if {$debug(tcl,hv)} {
	puts stderr "HVImageCB src: $width $height $src"
    }

    # we have a problem in that htmlwidget will not properly resolve a windows
    # file name, there for we may have a bad file name url
    # double check with the src attribute
    global tcl_platform
    switch $tcl_platform(platform) {
	unix {}
	windows {
	    ParseURL $url r

	    switch -- $r(scheme) {
		{} -
		file {
		    if {![file exists $url]} {
			# bad, try src
			if {[file exists $src]} {
			    set url $src
			}
		    }
		}
	    }
	}
    }

    set img [HVImageURL $varname $url $width $height]

    if {[string length $img] != 0} {
	return $img
    } else {
	if {$debug(tcl,hv)} {
	    puts stderr "HVImageCB FAIL $url"
	}
	return $var(images,gray)
    }
}

proc HVImageURL {varname url width height} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,hv)} {
	puts stderr "HVImageURL $varname $url $width $height"
    }

    # do we already have the image?
    if {[info exists ${varname}(images,$url)]} {
	if {$debug(tcl,hv)} {
	    puts stderr "HVImageURL found image a $url"
	}
	return $var(images,$url)
    }

    ParseURL $url r

    set fn {}
    switch -- $r(scheme) {
	{} -
	file {
	    if {[file exists $r(path)]} {
		catch {image create photo -file $r(path)} img
	    }
	}
	ftp {
	    set fn [tmpnam [file extension $r(path)]]
	    set ftp [ftp::Open $r(authority) "ftp" "-ds9@" -mode passive]
	    if {$ftp > -1} {
		set ftp::VERBOSE $debug(tcl,ftp)
		set "ftp::ftp${ftp}(Output)" FTPLog
		ftp::Type $ftp binary
		if {[ftp::Get $ftp $r(path) "$fn"]} {
		    ftp::Close $ftp

		    if {[file size "$fn"] == 0} {
			catch {file delete -force "$fn"}
			return {}
		    }
		    if {[catch {image create photo -file "$fn"} img]} {
			catch {file delete -force "$fn"}
			return {}
		    }
		}
	    }
	}
	http -
	https {
	    set ch {}

	    set fn [tmpnam [file extension $r(path)]]

	    for {set ii 5} {$ii>0} {incr ii -1} {
		if {[catch {open "$fn" w} ch]} {
		    HVError $varname "[msgcat::mc {Unable to open file}] $fn"
		    return {}
		}

		global ihttp
		if {[catch {set token \
			       [http::geturl $url \
				    -timeout $ihttp(timeout) \
				    -progress [list HVProgress $varname] \
				    -channel $ch \
				    -binary 1 \
				    -headers "[HVHTTPHeader $varname]" \
				   ]}]} {

		    # if there is a problem, just bail
		    set ii 0
		    continue
		}

		# reset errorInfo (may be set in http::geturl)
		global errorInfo
		set errorInfo {}

		catch {close $ch}

		upvar #0 $token t
		set code [http::ncode $token]
		set meta $t(meta)

		# result?
		switch -- $code {
		    200 -
		    203 -
		    503 {set ii 0}
		
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
				if {$debug(tcl,hv)} {
				    puts stderr "HVImageURL redirect $code to $value"
				}
				# clean up and resubmit
				set url $value
				http::cleanup $token
				catch {file delete -force "$fn"}
			    }
			}
		    }

		    default {
			# in general, we don't want to know about this
			if {$debug(tcl,hv)} {
			    puts stderr "HVImageURL HTTP Error: $code"
			}
			set ii 0
		    }
		}
	    }

	    catch {http::cleanup $token}

	    if {[file size "$fn"] == 0} {
		catch {file delete -force "$fn"}
		return {}
	    }
	    if {[catch {image create photo -file "$fn"} img]} {
		catch {file delete -force "$fn"}
		return {}
	    }
	}
    }

    # do we have an img?
    if {![info exists img]} {
	return {}
    }
    if {$debug(tcl,hv)} {
	puts stderr "HVImageURL got image $img"
    }

    # adjust image size if needed
    if {$width != 0 || $height != 0} {
	set iw [image width $img]
	set ih [image height $img]

	set doit 1
	# check for one dimension of 0. calculate to maintain aspect ratio
	if {$width == 0} {
	    set width [expr $iw*$height/$ih]

	    # see if we have a bad resample dimension
	    set wf [expr double($iw)*$height/$ih]
	    if {$width != $wf} {
		if {$debug(tcl,hv)} {
		    puts stderr "HVImageURL abort resample image $img width $wf"
		}
		set doit 0
	    }
	}
	if {$height == 0} {
	    set height [expr $ih*$width/$iw]

	    # see if we have a bad resample dimension
	    set hf [expr double($ih)*$width/$iw]
	    if {$height != $hf} {
		if {$debug(tcl,hv)} {
		    puts stderr \
			"HVImageURL abort resample image $img height $hf"
		}
		set doit 0
	    }
	}

	# check to resample
	if {$doit && ($width != $iw || $height != $ih)} {
	    if {$debug(tcl,hv)} {
		puts stderr "HVImageURL resample image $iw->$width $ih->$height"
	    }

	    set img2 \
		[image create photo -width $width -height $height]
	    if {[catch {blt::winop image resample $img $img2 box} ]} {
		# just use existing img
		if {$debug(tcl,hv)} {
		    puts stderr "HVImageURL error resample image $img"
		}
	    } else {
		set tmp $img
		set img $img2
		catch {image delete $tmp}
	    }
	}
    }

    # delete any tmp files
    if {"$fn" != {}} {
	catch {file delete -force "$fn"}
    }

    if {$var(cache,images)} {
	set var(images,$url) $img
    }

    return $img
}

proc HVFontCB {varname sz args} {
    upvar #0 $varname var
    global $varname

    global ds9

    global debug
    if {$debug(tcl,hv)} {
	puts stderr "HVFontCB $varname $sz $args"
    }

    set family $var(font)
    set size $var(font,size)
    set weight $var(font,weight)
    set slant $var(font,slant)

    global ds9
    foreach ff [concat [lindex $args 0]] {
	switch -- $ff {
	    fixed {
		set family $ds9(courier)
		set sz [expr $sz-1]
	    }
	    bold {set weight bold}
	    italic {set slant italic}
	}
    }
    
    switch -- $sz {
	0 {incr size -3}
	1 {incr size -2}
	2 {incr size -1}
	3 {}
	4 {incr size 6}
	5 {incr size 12}
	6 {incr size 24}
	7 {incr size 36}
    }

    if {$debug(tcl,hv)} {
	puts stderr "HVFontCB \{$family\} $size $weight $slant"
    }
    return "\{$family\} $size $weight $slant"
}

proc HVNoScriptCB {varname n tag args} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,hv)} {
#	puts stderr "HVNoScriptCB $varname $n $tag $args"
    }
}

proc HVScriptCB {varname args} {
    upvar #0 $varname var

    global debug
    if {$debug(tcl,hv)} {
#	puts stderr "HVScriptCB $varname $args"
    }
}

proc HVFrameCB {varname args} {
    upvar #0 $varname var
    global $varname

    if {$debug(tcl,hv)} {
	puts stderr "HVFrameCB $varname $args"
    }
}

proc HVAppletCB {varname w args} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,hv)} {
	puts stderr "HVAppletCB $varname $w $args"
    }
}

proc HVParseMimeParam {varname key} {
    upvar #0 $varname var
    global $varname

    foreach {pp} [split $var(mime,param) {;}] {
	set id [string first {=} $pp]
	set name [string trim [string range $pp 0 [expr $id-1]]]
	set value [string trim [string range $pp [expr $id+1] end]]
	if {[string equal -nocase $name $key]} {
	    return [string trim $value {"'}]
	}
    }

    return {}
}
