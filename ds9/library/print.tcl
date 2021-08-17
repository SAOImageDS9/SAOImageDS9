#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc PSDef {} {
    global ds9
    global ps
    global pps

    set ps(dest) printer
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

    set options { -colormode color}

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

    # Printer vs File
    set channel {}
    switch -- $ps(dest) {
	"file" {
	    append options " -file \{$ps(filename)\}"
	}
	"printer" {
	    set channel [open "| $ps(cmd)" w]
	    append options " -channel $channel"
	}
    }

    # resolution
    switch $ps(resolution) {
	screen -
	Screen -
	SCREEN {set res 96}
	default {set res $ps(resolution)}
    }

    # set color specific postscript options
    colorbar postscript level $ps(level)
    colorbar postscript colorspace $ps(color)
    colorbar postscript resolution $res

    # set frame specific postscript options
    foreach ff $ds9(frames) {
	$ff postscript level $ps(level)
	$ff postscript colorspace $ps(color)
	$ff postscript resolution $res

	${ff}cb postscript level $ps(level)
	${ff}cb postscript colorspace $ps(color)
	${ff}cb postscript resolution $res
    }

    # now invoke canvas postscript command
    if {[catch {eval $ds9(canvas) postscript $options} rr]} {
	Error "[msgcat::mc {A postscript generation error has occurred}] $rr"
    }

    switch -- $ps(dest) {
	"file" {}
	"printer" {
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

    grid $f.printer $f.tcmd $f.cmd -padx 2 -pady 2 -sticky ew
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
    $mm add radiobutton -label [msgcat::mc {Screen}] \
	-variable ed(resolution) -value 96
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

    grid $f.printer $f.tcmd $f.cmd -padx 2 -pady 2 -sticky w
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
    $mm add radiobutton -label [msgcat::mc {Screen}] \
	-variable pps(resolution) -value 96
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
