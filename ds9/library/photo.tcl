#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc ImportPhotoFile {fn mode} {
    global loadParam

    set loadParam(file,type) photo
    set loadParam(file,mode) $mode
    set loadParam(load,type) photo

    # find stdin
    if {[string range $fn 0 4] == "stdin" || 
	[string range $fn 0 4] == "STDIN" ||
	[string range $fn 0 0] == "-"} {

	fconfigure stdin -translation binary -encoding binary
	if {[catch {image create photo -data [read -nonewline stdin]} ph]} {
	    Error [msgcat::mc {An error has occurred while loading}]
	    return
	}
	set loadParam(file,name) stdin
    } else {
	if {[catch {image create photo -file $fn} ph]} {
	    Error [msgcat::mc {An error has occurred while loading}]
	    return
	}
	set loadParam(file,name) $fn
    }
    set loadParam(var,name) $ph

    # mask not supported
    set loadParam(load,layer) {}

    ProcessLoad

    image delete $ph
}

proc ImportPhotoAlloc {path fn mode} {
    global loadParam

    set loadParam(file,type) photo
    set loadParam(file,mode) $mode
    set loadParam(load,type) photo

    if {[catch {image create photo -file $path} ph]} {
	Error [msgcat::mc {An error has occurred while loading}]
	return
    }
    set loadParam(file,name) $fn
    set loadParam(var,name) $ph

    # mask not supported
    set loadParam(load,layer) {}

    ProcessLoad

    image delete $ph
}

proc ImportPhotoSocket {ch fn mode} {
    global loadParam

    set loadParam(file,type) photo
    set loadParam(file,mode) $mode
    set loadParam(load,type) photo
    set loadParam(file,name) $fn

    fconfigure $ch -translation binary -encoding binary
    if {[catch {image create photo -data [read $ch]} ph]} {
	Error [msgcat::mc {An error has occurred while loading}]
	return 0
    }
    set loadParam(var,name) $ph

    # mask not supported
    set loadParam(load,layer) {}

    set rr [ProcessLoad 0]

    image delete $ph
    return $rr
}

proc ExportPhotoFile {fn format opt} {
    global export
    global current

    if {$fn == {}} {
	return
    }
    if {$current(frame) == {}} {
	return
    }
    if {![$current(frame) has fits]} {
	return
    }

    if {[catch {image create photo} ph]} {
	Error [msgcat::mc {An error has occurred while creating}]
	return
    }

    $current(frame) save photo $ph
    set ff $format
    switch -- $format {
	jpeg {
	    if {$opt == {}} {
		set opt $export(jpeg,quality)
	    }
	    set ff [list $format -quality $opt]
	}
	tiff {
	    if {$opt == {}} {
		set opt $export(tiff,compress)
	    }
	    set ff [list $format -compression $opt]
	}
    }
    if {[catch {$ph write $fn -format $ff}]} {
	Error [msgcat::mc {An error has occurred while saving}]
    }

    image delete $ph
}

proc ExportPhotoSocket {ch format opt} {
    global export
    global current

    if {$current(frame) == {}} {
	return
    }
    if {![$current(frame) has fits]} {
	return
    }

    if {[catch {image create photo} ph]} {
	Error [msgcat::mc {An error has occurred while creating}]
	return
    }

    $current(frame) save photo $ph

    fconfigure $ch -translation binary -encoding binary
    set ff $format
    switch -- $format {
	jpeg {
	    if {$opt == {}} {
		set opt $export(jpeg,quality)
	    }
	    set ff [list $format -quality $opt]
	}
	tiff {
	    if {$opt == {}} {
		set opt $export(tiff,compress)
	    }
	    set ff [list $format -compression $opt]
	}
    }
    if {[catch {$ph data -format $ff} data]} {
	Error [msgcat::mc {An error has occurred while saving}]
	return
    }

    switch -- $format {
	jpeg -
	tiff {
	    puts -nonewline $ch [base64::decode $data]
	}
	default {
	    puts -nonewline $ch $data
	}
    }

    image delete $ph
}

# Process Cmds

proc ProcessGIFCmd {varname iname ch fn} {
    upvar $varname var
    upvar $iname i

    ProcessPhotoCmd $varname $iname $ch $fn
}

proc ProcessJPEGCmd {varname iname ch fn} {
    upvar $varname var
    upvar $iname i

    ProcessPhotoCmd $varname $iname $ch $fn
}

proc ProcessPNGCmd {varname iname ch fn} {
    upvar $varname var
    upvar $iname i

    ProcessPhotoCmd $varname $iname $ch $fn
}

proc ProcessTIFFCmd {varname iname ch fn} {
    upvar $varname var
    upvar $iname i

    ProcessPhotoCmd $varname $iname $ch $fn
}

proc ProcessPhotoCmd {varname iname ch fn} {
    upvar 2 $varname var
    upvar 2 $iname i

    global parse
    set parse(ch) $ch
    set parse(fn) $fn

    photo::YY_FLUSH_BUFFER
    photo::yy_scan_string [lrange $var $i end]
    photo::yyparse
    incr i [expr $photo::yycnt-1]
}

proc PhotoCmdLoad {param mode} {
    global parse

    if {$parse(ch) != {}} {
	# xpa
	global tcl_platform
	switch $tcl_platform(os) {
	    Linux -
	    Darwin -
	    SunOS {
		if {![ImportPhotoSocket $parse(ch) $param $mode]} {
		    InitError xpa
		    ImportPhotoFile $param $mode
		}
	    }
	    {Windows NT} {ImportPhotoFile $param $mode}
	}
    } else {
	# comm
	if {$parse(fn) != {}} {
	    ImportPhotoAlloc $parse(fn) $param $mode
	} else {
	    ImportPhotoFile $param $mode
	}
    }
    FinishLoad
}

proc ProcessSendGIFCmd {proc id param sock fn} {
    ProcessSendPhotoCmd gif $proc $id $param $sock $fn
}

proc ProcessSendJPEGCmd {proc id param sock fn} {
    ProcessSendPhotoCmd jpeg $proc $id $param $sock $fn
}

proc ProcessSendPNGCmd {proc id param sock fn} {
    ProcessSendPhotoCmd png $proc $id $param $sock $fn
}

proc ProcessSendTIFFCmd {proc id param sock fn} {
    ProcessSendPhotoCmd tiff $proc $id $param $sock $fn
}

proc ProcessSendPhotoCmd {format proc id param sock fn} {
    global current
    global export

    if {$current(frame) == {}} {
	return
    }

    set opt [string tolower [lindex $param 0]]
    if {$sock != {}} {
	# xpa
	global tcl_platform
	switch $tcl_platform(os) {
	    Linux -
	    Darwin -
	    SunOS {ExportPhotoSocket $sock $format $opt}
	    {Windows NT} {}
	}
    } elseif {$fn != {}} {
	# comm
	ExportPhotoFile $fn $format $opt
	$proc $id {} $fn
    }
}
