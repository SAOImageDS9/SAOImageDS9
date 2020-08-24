#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc ButtonsDef {} {
    global pbuttons

    # TButtonBar class bindings
    ttk::copyBindings TButton TButtonBar
    bind TButtonBar <Enter> {}
    bind TButtonBar <Leave> {}

    ButtonsFileDef
    ButtonsEditDef
    ButtonsViewDef
    ButtonsFrameDef
    ButtonsBinDef
    ButtonsZoomDef
    ButtonsScaleDef
    ButtonsColorDef
    ButtonsRegionDef
    ButtonsWCSDef
    ButtonsAnalysisDef
    ButtonsHelpDef
}

proc CreateButtons {} {
    global ds9
    global buttons

    set ds9(buttons) [ttk::frame $ds9(main).buttons]
    set ds9(buttons,sep) [ttk::separator $ds9(main).sbuttons -orient horizontal]

    set buttons(majorPrev) $ds9(buttons).file
    set buttons(majorCurrent) $ds9(buttons).file

    ttk::frame $ds9(buttons).major
    RadioButton $ds9(buttons).major.file \
	[string tolower [msgcat::mc {File}]] \
	buttons(majorCurrent) $ds9(buttons).file MajorButton
    RadioButton $ds9(buttons).major.edit \
	[string tolower [msgcat::mc {Edit}]] \
	buttons(majorCurrent) $ds9(buttons).edit MajorButton
    RadioButton $ds9(buttons).major.view \
	[string tolower [msgcat::mc {View}]] \
	buttons(majorCurrent) $ds9(buttons).view MajorButton
    RadioButton $ds9(buttons).major.frame \
	[string tolower [msgcat::mc {Frame}]] \
	buttons(majorCurrent) $ds9(buttons).frame MajorButton
    RadioButton $ds9(buttons).major.bin \
	[string tolower [msgcat::mc {Bin}]] \
	buttons(majorCurrent) $ds9(buttons).bin MajorButton
    RadioButton $ds9(buttons).major.zoom \
	[string tolower [msgcat::mc {Zoom}]] \
	buttons(majorCurrent) $ds9(buttons).zoom MajorButton
    RadioButton $ds9(buttons).major.scale \
	[string tolower [msgcat::mc {Scale}]] \
	buttons(majorCurrent) $ds9(buttons).scale MajorButton
    RadioButton $ds9(buttons).major.color \
	[string tolower [msgcat::mc {Color}]] \
	buttons(majorCurrent) $ds9(buttons).color MajorButton
    RadioButton $ds9(buttons).major.region \
	[string tolower [msgcat::mc {Region}]] \
	buttons(majorCurrent) $ds9(buttons).region MajorButton
    RadioButton $ds9(buttons).major.wcs \
	[string tolower [msgcat::mc {WCS}]] \
	buttons(majorCurrent) $ds9(buttons).wcs MajorButton
    RadioButton $ds9(buttons).major.analysis \
	[string tolower [msgcat::mc {Analysis}]] \
	buttons(majorCurrent) $ds9(buttons).analysis MajorButton
    RadioButton $ds9(buttons).major.help \
	[string tolower [msgcat::mc {Help}]] \
	buttons(majorCurrent) $ds9(buttons).help MajorButton

    global pbuttons
    array set pbuttons {
	major,file 1
	major,edit 1
	major,view 1
	major,frame 1
	major,bin 1
	major,zoom 1
	major,scale 1
	major,color 1
	major,region 1
	major,wcs 1
	major,analysis 1
	major,help 1
    }

    set buttons(major) "
        $ds9(buttons).major.file pbuttons(major,file)
        $ds9(buttons).major.edit pbuttons(major,edit)
        $ds9(buttons).major.view pbuttons(major,view)
        $ds9(buttons).major.frame pbuttons(major,frame)
        $ds9(buttons).major.bin pbuttons(major,bin)
        $ds9(buttons).major.zoom pbuttons(major,zoom)
        $ds9(buttons).major.scale pbuttons(major,scale)
        $ds9(buttons).major.color pbuttons(major,color)
        $ds9(buttons).major.region pbuttons(major,region)
        $ds9(buttons).major.wcs pbuttons(major,wcs)
        $ds9(buttons).major.analysis pbuttons(major,analysis)
        $ds9(buttons).major.help pbuttons(major,help)
    "
    CreateButtonsFile
    CreateButtonsEdit
    CreateButtonsView
    CreateButtonsFrame
    CreateButtonsBin
    CreateButtonsZoom
    CreateButtonsScale
    CreateButtonsColor
    CreateButtonsRegion
    CreateButtonsWCS
    CreateButtonsAnalysis
    CreateButtonsHelp

    LayoutButtons
}

proc ButtonButton {button text cmd} {
    ttk::button $button \
	-class TButtonBar \
	-text $text \
	-command $cmd \
	-width -1 \
	-takefocus 0
}

proc RadioButton {button text varname value cmd} {
    ttk::button $button \
	-class TButtonBar \
	-text $text \
	-width -1 \
	-takefocus 0 \
	-command "RadioButtonSim $button $varname \{$value\} \{$cmd\}"

    # setup trace on $varname, so that all buttons that use this variable
    # will be updated when the variable is changed
    uplevel #0 trace variable $varname w \
	[list "RadioButtonCB $button \{$value\}"]

    # setup <Map> event so that anytime the button is redrawn,
    # it is updated
    bind $button <Map> "ButtonMap %W $varname"
}

proc CheckButton {button text varname cmd} {
    ttk::button $button \
	-class TButtonBar \
	-text $text \
	-width -1 \
	-takefocus 0 \
	-command "CheckButtonSim $button $varname \{$cmd\}"

    uplevel #0 trace variable $varname w [list "CheckButtonCB $button"]

    bind $button <Map> "ButtonMap %W $varname"
}

proc ButtonMap {button varname} {
    upvar #0 $varname var
    set vv $var

    # delay slightly, I don't know why this is needed
    after 10 [list set $varname $vv]
}

proc RadioButtonSim {button varname value cmd} {
    uplevel #0 [list set $varname $value]
    eval $cmd
}

proc RadioButtonCB {button value varname id op} {
    upvar #0 $varname var
    global $varname

    global ds9

    if {[$button cget -state] != {disabled}} {
	switch $ds9(wm) {
	    x11 {
		if {$var($id) == $value} {
		    $button configure -state active
		} else {
		    $button configure -state normal
		}
	    }
	    aqua -
	    win32 {
		if {$var($id) == $value} {
		    $button configure -default active
		} else {
		    $button configure -default normal
		}
	    }
	}
    }
}

proc CheckButtonSim {button varname cmd} {
    upvar #0 $varname var
    uplevel #0 [list set $varname [expr !$var]]
    eval $cmd
}

proc CheckButtonCB {button varname id op} {
    upvar #0 $varname var
    global $varname

    global ds9

    if {[$button cget -state] != {disabled}} {
	switch $ds9(wm) {
	    x11 {
		if {$var($id)} {
		    $button configure -state active
		} else {
		    $button configure -state normal
		}
	    }
	    aqua -
	    win32 {
		if {$var($id)} {
		    $button configure -default active
		} else {
		    $button configure -default normal
		}
	    }
	}
    }
}

proc LayoutButtons {} {
    global ds9
    global buttons
    global view

    pack forget $ds9(buttons).major
    switch $view(layout) {
	horizontal {
	    $ds9(buttons) configure -width 0
	    pack propagate $ds9(buttons) on
	    pack $ds9(buttons).major -side top -fill x -expand true
	}
	vertical {
	    $ds9(buttons) configure -width 125
	    pack propagate $ds9(buttons) off
	    pack $ds9(buttons).major -side top -fill x -expand true -anchor n
	}
    }

    UpdateButtons buttons(major)
    UpdateButtons buttons(file)
    UpdateButtons buttons(edit)
    UpdateButtons buttons(view)
    UpdateButtons buttons(frame)
    UpdateButtons buttons(bin)
    UpdateButtons buttons(zoom)
    UpdateButtons buttons(scale)
    UpdateButtons buttons(color)
    UpdateButtons buttons(region)
    UpdateButtons buttons(wcs)
    UpdateButtons buttons(analysis)
    UpdateButtons buttons(help)

    MajorButton
}

proc MajorButton {} {
    global buttons
    global view

    pack forget $buttons(majorPrev)
    switch $view(layout) {
	horizontal {
	    pack $buttons(majorCurrent) -side top -fill x -expand true
	}
	vertical {
	    pack $buttons(majorCurrent) -side bottom -fill x -expand true -anchor s
	}
    }
    set buttons(majorPrev) $buttons(majorCurrent)
}

proc UpdateButtons {varname} {
    upvar #0 $varname var

    foreach {which what} $var {
	pack forget $which
    }
    foreach {which what} $var {
	ShowButton $which $what
    }
}

proc ShowButton {which varname} {
    upvar #0 $varname var
    global view

    if {$var} {
 	switch $view(layout) {
 	    horizontal {pack $which -side left -fill both -expand true}
 	    vertical {pack $which -side top -fill both -expand true}
 	}
    }
}
