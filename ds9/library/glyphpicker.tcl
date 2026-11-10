#  Copyright (C) 1999-2026
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

# Glyph picker: choose one of the glyphs shipped with ds9 (ds9/glyphs) by
# drilling down Shape -> Style -> Variant, or Browse for any image file.
#   GlyphPicker current ?color? ?parent?
# returns builtin://name.svg (see glyph.tcl), the browsed file name, or
# {} on Cancel. current, if a built-in glyph, is preselected. color is
# the region color the previews are drawn in.

proc GlyphPicker {current {color {}} {parent {}}} {
    global ds9
    global igpick

    set w {.glyphpicker}

    set igpick(top) $w
    set igpick(ok) 0
    set igpick(result) {}
    set igpick(clr) [GlyphColor $color]
    set igpick(outlined) 0
    set igpick(bg) #808080
    set igpick(images) {}
    set igpick(levels) {shape style variant}
    set igpick(shapeorder) {circle box diamond tee wye vee cross}
    array set igpick {sel,shape {} sel,style {} sel,variant {} sel,glyph {}}

    GlyphPickerLoad
    GlyphPickerSelect $current

    DialogCreate $w [msgcat::mc {Glyph}] igpick(ok)
    if {$parent ne {}} {
	wm transient $w $parent
    }

    # Options
    set f [ttk::frame $w.top]
    ttk::checkbutton $f.out -text [msgcat::mc {Outlined}] \
	-variable igpick(outlined) -command GlyphPickerShow
    ttk::label $f.bgl -text "[msgcat::mc {Background}]:"
    pack $f.out -side left -padx 6
    pack $f.bgl -side left -padx {16 2}
    foreach {t c} [list [msgcat::mc {Black}] #000000 \
		       [msgcat::mc {Gray}] #808080 \
		       [msgcat::mc {White}] #ffffff] {
	ttk::radiobutton $f.bg$c -text $t -value $c -variable igpick(bg) \
	    -command GlyphPickerShow
	pack $f.bg$c -side left
    }
    ttk::button $f.reset -text [msgcat::mc {Reset}] -command GlyphPickerReset
    pack $f.reset -side right -padx 6

    # Lists
    set f [ttk::frame $w.lists]
    foreach {lv title ww} [list \
			       shape [msgcat::mc {Shape}] 14 \
			       style [msgcat::mc {Style}] 20 \
			       variant [msgcat::mc {Variant}] 18 \
			       glyph [msgcat::mc {Glyph}] 38] {
	set ff [ttk::frame $f.$lv]
	ttk::label $ff.l -text $title
	listbox $ff.lb -width $ww -height 18 -exportselection 0 \
	    -activestyle none -yscrollcommand [list $ff.sb set] \
	    -fg [ThemeTreeForeground] -bg [ThemeTreeBackground] \
	    -selectforeground [ThemeSelectedForeground] \
	    -selectbackground [ThemeSelectedBackground]
	ttk::scrollbar $ff.sb -command [list $ff.lb yview]
	grid $ff.l -row 0 -column 0 -columnspan 2 -sticky w
	grid $ff.lb $ff.sb -row 1 -sticky ns
	grid rowconfigure $ff 1 -weight 1
	bind $ff.lb <<ListboxSelect>> [list GlyphPickerPick $lv]
	pack $ff -side left -fill y -padx 4
    }
    bind $f.glyph.lb <Double-1> GlyphPickerOK
    set igpick(lists) $f

    # Preview
    set f [ttk::frame $w.preview]
    canvas $f.c -width 300 -height 300 -highlightthickness 0
    frame $f.sizes
    ttk::label $f.name -width 40 -anchor w
    pack $f.c -side top
    pack $f.sizes -side top -pady 4
    pack $f.name -side top -fill x -pady 2
    set igpick(preview) $f

    # Buttons
    set f [ttk::frame $w.buttons]
    ttk::button $f.ok -text [msgcat::mc {OK}] -command GlyphPickerOK \
	-default active
    ttk::button $f.browse -text "[msgcat::mc {Browse}]..." \
	-command GlyphPickerBrowse
    ttk::button $f.cancel -text [msgcat::mc {Cancel}] \
	-command {set igpick(ok) 0}
    pack $f.ok $f.browse $f.cancel -side left -expand true -padx 2 -pady 4
    set igpick(okbutton) $f.ok

    bind $w <Return> GlyphPickerOK

    # Fini
    ttk::separator $w.sep -orient horizontal
    pack $w.buttons $w.sep -side bottom -fill x
    pack $w.top -side top -fill x -pady 4
    pack $w.lists -side left -fill y -pady 4
    pack $w.preview -side left -fill both -padx 8 -pady 4

    GlyphPickerRefresh 0

    DialogWait $w igpick(ok)

    foreach im $igpick(images) {
	image delete $im
    }
    destroy $w

    set rr {}
    if {$igpick(ok)} {
	set rr $igpick(result)
    }
    unset igpick
    return $rr
}

proc GlyphPickerOK {} {
    global igpick

    set fn [GlyphPickerName]
    if {$fn eq {}} {
	return
    }
    set igpick(result) $fn
    set igpick(ok) 1
}

proc GlyphPickerBrowse {} {
    global igpick

    set fn [OpenFileDialog photofbox $igpick(top)]
    if {$fn eq {}} {
	# the file dialog took the grab
	catch {grab $igpick(top)}
	return
    }
    # a file in the glyph directory is still a built-in glyph
    set bn [GlyphBuiltinName $fn]
    set igpick(result) [expr {$bn ne {} ? $bn : $fn}]
    set igpick(ok) 1
}

proc GlyphPickerReset {} {
    global igpick

    array set igpick {sel,shape {} sel,style {} sel,variant {} sel,glyph {}}
    GlyphPickerRefresh 0
}

# Classification, by file name, of the glyphs in ds9/glyphs. Each has an
# outlined twin, outlined/<name>_outlined.svg.

proc GlyphPickerLoad {} {
    global igpick

    set igpick(glyphs) {}
    foreach fn [lsort [glob -nocomplain -directory [GlyphBuiltinDir] *.svg]] {
	set nn [file rootname [file tail $fn]]
	lappend igpick(glyphs) [list $nn {*}[GlyphPickerClassify $nn]]
    }
}

# a glyph name to its {shape style variant}
proc GlyphPickerClassify {nn} {
    switch -glob -- $nn {
	open_circle_gaps_top_bottom {list circle "open, 2 gaps" "gaps top/bottom"}
	open_circle_gaps_left_right {list circle "open, 2 gaps" "gaps left/right"}
	open_box*_gaps_* {list box "open, 2 gaps" [GlyphPickerCorners $nn]}
	open_circle* {list circle "open, 4 gaps" [GlyphPickerOrient $nn]}
	closed_circle* {list circle "closed + crosshairs" [GlyphPickerOrient $nn]}
	open_box* {list box "open, 4 gaps" [GlyphPickerCorners $nn]}
	closed_box* {list box "closed + crosshairs" [GlyphPickerCorners $nn]}
	closed_diamond* {list diamond "closed + crosshairs" [GlyphPickerCorners $nn]}
	*_tee_* -
	*_tees_* {
	    list tee [GlyphPickerCount $nn] \
		[expr {[string match *circular* $nn] ? "curved bar" : "straight bar"}]
	}
	*_wye_* -
	*_wyes* {list wye [GlyphPickerCount $nn] [GlyphPickerOrient $nn]}
	*_vees* {list vee [GlyphPickerCount $nn] [GlyphPickerOrient $nn]}
	gapped_plus {list cross gapped axis}
	gapped_x {list cross gapped diagonal}
	default {list other other other}
    }
}

proc GlyphPickerCount {nn} {
    foreach cc {one two four} {
	if {[string match ${cc}_* $nn]} {
	    return $cc
	}
    }
    return other
}

proc GlyphPickerOrient {nn} {
    if {[string match *rot45* $nn] || [string match *_x $nn] ||
	[regexp {_(top|bottom)_(left|right)$} $nn]} {
	return diagonal
    }
    return axis
}

proc GlyphPickerCorners {nn} {
    expr {[string match *rounded* $nn] ? "rounded corners" : "square corners"}
}

# preselect a built-in glyph, builtin://[outlined/]name[_outlined].svg
proc GlyphPickerSelect {fn} {
    global igpick

    if {![GlyphIsBuiltin $fn]} {
	return
    }
    set nn [file rootname [string range $fn 10 end]]
    if {[string match outlined/* $nn]} {
	set igpick(outlined) 1
	set nn [string range [file tail $nn] 0 end-9]
    }
    foreach gg $igpick(glyphs) {
	if {[lindex $gg 0] eq $nn} {
	    lassign $gg igpick(sel,glyph) igpick(sel,shape) \
		igpick(sel,style) igpick(sel,variant)
	    return
	}
    }
}

# Filtering

# glyphs matching the selections above level index upto (exclusive)
proc GlyphPickerMatching {upto} {
    global igpick

    set rr {}
    foreach gg $igpick(glyphs) {
	set ok 1
	for {set ii 0} {$ii < $upto} {incr ii} {
	    set vv $igpick(sel,[lindex $igpick(levels) $ii])
	    if {$vv ne {} && [lindex $gg [expr {$ii+1}]] ne $vv} {
		set ok 0
		break
	    }
	}
	if {$ok} {
	    lappend rr $gg
	}
    }
    return $rr
}

# {value count ...} at level ii
proc GlyphPickerValues {ii gs} {
    global igpick

    set cnt [dict create]
    foreach gg $gs {
	dict incr cnt [lindex $gg [expr {$ii+1}]]
    }
    set vals [lsort [dict keys $cnt]]
    if {$ii == 0} {
	# fixed order for the top level, anything unexpected at the end
	set ord {}
	foreach ss $igpick(shapeorder) {
	    if {[dict exists $cnt $ss]} {
		lappend ord $ss
	    }
	}
	foreach ss $vals {
	    if {$ss ni $ord} {
		lappend ord $ss
	    }
	}
	set vals $ord
    }
    set rr {}
    foreach vv $vals {
	lappend rr $vv [dict get $cnt $vv]
    }
    return $rr
}

# Refill the lists from level from down, keeping still valid choices
proc GlyphPickerRefresh {from} {
    global igpick

    set nl [llength $igpick(levels)]
    for {set ii $from} {$ii < $nl} {incr ii} {
	set lv [lindex $igpick(levels) $ii]
	set lb $igpick(lists).$lv.lb
	set vc [GlyphPickerValues $ii [GlyphPickerMatching $ii]]
	set igpick(vals,$lv) [dict keys $vc]
	# a level with one choice is chosen for you
	if {[llength $igpick(vals,$lv)] == 1} {
	    set igpick(sel,$lv) [lindex $igpick(vals,$lv) 0]
	}
	if {$igpick(sel,$lv) ni $igpick(vals,$lv)} {
	    set igpick(sel,$lv) {}
	}
	$lb delete 0 end
	dict for {vv cc} $vc {
	    $lb insert end "$vv  ($cc)"
	}
	GlyphPickerHighlight $lv
    }

    # glyphs: everything matching all levels chosen so far
    set lb $igpick(lists).glyph.lb
    set igpick(vals,glyph) [lmap gg [GlyphPickerMatching $nl] {lindex $gg 0}]
    $lb delete 0 end
    foreach nn $igpick(vals,glyph) {
	$lb insert end $nn
    }
    if {[llength $igpick(vals,glyph)] == 1} {
	set igpick(sel,glyph) [lindex $igpick(vals,glyph) 0]
    }
    if {$igpick(sel,glyph) ni $igpick(vals,glyph)} {
	set igpick(sel,glyph) {}
    }
    GlyphPickerHighlight glyph
    $igpick(lists).glyph.l configure \
	-text "[msgcat::mc {Glyph}] ([llength $igpick(vals,glyph)])"
    GlyphPickerShow
}

proc GlyphPickerHighlight {lv} {
    global igpick

    set lb $igpick(lists).$lv.lb
    $lb selection clear 0 end
    if {$igpick(sel,$lv) ne {}} {
	set kk [lsearch -exact $igpick(vals,$lv) $igpick(sel,$lv)]
	$lb selection set $kk
	$lb see $kk
    }
}

proc GlyphPickerPick {lv} {
    global igpick

    set cur [$igpick(lists).$lv.lb curselection]
    if {![llength $cur]} {
	return
    }
    set vv [lindex $igpick(vals,$lv) [lindex $cur 0]]
    if {$lv eq {glyph}} {
	set igpick(sel,glyph) $vv
	GlyphPickerShow
	return
    }
    # clicking the current choice again clears it, widening the search
    set igpick(sel,$lv) [expr {$igpick(sel,$lv) eq $vv ? {} : $vv}]
    GlyphPickerRefresh [expr {[lsearch $igpick(levels) $lv]+1}]
    GlyphPickerHighlight $lv
}

# Preview

# the selection as builtin://..., {} if none
proc GlyphPickerName {} {
    global igpick

    set nn $igpick(sel,glyph)
    if {$nn eq {}} {
	return {}
    }
    if {$igpick(outlined)} {
	return "builtin://outlined/${nn}_outlined.svg"
    }
    return "builtin://${nn}.svg"
}

proc GlyphPickerPhoto {fn fmt} {
    global igpick

    set photo [GlyphSVGCreate $fn $igpick(clr) $fmt]
    if {$photo ne {}} {
	lappend igpick(images) $photo
    }
    return $photo
}

proc GlyphPickerShow {} {
    global igpick

    set f $igpick(preview)
    foreach im $igpick(images) {
	image delete $im
    }
    set igpick(images) {}
    $f.c delete all
    $f.c configure -bg $igpick(bg)
    foreach ww [winfo children $f.sizes] {
	destroy $ww
    }

    set name [GlyphPickerName]
    $igpick(okbutton) configure \
	-state [expr {$name eq {} ? {disabled} : {normal}}]
    if {$name eq {}} {
	$f.name configure -text [msgcat::mc {None}]
	return
    }
    $f.name configure -text $name

    set fn [GlyphPath $name]
    set big [GlyphPickerPhoto $fn [list svg -scaletoheight 256]]
    if {$big eq {}} {
	return
    }
    $f.c create image 150 150 -image $big
    # outline of the svg canvas, drawn at 256 pixels
    set ww [expr {[image width $big]/2}]
    set hh [expr {[image height $big]/2}]
    $f.c create rectangle [expr {150-$ww}] [expr {150-$hh}] \
	[expr {150+$ww}] [expr {150+$hh}] -outline #b0b0b0 -dash {2 4}

    # region sized previews
    set fg [expr {$igpick(bg) eq {#ffffff} ? {black} : {white}}]
    foreach ss {12 16 24 32 48 64} {
	set im [GlyphPickerPhoto $fn [list svg -scaletoheight $ss]]
	if {$im eq {}} {
	    continue
	}
	set ff [frame $f.sizes.s$ss -bg $igpick(bg)]
	label $ff.i -image $im -bg $igpick(bg) -width 68 -height 68
	label $ff.t -text $ss -bg $igpick(bg) -fg $fg
	pack $ff.i $ff.t -side top
	pack $ff -side left -padx 2
    }
}
