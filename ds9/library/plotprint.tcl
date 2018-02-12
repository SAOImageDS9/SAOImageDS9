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

    global ps
    global ds9

    # set postscript fonts
    $var(graph) configure \
	-font "$var(graph,title,family) $var(graph,title,size) $var(graph,title,weight) $var(graph,title,slant)"

    $var(graph) xaxis configure \
	-tickfont "$var(axis,font,family) $var(axis,font,size) $var(axis,font,weight) $var(axis,font,slant)" \
	-titlefont "$var(axis,title,family) $var(axis,title,size) $var(axis,title,weight) $var(axis,title,slant)"

    $var(graph) yaxis configure \
	-tickfont "$var(axis,font,family) $var(axis,font,size) $var(axis,font,weight) $var(axis,font,slant)" \
	-titlefont "$var(axis,title,family) $var(axis,title,size) $var(axis,title,weight) $var(axis,title,slant)"

    $var(graph) legend configure \
	-font "$var(legend,font,family) $var(legend,font,size) $var(legend,font,weight) $var(legend,font,slant)" \
	-titlefont "$var(legend,title,family) $var(legend,title,size) $var(legend,title,weight) $var(legend,title,slant)"

    set options "-decorations false"

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

    # Size
    set ww [expr [winfo width $var(top)]*$ps(scale)/100./$scaling]
    set hh [expr [winfo height $var(top)]*$ps(scale)/100./$scaling]
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
	-font "{$ds9($var(graph,title,family))} $var(graph,title,size) $var(graph,title,weight) $var(graph,title,slant)"

    $var(graph) xaxis configure \
	-tickfont "{$ds9($var(axis,font,family))} $var(axis,font,size) $var(axis,font,weight) $var(axis,font,slant)" \
	-titlefont "{$ds9($var(axis,title,family))} $var(axis,title,size) $var(axis,title,weight) $var(axis,title,slant)"

    $var(graph) yaxis configure \
	-tickfont "{$ds9($var(axis,font,family))} $var(axis,font,size) $var(axis,font,weight) $var(axis,font,slant)" \
	-titlefont "{$ds9($var(axis,title,family))} $var(axis,title,size) $var(axis,title,weight) $var(axis,title,slant)"

    $var(graph) legend configure \
	-font "{$ds9($var(legend,font,family))} $var(legend,font,size) $var(legend,font,weight) $var(legend,font,slant)" \
	-titlefont "{$ds9($var(legend,title,family))} $var(legend,title,size) $var(legend,title,weight) $var(legend,title,slant)"
}
