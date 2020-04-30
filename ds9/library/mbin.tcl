#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

# Menu

proc BinMainMenu {} {
    global ds9

    ThemeMenu $ds9(mb).bin
    $ds9(mb).bin add radiobutton -label [msgcat::mc {Average}] \
	-variable bin(function) -value average -command ChangeBinFunction
    $ds9(mb).bin add radiobutton -label [msgcat::mc {Sum}] \
	-variable bin(function) -value sum -command ChangeBinFunction
    $ds9(mb).bin add separator
    $ds9(mb).bin add command -label [msgcat::mc {Bin In}] \
	-command {Bin .5 .5}
    $ds9(mb).bin add command -label [msgcat::mc {Bin Out}] \
	-command {Bin 2 2}
    $ds9(mb).bin add command -label [msgcat::mc {Bin Fit}] \
	-command BinToFit
    $ds9(mb).bin add separator
    $ds9(mb).bin add radiobutton -label "[msgcat::mc {Bin}] 1" \
	-variable bin(factor) -value {1 1} -command ChangeBinFactor
    $ds9(mb).bin add radiobutton -label "[msgcat::mc {Bin}] 2" \
	-variable bin(factor) -value {2 2} -command ChangeBinFactor
    $ds9(mb).bin add radiobutton -label "[msgcat::mc {Bin}] 4" \
	-variable bin(factor) -value {4 4} -command ChangeBinFactor
    $ds9(mb).bin add radiobutton -label "[msgcat::mc {Bin}] 8" \
	-variable bin(factor) -value {8 8} -command ChangeBinFactor
    $ds9(mb).bin add radiobutton -label "[msgcat::mc {Bin}] 16" \
	-variable bin(factor) -value {16 16} -command ChangeBinFactor
    $ds9(mb).bin add radiobutton -label "[msgcat::mc {Bin}] 32" \
	-variable bin(factor) -value {32 32} -command ChangeBinFactor
    $ds9(mb).bin add radiobutton -label "[msgcat::mc {Bin}] 64" \
	-variable bin(factor) -value {64 64} -command ChangeBinFactor
    $ds9(mb).bin add radiobutton -label "[msgcat::mc {Bin}] 128" \
	-variable bin(factor) -value {128 128} -command ChangeBinFactor
    $ds9(mb).bin add radiobutton -label "[msgcat::mc {Bin}] 256" \
	-variable bin(factor) -value {256 256} -command ChangeBinFactor
    $ds9(mb).bin add separator
    $ds9(mb).bin add radiobutton -label {128x128} \
	-variable bin(buffersize) -value 128 -command ChangeBinBufferSize 
    $ds9(mb).bin add radiobutton -label {256x256} \
	-variable bin(buffersize) -value 256 -command ChangeBinBufferSize 
    $ds9(mb).bin add radiobutton -label {512x512} \
	-variable bin(buffersize) -value 512 -command ChangeBinBufferSize 
    $ds9(mb).bin add radiobutton -label {1024x1024} \
	-variable bin(buffersize) -value 1024 -command ChangeBinBufferSize
    $ds9(mb).bin add radiobutton -label {2048x2048} \
	-variable bin(buffersize) -value 2048 -command ChangeBinBufferSize
    $ds9(mb).bin add radiobutton -label {4096x4096} \
	-variable bin(buffersize) -value 4096 -command ChangeBinBufferSize
    $ds9(mb).bin add radiobutton -label {8192x8192} \
	-variable bin(buffersize) -value 8192 -command ChangeBinBufferSize
    $ds9(mb).bin add separator
    $ds9(mb).bin add command -label "[msgcat::mc {Binning Parameters}]..." \
	-command BinDialog
}

proc PrefsDialogBinMenu {w} {
    set f [ttk::labelframe $w.mbin -text [msgcat::mc {Bin}]]

    ttk::menubutton $f.menu -text [msgcat::mc {Menu}] -menu $f.menu.menu
    PrefsDialogButtonbarBin $f.buttonbar

    grid $f.menu $f.buttonbar -padx 2 -pady 2

    set m $f.menu.menu
    ThemeMenu $m
    $m add radiobutton -label [msgcat::mc {Average}] \
	-variable pbin(function) -value average
    $m add radiobutton -label [msgcat::mc {Sum}] \
	-variable pbin(function) -value sum
    $m add separator
    $m add radiobutton -label "[msgcat::mc {Bin}] 1" \
	-variable pbin(factor) -value {1 1}
    $m add radiobutton -label "[msgcat::mc {Bin}] 2" \
	-variable pbin(factor) -value {2 2}
    $m add radiobutton -label "[msgcat::mc {Bin}] 4" \
	-variable pbin(factor) -value {4 4}
    $m add radiobutton -label "[msgcat::mc {Bin}] 8" \
	-variable pbin(factor) -value {8 8}
    $m add radiobutton -label "[msgcat::mc {Bin}] 16" \
	-variable pbin(factor) -value {16 16}
    $m add radiobutton -label "[msgcat::mc {Bin}] 32" \
	-variable pbin(factor) -value {32 32}
    $m add radiobutton -label "[msgcat::mc {Bin}] 64" \
	-variable pbin(factor) -value {64 64}
    $m add radiobutton -label "[msgcat::mc {Bin}] 128" \
	-variable pbin(factor) -value {128 128}
    $m add radiobutton -label "[msgcat::mc {Bin}] 256" \
	-variable pbin(factor) -value {256 256}
    $m add separator
    $m add radiobutton -label {128x128} -variable pbin(buffersize) -value 128
    $m add radiobutton -label {256x256} -variable pbin(buffersize) -value 256
    $m add radiobutton -label {512x512} -variable pbin(buffersize) -value 512
    $m add radiobutton -label {1024x1204} -variable pbin(buffersize) -value 1024
    $m add radiobutton -label {2048x2048} -variable pbin(buffersize) -value 2048
    $m add radiobutton -label {4096x4096} -variable pbin(buffersize) -value 4096
    $m add radiobutton -label {8192x8192} -variable pbin(buffersize) -value 8192

    pack $f -side top -fill both -expand true
}

proc PrefsDialogBin {} {
    global dprefs

    set w $dprefs(tab)

    $dprefs(listbox) insert {} end -id [ttk::frame $w.bin] \
	-text [msgcat::mc {Bin}]

    # Mouse
    set f [ttk::labelframe $w.bin.mouse -text [msgcat::mc {Mouse Wheel Bin}]]

    ttk::checkbutton $f.click -text [msgcat::mc {Enable}] \
	-variable pbin(wheel)
    ttk::label $f.title2 -text [msgcat::mc {Factor}]
    ttk::entry $f.factor -textvariable pbin(wheel,factor) -width 10

    grid $f.click $f.title2 $f.factor -padx 2 -pady 2 -sticky w

    pack $w.bin.mouse -side top -fill both -expand true
}

# Buttons

proc ButtonsBinDef {} {
    global pbuttons

    array set pbuttons {
	bin,average 0
	bin,sum 0
	bin,in 1
	bin,out 1
	bin,fit 1
	bin,1 1
	bin,2 1
	bin,4 1
	bin,8 1
	bin,16 1
	bin,32 1
	bin,64 1
	bin,128 0
	bin,256 0
	bin,128x 0
	bin,256x 0
	bin,512x 0
	bin,1024x 0
	bin,2048x 0
	bin,4096x 0
	bin,8192x 0
	bin,params 0
    }
}

proc CreateButtonsBin {} {
    global buttons
    global ds9

    ttk::frame $ds9(buttons).bin

    RadioButton $ds9(buttons).bin.average \
	[string tolower [msgcat::mc {Average}]] \
	bin(function) average ChangeBinFunction
    RadioButton $ds9(buttons).bin.sum \
	[string tolower [msgcat::mc {Sum}]] \
	bin(function) sum ChangeBinFunction

    ButtonButton $ds9(buttons).bin.in \
	[string tolower [msgcat::mc {Bin In}]] {Bin .5 .5}
    ButtonButton $ds9(buttons).bin.out \
	[string tolower [msgcat::mc {Bin Out}]] {Bin 2 2}
    ButtonButton $ds9(buttons).bin.fit \
	[string tolower [msgcat::mc {Bin Fit}]] BinToFit

    RadioButton $ds9(buttons).bin.1 \
	"[string tolower [msgcat::mc {Bin}]] 1" \
	bin(factor) {1 1} ChangeBinFactor
    RadioButton $ds9(buttons).bin.2 \
	"[string tolower [msgcat::mc {Bin}]] 2" \
	bin(factor) {2 2} ChangeBinFactor
    RadioButton $ds9(buttons).bin.4 \
	"[string tolower [msgcat::mc {Bin}]] 4" \
	bin(factor) {4 4} ChangeBinFactor
    RadioButton $ds9(buttons).bin.8 \
	"[string tolower [msgcat::mc {Bin}]] 8" \
	bin(factor) {8 8} ChangeBinFactor
    RadioButton $ds9(buttons).bin.16 \
	"[string tolower [msgcat::mc {Bin}]] 16" \
	bin(factor) {16 16} ChangeBinFactor
    RadioButton $ds9(buttons).bin.32 \
	"[string tolower [msgcat::mc {Bin}]] 32" \
	bin(factor) {32 32} ChangeBinFactor
    RadioButton $ds9(buttons).bin.64 \
	"[string tolower [msgcat::mc {Bin}]] 64" \
	bin(factor) {64 64} ChangeBinFactor
    RadioButton $ds9(buttons).bin.128 \
	"[string tolower [msgcat::mc {Bin}]] 128" \
	bin(factor) {128 128} ChangeBinFactor
    RadioButton $ds9(buttons).bin.256 \
	"[string tolower [msgcat::mc {Bin}]] 256" \
	bin(factor) {256 256} ChangeBinFactor

    RadioButton $ds9(buttons).bin.128x {128x128} \
	bin(buffersize) 128 ChangeBinBufferSize 
    RadioButton $ds9(buttons).bin.256x {256x256} \
	bin(buffersize) 256 ChangeBinBufferSize 
    RadioButton $ds9(buttons).bin.512x {512x512} \
	bin(buffersize) 512 ChangeBinBufferSize 
    RadioButton $ds9(buttons).bin.1024x {1024x1024} \
	bin(buffersize) 1024 ChangeBinBufferSize 
    RadioButton $ds9(buttons).bin.2048x {2048x2048} \
	bin(buffersize) 2048 ChangeBinBufferSize 
    RadioButton $ds9(buttons).bin.4096x {4096x4096} \
	bin(buffersize) 4096 ChangeBinBufferSize 
    RadioButton $ds9(buttons).bin.8192x {8192x8192} \
	bin(buffersize) 8192 ChangeBinBufferSize

    ButtonButton $ds9(buttons).bin.params \
	[string tolower [msgcat::mc {Parameters}]] BinDialog

    set buttons(bin) "
	$ds9(buttons).bin.average pbuttons(bin,average)
	$ds9(buttons).bin.sum pbuttons(bin,sum)
	$ds9(buttons).bin.in pbuttons(bin,in)
	$ds9(buttons).bin.out pbuttons(bin,out)
	$ds9(buttons).bin.fit pbuttons(bin,fit)
	$ds9(buttons).bin.1 pbuttons(bin,1)
	$ds9(buttons).bin.2 pbuttons(bin,2)
	$ds9(buttons).bin.4 pbuttons(bin,4)
	$ds9(buttons).bin.8 pbuttons(bin,8)
	$ds9(buttons).bin.16 pbuttons(bin,16)
	$ds9(buttons).bin.32 pbuttons(bin,32)
	$ds9(buttons).bin.64 pbuttons(bin,64)
	$ds9(buttons).bin.128 pbuttons(bin,128)
	$ds9(buttons).bin.256 pbuttons(bin,256)
	$ds9(buttons).bin.128x pbuttons(bin,128x)
	$ds9(buttons).bin.256x pbuttons(bin,256x)
	$ds9(buttons).bin.512x pbuttons(bin,512x)
	$ds9(buttons).bin.1024x pbuttons(bin,1024x)
	$ds9(buttons).bin.2048x pbuttons(bin,2048x)
	$ds9(buttons).bin.4096x pbuttons(bin,4096x)
	$ds9(buttons).bin.8192x pbuttons(bin,8192x)
	$ds9(buttons).bin.params pbuttons(bin,params)
    "
}

proc PrefsDialogButtonbarBin {f} {
    global buttons
    global pbuttons

    ttk::menubutton $f -text [msgcat::mc {Buttonbar}] -menu $f.menu

    set m $f.menu
    ThemeMenu $m
    $m add checkbutton -label [msgcat::mc {Average}] \
	-variable pbuttons(bin,average) -command {UpdateButtons buttons(bin)}
    $m add checkbutton -label [msgcat::mc {Sum}] \
	-variable pbuttons(bin,sum) -command {UpdateButtons buttons(bin)}
    $m add separator
    $m add checkbutton -label [msgcat::mc {Bin In}] \
	-variable pbuttons(bin,in) -command {UpdateButtons buttons(bin)}
    $m add checkbutton -label [msgcat::mc {Bin Out}] \
	-variable pbuttons(bin,out) -command {UpdateButtons buttons(bin)}
    $m add checkbutton -label [msgcat::mc {Bin Fit}] \
	-variable pbuttons(bin,fit) -command {UpdateButtons buttons(bin)}
    $m add separator
    $m add checkbutton -label "[msgcat::mc {Bin}] 1" \
	-variable pbuttons(bin,1) -command {UpdateButtons buttons(bin)}
    $m add checkbutton -label "[msgcat::mc {Bin}] 2" \
	-variable pbuttons(bin,2) -command {UpdateButtons buttons(bin)}
    $m add checkbutton -label "[msgcat::mc {Bin}] 4" \
	-variable pbuttons(bin,4) -command {UpdateButtons buttons(bin)}
    $m add checkbutton -label "[msgcat::mc {Bin}] 8" \
	-variable pbuttons(bin,8) -command {UpdateButtons buttons(bin)}
    $m add checkbutton -label "[msgcat::mc {Bin}] 16" \
	-variable pbuttons(bin,16) -command {UpdateButtons buttons(bin)}
    $m add checkbutton -label "[msgcat::mc {Bin}] 32" \
	-variable pbuttons(bin,32) -command {UpdateButtons buttons(bin)}
    $m add checkbutton -label "[msgcat::mc {Bin}] 64" \
	-variable pbuttons(bin,64) -command {UpdateButtons buttons(bin)}
    $m add checkbutton -label "[msgcat::mc {Bin}] 128" \
	-variable pbuttons(bin,128) -command {UpdateButtons buttons(bin)}
    $m add checkbutton -label "[msgcat::mc {Bin}] 256" \
	-variable pbuttons(bin,256) -command {UpdateButtons buttons(bin)}
    $m add separator
    $m add checkbutton -label {128x128} \
	-variable pbuttons(bin,128x) -command {UpdateButtons buttons(bin)} 
    $m add checkbutton -label {256x256} \
	-variable pbuttons(bin,256x) -command {UpdateButtons buttons(bin)} 
    $m add checkbutton -label {512x512} \
	-variable pbuttons(bin,512x) -command {UpdateButtons buttons(bin)} 
    $m add checkbutton -label {1024x1204} \
	-variable pbuttons(bin,1024x) -command {UpdateButtons buttons(bin)}
    $m add checkbutton -label {2048x2048} \
	-variable pbuttons(bin,2048x) -command {UpdateButtons buttons(bin)}
    $m add checkbutton -label {4096x4096} \
	-variable pbuttons(bin,4096x) -command {UpdateButtons buttons(bin)}
    $m add checkbutton -label {8192x8192} \
	-variable pbuttons(bin,8192x) -command {UpdateButtons buttons(bin)}
    $m add separator
    $m add checkbutton -label "[msgcat::mc {Binning Parameters}]..." \
	-variable pbuttons(bin,params) -command {UpdateButtons buttons(bin)}
}

# Support

proc UpdateBinMenu {} {
    global ds9
    global current
    global bin

    global debug
    if {$debug(tcl,update)} {
	puts stderr "UpdateBinMenu"
    }

    if {$current(frame) != {}} {
	if {[$current(frame) has fits]} {
	    if {[$current(frame) has fits bin]} {
		$ds9(mb) entryconfig [msgcat::mc {Bin}] -state normal
		ConfigureButtons bin normal
	    } else {
		$ds9(mb) entryconfig [msgcat::mc {Bin}] -state disabled
		ConfigureButtons bin disabled
	    }
	} else {
	    $ds9(mb) entryconfig [msgcat::mc {Bin}] -state normal
	    ConfigureButtons bin normal
	}

	set bin(function) [$current(frame) get bin function]
	set bin(factor) "[$current(frame) get bin factor]"
	set bin(depth) [$current(frame) get bin depth]
	set bin(buffersize) [$current(frame) get bin buffer size]
    } else {
	$ds9(mb) entryconfig [msgcat::mc {Bin}] -state disabled
	ConfigureButtons bin disabled
    }
}

