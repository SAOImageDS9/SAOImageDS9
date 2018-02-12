#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

# SAMP

proc CATVOTURL {url catalog title} {
    if {[string length $url] == 0} {
	return
    }

    ParseURL $url r
    switch -- $r(scheme) {
	ftp {CATVOTFTP $r(authority) $r(path)}
	file {CATVOTFile $r(path)}
	http -
	https -
	default {CATVOTHTTP $url $catalog $title}
    }
}

proc CATVOTFTP {host path} {
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
	    CATVOTFile $fn
	}

	ftp::Close $ftp

	if {[file exists $fn]} {
	    catch {file delete -force $fn}
	}
    }
}

proc CATVOTHTTP {url catalog title} {
    global icat

    CATDialog catvot {} $catalog $title none

    set varname [lindex $icat(cats) end]
    upvar #0 $varname var
    global $varname

    set ${varname}(query) {}
    set ${varname}(url) $url
    set ${varname}(proc,parser) VOTParse

    CATLoad $varname
}

proc CATVOTFile {fn} {
    global icat

    CATDialog catvot {} {} {} none
    if {$fn != {}} {
 	CATLoadFn [lindex $icat(cats) end] $fn VOTRead
    }
}

