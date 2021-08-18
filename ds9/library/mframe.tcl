#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

# Menus

proc FrameMainMenu {} {
    global ds9
    global current

    ThemeMenu $ds9(mb).frame
    $ds9(mb).frame add command -label [msgcat::mc {New Frame}] \
	-command CreateFrame
    $ds9(mb).frame add command -label [msgcat::mc {New Frame RGB}] \
	-command CreateRGBFrame
    $ds9(mb).frame add command -label [msgcat::mc {New Frame 3D}] \
	-command Create3DFrame
    $ds9(mb).frame add separator
    $ds9(mb).frame add command -label [msgcat::mc {Delete Frame}] \
	-command DeleteCurrentFrame
    $ds9(mb).frame add command -label [msgcat::mc {Delete All Frames}] \
	-command DeleteAllFramesMenu
    $ds9(mb).frame add separator
    $ds9(mb).frame add command -label [msgcat::mc {Clear Frame}] \
	-command ClearCurrentFrame
    $ds9(mb).frame add command -label [msgcat::mc {Reset Frame}] \
	-command ResetCurrentFrame
    $ds9(mb).frame add command -label [msgcat::mc {Refresh Frame}] \
	-command UpdateCurrentFrame
    $ds9(mb).frame add separator
    $ds9(mb).frame add radiobutton -label [msgcat::mc {Single Frame}] \
	-variable current(display) -value single -command DisplayMode
    $ds9(mb).frame add radiobutton -label [msgcat::mc {Tile Frames}] \
	-variable current(display) -value tile -command DisplayMode
    $ds9(mb).frame add radiobutton -label [msgcat::mc {Blink Frames}] \
	-variable current(display) -value blink -command DisplayMode
    $ds9(mb).frame add separator
    $ds9(mb).frame add cascade -label [msgcat::mc {Match}] \
	-menu $ds9(mb).frame.match
    $ds9(mb).frame add cascade -label [msgcat::mc {Lock}] \
	-menu $ds9(mb).frame.lock
    $ds9(mb).frame add separator
    $ds9(mb).frame add cascade -label [msgcat::mc {Goto Frame}] \
	-menu $ds9(mb).frame.goto
    $ds9(mb).frame add cascade -label [msgcat::mc {Show/Hide Frames}] \
	-menu $ds9(mb).frame.active
    $ds9(mb).frame add cascade -label [msgcat::mc {Move Frame}] \
	-menu $ds9(mb).frame.move
    $ds9(mb).frame add separator
    $ds9(mb).frame add command -label [msgcat::mc {First Frame}] \
	-command FirstFrame
    $ds9(mb).frame add command -label [msgcat::mc {Previous Frame}] \
	-command PrevFrame
    $ds9(mb).frame add command -label [msgcat::mc {Next Frame}] \
	-command NextFrame
    $ds9(mb).frame add command -label [msgcat::mc {Last Frame}] \
	-command LastFrame
    $ds9(mb).frame add separator
    $ds9(mb).frame add command -label "[msgcat::mc {Cube}]..." \
	-command CubeDialog
    $ds9(mb).frame add command -label "[msgcat::mc {RGB}]..." \
	-command RGBDialog
    $ds9(mb).frame add command -label "[msgcat::mc {3D}]..." \
	-command 3DDialog
    $ds9(mb).frame add separator
    $ds9(mb).frame add cascade -label [msgcat::mc {Frame Parameters}] \
	-menu $ds9(mb).frame.params

    # match
    ThemeMenu $ds9(mb).frame.match
    $ds9(mb).frame.match add cascade -label [msgcat::mc {Frame}] \
	-menu $ds9(mb).frame.match.frame
    $ds9(mb).frame.match add cascade -label [msgcat::mc {Crosshair}] \
	-menu $ds9(mb).frame.match.crosshair
    $ds9(mb).frame.match add cascade -label [msgcat::mc {Crop}] \
	-menu $ds9(mb).frame.match.crop
    $ds9(mb).frame.match add cascade -label [msgcat::mc {Slice}] \
	-menu $ds9(mb).frame.match.cube
    $ds9(mb).frame.match add command -label [msgcat::mc {Bin}] \
	-command MatchBinCurrent
    $ds9(mb).frame.match add command -label [msgcat::mc {Axes Order}] \
	-command MatchAxesCurrent
    $ds9(mb).frame.match add command -label [msgcat::mc {Scale}] \
	-command MatchScaleCurrent
    $ds9(mb).frame.match add command -label [msgcat::mc {Scale and Limits}] \
	-command MatchScaleLimitsCurrent
    $ds9(mb).frame.match add command -label [msgcat::mc {Colorbar}] \
	-command MatchColorCurrent
    $ds9(mb).frame.match add command -label [msgcat::mc {Block}] \
	-command MatchBlockCurrent
    $ds9(mb).frame.match add command -label [msgcat::mc {Smooth}] \
	-command MatchSmoothCurrent
    $ds9(mb).frame.match add command -label [msgcat::mc {3D View}] \
	-command Match3DCurrent

    ThemeMenu $ds9(mb).frame.match.frame
    $ds9(mb).frame.match.frame add command -label [msgcat::mc {WCS}] \
	-command {MatchFrameCurrent wcs}
    $ds9(mb).frame.match.frame add separator
    $ds9(mb).frame.match.frame add command -label [msgcat::mc {Image}] \
	-command {MatchFrameCurrent image}
    $ds9(mb).frame.match.frame add command -label [msgcat::mc {Physical}] \
	-command {MatchFrameCurrent physical}
    $ds9(mb).frame.match.frame add command -label [msgcat::mc {Amplifier}] \
	-command {MatchFrameCurrent amplifier}
    $ds9(mb).frame.match.frame add command -label [msgcat::mc {Detector}] \
	-command {MatchFrameCurrent detector}

    ThemeMenu $ds9(mb).frame.match.crosshair
    $ds9(mb).frame.match.crosshair add command -label [msgcat::mc {WCS}] \
	-command {MatchCrosshairCurrent wcs}
    $ds9(mb).frame.match.crosshair add separator
    $ds9(mb).frame.match.crosshair add command -label [msgcat::mc {Image}] \
	-command {MatchCrosshairCurrent image}
    $ds9(mb).frame.match.crosshair add command -label [msgcat::mc {Physical}] \
	-command {MatchCrosshairCurrent physical}
    $ds9(mb).frame.match.crosshair add command -label [msgcat::mc {Amplifier}] \
	-command {MatchCrosshairCurrent amplifier}
    $ds9(mb).frame.match.crosshair add command -label [msgcat::mc {Detector}] \
	-command {MatchCrosshairCurrent detector}

    ThemeMenu $ds9(mb).frame.match.crop
    $ds9(mb).frame.match.crop add command -label [msgcat::mc {WCS}] \
	-command {MatchCropCurrent wcs}
    $ds9(mb).frame.match.crop add separator
    $ds9(mb).frame.match.crop add command -label [msgcat::mc {Image}] \
	-command {MatchCropCurrent image}
    $ds9(mb).frame.match.crop add command -label [msgcat::mc {Physical}] \
	-command {MatchCropCurrent physical}
    $ds9(mb).frame.match.crop add command -label [msgcat::mc {Amplifier}] \
	-command {MatchCropCurrent amplifier}
    $ds9(mb).frame.match.crop add command -label [msgcat::mc {Detector}] \
	-command {MatchCropCurrent detector}

    ThemeMenu $ds9(mb).frame.match.cube
    $ds9(mb).frame.match.cube add command -label [msgcat::mc {WCS}] \
	-command {MatchCubeCurrent wcs}
    $ds9(mb).frame.match.cube add separator
    $ds9(mb).frame.match.cube add command -label [msgcat::mc {Image}] \
	-command {MatchCubeCurrent image}

    # lock
    ThemeMenu $ds9(mb).frame.lock
    $ds9(mb).frame.lock add cascade -label [msgcat::mc {Frame}] \
	-menu $ds9(mb).frame.lock.frame
    $ds9(mb).frame.lock add cascade -label [msgcat::mc {Crosshair}] \
	-menu $ds9(mb).frame.lock.crosshair
    $ds9(mb).frame.lock add cascade -label [msgcat::mc {Crop}] \
	-menu $ds9(mb).frame.lock.crop
    $ds9(mb).frame.lock add cascade -label [msgcat::mc {Slice}] \
	-menu $ds9(mb).frame.lock.cube
    $ds9(mb).frame.lock add checkbutton -label [msgcat::mc {Bin}] \
	-variable bin(lock) -command {LockBinCurrent}
    $ds9(mb).frame.lock add checkbutton -label [msgcat::mc {Axes Order}] \
	-variable cube(lock,axes) -command {LockAxesCurrent}
    $ds9(mb).frame.lock add checkbutton -label [msgcat::mc {Scale}] \
	-variable scale(lock) -command {LockScaleCurrent}
    $ds9(mb).frame.lock add checkbutton -label [msgcat::mc {Scale and Limits}] \
	-variable scale(lock,limits) -command {LockScaleLimitsCurrent}
    $ds9(mb).frame.lock add checkbutton -label [msgcat::mc {Colorbar}] \
	-variable colorbar(lock) -command {LockColorCurrent}
    $ds9(mb).frame.lock add checkbutton -label [msgcat::mc {Block}] \
	-variable block(lock) -command {LockBlockCurrent}
    $ds9(mb).frame.lock add checkbutton -label [msgcat::mc {Smooth}] \
	-variable smooth(lock) -command {LockSmoothCurrent}
    $ds9(mb).frame.lock add checkbutton -label [msgcat::mc {3D View}] \
	-variable threed(lock) -command {Lock3DCurrent}

    ThemeMenu $ds9(mb).frame.lock.frame
    $ds9(mb).frame.lock.frame add radiobutton -label [msgcat::mc {None}] \
	-variable panzoom(lock) -value none -command LockFrameCurrent
    $ds9(mb).frame.lock.frame add separator
    $ds9(mb).frame.lock.frame add radiobutton -label [msgcat::mc {WCS}] \
	-variable panzoom(lock) -value wcs -command LockFrameCurrent
    $ds9(mb).frame.lock.frame add separator
    $ds9(mb).frame.lock.frame add radiobutton -label [msgcat::mc {Image}] \
	-variable panzoom(lock) -value image -command LockFrameCurrent
    $ds9(mb).frame.lock.frame add radiobutton -label [msgcat::mc {Physical}] \
	-variable panzoom(lock) -value physical	-command LockFrameCurrent
    $ds9(mb).frame.lock.frame add radiobutton -label [msgcat::mc {Amplifier}] \
	-variable panzoom(lock) -value amplifier -command LockFrameCurrent
    $ds9(mb).frame.lock.frame add radiobutton -label [msgcat::mc {Detector}] \
	-variable panzoom(lock) -value detector -command LockFrameCurrent

    ThemeMenu $ds9(mb).frame.lock.crosshair
    $ds9(mb).frame.lock.crosshair add radiobutton \
	-label [msgcat::mc {None}] -variable crosshair(lock) \
	-value none -command LockCrosshairCurrent
    $ds9(mb).frame.lock.crosshair add separator
    $ds9(mb).frame.lock.crosshair add radiobutton \
	-label [msgcat::mc {WCS}] -variable crosshair(lock) \
	-value wcs -command LockCrosshairCurrent
    $ds9(mb).frame.lock.crosshair add separator
    $ds9(mb).frame.lock.crosshair add radiobutton \
	-label [msgcat::mc {Image}] -variable crosshair(lock) \
	-value image -command LockCrosshairCurrent
    $ds9(mb).frame.lock.crosshair add radiobutton \
	-label [msgcat::mc {Physical}] -variable crosshair(lock) \
	-value physical -command LockCrosshairCurrent
    $ds9(mb).frame.lock.crosshair add radiobutton \
	-label [msgcat::mc {Amplifier}] -variable crosshair(lock) \
	-value amplifier -command LockCrosshairCurrent
    $ds9(mb).frame.lock.crosshair add radiobutton \
	-label [msgcat::mc {Detector}] -variable crosshair(lock) \
	-value detector -command LockCrosshairCurrent

    ThemeMenu $ds9(mb).frame.lock.crop
    $ds9(mb).frame.lock.crop add radiobutton -label [msgcat::mc {None}] \
	-variable crop(lock) -value none -command LockCropCurrent
    $ds9(mb).frame.lock.crop add separator
    $ds9(mb).frame.lock.crop add radiobutton -label [msgcat::mc {WCS}] \
	-variable crop(lock) -value wcs -command LockCropCurrent
    $ds9(mb).frame.lock.crop add separator
    $ds9(mb).frame.lock.crop add radiobutton -label [msgcat::mc {Image}] \
	-variable crop(lock) -value image -command LockCropCurrent
    $ds9(mb).frame.lock.crop add radiobutton -label [msgcat::mc {Physical}] \
	-variable crop(lock) -value physical -command LockCropCurrent
    $ds9(mb).frame.lock.crop add radiobutton -label [msgcat::mc {Amplifier}] \
	-variable crop(lock) -value amplifier -command LockCropCurrent
    $ds9(mb).frame.lock.crop add radiobutton -label [msgcat::mc {Detector}] \
	-variable crop(lock) -value detector -command LockCropCurrent

    ThemeMenu $ds9(mb).frame.lock.cube
    $ds9(mb).frame.lock.cube add radiobutton -label [msgcat::mc {None}] \
	-variable cube(lock) -value none -command LockCubeCurrent
    $ds9(mb).frame.lock.cube add separator
    $ds9(mb).frame.lock.cube add radiobutton -label [msgcat::mc {WCS}] \
	-variable cube(lock) -value wcs -command LockCubeCurrent
    $ds9(mb).frame.lock.cube add separator
    $ds9(mb).frame.lock.cube add radiobutton -label [msgcat::mc {Image}] \
	-variable cube(lock) -value image -command LockCubeCurrent

    # active
    ThemeMenu $ds9(mb).frame.active
    $ds9(mb).frame.active add command -label [msgcat::mc {Show All}] \
	-command ActiveFrameAll
    $ds9(mb).frame.active add command -label [msgcat::mc {Hide All}] \
	-command ActiveFrameNone
    $ds9(mb).frame.active add separator

    # move
    ThemeMenu $ds9(mb).frame.move
    $ds9(mb).frame.move add command -label [msgcat::mc {First}] \
	-command MoveFirstFrame
    $ds9(mb).frame.move add command -label [msgcat::mc {Back}] \
	-command MovePrevFrame
    $ds9(mb).frame.move add command -label [msgcat::mc {Forward}] \
	-command MoveNextFrame
    $ds9(mb).frame.move add command -label [msgcat::mc {Last}] \
	-command MoveLastFrame

    ThemeMenu $ds9(mb).frame.goto

    # params
    ThemeMenu $ds9(mb).frame.params
    $ds9(mb).frame.params add cascade -label [msgcat::mc {Tile}] \
	-menu $ds9(mb).frame.params.tile
    $ds9(mb).frame.params add cascade -label [msgcat::mc {Blink Interval}] \
	-menu $ds9(mb).frame.params.blink
    $ds9(mb).frame.params add command -label [msgcat::mc {Display Size}] \
	-command DisplayDefaultDialog

    ThemeMenu $ds9(mb).frame.params.tile
    $ds9(mb).frame.params.tile add radiobutton -label [msgcat::mc {Grid}] \
	-variable tile(mode) -value grid -command DisplayMode
    $ds9(mb).frame.params.tile add radiobutton -label [msgcat::mc {Columns}] \
	-variable tile(mode) -value column -command DisplayMode
    $ds9(mb).frame.params.tile add radiobutton -label [msgcat::mc {Rows}] \
	-variable tile(mode) -value row -command DisplayMode
    $ds9(mb).frame.params.tile add separator
    $ds9(mb).frame.params.tile add command \
	-label "[msgcat::mc {Tile Parameters}]..." -command TileDialog

    ThemeMenu $ds9(mb).frame.params.blink
    $ds9(mb).frame.params.blink add radiobutton \
	-label "1/16 [msgcat::mc {Seconds}]" \
	-variable blink(interval) -value 6
    $ds9(mb).frame.params.blink add radiobutton \
	-label "1/8 [msgcat::mc {Seconds}]" \
	-variable blink(interval) -value 125
    $ds9(mb).frame.params.blink add radiobutton \
	-label "1/4 [msgcat::mc {Seconds}]" \
	-variable blink(interval) -value 250
    $ds9(mb).frame.params.blink add radiobutton \
	-label "1/2 [msgcat::mc {Seconds}]" \
	-variable blink(interval) -value 500
    $ds9(mb).frame.params.blink add radiobutton \
	-label "1 [msgcat::mc {Seconds}]" \
	-variable blink(interval) -value 1000
    $ds9(mb).frame.params.blink add radiobutton \
	-label "2  [msgcat::mc {Seconds}]" \
	-variable blink(interval) -value 2000
    $ds9(mb).frame.params.blink add radiobutton \
	-label "4 [msgcat::mc {Seconds}]" \
	-variable blink(interval) -value 4000
    $ds9(mb).frame.params.blink add radiobutton \
	-label "8 [msgcat::mc {Seconds}]" \
	-variable blink(interval) -value 8000
    $ds9(mb).frame.params.blink add radiobutton \
	-label "16 [msgcat::mc {Seconds}]" \
	-variable blink(interval) -value 16000
}

proc PrefsDialogFrameMenu {w} {
    set f [ttk::labelframe $w.mframe -text [msgcat::mc {Frame}]]

    ttk::menubutton $f.menu -text [msgcat::mc {Menu}] -menu $f.menu.menu
    PrefsDialogButtonbarFrame $f.buttonbar

    grid $f.menu $f.buttonbar -padx 2 -pady 2

    set m $f.menu.menu
    ThemeMenu $m
    $m add radiobutton -label [msgcat::mc {Single Frame}] \
	-variable pcurrent(display) -value single
    $m add radiobutton -label [msgcat::mc {Tile Frames}] \
	-variable pcurrent(display) -value tile
    $m add radiobutton -label [msgcat::mc {Blink Frames}] \
	-variable pcurrent(display) -value blink
    $m add separator
    $m add cascade -label [msgcat::mc {Frame Parameters}] \
	-menu $m.params

    ThemeMenu $m.params
    $m.params add cascade -label [msgcat::mc {Tile}] \
	-menu $m.params.tile
    $m.params add cascade -label [msgcat::mc {Blink Interval}] \
	-menu $m.params.blink

    ThemeMenu $m.params.tile
    $m.params.tile add radiobutton -label [msgcat::mc {Grid}] \
	-variable ptile(mode) -value grid
    $m.params.tile add radiobutton -label [msgcat::mc {Columns}] \
	-variable ptile(mode) -value column
    $m.params.tile add radiobutton -label [msgcat::mc {Rows}] \
	-variable ptile(mode) -value row

    ThemeMenu $m.params.blink
    $m.params.blink add radiobutton -label ".125 [msgcat::mc {Seconds}]" \
	-variable pblink(interval) -value 125
    $m.params.blink add radiobutton -label ".25 [msgcat::mc {Seconds}]" \
	-variable pblink(interval) -value 250
    $m.params.blink add radiobutton -label ".5 [msgcat::mc {Seconds}]" \
	-variable pblink(interval) -value 500
    $m.params.blink add radiobutton -label "1 [msgcat::mc {Seconds}]" \
	-variable pblink(interval) -value 1000
    $m.params.blink add radiobutton -label "2  [msgcat::mc {Seconds}]" \
	-variable pblink(interval) -value 2000
    $m.params.blink add radiobutton -label "4 [msgcat::mc {Seconds}]" \
	-variable pblink(interval) -value 4000
    $m.params.blink add radiobutton -label "8 [msgcat::mc {Seconds}]" \
	-variable pblink(interval) -value 8000

    pack $f -side top -fill both -expand true
}

# Buttons

proc ButtonsFrameDef {} {
    global pbuttons

    array set pbuttons {
	frame,new 1
	frame,newrgb 1
	frame,new3d 1
	frame,delete 1
	frame,deleteall 0
	frame,clear 1
	frame,reset 0
	frame,refresh 0
	frame,single 1
	frame,tile 1
	frame,blink 1

	frame,match,bin 0
	frame,match,axes 0
	frame,match,scale 0
	frame,match,scalelimits 0
	frame,match,color 0
	frame,match,smooth 0

	frame,match,frame,wcs 0
	frame,match,frame,image 0
	frame,match,frame,physical 0
	frame,match,frame,detector 0
	frame,match,frame,amplifier 0

	frame,match,crosshair,wcs 0
	frame,match,crosshair,image 0
	frame,match,crosshair,physical 0
	frame,match,crosshair,detector 0
	frame,match,crosshair,amplifier 0

	frame,match,crop,wcs 0
	frame,match,crop,image 0
	frame,match,crop,physical 0
	frame,match,crop,detector 0
	frame,match,crop,amplifier 0

	frame,match,cube,wcs 0
	frame,match,cube,image 0

	frame,lock,bin 0
	frame,lock,axes 0
	frame,lock,scale 0
	frame,lock,scalelimits 0
	frame,lock,color 0
	frame,lock,smooth 0

	frame,lock,frame,none 0
	frame,lock,frame,wcs 0
	frame,lock,frame,image 0
	frame,lock,frame,physical 0
	frame,lock,frame,detector 0
	frame,lock,frame,amplifier 0

	frame,lock,crosshair,none 0
	frame,lock,crosshair,wcs 0
	frame,lock,crosshair,image 0
	frame,lock,crosshair,physical 0
	frame,lock,crosshair,detector 0
	frame,lock,crosshair,amplifier 0

	frame,lock,crop,none 0
	frame,lock,crop,wcs 0
	frame,lock,crop,image 0
	frame,lock,crop,physical 0
	frame,lock,crop,detector 0
	frame,lock,crop,amplifier 0

	frame,lock,cube,none 0
	frame,lock,cube,wcs 0
	frame,lock,cube,image 0

	frame,movefirst 0
	frame,moveprev 0
	frame,movenext 0
	frame,movelast 0
	frame,first 1
	frame,prev 1
	frame,next 1
	frame,last 1
	frame,cube 0
	frame,rgb 0
	frame,3d 0
	frame,size 0
    }
}

proc CreateButtonsFrame {} {
    global buttons
    global ds9
    global current

    ttk::frame $ds9(buttons).frame

    ButtonButton $ds9(buttons).frame.new \
	[string tolower [msgcat::mc {New}]] CreateFrame
    ButtonButton $ds9(buttons).frame.newrgb \
	[string tolower [msgcat::mc {RGB}]] CreateRGBFrame
    ButtonButton $ds9(buttons).frame.new3d \
	[string tolower [msgcat::mc {3D}]] Create3DFrame

    ButtonButton $ds9(buttons).frame.delete \
	[string tolower [msgcat::mc {Delete}]] DeleteCurrentFrame
    ButtonButton $ds9(buttons).frame.deleteall \
	[string tolower [msgcat::mc {Delete All}]] DeleteAllFramesMenu

    ButtonButton $ds9(buttons).frame.clear \
	[string tolower [msgcat::mc {Clear}]] ClearCurrentFrame
    ButtonButton $ds9(buttons).frame.reset \
	[string tolower [msgcat::mc {Reset}]] ResetCurrentFrame
    ButtonButton $ds9(buttons).frame.refresh \
	[string tolower [msgcat::mc {Refresh}]] UpdateCurrentFrame

    RadioButton $ds9(buttons).frame.single \
	[string tolower [msgcat::mc {Single}]] \
	current(display) single DisplayMode
    RadioButton $ds9(buttons).frame.tile \
	[string tolower [msgcat::mc {Tile}]] \
	current(display) tile DisplayMode
    RadioButton $ds9(buttons).frame.blink \
	[string tolower [msgcat::mc {Blink}]] \
	current(display) blink DisplayMode

    ButtonButton $ds9(buttons).frame.matchbin \
	[string tolower [msgcat::mc {Match Bin}]] MatchBinCurrent
    ButtonButton $ds9(buttons).frame.matchaxes \
	[string tolower [msgcat::mc {Match Axes}]] MatchAxesCurrent
    ButtonButton $ds9(buttons).frame.matchscale \
	[string tolower [msgcat::mc {Match Scale}]] MatchScaleCurrent
    ButtonButton $ds9(buttons).frame.matchscalelimits \
	[string tolower [msgcat::mc {Match Limits}]] \
	MatchScaleLimitsCurrent
    ButtonButton $ds9(buttons).frame.matchcolor \
	[string tolower [msgcat::mc {Match Color}]] MatchColorCurrent
    ButtonButton $ds9(buttons).frame.matchsmooth \
	[string tolower [msgcat::mc {Match Smooth}]] MatchSmoothCurrent

    ButtonButton $ds9(buttons).frame.matchframewcs \
	[string tolower [msgcat::mc {Match Frame WCS}]] \
	{MatchFrameCurrent wcs}
    ButtonButton $ds9(buttons).frame.matchframeimage \
	[string tolower [msgcat::mc {Match Frame Image}]] \
	{MatchFrameCurrent image}
    ButtonButton $ds9(buttons).frame.matchframephysical \
	[string tolower [msgcat::mc {Match Frame Physical}]] \
	{MatchFrameCurrent physical}
    ButtonButton $ds9(buttons).frame.matchframedetector \
	[string tolower [msgcat::mc {Match Frame Detector}]] \
	{MatchFrameCurrent detector}
    ButtonButton $ds9(buttons).frame.matchframeamplifier \
	[string tolower [msgcat::mc {Match Frame Amplifier}]] \
	{MatchFrameCurrent amplifier}

    ButtonButton $ds9(buttons).frame.matchcrosshairwcs \
	[string tolower [msgcat::mc {Match Crosshair WCS}]] \
	{MatchCrosshairCurrent wcs}
    ButtonButton $ds9(buttons).frame.matchcrosshairimage \
	[string tolower [msgcat::mc {Match Crosshair Image}]] \
	{MatchCrosshairCurrent image}
    ButtonButton $ds9(buttons).frame.matchcrosshairphysical \
	[string tolower [msgcat::mc {Match Crosshair Physical}]] \
	{MatchCrosshairCurrent physical}
    ButtonButton $ds9(buttons).frame.matchcrosshairdetector \
	[string tolower [msgcat::mc {Match Crosshair Detector}]] \
	{MatchCrosshairCurrent detector}
    ButtonButton $ds9(buttons).frame.matchcrosshairamplifier \
	[string tolower [msgcat::mc {Match Crosshair Amplifier}]] \
	{MatchCrosshairCurrent amplifier}

    ButtonButton $ds9(buttons).frame.matchcropwcs \
	[string tolower [msgcat::mc {Match Crop WCS}]] \
	{MatchCropCurrent wcs}
    ButtonButton $ds9(buttons).frame.matchcropimage \
	[string tolower [msgcat::mc {Match Crop Image}]] \
	{MatchCropCurrent image}
    ButtonButton $ds9(buttons).frame.matchcropphysical \
	[string tolower [msgcat::mc {Match Crop Physical}]] \
	{MatchCropCurrent physical}
    ButtonButton $ds9(buttons).frame.matchcropdetector \
	[string tolower [msgcat::mc {Match Crop Detector}]] \
	{MatchCropCurrent detector}
    ButtonButton $ds9(buttons).frame.matchcropamplifier \
	[string tolower [msgcat::mc {Match Crop Amplifier}]] \
	{MatchCropCurrent amplifier}

    ButtonButton $ds9(buttons).frame.matchcubewcs \
	[string tolower [msgcat::mc {Match Slice WCS}]] \
	{MatchCubeCurrent wcs}
    ButtonButton $ds9(buttons).frame.matchcubeimage \
	[string tolower [msgcat::mc {Match Slice Image}]] \
	{MatchCubeCurrent image}

    CheckButton $ds9(buttons).frame.lockbin \
	[string tolower [msgcat::mc {Lock Bin}]] bin(lock) LockBinCurrent
    CheckButton $ds9(buttons).frame.lockaxes \
	[string tolower [msgcat::mc {Lock Axes}]] \
	cube(lock,axes) LockAxesCurrent
    CheckButton $ds9(buttons).frame.lockscale \
	[string tolower [msgcat::mc {Lock Scale}]] scale(lock) LockScaleCurrent
    CheckButton $ds9(buttons).frame.lockscalelimits \
	[string tolower [msgcat::mc {Lock Limits}]] \
	scale(lock,limits) LockScaleLimitsCurrent
    CheckButton $ds9(buttons).frame.lockcolor \
	[string tolower [msgcat::mc {Lock Color}]] color(lock) LockColorCurrent
    CheckButton $ds9(buttons).frame.locksmooth \
	[string tolower [msgcat::mc {Lock Smooth}]] \
	smooth(lock) LockSmoothCurrent

    RadioButton $ds9(buttons).frame.lockframenone \
	[string tolower [msgcat::mc {Lock Frame None}]] \
	panzoom(lock) none LockFrameCurrent
    RadioButton $ds9(buttons).frame.lockframewcs \
	[string tolower [msgcat::mc {Lock Frame WCS}]] \
	panzoom(lock) wcs LockFrameCurrent
    RadioButton $ds9(buttons).frame.lockframeimage \
	[string tolower [msgcat::mc {Lock Frame Image}]] \
	panzoom(lock) image LockFrameCurrent
    RadioButton $ds9(buttons).frame.lockframephysical \
	[string tolower [msgcat::mc {Lock Frame Physical}]] \
	panzoom(lock) physical LockFrameCurrent
    RadioButton $ds9(buttons).frame.lockframedetector \
	[string tolower [msgcat::mc {Lock Frame Detector}]] \
	panzoom(lock) detector LockFrameCurrent
    RadioButton $ds9(buttons).frame.lockframeamplifier \
	[string tolower [msgcat::mc {Lock Frame Amplifier}]] \
	panzoom(lock) amplifier LockFrameCurrent

    RadioButton $ds9(buttons).frame.lockcrosshairnone \
	[string tolower [msgcat::mc {Lock Crosshair None}]] \
	crosshair(lock) none LockCrosshairCurrent
    RadioButton $ds9(buttons).frame.lockcrosshairwcs \
	[string tolower [msgcat::mc {Lock Crosshair WCS}]] \
	crosshair(lock) wcs LockCrosshairCurrent
    RadioButton $ds9(buttons).frame.lockcrosshairimage \
	[string tolower [msgcat::mc {Lock Crosshair Image}]] \
	crosshair(lock) image LockCrosshairCurrent
    RadioButton $ds9(buttons).frame.lockcrosshairphysical \
	[string tolower [msgcat::mc {Lock Crosshair Physical}]] \
	crosshair(lock) physical LockCrosshairCurrent
    RadioButton $ds9(buttons).frame.lockcrosshairdetector \
	[string tolower [msgcat::mc {Lock Crosshair Detector}]] \
	crosshair(lock) detector LockCrosshairCurrent
    RadioButton $ds9(buttons).frame.lockcrosshairamplifier \
	[string tolower [msgcat::mc {Lock Crosshair Amplifier}]] \
	crosshair(lock) amplifier LockCrosshairCurrent

    RadioButton $ds9(buttons).frame.lockcropnone \
	[string tolower [msgcat::mc {Lock Crop None}]] \
	crop(lock) none LockCropCurrent
    RadioButton $ds9(buttons).frame.lockcropwcs \
	[string tolower [msgcat::mc {Lock Crop WCS}]] \
	crop(lock) wcs LockCropCurrent
    RadioButton $ds9(buttons).frame.lockcropimage \
	[string tolower [msgcat::mc {Lock Crop Image}]] \
	crop(lock) image LockCropCurrent
    RadioButton $ds9(buttons).frame.lockcropphysical \
	[string tolower [msgcat::mc {Lock Crop Physical}]] \
	crop(lock) physical LockCropCurrent
    RadioButton $ds9(buttons).frame.lockcropdetector \
	[string tolower [msgcat::mc {Lock Crop Detector}]] \
	crop(lock) detector LockCropCurrent
    RadioButton $ds9(buttons).frame.lockcropamplifier \
	[string tolower [msgcat::mc {Lock Crop Amplifier}]] \
	crop(lock) amplifier LockCropCurrent

    RadioButton $ds9(buttons).frame.lockcubenone \
	[string tolower [msgcat::mc {Lock Slice None}]] \
	cube(lock) none LockCubeCurrent
    RadioButton $ds9(buttons).frame.lockcubewcs \
	[string tolower [msgcat::mc {Lock Slice WCS}]] \
	cube(lock) wcs LockCubeCurrent
    RadioButton $ds9(buttons).frame.lockcubeimage \
	[string tolower [msgcat::mc {Lock Slice Image}]] \
	cube(lock) image LockCubeCurrent

    ButtonButton $ds9(buttons).frame.movefirst \
	[string tolower [msgcat::mc {Move First}]] MoveFirstFrame
    ButtonButton $ds9(buttons).frame.moveprev \
	[string tolower [msgcat::mc {Move Back}]] MovePrevFrame
    ButtonButton $ds9(buttons).frame.movenext \
	[string tolower [msgcat::mc {Move Forward}]] MoveNextFrame
    ButtonButton $ds9(buttons).frame.movelast \
	[string tolower [msgcat::mc {Move Last}]] MoveLastFrame

    ButtonButton $ds9(buttons).frame.first \
	[string tolower [msgcat::mc {First}]] FirstFrame
    ButtonButton $ds9(buttons).frame.prev \
	[string tolower [msgcat::mc {Prev}]] PrevFrame
    ButtonButton $ds9(buttons).frame.next \
	[string tolower [msgcat::mc {Next}]] NextFrame
    ButtonButton $ds9(buttons).frame.last \
	[string tolower [msgcat::mc {Last}]] LastFrame

    ButtonButton $ds9(buttons).frame.cube \
	[string tolower "[msgcat::mc {Cube}]..."] CubeDialog
    ButtonButton $ds9(buttons).frame.rgb \
	[string tolower "[msgcat::mc {RGB}]..."] RGBDialog
    ButtonButton $ds9(buttons).frame.3d \
	[string tolower "[msgcat::mc {3D}]..."] 3DDialog

    ButtonButton $ds9(buttons).frame.size \
	[string tolower [msgcat::mc {Size}]] DisplayDefaultDialog

    set buttons(frame) "
        $ds9(buttons).frame.new pbuttons(frame,new)
        $ds9(buttons).frame.newrgb pbuttons(frame,newrgb)
        $ds9(buttons).frame.new3d pbuttons(frame,new3d)
        $ds9(buttons).frame.delete pbuttons(frame,delete)
        $ds9(buttons).frame.deleteall pbuttons(frame,deleteall)
        $ds9(buttons).frame.clear pbuttons(frame,clear)
        $ds9(buttons).frame.reset pbuttons(frame,reset)
        $ds9(buttons).frame.refresh pbuttons(frame,refresh)
        $ds9(buttons).frame.single pbuttons(frame,single)
        $ds9(buttons).frame.tile pbuttons(frame,tile)
        $ds9(buttons).frame.blink pbuttons(frame,blink)

        $ds9(buttons).frame.matchbin pbuttons(frame,match,bin)
        $ds9(buttons).frame.matchaxes pbuttons(frame,match,axes)
        $ds9(buttons).frame.matchscale pbuttons(frame,match,scale)
        $ds9(buttons).frame.matchscalelimits pbuttons(frame,match,scalelimits)
        $ds9(buttons).frame.matchcolor pbuttons(frame,match,color)
        $ds9(buttons).frame.matchsmooth pbuttons(frame,match,smooth)

        $ds9(buttons).frame.matchframewcs pbuttons(frame,match,frame,wcs)
        $ds9(buttons).frame.matchframeimage pbuttons(frame,match,frame,image)
        $ds9(buttons).frame.matchframephysical pbuttons(frame,match,frame,physical)
        $ds9(buttons).frame.matchframedetector pbuttons(frame,match,frame,detector)
        $ds9(buttons).frame.matchframeamplifier pbuttons(frame,match,frame,amplifier)

        $ds9(buttons).frame.matchcrosshairwcs pbuttons(frame,match,crosshair,wcs)
        $ds9(buttons).frame.matchcrosshairimage pbuttons(frame,match,crosshair,image)
        $ds9(buttons).frame.matchcrosshairphysical pbuttons(frame,match,crosshair,physical)
        $ds9(buttons).frame.matchcrosshairdetector pbuttons(frame,match,crosshair,detector)
        $ds9(buttons).frame.matchcrosshairamplifier pbuttons(frame,match,crosshair,amplifier)

        $ds9(buttons).frame.matchcropwcs pbuttons(frame,match,crop,wcs)
        $ds9(buttons).frame.matchcropimage pbuttons(frame,match,crop,image)
        $ds9(buttons).frame.matchcropphysical pbuttons(frame,match,crop,physical)
        $ds9(buttons).frame.matchcropdetector pbuttons(frame,match,crop,detector)
        $ds9(buttons).frame.matchcropamplifier pbuttons(frame,match,crop,amplifier)

        $ds9(buttons).frame.matchcubewcs pbuttons(frame,match,cube,wcs)
        $ds9(buttons).frame.matchcubeimage pbuttons(frame,match,cube,image)

        $ds9(buttons).frame.lockbin pbuttons(frame,lock,bin)
        $ds9(buttons).frame.lockaxes pbuttons(frame,lock,axes)
        $ds9(buttons).frame.lockscale pbuttons(frame,lock,scale)
        $ds9(buttons).frame.lockscalelimits pbuttons(frame,lock,scalelimits)
        $ds9(buttons).frame.lockcolor pbuttons(frame,lock,color)
        $ds9(buttons).frame.locksmooth pbuttons(frame,lock,smooth)

        $ds9(buttons).frame.lockframenone pbuttons(frame,lock,frame,none)
        $ds9(buttons).frame.lockframewcs pbuttons(frame,lock,frame,wcs)
        $ds9(buttons).frame.lockframeimage pbuttons(frame,lock,frame,image)
        $ds9(buttons).frame.lockframephysical pbuttons(frame,lock,frame,physical)
        $ds9(buttons).frame.lockframedetector pbuttons(frame,lock,frame,detector)
        $ds9(buttons).frame.lockframeamplifier pbuttons(frame,lock,frame,amplifier)

        $ds9(buttons).frame.lockcrosshairnone pbuttons(frame,lock,crosshair,none)
        $ds9(buttons).frame.lockcrosshairwcs pbuttons(frame,lock,crosshair,wcs)
        $ds9(buttons).frame.lockcrosshairimage pbuttons(frame,lock,crosshair,image)
        $ds9(buttons).frame.lockcrosshairphysical pbuttons(frame,lock,crosshair,physical)
        $ds9(buttons).frame.lockcrosshairdetector pbuttons(frame,lock,crosshair,detector)
        $ds9(buttons).frame.lockcrosshairamplifier pbuttons(frame,lock,crosshair,amplifier)

        $ds9(buttons).frame.lockcropnone pbuttons(frame,lock,crop,none)
        $ds9(buttons).frame.lockcropwcs pbuttons(frame,lock,crop,wcs)
        $ds9(buttons).frame.lockcropimage pbuttons(frame,lock,crop,image)
        $ds9(buttons).frame.lockcropphysical pbuttons(frame,lock,crop,physical)
        $ds9(buttons).frame.lockcropdetector pbuttons(frame,lock,crop,detector)
        $ds9(buttons).frame.lockcropamplifier pbuttons(frame,lock,crop,amplifier)

        $ds9(buttons).frame.lockcubenone pbuttons(frame,lock,cube,none)
        $ds9(buttons).frame.lockcubewcs pbuttons(frame,lock,cube,wcs)
        $ds9(buttons).frame.lockcubeimage pbuttons(frame,lock,cube,image)

        $ds9(buttons).frame.movefirst pbuttons(frame,movefirst)
        $ds9(buttons).frame.moveprev pbuttons(frame,moveprev)
        $ds9(buttons).frame.movenext pbuttons(frame,movenext)
        $ds9(buttons).frame.movelast pbuttons(frame,movelast)
        $ds9(buttons).frame.first pbuttons(frame,first)
        $ds9(buttons).frame.prev pbuttons(frame,prev)
        $ds9(buttons).frame.next pbuttons(frame,next)
        $ds9(buttons).frame.last pbuttons(frame,last)
        $ds9(buttons).frame.cube pbuttons(frame,cube)
        $ds9(buttons).frame.rgb pbuttons(frame,rgb)
        $ds9(buttons).frame.3d pbuttons(frame,3d)
        $ds9(buttons).frame.size pbuttons(frame,size)
    "
}

proc PrefsDialogButtonbarFrame {f} {
    global buttons
    global pbuttons
    global ds9

    ttk::menubutton $f -text [msgcat::mc {Buttonbar}] -menu $f.menu
    
    set m $f.menu
    ThemeMenu $m
    $m add checkbutton -label [msgcat::mc {New Frame}] \
	-variable pbuttons(frame,new) -command {UpdateButtons buttons(frame)}
    $m add checkbutton -label [msgcat::mc {New Frame RGB}] \
	-variable pbuttons(frame,newrgb) -command {UpdateButtons buttons(frame)}
    $m add checkbutton -label [msgcat::mc {New Frame 3D}] \
	-variable pbuttons(frame,new3d) -command {UpdateButtons buttons(frame)}
    $m add separator
    $m add checkbutton -label [msgcat::mc {Delete Frame}] \
	-variable pbuttons(frame,delete) -command {UpdateButtons buttons(frame)}
    $m add checkbutton -label [msgcat::mc {Delete All Frames}] \
	-variable pbuttons(frame,deleteall) -command {UpdateButtons buttons(frame)}
    $m add separator
    $m add checkbutton -label [msgcat::mc {Clear Frame}] \
	-variable pbuttons(frame,clear) -command {UpdateButtons buttons(frame)}
    $m add checkbutton -label [msgcat::mc {Reset Frame}] \
	-variable pbuttons(frame,reset) -command {UpdateButtons buttons(frame)}
    $m add checkbutton -label [msgcat::mc {Refresh Frame}] \
	-variable pbuttons(frame,refresh) -command {UpdateButtons buttons(frame)}
    $m add separator
    $m add checkbutton -label [msgcat::mc {Single Frame}] \
	-variable pbuttons(frame,single) -command {UpdateButtons buttons(frame)}
    $m add checkbutton -label [msgcat::mc {Tile Frames}] \
	-variable pbuttons(frame,tile) -command {UpdateButtons buttons(frame)}
    $m add checkbutton -label [msgcat::mc {Blink Frames}] \
	-variable pbuttons(frame,blink) -command {UpdateButtons buttons(frame)}
    $m add separator
    $m add cascade -label [msgcat::mc {Match}] -menu $m.match
    $m add cascade -label [msgcat::mc {Lock}] -menu $m.lock
    $m add separator
    $m add cascade -label [msgcat::mc {Move Frame}] -menu $m.move
    $m add separator
    $m add checkbutton -label [msgcat::mc {First Frame}] \
	-variable pbuttons(frame,first) -command {UpdateButtons buttons(frame)}
    $m add checkbutton -label [msgcat::mc {Previous Frame}] \
	-variable pbuttons(frame,prev) -command {UpdateButtons buttons(frame)}
    $m add checkbutton -label [msgcat::mc {Next Frame}] \
	-variable pbuttons(frame,next) -command {UpdateButtons buttons(frame)}
    $m add checkbutton -label [msgcat::mc {Last Frame}] \
	-variable pbuttons(frame,last) -command {UpdateButtons buttons(frame)}
    $m add separator
    $m add checkbutton -label "[msgcat::mc {Cube}]..." \
	-variable pbuttons(frame,cube) -command {UpdateButtons buttons(frame)}
    $m add checkbutton -label "[msgcat::mc {RGB}]..." \
	-variable pbuttons(frame,rgb) -command {UpdateButtons buttons(frame)}
    $m add checkbutton -label "[msgcat::mc {3D}]..." \
	-variable pbuttons(frame,3d) -command {UpdateButtons buttons(frame)}
    $m add separator
    $m add cascade -label [msgcat::mc {Frame Parameters}] -menu $m.params

    # match
    ThemeMenu $m.match
    $m.match add cascade -label [msgcat::mc {Frame}] \
	-menu $m.match.frame
    $m.match add cascade -label [msgcat::mc {Crosshair}] \
	-menu $m.match.crosshair
    $m.match add cascade -label [msgcat::mc {Crop}] \
	-menu $m.match.crop
    $m.match add cascade -label [msgcat::mc {Slice}] \
	-menu $m.match.cube
    $m.match add checkbutton -label [msgcat::mc {Bin}] \
	-variable pbuttons(frame,match,bin) \
	-command {UpdateButtons buttons(frame)}
    $m.match add checkbutton -label [msgcat::mc {Axes Order}] \
	-variable pbuttons(frame,match,axes) \
	-command {UpdateButtons buttons(frame)}
    $m.match add checkbutton -label [msgcat::mc {Scale}] \
	-variable pbuttons(frame,match,scale) \
	-command {UpdateButtons buttons(frame)}
    $m.match add checkbutton -label [msgcat::mc {Scale and Limits}] \
	-variable pbuttons(frame,match,scalelimits) \
	-command {UpdateButtons buttons(frame)}
    $m.match add checkbutton -label [msgcat::mc {Color}] \
	-variable pbuttons(frame,match,color) \
	-command {UpdateButtons buttons(frame)}
    $m.match add checkbutton -label [msgcat::mc {Smooth}] \
	-variable pbuttons(frame,match,smooth) \
	-command {UpdateButtons buttons(frame)}

    ThemeMenu $m.match.frame
    $m.match.frame add checkbutton -label [msgcat::mc {WCS}] \
	-variable pbuttons(frame,match,frame,wcs) \
	-command {UpdateButtons buttons(frame)}
    $m.match.frame add separator
    $m.match.frame add checkbutton -label [msgcat::mc {Image}] \
	-variable pbuttons(frame,match,frame,image) \
	-command {UpdateButtons buttons(frame)}
    $m.match.frame add checkbutton -label [msgcat::mc {Physical}] \
	-variable pbuttons(frame,match,frame,physical) \
	-command {UpdateButtons buttons(frame)}
    $m.match.frame add checkbutton -label [msgcat::mc {Detector}] \
	-variable pbuttons(frame,match,frame,detector) \
	-command {UpdateButtons buttons(frame)}
    $m.match.frame add checkbutton -label [msgcat::mc {Amplifier}] \
	-variable pbuttons(frame,match,frame,amplifier) \
	-command {UpdateButtons buttons(frame)}

    ThemeMenu $m.match.crosshair
    $m.match.crosshair add checkbutton -label [msgcat::mc {WCS}] \
	-variable pbuttons(frame,match,crosshair,wcs) \
	-command {UpdateButtons buttons(frame)}
    $m.match.crosshair add separator
    $m.match.crosshair add checkbutton -label [msgcat::mc {Image}] \
	-variable pbuttons(frame,match,crosshair,image) \
	-command {UpdateButtons buttons(frame)}
    $m.match.crosshair add checkbutton -label [msgcat::mc {Physical}] \
	-variable pbuttons(frame,match,crosshair,physical) \
	-command {UpdateButtons buttons(frame)}
    $m.match.crosshair add checkbutton -label [msgcat::mc {Detector}] \
	-variable pbuttons(frame,match,crosshair,detector) \
	-command {UpdateButtons buttons(frame)}
    $m.match.crosshair add checkbutton -label [msgcat::mc {Amplifier}] \
	-variable pbuttons(frame,match,crosshair,amplifier) \
	-command {UpdateButtons buttons(frame)}

    ThemeMenu $m.match.crop
    $m.match.crop add checkbutton -label [msgcat::mc {WCS}] \
	-variable pbuttons(frame,match,crop,wcs) \
	-command {UpdateButtons buttons(frame)}
    $m.match.crop add separator
    $m.match.crop add checkbutton -label [msgcat::mc {Image}] \
	-variable pbuttons(frame,match,crop,image) \
	-command {UpdateButtons buttons(frame)}
    $m.match.crop add checkbutton -label [msgcat::mc {Physical}] \
	-variable pbuttons(frame,match,crop,physical) \
	-command {UpdateButtons buttons(frame)}
    $m.match.crop add checkbutton -label [msgcat::mc {Detector}] \
	-variable pbuttons(frame,match,crop,detector) \
	-command {UpdateButtons buttons(frame)}
    $m.match.crop add checkbutton -label [msgcat::mc {Amplifier}] \
	-variable pbuttons(frame,match,crop,amplifier) \
	-command {UpdateButtons buttons(frame)}


    ThemeMenu $m.match.cube
    $m.match.cube add checkbutton -label [msgcat::mc {WCS}] \
	-variable pbuttons(frame,match,cube,wcs) \
	-command {UpdateButtons buttons(frame)}
    $m.match.cube add separator
    $m.match.cube add checkbutton -label [msgcat::mc {Image}] \
	-variable pbuttons(frame,match,cube,image) \
	-command {UpdateButtons buttons(frame)}

    # lock
    ThemeMenu $m.lock
    $m.lock add cascade -label [msgcat::mc {Frame}] \
	-menu $m.lock.frame
    $m.lock add cascade -label [msgcat::mc {Crosshair}] \
	-menu $m.lock.crosshair
    $m.lock add cascade -label [msgcat::mc {Crop}] \
	-menu $m.lock.crop
    $m.lock add cascade -label [msgcat::mc {Slice}] \
	-menu $m.lock.cube
    $m.lock add checkbutton -label [msgcat::mc {Bin}] \
	-variable pbuttons(frame,lock,bin) \
	-command {UpdateButtons buttons(frame)}
    $m.lock add checkbutton -label [msgcat::mc {Axes Order}] \
	-variable pbuttons(frame,lock,axes) \
	-command {UpdateButtons buttons(frame)}
    $m.lock add checkbutton -label [msgcat::mc {Scale}] \
	-variable pbuttons(frame,lock,scale) \
	-command {UpdateButtons buttons(frame)}
    $m.lock add checkbutton -label [msgcat::mc {Scale and Limits}] \
	-variable pbuttons(frame,lock,scalelimits) \
	-command {UpdateButtons buttons(frame)}
    $m.lock add checkbutton -label [msgcat::mc {Color}] \
	-variable pbuttons(frame,lock,color) \
	-command {UpdateButtons buttons(frame)}
    $m.lock add checkbutton -label [msgcat::mc {Smooth}] \
	-variable pbuttons(frame,lock,smooth) \
	-command {UpdateButtons buttons(frame)}

    ThemeMenu $m.lock.frame
    $m.lock.frame add checkbutton -label [msgcat::mc {None}] \
	-variable pbuttons(frame,lock,frame,none) \
	-command {UpdateButtons buttons(frame)}
    $m.lock.frame add separator
    $m.lock.frame add checkbutton -label [msgcat::mc {WCS}] \
	-variable pbuttons(frame,lock,frame,wcs) \
	-command {UpdateButtons buttons(frame)}
    $m.lock.frame add separator
    $m.lock.frame add checkbutton -label [msgcat::mc {Image}] \
	-variable pbuttons(frame,lock,frame,image) \
	-command {UpdateButtons buttons(frame)}
    $m.lock.frame add checkbutton -label [msgcat::mc {Physical}] \
	-variable pbuttons(frame,lock,frame,physical) \
	-command {UpdateButtons buttons(frame)}
    $m.lock.frame add checkbutton -label [msgcat::mc {Detector}] \
	-variable pbuttons(frame,lock,frame,detector) \
	-command {UpdateButtons buttons(frame)}
    $m.lock.frame add checkbutton -label [msgcat::mc {Amplifier}] \
	-variable pbuttons(frame,lock,frame,amplifier) \
	-command {UpdateButtons buttons(frame)}

    ThemeMenu $m.lock.crosshair
    $m.lock.crosshair add checkbutton -label [msgcat::mc {None}] \
	-variable pbuttons(frame,lock,crosshair,none) \
	-command {UpdateButtons buttons(frame)}
    $m.lock.crosshair add separator
    $m.lock.crosshair add checkbutton -label [msgcat::mc {WCS}] \
	-variable pbuttons(frame,lock,crosshair,wcs) \
	-command {UpdateButtons buttons(frame)}
    $m.lock.crosshair add separator
    $m.lock.crosshair add checkbutton -label [msgcat::mc {Image}] \
	-variable pbuttons(frame,lock,crosshair,image) \
	-command {UpdateButtons buttons(frame)}
    $m.lock.crosshair add checkbutton -label [msgcat::mc {Physical}] \
	-variable pbuttons(frame,lock,crosshair,physical) \
	-command {UpdateButtons buttons(frame)}
    $m.lock.crosshair add checkbutton -label [msgcat::mc {Detector}] \
	-variable pbuttons(frame,lock,crosshair,detector) \
	-command {UpdateButtons buttons(frame)}
    $m.lock.crosshair add checkbutton -label [msgcat::mc {Amplifier}] \
	-variable pbuttons(frame,lock,crosshair,amplifier) \
	-command {UpdateButtons buttons(frame)}

    ThemeMenu $m.lock.crop
    $m.lock.crop add checkbutton -label [msgcat::mc {None}] \
	-variable pbuttons(frame,lock,crop,none) \
	-command {UpdateButtons buttons(frame)}
    $m.lock.crop add separator
    $m.lock.crop add checkbutton -label [msgcat::mc {WCS}] \
	-variable pbuttons(frame,lock,crop,wcs) \
	-command {UpdateButtons buttons(frame)}
    $m.lock.crop add separator
    $m.lock.crop add checkbutton -label [msgcat::mc {Image}] \
	-variable pbuttons(frame,lock,crop,image) \
	-command {UpdateButtons buttons(frame)}
    $m.lock.crop add checkbutton -label [msgcat::mc {Physical}] \
	-variable pbuttons(frame,lock,crop,physical) \
	-command {UpdateButtons buttons(frame)}
    $m.lock.crop add checkbutton -label [msgcat::mc {Detector}] \
	-variable pbuttons(frame,lock,crop,detector) \
	-command {UpdateButtons buttons(frame)}
    $m.lock.crop add checkbutton -label [msgcat::mc {Amplifier}] \
	-variable pbuttons(frame,lock,crop,amplifier) \
	-command {UpdateButtons buttons(frame)}


    ThemeMenu $m.lock.cube
    $m.lock.cube add checkbutton -label [msgcat::mc {None}] \
	-variable pbuttons(frame,lock,cube,none) \
	-command {UpdateButtons buttons(frame)}
    $m.lock.cube add separator
    $m.lock.cube add checkbutton -label [msgcat::mc {WCS}] \
	-variable pbuttons(frame,lock,cube,wcs) \
	-command {UpdateButtons buttons(frame)}
    $m.lock.cube add separator
    $m.lock.cube add checkbutton -label [msgcat::mc {Image}] \
	-variable pbuttons(frame,lock,cube,image) \
	-command {UpdateButtons buttons(frame)}

    # move
    ThemeMenu $m.move
    $m.move add checkbutton -label [msgcat::mc {First}] \
	-variable pbuttons(frame,movefirst) \
	-command {UpdateButtons buttons(frame)}
    $m.move add checkbutton -label [msgcat::mc {Back}] \
	-variable pbuttons(frame,moveprev) \
	-command {UpdateButtons buttons(frame)}
    $m.move add checkbutton -label [msgcat::mc {Forward}] \
	-variable pbuttons(frame,movenext) \
	-command {UpdateButtons buttons(frame)}
    $m.move add checkbutton -label [msgcat::mc {Last}] \
	-variable pbuttons(frame,movelast) \
	-command {UpdateButtons buttons(frame)}

    # params
    ThemeMenu $m.params
    $m.params add checkbutton -label [msgcat::mc {Display Size}] \
	-variable pbuttons(frame,size) -command {UpdateButtons buttons(frame)}
}

# Support

proc UpdateFrameMenu {} {
    global ds9
    global current

    global debug
    if {$debug(tcl,update)} {
	puts stderr "UpdateFrameMenu"
    }

    $ds9(mb).frame entryconfig [msgcat::mc {New Frame RGB}] -state normal
    $ds9(buttons).frame.newrgb configure -state normal

    if {$ds9(active,num) > 0} {
	$ds9(mb).frame entryconfig [msgcat::mc {Delete Frame}] -state normal
	$ds9(mb).frame entryconfig [msgcat::mc {Delete All Frames}] -state normal

	$ds9(mb).frame entryconfig [msgcat::mc {Clear Frame}] -state normal
	$ds9(mb).frame entryconfig [msgcat::mc {Reset Frame}] -state normal
	$ds9(mb).frame entryconfig [msgcat::mc {Refresh Frame}] -state normal

	$ds9(mb).frame entryconfig [msgcat::mc {Single Frame}] -state normal
	$ds9(mb).frame entryconfig [msgcat::mc {Tile Frames}] -state normal
	$ds9(mb).frame entryconfig [msgcat::mc {Blink Frames}] -state normal

	$ds9(mb).frame entryconfig [msgcat::mc {Match}] -state normal
	$ds9(mb).frame entryconfig [msgcat::mc {Lock}] -state normal

	$ds9(mb).frame entryconfig [msgcat::mc {Move Frame}] -state normal

	$ds9(mb).frame entryconfig [msgcat::mc {First Frame}] -state normal
	$ds9(mb).frame entryconfig [msgcat::mc {Previous Frame}] -state normal
	$ds9(mb).frame entryconfig [msgcat::mc {Next Frame}] -state normal
	$ds9(mb).frame entryconfig [msgcat::mc {Last Frame}] -state normal

	$ds9(buttons).frame.delete configure -state normal
	$ds9(buttons).frame.deleteall configure -state normal

	$ds9(buttons).frame.clear configure -state normal
	$ds9(buttons).frame.reset configure -state normal
	$ds9(buttons).frame.refresh configure -state normal

	$ds9(buttons).frame.single configure -state normal
	$ds9(buttons).frame.tile configure -state normal
	$ds9(buttons).frame.blink configure -state normal

	$ds9(buttons).frame.movefirst configure -state normal
	$ds9(buttons).frame.moveprev configure -state normal
	$ds9(buttons).frame.movenext configure -state normal
	$ds9(buttons).frame.movelast configure -state normal

	$ds9(buttons).frame.first configure -state normal
	$ds9(buttons).frame.prev configure -state normal
	$ds9(buttons).frame.next configure -state normal
	$ds9(buttons).frame.last configure -state normal
    } else {
	$ds9(mb).frame entryconfig [msgcat::mc {Delete Frame}] -state disabled
	$ds9(mb).frame entryconfig [msgcat::mc {Delete All Frames}] -state disabled

	$ds9(mb).frame entryconfig [msgcat::mc {Clear Frame}] -state disabled
	$ds9(mb).frame entryconfig [msgcat::mc {Reset Frame}] -state disabled
	$ds9(mb).frame entryconfig [msgcat::mc {Refresh Frame}] -state disabled

	$ds9(mb).frame entryconfig [msgcat::mc {Single Frame}] -state disabled
	$ds9(mb).frame entryconfig [msgcat::mc {Tile Frames}] -state disabled
	$ds9(mb).frame entryconfig [msgcat::mc {Blink Frames}] -state disabled

	$ds9(mb).frame entryconfig [msgcat::mc {Match}] -state disabled
	$ds9(mb).frame entryconfig [msgcat::mc {Lock}] -state disabled

	$ds9(mb).frame entryconfig [msgcat::mc {Move Frame}] -state disabled

	$ds9(mb).frame entryconfig [msgcat::mc {First Frame}] -state disabled
	$ds9(mb).frame entryconfig [msgcat::mc {Previous Frame}] -state disabled
	$ds9(mb).frame entryconfig [msgcat::mc {Next Frame}] -state disabled
	$ds9(mb).frame entryconfig [msgcat::mc {Last Frame}] -state disabled

	$ds9(buttons).frame.delete configure -state disabled
	$ds9(buttons).frame.deleteall configure -state disabled

	$ds9(buttons).frame.clear configure -state disabled
	$ds9(buttons).frame.reset configure -state disabled
	$ds9(buttons).frame.refresh configure -state disabled

	$ds9(buttons).frame.single configure -state disabled
	$ds9(buttons).frame.tile configure -state disabled
	$ds9(buttons).frame.blink configure -state disabled

	$ds9(buttons).frame.movefirst configure -state disabled
	$ds9(buttons).frame.moveprev configure -state disabled
	$ds9(buttons).frame.movenext configure -state disabled
	$ds9(buttons).frame.movelast configure -state disabled

	$ds9(buttons).frame.first configure -state disabled
	$ds9(buttons).frame.prev configure -state disabled
	$ds9(buttons).frame.next configure -state disabled
	$ds9(buttons).frame.last configure -state disabled
    }

    if {$current(frame) != {}} {
	$ds9(mb).frame entryconfig "[msgcat::mc {Cube}]..." \
	    -state normal
	$ds9(buttons).frame.cube configure -state normal

	switch -- [$current(frame) get type] {
	    base {
		$ds9(mb).frame entryconfig "[msgcat::mc {RGB}]..." \
		    -state disabled
		$ds9(mb).frame entryconfig "[msgcat::mc {3D}]..." \
		    -state normal
		$ds9(buttons).frame.rgb configure -state disabled
		$ds9(buttons).frame.3d configure -state normal
	    }
	    rgb {
		$ds9(mb).frame entryconfig "[msgcat::mc {RGB}]..." \
		    -state normal
		$ds9(mb).frame entryconfig "[msgcat::mc {3D}]..." \
		    -state disabled
		$ds9(buttons).frame.rgb configure -state normal
		$ds9(buttons).frame.3d configure -state disabled
	    }
	    3d {
		$ds9(mb).frame entryconfig "[msgcat::mc {RGB}]..." \
		    -state disabled
		$ds9(mb).frame entryconfig "[msgcat::mc {3D}]..."  \
		    -state normal
		$ds9(buttons).frame.rgb configure -state disabled
		$ds9(buttons).frame.3d configure -state normal
	    }
	}
    } else {
	$ds9(mb).frame entryconfig "[msgcat::mc {Cube}]..." \
	    -state disabled
	$ds9(mb).frame entryconfig "[msgcat::mc {RGB}]..." \
	    -state disabled
	$ds9(mb).frame entryconfig "[msgcat::mc {3D}]..." \
	    -state disabled
	$ds9(buttons).frame.cube configure -state disabled
	$ds9(buttons).frame.rgb configure -state disabled
	$ds9(buttons).frame.3d configure -state disabled
    }
}

proc UpdateFrameMenuItems {} {
    global ds9

    global debug
    if {$debug(tcl,update)} {
	puts stderr "UpdateFrameMenuItems"
    }

    # Goto Frame Menu
    if {[$ds9(mb).frame.goto index end] >= $ds9(menu,size,frame,goto)} {
	$ds9(mb).frame.goto delete $ds9(menu,size,frame,goto) end
    }

    set cnt $ds9(menu,size,frame,goto)
    foreach ff $ds9(frames) {
	$ds9(mb).frame.goto add command \
	    -label "[msgcat::mc {Frame}] [string range $ff 5 end]" \
	    -command [list GotoFrame $ff]

	# wrap if needed
	incr cnt
	if {$cnt>=$ds9(menu,size,wrap)} {
	    set cnt 1
	    $ds9(mb).frame.goto entryconfig $which -columnbreak 1
	}
    }

    # Active Frame Menu
    if {[$ds9(mb).frame.active index end] >= $ds9(menu,size,frame,active)} {
	$ds9(mb).frame.active delete $ds9(menu,size,frame,active) end
    }

    set cnt $ds9(menu,size,frame,active)
    foreach ff $ds9(frames) {
	$ds9(mb).frame.active add checkbutton \
	    -label "[msgcat::mc {Frame}] [string range $ff 5 end]" \
	    -variable active($ff) -command UpdateActiveFrames

	# wrap if needed
	incr cnt
	if {$cnt>=$ds9(menu,size,wrap)} {
	    set cnt 1
	    $ds9(mb).frame.active entryconfig \
		"[msgcat::mc {Frame}] [string range $ff 5 end]" -columnbreak 1
	}
    }
}

