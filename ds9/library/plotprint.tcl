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

    grid $f.printer $f.tcmd $f.cmd -padx 2 -pady 2 -sticky ew
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
