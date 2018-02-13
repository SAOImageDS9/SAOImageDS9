#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc AnalysisMainMenu {} {
    global ds9

    # WARNING: this is a variable length menu. 
    # Be sure to update ds9(menu,size,analysis)
    menu $ds9(mb).analysis
# IME
#    $ds9(mb).analysis add cascade -label [msgcat::mc {Task}] 
#	-menu $ds9(mb).analysis.task
#    $ds9(mb).analysis add separator
    $ds9(mb).analysis add command -label "[msgcat::mc {Pixel Table}]..." \
	-command PixelTableDialog 
    $ds9(mb).analysis add command -label "[msgcat::mc {Name Resolution}]..." \
	-command NRESDialog
    $ds9(mb).analysis add separator
    $ds9(mb).analysis add command -label "[msgcat::mc {Mask Parameters}]..." \
	-command MaskDialog
    $ds9(mb).analysis add command -label "[msgcat::mc {Graph Parameters}]..." \
	-command GraphDialog
    $ds9(mb).analysis add command -label "[msgcat::mc {Crosshair Parameters}]..." -command CrosshairDialog
    $ds9(mb).analysis add separator
    $ds9(mb).analysis add checkbutton -label [msgcat::mc {Contours}] \
	-variable contour(view) -command UpdateContour
    $ds9(mb).analysis add command -label "[msgcat::mc {Contour Parameters}]..."\
	-command ContourDialog
    $ds9(mb).analysis add separator
    $ds9(mb).analysis add checkbutton -label [msgcat::mc {Coordinate Grid}] \
	-variable grid(view) -command GridUpdateCurrent
    $ds9(mb).analysis add command \
	-label "[msgcat::mc {Coordinate Grid Parameters}]..." \
	-command GridDialog
    $ds9(mb).analysis add separator
    $ds9(mb).analysis add cascade -label [msgcat::mc {Block}] \
	-menu $ds9(mb).analysis.block
    $ds9(mb).analysis add command -label "[msgcat::mc {Block Parameters}]..."\
	-command BlockDialog
    $ds9(mb).analysis add separator
    $ds9(mb).analysis add checkbutton -label [msgcat::mc {Smooth}] \
	-variable smooth(view) -command SmoothUpdate
    $ds9(mb).analysis add command -label "[msgcat::mc {Smooth Parameters}]..." \
	-command SmoothDialog
    $ds9(mb).analysis add separator
    $ds9(mb).analysis add cascade -label [msgcat::mc {Image Servers}] \
	-menu $ds9(mb).analysis.image
    $ds9(mb).analysis add cascade -label [msgcat::mc {Archives}] \
	-menu $ds9(mb).analysis.arch
    $ds9(mb).analysis add cascade -label [msgcat::mc {Catalogs}] \
	-menu $ds9(mb).analysis.cat
    $ds9(mb).analysis add separator
    $ds9(mb).analysis add command -label "[msgcat::mc {Catalog Tool}]..." \
	-command CATTool
    $ds9(mb).analysis add command -label "[msgcat::mc {Line Plot Tool}]..." \
	-command PlotLineTool
    $ds9(mb).analysis add command -label "[msgcat::mc {Bar Plot Tool}]..." \
	-command PlotBarTool
    $ds9(mb).analysis add command -label "[msgcat::mc {Scatter Plot Tool}]..." \
	-command PlotScatterTool
    $ds9(mb).analysis add separator
    $ds9(mb).analysis add command \
	-label "[msgcat::mc {Virtual Observatory}]..."\
	-command VODialog
    $ds9(mb).analysis add command -label "[msgcat::mc {Web Browser}]..." \
	-command {HV web Web {}}
    $ds9(mb).analysis add separator
    $ds9(mb).analysis add checkbutton \
	-label [msgcat::mc {Analysis Command Log}] \
	-variable panalysis(log)
    $ds9(mb).analysis add separator
    $ds9(mb).analysis add command \
	-label "[msgcat::mc {Load Analysis Commands}]..." \
	-command OpenAnalysisMenu
    $ds9(mb).analysis add command \
	-label [msgcat::mc {Clear Analysis Commands}] \
	-command ClearAnalysisMenu

    menu $ds9(mb).analysis.task
    $ds9(mb).analysis.task add radiobutton -label [msgcat::mc {Statistics}] \
	-variable ime(task) -value stats -command IMEChangeTask
    $ds9(mb).analysis.task add radiobutton -label [msgcat::mc {Histogram}] \
	-variable ime(task) -value hist -command IMEChangeTask
    $ds9(mb).analysis.task add radiobutton \
	-label [msgcat::mc {Radial Profile}] \
	-variable ime(task) -value radial -command IMEChangeTask
    $ds9(mb).analysis.task add radiobutton -label [msgcat::mc {Plot 2D}] \
	-variable ime(task) -value plot2d -command IMEChangeTask
    $ds9(mb).analysis.task add radiobutton -label [msgcat::mc {Plot 3D}] \
	-variable ime(task) -value plot3d -command IMEChangeTask
    $ds9(mb).analysis.task add separator
    $ds9(mb).analysis.task add radiobutton -label [msgcat::mc {Circle}] \
	-variable ime(shape) -value circle -command IMEChangeShape
    $ds9(mb).analysis.task add radiobutton -label [msgcat::mc {Ellipse}] \
	-variable ime(shape) -value ellipse -command IMEChangeShape
    $ds9(mb).analysis.task add radiobutton -label [msgcat::mc {Box}] \
	-variable ime(shape) -value box -command IMEChangeShape
    $ds9(mb).analysis.task add radiobutton -label [msgcat::mc {Polygon}] \
	-variable ime(shape) -value polygon -command IMEChangeShape
    $ds9(mb).analysis.task add separator
    $ds9(mb).analysis.task add radiobutton -label [msgcat::mc {Point}] \
	-variable ime(shape) -value point -command IMEChangeShape
    $ds9(mb).analysis.task add separator
    $ds9(mb).analysis.task add radiobutton -label [msgcat::mc {Annulus}] \
	-variable ime(shape) -value annulus -command IMEChangeShape
    $ds9(mb).analysis.task add radiobutton \
	-label [msgcat::mc {Ellipse Annulus}] \
	-variable ime(shape) -value ellipseannulus -command IMEChangeShape
    $ds9(mb).analysis.task add radiobutton -label [msgcat::mc {Box Annulus}] \
	-variable ime(shape) -value boxannulus -command IMEChangeShape

    menu $ds9(mb).analysis.block
    $ds9(mb).analysis.block add command -label [msgcat::mc {Block In}] \
	-command {Block .5 .5}
    $ds9(mb).analysis.block add command -label [msgcat::mc {Block Out}] \
	-command {Block 2 2}
    $ds9(mb).analysis.block add command -label [msgcat::mc {Block Fit}] \
	-command BlockToFit
    $ds9(mb).analysis.block add separator
    $ds9(mb).analysis.block add radiobutton -label "[msgcat::mc {Block}] 1" \
	-variable block(factor) -value {1 1} -command ChangeBlock
    $ds9(mb).analysis.block add radiobutton -label "[msgcat::mc {Block}] 2" \
	-variable block(factor) -value {2 2} -command ChangeBlock
    $ds9(mb).analysis.block add radiobutton -label "[msgcat::mc {Block}] 4" \
	-variable block(factor) -value {4 4} -command ChangeBlock
    $ds9(mb).analysis.block add radiobutton -label "[msgcat::mc {Block}] 8" \
	-variable block(factor) -value {8 8} -command ChangeBlock
    $ds9(mb).analysis.block add radiobutton -label "[msgcat::mc {Block}] 16" \
	-variable block(factor) -value {16 16} -command ChangeBlock
    $ds9(mb).analysis.block add radiobutton -label "[msgcat::mc {Block}] 32" \
	-variable block(factor) -value {32 32} -command ChangeBlock

    menu $ds9(mb).analysis.image
    $ds9(mb).analysis.image add command \
	-label {DSS (SAO)} -command SAODialog
    $ds9(mb).analysis.image add command \
	-label {DSS (ESO} -command ESODialog
    $ds9(mb).analysis.image add command \
	-label {DSS (STSCI)} -command STSCIDialog
    $ds9(mb).analysis.image add separator
    $ds9(mb).analysis.image add command \
	-label {2MASS (NASA/IPAC)} -command 2MASSDialog
    $ds9(mb).analysis.image add command \
	-label {VLA (NRAO)} -command VLADialog
    $ds9(mb).analysis.image add command \
	-label {NVSS (NRAO)} -command NVSSDialog
    $ds9(mb).analysis.image add command \
	-label {NLSS (NRAO)} -command VLSSDialog
    $ds9(mb).analysis.image add separator
    $ds9(mb).analysis.image add command \
	-label {SkyView (NASA/HEASARC)} -command SkyViewDialog

    menu $ds9(mb).analysis.arch
    $ds9(mb).analysis.arch add cascade -label {Chandra (NASA/CXC)} \
	-menu $ds9(mb).analysis.arch.chandra
    $ds9(mb).analysis.arch add separator
    SIAAnalysisMenu $ds9(mb).analysis.arch

    menu $ds9(mb).analysis.arch.chandra
    $ds9(mb).analysis.arch.chandra add command \
	-label {Chaser} -command HVArchChandraChaser
    $ds9(mb).analysis.arch.chandra add command \
	-label {Fast Image} -command HVArchChandraPop
    $ds9(mb).analysis.arch.chandra add command \
	-label {Public FTP} -command HVArchChandraFTP

    menu $ds9(mb).analysis.arch.simbad
    $ds9(mb).analysis.arch.simbad add command -label {SAO} \
	-command HVArchSIMBADSAO
    $ds9(mb).analysis.arch.simbad add command -label {CDS} \
	-command HVArchSIMBADCDS

    menu $ds9(mb).analysis.arch.ads
    $ds9(mb).analysis.arch.ads add command -label {SAO} \
	-command HVArchADSSAO
    $ds9(mb).analysis.arch.ads add command -label {CDS} \
	-command HVArchADSCDS

    menu $ds9(mb).analysis.cat
    $ds9(mb).analysis.cat add command \
	-label [msgcat::mc {Search for Catalogs}] \
	-command "CATCDSSrchDialog catcdssrch1"
    $ds9(mb).analysis.cat add command -label [msgcat::mc {Clear All}] \
	-command CATClearFrame
    $ds9(mb).analysis.cat add command -label [msgcat::mc {Match}] \
	-command CATMatchFrame
    $ds9(mb).analysis.cat add separator
    CATAnalysisMenu
}

proc PrefsDialogAnalysisMenu {w} {
    global ds9

    set f [ttk::labelframe $w.manalysis -text [msgcat::mc {Analysis}]]

    ttk::menubutton $f.menu -text [msgcat::mc {Menu}] -menu $f.menu.menu
    PrefsDialogButtonbarAnalysis $f.buttonbar

    grid $f.menu $f.buttonbar -padx 2 -pady 2

    set m $f.menu.menu
    menu $m
# IME
#    $m add cascade -label [msgcat::mc {Task}]
#	-menu $m.task
#    $m add separator
    $m add checkbutton -label [msgcat::mc {Contours}] \
	-variable pcontour(view)
    $m add checkbutton -label [msgcat::mc {Coordinate Grid}] \
	-variable pgrid(view)
    $m add separator
    $m add cascade -label [msgcat::mc {Block}] \
	-menu $m.block
    $m add checkbutton -label [msgcat::mc {Smooth}] \
	-variable psmooth(view)

    menu $m.task
    $m.task add radiobutton -label [msgcat::mc {Statistics}] \
	-variable pime(task) -value stats
    $m.task add radiobutton -label [msgcat::mc {Histogram}] \
	-variable pime(task) -value hist
    $m.task add radiobutton -label [msgcat::mc {Radial Profile}] \
	-variable pime(task) -value radial
    $m.task add radiobutton -label [msgcat::mc {Plot 2D}] \
	-variable pime(task) -value plot2d
    $m.task add radiobutton -label [msgcat::mc {Plot 3D}] \
	-variable pime(task) -value plot3d

    menu $m.block
    $m.block add radiobutton -label "[msgcat::mc {Block}] 1" \
	-variable pblock(factor) -value {1 1}
    $m.block add radiobutton -label "[msgcat::mc {Block}] 2" \
	-variable pblock(factor) -value {2 2}
    $m.block add radiobutton -label "[msgcat::mc {Block}] 4" \
	-variable pblock(factor) -value {4 4}
    $m.block add radiobutton -label "[msgcat::mc {Block}] 8" \
	-variable pblock(factor) -value {8 8}
    $m.block add radiobutton -label "[msgcat::mc {Block}] 16" \
	-variable pblock(factor) -value {16 16}
    $m.block add radiobutton -label "[msgcat::mc {Block}] 32" \
	-variable pblock(factor) -value {32 32}

    pack $f -side top -fill both -expand true
}

# Buttons

proc ButtonsAnalysisDef {} {
    global pbuttons

    array set pbuttons {
	analysis,contours 1
	analysis,grid 1
	analysis,smooth 1
	analysis,bin 1
	analysis,bout 1
	analysis,bfit 1
	analysis,b1 1
	analysis,b2 1
	analysis,b4 1
	analysis,b8 0
	analysis,b16 0
	analysis,b32 0
    }

# IME
#	analysis,none 1
#	analysis,stats 1
#	analysis,hist 1
#	analysis,radial 1
#	analysis,plot2d 1
#	analysis,plot3d 1
}

proc CreateButtonsAnalysis {} {
    global buttons
    global ds9

    ttk::frame $ds9(buttons).analysis

# IME
#    RadioButton $ds9(buttons).analysis.stats 
#	[string tolower [msgcat::mc {Stats}]]
#	ime(task) stats IMEChangeTask
#    RadioButton $ds9(buttons).analysis.hist
#	[string tolower [msgcat::mc {Histogram}]]
#	ime(task) hist IMEChangeTask
#    RadioButton $ds9(buttons).analysis.radial
#	[string tolower [msgcat::mc {Radial}]]
#	ime(task) radial IMEChangeTask
#    RadioButton $ds9(buttons).analysis.plot2d
#	[string tolower [msgcat::mc {Plot 2D}]]
#	ime(task) plot2d IMEChangeTask
#    RadioButton $ds9(buttons).analysis.plot3d
#	[string tolower [msgcat::mc {Plot 3D}]]
#	ime(task) plot3d IMEChangeTask

    CheckButton $ds9(buttons).analysis.contours \
	[string tolower [msgcat::mc {Contours}]] \
	contour(view) UpdateContour
    CheckButton $ds9(buttons).analysis.grid \
	[string tolower [msgcat::mc {Grid}]] \
	grid(view) GridUpdateCurrent

    ButtonButton $ds9(buttons).analysis.bin \
	[string tolower [msgcat::mc {Block In}]] {Block .5 .5}
    ButtonButton $ds9(buttons).analysis.bout \
	[string tolower [msgcat::mc {Block Out}]] {Block 2 2}
    ButtonButton $ds9(buttons).analysis.bfit \
	[string tolower [msgcat::mc {Block Fit}]] BlockToFit
    RadioButton $ds9(buttons).analysis.b1 \
	"[string tolower [msgcat::mc {Block}]] 1" \
	block(factor) {1 1} ChangeBlock
    RadioButton $ds9(buttons).analysis.b2 \
	"[string tolower [msgcat::mc {Block}]] 2" \
	block(factor) {2 2} ChangeBlock
    RadioButton $ds9(buttons).analysis.b4 \
	"[string tolower [msgcat::mc {Block}]] 4" \
	block(factor) {4 4} ChangeBlock
    RadioButton $ds9(buttons).analysis.b8 \
	"[string tolower [msgcat::mc {Block}]] 8" \
	block(factor) {8 8} ChangeBlock
    RadioButton $ds9(buttons).analysis.b16 \
	"[string tolower [msgcat::mc {Block}]] 16" \
	block(factor) {16 16} ChangeBlock
    RadioButton $ds9(buttons).analysis.b32 \
 	"[string tolower [msgcat::mc {Block}]] 32" \
 	block(factor) {32 32} ChangeBlock

    CheckButton $ds9(buttons).analysis.smooth \
	[string tolower [msgcat::mc {Smooth}]] \
	smooth(view) SmoothUpdate

    set buttons(analysis) "
        $ds9(buttons).analysis.contours pbuttons(analysis,contours)
        $ds9(buttons).analysis.grid pbuttons(analysis,grid)

	$ds9(buttons).analysis.bin pbuttons(analysis,bin)
	$ds9(buttons).analysis.bout pbuttons(analysis,bout)
	$ds9(buttons).analysis.bfit pbuttons(analysis,bfit)
	$ds9(buttons).analysis.b1 pbuttons(analysis,b1)
	$ds9(buttons).analysis.b2 pbuttons(analysis,b2)
	$ds9(buttons).analysis.b4 pbuttons(analysis,b4)
	$ds9(buttons).analysis.b8 pbuttons(analysis,b8)
	$ds9(buttons).analysis.b16 pbuttons(analysis,b16)
	$ds9(buttons).analysis.b32 pbuttons(analysis,b32)

        $ds9(buttons).analysis.smooth pbuttons(analysis,smooth)
    "

# IME
#        $ds9(buttons).analysis.stats pbuttons(analysis,stats)
#        $ds9(buttons).analysis.hist pbuttons(analysis,hist)
#        $ds9(buttons).analysis.radial pbuttons(analysis,radial)
#        $ds9(buttons).analysis.plot2d pbuttons(analysis,plot2d)
#        $ds9(buttons).analysis.plot3d pbuttons(analysis,plot3d)
}

proc PrefsDialogButtonbarAnalysis {f} {
    global ds9
    global buttons
    global pbuttons

    ttk::menubutton $f -text [msgcat::mc {Buttonbar}] -menu $f.menu
    
    set m $f.menu
    menu $m
# IME
#    $m add checkbutton -label [msgcat::mc {Statistics}]
#	-variable pbuttons(analysis,stats)
#	-command {UpdateButtons buttons(analysis)}
#    $m add checkbutton -label [msgcat::mc {Histogram}]
#	-variable pbuttons(analysis,hist)
#	-command {UpdateButtons buttons(analysis)}
#    $m add checkbutton -label [msgcat::mc {Radial Profile}]
#	-variable pbuttons(analysis,radial)
#	-command {UpdateButtons buttons(analysis)}
#    $m add checkbutton -label [msgcat::mc {Plot 2D}]
#	-variable pbuttons(analysis,plot2d)
#	-command {UpdateButtons buttons(analysis)}
#    $m add checkbutton -label [msgcat::mc {Plot 3D}]
#	-variable pbuttons(analysis,plot3d)
#	-command {UpdateButtons buttons(analysis)}
#    $m add separator
    $m add checkbutton -label [msgcat::mc {Contours}] \
	-variable pbuttons(analysis,contours) \
	-command {UpdateButtons buttons(analysis)}
    $m add checkbutton -label [msgcat::mc {Grid}] \
	-variable pbuttons(analysis,grid) \
	-command {UpdateButtons buttons(analysis)}
    $m add separator
    $m add checkbutton -label [msgcat::mc {Block In}] \
	-variable pbuttons(analysis,bin) \
	-command {UpdateButtons buttons(analysis)}
    $m add checkbutton -label [msgcat::mc {Block Out}] \
	-variable pbuttons(analysis,bout) \
	-command {UpdateButtons buttons(analysis)}
    $m add checkbutton -label [msgcat::mc {Block Fit}] \
	-variable pbuttons(analysis,bfit) \
	-command {UpdateButtons buttons(analysis)}
    $m add checkbutton -label "[msgcat::mc {Block}] 1" \
	-variable pbuttons(analysis,b1) \
	-command {UpdateButtons buttons(analysis)}
    $m add checkbutton -label "[msgcat::mc {Block}] 2" \
	-variable pbuttons(analysis,b2) \
	-command {UpdateButtons buttons(analysis)}
    $m add checkbutton -label "[msgcat::mc {Block}] 4" \
	-variable pbuttons(analysis,b4) \
	-command {UpdateButtons buttons(analysis)}
    $m add checkbutton -label "[msgcat::mc {Block}] 8" \
	-variable pbuttons(analysis,b8) \
	-command {UpdateButtons buttons(analysis)}
    $m add checkbutton -label "[msgcat::mc {Block}] 16" \
	-variable pbuttons(analysis,b16) \
	-command {UpdateButtons buttons(analysis)}
    $m add checkbutton -label "[msgcat::mc {Block}] 32" \
 	-variable pbuttons(analysis,b32) \
	-command {UpdateButtons buttons(analysis)}
    $m add separator
    $m add checkbutton -label [msgcat::mc {Smooth}] \
	-variable pbuttons(analysis,smooth) \
	-command {UpdateButtons buttons(analysis)}
}

proc UpdateAnalysisMenu {} {
    global ds9
    global current
    global ianalysis

    global debug
    if {$debug(tcl,update)} {
	puts stderr "UpdateAnalysisMenu"
    }

    if {$ds9(active,num) > 0} {
	$ds9(mb) entryconfig [msgcat::mc {Analysis}] -state normal
    } else {
	$ds9(mb) entryconfig [msgcat::mc {Analysis}] -state disabled
    }

    if {$current(frame) != {}} {
	for {set ii 0} {$ii<$ianalysis(menu,count)} {incr ii} {

	    if {[$current(frame) has fits]} {
		set fn [$current(frame) get fits file name 1]
	    } else {
		set fn {none}
	    }

	    # disable by default
	    $ianalysis(menu,$ii,parent) entryconfig $ianalysis(menu,$ii,item) \
		-state disabled

	    foreach tt $ianalysis(menu,$ii,template) {
		if {[regexp ".$tt" $fn]} {
		    $ianalysis(menu,$ii,parent) entryconfig \
			$ianalysis(menu,$ii,item) -state normal
		    break
		}
	    }
	}
    }
}

proc PrefsDialogAnalysis {} {
    global dprefs

    set w $dprefs(tab)

    $dprefs(list) insert end [msgcat::mc {Analysis}]
    lappend dprefs(tabs) [ttk::frame $w.analysis]

    set f [ttk::labelframe $w.analysis.file \
	       -text [msgcat::mc {Analysis File}]]

    ttk::checkbutton $f.auto -text [msgcat::mc {Autoload}] \
	-variable panalysis(autoload)

    ttk::entry $f.pre -textvariable panalysis(user) -width 60
    ttk::button $f.browse -text [msgcat::mc {Browse}] \
	-command "AnalysisPrefOpen panalysis(user)"
    ttk::entry $f.pre2 -textvariable panalysis(user2) -width 60
    ttk::button $f.browse2 -text [msgcat::mc {Browse}] \
	-command "AnalysisPrefOpen panalysis(user2)"
    ttk::entry $f.pre3 -textvariable panalysis(user3) -width 60
    ttk::button $f.browse3 -text [msgcat::mc {Browse}] \
	-command "AnalysisPrefOpen panalysis(user3)"
    ttk::entry $f.pre4 -textvariable panalysis(user4) -width 60
    ttk::button $f.browse4 -text [msgcat::mc {Browse}] \
	-command "AnalysisPrefOpen panalysis(user4)"

    grid $f.auto -padx 2 -pady 2 -sticky w
    grid $f.pre $f.browse -padx 2 -pady 2 -sticky w
    grid $f.pre2 $f.browse2 -padx 2 -pady 2 -sticky w
    grid $f.pre3 $f.browse3 -padx 2 -pady 2 -sticky w
    grid $f.pre4 $f.browse4 -padx 2 -pady 2 -sticky w

    set f [ttk::labelframe $w.analysis.log -text [msgcat::mc {Analysis Log}]]

    ttk::checkbutton $f.log -text [msgcat::mc {Show Command}] \
	-variable panalysis(log)

    grid $f.log -padx 2 -pady 2 -sticky w

    pack $w.analysis.file $w.analysis.log -side top -fill both -expand true
}

# Support

proc UpdateTaskMenu {} {
    global ds9
    global ime

    switch $ime(task) {
	stats -
	hist {
	    $ds9(mb).analysis.task entryconfig [msgcat::mc {Circle}] \
		-state normal
	    $ds9(mb).analysis.task entryconfig [msgcat::mc {Ellipse}] \
		-state normal
	    $ds9(mb).analysis.task entryconfig [msgcat::mc {Box}] \
		-state normal
	    $ds9(mb).analysis.task entryconfig [msgcat::mc {Polygon}] \
		-state normal
	    $ds9(mb).analysis.task entryconfig [msgcat::mc {Point}] \
		-state disabled
	    $ds9(mb).analysis.task entryconfig [msgcat::mc {Annulus}] \
		-state disabled
	    $ds9(mb).analysis.task entryconfig [msgcat::mc {Ellipse Annulus}] \
		-state disabled
	    $ds9(mb).analysis.task entryconfig [msgcat::mc {Box Annulus}] \
		-state disabled
	}
	radial {
	    $ds9(mb).analysis.task entryconfig [msgcat::mc {Circle}] \
		-state disabled
	    $ds9(mb).analysis.task entryconfig [msgcat::mc {Ellipse}] \
		-state disabled
	    $ds9(mb).analysis.task entryconfig [msgcat::mc {Box}] \
		-state disabled
	    $ds9(mb).analysis.task entryconfig [msgcat::mc {Polygon}] \
		-state disabled
	    $ds9(mb).analysis.task entryconfig [msgcat::mc {Point}] \
		-state disabled
	    $ds9(mb).analysis.task entryconfig [msgcat::mc {Annulus}] \
		-state normal
	    $ds9(mb).analysis.task entryconfig [msgcat::mc {Ellipse Annulus}] \
		-state normal
	    $ds9(mb).analysis.task entryconfig [msgcat::mc {Box Annulus}] \
		-state normal
	}
	plot2d {
	    $ds9(mb).analysis.task entryconfig [msgcat::mc {Circle}] \
		-state disabled
	    $ds9(mb).analysis.task entryconfig [msgcat::mc {Ellipse}] \
		-state disabled
	    $ds9(mb).analysis.task entryconfig [msgcat::mc {Box}] \
		-state disabled
	    $ds9(mb).analysis.task entryconfig [msgcat::mc {Polygon}] \
		-state disabled
	    $ds9(mb).analysis.task entryconfig [msgcat::mc {Point}] \
		-state disabled
	    $ds9(mb).analysis.task entryconfig [msgcat::mc {Annulus}] \
		-state disabled
	    $ds9(mb).analysis.task entryconfig [msgcat::mc {Ellipse Annulus}] \
		-state disabled
	    $ds9(mb).analysis.task entryconfig [msgcat::mc {Box Annulus}] \
		-state disabled
	}
	plot3d {
	    $ds9(mb).analysis.task entryconfig [msgcat::mc {Circle}] \
		-state normal
	    $ds9(mb).analysis.task entryconfig [msgcat::mc {Ellipse}] \
		-state normal
	    $ds9(mb).analysis.task entryconfig [msgcat::mc {Box}] \
		-state normal
	    $ds9(mb).analysis.task entryconfig [msgcat::mc {Polygon}] \
		-state normal
	    $ds9(mb).analysis.task entryconfig [msgcat::mc {Point}] \
		-state normal
	    $ds9(mb).analysis.task entryconfig [msgcat::mc {Annulus}] \
		-state disabled
	    $ds9(mb).analysis.task entryconfig [msgcat::mc {Ellipse Annulus}] \
		-state disabled
	    $ds9(mb).analysis.task entryconfig [msgcat::mc {Box Annulus}] \
		-state disabled
	}
    }
}
