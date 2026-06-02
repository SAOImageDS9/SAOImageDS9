#  Copyright (C) 1999-2021
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc PlotPSPrint {varname} {
    upvar #0 $varname var
    global $varname

    if {[PlotPrintDialog]} {
	if {[catch {PlotPostScript $varname} printError]} {
	    Error "[msgcat::mc {An error has occurred while printing}] $printError"
	}
    }
}

proc PlotPrintDialog {} {
    global ps
    global ed

    set ed(ok) 0
    array set ed [array get ps]

    set w {.print}

    DialogCreate $w [msgcat::mc {Print}] ed(ok)

    # PrintTo
    set f [ttk::labelframe $w.pt -text [msgcat::mc {Print To}]]

    ttk::radiobutton $f.printer -text [msgcat::mc {Printer}] \
	-variable ed(dest) -value printer
    ttk::label $f.tcmd -text [msgcat::mc {Command}]
    ttk::entry $f.cmd -textvariable ed(cmd) -width 20

    ttk::radiobutton $f.file -text [msgcat::mc {File}] \
	-variable ed(dest) -value file
    ttk::label $f.tname -text [msgcat::mc {Name}]
    ttk::entry $f.name -textvariable ed(filename) -width 20
    ttk::button $f.browse -text [msgcat::mc {Browse}] \
	-command "PlotPrintBrowse ed(filename) $w"

    global tcl_platform
    switch $tcl_platform(os) {
	Linux {
	    grid $f.printer $f.tcmd $f.cmd -padx 2 -pady 2 -sticky ew
	}
	Darwin -
	{Windows NT} {
	    set ed(dest) file
	}
    }
    grid $f.file $f.tname $f.name $f.browse -padx 2 -pady 2 -sticky ew
    grid columnconfigure $f 2 -weight 1

    # Options
    set f [ttk::labelframe $w.ps -text [msgcat::mc {Postscript}]]

    ttk::label $f.color -text [msgcat::mc {Color}]
    ttk::radiobutton $f.rgb -text [msgcat::mc {RGB}] \
	-variable ed(color) -value rgb 
    ttk::radiobutton $f.gray -text [msgcat::mc {Grayscale}] \
	-variable ed(color) -value gray 

    grid $f.color $f.rgb $f.gray -padx 2 -pady 2 -sticky w

    # Buttons
    set f [ttk::frame $w.buttons]
    ttk::button $f.ok -text [msgcat::mc {OK}] -command {set ed(ok) 1} \
	-default active
    ttk::button $f.cancel -text [msgcat::mc {Cancel}] -command {set ed(ok) 0}
    pack $f.ok $f.cancel -side left -expand true -padx 2 -pady 4

    bind $w <Return> {set ed(ok) 1}

    # Fini
    grid $w.pt -sticky news
    grid $w.ps -sticky news
    grid $w.buttons -sticky ew
    grid rowconfigure $w 0 -weight 1
    grid rowconfigure $w 1 -weight 1
    grid columnconfigure $w 0 -weight 1

    DialogWait $w ed(ok) $w.buttons.ok
    destroy $w

    if {$ed(ok)} {
	array set ps [array get ed]
    }

    set rr $ed(ok)
    unset ed
    return $rr
}

proc PlotPrintBrowse {varname parent} {
    upvar $varname var

    FileLast apsavfbox $var
    set var [SaveFileDialog apsavfbox $parent]
}

# Postscript
proc PlotPostScript {varname} {
    upvar #0 $varname var
    global $varname

    set ll [llength $var(graphs)]
    if {$ll == 1} {
	PlotPostScriptSingle $varname
    } else {
	PlotPostScriptMulti $varname
    }
}

proc PlotPostScriptSingle {varname} {
    upvar #0 $varname var
    global $varname

    global ps
    global ds9

    PlotPostScriptSetFonts $varname $var(graphs)

    set options {}

    # Color
    switch -- $ps(color) {
	rgb -
	cmyk {append options " -greyscale no"}
	gray {append options " -greyscale yes"}
    }

    # Size
    set ww [expr int([winfo width $var(graph)]*$ps(scale)/100./$ds9(scaling))]
    set hh [expr int([winfo height $var(graph)]*$ps(scale)/100./$ds9(scaling))]
    append options " -width $ww -height $hh"

    # Page size
    switch -- $ps(size) {
	letter {append options " -paperwidth 8.5i -paperheight 11.i"}
	legal {append options " -paperwidth 8.5i -paperheight 14.i"}
	tabloid {append options " -paperwidth 11i -paperheight 17.i"}
	poster {append options " -paperwidth 36.i -paperheight 48.i"}
	a4 {append options " -paperwidth 195m -paperheight 282m"}
	other {
	    if {$ps(width) != {} && $ps(height) != {}} {
		set pgww "[append ps(width) i]"
		set pghh "[append ps(height) i]"
		append options " -paperwidth $pgww -paperheight pghh"
	    }
	}
	othermm {
	    if {$ps(width) != {} && $ps(height) != {}} {
		set pgww "[append ps(width) m]"
		set pghh "[append ps(height) m]"
		append options " -paperwidth $pgww -paperheight pghh"
	    }
	}
    }

    # Orientation
    switch -- $ps(orient) {
	portrait {append options " -landscape false"}
	landscape {append options " -landscape true"}
    }

    # MacOS and Windows no longer support PS
    global tcl_platform
    switch $tcl_platform(os) {
	Linux {}
	Darwin -
	{Windows NT} {set ps(dest) file}
    }

    if {$ps(dest) == "file" && $ps(filename) != {}} {
	eval $var(graph) postscript output $ps(filename) $options
    } else {
	set ch [open "| $ps(cmd)" w]
	puts $ch [eval $var(graph) postscript output $options]
	close $ch
    }

    PlotPostScriptResetFonts $varname $var(graphs)
}

proc PlotPostScriptMulti {varname} {
    upvar #0 $varname var
    global $varname

    global ps
    global ds9

    set options {}

    # Color
    switch -- $ps(color) {
	rgb -
	cmyk {append options " -greyscale no"}
	gray {append options " -greyscale yes"}
    }

    # Page size
    switch -- $ps(size) {
	letter {append options " -paperwidth 8.5i -paperheight 11.i"}
	legal {append options " -paperwidth 8.5i -paperheight 14.i"}
	tabloid {append options " -paperwidth 11i -paperheight 17.i"}
	poster {append options " -paperwidth 36.i -paperheight 48.i"}
	a4 {append options " -paperwidth 195m -paperheight 282m"}
	other {
	    if {$ps(width) != {} && $ps(height) != {}} {
		set pgww "[append ps(width) i]"
		set pghh "[append ps(height) i]"
		append options " -paperwidth $pgww -paperheight pghh"
	    }
	}
	othermm {
	    if {$ps(width) != {} && $ps(height) != {}} {
		set pgww "[append ps(width) m]"
		set pghh "[append ps(height) m]"
		append options " -paperwidth $pgww -paperheight pghh"
	    }
	}
    }

    # Orientation
    switch -- $ps(orient) {
	portrait {append options " -landscape false"}
	landscape {append options " -landscape true"}
    }

    # Prolog
    set width [expr [winfo width $var(top)]*$ps(scale)/100./$ds9(scaling)]
    set height [expr [winfo height $var(top)]*$ps(scale)/100./$ds9(scaling)]
    set prolog [eval $var([lindex $var(graphs) 0],graph) postscript output \
		    "$options -width $width -height $height"]

    # For each graph
    foreach cc $var(graphs) {
	PlotPostScriptSetFonts $varname $cc

	# Size
	set ww [expr [winfo width $var($cc,graph)]*$ps(scale)/100./$ds9(scaling)]
	set hh [expr [winfo height $var($cc,graph)]*$ps(scale)/100./$ds9(scaling)]
	set var($cc,ps) [eval $var($cc,graph) postscript output \
			     "$options -width $ww -height $hh"]

	PlotPostScriptResetFonts $varname $cc
    }

    # MacOS and Windows no longer support PS
    global tcl_platform
    switch $tcl_platform(os) {
	Linux {}
	Darwin -
	{Windows NT} {set ps(dest) file}
    }

    if {$ps(dest) == "file" && $ps(filename) != {}} {
	set ch [open $ps(filename) w]
    } else {
	set ch [open "| $ps(cmd)" w]
    }
    PlotPostScriptMultiBuild $varname $ch $prolog $width $height
}

# EPS
proc PlotEPS {varname fn} {
    upvar #0 $varname var
    global $varname

    set ll [llength $var(graphs)]
    if {$ll == 1} {
	PlotEPSSingle $varname $fn
    } else {
	PlotEPSMulti $varname $fn
    }
}

proc PlotEPSSingle {varname fn} {
    upvar #0 $varname var
    global $varname

    global ds9

    PlotPostScriptSetFonts $varname $var(graphs)

    set ww [winfo width $var(graph)]
    set hh [winfo height $var(graph)]

    set options { -greyscale no -landscape false -width $ww -height $hh -paperwidth 0 -paperheight 0}

    if {[catch {eval $var(graph) postscript output $fn $options} rr]} {
	Error "[msgcat::mc {A postscript generation error has occurred}] $rr"
    }

    PlotPostScriptResetFonts $varname $var(graphs)
}

proc PlotEPSMulti {varname fn} {
    upvar #0 $varname var
    global $varname

    set options { -greyscale no -landscape false -paperwidth 0 -paperheight 0}

    # Prolog
    set width [winfo width $var(top)]
    set height [winfo height $var(top)]
    set prolog [eval $var([lindex $var(graphs) 0],graph) postscript output \
		    "$options -width $width -height $height"]

    # For each graph
    foreach cc $var(graphs) {
	PlotPostScriptSetFonts $varname $cc

	# Size
	set ww [winfo width $var($cc,graph)]
	set hh [winfo height $var($cc,graph)]
	set var($cc,ps) [eval $var($cc,graph) postscript output \
			     "$options -width $ww -height $hh"]

	PlotPostScriptResetFonts $varname $cc
    }

    set ch [open $fn w]
    PlotPostScriptMultiBuild $varname $ch $prolog $width $height
}

# PDF
proc PlotPDFColor {pdf stroke fill} {
    if {$stroke != {}} {
	$pdf setStrokeColor $stroke
    }
    if {$fill != {}} {
	$pdf setFillColor $fill
    }
}

proc PlotPDFGet {script default} {
    if {[catch {uplevel 1 $script} rr]} {
	return $default
    }
    return $rr
}

proc PlotPDFDataList {data} {
    if {$data != {} && [llength [info commands $data]]} {
	set len [$data length]
	if {$len <= 0} {
	    return {}
	}
	return [$data range 0 [expr $len-1]]
    }
    return $data
}

proc PlotPDFSetDash {pdf dash} {
    if {$dash == {} || [string trim $dash] == {}} {
	$pdf setLineDash
    } else {
	eval $pdf setLineDash $dash
    }
}

proc PlotPDFFont {font} {
    if {[catch {font actual $font} actual]} {
	return [list 10 Helvetica]
    }

    set family [string tolower [dict get $actual -family]]
    set size [dict get $actual -size]
    set weight [dict get $actual -weight]
    set slant [dict get $actual -slant]

    if {$size < 0} {
	set size [expr -$size]
    }

    switch -glob -- $family {
	*courier* {set pdfFont Courier}
	*times* {set pdfFont Times}
	default {set pdfFont Helvetica}
    }

    if {$weight == {bold}} {
	append pdfFont -Bold
    }
    if {$slant != {roman}} {
	append pdfFont -Oblique
    }

    return [list $size $pdfFont]
}

proc PlotPDFPoint {gr ox oy x y} {
    foreach {sx sy} [$gr transform $x $y] {}
    return [list [expr $ox+$sx] [expr $oy+$sy]]
}

proc PlotPDFClamp {vv minv maxv} {
    if {$vv < $minv} {
	return $minv
    }
    if {$vv > $maxv} {
	return $maxv
    }
    return $vv
}

proc PlotPDFTicks {minv maxv log count} {
    if {$count < 2 || $minv == $maxv} {
	return [list $minv]
    }

    set result {}
    if {$log && $minv > 0 && $maxv > 0} {
	set lmin [expr log10($minv)]
	set lmax [expr log10($maxv)]
	for {set ii 0} {$ii < $count} {incr ii} {
	    lappend result [expr pow(10,$lmin + ($lmax-$lmin)*$ii/double($count-1))]
	}
    } else {
	for {set ii 0} {$ii < $count} {incr ii} {
	    lappend result [expr $minv + ($maxv-$minv)*$ii/double($count-1)]
	}
    }
    return $result
}

proc PlotPDFLabel {vv fmt} {
    if {$fmt != {}} {
	if {![catch {format $fmt $vv} rr]} {
	    return $rr
	}
    }

    return [format %.12g $vv]
}

proc PlotPDFFlushLine {pdf points} {
    if {[llength $points] < 4} {
	return
    }

    if {[llength $points] == 4} {
	eval $pdf line $points
    } else {
	eval $pdf polygon $points -closed 0 -filled 0 -stroke 1
    }
}

proc PlotPDFSymbol {pdf symbol x y size outline fill} {
    if {$symbol == {} || $symbol == {none} || $size <= 0} {
	return
    }

    set r [expr $size/2.]
    PlotPDFColor $pdf $outline $fill

    switch -- $symbol {
	circle {
	    $pdf circle $x $y $r -filled [expr {$fill != {}}] -stroke [expr {$outline != {}}]
	}
	square {
	    $pdf rectangle [expr $x-$r] [expr $y-$r] $size $size \
		-filled [expr {$fill != {}}] -stroke [expr {$outline != {}}]
	}
	diamond {
	    $pdf polygon $x [expr $y-$r] [expr $x+$r] $y $x [expr $y+$r] \
		[expr $x-$r] $y -closed 1 -filled [expr {$fill != {}}] \
		-stroke [expr {$outline != {}}]
	}
	triangle {
	    $pdf polygon $x [expr $y-$r] [expr $x+$r] [expr $y+$r] \
		[expr $x-$r] [expr $y+$r] -closed 1 \
		-filled [expr {$fill != {}}] -stroke [expr {$outline != {}}]
	}
	plus -
	splus {
	    $pdf line [expr $x-$r] $y [expr $x+$r] $y
	    $pdf line $x [expr $y-$r] $x [expr $y+$r]
	}
	cross -
	scross {
	    $pdf line [expr $x-$r] [expr $y-$r] [expr $x+$r] [expr $y+$r]
	    $pdf line [expr $x-$r] [expr $y+$r] [expr $x+$r] [expr $y-$r]
	}
	arrow {
	    $pdf polygon $x [expr $y-$r] [expr $x+$r] [expr $y+$r] \
		$x [expr $y+$r*.35] [expr $x-$r] [expr $y+$r] \
		-closed 1 -filled [expr {$fill != {}}] -stroke [expr {$outline != {}}]
	}
	default {
	    $pdf circle $x $y $r -filled [expr {$fill != {}}] -stroke [expr {$outline != {}}]
	}
    }
}

proc PlotPDFErrorBars {pdf gr ox oy xs ys xe ye xmin xmax ymin ymax elem} {
    set show [PlotPDFGet [list $gr element cget $elem -showerrorbars] none]
    if {$show == {none}} {
	return
    }

    set xe [PlotPDFDataList $xe]
    set ye [PlotPDFDataList $ye]

    set color [PlotPDFGet [list $gr element cget $elem -errorbarcolor] black]
    set width [PlotPDFGet [list $gr element cget $elem -errorbarwidth] 1]
    set cap [PlotPDFGet [list $gr element cget $elem -errorbarcap] 0]
    PlotPDFColor $pdf $color {}
    $pdf setLineWidth $width
    $pdf setLineDash

    set len [llength $xs]
    for {set ii 0} {$ii < $len} {incr ii} {
	set x [lindex $xs $ii]
	set y [lindex $ys $ii]
	if {![string is double -strict $x] || ![string is double -strict $y]} {
	    continue
	}

	if {$ye != {} && $ii < [llength $ye]} {
	    set err [lindex $ye $ii]
	    if {[string is double -strict $err]} {
		foreach {x1 y1} [PlotPDFPoint $gr $ox $oy $x [expr $y-$err]] {}
		foreach {x2 y2} [PlotPDFPoint $gr $ox $oy $x [expr $y+$err]] {}
		set x1 [PlotPDFClamp $x1 $xmin $xmax]
		set x2 [PlotPDFClamp $x2 $xmin $xmax]
		set y1 [PlotPDFClamp $y1 $ymin $ymax]
		set y2 [PlotPDFClamp $y2 $ymin $ymax]
		$pdf line $x1 $y1 $x2 $y2
		if {$cap > 0} {
		    $pdf line [expr $x1-$cap] $y1 [expr $x1+$cap] $y1
		    $pdf line [expr $x2-$cap] $y2 [expr $x2+$cap] $y2
		}
	    }
	}

	if {$xe != {} && $ii < [llength $xe]} {
	    set err [lindex $xe $ii]
	    if {[string is double -strict $err]} {
		foreach {x1 y1} [PlotPDFPoint $gr $ox $oy [expr $x-$err] $y] {}
		foreach {x2 y2} [PlotPDFPoint $gr $ox $oy [expr $x+$err] $y] {}
		set x1 [PlotPDFClamp $x1 $xmin $xmax]
		set x2 [PlotPDFClamp $x2 $xmin $xmax]
		set y1 [PlotPDFClamp $y1 $ymin $ymax]
		set y2 [PlotPDFClamp $y2 $ymin $ymax]
		$pdf line $x1 $y1 $x2 $y2
		if {$cap > 0} {
		    $pdf line $x1 [expr $y1-$cap] $x1 [expr $y1+$cap]
		    $pdf line $x2 [expr $y2-$cap] $x2 [expr $y2+$cap]
		}
	    }
	}
    }
}

proc PlotPDFElement {pdf gr ox oy elem px0 py0 px1 py1} {
    if {[catch {$gr element cget $elem -hide} hide] || $hide} {
	return
    }

    if {[catch {$gr element cget $elem -xdata} xv] ||
	[catch {$gr element cget $elem -ydata} yv]} {
	return
    }

    set xs [PlotPDFDataList $xv]
    set ys [PlotPDFDataList $yv]
    set len [llength $xs]
    if {[llength $ys] < $len} {
	set len [llength $ys]
    }
    if {$len <= 0} {
	return
    }

    set type [PlotPDFGet [list $gr element type $elem] line]
    if {$type == {bar}} {
	set outline [PlotPDFGet [list $gr element cget $elem -outline] black]
	set fill [PlotPDFGet [list $gr element cget $elem -fill] white]
	set width [PlotPDFGet [list $gr element cget $elem -borderwidth] 1]
	set barwidth [PlotPDFGet [list $gr element cget $elem -barwidth] 1]
	PlotPDFColor $pdf $outline $fill
	$pdf setLineWidth $width
	$pdf setLineDash

	for {set ii 0} {$ii < $len} {incr ii} {
	    set x [lindex $xs $ii]
	    set y [lindex $ys $ii]
	    if {![string is double -strict $x] || ![string is double -strict $y]} {
		continue
	    }
	    foreach {x0 y0} [PlotPDFPoint $gr $ox $oy [expr $x-$barwidth/2.] 0] {}
	    foreach {x1 y1} [PlotPDFPoint $gr $ox $oy [expr $x+$barwidth/2.] $y] {}
	    set rx [PlotPDFClamp [expr min($x0,$x1)] $px0 $px1]
	    set ry [PlotPDFClamp [expr min($y0,$y1)] $py0 $py1]
	    set rw [expr [PlotPDFClamp [expr max($x0,$x1)] $px0 $px1]-$rx]
	    set rh [expr [PlotPDFClamp [expr max($y0,$y1)] $py0 $py1]-$ry]
	    if {$rw > 0 && $rh > 0} {
		$pdf rectangle $rx $ry $rw $rh -filled [expr {$fill != {}}] \
		    -stroke [expr {$outline != {} && $width > 0}]
	    }
	}

	return
    }

    set color [PlotPDFGet [list $gr element cget $elem -color] black]
    set linewidth [PlotPDFGet [list $gr element cget $elem -linewidth] 1]
    set dash [PlotPDFGet [list $gr element cget $elem -dashes] {}]
    set symbol [PlotPDFGet [list $gr element cget $elem -symbol] none]
    set pixels [PlotPDFGet [list $gr element cget $elem -pixels] 0]
    set outline [PlotPDFGet [list $gr element cget $elem -outline] $color]
    set fill [PlotPDFGet [list $gr element cget $elem -fill] {}]

    PlotPDFErrorBars $pdf $gr $ox $oy $xs $ys \
	[PlotPDFGet [list $gr element cget $elem -xerror] {}] \
	[PlotPDFGet [list $gr element cget $elem -yerror] {}] \
	$px0 $px1 $py0 $py1 $elem

    if {$linewidth > 0} {
	PlotPDFColor $pdf $color {}
	$pdf setLineWidth $linewidth
	PlotPDFSetDash $pdf $dash
	set points {}
	for {set ii 0} {$ii < $len} {incr ii} {
	    set x [lindex $xs $ii]
	    set y [lindex $ys $ii]
	    if {![string is double -strict $x] || ![string is double -strict $y]} {
		PlotPDFFlushLine $pdf $points
		set points {}
		continue
	    }
	    foreach {px py} [PlotPDFPoint $gr $ox $oy $x $y] {}
	    set px [PlotPDFClamp $px $px0 $px1]
	    set py [PlotPDFClamp $py $py0 $py1]
	    lappend points $px $py
	    if {[llength $points] >= 1000} {
		PlotPDFFlushLine $pdf $points
		set points [lrange $points end-1 end]
	    }
	}
	PlotPDFFlushLine $pdf $points
    }

    if {$symbol != {none} && $pixels > 0} {
	for {set ii 0} {$ii < $len} {incr ii} {
	    set x [lindex $xs $ii]
	    set y [lindex $ys $ii]
	    if {![string is double -strict $x] || ![string is double -strict $y]} {
		continue
	    }
	    foreach {px py} [PlotPDFPoint $gr $ox $oy $x $y] {}
	    if {$px >= $px0 && $px <= $px1 && $py >= $py0 && $py <= $py1} {
		PlotPDFSymbol $pdf $symbol $px $py $pixels $outline $fill
	    }
	}
    }
}

proc PlotPDFGraph {pdf gr ox oy varname cc} {
    upvar #0 $varname var
    global $varname

    set width [winfo width $gr]
    set height [winfo height $gr]
    if {$width <= 1 || $height <= 1} {
	return
    }

    set bg [$gr cget -background]
    set fg [$gr cget -foreground]
    set plotbg [$gr cget -plotbackground]
    $pdf setFillColor $bg
    $pdf rectangle $ox $oy $width $height -filled 1 -stroke 0

    foreach {px py pw ph} [$gr extents plotarea] {}
    set px0 [expr $ox+$px]
    set py0 [expr $oy+$py]
    set px1 [expr $px0+$pw]
    set py1 [expr $py0+$ph]

    $pdf setFillColor $plotbg
    $pdf rectangle $px0 $py0 $pw $ph -filled 1 -stroke 0

    set xlim [$gr axis limits x]
    set ylim [$gr axis limits y]
    set xmin [lindex $xlim 0]
    set xmax [lindex $xlim 1]
    set ymin [lindex $ylim 0]
    set ymax [lindex $ylim 1]

    set xgrid [PlotPDFGet [list $gr xaxis cget -grid] 0]
    set ygrid [PlotPDFGet [list $gr yaxis cget -grid] 0]
    set xlog [PlotPDFGet [list $gr xaxis cget -logscale] 0]
    set ylog [PlotPDFGet [list $gr yaxis cget -logscale] 0]
    if {[info exists var($cc,axis,x,format)]} {
	set xfmt $var($cc,axis,x,format)
    } else {
	set xfmt {}
    }
    if {[info exists var($cc,axis,y,format)]} {
	set yfmt $var($cc,axis,y,format)
    } else {
	set yfmt {}
    }

    $pdf setLineWidth .5
    PlotPDFColor $pdf $fg {}
    $pdf setLineDash
    if {$xgrid} {
	foreach xx [PlotPDFTicks $xmin $xmax $xlog 6] {
	    foreach {gx gy} [PlotPDFPoint $gr $ox $oy $xx $ymin] {}
	    $pdf line $gx $py0 $gx $py1
	}
    }
    if {$ygrid} {
	foreach yy [PlotPDFTicks $ymin $ymax $ylog 6] {
	    foreach {gx gy} [PlotPDFPoint $gr $ox $oy $xmin $yy] {}
	    $pdf line $px0 $gy $px1 $gy
	}
    }

    set elems [$gr element show]
    if {$elems == {}} {
	set elems [$gr element names]
    }
    foreach elem $elems {
	PlotPDFElement $pdf $gr $ox $oy $elem $px0 $py0 $px1 $py1
    }

    PlotPDFColor $pdf $fg $fg
    $pdf setLineWidth 1
    $pdf setLineDash
    $pdf rectangle $px0 $py0 $pw $ph -filled 0 -stroke 1

    foreach {fontSize fontName} [PlotPDFFont [$gr xaxis cget -tickfont]] {}
    set xfg [PlotPDFGet [list $gr xaxis cget -foreground] $fg]
    PlotPDFColor $pdf $xfg $xfg
    $pdf setFont $fontSize $fontName
    set tickLen 4
    foreach xx [PlotPDFTicks $xmin $xmax $xlog 6] {
	foreach {tx ty} [PlotPDFPoint $gr $ox $oy $xx $ymin] {}
	$pdf line $tx $py1 $tx [expr $py1+$tickLen]
	$pdf text [PlotPDFLabel $xx $xfmt] -x $tx -y [expr $py1+$tickLen+$fontSize] -align center
    }

    foreach {fontSize fontName} [PlotPDFFont [$gr yaxis cget -tickfont]] {}
    set yfg [PlotPDFGet [list $gr yaxis cget -foreground] $fg]
    PlotPDFColor $pdf $yfg $yfg
    $pdf setFont $fontSize $fontName
    foreach yy [PlotPDFTicks $ymin $ymax $ylog 6] {
	foreach {tx ty} [PlotPDFPoint $gr $ox $oy $xmin $yy] {}
	$pdf line [expr $px0-$tickLen] $ty $px0 $ty
	$pdf text [PlotPDFLabel $yy $yfmt] -x [expr $px0-$tickLen-3] \
	    -y [expr $ty+$fontSize/2.] -align right
    }

    set title [$gr cget -title]
    if {$title != {}} {
	foreach {fontSize fontName} [PlotPDFFont [$gr cget -font]] {}
	PlotPDFColor $pdf $fg $fg
	$pdf setFont $fontSize $fontName
	$pdf text $title -x [expr $ox+$width/2.] -y [expr $oy+$fontSize+3] -align center
    }

    set xtitle [$gr xaxis cget -title]
    if {$xtitle != {}} {
	foreach {fontSize fontName} [PlotPDFFont [$gr xaxis cget -titlefont]] {}
	set xtitlecolor [PlotPDFGet [list $gr xaxis cget -titlecolor] $xfg]
	PlotPDFColor $pdf $xtitlecolor $xtitlecolor
	$pdf setFont $fontSize $fontName
	$pdf text $xtitle -x [expr ($px0+$px1)/2.] -y [expr $oy+$height-4] -align center
    }

    set ytitle [$gr yaxis cget -title]
    if {$ytitle != {}} {
	foreach {fontSize fontName} [PlotPDFFont [$gr yaxis cget -titlefont]] {}
	set ytitlecolor [PlotPDFGet [list $gr yaxis cget -titlecolor] $yfg]
	PlotPDFColor $pdf $ytitlecolor $ytitlecolor
	$pdf setFont $fontSize $fontName
	$pdf text $ytitle -x [expr $ox+$fontSize+3] -y [expr ($py0+$py1)/2.] \
	    -align center -angle 90
    }
}

proc PlotPDF {varname fn} {
    upvar #0 $varname var
    global $varname

    package require pdf4tcl

    update

    set width [winfo width $var(top)]
    set height [winfo height $var(top)]
    if {$width <= 1 || $height <= 1} {
	set width [winfo reqwidth $var(top)]
	set height [winfo reqheight $var(top)]
    }

    set pdf [::pdf4tcl::new %AUTO% \
		 -paper [list ${width}p ${height}p] \
		 -margin 0 \
		 -orient 1]

    if {[catch {
	set bg [$var(top) cget -background]
	$pdf setFillColor $bg
	$pdf rectangle 0 0 $width $height -filled 1 -stroke 0

	set topx [winfo rootx $var(top)]
	set topy [winfo rooty $var(top)]
	foreach cc $var(graphs) {
	    set gr $var($cc,graph)
	    if {![winfo exists $gr]} {
		continue
	    }
	    PlotPDFGraph $pdf $gr \
		[expr [winfo rootx $gr]-$topx] \
		[expr [winfo rooty $gr]-$topy] \
		$varname $cc
	}

	$pdf write -file $fn
    } rr]} {
	catch {$pdf destroy}
	Error "[msgcat::mc {A pdf generation error has occurred}] $rr"
	return
    }

    catch {$pdf destroy}
}

proc PlotPostScriptSetFonts {varname cc} {
    upvar #0 $varname var
    global $varname

    $var($cc,graph) configure -font "$var(canvas,title,family) $var(canvas,title,size) $var(canvas,title,weight) $var(canvas,title,slant)"

    $var($cc,graph) xaxis configure -tickfont "$var(canvas,axis,font,family) $var(canvas,axis,font,size) $var(canvas,axis,font,weight) $var(canvas,axis,font,slant)" -titlefont "$var(canvas,axis,title,family) $var(canvas,axis,title,size) $var(canvas,axis,title,weight) $var(canvas,axis,title,slant)"

    $var($cc,graph) yaxis configure -tickfont "$var(canvas,axis,font,family) $var(canvas,axis,font,size) $var(canvas,axis,font,weight) $var(canvas,axis,font,slant)" -titlefont "$var(canvas,axis,title,family) $var(canvas,axis,title,size) $var(canvas,axis,title,weight) $var(canvas,axis,title,slant)"

    $var($cc,graph) legend configure -font "$var(canvas,legend,font,family) $var(canvas,legend,font,size) $var(canvas,legend,font,weight) $var(canvas,legend,font,slant)" -titlefont "$var(canvas,legend,title,family) $var(canvas,legend,title,size) $var(canvas,legend,title,weight) $var(canvas,legend,title,slant)"
}

proc PlotPostScriptResetFonts {varname cc} {
    upvar #0 $varname var
    global $varname

    global ds9

    $var($cc,graph) configure \
	-font "{$ds9($var(canvas,title,family))} $var(canvas,title,size) $var(canvas,title,weight) $var(canvas,title,slant)"

    $var($cc,graph) xaxis configure \
	-tickfont "{$ds9($var(canvas,axis,font,family))} $var(canvas,axis,font,size) $var(canvas,axis,font,weight) $var(canvas,axis,font,slant)" \
	-titlefont "{$ds9($var(canvas,axis,title,family))} $var(canvas,axis,title,size) $var(canvas,axis,title,weight) $var(canvas,axis,title,slant)"

    $var($cc,graph) yaxis configure \
	-tickfont "{$ds9($var(canvas,axis,font,family))} $var(canvas,axis,font,size) $var(canvas,axis,font,weight) $var(canvas,axis,font,slant)" \
	-titlefont "{$ds9($var(canvas,axis,title,family))} $var(canvas,axis,title,size) $var(canvas,axis,title,weight) $var(canvas,axis,title,slant)"

    $var($cc,graph) legend configure \
	-font "{$ds9($var(canvas,legend,font,family))} $var(canvas,legend,font,size) $var(canvas,legend,font,weight) $var(canvas,legend,font,slant)" \
	-titlefont "{$ds9($var(canvas,legend,title,family))} $var(canvas,legend,title,size) $var(canvas,legend,title,weight) $var(canvas,legend,title,slant)"
}

proc PlotPostScriptMultiBuild {varname ch prolog width height} {
    upvar #0 $varname var
    global $varname

    # prolog
    set bb [string first {%%EndSetup} $prolog]
    set bb [expr $bb+9]
    puts $ch [string range $prolog 0 $bb]

    foreach cc $var(graphs) {
	set xx [expr $width*$var($cc,tx)]
	set yy [expr $height*$var($cc,ty)]
	puts $ch "gsave"
	puts $ch "$xx $yy translate"

	# begin
	set bb [string first {%%EndSetup} $var($cc,ps)]
	set bb [expr $bb+9]
	incr bb

	# end
	set ee [string last {showpage} $var($cc,ps)]
	incr ee -1

	# body
	puts $ch [string range $var($cc,ps) $bb $ee]

	puts $ch "grestore"
    }

    # trailer
    set ee [string last {showpage} $prolog]
    puts $ch [string range $prolog $ee end]

    close $ch

    foreach cc $var(graphs) {
	unset var($cc,ps)
    }
}
