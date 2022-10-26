#  Copyright (C) 1999-2022
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

# Menus

proc IllustrateMainMenu {} {
    global ds9
    global illustrate

    ThemeMenu $ds9(mb).illustrate
    $ds9(mb).illustrate add command -label [msgcat::mc {Get Information}] \
	-command IllustrateGetInfo
    $ds9(mb).illustrate add separator
    $ds9(mb).illustrate add cascade -label [msgcat::mc {Shape}] \
	-menu $ds9(mb).illustrate.shape
    $ds9(mb).illustrate add separator
    $ds9(mb).illustrate add cascade -label [msgcat::mc {Color}] \
	-menu $ds9(mb).illustrate.color
    $ds9(mb).illustrate add cascade -label [msgcat::mc {Width}] \
	-menu $ds9(mb).illustrate.width
    $ds9(mb).illustrate add separator
    $ds9(mb).illustrate add command -label [msgcat::mc {All}] \
	-command IllustrateSelectAll
    $ds9(mb).illustrate add command -label [msgcat::mc {None}] \
	-command IllustrateSelectNone
    $ds9(mb).illustrate add command -label [msgcat::mc {Invert}] \
	-command IllustrateInvertSelect
    $ds9(mb).illustrate add command -label [msgcat::mc {Front}] \
	-command IllustrateSelectFront
    $ds9(mb).illustrate add command -label [msgcat::mc {Back}] \
	-command IllustrateSelectBack
    $ds9(mb).illustrate add separator
    $ds9(mb).illustrate add command -label [msgcat::mc {Move to Front}] \
	-command IllustrateMoveFront
    $ds9(mb).illustrate add command -label [msgcat::mc {Move to Back}] \
	-command IllustrateMoveBack
    $ds9(mb).illustrate add separator
    $ds9(mb).illustrate add command -label [msgcat::mc {Save Selection}] \
	-command IllustrateSaveSelect
    $ds9(mb).illustrate add command -label [msgcat::mc {List Selection}] \
	-command IllustrateListSelect
    $ds9(mb).illustrate add command -label [msgcat::mc {Delete Selection}] \
	-command IllustrateDeleteSelect
    $ds9(mb).illustrate add separator
    $ds9(mb).illustrate add command -label [msgcat::mc {Open}] \
	-command IllustrateLoad
    $ds9(mb).illustrate add command -label [msgcat::mc {Save}] \
	-command IllustrateSaveAll
    $ds9(mb).illustrate add command -label [msgcat::mc {List}] \
	-command IllustrateListAll
    $ds9(mb).illustrate add separator
    $ds9(mb).illustrate add command -label [msgcat::mc {Delete All}] \
	-command IllustrateDeleteAll
    $ds9(mb).illustrate add separator
    $ds9(mb).illustrate add checkbutton -label [msgcat::mc {Show}] \
	-variable illustrate(show) -command {IllustrateShow}

    ThemeMenu $ds9(mb).illustrate.shape
    $ds9(mb).illustrate.shape add radiobutton -label [msgcat::mc {Circle}] \
	-variable illustrate(shape) -value circle
    $ds9(mb).illustrate.shape add radiobutton -label [msgcat::mc {Ellipse}] \
	-variable illustrate(shape) -value ellipse
    $ds9(mb).illustrate.shape add radiobutton -label [msgcat::mc {Box}] \
	-variable illustrate(shape) -value box
    $ds9(mb).illustrate.shape add radiobutton -label [msgcat::mc {Polygon}] \
	-variable illustrate(shape) -value polygon
    $ds9(mb).illustrate.shape add radiobutton -label [msgcat::mc {Line}] \
	-variable illustrate(shape) -value line
    $ds9(mb).illustrate.shape add radiobutton -label [msgcat::mc {Text}] \
	-variable illustrate(shape) -value text
    $ds9(mb).illustrate.shape add radiobutton -label [msgcat::mc {Image}] \
	-variable illustrate(shape) -value image

    ColorFillMenu $ds9(mb).illustrate.color illustrate color fill \
	IllustrateColor IllustrateColor
    WidthDashMenu $ds9(mb).illustrate.width illustrate width dash \
	IllustrateWidth IllustrateWidth
}

proc PrefsDialogIllustrateMenu {w} {
    set f [ttk::labelframe $w.millustrate -text [msgcat::mc {Illustrate}]]

    ttk::menubutton $f.menu -text [msgcat::mc {Menu}] -menu $f.menu.menu
    PrefsDialogButtonbarIllustrate $f.buttonbar

    grid $f.menu $f.buttonbar -padx 2 -pady 2 -sticky w

    set m $f.menu.menu
    ThemeMenu $m
    $m add cascade -label [msgcat::mc {Shape}] -menu $m.shape
    $m add separator
    $m add cascade -label [msgcat::mc {Color}] -menu $m.color
    $m add cascade -label [msgcat::mc {Width}] -menu $m.width
    $m add separator
    $m add checkbutton -label [msgcat::mc {Show}] -variable pillustrate(show)

    ThemeMenu $m.shape
    $m.shape add radiobutton -label [msgcat::mc {Circle}] \
	-variable pillustrate(shape) -value circle
    $m.shape add radiobutton -label [msgcat::mc {Ellipse}] \
	-variable pillustrate(shape) -value ellipse
    $m.shape add radiobutton -label [msgcat::mc {Box}] \
	-variable pillustrate(shape) -value box
    $m.shape add radiobutton -label [msgcat::mc {Polygon}] \
	-variable pillustrate(shape) -value polygon
    $m.shape add radiobutton -label [msgcat::mc {Line}] \
	-variable pillustrate(shape) -value line
    $m.shape add radiobutton -label [msgcat::mc {Text}] \
	-variable pillustrate(shape) -value text

    ColorMenu $m.color pillustrate color {}
    WidthDashMenu $m.width pillustrate width dash {} {}

    pack $f -side top -fill both -expand true
}

proc PrefsDialogIllustrate {} {
    global dprefs

    set w $dprefs(tab)

    $dprefs(listbox) insert {} end -id [ttk::frame $w.illustrate] \
	-text [msgcat::mc {Illustrate}]

    # Circle
    set f [ttk::labelframe $w.illustrate.circle -text [msgcat::mc {Circle}]]

    ttk::label $f.title -text [msgcat::mc {Radius}]
    ttk::entry $f.radius -textvariable pmarker(circle,radius) -width 10
    ttk::label $f.unit -text [msgcat::mc {Pixels}]
   
    grid $f.title $f.radius $f.unit -padx 2 -pady 2 -sticky w

    # Ellipse
    set f [ttk::labelframe $w.illustrate.ellipse -text [msgcat::mc {Ellipse}]]

    ttk::label $f.title -text "Radius 1"
    ttk::entry $f.radius1 -textvariable pmarker(ellipse,radius1) -width 10 
    ttk::label $f.unit -text [msgcat::mc {Pixels}]
    
    ttk::label $f.title2 -text "Radius 2"
    ttk::entry $f.radius2 -textvariable pmarker(ellipse,radius2) -width 10 
    ttk::label $f.unit2 -text [msgcat::mc {Pixels}]

    grid $f.title $f.radius1 $f.unit -padx 2 -pady 2 -sticky w
    grid $f.title2 $f.radius2 $f.unit2 -padx 2 -pady 2 -sticky w
    
    # Box
    set f [ttk::labelframe $w.illustrate.box -text [msgcat::mc {Box}]]

    ttk::label $f.title -text "Size 1"
    ttk::entry $f.radius1 -textvariable pmarker(box,radius1) -width 10 
    ttk::label $f.unit -text [msgcat::mc {Pixels}]
    
    ttk::label $f.title2 -text "Size 2"
    ttk::entry $f.radius2 -textvariable pmarker(box,radius2) -width 10 
    ttk::label $f.unit2 -text [msgcat::mc {Pixels}]

    grid $f.title $f.radius1 $f.unit -padx 2 -pady 2 -sticky w
    grid $f.title2 $f.radius2 $f.unit2 -padx 2 -pady 2 -sticky w

    # Polygon
    set f [ttk::labelframe $w.illustrate.polygon -text [msgcat::mc {Polygon}]]

    ttk::label $f.title -text "Width"
    ttk::entry $f.width -textvariable pmarker(polygon,width) -width 10 
    ttk::label $f.unit -text [msgcat::mc {Image}]
    
    ttk::label $f.title2 -text "Height"
    ttk::entry $f.height -textvariable pmarker(polygon,height) -width 10 
    ttk::label $f.unit2 -text [msgcat::mc {Image}]

    grid $f.title $f.width $f.unit -padx 2 -pady 2 -sticky w
    grid $f.title2 $f.height $f.unit2 -padx 2 -pady 2 -sticky w

    pack $w.illustrate.circle $w.illustrate.ellipse $w.illustrate.box \
	$w.illustrate.polygon \
	-side top -fill both -expand true
}

proc ButtonsIllustrateDef {} {
    global pbuttons

    array set pbuttons {
	illustrate,info 1
	illustrate,circle 0
	illustrate,ellipse 0
	illustrate,box 0
	illustrate,polygon 0
	illustrate,line 0
	illustrate,text 0
	illustrate,all 1
	illustrate,none 1
	illustrate,invert 1
	illustrate,front 1
	illustrate,back 1
	illustrate,movefront 1
	illustrate,moveback 1
	illustrate,saveselect 0
	illustrate,listselect 0
	illustrate,deleteselect 0
	illustrate,load 1
	illustrate,save 1
	illustrate,list 1
	illustrate,delete 1
	illustrate,show 0
    }
}

proc CreateButtonsIllustrate {} {
    global buttons
    global ds9

    ttk::frame $ds9(buttons).illustrate

    ButtonButton $ds9(buttons).illustrate.info \
	[string tolower [msgcat::mc {Information}]] IllustrateGetInfo

    RadioButton $ds9(buttons).illustrate.circle \
	[string tolower [msgcat::mc {Circle}]] illustrate shape circle {}
    RadioButton $ds9(buttons).illustrate.ellipse \
	[string tolower [msgcat::mc {Ellipse}]] illustrate shape ellipse {}
    RadioButton $ds9(buttons).illustrate.box \
	[string tolower [msgcat::mc {Box}]] illustrate shape box {}
    RadioButton $ds9(buttons).illustrate.polygon \
	[string tolower [msgcat::mc {Polygon}]] illustrate shape polygon {}
    RadioButton $ds9(buttons).illustrate.line \
	[string tolower [msgcat::mc {Line}]] illustrate shape line {}
    RadioButton $ds9(buttons).illustrate.text \
	[string tolower [msgcat::mc {Text}]] illustrate shape text {}

    ButtonButton $ds9(buttons).illustrate.all \
	[string tolower [msgcat::mc {All}]] IllustrateSelectAll
    ButtonButton $ds9(buttons).illustrate.none \
	[string tolower [msgcat::mc {None}]] IllustrateSelectNone
    ButtonButton $ds9(buttons).illustrate.invert \
	[string tolower [msgcat::mc {Invert}]] IllustrateInvertSelect
    ButtonButton $ds9(buttons).illustrate.front \
	[string tolower [msgcat::mc {Front}]] IllustrateSelectFront
    ButtonButton $ds9(buttons).illustrate.back \
	[string tolower [msgcat::mc {Back}]] IllustrateSelectBack

    ButtonButton $ds9(buttons).illustrate.movefront \
	[string tolower [msgcat::mc {Move Front}]] IllustrateMoveFront
    ButtonButton $ds9(buttons).illustrate.moveback \
	[string tolower [msgcat::mc {Move Back}]] IllustrateMoveBack

    ButtonButton $ds9(buttons).illustrate.saveselect \
	[string tolower [msgcat::mc {Save Select}]] IllustrateSaveSelect
    ButtonButton $ds9(buttons).illustrate.listselect \
	[string tolower [msgcat::mc {List Select}]] IllustrateListSelect
    ButtonButton $ds9(buttons).illustrate.deleteselect \
	[string tolower [msgcat::mc {Delete Select}]] IllustrateDeleteSelect

    ButtonButton $ds9(buttons).illustrate.load \
	[string tolower [msgcat::mc {Open}]] IllustrateLoad
    ButtonButton $ds9(buttons).illustrate.save \
	[string tolower [msgcat::mc {Save}]] IllustrateSaveAll
    ButtonButton $ds9(buttons).illustrate.list \
	[string tolower [msgcat::mc {List}]] IllustrateListAll

    ButtonButton $ds9(buttons).illustrate.delete \
	[string tolower [msgcat::mc {Delete All}]] IllustrateDeleteAll

    CheckButton $ds9(buttons).illustrate.show \
	[string tolower [msgcat::mc {Show}]] illustrate show IllustrateShow

    set buttons(illustrate) "
        $ds9(buttons).illustrate.info pbuttons(illustrate,info)
        $ds9(buttons).illustrate.circle pbuttons(illustrate,circle)
        $ds9(buttons).illustrate.ellipse pbuttons(illustrate,ellipse)
        $ds9(buttons).illustrate.box pbuttons(illustrate,box)
        $ds9(buttons).illustrate.polygon pbuttons(illustrate,polygon)
        $ds9(buttons).illustrate.line pbuttons(illustrate,line)
        $ds9(buttons).illustrate.text pbuttons(illustrate,text)
        $ds9(buttons).illustrate.all pbuttons(illustrate,all)
        $ds9(buttons).illustrate.none pbuttons(illustrate,none)
        $ds9(buttons).illustrate.invert pbuttons(illustrate,invert)
        $ds9(buttons).illustrate.front pbuttons(illustrate,front)
        $ds9(buttons).illustrate.back pbuttons(illustrate,back)
        $ds9(buttons).illustrate.movefront pbuttons(illustrate,movefront)
        $ds9(buttons).illustrate.moveback pbuttons(illustrate,moveback)
        $ds9(buttons).illustrate.saveselect pbuttons(illustrate,saveselect)
        $ds9(buttons).illustrate.listselect pbuttons(illustrate,listselect)
        $ds9(buttons).illustrate.deleteselect pbuttons(illustrate,deleteselect)
        $ds9(buttons).illustrate.load pbuttons(illustrate,load)
        $ds9(buttons).illustrate.save pbuttons(illustrate,save)
        $ds9(buttons).illustrate.list pbuttons(illustrate,list)
        $ds9(buttons).illustrate.delete pbuttons(illustrate,delete)
        $ds9(buttons).illustrate.show pbuttons(illustrate,show)
    "
}

proc PrefsDialogButtonbarIllustrate {f} {
    global buttons
    global pbuttons

    ttk::menubutton $f -text [msgcat::mc {Buttonbar}] -menu $f.menu
    
    set m $f.menu
    ThemeMenu $m
    $m add checkbutton -label [msgcat::mc {Get Information}] \
	-variable pbuttons(illustrate,info) \
	-command {UpdateButtons buttons(illustrate)}
    $m add separator
    $m add cascade -label [msgcat::mc {Shape}] -menu $m.shape
    $m add separator
    $m add checkbutton -label [msgcat::mc {All}] \
	-variable pbuttons(illustrate,all) \
	-command {UpdateButtons buttons(illustrate)}
    $m add checkbutton -label [msgcat::mc {None}] \
	-variable pbuttons(illustrate,none) \
	-command {UpdateButtons buttons(illustrate)}
    $m add checkbutton -label [msgcat::mc {Invert}] \
	-variable pbuttons(illustrate,invert) \
	-command {UpdateButtons buttons(illustrate)}
    $m add checkbutton -label [msgcat::mc {Front}] \
	-variable pbuttons(illustrate,front) \
	-command {UpdateButtons buttons(illustrate)}
    $m add checkbutton -label [msgcat::mc {Back}] \
	-variable pbuttons(illustrate,back) \
	-command {UpdateButtons buttons(illustrate)}
    $m add separator
    $m add checkbutton -label [msgcat::mc {Move to Front}] \
	-variable pbuttons(illustrate,movefront) \
	-command {UpdateButtons buttons(illustrate)}
    $m add checkbutton -label [msgcat::mc {Move to Back}] \
	-variable pbuttons(illustrate,moveback) \
	-command {UpdateButtons buttons(illustrate)}
    $m add separator
    $m add checkbutton -label [msgcat::mc {Save Selection}] \
	-variable pbuttons(illustrate,saveselect) \
	-command {UpdateButtons buttons(illustrate)}
    $m add checkbutton -label [msgcat::mc {List Selection}] \
	-variable pbuttons(illustrate,listselect) \
	-command {UpdateButtons buttons(illustrate)}
    $m add checkbutton -label [msgcat::mc {Delete Selection}] \
	-variable pbuttons(illustrate,deleteselect) \
	-command {UpdateButtons buttons(illustrate)}
    $m add separator
    $m add checkbutton -label [msgcat::mc {Open}] \
	-variable pbuttons(illustrate,load) \
	-command {UpdateButtons buttons(illustrate)}
    $m add checkbutton -label [msgcat::mc {Save}] \
	-variable pbuttons(illustrate,save) \
	-command {UpdateButtons buttons(illustrate)}
    $m add checkbutton -label [msgcat::mc {List}] \
	-variable pbuttons(illustrate,list) \
	-command {UpdateButtons buttons(illustrate)}
    $m add separator
    $m add checkbutton -label [msgcat::mc {Delete All}] \
	-variable pbuttons(illustrate,delete) \
	-command {UpdateButtons buttons(illustrate)}
    $m add separator
    $m add checkbutton -label [msgcat::mc {Show}] \
	-variable pbuttons(illustrate,show) \
	-command {UpdateButtons buttons(illustrate)}

    ThemeMenu $m.shape
    $m.shape add checkbutton -label [msgcat::mc {Circle}] \
	-variable pbuttons(illustrate,circle) \
	-command {UpdateButtons buttons(illustrate)}
    $m.shape add checkbutton -label [msgcat::mc {Ellipse}] \
	-variable pbuttons(illustrate,ellipse) \
	-command {UpdateButtons buttons(illustrate)}
    $m.shape add checkbutton -label [msgcat::mc {Box}] \
	-variable pbuttons(illustrate,box) \
	-command {UpdateButtons buttons(illustrate)}
    $m.shape add checkbutton -label [msgcat::mc {Polygon}] \
	-variable pbuttons(illustrate,polygon) \
	-command {UpdateButtons buttons(illustrate)}
    $m.shape add checkbutton -label [msgcat::mc {Line}] \
	-variable pbuttons(illustrate,line) \
	-command {UpdateButtons buttons(illustrate)}
    $m.shape add checkbutton -label [msgcat::mc {Text}] \
	-variable pbuttons(illustrate,text) \
	-command {UpdateButtons buttons(illustrate)}
}

proc UpdateIllustrateMenu {} {
    global ds9
    global current

    global debug
    if {$debug(tcl,update)} {
	puts stderr "UpdateIllustrateMenu"
    }

    switch -- $current(mode) {
	illustrate {
	    $ds9(mb) entryconfig [msgcat::mc {Illustrate}] -state normal
	    ConfigureButtons illustrate normal
	}
	default {
	    $ds9(mb) entryconfig [msgcat::mc {Illustrate}] -state disabled
	    ConfigureButtons illustrate disabled
	}
    }
}

