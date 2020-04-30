#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc DebugDef {} {
    global debug

    set debug(tcl,events) 0
    set debug(tcl,update) 0
    set debug(tcl,idletasks) 0
    set debug(tcl,layout) 0
    set debug(tcl,info) 0
    set debug(tcl,marker) 0
    set debug(tcl,hv) 0
    set debug(tcl,cat) 0
    set debug(tcl,sia) 0
    set debug(tcl,fp) 0
    set debug(tcl,samp) 0
    set debug(tcl,grid) 0
    set debug(tcl,restore) 0
    set debug(tcl,http) 0
    set debug(tcl,ftp) 0
    set debug(tcl,xpa) 0
    set debug(tcl,image) 0

    set debug(tksao,mosaic) 0
    set debug(tksao,parser) 0
    set debug(tksao,perf) 0
    set debug(tksao,wcs) 0
    set debug(tksao,bin) 0
    set debug(tksao,block) 0
    set debug(tksao,compress) 0
    set debug(tksao,gz) 0
    set debug(tksao,rgb) 0
    set debug(tksao,crop) 0

    set debug(iis) 0
}

proc Debug {which varname} {
    upvar $varname var
    global current

    if {$current(frame) != {}} {
	$current(frame) debug $which $var
    }
}

proc DebugMenu {} {
    global ds9
    global debug

    if {[winfo exists $ds9(mb).debug]} {
	return
    }

    $ds9(mb) add cascade -label {Debug} -menu $ds9(mb).debug

    ThemeMenu $ds9(mb).debug
    $ds9(mb).debug add cascade -label {Tcl} -menu $ds9(mb).debug.tcl
    $ds9(mb).debug add cascade -label {TKSAO} -menu $ds9(mb).debug.tksao
    $ds9(mb).debug add cascade -label {IIS} -menu $ds9(mb).debug.iis

    ThemeMenu $ds9(mb).debug.tcl
    $ds9(mb).debug.tcl add checkbutton -label {Events} \
	-variable debug(tcl,events)
    $ds9(mb).debug.tcl add checkbutton -label {Update} \
	-variable debug(tcl,update)
    $ds9(mb).debug.tcl add checkbutton -label {Idletasks} \
	-variable debug(tcl,idletasks)
    $ds9(mb).debug.tcl add checkbutton -label {Layout} \
	-variable debug(tcl,layout)
    $ds9(mb).debug.tcl add checkbutton -label {Info} \
	-variable debug(tcl,info)
    $ds9(mb).debug.tcl add checkbutton -label {Marker} \
	-variable debug(tcl,marker)
    $ds9(mb).debug.tcl add checkbutton -label {HV} \
	-variable debug(tcl,hv)
    $ds9(mb).debug.tcl add checkbutton -label {Catalog} \
	-variable debug(tcl,cat)
    $ds9(mb).debug.tcl add checkbutton -label {SIA} \
	-variable debug(tcl,sia)
    $ds9(mb).debug.tcl add checkbutton -label {Footprint} \
	-variable debug(tcl,fp)
    $ds9(mb).debug.tcl add checkbutton -label {SAMP} \
	-variable debug(tcl,samp)
    $ds9(mb).debug.tcl add checkbutton -label {Grid} \
	-variable debug(tcl,grid)
    $ds9(mb).debug.tcl add checkbutton -label {Restore} \
	-variable debug(tcl,restore)
    $ds9(mb).debug.tcl add checkbutton -label {HTTP} \
	-variable debug(tcl,http)
    $ds9(mb).debug.tcl add checkbutton -label {FTP} \
	-variable debug(tcl,ftp)
    $ds9(mb).debug.tcl add checkbutton -label {XPA} \
	-variable debug(tcl,xpa)
    $ds9(mb).debug.tcl add checkbutton -label {IMAGE} \
	-variable debug(tcl,image)

    ThemeMenu $ds9(mb).debug.tksao
    $ds9(mb).debug.tksao add checkbutton -label {Mosaic} \
	-variable debug(tksao,mosaic) \
	-command "Debug mosaic debug(tksao,mosaic)"
    $ds9(mb).debug.tksao add checkbutton -label {TksaoParser} \
	-variable debug(tksao,parser) \
	-command "Debug parser debug(tksao,parser)"    
    $ds9(mb).debug.tksao add checkbutton -label {Perf} \
	-variable debug(tksao,perf) \
	-command "Debug perf debug(tksao,perf)"    
    $ds9(mb).debug.tksao add checkbutton -label {WCS} \
	-variable debug(tksao,wcs) \
	-command "Debug wcs debug(tksao,wcs)"    
    $ds9(mb).debug.tksao add checkbutton -label {Bin} \
	-variable debug(tksao,bin) \
	-command "Debug bin debug(tksao,bin)"    
    $ds9(mb).debug.tksao add checkbutton -label {Block} \
	-variable debug(tksao,block) \
	-command "Debug block debug(tksao,block)"    
    $ds9(mb).debug.tksao add checkbutton -label {Compress} \
	-variable debug(tksao,compress) \
	-command "Debug compress debug(tksao,compress)"    
    $ds9(mb).debug.tksao add checkbutton -label {GZ} \
	-variable debug(tksao,gz) \
	-command "Debug gz debug(tksao,gz)"    
    $ds9(mb).debug.tksao add checkbutton -label {RGB} \
	-variable debug(tksao,rgb) \
	-command "Debug rgb debug(tksao,rgb)"    
    $ds9(mb).debug.tksao add checkbutton -label {Crop} \
	-variable debug(tksao,crop) \
	-command "Debug crop debug(tksao,crop)"    

    ThemeMenu $ds9(mb).debug.iis
    $ds9(mb).debug.iis add checkbutton -label {IIS} \
	-variable debug(iis) -command IISDebug
}

proc DumpURL {varname} {
    upvar $varname r

    puts stderr "r(scheme)=$r(scheme)"
    puts stderr "r(authority)=$r(authority)"
    puts stderr "r(path)=$r(path)"
    puts stderr "r(query)=$r(query)"
    puts stderr "r(fragment)=$r(fragment)"
}

proc DumpCallStack {} {
    for {set x [expr [info level]-1]} {$x>0} {incr x -1} {
	puts stderr "$x: [info level $x]"
    }
}

proc DumpArray {varname} {
    upvar $varname var
    global $varname
    foreach f [array names $varname] {
	puts stderr "${varname}($f) = $var($f)"
    }
}

# Process Cmds

proc ProcessDebugTclCmd {varname iname} {
    upvar $varname var
    upvar $iname i

    # default debug dialog
    if {[info proc bgerror] != {}} {
	rename bgerror {}
    }

    global debug
    switch -- [string tolower [lindex $var $i]] {
	events {set debug(tcl,events) 1}
	update {set debug(tcl,update) 1}
	idletasks {set debug(tcl,idletasks) 1}
	layout {set debug(tcl,layout) 1}
	info {set debug(tcl,info) 1}
	marker {set debug(tcl,marker) 1}
	hv {set debug(tcl,hv) 1}
	cat {set debug(tcl,cat) 1}
	sia {set debug(tcl,sia) 1}
	fp {set debug(tcl,fp) 1}
	samp {set debug(tcl,samp) 1}
	grid {set debug(tcl,grid) 1}
	restore {set debug(tcl,restore) 1}
	http {set debug(tcl,http) 1}
	ftp {set debug(tcl,ftp) 1}
	xpa {set debug(tcl,xpa) 1}
	image {
	    set debug(tcl,hv) 1
	    set debug(tcl,http) 1
	    set debug(tcl,image) 1
	}
    }
}

proc ProcessDebugCmd {varname iname} {
    upvar $varname var
    upvar $iname i

    DebugMenu

    global debug
    switch -- [string tolower [lindex $var $i]] {
	mosaic {
	    set debug(tksao,mosaic) 1
	    Debug mosaic debug(tksao,mosaic)
	}
	tksaoparser -
	parser {
	    set debug(tksao,parser) 1
	    Debug parser debug(tksao,parser)
	}
	perf {
	    set debug(tksao,perf) 1
	    Debug perf debug(tksao,perf)
	}
	wcs {
	    set debug(tksao,wcs) 1
	    Debug wcs debug(tksao,wcs)
	}
	bin {
	    set debug(tksao,bin) 1
	    Debug bin debug(tksao,bin)
	}
	block {
	    set debug(tksao,block) 1
	    Debug block debug(tksao,block)
	}
	compress {
	    set debug(tksao,compress) 1
	    Debug compress debug(tksao,compress)
	}
	gz {
	    set debug(tksao,gz) 1
	    Debug gz debug(tksao,gz)
	}
	iis {
	    set debug(iis) 1
	    IISDebug
	}
	rgb {
	    set debug(tksao,rgb) 1
	    Debug rgb debug(tksao,rgb)
	}
	crop {
	    set debug(tksao,crop) 1
	    Debug crop debug(tksao,crop)
	}

	events -
	update -
	idletasks -
	layout -
	info -
	marker -
	watch -
	hv -
	cat -
	sia -
	fp -
	samp -
	grid -
	restore -
	http -
	ftp -
	xpa -
	image {}

	tclparser {
	    incr i
	    switch -- [string tolower [lindex $var $i]] {
		yes -
		true -
		on -
		1 -
		no -
		false -
		off -
		0 {}
		default {incr i -1}
	    }
	}
	default {incr i -1}
    }
}

