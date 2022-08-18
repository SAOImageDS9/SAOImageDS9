#  Copyright (C) 1999-2022
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

# Menus

proc IllustrateMainMenu {} {
    global ds9
    global illustrate

    ThemeMenu $ds9(mb).illustrate
    $ds9(mb).illustrate add command -label "[msgcat::mc {Get Information}]..." \
	-command {}
    $ds9(mb).illustrate add separator
    $ds9(mb).illustrate add cascade -label [msgcat::mc {Mode}] \
	-menu $ds9(mb).illustrate.mode
    $ds9(mb).illustrate add separator
    $ds9(mb).illustrate add cascade -label [msgcat::mc {Color}] \
	-menu $ds9(mb).illustrate.color
    $ds9(mb).illustrate add cascade -label [msgcat::mc {Width}] \
	-menu $ds9(mb).illustrate.width
    $ds9(mb).illustrate add cascade -label [msgcat::mc {Font}] \
	-menu $ds9(mb).illustrate.font
    $ds9(mb).illustrate add separator
    $ds9(mb).illustrate add command -label [msgcat::mc {Move to Front}] \
	-command {}
    $ds9(mb).illustrate add command -label [msgcat::mc {Move to Back}] \
	-command {}
    $ds9(mb).illustrate add separator
    $ds9(mb).illustrate add command -label [msgcat::mc {Select All}] \
	-command {}
    $ds9(mb).illustrate add command -label [msgcat::mc {Select None}] \
	-command MarkerUnselectAll
    $ds9(mb).illustrate add command -label [msgcat::mc {Invert Selection}] \
	-command {}
    $ds9(mb).illustrate add separator
    $ds9(mb).illustrate add command -label [msgcat::mc {Delete}] \
	-command {}

    ThemeMenu $ds9(mb).illustrate.mode
    $ds9(mb).illustrate.mode add radiobutton -label [msgcat::mc {Pointer}] \
	-variable illustrate(mode) -value pointer
    $ds9(mb).illustrate.mode add radiobutton -label [msgcat::mc {Circle}] \
	-variable illustrate(mode) -value circle
    $ds9(mb).illustrate.mode add radiobutton -label [msgcat::mc {Ellipse}] \
	-variable illustrate(mode) -value ellipse
    $ds9(mb).illustrate.mode add radiobutton -label [msgcat::mc {Box}] \
	-variable illustrate(mode) -value box
    $ds9(mb).illustrate.mode add radiobutton -label [msgcat::mc {Polygon}] \
	-variable illustrate(mode) -value polygon
    $ds9(mb).illustrate.mode add radiobutton -label [msgcat::mc {Line}] \
	-variable illustrate(mode) -value line
    $ds9(mb).illustrate.mode add radiobutton -label [msgcat::mc {Text}] \
	-variable illustrate(mode) -value text

    ColorMenu $ds9(mb).illustrate.color illustrate color {}
    WidthDashMenu $ds9(mb).illustrate.width illustrate width dash \
	{} {}
    FontMenu $ds9(mb).illustrate.font illustrate font font,size font,weight \
	font,slant {}
}

proc PrefsDialogIllustrateMenu {w} {
    set f [ttk::labelframe $w.millustrate -text [msgcat::mc {Illustrate}]]

    ttk::menubutton $f.menu -text [msgcat::mc {Menu}] -menu $f.menu.menu
    PrefsDialogButtonbarIllustrate $f.buttonbar

    grid $f.menu $f.buttonbar -padx 2 -pady 2 -sticky w

    set m $f.menu.menu
    ThemeMenu $m
    $m add cascade -label [msgcat::mc {Mode}] -menu $m.mode
    $m add separator
    $m add cascade -label [msgcat::mc {Color}] -menu $m.color
    $m add cascade -label [msgcat::mc {Width}] -menu $m.width
    $m add cascade -label [msgcat::mc {Font}] -menu $m.font

    ThemeMenu $m.mode
    $m.mode add radiobutton -label [msgcat::mc {Pointer}] \
	-variable pillustrate(mode) -value pointer
    $m.mode add radiobutton -label [msgcat::mc {Circle}] \
	-variable pillustrate(mode) -value circle
    $m.mode add radiobutton -label [msgcat::mc {Ellipse}] \
	-variable pillustrate(mode) -value ellipse
    $m.mode add radiobutton -label [msgcat::mc {Box}] \
	-variable pillustrate(mode) -value box
    $m.mode add radiobutton -label [msgcat::mc {Polygon}] \
	-variable pillustrate(mode) -value polygon
    $m.mode add radiobutton -label [msgcat::mc {Line}] \
	-variable pillustrate(mode) -value line
    $m.mode add radiobutton -label [msgcat::mc {Text}] \
	-variable pillustrate(mode) -value text

    ColorMenu $m.color pillustrate color {}
    WidthDashMenu $m.width pillustrate width dash {} {}
    FontMenu $m.font pillustrate font font,size font,weight font,slant {}

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

    pack $w.illustrate.circle $w.illustrate.ellipse $w.illustrate.box \
	-side top -fill both -expand true
}

proc ButtonsIllustrateDef {} {
    global pbuttons

    array set pbuttons {
	illustrate,info 1
	illustrate,pointer 1
	illustrate,circle 1
	illustrate,ellipse 1
	illustrate,box 1
	illustrate,polygon 1
	illustrate,line 1
	illustrate,text 1
	illustrate,front 1
	illustrate,back 1
	illustrate,all 1
	illustrate,none 1
	illustrate,invert 0
	illustrate,delete 1
    }
}

proc CreateButtonsIllustrate {} {
    global buttons
    global ds9

    ttk::frame $ds9(buttons).illustrate

    ButtonButton $ds9(buttons).illustrate.info \
	[string tolower [msgcat::mc {Information}]] {}

    RadioButton $ds9(buttons).illustrate.pointer \
	[string tolower [msgcat::mc {Pointer}]] \
	illustrate mode pointer {}
    RadioButton $ds9(buttons).illustrate.circle \
	[string tolower [msgcat::mc {Circle}]] \
	illustrate mode circle {}
    RadioButton $ds9(buttons).illustrate.ellipse \
	[string tolower [msgcat::mc {Ellipse}]] \
	illustrate mode ellipse {}
    RadioButton $ds9(buttons).illustrate.box \
	[string tolower [msgcat::mc {Box}]] \
	illustrate mode box {}
    RadioButton $ds9(buttons).illustrate.polygon \
	[string tolower [msgcat::mc {Polygon}]] \
	illustrate mode polygon {}
    RadioButton $ds9(buttons).illustrate.line \
	[string tolower [msgcat::mc {Line}]] \
	illustrate mode line {}
    RadioButton $ds9(buttons).illustrate.text \
	[string tolower [msgcat::mc {Text}]] \
	illustrate mode text {}

    ButtonButton $ds9(buttons).illustrate.front \
	[string tolower [msgcat::mc {Front}]] {}
    ButtonButton $ds9(buttons).illustrate.back \
	[string tolower [msgcat::mc {Back}]] {}

    ButtonButton $ds9(buttons).illustrate.all \
	[string tolower [msgcat::mc {All}]] {}
    ButtonButton $ds9(buttons).illustrate.none \
	[string tolower [msgcat::mc {None}]] {}
    ButtonButton $ds9(buttons).illustrate.invert \
	[string tolower [msgcat::mc {Invert}]] {}

    ButtonButton $ds9(buttons).illustrate.delete \
	[string tolower [msgcat::mc {Delete}]] {}

    set buttons(illustrate) "
        $ds9(buttons).illustrate.info pbuttons(illustrate,info)
        $ds9(buttons).illustrate.pointer pbuttons(illustrate,pointer)
        $ds9(buttons).illustrate.circle pbuttons(illustrate,circle)
        $ds9(buttons).illustrate.ellipse pbuttons(illustrate,ellipse)
        $ds9(buttons).illustrate.box pbuttons(illustrate,box)
        $ds9(buttons).illustrate.polygon pbuttons(illustrate,polygon)
        $ds9(buttons).illustrate.line pbuttons(illustrate,line)
        $ds9(buttons).illustrate.text pbuttons(illustrate,text)
        $ds9(buttons).illustrate.front pbuttons(illustrate,front)
        $ds9(buttons).illustrate.back pbuttons(illustrate,back)
        $ds9(buttons).illustrate.all pbuttons(illustrate,all)
        $ds9(buttons).illustrate.none pbuttons(illustrate,none)
        $ds9(buttons).illustrate.invert pbuttons(illustrate,invert)
        $ds9(buttons).illustrate.delete pbuttons(illustrate,delete)
    "
}


