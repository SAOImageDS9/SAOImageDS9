#  Copyright (C) 1999-2021
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc PSDef {} {
    global ds9
    global ps
    global pps

    global tcl_platform
    switch $tcl_platform(os) {
	Linux {set ps(dest) printer}
	Darwin -
	{Windows NT} {set ps(dest) file}
    }
    set ps(cmd) {lp}
    set ps(filename) {ds9.ps}
    set ps(filename,txt) {ds9.txt}
    set ps(color) rgb
    set ps(level) 2
    set ps(resolution) 150

    set ps(orient) portrait
    set ps(scale) 100
    set ps(size) letter
    set ps(width) 8.5
    set ps(height) 11

    array set pps [array get ps]

    global psFontMap
    for {set ss 1} {$ss < 128} {incr ss} {
	# Times-Roman
	set psFontMap(times\ $ss\ normal\ roman) "Times-Roman $ss"
	# Times-Bold
	set psFontMap(times\ $ss\ bold\ roman) "Times-Bold $ss"
	# Times-BoldItalic
	set psFontMap(times\ $ss\ bold\ italic) "Times-BoldItalic $ss"
	# Times-Italic
	set psFontMap(times\ $ss\ normal\ italic) "Times-Italic $ss"

	# Courier
	set psFontMap(courier\ $ss\ normal\ roman) "Courier $ss"
	# Courier-Bold
	set psFontMap(courier\ $ss\ bold\ roman) "Courier-Bold $ss"
	# Courier-BoldOblique
	set psFontMap(courier\ $ss\ bold\ italic) "Courier-BoldOblique $ss"
	# Courier-Oblique
	set psFontMap(courier\ $ss\ normal\ italic) "Courier-Oblique $ss"

	# Helvetica
	set psFontMap(helvetica\ $ss\ normal\ roman) "Helvetica $ss"
	# Helvetica-Bold
	set psFontMap(helvetica\ $ss\ bold\ roman) "Helvetica-Bold $ss"
	# Helvetica-BoldOblique
	set psFontMap(helvetica\ $ss\ bold\ italic) "Helvetica-BoldOblique $ss"
	# Helvetica-Oblique
	set psFontMap(helvetica\ $ss\ normal\ italic) "Helvetica-Oblique $ss"
    }
}

# Print procs

proc PSPrint {} {
    if {[PSPrintDialog ps]} {
	if {[catch {PostScript} printError]} {
	    Error "[msgcat::mc {An error has occurred while printing}] $printError"
	}
    }
}

proc PostScript {} {
    global ds9
    global ps

    # we need to be realized
    RealizeDS9
    # need the colorbar levels updated
    UpdateColormapLevel

    set width [winfo width $ds9(canvas)]
    set height [winfo height $ds9(canvas)]

    # create a bg
    set cc [$ds9(canvas) cget -background]
    set bg [$ds9(canvas) create rectangle -10 -10 \
		[expr $width+10] [expr $height+10] \
		-fill $cc -outline $cc]
    $ds9(canvas) lower $bg 1

    global psFontMap
    set options { -colormode color -fontmap psFontMap}

    # Orientation
    switch -- $ps(orient) {
	portrait {append options " -rotate false"}
	landscape {append options " -rotate true"}
    }

    # Page size
    # reduce size to .95 for backward compatibility
    set xx [expr $width*(1- (100./$ps(scale)/.95))/2.]
    set yy [expr $height*(1- (100./$ps(scale)/.95))/2.]
    set ww [expr $width*100./$ps(scale)/.95]
    set hh [expr $height*100./$ps(scale)/.95]

    append options " -x $xx -y $yy -width $ww -height $hh"

    switch -- $ps(size) {
	letter {PostScriptPageSize 4.25 5.5 7.5 10. i options}
	legal {PostScriptPageSize 4.25 7. 7.5 13. i options}
	tabloid {PostScriptPageSize 5.5 8.5 10. 16. i options}
	poster {PostScriptPageSize 18. 24. 35. 47. i options}
	a4 {PostScriptPageSize 105 148.5 185 272 m options}
	other {
	    if {$ps(width) != {} && $ps(height) != {}} {
		set pxx [expr double($ps(width))/2.]
		set pyy [expr double($ps(height))/2.]
		set pww [expr $ps(width)-1.]
		set phh [expr $ps(height)-1.]
		PostScriptPageSize $pxx $pyy $pww $phh i options
	    }
	}
	othermm {
	    if {$ps(width) != {} && $ps(height) != {}} {
		set pxx [expr double($ps(width))/2.]
		set pyy [expr double($ps(height))/2.]
		set pww [expr $ps(width)-1.]
		set phh [expr $ps(height)-1.]
		PostScriptPageSize $pxx $pyy $pww $phh m options
	    }
	}
    }

    # MacOS and Windows no longer support PS
    global tcl_platform
    switch $tcl_platform(os) {
	Linux {}
	Darwin -
	{Windows NT} {set ps(dest) file}
    }

    set channel {}
    switch -- $ps(dest) {
	file {
	    append options " -file \{$ps(filename)\}"
	}
	printer {
	    set channel [open "| $ps(cmd)" w]
	    append options " -channel $channel"
	}
    }

    # set color specific postscript options
    colorbar postscript level $ps(level)
    colorbar postscript colorspace $ps(color)
    colorbar postscript resolution $ps(resolution)

    # set frame specific postscript options
    foreach ff $ds9(frames) {
	$ff postscript level $ps(level)
	$ff postscript colorspace $ps(color)
	$ff postscript resolution $ps(resolution)

	${ff}cb postscript level $ps(level)
	${ff}cb postscript colorspace $ps(color)
	${ff}cb postscript resolution $ps(resolution)
    }

    # now invoke canvas postscript command
    if {[catch {eval $ds9(canvas) postscript $options} rr]} {
	Error "[msgcat::mc {A postscript generation error has occurred}] $rr"
    }

    switch -- $ps(dest) {
	file {}
	printer {
	    if {$channel != {}} {
		close $channel
	    }
	}
    }

    # delete bg
    $ds9(canvas) delete $bg
}

proc EPS {fn} {
    global ds9

    # we need to be realized
    RealizeDS9
    # need the colorbar levels updated
    UpdateColormapLevel

    set color rgb
    set level 2
    set resolution 96

    # Page size
    set width [winfo width $ds9(canvas)]
    set height [winfo height $ds9(canvas)]

    # create a bg
    set cc [$ds9(canvas) cget -background]
    set bg [$ds9(canvas) create rectangle 0 0 $width $height \
		-fill $cc -outline $cc]
    $ds9(canvas) lower $bg 1

    set options { -colormode color}

    append options " -pagex 0 -pagey 0 -pageanchor sw"

    if ($width>$height) {
	append options " -pagewidth $width"
    } else {
	append options " -pageheight $height"
    }

    # File
    append options " -file \{$fn\}"

    # set color specific postscript options
    colorbar postscript level $level
    colorbar postscript colorspace $color
    colorbar postscript resolution $resolution

    # set frame specific postscript options
    foreach ff $ds9(frames) {
	$ff postscript level $level
	$ff postscript colorspace $color
	$ff postscript resolution $resolution

	${ff}cb postscript level $level
	${ff}cb postscript colorspace $color
	${ff}cb postscript resolution $resolution
    }

    # now invoke canvas postscript command
    if {[catch {eval $ds9(canvas) postscript $options} rr]} {
	Error "[msgcat::mc {A postscript generation error has occurred}] $rr"
    }

    # delete bg
    $ds9(canvas) delete $bg
}

proc PDFGraphColor {pdf stroke fill} {
    $pdf setStrokeColor $stroke
    $pdf setFillColor $fill
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

proc PDFGraphTicks {minv maxv count} {
    if {$count < 2 || $minv == $maxv} {
	return [list $minv]
    }

    set result {}
    for {set ii 0} {$ii < $count} {incr ii} {
	lappend result [expr $minv + ($maxv-$minv)*$ii/double($count-1)]
    }
    return $result
}

proc PDFGraphLabel {vv} {
    set av [expr abs($vv)]
    if {$av != 0 && ($av < .01 || $av >= 10000)} {
	return [format %.2e $vv]
    }
    if {$av < 10} {
	return [format %.2f $vv]
    }
    if {$av < 100} {
	return [format %.1f $vv]
    }
    return [format %.0f $vv]
}

proc PDFGraph {pdf frame which} {
    global graph

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

    $pdf setLineWidth .5
    PDFGraphColor $pdf $fg $fg

    if {$graph(grid)} {
	foreach xx [PDFGraphTicks $xmin $xmax 5] {
	    foreach {p1x p1y} [PDFGraphPoint $gr $x0 $y0 $xx $ymin] {}
	    foreach {p2x p2y} [PDFGraphPoint $gr $x0 $y0 $xx $ymax] {}
	    $pdf line $p1x $p1y $p2x $p2y
	}
	foreach yy [PDFGraphTicks $ymin $ymax 5] {
	    foreach {p1x p1y} [PDFGraphPoint $gr $x0 $y0 $xmin $yy] {}
	    foreach {p2x p2y} [PDFGraphPoint $gr $x0 $y0 $xmax $yy] {}
	    $pdf line $p1x $p1y $p2x $p2y
	}
    }

    $pdf setLineWidth 1
    $pdf rectangle $px0 $py0 [expr $px1-$px0] [expr $py1-$py0] \
	-filled 0 -stroke 1

    $pdf setFont $graph(font,size) Helvetica
    set tickLen 4
    switch -- $which {
	horz {
	    foreach xx [PDFGraphTicks $xmin $xmax 5] {
		foreach {tx ty} [PDFGraphPoint $gr $x0 $y0 $xx $ymin] {}
		$pdf line $tx $py1 $tx [expr $py1+$tickLen]
	    }
	    foreach yy [PDFGraphTicks $ymin $ymax 5] {
		foreach {tx ty} [PDFGraphPoint $gr $x0 $y0 $xmax $yy] {}
		$pdf line $px1 $ty [expr $px1+$tickLen] $ty
		$pdf text [PDFGraphLabel $yy] \
		    -x [expr $px1+$tickLen+3] -y [expr $ty+$graph(font,size)/2.] \
		    -align left
	    }
	}
	vert {
	    foreach xx [PDFGraphTicks $xmin $xmax 5] {
		foreach {tx ty} [PDFGraphPoint $gr $x0 $y0 $xx $ymin] {}
		$pdf line [expr $px0-$tickLen] $ty $px0 $ty
	    }
	    foreach yy [PDFGraphTicks $ymin $ymax 5] {
		foreach {tx ty} [PDFGraphPoint $gr $x0 $y0 $xmin $yy] {}
		$pdf line $tx $py1 $tx [expr $py1+$tickLen]
		$pdf text [PDFGraphLabel $yy] \
		    -x $tx -y [expr $py1+$tickLen+$graph(font,size)] \
		    -align center
	    }
	}
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

proc PDF {fn} {
    global ds9
    global ps

    RealizeDS9
    UpdateColormapLevel

    set width [winfo width $ds9(canvas)]
    set height [winfo height $ds9(canvas)]
    set bg [$ds9(canvas) cget -background]

    if {[catch {
	package require pdf4tcl

	set pdf [::pdf4tcl::new %AUTO% \
		     -paper [list ${width}p ${height}p] \
		     -margin 0 \
		     -orient 1]

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

proc PostScriptPageSize {xx yy ww hh unit optname} {
    upvar $optname options

    global ds9
    global ps

    append options " -pagex $xx$unit -pagey $yy$unit"

    set width [winfo width $ds9(canvas)]
    set height [winfo height $ds9(canvas)]

    switch -- $ps(orient) {
	portrait {
	    if {[expr double($ww)/$width] < [expr double($hh)/$height]} {
		append options " -pagewidth $ww$unit"
	    } else {
		append options " -pageheight $hh$unit"
	    }
	}
	landscape {
	    if {[expr double($ww)/$width] > [expr double($hh)/$height]} {
		append options " -pageheight $ww$unit"
	    } else {
		append options " -pagewidth $hh$unit"
	    }
	}
    }
}

# Print Dialog procs
proc PSPrintDialog {which} {
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
	-command "PSPrintBrowse ed(filename) $w"

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
    ttk::radiobutton $f.cmyk -text [msgcat::mc {CMYK}] \
	-variable ed(color) -value cmyk 
    ttk::radiobutton $f.gray -text [msgcat::mc {Grayscale}] \
	-variable ed(color) -value gray 
    ttk::label $f.level -text [msgcat::mc {Level}]
    ttk::radiobutton $f.level1 -text "[msgcat::mc {Level}] 1" \
	-variable ed(level) -value 1
    ttk::radiobutton $f.level2 -text "[msgcat::mc {Level}] 2" \
	-variable ed(level) -value 2
    ttk::radiobutton $f.level3 -text "[msgcat::mc {Level}] 3" \
	-variable ed(level) -value 3
    ttk::label $f.dpi -text [msgcat::mc {DPI}]

    set m $f.resolution
    set mm $m.menu
    ttk::menubutton $m -textvariable ed(resolution) -menu $mm
    ThemeMenu $mm
    $mm add radiobutton -label "72" -variable ed(resolution) -value 72
    $mm add radiobutton -label "96" -variable ed(resolution) -value 96
    $mm add radiobutton -label "144" -variable ed(resolution) -value 144
    $mm add radiobutton -label "150" -variable ed(resolution) -value 150
    $mm add radiobutton -label "225" -variable ed(resolution) -value 255
    $mm add radiobutton -label "300" -variable ed(resolution) -value 300
    $mm add radiobutton -label "600" -variable ed(resolution) -value 600
    $mm add radiobutton -label "1200" -variable ed(resolution) -value 1200

    grid $f.color $f.rgb $f.cmyk $f.gray -padx 2 -pady 2 -sticky w
    grid $f.level $f.level3 $f.level2 $f.level1 -padx 2 -pady 2 -sticky w
    grid $f.dpi $f.resolution -padx 2 -pady 2 -sticky w

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

proc PSPrintBrowse {varname parent} {
    upvar $varname var

    FileLast pssavfbox $var
    set var [SaveFileDialog pssavfbox $parent]
}

proc PrefsDialogPrint {} {
    global dprefs

    set w $dprefs(tab)

    $dprefs(listbox) insert {} end -id [ttk::frame $w.print] \
	-text [msgcat::mc {Postscript}]

    # PrintTo
    set f [ttk::labelframe $w.print.printto -text [msgcat::mc {Print To}]]

    ttk::radiobutton $f.printer -text [msgcat::mc {Printer}] \
	-variable pps(dest) -value printer
    ttk::label $f.tcmd -text [msgcat::mc {Command}]
    ttk::entry $f.cmd -textvariable pps(cmd) -width 20

    ttk::radiobutton $f.file -text [msgcat::mc {File}] \
	-variable pps(dest) -value file
    ttk::label $f.tname -text [msgcat::mc {Name}]
    ttk::entry $f.name -textvariable pps(filename) -width 20
    ttk::button $f.browse -text [msgcat::mc {Browse}] \
	-command "PSPrintBrowse pps(filename)"

    # MacOS and Windows no longer support PS
    global tcl_platform
    switch $tcl_platform(os) {
	Linux {
	    grid $f.printer $f.tcmd $f.cmd -padx 2 -pady 2 -sticky w
	}
	Darwin -
	{Windows NT} {
	    global pps
	    set pps(dest) file
	}
    }
    grid $f.file $f.tname $f.name $f.browse -padx 2 -pady 2 -sticky w

    # Options
    set f [ttk::labelframe $w.print.ps -text [msgcat::mc {Postscript}]]

    ttk::label $f.color -text [msgcat::mc {Color}]
    ttk::radiobutton $f.rgb -text [msgcat::mc {RGB}] \
	-variable pps(color) -value rgb 
    ttk::radiobutton $f.cmyk -text [msgcat::mc {CMYK}] \
	-variable pps(color) -value cmyk 
    ttk::radiobutton $f.gray -text [msgcat::mc {Grayscale}] \
	-variable pps(color) -value gray 
    ttk::label $f.level -text [msgcat::mc {Level}]
    ttk::radiobutton $f.level1 -text "[msgcat::mc {Level}] 1" \
	-variable pps(level) -value 1
    ttk::radiobutton $f.level2 -text "[msgcat::mc {Level}] 2" \
	-variable pps(level) -value 2
    ttk::radiobutton $f.level3 -text "[msgcat::mc {Level}] 3" \
	-variable pps(level) -value 3
    ttk::label $f.dpi -text [msgcat::mc {DPI}]

    set m $f.resolution
    set mm $m.menu
    ttk::menubutton $m -textvariable pps(resolution) -menu $mm
    ThemeMenu $mm
    $mm add radiobutton -label "72" -variable pps(resolution) -value 72
    $mm add radiobutton -label "96" -variable pps(resolution) -value 96
    $mm add radiobutton -label "144" -variable pps(resolution) -value 144
    $mm add radiobutton -label "150" -variable pps(resolution) -value 150
    $mm add radiobutton -label "225" -variable pps(resolution) -value 255
    $mm add radiobutton -label "300" -variable pps(resolution) -value 300
    $mm add radiobutton -label "600" -variable pps(resolution) -value 600
    $mm add radiobutton -label "1200" -variable pps(resolution) -value 1200

    grid $f.color $f.rgb $f.cmyk $f.gray -padx 2 -pady 2 -sticky w
    grid $f.level $f.level3 $f.level2 $f.level1 -padx 2 -pady 2 -sticky w
    grid $f.dpi $f.resolution -padx 2 -pady 2 -sticky w

    pack $w.print.printto $w.print.ps \
	-side top -fill both -expand true
}

# Process Cmds

proc ProcessPrintCmd {varname iname} {
    upvar $varname var
    upvar $iname i

    ps::YY_FLUSH_BUFFER
    ps::yy_scan_string [lrange $var $i end]
    ps::yyparse
    incr i [expr $ps::yycnt-1]
}

proc ProcessSendPrintCmd {proc id param {sock {}} {fn {}}} {
    global parse
    set parse(proc) $proc
    set parse(id) $id

    pssend::YY_FLUSH_BUFFER
    pssend::yy_scan_string $param
    pssend::yyparse
}
