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

proc PlotPDFDictGet {dict key default} {
    if {[dict exists $dict $key]} {
	return [dict get $dict $key]
    }
    return $default
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

proc PlotPDFAxisTicks {gr axis minv maxv log fmt count} {
    if {![catch {$gr axis ticks $axis} ticks] && [llength $ticks]} {
	return $ticks
    }

    set result {}
    foreach value [PlotPDFTicks $minv $maxv $log $count] {
	if {![catch {$gr axis transform $axis $value} pos]} {
	    lappend result [list $value [PlotPDFLabel $value $fmt] $pos $pos]
	}
    }
    return $result
}

proc PlotPDFTextWidth {text size} {
    return [expr [string length $text]*$size*.6]
}

proc PlotPDFLegendLabel {label} {
    if {[string length $label] > 80} {
	return "[string range $label 0 76]..."
    }
    return $label
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

proc PlotPDFDrawTrace {pdf trace ox oy px0 py0 px1 py1} {
    set points {}
    foreach {x y} $trace {
	if {![string is double -strict $x] || ![string is double -strict $y]} {
	    PlotPDFFlushLine $pdf $points
	    set points {}
	    continue
	}
	set px [PlotPDFClamp [expr $ox+$x] $px0 $px1]
	set py [PlotPDFClamp [expr $oy+$y] $py0 $py1]
	lappend points $px $py
	if {[llength $points] >= 1000} {
	    PlotPDFFlushLine $pdf $points
	    set points [lrange $points end-1 end]
	}
    }
    PlotPDFFlushLine $pdf $points
}

proc PlotPDFDrawScreenPolygon {pdf coords ox oy px0 py0 px1 py1 filled stroke} {
    set points {}
    foreach {x y} $coords {
	if {![string is double -strict $x] || ![string is double -strict $y]} {
	    continue
	}
	lappend points \
	    [PlotPDFClamp [expr $ox+$x] $px0 $px1] \
	    [PlotPDFClamp [expr $oy+$y] $py0 $py1]
    }
    if {[llength $points] >= 6} {
	eval $pdf polygon $points -closed 1 -filled $filled -stroke $stroke
    }
}

proc PlotPDFDrawScreenSegments {pdf segments ox oy} {
    foreach seg $segments {
	foreach {x1 y1 x2 y2} $seg {}
	if {![string is double -strict $x1] || ![string is double -strict $y1] ||
	    ![string is double -strict $x2] || ![string is double -strict $y2]} {
	    continue
	}
	$pdf line [expr $ox+$x1] [expr $oy+$y1] [expr $ox+$x2] [expr $oy+$y2]
    }
}

proc PlotPDFTextAlign {anchor} {
    switch -- $anchor {
	e - ne - se {return right}
	w - nw - sw {return left}
	default {return center}
    }
}

proc PlotPDFTextY {y size anchor} {
    switch -- $anchor {
	n - ne - nw {return [expr $y+$size]}
	s - se - sw {return $y}
	default {return [expr $y+$size/2.]}
    }
}

proc PlotPDFDrawAnchoredText {pdf text x y size font color anchor angle} {
    if {$text == {}} {
	return
    }

    PlotPDFColor $pdf $color $color
    $pdf setFont $size $font
    $pdf text $text -x $x -y [PlotPDFTextY $y $size $anchor] \
	-align [PlotPDFTextAlign $anchor] -angle $angle
}

proc PlotPDFDrawAxisPdfData {pdf axisData ox oy} {
    if {[PlotPDFDictGet $axisData hide 0] || ![PlotPDFDictGet $axisData use 0]} {
	return
    }

    set color [PlotPDFDictGet $axisData foreground black]
    set width [PlotPDFDictGet $axisData linewidth 1]
    if {$width > 0} {
	PlotPDFColor $pdf $color {}
	$pdf setLineWidth $width
	$pdf setLineDash
	PlotPDFDrawScreenSegments $pdf [PlotPDFDictGet $axisData segments {}] $ox $oy
    }

    foreach {tickSize tickFont} [PlotPDFFont [PlotPDFDictGet $axisData tickfont {}]] {}
    foreach tick [PlotPDFDictGet $axisData ticks {}] {
	PlotPDFDrawAnchoredText $pdf \
	    [PlotPDFDictGet $tick label {}] \
	    [expr $ox+[PlotPDFDictGet $tick x 0]] \
	    [expr $oy+[PlotPDFDictGet $tick y 0]] \
	    $tickSize $tickFont $color \
	    [PlotPDFDictGet $tick anchor center] \
	    [PlotPDFDictGet $tick angle 0]
    }

    set title [PlotPDFDictGet $axisData title {}]
    set titleText [PlotPDFDictGet $title text {}]
    if {$titleText != {}} {
	foreach {titleSize titleFont} [PlotPDFFont [PlotPDFDictGet $title font {}]] {}
	PlotPDFDrawAnchoredText $pdf $titleText \
	    [expr $ox+[PlotPDFDictGet $title x 0]] \
	    [expr $oy+[PlotPDFDictGet $title y 0]] \
	    $titleSize $titleFont \
	    [PlotPDFDictGet $title color $color] \
	    [PlotPDFDictGet $title anchor center] \
	    [PlotPDFDictGet $title angle 0]
    }
}

proc PlotPDFDrawElementErrors {pdf style ox oy} {
    set segments [concat \
		      [PlotPDFDictGet $style xerrors {}] \
		      [PlotPDFDictGet $style yerrors {}]]
    if {$segments == {}} {
	return
    }

    PlotPDFColor $pdf [PlotPDFDictGet $style errorbarcolor black] {}
    $pdf setLineWidth [PlotPDFDictGet $style errorbarwidth 1]
    $pdf setLineDash
    PlotPDFDrawScreenSegments $pdf $segments $ox $oy
}

proc PlotPDFDrawStyleSymbols {pdf style ox oy px0 py0 px1 py1} {
    set symbol [PlotPDFDictGet $style symbol none]
    set pixels [PlotPDFDictGet $style pixels 0]
    if {$symbol == {none} || $pixels <= 0} {
	return
    }

    set outline [PlotPDFDictGet $style outline [PlotPDFDictGet $style color black]]
    set fill [PlotPDFDictGet $style fill $outline]
    $pdf setLineWidth [PlotPDFDictGet $style outlinewidth 1]

    foreach {x y} [PlotPDFDictGet $style symbols {}] {
	set px [expr $ox+$x]
	set py [expr $oy+$y]
	if {$px >= $px0 && $px <= $px1 && $py >= $py0 && $py <= $py1} {
	    PlotPDFSymbol $pdf $symbol $px $py $pixels $outline $fill
	}
    }
}

proc PlotPDFDrawBarStyles {pdf styles ox oy} {
    foreach style $styles {
	set fill [PlotPDFDictGet $style fill white]
	set outline [PlotPDFDictGet $style outline black]
	set width [PlotPDFDictGet $style borderwidth 1]
	PlotPDFColor $pdf $outline $fill
	$pdf setLineWidth $width
	$pdf setLineDash

	foreach rect [PlotPDFDictGet $style bars {}] {
	    foreach {x y w h} $rect {}
	    if {$w > 0 && $h > 0} {
		$pdf rectangle [expr $ox+$x] [expr $oy+$y] $w $h \
		    -filled [expr {$fill != {}}] \
		    -stroke [expr {$outline != {} && $width > 0}]
	    }
	}

	PlotPDFDrawElementErrors $pdf $style $ox $oy
    }
}

proc PlotPDFDrawMarkerPdfData {pdf markerData ox oy} {
    set type [PlotPDFDictGet $markerData type {}]

    switch -- $type {
	line {
	    set outline [PlotPDFDictGet $markerData outline black]
	    set width [PlotPDFDictGet $markerData linewidth 1]
	    if {$outline != {} && $width > 0} {
		PlotPDFColor $pdf $outline {}
		$pdf setLineWidth $width
		PlotPDFSetDash $pdf [PlotPDFDictGet $markerData dashes {}]
		PlotPDFDrawScreenSegments $pdf [PlotPDFDictGet $markerData segments {}] $ox $oy
	    }
	}
	polygon {
	    set fill [PlotPDFDictGet $markerData fill {}]
	    set outline [PlotPDFDictGet $markerData outline black]
	    set width [PlotPDFDictGet $markerData linewidth 1]
	    set points {}
	    foreach {x y} [PlotPDFDictGet $markerData fillpoints {}] {
		lappend points [expr $ox+$x] [expr $oy+$y]
	    }
	    if {[llength $points] >= 6 && $fill != {}} {
		PlotPDFColor $pdf $outline $fill
		$pdf setLineWidth $width
		$pdf setLineDash
		eval $pdf polygon $points -closed 1 -filled 1 \
		    -stroke [expr {$outline != {} && $width > 0}]
	    }
	    if {$outline != {} && $width > 0} {
		PlotPDFColor $pdf $outline {}
		$pdf setLineWidth $width
		PlotPDFSetDash $pdf [PlotPDFDictGet $markerData dashes {}]
		PlotPDFDrawScreenSegments $pdf \
		    [PlotPDFDictGet $markerData outlineSegments {}] $ox $oy
	    }
	}
	text {
	    set fill [PlotPDFDictGet $markerData fill {}]
	    set bg {}
	    foreach {x y} [PlotPDFDictGet $markerData background {}] {
		lappend bg [expr $ox+$x] [expr $oy+$y]
	    }
	    if {$fill != {} && [llength $bg] >= 6} {
		PlotPDFColor $pdf {} $fill
		eval $pdf polygon $bg -closed 1 -filled 1 -stroke 0
	    }
	    foreach {size font} [PlotPDFFont [PlotPDFDictGet $markerData font {}]] {}
	    PlotPDFDrawAnchoredText $pdf \
		[PlotPDFDictGet $markerData text {}] \
		[expr $ox+[PlotPDFDictGet $markerData x 0]] \
		[expr $oy+[PlotPDFDictGet $markerData y 0]] \
		$size $font \
		[PlotPDFDictGet $markerData foreground black] \
		[PlotPDFDictGet $markerData anchor center] \
		[PlotPDFDictGet $markerData angle 0]
	}
    }
}

proc PlotPDFDrawMarkers {pdf gr ox oy px0 py0 px1 py1 under} {
    if {[catch {$gr marker names} markers]} {
	return
    }

    foreach marker $markers {
	if {![catch {$gr marker pdfdata $marker} markerData]} {
	    if {[PlotPDFDictGet $markerData hide 0]} {
		continue
	    }
	    if {[PlotPDFDictGet $markerData under 0] != $under} {
		continue
	    }
	    set elem [PlotPDFDictGet $markerData element {}]
	    if {$elem != {} && [PlotPDFGet [list $gr element cget $elem -hide] 0]} {
		continue
	    }
	    PlotPDFDrawMarkerPdfData $pdf $markerData $ox $oy
	    continue
	}

	if {[PlotPDFGet [list $gr marker cget $marker -hide] 0]} {
	    continue
	}
	if {[PlotPDFGet [list $gr marker cget $marker -under] 0] != $under} {
	    continue
	}

	set elem [PlotPDFGet [list $gr marker cget $marker -element] {}]
	if {$elem != {} && [PlotPDFGet [list $gr element cget $elem -hide] 0]} {
	    continue
	}

	set type [PlotPDFGet [list $gr marker type $marker] {}]
	set coords [PlotPDFGet [list $gr marker cget $marker -coords] {}]
	set xoff [PlotPDFGet [list $gr marker cget $marker -xoffset] 0]
	set yoff [PlotPDFGet [list $gr marker cget $marker -yoffset] 0]

	switch -- $type {
	    line {
		set color [PlotPDFGet [list $gr marker cget $marker -outline] black]
		set width [PlotPDFGet [list $gr marker cget $marker -linewidth] 1]
		set dash [PlotPDFGet [list $gr marker cget $marker -dashes] {}]
		PlotPDFColor $pdf $color {}
		$pdf setLineWidth $width
		PlotPDFSetDash $pdf $dash
		set points {}
		foreach {x y} $coords {
		    if {[catch {$gr transform $x $y} pp]} {
			PlotPDFFlushLine $pdf $points
			set points {}
			continue
		    }
		    foreach {px py} $pp {}
		    lappend points \
			[PlotPDFClamp [expr $ox+$px+$xoff] $px0 $px1] \
			[PlotPDFClamp [expr $oy+$py+$yoff] $py0 $py1]
		}
		PlotPDFFlushLine $pdf $points
	    }
	    polygon {
		set outline [PlotPDFGet [list $gr marker cget $marker -outline] black]
		set fill [PlotPDFGet [list $gr marker cget $marker -fill] {}]
		set width [PlotPDFGet [list $gr marker cget $marker -linewidth] 1]
		set dash [PlotPDFGet [list $gr marker cget $marker -dashes] {}]
		set points {}
		foreach {x y} $coords {
		    if {![catch {$gr transform $x $y} pp]} {
			foreach {px py} $pp {}
			lappend points \
			    [PlotPDFClamp [expr $ox+$px+$xoff] $px0 $px1] \
			    [PlotPDFClamp [expr $oy+$py+$yoff] $py0 $py1]
		    }
		}
		if {[llength $points] >= 6} {
		    if {$outline != {} && $width > 0} {
			$pdf setLineWidth $width
			PlotPDFSetDash $pdf $dash
		    }
		    PlotPDFColor $pdf $outline $fill
		    eval $pdf polygon $points -closed 1 -filled [expr {$fill != {}}] \
			-stroke [expr {$outline != {} && $width > 0}]
		}
	    }
	    text {
		foreach {x y} $coords {}
		if {[catch {$gr transform $x $y} pp]} {
		    continue
		}
		foreach {px py} $pp {}
		set text [PlotPDFGet [list $gr marker cget $marker -text] {}]
		set color [PlotPDFGet [list $gr marker cget $marker -foreground] black]
		set angle [PlotPDFGet [list $gr marker cget $marker -rotate] 0]
		set anchor [PlotPDFGet [list $gr marker cget $marker -anchor] center]
		foreach {size font} [PlotPDFFont \
					 [PlotPDFGet [list $gr marker cget $marker -font] [$gr cget -font]]] {}
		switch -glob -- $anchor {
		    *e {set align right}
		    *w {set align left}
		    default {set align center}
		}
		PlotPDFColor $pdf $color $color
		$pdf setFont $size $font
		$pdf text $text -x [expr $ox+$px+$xoff] -y [expr $oy+$py+$yoff+$size/2.] \
		    -align $align -angle $angle
	    }
	}
    }
    $pdf setLineDash
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
    set pdfdata {}
    catch {set pdfdata [$gr element pdfdata $elem]}
    if {$type == {bar}} {
	if {[dict exists $pdfdata styles]} {
	    PlotPDFDrawBarStyles $pdf [dict get $pdfdata styles] $ox $oy
	    return
	}

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

    if {[dict exists $pdfdata area]} {
	set area [dict get $pdfdata area]
	set areaFill [PlotPDFDictGet $area fill {}]
	if {$areaFill != {}} {
	    PlotPDFColor $pdf {} $areaFill
	    PlotPDFDrawScreenPolygon $pdf [PlotPDFDictGet $area points {}] \
		$ox $oy $px0 $py0 $px1 $py1 1 0
	}
    }

    if {[dict exists $pdfdata styles]} {
	foreach style [dict get $pdfdata styles] {
	    PlotPDFDrawElementErrors $pdf $style $ox $oy
	}
    } else {
	PlotPDFErrorBars $pdf $gr $ox $oy $xs $ys \
	    [PlotPDFGet [list $gr element cget $elem -xerror] {}] \
	    [PlotPDFGet [list $gr element cget $elem -yerror] {}] \
	    $px0 $px1 $py0 $py1 $elem
    }

    if {$linewidth > 0} {
	PlotPDFColor $pdf $color {}
	$pdf setLineWidth $linewidth
	PlotPDFSetDash $pdf $dash

	set drewTraces 0
	if {![catch {$gr element traces $elem} traces] && [llength $traces]} {
	    foreach trace $traces {
		PlotPDFDrawTrace $pdf $trace $ox $oy $px0 $py0 $px1 $py1
		set drewTraces 1
	    }
	}

	if {!$drewTraces} {
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
    }

    if {[dict exists $pdfdata styles]} {
	foreach style [dict get $pdfdata styles] {
	    PlotPDFDrawStyleSymbols $pdf $style $ox $oy $px0 $py0 $px1 $py1
	}
    } elseif {$symbol != {none} && $pixels > 0} {
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

proc PlotPDFLegendEntry {gr elem} {
    if {[catch {$gr element cget $elem -hide} hide] || $hide} {
	return {}
    }

    if {[catch {$gr element cget $elem -label} label]} {
	return {}
    }
    if {$label == {}} {
	return {}
    }
    set label [PlotPDFLegendLabel $label]

    set type [PlotPDFGet [list $gr element type $elem] line]
    if {$type == {bar}} {
	set outline [PlotPDFGet [list $gr element cget $elem -outline] black]
	set fill [PlotPDFGet [list $gr element cget $elem -fill] white]
	set width [PlotPDFGet [list $gr element cget $elem -borderwidth] 1]
	return [list $elem $label $type $outline $width {} none 0 $outline $fill]
    }

    set color [PlotPDFGet [list $gr element cget $elem -color] black]
    set linewidth [PlotPDFGet [list $gr element cget $elem -linewidth] 1]
    set dash [PlotPDFGet [list $gr element cget $elem -dashes] {}]
    set symbol [PlotPDFGet [list $gr element cget $elem -symbol] none]
    set pixels [PlotPDFGet [list $gr element cget $elem -pixels] 0]
    set outline [PlotPDFGet [list $gr element cget $elem -outline] $color]
    set fill [PlotPDFGet [list $gr element cget $elem -fill] {}]
    return [list $elem $label $type $color $linewidth $dash $symbol $pixels $outline $fill]
}

proc PlotPDFLegend {pdf gr ox oy px0 py0 px1 py1 elems fg bg} {
    if {[PlotPDFGet [list $gr legend cget -hide] 1]} {
	return
    }

    set entries {}
    set maxLabelWidth 0
    set maxEntries 100
    set maxScanned 1000
    set scanned 0
    foreach elem $elems {
	incr scanned
	if {$scanned > $maxScanned} {
	    break
	}
	set entry [PlotPDFLegendEntry $gr $elem]
	if {$entry == {}} {
	    continue
	}
	lappend entries $entry
	if {[llength $entries] >= $maxEntries} {
	    break
	}
    }
    if {![llength $entries]} {
	return
    }

    foreach {fontSize fontName} [PlotPDFFont [PlotPDFGet [list $gr legend cget -font] [$gr cget -font]]] {}
    foreach {titleSize titleFont} [PlotPDFFont [PlotPDFGet [list $gr legend cget -titlefont] [$gr cget -font]]] {}
    set title [PlotPDFGet [list $gr legend cget -title] {}]
    set position [PlotPDFGet [list $gr legend cget -position] right]
    set legendFg [PlotPDFGet [list $gr legend cget -foreground] $fg]
    set titleFg [PlotPDFGet [list $gr legend cget -titlecolor] $legendFg]
    set legendBg [PlotPDFGet [list $gr legend cget -background] $bg]

    foreach entry $entries {
	set ww [PlotPDFTextWidth [lindex $entry 1] $fontSize]
	if {$ww > $maxLabelWidth} {
	    set maxLabelWidth $ww
	}
    }

    set pad 4
    set symbolWidth [expr $fontSize*2.2]
    set maxEntryWidth [expr max(40, [winfo width $gr] - 2*$pad)]
    set entryWidth [expr min($symbolWidth + $maxLabelWidth + 10, $maxEntryWidth)]
    set rowHeight [expr max($fontSize*1.45, 12)]
    set titleHeight [expr {$title == {} ? 0 : $titleSize*1.45}]
    set n [llength $entries]
    set columns 1

    switch -glob -- $position {
	top* -
	bottom* {
	    set avail [expr max(1,$px1-$px0)]
	    set columns [expr int($avail/$entryWidth)]
	    if {$columns < 1} {
		set columns 1
	    }
	    if {$columns > $n} {
		set columns $n
	    }
	}
    }
    set rows [expr int(ceil($n/double($columns)))]

    set legendW [expr $columns*$entryWidth + 2*$pad]
    if {$title != {}} {
	set titleW [expr [PlotPDFTextWidth $title $titleSize] + 2*$pad]
	if {$titleW > $legendW} {
	    set legendW $titleW
	}
    }
    set legendH [expr $rows*$rowHeight + $titleHeight + 2*$pad]

    set width [winfo width $gr]
    set height [winfo height $gr]
    if {$legendW > $width - 2*$pad} {
	set legendW [expr $width - 2*$pad]
    }
    if {$legendH > $height - 2*$pad} {
	set legendH [expr $height - 2*$pad]
    }
    if {$legendW <= 0 || $legendH <= 0} {
	return
    }

    set haveLegendExtents 0
    if {![catch {$gr extents legend} legendExtents] && [llength $legendExtents] == 4} {
	foreach {legx legy legw legh} $legendExtents {}
	if {$legw > 0 && $legh > 0} {
	    set haveLegendExtents 1
	}
    }

    switch -glob -- $position {
	left* {
	    if {$haveLegendExtents} {
		set lx [expr $ox+$legx]
		set ly [expr $oy+$legy]
	    } else {
		set lx [expr max($ox+$pad, $px0-$legendW-8)]
		set ly [expr $py0 + (($py1-$py0)-$legendH)/2.]
	    }
	}
	top* {
	    if {$haveLegendExtents} {
		set lx [expr $ox+$legx]
		set ly [expr $oy+$legy]
	    } else {
		set lx [expr $px0 + (($px1-$px0)-$legendW)/2.]
		set ly [expr max($oy+$pad, $py0-$legendH-8)]
	    }
	}
	bottom* {
	    if {$haveLegendExtents} {
		set lx [expr $ox+$legx]
		set ly [expr max($oy+$legy, $oy+$height-$legendH-$pad)]
	    } else {
		set lx [expr $px0 + (($px1-$px0)-$legendW)/2.]
		set ly [expr min($oy+$height-$legendH-$pad, $py1+8)]
	    }
	}
	plotarea -
	xy {
	    set lx [expr $px1-$legendW-8]
	    set ly [expr $py0+8]
	}
	default {
	    if {$haveLegendExtents} {
		set lx [expr $ox+$legx]
		set ly [expr $oy+$legy]
	    } else {
		set lx [expr min($ox+$width-$legendW-$pad, $px1+8)]
		set ly [expr $py0 + (($py1-$py0)-$legendH)/2.]
	    }
	}
    }

    if {$lx < $ox+$pad} {
	set lx [expr $ox+$pad]
    }
    if {$ly < $oy+$pad} {
	set ly [expr $oy+$pad]
    }
    if {$lx+$legendW > $ox+$width-$pad} {
	set lx [expr $ox+$width-$legendW-$pad]
    }
    if {$ly+$legendH > $oy+$height-$pad} {
	set ly [expr $oy+$height-$legendH-$pad]
    }

    if {$legendBg != {}} {
	$pdf setFillColor $legendBg
	$pdf rectangle $lx $ly $legendW $legendH -filled 1 -stroke 0
    }

    set y [expr $ly+$pad]
    if {$title != {}} {
	PlotPDFColor $pdf $titleFg $titleFg
	$pdf setFont $titleSize $titleFont
	$pdf text $title -x [expr $lx+$pad] -y [expr $y+$titleSize] -align left
	set y [expr $y+$titleHeight]
    }

    $pdf setFont $fontSize $fontName
    for {set ii 0} {$ii < $n} {incr ii} {
	set entry [lindex $entries $ii]
	foreach {elem label type color linewidth dash symbol pixels outline fill} $entry {}
	set col [expr $ii % $columns]
	set row [expr int($ii/$columns)]
	set ex [expr $lx+$pad+$col*$entryWidth]
	set ey [expr $y+$row*$rowHeight]
	set sy [expr $ey+$rowHeight/2.]

	if {$type == {bar}} {
	    PlotPDFColor $pdf $outline $fill
	    $pdf setLineWidth $linewidth
	    $pdf setLineDash
	    $pdf rectangle $ex [expr $sy-$fontSize*.35] $symbolWidth [expr $fontSize*.7] \
		-filled [expr {$fill != {}}] -stroke [expr {$outline != {} && $linewidth > 0}]
	} else {
	    if {$linewidth > 0} {
		PlotPDFColor $pdf $color {}
		$pdf setLineWidth $linewidth
		PlotPDFSetDash $pdf $dash
		$pdf line $ex $sy [expr $ex+$symbolWidth] $sy
	    }
	    if {$symbol != {none} && $pixels > 0} {
		PlotPDFSymbol $pdf $symbol [expr $ex+$symbolWidth/2.] $sy \
		    $pixels $outline $fill
	    }
	}

	PlotPDFColor $pdf $legendFg $legendFg
	$pdf setLineDash
	$pdf text $label -x [expr $ex+$symbolWidth+6] \
	    -y [expr $ey+$fontSize+($rowHeight-$fontSize)/2.] -align left
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
    set xticks [PlotPDFAxisTicks $gr x $xmin $xmax $xlog $xfmt 6]
    set yticks [PlotPDFAxisTicks $gr y $ymin $ymax $ylog $yfmt 6]

    $pdf setLineWidth .5
    PlotPDFColor $pdf $fg {}
    $pdf setLineDash
    if {$xgrid} {
	foreach tick $xticks {
	    set gx [expr $ox+[lindex $tick 2]]
	    $pdf line $gx $py0 $gx $py1
	}
    }
    if {$ygrid} {
	foreach tick $yticks {
	    set gy [expr $oy+[lindex $tick 3]]
	    $pdf line $px0 $gy $px1 $gy
	}
    }

    PlotPDFDrawMarkers $pdf $gr $ox $oy $px0 $py0 $px1 $py1 1

    set elems [$gr element show]
    if {$elems == {}} {
	set elems [$gr element names]
    }
    set drawElems [lreverse $elems]
    foreach elem $drawElems {
	PlotPDFElement $pdf $gr $ox $oy $elem $px0 $py0 $px1 $py1
    }

    PlotPDFDrawMarkers $pdf $gr $ox $oy $px0 $py0 $px1 $py1 0

    PlotPDFColor $pdf $fg $fg
    $pdf setLineWidth 1
    $pdf setLineDash
    $pdf rectangle $px0 $py0 $pw $ph -filled 0 -stroke 1

    if {![catch {$gr axis names} axisNames]} {
	foreach axis $axisNames {
	    if {![catch {$gr axis pdfdata $axis} axisData]} {
		PlotPDFDrawAxisPdfData $pdf $axisData $ox $oy
	    }
	}
    }

    set title [$gr cget -title]
    if {$title != {}} {
	foreach {fontSize fontName} [PlotPDFFont [$gr cget -font]] {}
	PlotPDFColor $pdf $fg $fg
	$pdf setFont $fontSize $fontName
	$pdf text $title -x [expr $ox+$width/2.] -y [expr $oy+$fontSize+3] -align center
    }

    catch {PlotPDFLegend $pdf $gr $ox $oy $px0 $py0 $px1 $py1 $elems $fg $bg}
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
