#  Copyright (C) 1999-2026
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

# Glyph points: a point region drawn with a user supplied image (png,
# gif, ...) at a fixed size in screen pixels, upright. On a tilted 3D
# frame it lies in the image plane like the other point shapes, see
# tksao/frame/glyph.C:
#   point(x,y) # point=glyph [size] {file}
# The point dialog (point.tcl) edits the file and size.
#
# file can also name a glyph shipped with ds9 (ds9/glyphs), as
# builtin://name.svg or builtin://outlined/name_outlined.svg. These are
# stored, saved and backed up as is, and only resolved to a real path
# when the image is loaded, so region files using them stay valid on
# any ds9 install. See GlyphPicker (glyphpicker.tcl) to choose one.

# Photo loader, called from C++ (tksao/frame/glyph.C) whenever a glyph
# point needs its image. Returns the name of a cached photo, or {} on
# failure (the point then draws a box with an X). size is in screen
# pixels: the image is fitted into a size x size box keeping its aspect
# ratio; 0 means native size. svg files are drawn directly at that size,
# other formats are resampled.
# color is the marker color. In svg files, white (and currentColor) is
# drawn in that color, see GlyphSVGRecolor. Other formats ignore it.

proc RegionGlyphPhoto {fn size {color {}}} {
    # a missing or bad file is not an error, the marker draws a placeholder.
    # Leave errorInfo alone: xpa reports any errorInfo as a failure.
    global errorInfo errorCode
    set ei [expr {[info exists errorInfo] ? $errorInfo : {}}]
    set ec [expr {[info exists errorCode] ? $errorCode : {}}]

    set rr [GlyphLoadPhoto $fn $size $color]

    set errorInfo $ei
    set errorCode $ec
    return $rr
}

proc GlyphLoadPhoto {fn size color} {
    global iglyph

    if {$fn eq {}} {
	return {}
    }
    set fn [file normalize [GlyphPath $fn]]

    # svg: the marker color as #rrggbb, {} to draw the file as is
    set clr {}
    set svg [string equal -nocase [file extension $fn] .svg]
    if {$svg} {
	set clr [GlyphColor $color]
    }

    # source photo, decoded once per file (and color)
    set skey "$fn,$clr"
    if {![info exists iglyph(src,$skey)]} {
	set src {}
	if {$clr ne {}} {
	    set src [GlyphSVGCreate $fn $clr svg]
	}
	if {$src eq {}} {
	    if {[catch {image create photo -file $fn} src]} {
		return {}
	    }
	}
	set iglyph(src,$skey) $src
    }
    set src $iglyph(src,$skey)

    set sw [image width $src]
    set sh [image height $src]
    if {$sw<=0 || $sh<=0} {
	return {}
    }

    if {$size<=0} {
	set ww $sw
	set hh $sh
    } elseif {$sw>=$sh} {
	set ww $size
	set hh [expr {max(1,int(double($sh)*$size/$sw+.5))}]
    } else {
	set hh $size
	set ww [expr {max(1,int(double($sw)*$size/$sh+.5))}]
    }

    if {$ww == $sw && $hh == $sh} {
	return $src
    }

    # resized photos, shared by all markers using the same file, size
    # and color. Never deleted: a marker may still hold it.
    set key "$fn,$ww,$hh,$clr"
    if {![info exists iglyph(photo,$key)]} {
	set photo {}
	# svg: let Tk draw the vector image at the target size, which is
	# sharper and much faster than resampling the native size photo.
	if {$svg} {
	    set photo [GlyphSVGPhoto $fn $clr $ww $hh $sw $sh]
	}
	if {$photo eq {}} {
	    set photo [GlyphResizePhoto $src $ww $hh]
	}
	set iglyph(photo,$key) $photo
    }
    return $iglyph(photo,$key)
}

# Draw an svg file at ww x hh by scaling its longer side to fit; the other
# side follows the aspect ratio. Returns {} on failure, and the caller
# then resamples the native size photo instead.
proc GlyphSVGPhoto {fn clr ww hh sw sh} {
    if {$sw>=$sh} {
	set fmt [list svg -scaletowidth $ww]
    } else {
	set fmt [list svg -scaletoheight $hh]
    }
    set photo [GlyphSVGCreate $fn $clr $fmt]
    if {$photo eq {}} {
	return {}
    }
    # the short side may round differently than ours; allow 1 pixel
    if {abs([image width $photo]-$ww) > 1 || abs([image height $photo]-$hh) > 1} {
	image delete $photo
	return {}
    }
    return $photo
}

# Create a photo from an svg file, recolored to clr (#rrggbb) unless clr
# is {}. Returns {} on failure.
proc GlyphSVGCreate {fn clr fmt} {
    if {$clr eq {}} {
	if {[catch {image create photo -file $fn -format $fmt} photo]} {
	    return {}
	}
	return $photo
    }

    set data [GlyphSVGRecolor [GlyphSVGText $fn] $clr]
    if {$data eq {}} {
	return {}
    }
    if {[catch {image create photo -data $data -format $fmt} photo]} {
	return {}
    }
    return $photo
}

# svg source text, read once per file
proc GlyphSVGText {fn} {
    global iglyph

    if {![info exists iglyph(svg,$fn)]} {
	if {[catch {open $fn r} ch]} {
	    return {}
	}
	fconfigure $ch -encoding utf-8
	set iglyph(svg,$fn) [read $ch]
	close $ch
    }
    return $iglyph(svg,$fn)
}

# Paint white in the marker color: every fill, stroke or color value
# (attribute or css style) that is #ffffff, #fff, white,
# rgb(255,255,255) or currentColor becomes clr. Use a near white, such
# as #fefefe, for parts that must stay white.
proc GlyphSVGRecolor {data clr} {
    set prop {((?:fill|stroke|stop-color|flood-color|lighting-color|color)\s*(?:=\s*["']\s*|:\s*))}
    set white {(?:#ffffff|#fff|white|currentcolor|rgb\(\s*255\s*,\s*255\s*,\s*255\s*\))(?![-0-9a-z])}
    return [regsub -all -nocase "$prop$white" $data "\\1$clr"]
}

# A Tk color name or value as #rrggbb, {} if it is not a valid color
proc GlyphColor {color} {
    if {$color eq {}} {
	return {}
    }
    # match Widget::getXColor: ds9's green is X11 green (Tk's lime),
    # not Tk 8.6+'s W3C green (#008000)
    if {[string equal -nocase -length 5 $color green]} {
	set color lime
    }
    if {[catch {winfo rgb . $color} rgb]} {
	return {}
    }
    lassign $rgb r g b
    return [format {#%02x%02x%02x} [expr {$r>>8}] [expr {$g>>8}] [expr {$b>>8}]]
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

# Built-in glyphs

proc GlyphBuiltinDir {} {
    global ds9
    return [file join $ds9(root) glyphs]
}

proc GlyphIsBuiltin {fn} {
    return [string match {builtin://*} $fn]
}

# builtin://name to the shipped file, other names unchanged
proc GlyphPath {fn} {
    if {[GlyphIsBuiltin $fn]} {
	return [file join [GlyphBuiltinDir] [string range $fn 10 end]]
    }
    return $fn
}

# builtin://name for a file in the built-in glyph directory, else {}
proc GlyphBuiltinName {fn} {
    if {$fn eq {}} {
	return {}
    }
    if {[GlyphIsBuiltin $fn]} {
	return $fn
    }
    set dir [file normalize [GlyphBuiltinDir]]/
    set fn [file normalize $fn]
    if {[string first $dir $fn] == 0} {
	return "builtin://[string range $fn [string length $dir] end]"
    }
    return {}
}

# Interactive create: use the file set in Preferences, else a built-in
# glyph. Never prompts; the file can be changed afterwards in the point
# dialog.

proc GlyphDefaultFile {} {
    return {builtin://closed_circle_crosshairs.svg}
}

proc GlyphCreateFile {} {
    global pmarker

    if {$pmarker(glyph,file) ne {} &&
	[file readable [GlyphPath $pmarker(glyph,file)]]} {
	return $pmarker(glyph,file)
    }
    return [GlyphDefaultFile]
}

# Point dialog support

proc GlyphBrowse {varname} {
    upvar #0 $varname var
    global $varname

    set fn [GlyphPicker $var(glyph) \
		[$var(frame) get marker $var(id) color] $var(top)]
    if {$fn ne {}} {
	set var(glyph) $fn
	PointApply $varname
    }
}

# Backup: copy every glyph file referenced by the saved region file fn
# into dir (the directory holding fn) and rewrite the references to the
# bare copied names, which load resolves relative to the region file.
proc GlyphBackup {fn dir} {
    if {[catch {open $fn r} ch]} {
	return
    }
    set rr [read $ch]
    close $ch

    if {![string match {*point=glyph*} $rr]} {
	return
    }

    upvar #0 iglyphbackup map
    array unset map
    set rr [regsub -all -command {(point=glyph[ \t]+(?:[0-9]+[ \t]+)?\{)([^\}\n]*)(\})} $rr \
		[list GlyphBackupRef $dir]]
    array unset map

    if {[catch {open $fn w} ch]} {
	return
    }
    puts -nonewline $ch $rr
    close $ch
}

proc GlyphBackupRef {dir all pre path post} {
    upvar #0 iglyphbackup map

    # shipped with ds9, nothing to copy
    if {[GlyphIsBuiltin $path]} {
	return $all
    }

    # relative names were written relative to the region file, i.e. dir
    if {[file pathtype $path] eq {relative}} {
	set src [file join $dir $path]
    } else {
	set src $path
    }
    if {![file readable $src]} {
	return $all
    }
    set src [file normalize $src]

    if {![info exists map($src)]} {
	# keep the file name, make it unique within this backup
	set base [file rootname [file tail $src]]
	set ext [file extension $src]
	set name "glyph_${base}${ext}"
	set ii 1
	while {[file exists [file join $dir $name]]} {
	    set name "glyph_${base}_${ii}${ext}"
	    incr ii
	}
	if {[catch {file copy -force $src [file join $dir $name]}]} {
	    return $all
	}
	set map($src) $name
    }

    return "$pre$map($src)$post"
}
