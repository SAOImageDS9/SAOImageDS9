#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

# Menus

proc ZoomMainMenu {} {
    global ds9

    ThemeMenu $ds9(mb).zoom
    $ds9(mb).zoom add command -label [msgcat::mc {Center Image}] \
	-command CenterCurrentFrame
    $ds9(mb).zoom add checkbutton -label [msgcat::mc {Align}] \
	-variable current(align) -command AlignWCSFrame
    $ds9(mb).zoom add separator
    $ds9(mb).zoom add command -label [msgcat::mc {Zoom In}] \
	-command {Zoom 2 2} -accelerator "${ds9(ctrl)}+"
    $ds9(mb).zoom add command -label [msgcat::mc {Zoom Out}] \
	-command {Zoom .5 .5} -accelerator "${ds9(ctrl)}-"
    $ds9(mb).zoom add command -label [msgcat::mc {Zoom Fit}] \
	-command ZoomToFit
    $ds9(mb).zoom add separator
    $ds9(mb).zoom add radiobutton -label "[msgcat::mc {Zoom}] 1/32" \
	-variable current(zoom) -value {0.03125 0.03125} -command ChangeZoom
    $ds9(mb).zoom add radiobutton -label "[msgcat::mc {Zoom}] 1/16" \
	-variable current(zoom) -value {0.0625 0.0625}  -command ChangeZoom
    $ds9(mb).zoom add radiobutton -label "[msgcat::mc {Zoom}] 1/8" \
	-variable current(zoom) -value {0.125 0.125}  -command ChangeZoom
    $ds9(mb).zoom add radiobutton -label "[msgcat::mc {Zoom}] 1/4" \
	-variable current(zoom) -value {0.25 0.25} -command ChangeZoom
    $ds9(mb).zoom add radiobutton -label "[msgcat::mc {Zoom}] 1/2" \
	-variable current(zoom) -value {0.5 0.5} -command ChangeZoom
    $ds9(mb).zoom add radiobutton -label "[msgcat::mc {Zoom}] 1" \
	-variable current(zoom) -value {1 1} -command ChangeZoom
    $ds9(mb).zoom add radiobutton -label "[msgcat::mc {Zoom}] 2" \
	-variable current(zoom) -value {2 2} -command ChangeZoom
    $ds9(mb).zoom add radiobutton -label "[msgcat::mc {Zoom}] 4" \
	-variable current(zoom) -value {4 4} -command ChangeZoom
    $ds9(mb).zoom add radiobutton -label "[msgcat::mc {Zoom}] 8" \
	-variable current(zoom) -value {8 8} -command ChangeZoom
    $ds9(mb).zoom add radiobutton -label "[msgcat::mc {Zoom}] 16" \
	-variable current(zoom) -value {16 16} -command ChangeZoom
    $ds9(mb).zoom add radiobutton -label "[msgcat::mc {Zoom}] 32" \
	-variable current(zoom) -value {32 32} -command ChangeZoom
    $ds9(mb).zoom add separator
    $ds9(mb).zoom add radiobutton -label [msgcat::mc {None}] \
	-variable current(orient) -value none -command ChangeOrient
    $ds9(mb).zoom add radiobutton -label "[msgcat::mc {Invert}] X" \
	-variable current(orient) -value x -command ChangeOrient
    $ds9(mb).zoom add radiobutton -label "[msgcat::mc {Invert}] Y" \
	-variable current(orient) -value y -command ChangeOrient
    $ds9(mb).zoom add radiobutton -label "[msgcat::mc {Invert}] XY" \
	-variable current(orient) -value xy -command ChangeOrient
    $ds9(mb).zoom add separator
    $ds9(mb).zoom add radiobutton -label "0 [msgcat::mc {Degrees}]" \
	-variable current(rotate) -value 0 -command ChangeRotate
    $ds9(mb).zoom add radiobutton -label "90 [msgcat::mc {Degrees}]" \
	-variable current(rotate) -value 90 -command ChangeRotate
    $ds9(mb).zoom add radiobutton -label "180 [msgcat::mc {Degrees}]" \
	-variable current(rotate) -value 180 -command ChangeRotate
    $ds9(mb).zoom add radiobutton -label "270 [msgcat::mc {Degrees}]" \
	-variable current(rotate) -value 270 -command ChangeRotate
    $ds9(mb).zoom add separator
    $ds9(mb).zoom add command -label "[msgcat::mc {Crop Parameters}]..." \
	-command CropDialog
    $ds9(mb).zoom add separator
    $ds9(mb).zoom add command \
	-label "[msgcat::mc {Pan Zoom Rotate Parameters}]..." \
	-command PanZoomDialog

    bind $ds9(top) <<ZoomIn>> [list Zoom 2 2]
    bind $ds9(top) <<ZoomOut>> [list Zoom .5 .5]
}

proc PrefsDialogZoomMenu {w} {
    set f [ttk::labelframe $w.mzoom -text [msgcat::mc {Zoom}]]

    ttk::menubutton $f.menu -text [msgcat::mc {Menu}] -menu $f.menu.menu
    PrefsDialogButtonbarZoom $f.buttonbar

    grid $f.menu $f.buttonbar -padx 2 -pady 2
    
    set m $f.menu.menu
    ThemeMenu $m
    $m add checkbutton -label [msgcat::mc {Align}] \
	-variable pcurrent(align)
    $m add separator
    $m add radiobutton -label "[msgcat::mc {Zoom}] 1/32" \
	-variable pcurrent(zoom) -value {0.03125 0.03125}
    $m add radiobutton -label "[msgcat::mc {Zoom}] 1/16" \
	-variable pcurrent(zoom) -value {0.0625 0.0625}
    $m add radiobutton -label "[msgcat::mc {Zoom}] 1/8" \
	-variable pcurrent(zoom) -value {0.125 0.125}
    $m add radiobutton -label "[msgcat::mc {Zoom}] 1/4" \
	-variable pcurrent(zoom) -value {0.25 0.25}
    $m add radiobutton -label "[msgcat::mc {Zoom}] 1/2" \
	-variable pcurrent(zoom) -value {0.5 0.5}
    $m add radiobutton -label "[msgcat::mc {Zoom}] 1" \
	-variable pcurrent(zoom) -value {1 1}
    $m add radiobutton -label "[msgcat::mc {Zoom}] 2" \
	-variable pcurrent(zoom) -value {2 2}
    $m add radiobutton -label "[msgcat::mc {Zoom}] 4" \
	-variable pcurrent(zoom) -value {4 4}
    $m add radiobutton -label "[msgcat::mc {Zoom}] 8" \
	-variable pcurrent(zoom) -value {8 8}
    $m add radiobutton -label "[msgcat::mc {Zoom}] 16" \
	-variable pcurrent(zoom) -value {16 16}
    $m add radiobutton -label "[msgcat::mc {Zoom}] 32" \
 	-variable pcurrent(zoom) -value {32 32}
    $m add separator
    $m add radiobutton -label [msgcat::mc {None}] \
	-variable pcurrent(orient) -value none
    $m add radiobutton -label "[msgcat::mc {Invert}] X" \
	-variable pcurrent(orient) -value x
    $m add radiobutton -label "[msgcat::mc {Invert}] Y" \
	-variable pcurrent(orient) -value y
    $m add radiobutton -label "[msgcat::mc {Invert}] XY" \
	-variable pcurrent(orient) -value xy
    $m add separator
    $m add radiobutton -label "0 [msgcat::mc {Degrees}]" \
	-variable pcurrent(rotate) -value 0 
    $m add radiobutton -label "90 [msgcat::mc {Degrees}]" \
	-variable pcurrent(rotate) -value 90
    $m add radiobutton -label "180 [msgcat::mc {Degrees}]" \
	-variable pcurrent(rotate) -value 180
    $m add radiobutton -label "270 [msgcat::mc {Degrees}]" \
	-variable pcurrent(rotate) -value 270

    pack $f -side top -fill both -expand true
}

proc PrefsDialogZoom {} {
    global dprefs

    set w $dprefs(tab)

    $dprefs(listbox) insert {} end -id [ttk::frame $w.zoom] \
	-text [msgcat::mc {Pan Zoom}]

    # PanZoom
    set f [ttk::labelframe $w.zoom.panzoom -text [msgcat::mc {Pan Zoom}]]

    ttk::radiobutton $f.click -text [msgcat::mc {Click to Center}] \
	-variable ppanzoom(mode) -value click
    ttk::radiobutton $f.drag -text [msgcat::mc {Drag to Center}] \
	-variable ppanzoom(mode) -value drag
    ttk::radiobutton $f.panzoom -text [msgcat::mc {Pan then Zoom}] \
	-variable ppanzoom(mode) -value panzoom

    grid $f.click $f.drag $f.panzoom -padx 2 -pady 2 -sticky w

    # Mouse
    set f [ttk::labelframe $w.zoom.mouse -text [msgcat::mc {Mouse Wheel Zoom}]]

    ttk::checkbutton $f.click -text [msgcat::mc {Enable}] \
	-variable ppanzoom(wheel)
    ttk::label $f.title2 -text [msgcat::mc {Factor}]
    ttk::entry $f.factor -textvariable ppanzoom(wheel,factor) -width 10

    grid $f.click $f.title2 $f.factor -padx 2 -pady 2 -sticky w

    pack $w.zoom.panzoom $w.zoom.mouse -side top -fill both -expand true
}

# Buttons

proc ButtonsZoomDef {} {
    global pbuttons

    array set pbuttons {
	zoom,center 0 
	zoom,align 0

	zoom,in 1
	zoom,out 1
	zoom,fit 1
	zoom,i32 0
	zoom,i16 0
	zoom,i8 0
	zoom,i4 1
	zoom,i2 1
	zoom,1 1
	zoom,2 1
	zoom,4 1
	zoom,8 0
	zoom,16 0
	zoom,32 0

	zoom,none 0
	zoom,x 0
	zoom,y 0
	zoom,xy 0

	zoom,0 0
	zoom,90 0
	zoom,180 0
	zoom,270 0

	zoom,crop 0
	zoom,params 0
    }
}

proc CreateButtonsZoom {} {
    global buttons
    global ds9

    ttk::frame $ds9(buttons).zoom

    ButtonButton $ds9(buttons).zoom.center \
	[string tolower [msgcat::mc {Center}]] CenterCurrentFrame
    CheckButton $ds9(buttons).zoom.align \
	[msgcat::mc {Align}] current(align) AlignWCSFrame

    ButtonButton $ds9(buttons).zoom.in \
	[string tolower [msgcat::mc {Zoom In}]] {Zoom 2 2}
    ButtonButton $ds9(buttons).zoom.out \
	[string tolower [msgcat::mc {Zoom Out}]] {Zoom .5 .5}
    ButtonButton $ds9(buttons).zoom.fit \
	[string tolower [msgcat::mc {Zoom Fit}]] ZoomToFit
    RadioButton $ds9(buttons).zoom.i32 \
 	"[string tolower [msgcat::mc {Zoom}]] 1/32" \
	current(zoom) {0.03125 0.03125} ChangeZoom
    RadioButton $ds9(buttons).zoom.i16 \
	"[string tolower [msgcat::mc {Zoom}]] 1/16" \
	current(zoom) {0.0625 0.0625} ChangeZoom
    RadioButton $ds9(buttons).zoom.i8 \
	"[string tolower [msgcat::mc {Zoom}]] 1/8" \
	current(zoom) {0.125 0.125} ChangeZoom
    RadioButton $ds9(buttons).zoom.i4 \
	"[string tolower [msgcat::mc {Zoom}]] 1/4" \
	current(zoom) {0.25 0.25} ChangeZoom
    RadioButton $ds9(buttons).zoom.i2 \
	"[string tolower [msgcat::mc {Zoom}]] 1/2" \
	current(zoom) {0.5 0.5} ChangeZoom
    RadioButton $ds9(buttons).zoom.1 \
	"[string tolower [msgcat::mc {Zoom}]] 1" \
	current(zoom) {1 1} ChangeZoom
    RadioButton $ds9(buttons).zoom.2 \
	"[string tolower [msgcat::mc {Zoom}]] 2" \
	current(zoom) {2 2} ChangeZoom
    RadioButton $ds9(buttons).zoom.4 \
	"[string tolower [msgcat::mc {Zoom}]] 4" \
	current(zoom) {4 4} ChangeZoom
    RadioButton $ds9(buttons).zoom.8 \
	"[string tolower [msgcat::mc {Zoom}]] 8" \
	current(zoom) {8 8} ChangeZoom
    RadioButton $ds9(buttons).zoom.16 \
	"[string tolower [msgcat::mc {Zoom}]] 16" \
	current(zoom) {16 16} ChangeZoom
    RadioButton $ds9(buttons).zoom.32 \
 	"[string tolower [msgcat::mc {Zoom}]] 32" \
 	current(zoom) {32 32} ChangeZoom

    RadioButton $ds9(buttons).zoom.none \
	[string tolower [msgcat::mc {None}]] \
	current(orient) none ChangeOrient
    RadioButton $ds9(buttons).zoom.x {x} current(orient) x ChangeOrient
    RadioButton $ds9(buttons).zoom.y {y} current(orient) y ChangeOrient
    RadioButton $ds9(buttons).zoom.xy {xy} current(orient) xy ChangeOrient

    RadioButton $ds9(buttons).zoom.0 {0} current(rotate) 0 ChangeRotate
    RadioButton $ds9(buttons).zoom.90 {90} current(rotate) 90 ChangeRotate
    RadioButton $ds9(buttons).zoom.180 {180} current(rotate) 180 ChangeRotate
    RadioButton $ds9(buttons).zoom.270 {270} current(rotate) 270 ChangeRotate

    ButtonButton $ds9(buttons).zoom.crop \
	[string tolower [msgcat::mc {Crop}]] CropDialog
    ButtonButton $ds9(buttons).zoom.params \
	[string tolower [msgcat::mc {Parameters}]] PanZoomDialog

    set buttons(zoom) "
        $ds9(buttons).zoom.center pbuttons(zoom,center)
	$ds9(buttons).zoom.align pbuttons(zoom,align)

	$ds9(buttons).zoom.in pbuttons(zoom,in)
	$ds9(buttons).zoom.out pbuttons(zoom,out)
	$ds9(buttons).zoom.fit pbuttons(zoom,fit)
	$ds9(buttons).zoom.i32 pbuttons(zoom,i32)
	$ds9(buttons).zoom.i16 pbuttons(zoom,i16)
	$ds9(buttons).zoom.i8 pbuttons(zoom,i8)
	$ds9(buttons).zoom.i4 pbuttons(zoom,i4)
	$ds9(buttons).zoom.i2 pbuttons(zoom,i2)
	$ds9(buttons).zoom.1 pbuttons(zoom,1)
	$ds9(buttons).zoom.2 pbuttons(zoom,2)
	$ds9(buttons).zoom.4 pbuttons(zoom,4)
	$ds9(buttons).zoom.8 pbuttons(zoom,8)
	$ds9(buttons).zoom.16 pbuttons(zoom,16)
	$ds9(buttons).zoom.32 pbuttons(zoom,32)

	$ds9(buttons).zoom.none pbuttons(zoom,none)
	$ds9(buttons).zoom.x pbuttons(zoom,x)
	$ds9(buttons).zoom.y pbuttons(zoom,y)
	$ds9(buttons).zoom.xy pbuttons(zoom,xy)

	$ds9(buttons).zoom.0 pbuttons(zoom,0)
	$ds9(buttons).zoom.90 pbuttons(zoom,90)
	$ds9(buttons).zoom.180 pbuttons(zoom,180)
	$ds9(buttons).zoom.270 pbuttons(zoom,270)

	$ds9(buttons).zoom.crop pbuttons(zoom,crop)
	$ds9(buttons).zoom.params pbuttons(zoom,params)
    "
}

proc PrefsDialogButtonbarZoom {f} {
    global buttons
    global pbuttons

    ttk::menubutton $f -text [msgcat::mc {Buttonbar}] -menu $f.menu
    
    set m $f.menu
    ThemeMenu $m
    $m add checkbutton -label [msgcat::mc {Center Image}] \
	-variable pbuttons(zoom,center) -command {UpdateButtons buttons(zoom)}
    $m add checkbutton -label [msgcat::mc {Align}] \
	-variable pbuttons(zoom,align) -command {UpdateButtons buttons(zoom)}
    $m add separator
    $m add checkbutton -label [msgcat::mc {Zoom In}] \
	-variable pbuttons(zoom,in) -command {UpdateButtons buttons(zoom)}
    $m add checkbutton -label [msgcat::mc {Zoom Out}] \
	-variable pbuttons(zoom,out) -command {UpdateButtons buttons(zoom)}
    $m add checkbutton -label [msgcat::mc {Zoom Fit}] \
	-variable pbuttons(zoom,fit) -command {UpdateButtons buttons(zoom)}
    $m add separator
    $m add checkbutton -label "[msgcat::mc {Zoom}] 1/32" \
 	-variable pbuttons(zoom,i32) -command {UpdateButtons buttons(zoom)}
    $m add checkbutton -label "[msgcat::mc {Zoom}] 1/16" \
	-variable pbuttons(zoom,i16) -command {UpdateButtons buttons(zoom)}
    $m add checkbutton -label "[msgcat::mc {Zoom}] 1/8" \
	-variable pbuttons(zoom,i8) -command {UpdateButtons buttons(zoom)}
    $m add checkbutton -label "[msgcat::mc {Zoom}] 1/4" \
	-variable pbuttons(zoom,i4) -command {UpdateButtons buttons(zoom)}
    $m add checkbutton -label "[msgcat::mc {Zoom}] 1/2" \
	-variable pbuttons(zoom,i2) -command {UpdateButtons buttons(zoom)}
    $m add checkbutton -label "[msgcat::mc {Zoom}] 1" \
	-variable pbuttons(zoom,1) -command {UpdateButtons buttons(zoom)}
    $m add checkbutton -label "[msgcat::mc {Zoom}] 2" \
	-variable pbuttons(zoom,2) -command {UpdateButtons buttons(zoom)}
    $m add checkbutton -label "[msgcat::mc {Zoom}] 4" \
	-variable pbuttons(zoom,4) -command {UpdateButtons buttons(zoom)}
    $m add checkbutton -label "[msgcat::mc {Zoom}] 8" \
	-variable pbuttons(zoom,8) -command {UpdateButtons buttons(zoom)}
    $m add checkbutton -label "[msgcat::mc {Zoom}] 16" \
	-variable pbuttons(zoom,16) -command {UpdateButtons buttons(zoom)}
    $m add checkbutton -label "[msgcat::mc {Zoom}] 32" \
 	-variable pbuttons(zoom,32) -command {UpdateButtons buttons(zoom)}
    $m add separator
    $m add checkbutton -label [msgcat::mc {None}] \
	-variable pbuttons(zoom,none) -command {UpdateButtons buttons(zoom)}
    $m add checkbutton -label "[msgcat::mc {Invert}] X" \
	-variable pbuttons(zoom,x) -command {UpdateButtons buttons(zoom)}
    $m add checkbutton -label "[msgcat::mc {Invert}] Y" \
	-variable pbuttons(zoom,y) -command {UpdateButtons buttons(zoom)}
    $m add checkbutton -label "[msgcat::mc {Invert}] XY" \
	-variable pbuttons(zoom,xy) -command {UpdateButtons buttons(zoom)}
    $m add separator
    $m add checkbutton -label "0 [msgcat::mc {Degrees}]" \
	-variable pbuttons(zoom,0) -command {UpdateButtons buttons(zoom)}
    $m add checkbutton -label "90 [msgcat::mc {Degrees}]" \
	-variable pbuttons(zoom,90) -command {UpdateButtons buttons(zoom)}
    $m add checkbutton -label "180 [msgcat::mc {Degrees}]" \
	-variable pbuttons(zoom,180) -command {UpdateButtons buttons(zoom)}
    $m add checkbutton -label "270 [msgcat::mc {Degrees}]" \
	-variable pbuttons(zoom,270) -command {UpdateButtons buttons(zoom)}
    $m add separator
    $m add checkbutton -label "[msgcat::mc {Crop Parameters}]..." \
	-variable pbuttons(zoom,crop) -command {UpdateButtons buttons(zoom)}
    $m add separator
    $m add checkbutton -label "[msgcat::mc {Pan Zoom Rotate Parameters}]..." \
	-variable pbuttons(zoom,params) -command {UpdateButtons buttons(zoom)}
}

# Support

proc UpdateZoomMenu {} {
    global ds9
    global current
    global panzoom
    
    global debug
    if {$debug(tcl,update)} {
	puts stderr "UpdateZoomMenu"
    }

    if {$ds9(active,num) > 0} {
	$ds9(mb) entryconfig [msgcat::mc {Zoom}] -state normal
	ConfigureButtons zoom normal
    } else {
	$ds9(mb) entryconfig [msgcat::mc {Zoom}] -state disabled
	ConfigureButtons zoom disabled
    }

    if {$current(frame) == {}} {
	$ds9(mb).zoom entryconfig [msgcat::mc {Align}] -state disabled
    } else {
	$ds9(mb).zoom entryconfig [msgcat::mc {Align}]  -state normal

	set panzoom(preserve) [$current(frame) get pan preserve]
	set current(zoom) [$current(frame) get zoom]
	set current(rotate) [$current(frame) get rotate]
	set current(orient) [$current(frame) get orient]
	set current(align) [$current(frame) get wcs align]
    }
}

