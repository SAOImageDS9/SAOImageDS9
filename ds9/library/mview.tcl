#  Copyright (C) 1999-2021
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

# Menus

proc ViewMainMenu {} {
    global ds9

    ThemeMenu $ds9(mb).view
    $ds9(mb).view add radiobutton -label [msgcat::mc {Horizontal Layout}] \
	-variable view(layout) -value horizontal -command LayoutView
    $ds9(mb).view add radiobutton -label [msgcat::mc {Vertical Layout}] \
	-variable view(layout) -value vertical -command LayoutView
    $ds9(mb).view add separator
    $ds9(mb).view add checkbutton -label [msgcat::mc {Multiple Colorbars}] \
	-variable view(multi) -command LayoutFrames
    $ds9(mb).view add separator
    $ds9(mb).view add checkbutton -label [msgcat::mc {Information Panel}] \
	-variable view(info) -command LayoutView
    $ds9(mb).view add checkbutton -label [msgcat::mc {Panner}] \
	-variable view(panner) -command LayoutView
    $ds9(mb).view add checkbutton -label [msgcat::mc {Magnifier}] \
	-variable view(magnifier) -command LayoutView
    $ds9(mb).view add checkbutton -label [msgcat::mc {Buttons}] \
	-variable view(buttons) -command LayoutView
    $ds9(mb).view add checkbutton -label [msgcat::mc {Colorbar}] \
	-variable view(colorbar) -command LayoutFrames
    $ds9(mb).view add checkbutton -label [msgcat::mc {Horizontal Graph}] \
	-variable view(graph,horz) -command LayoutFrames
    $ds9(mb).view add checkbutton -label [msgcat::mc {Vertical Graph}] \
	-variable view(graph,vert) -command LayoutFrames
    $ds9(mb).view add separator
    $ds9(mb).view add checkbutton -label [msgcat::mc {Filename}] \
	-variable view(info,filename) -command LayoutInfoPanel
    $ds9(mb).view add checkbutton -label [msgcat::mc {Object}] \
	-variable view(info,object) -command LayoutInfoPanel
    $ds9(mb).view add checkbutton -label [msgcat::mc {Keyword}] \
	-variable view(info,keyword) -command LayoutInfoPanel
    $ds9(mb).view add checkbutton -label [msgcat::mc {Min Max}] \
	-variable view(info,minmax) -command LayoutInfoPanel
    $ds9(mb).view add checkbutton -label [msgcat::mc {Low High}] \
	-variable view(info,lowhigh) -command LayoutInfoPanel
    $ds9(mb).view add checkbutton -label [msgcat::mc {Units}] \
	-variable view(info,bunit) -command LayoutInfoPanel
    $ds9(mb).view add checkbutton -label [msgcat::mc {WCS}] \
	-variable view(info,wcs) -command LayoutInfoPanel
    $ds9(mb).view add cascade -label [msgcat::mc {Multiple WCS}] \
	-menu $ds9(mb).view.mwcs
    $ds9(mb).view add checkbutton -label [msgcat::mc {Image}] \
	-variable view(info,image) -command LayoutInfoPanel
    $ds9(mb).view add checkbutton -label [msgcat::mc {Physical}] \
	-variable view(info,physical) -command LayoutInfoPanel
    $ds9(mb).view add checkbutton -label [msgcat::mc {Amplifier}] \
	-variable view(info,amplifier) -command LayoutInfoPanel
    $ds9(mb).view add checkbutton -label [msgcat::mc {Detector}] \
	-variable view(info,detector) -command LayoutInfoPanel
    $ds9(mb).view add checkbutton -label [msgcat::mc {Frame Information}] \
	-variable view(info,frame) -command LayoutInfoPanel

    # View Info Panel WCS
    ThemeMenu $ds9(mb).view.mwcs
    foreach l {a b c d e f g h i j k l m n o p q r s t u v w x y z} {
	$ds9(mb).view.mwcs add checkbutton \
	    -label "[msgcat::mc {WCS}] $l" \
	    -variable "view(info,wcs$l)" \
	    -command LayoutInfoPanel
    }
}

proc PrefsDialogViewMenu {w} {
    set f [ttk::labelframe $w.mview -text [msgcat::mc {View}]]

    ttk::menubutton $f.menu -text [msgcat::mc {Menu}] -menu $f.menu.menu
    PrefsDialogButtonbarView $f.buttonbar

    grid $f.menu $f.buttonbar -padx 2 -pady 2

    set m $f.menu.menu
    ThemeMenu $m
    $m add radiobutton -label [msgcat::mc {Horizontal Layout}] \
	-variable pview(layout) -value horizontal
    $m add radiobutton -label [msgcat::mc {Vertical Layout}] \
	-variable pview(layout) -value vertical
    $m add separator
    $m add checkbutton -label [msgcat::mc {Multiple Colorbars}] \
	-variable pview(multi)
    $m add separator
    $m add checkbutton -label [msgcat::mc {Information Panel}] \
	-variable pview(info)
    $m add checkbutton -label [msgcat::mc {Panner}] \
	-variable pview(panner)
    $m add checkbutton -label [msgcat::mc {Magnifier}] \
	-variable pview(magnifier)
    $m add checkbutton -label [msgcat::mc {Buttons}] \
	-variable pview(buttons)
    $m add checkbutton -label [msgcat::mc {Colorbar}] \
	-variable pview(colorbar)
    $m add checkbutton -label [msgcat::mc {Horizontal Graph}] \
	-variable pview(graph,horz)
    $m add checkbutton -label [msgcat::mc {Vertical Graph}] \
	-variable pview(graph,vert)
    $m add separator
    $m add checkbutton -label [msgcat::mc {Filename}] \
	-variable pview(info,filename)
    $m add checkbutton -label [msgcat::mc {Object}] \
	-variable pview(info,object)
    $m add checkbutton -label [msgcat::mc {Keyword}] \
	-variable pview(info,keyword)
    $m add checkbutton -label [msgcat::mc {Min Max}] \
	-variable pview(info,minmax)
    $m add checkbutton -label [msgcat::mc {Low High}] \
	-variable pview(info,lowhigh)
    $m add checkbutton -label [msgcat::mc {Units}] \
	-variable pview(info,bunit)
    $m add checkbutton -label [msgcat::mc {WCS}] \
	-variable pview(info,wcs)
    $m add cascade -label [msgcat::mc {Multiple WCS}] -menu $m.wcs
    $m add checkbutton -label [msgcat::mc {Image}] \
	-variable pview(info,image)
    $m add checkbutton -label [msgcat::mc {Physical}] \
	-variable pview(info,physical)
    $m add checkbutton -label [msgcat::mc {Amplifier}] \
	-variable pview(info,amplifier)
    $m add checkbutton -label [msgcat::mc {Detector}] \
	-variable pview(info,detector)
    $m add checkbutton -label  [msgcat::mc {Frame Information}]\
	-variable pview(info,frame)

    ThemeMenu $m.wcs
    foreach l {a b c d e f g h i j k l m n o p q r s t u v w x y z} {
	$m.wcs add checkbutton -label "[msgcat::mc {WCS}] $l" \
	    -variable "pview(info,wcs$l)"
    }

    pack $f -side top -fill both -expand true
}

# Buttons

proc ButtonsViewDef {} {
    global pbuttons

    array set pbuttons {
	view,horizontal 0
	view,vertical 0
	view,multi 0
	view,info 1
	view,panner 1
	view,magnifier 1
	view,buttons 1
	view,colorbar 1
	view,graphhorz 1
	view,graphvert 1
	view,filename 0
	view,object 0
	view,minmax 0
	view,lowhigh 0
	view,bunit 0
	view,wcs 0
	view,image 0
	view,physical 0
	view,amplifier 0
	view,detector 0
	view,frame 0
    }
}

proc CreateButtonsView {} {
    global buttons
    global ds9
    global view

    ttk::frame $ds9(buttons).view

    RadioButton $ds9(buttons).view.horizontal \
	[string tolower [msgcat::mc {Layout Horz}]] \
	view(layout) horizontal LayoutView
    RadioButton $ds9(buttons).view.vertical \
	[string tolower [msgcat::mc {Layout Vert}]] \
	view(layout) vertical LayoutView

    CheckButton $ds9(buttons).view.multi \
	[string tolower [msgcat::mc {Multi Colorbars}]] \
	view(multi) LayoutFrames

    CheckButton $ds9(buttons).view.info \
	[string tolower [msgcat::mc {Information}]] \
	view(info) LayoutView
    CheckButton $ds9(buttons).view.panner \
	[string tolower [msgcat::mc {Panner}]] \
	view(panner) LayoutView
    CheckButton $ds9(buttons).view.magnifier \
	[string tolower [msgcat::mc {Magnifier}]] \
	view(magnifier) LayoutView
    CheckButton $ds9(buttons).view.buttons \
	[string tolower [msgcat::mc {Buttons}]] \
	view(buttons) LayoutView
    CheckButton $ds9(buttons).view.colorbar \
	[string tolower [msgcat::mc {Colorbar}]] \
	view(colorbar) LayoutFrames
    CheckButton $ds9(buttons).view.graphhorz \
	[string tolower [msgcat::mc {Graph Horz}]] \
	view(graph,horz) LayoutFrames
    CheckButton $ds9(buttons).view.graphvert \
	[string tolower [msgcat::mc {Graph Vert}]] \
	view(graph,vert) LayoutFrames
    CheckButton $ds9(buttons).view.filename \
	[string tolower [msgcat::mc {Filename}]] \
	view(info,filename) LayoutInfoPanel
    CheckButton $ds9(buttons).view.object \
	[string tolower [msgcat::mc {Object}]] \
	view(info,object) LayoutInfoPanel
    CheckButton $ds9(buttons).view.keyword \
	[string tolower [msgcat::mc {Keyword}]] \
	view(info,keyword) LayoutInfoPanel
    CheckButton $ds9(buttons).view.minmax \
	[string tolower [msgcat::mc {Min Max}]] \
	view(info,minmax) LayoutInfoPanel
    CheckButton $ds9(buttons).view.lowhigh \
	[string tolower [msgcat::mc {Low High}]] \
	view(info,lowhigh) LayoutInfoPanel
    CheckButton $ds9(buttons).view.bunit \
	[string tolower [msgcat::mc {Units}]] \
	view(info,bunit) LayoutInfoPanel
    CheckButton $ds9(buttons).view.wcs \
	[string tolower [msgcat::mc {WCS}]] \
	view(info,wcs) LayoutInfoPanel
    CheckButton $ds9(buttons).view.image \
	[string tolower [msgcat::mc {Image}]] \
	view(info,image) LayoutInfoPanel
    CheckButton $ds9(buttons).view.physical \
	[string tolower [msgcat::mc {Physical}]] \
	view(info,physical) LayoutInfoPanel
    CheckButton $ds9(buttons).view.amplifier \
	[string tolower [msgcat::mc {Amplifier}]] \
	view(info,amplifier) LayoutInfoPanel
    CheckButton $ds9(buttons).view.detector \
	[string tolower [msgcat::mc {Detector}]] \
	view(info,detector) LayoutInfoPanel
    CheckButton $ds9(buttons).view.frame \
	[string tolower [msgcat::mc {Frame}]] \
	view(info,frame) LayoutInfoPanel

    set buttons(view) "
        $ds9(buttons).view.horizontal pbuttons(view,horizontal)
        $ds9(buttons).view.vertical pbuttons(view,vertical)
        $ds9(buttons).view.multi pbuttons(view,multi)
        $ds9(buttons).view.info pbuttons(view,info)
        $ds9(buttons).view.panner pbuttons(view,panner)
        $ds9(buttons).view.magnifier pbuttons(view,magnifier)
        $ds9(buttons).view.buttons pbuttons(view,buttons)
        $ds9(buttons).view.colorbar pbuttons(view,colorbar)
        $ds9(buttons).view.graphhorz pbuttons(view,graphhorz)
        $ds9(buttons).view.graphvert pbuttons(view,graphvert)
        $ds9(buttons).view.filename pbuttons(view,filename)
        $ds9(buttons).view.object pbuttons(view,object)
        $ds9(buttons).view.minmax pbuttons(view,minmax)
        $ds9(buttons).view.lowhigh pbuttons(view,lowhigh)
        $ds9(buttons).view.bunit pbuttons(view,bunit)
        $ds9(buttons).view.wcs pbuttons(view,wcs)
        $ds9(buttons).view.image pbuttons(view,image)
        $ds9(buttons).view.physical pbuttons(view,physical)
        $ds9(buttons).view.amplifier pbuttons(view,amplifier)
        $ds9(buttons).view.detector pbuttons(view,detector)
        $ds9(buttons).view.frame pbuttons(view,frame)
    "
}

proc PrefsDialogButtonbarView {f} {
    global buttons
    global pbuttons

    ttk::menubutton $f -text [msgcat::mc {Buttonbar}] -menu $f.menu
    
    set m $f.menu
    ThemeMenu $m
    $m add checkbutton -label [msgcat::mc {Horizontal Layout}] \
	-variable pbuttons(view,horizontal) \
	-command {UpdateButtons buttons(view)}
    $m add checkbutton -label [msgcat::mc {Vertical Layout}] \
	-variable pbuttons(view,vertical) \
	-command {UpdateButtons buttons(view)}
    $m add separator
    $m add checkbutton -label [msgcat::mc {Multiple Colorbars}] \
	-variable pbuttons(view,multi) \
	-command {UpdateButtons buttons(view)}
    $m add separator
    $m add checkbutton -label [msgcat::mc {Information Panel}] \
	-variable pbuttons(view,info) -command {UpdateButtons buttons(view)}
    $m add checkbutton -label [msgcat::mc {Panner}] \
	-variable pbuttons(view,panner) -command {UpdateButtons buttons(view)}
    $m add checkbutton -label [msgcat::mc {Magnifier}] \
	-variable pbuttons(view,magnifier) -command {UpdateButtons buttons(view)}
    $m add checkbutton -label [msgcat::mc {Buttons}] \
	-variable pbuttons(view,buttons) -command {UpdateButtons buttons(view)}
    $m add checkbutton -label [msgcat::mc {Colorbar}] \
	-variable pbuttons(view,colorbar) -command {UpdateButtons buttons(view)}
    $m add checkbutton -label [msgcat::mc {Horizontal Graph}] \
	-variable pbuttons(view,graphhorz) \
	-command {UpdateButtons buttons(view)}
    $m add checkbutton -label [msgcat::mc {Vertical Graph}] \
	-variable pbuttons(view,graphvert) \
	-command {UpdateButtons buttons(view)}
    $m add separator
    $m add checkbutton -label [msgcat::mc {Filename}] \
	-variable pbuttons(view,filename) -command {UpdateButtons buttons(view)}
    $m add checkbutton -label [msgcat::mc {Object}] \
	-variable pbuttons(view,object) -command {UpdateButtons buttons(view)}
    $m add checkbutton -label [msgcat::mc {Min Max}] \
	-variable pbuttons(view,minmax) -command {UpdateButtons buttons(view)}
    $m add checkbutton -label [msgcat::mc {Low High}] \
	-variable pbuttons(view,lowhigh) -command {UpdateButtons buttons(view)}
    $m add checkbutton -label [msgcat::mc {Unists}] \
	-variable pbuttons(view,bunit) -command {UpdateButtons buttons(view)}
    $m add checkbutton -label [msgcat::mc {WCS}] \
	-variable pbuttons(view,wcs) -command {UpdateButtons buttons(view)}
    $m add checkbutton -label [msgcat::mc {Image}] \
	-variable pbuttons(view,image) -command {UpdateButtons buttons(view)}
    $m add checkbutton -label [msgcat::mc {Physical}] \
	-variable pbuttons(view,physical) -command {UpdateButtons buttons(view)}
    $m add checkbutton -label [msgcat::mc {Amplifier}] \
	-variable pbuttons(view,amplifier) -command {UpdateButtons buttons(view)}
    $m add checkbutton -label [msgcat::mc {Detector}] \
	-variable pbuttons(view,detector) -command {UpdateButtons buttons(view)}
    $m add checkbutton -label [msgcat::mc {Frame Information}] \
	-variable pbuttons(view,frame) -command {UpdateButtons buttons(view)}
}
