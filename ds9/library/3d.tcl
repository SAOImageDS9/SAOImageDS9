#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc 3DDef {} {
    global threed
    global ithreed
    global pthreed

    set ithreed(top) .threed
    set ithreed(mb) .threedmb
    set ithreed(status) 0

    set threed(az) 0
    set threed(el) 0
    set threed(scale) 1
    set threed(lock) 0

    set threed(method) mip
    set threed(background) none
    set threed(highlite) 1
    set threed(highlite,color) cyan
    set threed(border) 1
    set threed(border,color) blue
    set threed(compass) 0
    set threed(compass,color) green

    array set pthreed [array get threed]
    unset pthreed(az)
    unset pthreed(el)
}

# used by backup
proc 3DDialog {} {
    global threed
    global ithreed
    global ds9

    # see if we already have a window visible
    if {[winfo exists $ithreed(top)]} {
	raise $ithreed(top)
	return
    }

    # create the 3d window
    set w $ithreed(top)
    set mb $ithreed(mb)

    Toplevel $w $mb 6 [msgcat::mc {3D}] 3DDestroyDialog
    $mb add cascade -label [msgcat::mc {File}] -menu $mb.file
    $mb add cascade -label [msgcat::mc {Edit}] -menu $mb.edit
    $mb add cascade -label [msgcat::mc {Render}] -menu $mb.render
    $mb add cascade -label [msgcat::mc {Highlite}] -menu $mb.highlite
    $mb add cascade -label [msgcat::mc {Border}] -menu $mb.border
    $mb add cascade -label [msgcat::mc {Compass}] -menu $mb.compass

    menu $mb.file
    $mb.file add command -label [msgcat::mc {Apply}] -command 3DApplyDialog
    $mb.file add command -label [msgcat::mc {Reset}] -command 3DResetDialog
    $mb.file add separator
    $mb.file add command -label [msgcat::mc {Close}] -command 3DDestroyDialog

    EditMenu $mb ithreed

    menu $mb.render
    $mb.render add radiobutton -label [msgcat::mc {MIP}] \
	-variable threed(method) -value {mip} -command 3DRenderMethod 
    $mb.render add radiobutton -label [msgcat::mc {AIP}] \
	-variable threed(method) -value {aip} -command 3DRenderMethod 
    $mb.render add separator
    $mb.render add radiobutton -label [msgcat::mc {None}] \
	-variable threed(background) -value {none} -command 3DBackground
    $mb.render add radiobutton -label [msgcat::mc {Azimuth}] \
	-variable threed(background) -value {azimuth} -command 3DBackground
    $mb.render add radiobutton -label [msgcat::mc {Elevation}] \
	-variable threed(background) -value {elevation} -command 3DBackground

    menu $mb.highlite
    $mb.highlite add checkbutton -label [msgcat::mc {Show}] \
	-variable threed(highlite) -command 3DHighlite
    $mb.highlite add separator
    $mb.highlite add cascade -label [msgcat::mc {Color}] \
	-menu $mb.highlite.color
    ColorMenu $mb.highlite.color threed highlite,color 3DHighliteColor

    menu $mb.border
    $mb.border add checkbutton -label [msgcat::mc {Show}] \
	-variable threed(border) -command 3DBorder
    $mb.border add separator
    $mb.border add cascade -label [msgcat::mc {Color}] \
	-menu $mb.border.color
    ColorMenu $mb.border.color threed border,color 3DBorderColor

    menu $mb.compass
    $mb.compass add checkbutton -label [msgcat::mc {Show}] -variable threed(compass) -command 3DCompass
    $mb.compass add separator
    $mb.compass add cascade -label [msgcat::mc {Color}] -menu $mb.compass.color
    ColorMenu $mb.compass.color threed compass,color 3DCompassColor

    # Param
    set f [ttk::frame $w.param]
    slider $f.elslider -90 90 [msgcat::mc {Elevation}] threed(el) \
	[list 3DViewMotion]
    slider $f.azslider -180 180 [msgcat::mc {Azimuth}] threed(az) \
	[list 3DViewMotion]

    bind $f.elslider.slider <ButtonPress-1>   {3DViewButton}
    bind $f.elslider.slider <ButtonRelease-1> {3DViewRelease}
    bind $f.azslider.slider <ButtonPress-1>   {3DViewButton}
    bind $f.azslider.slider <ButtonRelease-1> {3DViewRelease}

    grid $f.azslider -padx 2 -pady 2 -sticky ew
    grid $f.elslider -padx 2 -pady 2 -sticky ew
    grid columnconfigure $f 0 -weight 1
    # for order of focus
    raise $f.elslider 

    # Scale
    set f [ttk::frame $w.scale]
    ttk::label $f.tscale -text [msgcat::mc {Z Axis Scale}]
    ttk::entry $f.scale -textvariable threed(scale) -width 7
    grid $f.tscale $f.scale -padx 2 -pady 2 -sticky ew

    # Status
    set f [ttk::frame $w.status]
    ttk::label $f.tstatus -text [msgcat::mc {Status}]
    ttk::progressbar $f.status -variable ithreed(status) -length 350
    grid $f.tstatus $f.status -padx 2 -pady 2 -sticky w

    # Buttons
    set f [ttk::frame $w.buttons]
    ttk::button $f.apply -text [msgcat::mc {Apply}] -command 3DApplyDialog
    ttk::button $f.reset -text [msgcat::mc {Reset}] -command 3DResetDialog
    ttk::button $f.close -text [msgcat::mc {Close}] -command 3DDestroyDialog
    pack $f.apply $f.reset $f.close -side left -expand true -padx 2 -pady 4

    # Fini
    ttk::separator $w.sep -orient horizontal
    ttk::separator $w.sep2 -orient horizontal
    ttk::separator $w.sep3 -orient horizontal
    pack $w.buttons $w.sep $w.status $w.sep2 -side bottom -fill x
    pack $w.param $w.sep3 $w.scale -side top -fill x

    Update3DDialog
}

proc 3DDestroyDialog {} {
    global threed
    global ithreed

    if {[winfo exists $ithreed(top)]} {
	destroy $ithreed(top)
	destroy $ithreed(mb)
    }
}

proc 3DApplyDialog {} {
    global threed
    global current
    global grid

    if {$current(frame) != {}} {
	$current(frame) 3d view $threed(az) $threed(el)
	$current(frame) 3d scale $threed(scale)
	if {$grid(view)} {
	    GridUpdateCurrent
	}
	Lock3DCurrent
    }
}

proc 3DResetDialog {} {
    global threed

    set threed(az) 0
    set threed(el) 0
    3DViewPoint
    set threed(scale) 1
    3DScale
    Lock3DCurrent
}

proc Update3DDialog {} {
    global threed
    global ithreed
    global current

    global debug
    if {$debug(tcl,update)} {
	puts stderr "Update3DDialog"
    }

    set w $ithreed(top)

    if {[winfo exists $ithreed(top)] && $current(frame) != {}} {
	set rr [$current(frame) get 3d view]
	set threed(az) [lindex $rr 0]
	set threed(el) [lindex $rr 1]
	set threed(scale) [$current(frame) get 3d scale]
	set threed(method) [$current(frame) get 3d method]
	set threed(background) [$current(frame) get 3d background]
	set threed(highlite) [$current(frame) get 3d highlite]
	set threed(highlite,color) [$current(frame) get 3d highlite color]
	set threed(border) [$current(frame) get 3d border]
	set threed(border,color) [$current(frame) get 3d border color]
	set threed(compass) [$current(frame) get 3d compass]
	set threed(compass,color) [$current(frame) get 3d compass color]
    }
}

proc 3DBackup {ch which} {
    puts $ch "$which 3d view [$which get 3d view]"
    puts $ch "$which 3d scale [$which get 3d scale]"
    puts $ch "$which 3d method [$which get 3d method]"
    puts $ch "$which 3d highlite [$which get 3d highlite]"
    puts $ch "$which 3d border [$which get 3d border]"
    puts $ch "$which 3d background [$which get 3d background]"
    # this must come after panto and blockto
    puts $ch "$which 3d view point [$which get 3d view point]"

}

proc 3DViewPoint {} {
    global threed
    global current
    global grid

    if {$current(frame) != {}} {
	$current(frame) 3d view $threed(az) $threed(el)
	if {$grid(view)} {
	    GridUpdateCurrent
	}
	Lock3DCurrent
    }
}

proc 3DViewButton {} {
    global threed
    global current

    if {$current(frame) != {}} {
	$current(frame) 3d view $threed(az) $threed(el)
	Lock3DCurrent
    }
}

proc 3DViewMotion {} {
    global threed
    global current

    if {$current(frame) != {}} {
	$current(frame) 3d view $threed(az) $threed(el)
	Lock3DCurrent
    }
}

proc 3DViewRelease {} {
    global threed
    global current

    if {$current(frame) != {}} {
	$current(frame) 3d view $threed(az) $threed(el)
	Lock3DCurrent
    }
}

proc 3DScale {} {
    global threed
    global current
    global grid

    if {$current(frame) != {}} {
	$current(frame) 3d scale $threed(scale)
	if {$grid(view)} {
	    GridUpdateCurrent
	}
	Lock3DCurrent
    }
}

proc 3DRenderMethod {} {
    global threed
    global current

    if {$current(frame) != {}} {
	$current(frame) 3d method $threed(method)
    }
}

proc 3DHighlite {} {
    global threed
    global current

    if {$current(frame) != {}} {
	$current(frame) 3d highlite $threed(highlite)
    }
}

proc 3DHighliteColor {} {
    global threed
    global current

    if {$current(frame) != {}} {
	$current(frame) 3d highlite color $threed(highlite,color)
    }
}

proc 3DBorder {} {
    global threed
    global current

    if {$current(frame) != {}} {
	$current(frame) 3d border $threed(border)
    }
}

proc 3DBorderColor {} {
    global threed
    global current

    if {$current(frame) != {}} {
	$current(frame) 3d border color $threed(border,color)
    }
}

proc 3DCompass {} {
    global threed
    global current

    if {$current(frame) != {}} {
	$current(frame) 3d compass $threed(compass)
    }
}

proc 3DCompassColor {} {
    global threed
    global current

    if {$current(frame) != {}} {
	$current(frame) 3d compass color $threed(compass,color)
    }
}

proc 3DBackground {} {
    global threed
    global current

    if {$current(frame) != {}} {
	$current(frame) 3d background $threed(background)
    }
}

proc Match3DCurrent {} {
    global current

    if {$current(frame) != {}} {
	Match3DView $current(frame)
    }
}

proc Match3DView {which} {
    global ds9
    global threed
    
    set rr [$which get 3d view]
    set az [lindex $rr 0]
    set el [lindex $rr 1]
    set scale [$which get 3d scale]

    foreach ff $ds9(frames) {
	if {$ff != $which} {
	    $ff 3d view $az $el
	    $ff 3d scale $scale
	}
    }
}

proc Lock3DCurrent {} {
    global current

    if {$current(frame) != {}} {
	Lock3DView $current(frame)
    }
}

proc Lock3DView {which} {
    global threed

    if {$threed(lock)} {
	Match3DView $which
    }
}

# Prefs

proc PrefsDialog3d {} {
    global dprefs

    set w $dprefs(tab)

    $dprefs(list) insert end [msgcat::mc {3D}]
    lappend dprefs(tabs) [ttk::frame $w.threed]

    set f [ttk::labelframe $w.threed.misc -text [msgcat::mc {Render}]]
    ttk::label $f.tmethod -text [msgcat::mc {Method}]
    ttk::menubutton $f.method -textvariable pthreed(method) \
	-menu $f.method.menu
    ttk::label $f.tbackground -text [msgcat::mc {Background}]
    ttk::menubutton $f.background -textvariable pthreed(background) \
	-menu $f.background.menu
   
    grid $f.tmethod $f.method -padx 2 -pady 2 -sticky w
    grid $f.tbackground $f.background -padx 2 -pady 2 -sticky w

    set m $f.method.menu
    menu $m
    $m add radiobutton -label [msgcat::mc {MIP}] \
	-variable pthreed(method) -value {mip}
    $m add radiobutton -label [msgcat::mc {AIP}] \
	-variable pthreed(method) -value {aip}

    set m $f.background.menu
    menu $m
    $m add radiobutton -label [msgcat::mc {None}] \
	-variable pthreed(background) -value {none}
    $m add radiobutton -label [msgcat::mc {Azimuth}] \
	-variable pthreed(background) -value {azimuth}
    $m add radiobutton -label [msgcat::mc {Elevation}] \
	-variable pthreed(background) -value {elevation}

    set f [ttk::labelframe $w.threed.highlite -text [msgcat::mc {Highlite}]]
    ttk::checkbutton $f.show -text [msgcat::mc {Show}] \
	-variable pthreed(highlite)
    ttk::label $f.tcolor -text [msgcat::mc {Color}]
    ColorMenuButton $f.color pthreed highlite,color {}

    grid $f.show -padx 2 -pady 2 -sticky w
    grid $f.tcolor $f.color -padx 2 -pady 2 -sticky w

    set f [ttk::labelframe $w.threed.border -text [msgcat::mc {Border}]]
    ttk::checkbutton $f.show -text [msgcat::mc {Show}] \
	-variable pthreed(border)
    ttk::label $f.tcolor -text [msgcat::mc {Color}]
    ColorMenuButton $f.color pthreed border,color {}

    grid $f.show -padx 2 -pady 2 -sticky w
    grid $f.tcolor $f.color -padx 2 -pady 2 -sticky w

#    set f [ttk::labelframe $w.threed.compass -text [msgcat::mc {Compass}]]
#    ttk::checkbutton $f.show -text [msgcat::mc {Show}] -variable pthreed(compass)
#    ttk::label $f.tcolor -text [msgcat::mc {Color}]
#    ColorMenuButton $f.color pthreed compass,color {}

    grid $f.show -padx 2 -pady 2 -sticky w
    grid $f.tcolor $f.color -padx 2 -pady 2 -sticky w

    pack $w.threed.misc $w.threed.highlite $w.threed.border \
	-side top -fill both -expand true
}

proc Process3DCmd {varname iname} {
    upvar $varname var
    upvar $iname i

    global threed
 
    3DDialog

    switch -- [string tolower [lindex $var $i]] {
	open {}
	close {3DDestroyDialog}
	az {
	    incr i
	    set threed(az) [lindex $var $i]
	    3DViewPoint
	}
	el {
	    incr i
	    set threed(el) [lindex $var $i]
	    3DViewPoint
	}
	view -
	vp {
	    incr i
	    set threed(az) [lindex $var $i]
	    incr i
	    set threed(el) [lindex $var $i]
	    3DViewPoint
	}
	scale {
	    incr i
	    set threed(scale) [lindex $var $i]
	    3DScale
	}
	method {
	    incr i
	    set threed(method) [lindex $var $i]
	    3DRenderMethod
	}
	background {
	    incr i
	    set threed(background) [lindex $var $i]
	    3DBackground
	}
	highlite {
	    incr i
	    switch [string tolower [lindex $var $i]] {
		color {
		    incr i
		    set threed(highlite,color) [lindex $var $i]
		    3DHighliteColor
		}
		default {
		    set threed(highlite) [FromYesNo [lindex $var $i]]
		    3DHighlite
		}
	    }
	}
	border {
	    incr i
	    switch [string tolower [lindex $var $i]] {
		color {
		    incr i
		    set threed(border,color) [lindex $var $i]
		    3DBorderColor
		}
		default {
		    set threed(border) [FromYesNo [lindex $var $i]]
		    3DBorder
		}
	    }
	}
	compass {
	    incr i
	    switch [string tolower [lindex $var $i]] {
		color {
		    incr i
		    set threed(compass,color) [lindex $var $i]
		    3DCompassColor
		}
		default {
		    set threed(compass) [FromYesNo [lindex $var $i]]
		    3DCompass
		}
	    }
	}
	match {Match3DCurrent}
	lock {
	    incr i
	    if {!([string range [lindex $var $i] 0 0] == "-")} {
		set threed(lock) [FromYesNo [lindex $var $i]]
	    } else {
		set threed(lock) 1
		incr i -1
	    }
	    Lock3DCurrent
	}
	default {Create3DFrame; incr i -1}
    }
}

proc ProcessSend3DCmd {proc id param} {
    global threed

    switch -- [string tolower [lindex $param 0]] {
	az {$proc $id "$threed(az)\n"}
	el {$proc $id "$threed(el)\n"}
	view -
	vp {$proc $id "$threed(az) $threed(el)\n"}
	scale {$proc $id "$threed(scale)\n"}
	method {$proc $id "$threed(method)\n"}
	background {$proc $id "$threed(background)\n"}
	lock {$proc $id [ToYesNo $threed(lock)]}
	highlite {
	    switch [string tolower [lindex $param 1]] {
		color {$proc $id "$threed(highlite,color)\n"}
		default {$proc $id [ToYesNo $threed(highlite)]}
	    }
	}
	border {
	    switch [string tolower [lindex $param 1]] {
		color {$proc $id "$threed(border,color)\n"}
		default {$proc $id [ToYesNo $threed(border)]}
	    }
	}
	compass {
	    switch [string tolower [lindex $param 1]] {
		color {$proc $id "$threed(compass,color)\n"}
		default {$proc $id [ToYesNo $threed(compass)]}
	    }
	}
    }
}
