#  Copyright (C) 1999-2026
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

# Glyph region: a user supplied image (png, gif, ...) drawn at a fixed
# size in screen pixels, always upright.

# Photo loader, called from C++ (tksao/frame/glyph.C) whenever an glyph
# marker needs its image. Returns the name of a cached photo of the
# requested size, or {} on failure (the marker then draws a box with an X).
# ww/hh are screen pixels; 0 means native size, and if only one is 0 the
# aspect ratio is kept.

proc RegionGlyphPhoto {fn ww hh} {
    # a missing or bad file is not an error, the marker draws a placeholder.
    # Leave errorInfo alone: xpa reports any errorInfo as a failure.
    global errorInfo errorCode
    set ei [expr {[info exists errorInfo] ? $errorInfo : {}}]
    set ec [expr {[info exists errorCode] ? $errorCode : {}}]

    set rr [GlyphLoadPhoto $fn $ww $hh]

    set errorInfo $ei
    set errorCode $ec
    return $rr
}

proc GlyphLoadPhoto {fn ww hh} {
    global iglyph

    if {$fn eq {}} {
	return {}
    }
    set fn [file normalize $fn]

    # source photo, decoded once per file
    if {![info exists iglyph(src,$fn)]} {
	if {[catch {image create photo -file $fn} src]} {
	    return {}
	}
	set iglyph(src,$fn) $src
    }
    set src $iglyph(src,$fn)

    set sw [image width $src]
    set sh [image height $src]
    if {$sw<=0 || $sh<=0} {
	return {}
    }

    if {$ww<=0 && $hh<=0} {
	set ww $sw
	set hh $sh
    } elseif {$ww<=0} {
	set ww [expr {max(1,int(double($sw)*$hh/$sh+.5))}]
    } elseif {$hh<=0} {
	set hh [expr {max(1,int(double($sh)*$ww/$sw+.5))}]
    }

    if {$ww == $sw && $hh == $sh} {
	return $src
    }

    # resized photos, shared by all markers using the same file and size.
    # Never deleted: a marker may still hold it.
    set key "$fn,$ww,$hh"
    if {![info exists iglyph(photo,$key)]} {
	set iglyph(photo,$key) [GlyphResizePhoto $src $ww $hh]
    }
    return $iglyph(photo,$key)
}

# Alpha correct resize. Box filter (area average) on premultiplied
# colors, so transparent pixels do not bleed color into the edges.
proc GlyphResizePhoto {src nw nh} {
    set sw [image width $src]
    set sh [image height $src]

    set dest [image create photo -width $nw -height $nh]

    # integer zoom: exact, and fast
    if {$nw % $sw == 0 && $nh % $sh == 0} {
	$dest copy $src -zoom [expr {$nw/$sw}] [expr {$nh/$sh}]
	return $dest
    }

    set data [$src data -format {default -colorformat list}]

    # premultiply
    set pre {}
    foreach row $data {
	set prow {}
	foreach px $row {
	    lassign $px r g b a
	    set f [expr {$a/255.}]
	    lappend prow [expr {$r*$f}] [expr {$g*$f}] [expr {$b*$f}] $a
	}
	lappend pre $prow
    }

    set wx [GlyphResizeWeights $sw $nw]
    set wy [GlyphResizeWeights $sh $nh]

    # horizontal pass
    set hpass {}
    foreach prow $pre {
	set out {}
	foreach ws $wx {
	    set r 0.; set g 0.; set b 0.; set a 0.
	    foreach {ii w} $ws {
		set jj [expr {$ii*4}]
		set r [expr {$r+$w*[lindex $prow $jj]}]
		set g [expr {$g+$w*[lindex $prow $jj+1]}]
		set b [expr {$b+$w*[lindex $prow $jj+2]}]
		set a [expr {$a+$w*[lindex $prow $jj+3]}]
	    }
	    lappend out $r $g $b $a
	}
	lappend hpass $out
    }

    # vertical pass, unpremultiply, emit #rrggbbaa
    set rows {}
    foreach ws $wy {
	set acc [lrepeat [expr {$nw*4}] 0.]
	foreach {jj w} $ws {
	    set hrow [lindex $hpass $jj]
	    set kk 0
	    foreach v $hrow {
		lset acc $kk [expr {[lindex $acc $kk]+$w*$v}]
		incr kk
	    }
	}
	set row {}
	foreach {r g b a} $acc {
	    if {$a > 0.} {
		set f [expr {255./$a}]
		set r [expr {min(255,int($r*$f+.5))}]
		set g [expr {min(255,int($g*$f+.5))}]
		set b [expr {min(255,int($b*$f+.5))}]
	    } else {
		set r 0; set g 0; set b 0
	    }
	    set a [expr {min(255,int($a+.5))}]
	    lappend row [format {#%02x%02x%02x%02x} $r $g $b $a]
	}
	lappend rows $row
    }

    $dest put $rows
    return $dest
}

# For each of nn destination pixels, the list {src weight src weight ...}
# of source pixels it covers, weights summing to 1.
proc GlyphResizeWeights {ss nn} {
    set scale [expr {double($ss)/$nn}]
    set rr {}
    for {set ii 0} {$ii<$nn} {incr ii} {
	if {$scale >= 1} {
	    # shrink: average the covered span
	    set x0 [expr {$ii*$scale}]
	    set x1 [expr {($ii+1)*$scale}]
	} else {
	    # enlarge: linear interpolation between neighbors
	    set x [expr {($ii+.5)*$scale-.5}]
	    if {$x<0} {set x 0.}
	    set i0 [expr {int($x)}]
	    set i1 [expr {min($i0+1,$ss-1)}]
	    set t [expr {$x-$i0}]
	    if {$i0 == $i1} {
		lappend rr [list $i0 1.]
	    } else {
		lappend rr [list $i0 [expr {1.-$t}] $i1 $t]
	    }
	    continue
	}
	set ws {}
	for {set jj [expr {int($x0)}]} {$jj<$x1 && $jj<$ss} {incr jj} {
	    set lo [expr {max($x0,$jj)}]
	    set hi [expr {min($x1,$jj+1)}]
	    if {$hi > $lo} {
		lappend ws $jj [expr {($hi-$lo)/$scale}]
	    }
	}
	lappend rr $ws
    }
    return $rr
}

# Interactive create: pick a file if there is no default yet

proc GlyphCreateFile {} {
    global pmarker

    if {$pmarker(glyph,file) ne {} && [file readable $pmarker(glyph,file)]} {
	return $pmarker(glyph,file)
    }

    set fn [OpenFileDialog photofbox]
    if {$fn ne {}} {
	set pmarker(glyph,file) $fn
    }
    return $fn
}

# Dialog

proc GlyphDialog {varname} {
    upvar #0 $varname var
    global $varname

    # see if we already have a header window visible
    if {[winfo exists $var(top)]} {
	raise $var(top)
	return
    }

    # variables
    set var(file) [$var(frame) get marker $var(id) glyph file]
    lassign [$var(frame) get marker $var(id) glyph size] var(width) var(height)

    # procs
    set var(which) glyph
    set var(proc,apply) GlyphApply
    set var(proc,close) GlyphClose
    set var(proc,coordCB) GlyphCoordCB

    # base
    MarkerBaseCenterDialog $varname

    # callbacks
    $var(frame) marker $var(id) callback edit GlyphEditCB $varname

    set f $var(top).param

    # File
    ttk::label $f.tfile -text [msgcat::mc {File}]
    ttk::entry $f.file -textvariable ${varname}(file) -width 40
    ttk::button $f.browse -text [msgcat::mc {Browse}] \
	-command [list GlyphBrowse $varname]

    # Size
    ttk::label $f.tsize -text [msgcat::mc {Size}]
    ttk::entry $f.width -textvariable ${varname}(width) -width 13
    ttk::entry $f.height -textvariable ${varname}(height) -width 13
    ttk::label $f.usize -text [msgcat::mc {Pixels (0 = native)}]

    grid $f.tfile $f.file - $f.browse -padx 2 -pady 2 -sticky w
    grid $f.tsize $f.width $f.height $f.usize -padx 2 -pady 2 -sticky w
}

# actions

proc GlyphClose {varname} {
    upvar #0 $varname var
    global $varname

    $var(frame) marker $var(id) delete callback edit GlyphEditCB

    MarkerBaseCenterClose $varname
}

proc GlyphApply {varname} {
    upvar #0 $varname var
    global $varname

    if {$var(file) ne [$var(frame) get marker $var(id) glyph file]} {
	$var(frame) marker $var(id) glyph file "\{$var(file)\}"
    }
    if {[string is integer -strict $var(width)] &&
	[string is integer -strict $var(height)]} {
	$var(frame) marker $var(id) glyph size $var(width) $var(height)
    }

    MarkerBaseCenterApply $varname
}

proc GlyphBrowse {varname} {
    upvar #0 $varname var
    global $varname

    set fn [OpenFileDialog photofbox]
    if {$fn ne {}} {
	set var(file) $fn
	GlyphApply $varname
    }
}

# callbacks

proc GlyphEditCB {varname id} {
    upvar #0 $varname var
    global $varname

    lassign [$var(frame) get marker $var(id) glyph size] var(width) var(height)
}

proc GlyphCoordCB {varname {dummy {}}} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,marker)} {
	puts stderr "GlyphCoordCB"
    }

    MarkerBaseCoordCB $varname
    MarkerBaseCenterMoveCB $varname
}
