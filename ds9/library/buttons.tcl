#  Copyright (C) 1999-2021
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

    set ds9(buttons,frame) [ttk::frame $ds9(main).buttons]
    set ds9(buttons,sep) [ttk::separator $ds9(main).sbuttons -orient horizontal]

    set ds9(buttons) [ttk::frame $ds9(main).buttons.main]
    set ds9(buttons,aux) [ttk::frame $ds9(main).buttons.aux]

    CreateButtonsMajor

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

proc CreateButtonsMajor {} {
    global ds9
    global buttons

    set buttons(major,prev) $ds9(buttons).file
    set buttons(major,current) $ds9(buttons).file

    ttk::frame $ds9(buttons).major
    RadioButton $ds9(buttons).major.file \
	[string tolower [msgcat::mc {File}]] \
	buttons(major,current) $ds9(buttons).file MajorButton
    RadioButton $ds9(buttons).major.edit \
	[string tolower [msgcat::mc {Edit}]] \
	buttons(major,current) $ds9(buttons).edit MajorButton
    RadioButton $ds9(buttons).major.view \
	[string tolower [msgcat::mc {View}]] \
	buttons(major,current) $ds9(buttons).view MajorButton
    RadioButton $ds9(buttons).major.frame \
	[string tolower [msgcat::mc {Frame}]] \
	buttons(major,current) $ds9(buttons).frame MajorButton
    RadioButton $ds9(buttons).major.bin \
	[string tolower [msgcat::mc {Bin}]] \
	buttons(major,current) $ds9(buttons).bin MajorButton
    RadioButton $ds9(buttons).major.zoom \
	[string tolower [msgcat::mc {Zoom}]] \
	buttons(major,current) $ds9(buttons).zoom MajorButton
    RadioButton $ds9(buttons).major.scale \
	[string tolower [msgcat::mc {Scale}]] \
	buttons(major,current) $ds9(buttons).scale MajorButton
    RadioButton $ds9(buttons).major.color \
	[string tolower [msgcat::mc {Color}]] \
	buttons(major,current) $ds9(buttons).color MajorButton
    RadioButton $ds9(buttons).major.region \
	[string tolower [msgcat::mc {Region}]] \
	buttons(major,current) $ds9(buttons).region MajorButton
    RadioButton $ds9(buttons).major.wcs \
	[string tolower [msgcat::mc {WCS}]] \
	buttons(major,current) $ds9(buttons).wcs MajorButton
    RadioButton $ds9(buttons).major.analysis \
	[string tolower [msgcat::mc {Analysis}]] \
	buttons(major,current) $ds9(buttons).analysis MajorButton
    RadioButton $ds9(buttons).major.help \
	[string tolower [msgcat::mc {Help}]] \
	buttons(major,current) $ds9(buttons).help MajorButton

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
}

proc CreateButtonbarAnalysis {} {
    global ds9
    global buttons
    global ianalysis
    global pbuttons

    set ii $ianalysis(buttonbar,count)
    set ds9(buttons,aux,$ii) [ttk::frame $ds9(buttons,aux).ianalysis${ii}]
    set buttons(ianalysis,$ii) {}
    for {set jj 0} {$jj<$ianalysis(buttonbar,$ii,count)} {incr jj} {
	set ianalysis(buttonbar,$ii-$jj,button) \
	    $ds9(buttons,aux).ianalysis${ii}.button${jj}
	ButtonButton $ianalysis(buttonbar,$ii-$jj,button) \
	    [string tolower $ianalysis(buttonbar,$ii-$jj,item)] \
	    [list AnalysisTask $ii-$jj buttonbar]

	set pbuttons(ianalysis,$ii,$jj) 1
	lappend buttons(ianalysis,$ii) $ianalysis(buttonbar,$ii-$jj,button) \
	    pbuttons(ianalysis,$ii,$jj)
    }
    incr ianalysis(buttonbar,count)

    LayoutButtons
}

proc DestroyButtonbarAnalysis {} {
    global ds9
    global buttons
    global ianalysis
    global pbuttons

    for {set ii 0} {$ii<$ianalysis(buttonbar,count)} {incr ii} {
	for {set jj 0} {$jj<$ianalysis(buttonbar,$ii,count)} {incr jj} {
	    destroy $ianalysis(buttonbar,$ii-$jj,button)
	    unset pbuttons(ianalysis,$ii,$jj)
	}
	destroy $ds9(buttons,aux,$ii)
	unset ds9(buttons,aux,$ii)

	unset buttons(ianalysis,$ii)
    }
}

# basic button types

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

# Layout

proc LayoutButtons {} {
    global ds9
    global buttons
    global view
    global ianalysis

    pack forget $ds9(buttons)
    pack forget $ds9(buttons,aux)

    pack forget $ds9(buttons).major
    switch $view(layout) {
	horizontal {
	    $ds9(buttons) configure -width 0
	    pack propagate $ds9(buttons) on
	    pack $ds9(buttons) -side top -fill both -expand true

	    if {$ianalysis(buttonbar,count)>0} {
		$ds9(buttons,aux) configure -width 0
		pack propagate $ds9(buttons,aux) on
		pack $ds9(buttons,aux) -side top -fill both -expand true
	    }

	    pack $ds9(buttons).major -side top -fill x -expand true
	}
	vertical {
	    pack propagate $ds9(buttons) off
	    $ds9(buttons) configure -width 100
	    pack $ds9(buttons) -side left -fill both -expand true

	    if {$ianalysis(buttonbar,count)>0} {
		$ds9(buttons,aux) configure \
		    -width [expr 100*$ianalysis(buttonbar,count)]
		pack propagate $ds9(buttons,aux) off
		pack $ds9(buttons,aux) -side left -fill both -expand true
	    }

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

    for {set ii 0} {$ii<$ianalysis(buttonbar,count)} {incr ii} {
	UpdateButtons buttons(ianalysis,$ii)
    }

    MajorButton
    AnalysisButton
}

proc MajorButton {} {
    global buttons
    global view

    pack forget $buttons(major,prev)
    switch $view(layout) {
	horizontal {
	    pack $buttons(major,current) -side top -fill x -expand true
	}
	vertical {
	    pack $buttons(major,current) -side bottom -fill x -expand true -anchor s
	}
    }
    set buttons(major,prev) $buttons(major,current)
}

proc AnalysisButton {} {
    global ds9
    global view
    global ianalysis

    for {set ii 0} {$ii<$ianalysis(buttonbar,count)} {incr ii} {
	pack forget $ds9(buttons,aux,$ii)
	switch $view(layout) {
	    horizontal {
		pack $ds9(buttons,aux,$ii) -side bottom -fill x -expand true
	    }
	    vertical {
		pack $ds9(buttons,aux,$ii) -side left -fill x -expand true -anchor n
	    }
	}
    }
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
