#  Copyright (C) 1999-2018
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

    # set postscript fonts
    $var(graph) configure -font "$var(canvas,title,family) $var(canvas,title,size) $var(canvas,title,weight) $var(canvas,title,slant)"

    $var(graph) xaxis configure -tickfont "$var(canvas,axis,font,family) $var(canvas,axis,font,size) $var(canvas,axis,font,weight) $var(canvas,axis,font,slant)" -titlefont "$var(canvas,axis,title,family) $var(canvas,axis,title,size) $var(canvas,axis,title,weight) $var(canvas,axis,title,slant)"

    $var(graph) yaxis configure -tickfont "$var(canvas,axis,font,family) $var(canvas,axis,font,size) $var(canvas,axis,font,weight) $var(canvas,axis,font,slant)" -titlefont "$var(canvas,axis,title,family) $var(canvas,axis,title,size) $var(canvas,axis,title,weight) $var(canvas,axis,title,slant)"

    $var(graph) legend configure -font "$var(canvas,legend,font,family) $var(canvas,legend,font,size) $var(canvas,legend,font,weight) $var(canvas,legend,font,slant)" -titlefont "$var(canvas,legend,title,family) $var(canvas,legend,title,size) $var(canvas,legend,title,weight) $var(canvas,legend,title,slant)"

    set options {}

    # Color
    switch -- $ps(color) {
	rgb -
	cmyk {append options " -greyscale no"}
	gray {append options " -greyscale yes"}
    }

    # can't trust 'tk scaling'
    set scaling 1.475

    # Size
    set ww [expr [winfo width $var(graph)]*$ps(scale)/100./$scaling]
    set hh [expr [winfo height $var(graph)]*$ps(scale)/100./$scaling]
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

    if {$ps(dest) == "file" && $ps(filename) != {}} {
	eval $var(graph) postscript output $ps(filename) $options
    } else {
	set ch [open "| $ps(cmd)" w]
	puts $ch [eval $var(graph) postscript output $options]
	close $ch
    }

    # reset fonts
    $var(graph) configure \
	-font "{$ds9($var(canvas,title,family))} $var(canvas,title,size) $var(canvas,title,weight) $var(canvas,title,slant)"

    $var(graph) xaxis configure \
	-tickfont "{$ds9($var(canvas,axis,font,family))} $var(canvas,axis,font,size) $var(canvas,axis,font,weight) $var(canvas,axis,font,slant)" \
	-titlefont "{$ds9($var(canvas,axis,title,family))} $var(canvas,axis,title,size) $var(canvas,axis,title,weight) $var(canvas,axis,title,slant)"

    $var(graph) yaxis configure \
	-tickfont "{$ds9($var(canvas,axis,font,family))} $var(canvas,axis,font,size) $var(canvas,axis,font,weight) $var(canvas,axis,font,slant)" \
	-titlefont "{$ds9($var(canvas,axis,title,family))} $var(canvas,axis,title,size) $var(canvas,axis,title,weight) $var(canvas,axis,title,slant)"

    $var(graph) legend configure \
	-font "{$ds9($var(canvas,legend,font,family))} $var(canvas,legend,font,size) $var(canvas,legend,font,weight) $var(canvas,legend,font,slant)" \
	-titlefont "{$ds9($var(canvas,legend,title,family))} $var(canvas,legend,title,size) $var(canvas,legend,title,weight) $var(canvas,legend,title,slant)"
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

    # can't trust 'tk scaling'
    switch $ds9(wm) {
	x11 -
	win32 {
	    set scaling [tk scaling]
	    if {$scaling == Inf} {
		set scaling 1.334
	    }
	}
	aqua {set scaling 1.4}
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

    set width [expr [winfo width $var(top)]*$ps(scale)/100./$scaling]
    set height [expr [winfo height $var(top)]*$ps(scale)/100./$scaling]
    set prolog [eval $var([lindex $var(graphs) 0],graph) postscript output \
		    "$options -width $width -height $height"]

    #
    # For each graph
    #
    foreach cc $var(graphs) {

	# set postscript fonts
	$var($cc,graph) configure -font "$var(canvas,title,family) $var(canvas,title,size) $var(canvas,title,weight) $var(canvas,title,slant)"

	$var($cc,graph) xaxis configure -tickfont "$var(canvas,axis,font,family) $var(canvas,axis,font,size) $var(canvas,axis,font,weight) $var(canvas,axis,font,slant)" -titlefont "$var(canvas,axis,title,family) $var(canvas,axis,title,size) $var(canvas,axis,title,weight) $var(canvas,axis,title,slant)"

	$var($cc,graph) yaxis configure -tickfont "$var(canvas,axis,font,family) $var(canvas,axis,font,size) $var(canvas,axis,font,weight) $var(canvas,axis,font,slant)" -titlefont "$var(canvas,axis,title,family) $var(canvas,axis,title,size) $var(canvas,axis,title,weight) $var(canvas,axis,title,slant)"

	$var($cc,graph) legend configure -font "$var(canvas,legend,font,family) $var(canvas,legend,font,size) $var(canvas,legend,font,weight) $var(canvas,legend,font,slant)" -titlefont "$var(canvas,legend,title,family) $var(canvas,legend,title,size) $var(canvas,legend,title,weight) $var(canvas,legend,title,slant)"

	# Size
	set ww [expr [winfo width $var($cc,graph)]*$ps(scale)/100./$scaling]
	set hh [expr [winfo height $var($cc,graph)]*$ps(scale)/100./$scaling]

	set var($cc,ps) [eval $var($cc,graph) postscript output \
			     "$options -width $ww -height $hh"]

	# reset fonts
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

    # channel
    if {$ps(dest) == "file" && $ps(filename) != {}} {
	set ch [open $ps(filename) w]
    } else {
	set ch [open "| $ps(cmd)" w]
    }

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
