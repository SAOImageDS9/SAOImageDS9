#  Copyright (C) 1999-2021
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

# PDF
proc PDFGraphColor {pdf stroke fill} {
    if {$stroke != {}} {
	$pdf setStrokeColor $stroke
    }
    if {$fill != {}} {
	$pdf setFillColor $fill
    }
}

proc PDFGraphDictGet {dict key default} {
    if {[dict exists $dict $key]} {
	return [dict get $dict $key]
    }
    return $default
}

proc PDFGraphPoint {gr x0 y0 xx yy} {
    foreach {sx sy} [$gr transform $xx $yy] {}
    return [list [expr $x0+$sx] [expr $y0+$sy]]
}

proc PDFGraphClamp {vv minv maxv} {
    if {$vv < $minv} {
	return $minv
    }
    if {$vv > $maxv} {
	return $maxv
    }
    return $vv
}

proc PDFGraphFlushLine {pdf points} {
    if {[llength $points] < 4} {
	return
    }

    if {[llength $points] == 4} {
	eval $pdf line $points
    } else {
	eval $pdf polygon $points -closed 0 -filled 0 -stroke 1
    }
}

proc PDFGraphTextAlign {anchor} {
    switch -- $anchor {
	e - ne - se {return right}
	w - nw - sw {return left}
	default {return center}
    }
}

proc PDFGraphTextY {y size anchor} {
    switch -- $anchor {
	n - ne - nw {return [expr $y+$size]}
	s - se - sw {return $y}
	default {return [expr $y+$size/2.]}
    }
}

proc PDFGraphDrawAnchoredText {pdf text x y size font color anchor angle} {
    if {$text == {}} {
	return
    }

    PDFGraphColor $pdf $color $color
    $pdf setFont $size $font
    $pdf text $text -x $x -y [PDFGraphTextY $y $size $anchor] \
	-align [PDFGraphTextAlign $anchor] -angle $angle
}

proc PDFGraphDrawSegments {pdf segments x0 y0} {
    foreach seg $segments {
	foreach {x1 y1 x2 y2} $seg {}
	$pdf line [expr $x0+$x1] [expr $y0+$y1] \
	    [expr $x0+$x2] [expr $y0+$y2]
    }
}

proc PDFGraphDrawAxisGrid {pdf gridData x0 y0} {
    if {![PDFGraphDictGet $gridData show 0]} {
	return
    }

    set width [PDFGraphDictGet $gridData linewidth 1]
    if {$width <= 0} {
	return
    }

    PDFGraphColor $pdf [PDFGraphDictGet $gridData color black] {}
    $pdf setLineWidth $width
    PDFCanvasSetDash $pdf [PDFGraphDictGet $gridData dashes {}]
    PDFGraphDrawSegments $pdf [PDFGraphDictGet $gridData segments {}] $x0 $y0
}

proc PDFGraphDrawAxis {pdf axisData x0 y0} {
    if {[PDFGraphDictGet $axisData hide 0] || ![PDFGraphDictGet $axisData use 0]} {
	return
    }

    set color [PDFGraphDictGet $axisData foreground black]
    set width [PDFGraphDictGet $axisData linewidth 1]
    if {$width > 0} {
	PDFGraphColor $pdf $color {}
	$pdf setLineWidth $width
	$pdf setLineDash
	PDFGraphDrawSegments $pdf [PDFGraphDictGet $axisData segments {}] $x0 $y0
    }

    foreach {tickSize tickFont} [PDFCanvasFont [PDFGraphDictGet $axisData tickfont {}]] {}
    foreach tick [PDFGraphDictGet $axisData ticks {}] {
	PDFGraphDrawAnchoredText $pdf \
	    [PDFGraphDictGet $tick label {}] \
	    [expr $x0+[PDFGraphDictGet $tick x 0]] \
	    [expr $y0+[PDFGraphDictGet $tick y 0]] \
	    $tickSize $tickFont $color \
	    [PDFGraphDictGet $tick anchor center] \
	    [PDFGraphDictGet $tick angle 0]
    }

    set title [PDFGraphDictGet $axisData title {}]
    set titleText [PDFGraphDictGet $title text {}]
    if {$titleText != {}} {
	foreach {titleSize titleFont} [PDFCanvasFont [PDFGraphDictGet $title font {}]] {}
	PDFGraphDrawAnchoredText $pdf $titleText \
	    [expr $x0+[PDFGraphDictGet $title x 0]] \
	    [expr $y0+[PDFGraphDictGet $title y 0]] \
	    $titleSize $titleFont \
	    [PDFGraphDictGet $title color $color] \
	    [PDFGraphDictGet $title anchor center] \
	    [PDFGraphDictGet $title angle 0]
    }
}

proc PDFGraph {pdf frame which} {
    set varname ${frame}gr
    global $varname

    if {![array exists $varname]} {
	return
    }

    set id [subst $${varname}($which,id)]
    if {!$id} {
	return
    }

    set gr [subst $${varname}($which)]
    if {![winfo exists $gr]} {
	return
    }

    set x0 [subst $${varname}($which,xx)]
    set y0 [subst $${varname}($which,yy)]
    set width [winfo width $gr]
    set height [winfo height $gr]
    if {$width <= 1 || $height <= 1} {
	return
    }

    set bg [$gr cget -background]
    set fg [$gr cget -foreground]
    set plotbg [$gr cget -plotbackground]

    $pdf setFillColor $bg
    $pdf rectangle $x0 $y0 $width $height -filled 1 -stroke 0

    set xlim [$gr axis limits x]
    set ylim [$gr axis limits y]
    set xmin [lindex $xlim 0]
    set xmax [lindex $xlim 1]
    set ymin [lindex $ylim 0]
    set ymax [lindex $ylim 1]

    set corners {}
    foreach xx [list $xmin $xmax] {
	foreach yy [list $ymin $ymax] {
	    foreach {px py} [PDFGraphPoint $gr $x0 $y0 $xx $yy] {}
	    lappend corners $px $py
	}
    }

    set px0 [lindex $corners 0]
    set px1 $px0
    set py0 [lindex $corners 1]
    set py1 $py0
    for {set ii 0} {$ii < [llength $corners]} {incr ii 2} {
	set px [lindex $corners $ii]
	set py [lindex $corners [expr $ii+1]]
	if {$px < $px0} {set px0 $px}
	if {$px > $px1} {set px1 $px}
	if {$py < $py0} {set py0 $py}
	if {$py > $py1} {set py1 $py}
    }

    $pdf setFillColor $plotbg
    $pdf rectangle $px0 $py0 [expr $px1-$px0] [expr $py1-$py0] \
	-filled 1 -stroke 0

    set axisData {}
    if {![catch {$gr axis names} axisNames]} {
	foreach axis $axisNames {
	    if {![catch {$gr axis pdfdata $axis} data]} {
		if {[PDFGraphDictGet $data hide 0] ||
		    ![PDFGraphDictGet $data use 0]} {
		    continue
		}
		lappend axisData $data
		PDFGraphDrawAxisGrid $pdf [PDFGraphDictGet $data grid {}] $x0 $y0
		set minor [PDFGraphDictGet [PDFGraphDictGet $data grid {}] minor {}]
		PDFGraphDrawAxisGrid $pdf $minor $x0 $y0
	    }
	}
    }

    foreach data $axisData {
	PDFGraphDrawAxis $pdf $data $x0 $y0
    }

    set xv [subst $${varname}($which,vect,xx)]
    set yv [subst $${varname}($which,vect,yy)]
    set len [$xv length]
    if {[$yv length] < $len} {
	set len [$yv length]
    }
    if {$len < 2} {
	return
    }

    set xs [$xv range 0 [expr $len-1]]
    set ys [$yv range 0 [expr $len-1]]

    PDFGraphColor $pdf $fg $fg
    $pdf setLineWidth 1

    set points {}
    for {set ii 0} {$ii < $len} {incr ii} {
	set xx [lindex $xs $ii]
	set yy [lindex $ys $ii]

	if {![string is double -strict $xx] ||
	    ![string is double -strict $yy] ||
	    [string equal -nocase $xx nan] ||
	    [string equal -nocase $yy nan]} {
	    PDFGraphFlushLine $pdf $points
	    set points {}
	    continue
	}

	if {[catch {PDFGraphPoint $gr $x0 $y0 $xx $yy} pp]} {
	    PDFGraphFlushLine $pdf $points
	    set points {}
	    continue
	}

	foreach {px py} $pp {}
	set px [PDFGraphClamp $px $px0 $px1]
	set py [PDFGraphClamp $py $py0 $py1]
	lappend points $px $py

	if {[llength $points] >= 1000} {
	    PDFGraphFlushLine $pdf $points
	    set last [lrange $points end-1 end]
	    set points $last
	}
    }
    PDFGraphFlushLine $pdf $points
}

proc PDFGraphs {pdf frame} {
    global view

    if {$view(graph,horz)} {
	PDFGraph $pdf $frame horz
    }
    if {$view(graph,vert)} {
	PDFGraph $pdf $frame vert
    }
}

proc PDFCanvasSetDash {pdf dash} {
    if {$dash == {}} {
	$pdf setLineDash
    } else {
	eval $pdf setLineDash $dash
    }
}

proc PDFCanvasFont {font} {
    if {[catch {font actual $font} actual]} {
	return [list 12 Helvetica]
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

proc PDFCanvasArrow {pdf x1 y1 x2 y2 fill width shape} {
    if {$fill == {}} {
	return
    }

    foreach {a b c} $shape {}
    if {$a == {}} {
	set a 8
	set b 10
	set c 3
    }

    set dx [expr $x1-$x2]
    set dy [expr $y1-$y2]
    set len [expr hypot($dx,$dy)]
    if {$len <= 0} {
	return
    }

    set ux [expr $dx/$len]
    set uy [expr $dy/$len]
    set px [expr -$uy]
    set py $ux
    set scale [expr max(1,$width)]
    set back [expr $b*$scale]
    set half [expr $c*$scale]

    set bx [expr $x2+$ux*$back]
    set by [expr $y2+$uy*$back]
    set p1x [expr $bx+$px*$half]
    set p1y [expr $by+$py*$half]
    set p2x [expr $bx-$px*$half]
    set p2y [expr $by-$py*$half]

    $pdf setFillColor $fill
    $pdf polygon $x2 $y2 $p1x $p1y $p2x $p2y -closed 1 -filled 1 -stroke 0
}

proc PDFCanvasText {pdf txt x y size align angle} {
    set lines [split $txt "\n"]
    set count [llength $lines]
    if {$count < 1} {
	return
    }

    set lineHeight [expr $size*1.2]
    set firstOffset [expr -($count-1)*$lineHeight/2. + $size/2.]
    set aa [expr $angle*acos(-1)/180.]
    set dx [expr -sin($aa)]
    set dy [expr cos($aa)]

    for {set ii 0} {$ii < $count} {incr ii} {
	set offset [expr $firstOffset + $ii*$lineHeight]
	$pdf text [lindex $lines $ii] \
	    -x [expr $x+$dx*$offset] \
	    -y [expr $y+$dy*$offset] \
	    -align $align -angle $angle
    }
}

proc PDFCanvasGraphics {pdf} {
    global ds9

    foreach id [$ds9(canvas) find withtag graphic] {
	if {[$ds9(canvas) itemcget $id -state] == {hidden}} {
	    continue
	}

	set type [$ds9(canvas) type $id]
	set coords [$ds9(canvas) coords $id]

	switch -- $type {
	    oval {
		foreach {x1 y1 x2 y2} $coords {}
		set outline [$ds9(canvas) itemcget $id -outline]
		set fill [$ds9(canvas) itemcget $id -fill]
		set width [$ds9(canvas) itemcget $id -width]
		set dash [$ds9(canvas) itemcget $id -dash]
		set stroke [expr {$outline != {} && $width > 0}]
		set filled [expr {$fill != {}}]

		if {$stroke} {
		    $pdf setStrokeColor $outline
		    $pdf setLineWidth $width
		    PDFCanvasSetDash $pdf $dash
		}
		if {$filled} {
		    $pdf setFillColor $fill
		}

		$pdf oval [expr ($x1+$x2)/2.] [expr ($y1+$y2)/2.] \
		    [expr abs($x2-$x1)/2.] [expr abs($y2-$y1)/2.] \
		    -filled $filled -stroke $stroke
	    }
	    rectangle {
		foreach {x1 y1 x2 y2} $coords {}
		set outline [$ds9(canvas) itemcget $id -outline]
		set fill [$ds9(canvas) itemcget $id -fill]
		set width [$ds9(canvas) itemcget $id -width]
		set dash [$ds9(canvas) itemcget $id -dash]
		set stroke [expr {$outline != {} && $width > 0}]
		set filled [expr {$fill != {}}]

		if {$stroke} {
		    $pdf setStrokeColor $outline
		    $pdf setLineWidth $width
		    PDFCanvasSetDash $pdf $dash
		}
		if {$filled} {
		    $pdf setFillColor $fill
		}

		$pdf rectangle $x1 $y1 [expr $x2-$x1] [expr $y2-$y1] \
		    -filled $filled -stroke $stroke
	    }
	    polygon {
		set outline [$ds9(canvas) itemcget $id -outline]
		set fill [$ds9(canvas) itemcget $id -fill]
		set width [$ds9(canvas) itemcget $id -width]
		set dash [$ds9(canvas) itemcget $id -dash]
		set stroke [expr {$outline != {} && $width > 0}]
		set filled [expr {$fill != {}}]

		if {$stroke} {
		    $pdf setStrokeColor $outline
		    $pdf setLineWidth $width
		    PDFCanvasSetDash $pdf $dash
		}
		if {$filled} {
		    $pdf setFillColor $fill
		}

		eval $pdf polygon $coords -closed 1 -filled $filled -stroke $stroke
	    }
	    line {
		set fill [$ds9(canvas) itemcget $id -fill]
		set width [$ds9(canvas) itemcget $id -width]
		set dash [$ds9(canvas) itemcget $id -dash]
		set arrow [$ds9(canvas) itemcget $id -arrow]
		set arrowshape [$ds9(canvas) itemcget $id -arrowshape]

		if {$fill != {} && $width > 0} {
		    $pdf setStrokeColor $fill
		    $pdf setFillColor $fill
		    $pdf setLineWidth $width
		    PDFCanvasSetDash $pdf $dash
		    PDFGraphFlushLine $pdf $coords

		    if {$arrow == {first} || $arrow == {both}} {
			PDFCanvasArrow $pdf \
			    [lindex $coords 2] [lindex $coords 3] \
			    [lindex $coords 0] [lindex $coords 1] \
			    $fill $width $arrowshape
		    }
		    if {$arrow == {last} || $arrow == {both}} {
			set n [llength $coords]
			PDFCanvasArrow $pdf \
			    [lindex $coords [expr $n-4]] [lindex $coords [expr $n-3]] \
			    [lindex $coords [expr $n-2]] [lindex $coords [expr $n-1]] \
			    $fill $width $arrowshape
		    }
		}
	    }
	    text {
		foreach {x y} $coords {}
		set txt [$ds9(canvas) itemcget $id -text]
		set fill [$ds9(canvas) itemcget $id -fill]
		set angle [$ds9(canvas) itemcget $id -angle]
		set justify [$ds9(canvas) itemcget $id -justify]
		foreach {size font} [PDFCanvasFont [$ds9(canvas) itemcget $id -font]] {}

		switch -- $justify {
		    center {set align center}
		    right {set align right}
		    default {set align left}
		}

		if {$fill != {}} {
		    $pdf setFillColor $fill
		    $pdf setFont $size $font
		    PDFCanvasText $pdf $txt $x $y $size $align $angle
		}
	    }
	    image {
		foreach {x y} $coords {}
		set image [$ds9(canvas) itemcget $id -image]
		if {$image == {}} {
		    continue
		}

		if {[catch {set imgid [$pdf addRawImage [$image data]]}]} {
		    continue
		}

		$pdf putImage $imgid $x $y \
		    -width [image width $image] \
		    -height [image height $image] \
		    -anchor [$ds9(canvas) itemcget $id -anchor]
	    }
	}
    }

    $pdf setLineDash
}

proc PDFUtilUserName {} {
    global env
    if {[info exists env(USER)]} {
        set username $env(USER)
    } elseif {[info exists env(LOGNAME)]} {
        set username $env(LOGNAME)
    } else {
        set username "unknown"
    }

    set fullName ""

    # 2. Try to use getent safely
    set getent [auto_execok getent]
    if {$username ne "unknown" && $getent ne {} &&
	[catch {exec {*}$getent passwd $username} entry] == 0} {
        # Success: Parse the string using pure Tcl routines
        set fields [split $entry ":"]
        set gecos [lindex $fields 4]
        set fullName [lindex [split $gecos ","] 0]
    }

    # 3. Fallback: If getent failed, is missing, or fullName is blank
    if {$fullName eq ""} {
        if {[info exists env(LOGNAME)]} {
            set fullName $env(LOGNAME)
        } else {
            set fullName $username
        }
    }

    return $fullName
}


proc PDF {fn} {
    global ds9
    global ps
    global pps
    global current

    RealizeDS9
    UpdateColormapLevel

    set width [winfo width $ds9(canvas)]
    set height [winfo height $ds9(canvas)]
    set bg [$ds9(canvas) cget -background]

    set cmyk [expr {$pps(color) == "cmyk" ? 1 : 0}]
    set title {}
    set obj {}
    set metaFrame $current(frame)
    if {$metaFrame == {} && [llength $ds9(active)]} {
	set metaFrame [lindex $ds9(active) 0]
    }
    if {$metaFrame != {} && [llength [info commands $metaFrame]]} {
	catch {set title [$metaFrame get fits file name]}
	catch {set obj [$metaFrame get fits object name]}
    }

    if {[catch {
	package require pdf4tcl
	set pdf [::pdf4tcl::new %AUTO% \
		     -paper [list ${width}p ${height}p] \
		     -margin 0 \
		     -orient 1 \
             -cmyk $cmyk]

    # Need to set font to work around a bug in pdf4tcl
    $pdf setFont 12 Helvetica
    $pdf metadata -creator "SAOImageDS9 $ds9(version,display)" \
        -title "$title" -subject "$obj" -author [PDFUtilUserName]

	$pdf setFillColor $bg
	$pdf rectangle 0 0 $width $height -filled 1 -stroke 0

	foreach ff $ds9(frames) {
	    if {![llength [info commands $ff]]} {
		continue
	    }

	    $ff postscript level $ps(level)
	    $ff postscript colorspace $ps(color)
	    $ff postscript resolution $ps(resolution)
	    $ff pdf $pdf

	    set cb ${ff}cb
	    if {[llength [info commands $cb]]} {
		$cb postscript level $ps(level)
		$cb postscript colorspace $ps(color)
		$cb postscript resolution $ps(resolution)
		$cb pdf $pdf
	    }

	    PDFGraphs $pdf $ff
	}

	PDFCanvasGraphics $pdf

	$pdf write -file $fn
    } rr]} {
	if {[info exists pdf]} {
	    catch {$pdf destroy}
	}
	Error "[msgcat::mc {A pdf generation error has occurred}] $rr"
	return
    }

    if {[info exists pdf]} {
	catch {$pdf destroy}
    }
}

