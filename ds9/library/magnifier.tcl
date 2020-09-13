#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc CreateMagnifier {} {
    global imagnifier
    global ds9

    set ds9(magnifier) [canvas $ds9(panel).mag \
			    -width $imagnifier(size) \
			    -height $imagnifier(size) \
			    -relief groove \
			    -borderwidth 2 \
			    -highlightthickness 0 \
			    -insertofftime 0 \
			    -takefocus 0 \
			    -bg [ThemeTreeBackground] \
			   ]

    $ds9(magnifier) create magnifier$ds9(visual) \
	-width $imagnifier(size) \
	-height $imagnifier(size) \
	-command magnifier \
	-tag magnifier \
	-helvetica $ds9(helvetica) \
	-courier $ds9(courier) \
	-times $ds9(times) \
	-fg [ThemeTreeForeground] \
	-bg [ThemeTreeBackground]

    switch $ds9(wm) {
	x11 -
	win32 {bind $ds9(magnifier) <<ThemeChanged>> {ThemeConfigMagnifier %W}}
	aqua {}
    }
}

proc ThemeConfigMagnifier {w} {
    $w configure -bg [ThemeTreeBackground]
    $w itemconfigure magnifier -bg [ThemeTreeBackground]
}

proc MagnifierDef {} {
    global imagnifier
    global pmagnifier

    set imagnifier(size) 128

    # prefs only
    set pmagnifier(cursor) 1
    set pmagnifier(zoom) 4
    set pmagnifier(region) 1
    set pmagnifier(color) white
}

proc UpdateMagnifier {which x y} {
    global view

    if {$view(magnifier)} {
	$which magnifier update $x $y
    }
}

proc MagnifierFrameBackup {ch which} {
    global pmagnifier

    puts $ch "$which magnifier graphics $pmagnifier(region)"
    puts $ch "$which magnifier cursor $pmagnifier(cursor)"
    puts $ch "$which magnifier zoom $pmagnifier(zoom)"
    puts $ch "$which magnifier color $pmagnifier(color)"
}

# Prefs Cmds

proc MagnifierRegion {} {
    global pmagnifier
    global ds9
    
    foreach ff $ds9(frames) {
	$ff magnifier graphics $pmagnifier(region)
    }
}

proc MagnifierCursor {} {
    global pmagnifier
    global ds9
    
    foreach ff $ds9(frames) {
	$ff magnifier cursor $pmagnifier(cursor)
    }
}

proc MagnifierZoom {} {
    global pmagnifier
    global ds9

    foreach ff $ds9(frames) {
	$ff magnifier zoom $pmagnifier(zoom)
    }
}

proc MagnifierColor {} {
    global pmagnifier
    global ds9
    
    foreach ff $ds9(frames) {
	$ff magnifier color $pmagnifier(color)
    }
}

# Prefs

proc PrefsDialogMagnifier {} {
    global dprefs
    global pmagnifier

    set w $dprefs(tab)

    $dprefs(listbox) insert {} end -id [ttk::frame $w.magnifier] \
	-text [msgcat::mc {Magnifier}]

    set f [ttk::labelframe $w.magnifier.param -text [msgcat::mc {Magnifier}]]

    ttk::label $f.tshow -text [msgcat::mc {Show}]
    ttk::checkbutton $f.graphics -text [msgcat::mc {Graphics}] \
	-variable pmagnifier(region) -command MagnifierRegion
    ttk::checkbutton $f.cursor -text [msgcat::mc {Cursor}] \
	-variable pmagnifier(cursor) -command MagnifierCursor

    ttk::label $f.tcolor -text [msgcat::mc {Color}]
    ColorMenuButton $f.color pmagnifier color MagnifierColor

    ttk::label $f.tx -text [msgcat::mc {Magnification}]
    ttk::radiobutton $f.x1 -text {1x} \
	-variable pmagnifier(zoom) -value 1 -command MagnifierZoom
    ttk::radiobutton $f.x2 -text {2x} \
	-variable pmagnifier(zoom) -value 2 -command MagnifierZoom
    ttk::radiobutton $f.x4 -text {4x} \
	-variable pmagnifier(zoom) -value 4 -command MagnifierZoom
    ttk::radiobutton $f.x8 -text {8x} \
	-variable pmagnifier(zoom) -value 8 -command MagnifierZoom
    ttk::radiobutton $f.x16 -text {16x} \
	-variable pmagnifier(zoom) -value 16 -command MagnifierZoom

    grid $f.tshow $f.graphics - $f.cursor - -padx 2 -pady 2 -sticky w
    grid $f.tcolor $f.color - - -padx 2 -pady 2 -sticky w
    grid $f.tx $f.x1 $f.x2 $f.x4 $f.x8 $f.x16 -padx 2 -pady 2 -sticky w

    pack $f -side top -fill both -expand true
}

# Process Cmds

proc ProcessMagnifierCmd {varname iname} {
    upvar $varname var
    upvar $iname i

    magnifier::YY_FLUSH_BUFFER
    magnifier::yy_scan_string [lrange $var $i end]
    magnifier::yyparse
    incr i [expr $magnifier::yycnt-1]
}

proc ProcessSendMagnifierCmd {proc id param {sock {}} {fn {}}} {
    global parse
    set parse(proc) $proc
    set parse(id) $id

    magnifiersend::YY_FLUSH_BUFFER
    magnifiersend::yy_scan_string $param
    magnifiersend::yyparse
}


