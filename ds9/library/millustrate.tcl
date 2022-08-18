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
    $ds9(mb).illustrate add checkbutton -label [msgcat::mc {Fill}] \
	-variable illustrate(fill)
    $ds9(mb).illustrate add cascade -label [msgcat::mc {Fill Color}] \
	-menu $ds9(mb).illustrate.fillcolor
    $ds9(mb).illustrate add separator
    $ds9(mb).illustrate add command -label [msgcat::mc {Move to Front}]
    $ds9(mb).illustrate add command -label [msgcat::mc {Move to Back}]
    $ds9(mb).illustrate add separator
    $ds9(mb).illustrate add command -label [msgcat::mc {Select All}]
    $ds9(mb).illustrate add command -label [msgcat::mc {Select None}]
    $ds9(mb).illustrate add command -label [msgcat::mc {Invert Selection}]
    $ds9(mb).illustrate add separator
    $ds9(mb).illustrate add command -label [msgcat::mc {Delete}]

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
    ColorMenu $ds9(mb).illustrate.fillcolor illustrate color,fill {}
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
    $m add cascade -label [msgcat::mc {Fill Color}] -menu $m.fillcolor

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
    ColorMenu $m.fillcolor pillustrate color,fill {}
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
	illustrate,pointer 1
	illustrate,circle 1
	illustrate,ellipse 1
	illustrate,box 1
	illustrate,polygon 1
	illustrate,line 1
	illustrate,text 1
	illustrate,fill 1
	illustrate,front 1
	illustrate,back 1
	illustrate,all 1
	illustrate,none 1
	illustrate,invert 1
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

    CheckButton $ds9(buttons).illustrate.fill \
	[string tolower [msgcat::mc {Fill}]] \
	illustrate fill {}

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
        $ds9(buttons).illustrate.fill pbuttons(illustrate,fill)
        $ds9(buttons).illustrate.back pbuttons(illustrate,back)
        $ds9(buttons).illustrate.all pbuttons(illustrate,all)
        $ds9(buttons).illustrate.none pbuttons(illustrate,none)
        $ds9(buttons).illustrate.invert pbuttons(illustrate,invert)
        $ds9(buttons).illustrate.delete pbuttons(illustrate,delete)
    "
}

proc PrefsDialogButtonbarIllustrate {f} {
    global buttons
    global pbuttons

    ttk::menubutton $f -text [msgcat::mc {Buttonbar}] -menu $f.menu
    
    set m $f.menu
    ThemeMenu $m
    $m add checkbutton -label "[msgcat::mc {Get Information}]..." \
	-variable pbuttons(illustrate,info) \
	-command {UpdateButtons buttons(illustrate)}
    $m add separator
    $m add cascade -label [msgcat::mc {Mode}] -menu $m.mode
    $m add separator
    $m add checkbutton -label [msgcat::mc {Fill}] \
	-variable pbuttons(illustrate,fill) \
	-command {UpdateButtons buttons(illustrate)}
    $m add separator
    $m add checkbutton -label [msgcat::mc {Move to Front}] \
	-variable pbuttons(illustrate,front) \
	-command {UpdateButtons buttons(illustrate)}
    $m add checkbutton -label [msgcat::mc {Move to Back}] \
	-variable pbuttons(illustrate,back) \
	-command {UpdateButtons buttons(illustrate)}
    $m add separator
    $m add checkbutton -label [msgcat::mc {Select All}] \
	-variable pbuttons(illustrate,all) \
	-command {UpdateButtons buttons(illustrate)}
    $m add checkbutton -label [msgcat::mc {Select None}] \
	-variable pbuttons(illustrate,none) \
	-command {UpdateButtons buttons(illustrate)}
    $m add checkbutton -label [msgcat::mc {Invert Selection}] \
	-variable pbuttons(illustrate,invert) \
	-command {UpdateButtons buttons(illustrate)}
    $m add separator
    $m add checkbutton -label [msgcat::mc {Delete}] \
	-variable pbuttons(illustrate,delete) \
	-command {UpdateButtons buttons(illustrate)}

    ThemeMenu $m.mode
    $m.mode add checkbutton -label [msgcat::mc {Pointer}] \
	-variable pbuttons(illustrate,pointer) \
	-command {UpdateButtons buttons(illustrate)}
    $m.mode add checkbutton -label [msgcat::mc {Circle}] \
	-variable pbuttons(illustrate,circle) \
	-command {UpdateButtons buttons(illustrate)}
    $m.mode add checkbutton -label [msgcat::mc {Ellipse}] \
	-variable pbuttons(illustrate,ellipse) \
	-command {UpdateButtons buttons(illustrate)}
    $m.mode add checkbutton -label [msgcat::mc {Box}] \
	-variable pbuttons(illustrate,box) \
	-command {UpdateButtons buttons(illustrate)}
    $m.mode add checkbutton -label [msgcat::mc {Polygon}] \
	-variable pbuttons(illustrate,polygon) \
	-command {UpdateButtons buttons(illustrate)}
    $m.mode add separator
    $m.mode add checkbutton -label [msgcat::mc {Line}] \
	-variable pbuttons(illustrate,line) \
	-command {UpdateButtons buttons(illustrate)}
    $m.mode add checkbutton -label [msgcat::mc {Text}] \
	-variable pbuttons(illustrate,text) \
	-command {UpdateButtons buttons(illustrate)}
}


