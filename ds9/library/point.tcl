#  Copyright (C) 1999-2021
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc PointDialog {varname} {
    upvar #0 $varname var
    global $varname

    # see if we already have a header window visible
    if {[winfo exists $var(top)]} {
	raise $var(top)
	return
    }

    # procs
    set var(proc,apply) PointApply
    set var(proc,close) PointClose
    set var(proc,coordCB) PointCoordCB

    # base
    MarkerBaseCenterDialog $varname

    # menus
    $var(mb) add cascade -label [msgcat::mc {Shape}] -menu $var(mb).shape
    ThemeMenu $var(mb).shape
    $var(mb).shape add radiobutton -label [msgcat::mc {Circle}] \
	-variable ${varname}(shape) -value circle \
	-command "PointShape $varname"
    $var(mb).shape add radiobutton -label [msgcat::mc {Box}] \
	-variable ${varname}(shape) -value box \
	-command "PointShape $varname"
    $var(mb).shape add radiobutton -label [msgcat::mc {Diamond}] \
	-variable ${varname}(shape) -value diamond \
	-command "PointShape $varname"
    $var(mb).shape add radiobutton -label [msgcat::mc {Cross}] \
	-variable ${varname}(shape) -value cross \
	-command "PointShape $varname"
    $var(mb).shape add radiobutton -label [msgcat::mc {X}] \
	-variable ${varname}(shape) -value x \
	-command "PointShape $varname"
    $var(mb).shape add radiobutton -label [msgcat::mc {Arrow}] \
	-variable ${varname}(shape) -value arrow \
	-command "PointShape $varname"
    $var(mb).shape add radiobutton -label [msgcat::mc {BoxCircle}] \
	-variable ${varname}(shape) -value boxcircle \
	-command "PointShape $varname"
    $var(mb).shape add separator
    $var(mb).shape add radiobutton -label [msgcat::mc {Glyph}] \
	-variable ${varname}(shape) -value glyph \
	-command "PointShape $varname"

    # analysis
    $var(mb) add cascade -label [msgcat::mc {Analysis}] -menu $var(mb).analysis
    ThemeMenu $var(mb).analysis

    # plot3d
    MarkerAnalysisPlot3dDialog $varname

    # init
    set var(shape) [$var(frame) get marker $var(id) point shape]
    set var(size) [$var(frame) get marker $var(id) point size]
    set var(glyph) [$var(frame) get marker $var(id) point glyph]

    # glyphs can be resized with the mouse
    $var(frame) marker $var(id) callback edit PointEditCB $varname

    set f $var(top).param

    # size
    ttk::label $f.tsize -text [msgcat::mc {Size}]
    ttk::entry $f.size -textvariable ${varname}(size) -width 13 
    ttk::label $f.usize -text [msgcat::mc {Pixels}]

    # glyph image
    ttk::label $f.tglyph -text [msgcat::mc {Glyph}]
    ttk::entry $f.glyph -textvariable ${varname}(glyph) -width 40
    ttk::button $f.bglyph -text [msgcat::mc {Browse}] \
	-command [list GlyphBrowse $varname]

    grid $f.tsize $f.size $f.usize -padx 2 -pady 2 -sticky w
    grid $f.tglyph $f.glyph - $f.bglyph -padx 2 -pady 2 -sticky w

    PointGlyphState $varname
}

# actions

proc PointClose {varname} {
    upvar #0 $varname var
    global $varname

    $var(frame) marker $var(id) delete callback edit PointEditCB
    MarkerBaseCenterClose $varname
}

proc PointApply {varname} {
    upvar #0 $varname var
    global $varname

    if {$var(shape) eq {glyph} &&
	$var(glyph) ne [$var(frame) get marker $var(id) point glyph]} {
	$var(frame) marker $var(id) point glyph "\{$var(glyph)\}"
    }
    $var(frame) marker $var(id) point size $var(size)
    MarkerBaseCenterApply $varname
}

# callbacks

proc PointCoordCB {varname {dummy {}}} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,marker)} {
	puts stderr "PointCoordCB"
    }

    MarkerAnalysisPlot3dSystem $varname
    MarkerBaseCoordCB $varname
    MarkerBaseCenterMoveCB $varname
}

# support

proc PointEditCB {varname id} {
    upvar #0 $varname var
    global $varname

    set var(size) [$var(frame) get marker $var(id) point size]
}

proc PointShape {varname} {
    upvar #0 $varname var
    global $varname

    if {$var(shape) eq {glyph}} {
	# set the image first, so the glyph never shows as a placeholder
	if {$var(glyph) eq {}} {
	    set var(glyph) [GlyphCreateFile]
	}
	if {$var(glyph) ne [$var(frame) get marker $var(id) point glyph]} {
	    $var(frame) marker $var(id) point glyph "\{$var(glyph)\}"
	}
	# glyphs default to native size, other shapes to 11 pixels
	if {$var(size) == 11} {
	    set var(size) 0
	    $var(frame) marker $var(id) point size 0
	}
    } elseif {$var(size) <= 0} {
	set var(size) 11
	$var(frame) marker $var(id) point size 11
    }
    $var(frame) marker $var(id) point shape $var(shape)
    PointGlyphState $varname
}

proc PointGlyphState {varname} {
    upvar #0 $varname var
    global $varname

    set f $var(top).param
    if {$var(shape) eq {glyph}} {
	$f.glyph configure -state normal
	$f.bglyph configure -state normal
	$f.usize configure -text [msgcat::mc {Pixels (0 = native)}]
    } else {
	$f.glyph configure -state disabled
	$f.bglyph configure -state disabled
	$f.usize configure -text [msgcat::mc {Pixels}]
    }
}
