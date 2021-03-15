#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc MarkerBaseDialog {varname} {
    upvar #0 $varname var
    global $varname

    set tt [$var(frame) get marker $var(id) type]
    switch -- [lindex $tt 1] {
	point {set type "[string totitle [lindex $tt 0]] [string totitle [lindex $tt 1]]"}
	{} {set type [string totitle [lindex $tt 0]]}
    }

    # variables - some may already be initialized (compass,ruler)
    if {![info exists var(system)]} {
	set rr [$var(frame) get wcs]
	set var(system) [lindex $rr 0]
	set var(sky) [lindex $rr 1]
	set var(skyformat) [lindex $rr 2]
    }
    AdjustCoordSystem $varname system

    # init
    MarkerBaseTextCB $varname
    MarkerBaseColorCB $varname
    MarkerBaseLineWidthCB $varname
    MarkerBasePropertyCB $varname
    MarkerBaseFontCB $varname
    $var(proc,coordCB) $varname

    # callbacks
    $var(frame) marker $var(id) callback delete MarkerBaseDeleteCB $varname
    $var(frame) marker $var(id) callback text MarkerBaseTextCB $varname
    $var(frame) marker $var(id) callback color MarkerBaseColorCB $varname
    $var(frame) marker $var(id) callback width MarkerBaseLineWidthCB $varname
    $var(frame) marker $var(id) callback property MarkerBasePropertyCB $varname
    $var(frame) marker $var(id) callback font MarkerBaseFontCB $varname

    # window
    Toplevel $var(top) $var(mb) 6 [msgcat::mc "$type"] \
	"$var(proc,close) $varname"

    # menus
    MarkerBaseMenu $varname
    MarkerBaseFileMenu $varname
    EditMenu $var(mb) $varname
    ColorMenu $var(mb).color $varname color [list MarkerBaseColor $varname]
    WidthDashMenu $var(mb).width $varname linewidth dash \
	[list MarkerBaseLineWidth $varname] \
	[list MarkerBaseProperty $varname dash]
    MarkerBasePropertyMenu $varname
    FontMenu $var(mb).font $varname font font,size font,weight \
	font,slant [list MarkerBaseFont $varname]

    # Param
    set f [ttk::frame $var(top).param]
    ttk::label $f.tid -text [msgcat::mc {Number}]
    ttk::label $f.id -text "$var(id)"
    ttk::label $f.ttext -text [msgcat::mc {Text}]
    ttk::entry $f.text -textvariable ${varname}(text) -width 45
    grid $f.tid $f.id -padx 2 -pady 2 -sticky w
    grid $f.ttext $f.text - - - -padx 2 -pady 2 -sticky w

    # Buttons
    set f [ttk::frame $var(top).buttons]
    ttk::button $f.apply -text [msgcat::mc {Apply}] \
	-command "$var(proc,apply) $varname"
    ttk::button $f.close -text [msgcat::mc {Close}] \
	-command "$var(proc,close) $varname"
    pack $f.apply $f.close -side left -expand true -padx 2 -pady 4

    bind $var(top) <Return> "$var(proc,apply) $varname"

    # Fini
    ttk::separator $var(top).sep -orient horizontal
    pack $var(top).buttons $var(top).sep -side bottom -fill x
    pack $var(top).param -side top -fill both -expand true
}

# actions

proc MarkerBaseClose {varname} {
    upvar #0 $varname var
    global $varname

    $var(frame) marker $var(id) delete callback delete MarkerBaseDeleteCB
    $var(frame) marker $var(id) delete callback text MarkerBaseTextCB
    $var(frame) marker $var(id) delete callback color MarkerBaseColorCB
    $var(frame) marker $var(id) delete callback width MarkerBaseLineWidthCB
    $var(frame) marker $var(id) delete callback property MarkerBasePropertyCB
    $var(frame) marker $var(id) delete callback font MarkerBaseFontCB

    MarkerBaseDeleteCB $varname

    unset $varname
}

proc MarkerBaseApply {varname} {
    upvar #0 $varname var
    global $varname

    $var(frame) marker $var(id) text \{$var(text)\}

    UpdateRegionMenu
}

proc MarkerBaseColor {varname} {
    upvar #0 $varname var
    global $varname

    $var(frame) marker $var(id) color "{$var(color)}"
}

proc MarkerBaseLineWidth {varname} {
    upvar #0 $varname var
    global $varname

    $var(frame) marker $var(id) width $var(linewidth)
}

proc MarkerBaseProperty {varname prop} {
    upvar #0 $varname var
    global $varname

    $var(frame) marker $var(id) property $prop $var($prop)
}

proc MarkerBaseFont {varname} {
    upvar #0 $varname var
    global $varname

    $var(frame) marker $var(id) font \
	\"$var(font) $var(font,size) $var(font,weight) $var(font,slant)\"
}

# callbacks

proc MarkerBaseDeleteCB {varname {dummy {}}} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,marker)} {
	puts stderr "MarkerBaseDeleteCB"
    }

    # variables
    foreach m [array names marker] {
	set mm [split $m ,]
	if {[lindex $mm 0] == $var(frame) && [lindex $mm 1] == $var(id)} {
	    unset marker($m)
	}
    }

    # destroy the window and menubar
    if {[winfo exists $var(top)]} {
	destroy $var(top)
	destroy $var(mb)
    }
}

proc MarkerBaseTextCB {varname {dummy {}}} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,marker)} {
	puts stderr "MarkerBaseTextCB"
    }

    set var(text) [$var(frame) get marker $var(id) text]
}

proc MarkerBaseColorCB {varname {dummy {}}} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,marker)} {
	puts stderr "MarkerBaseColorCB"
    }

    set var(color) [$var(frame) get marker $var(id) color]
}

proc MarkerBaseLineWidthCB {varname {dummy {}}} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,marker)} {
	puts stderr "MarkerBaseLineWidthCB"
    }

    set var(linewidth) [$var(frame) get marker $var(id) width]
}

proc MarkerBasePropertyCB {varname {dummy {}}} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,marker)} {
	puts stderr "MarkerBasePropertyCB"
    }

    set var(dash) [$var(frame) get marker $var(id) property dash]
    set var(fixed) [$var(frame) get marker $var(id) property fixed]
    set var(edit) [$var(frame) get marker $var(id) property edit]
    set var(move) [$var(frame) get marker $var(id) property move]
    set var(rotate) [$var(frame) get marker $var(id) property rotate]
    set var(delete) [$var(frame) get marker $var(id) property delete]
    set var(include) [$var(frame) get marker $var(id) property include]
    set var(source) [$var(frame) get marker $var(id) property source]
}

proc MarkerBaseFontCB {varname {dummy {}}} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,marker)} {
	puts stderr "MarkerBaseFontCB"
    }

    set f [$var(frame) get marker $var(id) font]

    set var(font) [lindex $f 0]
    set var(font,size) [lindex $f 1]
    set var(font,weight) [lindex $f 2]
    set var(font,slant) [lindex $f 3]
}

proc MarkerBaseCoordCB {varname {dummy {}}} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,marker)} {
	puts stderr "MarkerBaseCoordCB"
    }

    AdjustCoordSystem $varname system
}

# menus

proc MarkerBaseMenu {varname} {
    upvar #0 $varname var
    global $varname

    $var(mb) add cascade -label [msgcat::mc {File}] -menu $var(mb).file
    $var(mb) add cascade -label [msgcat::mc {Edit}] -menu $var(mb).edit
    $var(mb) add cascade -label [msgcat::mc {Color}] -menu $var(mb).color
    $var(mb) add cascade -label [msgcat::mc {Width}] -menu $var(mb).width
    $var(mb) add cascade -label [msgcat::mc {Property}] \
	-menu $var(mb).properties
    $var(mb) add cascade -label [msgcat::mc {Font}] -menu $var(mb).font
}

proc MarkerBaseFileMenu {varname} {
    upvar #0 $varname var
    global $varname

    global ds9
    
    ThemeMenu $var(mb).file
    $var(mb).file add command -label [msgcat::mc {Apply}] \
	-command "$var(proc,apply) $varname"
    $var(mb).file add separator
    $var(mb).file add command -label [msgcat::mc {Close}] \
	-command "$var(proc,close) $varname" -accelerator "${ds9(ctrl)}W"

    bind $var(top) <<Close>> [list $var(proc,close) $varname]
}

proc MarkerBasePropertyMenu {varname} {
    upvar #0 $varname var
    global $varname

    ThemeMenu $var(mb).properties
    $var(mb).properties add checkbutton -label [msgcat::mc {Fixed in Size}] \
	-variable ${varname}(fixed) \
	-command "MarkerBaseProperty $varname fixed"
    $var(mb).properties add separator
    $var(mb).properties add checkbutton -label [msgcat::mc {Can Edit}] \
	-variable ${varname}(edit) \
	-command "MarkerBaseProperty $varname edit"
    $var(mb).properties add checkbutton -label [msgcat::mc {Can Move}] \
	-variable ${varname}(move) \
	-command "MarkerBaseProperty $varname move"
    $var(mb).properties add checkbutton -label [msgcat::mc {Can Rotate}] \
	-variable ${varname}(rotate) \
	-command "MarkerBaseProperty $varname rotate"
    $var(mb).properties add checkbutton -label [msgcat::mc {Can Delete}] \
	-variable ${varname}(delete) \
	-command "MarkerBaseProperty $varname delete"
    $var(mb).properties add separator
    $var(mb).properties add radiobutton -label [msgcat::mc {Include}] \
	-variable ${varname}(include) -value 1 \
	-command "MarkerBaseProperty $varname include"
    $var(mb).properties add radiobutton -label [msgcat::mc {Exclude}] \
	-variable ${varname}(include) -value 0 \
	-command "MarkerBaseProperty $varname include"
    $var(mb).properties add separator
    $var(mb).properties add radiobutton -label [msgcat::mc {Source}] \
	-variable ${varname}(source) -value 1 \
	-command "MarkerBaseProperty $varname source"
    $var(mb).properties add radiobutton -label [msgcat::mc {Background}] \
	-variable ${varname}(source) -value 0 \
	-command "MarkerBaseProperty $varname source"
}
