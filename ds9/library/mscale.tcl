#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

# Menu

proc ScaleMainMenu {} {
    global ds9

    menu $ds9(mb).scale
    $ds9(mb).scale add radiobutton -label [msgcat::mc {Linear}] \
	-variable scale(type) -command ChangeScale -value linear
    $ds9(mb).scale add radiobutton -label [msgcat::mc {Log}] \
	-variable scale(type) -command ChangeScale -value log
    $ds9(mb).scale add radiobutton -label [msgcat::mc {Power}] \
	-variable scale(type) -command ChangeScale -value pow
    $ds9(mb).scale add radiobutton -label [msgcat::mc {Square Root}] \
	-variable scale(type) -command ChangeScale -value sqrt
    $ds9(mb).scale add radiobutton -label [msgcat::mc {Squared}] \
	-variable scale(type) -command ChangeScale -value squared
    $ds9(mb).scale add radiobutton -label {ASINH} \
	-variable scale(type) -command ChangeScale -value asinh
    $ds9(mb).scale add radiobutton -label {SINH} \
	-variable scale(type) -command ChangeScale -value sinh
    $ds9(mb).scale add radiobutton \
	-label [msgcat::mc {Histogram Equalization}] \
	-variable scale(type) -command ChangeScale -value histequ
    $ds9(mb).scale add separator
    $ds9(mb).scale add command -label "[msgcat::mc {Log Exponent}]..." \
	-command ScaleLogDialog
    $ds9(mb).scale add separator
    $ds9(mb).scale add radiobutton -label [msgcat::mc {Min Max}] \
        -variable scale(mode) -command ChangeScaleMode -value minmax
    $ds9(mb).scale add radiobutton -label {99.5%} \
	-variable scale(mode) -command ChangeScaleMode -value 99.5
    $ds9(mb).scale add radiobutton -label {99%} \
	-variable scale(mode) -command ChangeScaleMode -value 99
    $ds9(mb).scale add radiobutton -label {98%} \
	-variable scale(mode) -command ChangeScaleMode -value 98
    $ds9(mb).scale add radiobutton -label {97%} \
	-variable scale(mode) -command ChangeScaleMode -value 97
    $ds9(mb).scale add radiobutton -label {96%} \
	-variable scale(mode) -command ChangeScaleMode -value 96
    $ds9(mb).scale add radiobutton -label {95%} \
	-variable scale(mode) -command ChangeScaleMode -value 95
    $ds9(mb).scale add radiobutton -label {92.5%} \
	-variable scale(mode) -command ChangeScaleMode -value 92.5
    $ds9(mb).scale add radiobutton -label {90%} \
	-variable scale(mode) -command ChangeScaleMode -value 90
    $ds9(mb).scale add radiobutton -label {ZScale} \
	-variable scale(mode) 	-command ChangeScaleMode -value zscale
    $ds9(mb).scale add radiobutton -label {ZMax} \
	-variable scale(mode) -command ChangeScaleMode -value zmax
    $ds9(mb).scale add radiobutton -label [msgcat::mc {User}] \
	-variable scale(mode) -command ChangeScaleMode -value user
    $ds9(mb).scale add separator
    $ds9(mb).scale add radiobutton -label [msgcat::mc {Global}] \
	-variable scale(scope) -command ChangeScaleScope -value global
    $ds9(mb).scale add radiobutton -label [msgcat::mc {Local}] \
	-variable scale(scope) -command ChangeScaleScope -value local
    $ds9(mb).scale add separator
    $ds9(mb).scale add cascade -label [msgcat::mc {Min Max}] \
	-menu $ds9(mb).scale.minmax
    $ds9(mb).scale add command -label {ZScale...} -command ZScaleDialog
    $ds9(mb).scale add separator
    $ds9(mb).scale add checkbutton -label "[msgcat::mc {Use}] DATASEC" \
	-variable scale(datasec) -command ChangeDATASEC
    $ds9(mb).scale add separator
    $ds9(mb).scale add command -label "[msgcat::mc {Scale Parameters}]..." \
	-command ScaleDialog

    menu $ds9(mb).scale.minmax
    $ds9(mb).scale.minmax add radiobutton -label [msgcat::mc {Scan}] \
	-variable minmax(mode) -value scan -command ChangeMinMax
    $ds9(mb).scale.minmax add radiobutton -label [msgcat::mc {Sample}] \
	-variable minmax(mode) -value sample -command ChangeMinMax
    $ds9(mb).scale.minmax add radiobutton -label {DATAMIN DATAMAX} \
	-variable minmax(mode) -value datamin -command ChangeMinMax
    $ds9(mb).scale.minmax add radiobutton -label {IRAF-MIN IRAF-MAX} \
	-variable minmax(mode) -value irafmin -command ChangeMinMax
    $ds9(mb).scale.minmax add separator
    $ds9(mb).scale.minmax add command \
	-label "[msgcat::mc {Sample Parameters}]..." -command MinMaxDialog
}

proc PrefsDialogScaleMenu {w} {
    set f [ttk::labelframe $w.mscale -text [msgcat::mc {Scale}]]

    ttk::menubutton $f.menu -text [msgcat::mc {Menu}] -menu $f.menu.menu
    PrefsDialogButtonbarScale $f.buttonbar

    grid $f.menu $f.buttonbar -padx 2 -pady 2 -sticky w
    
    set m $f.menu.menu
    menu $m
    $m add radiobutton -label [msgcat::mc {Linear}] \
	-variable pscale(type) -value linear
    $m add radiobutton -label [msgcat::mc {Log}] \
	-variable pscale(type) -value log
    $m add radiobutton -label [msgcat::mc {Power}] \
	-variable pscale(type) -value pow
    $m add radiobutton -label [msgcat::mc {Square Root}]\
	-variable pscale(type) -value sqrt
    $m add radiobutton -label [msgcat::mc {Squared}] \
	-variable pscale(type) -value squared
    $m add radiobutton -label {ASINH} \
	-variable pscale(type) -value asinh
    $m add radiobutton -label {SINH} \
	-variable pscale(type) -value sinh
    $m add radiobutton -label [msgcat::mc {Histogram Equalization}] \
	-variable pscale(type) -value histequ
    $m add separator
    $m add radiobutton -label  [msgcat::mc {Min Max}] \
	-variable pscale(mode) -value minmax
    $m add radiobutton -label {99.5%} -variable pscale(mode) -value 99.5
    $m add radiobutton -label {99%} -variable pscale(mode) -value 99
    $m add radiobutton -label {98%} -variable pscale(mode) -value 98
    $m add radiobutton -label {97%} -variable pscale(mode) -value 97
    $m add radiobutton -label {96%} -variable pscale(mode) -value 96
    $m add radiobutton -label {95%} -variable pscale(mode) -value 95
    $m add radiobutton -label {92.5%} -variable pscale(mode) -value 92.5
    $m add radiobutton -label {90%} -variable pscale(mode) -value 90
    $m add radiobutton -label {ZScale} -variable pscale(mode) -value zscale
    $m add radiobutton -label {ZMax} -variable pscale(mode) -value zmax
    $m add radiobutton -label [msgcat::mc {User}] \
	-variable pscale(mode) -value user
    $m add separator
    $m add radiobutton -label [msgcat::mc {Global}] \
	-variable pscale(scope) -value global
    $m add radiobutton -label [msgcat::mc {Local}] \
	-variable pscale(scope) -value local
    $m add separator
    $m add cascade -label [msgcat::mc {Min Max}] -menu $m.minmax
    $m add separator
    $m add checkbutton -label "[msgcat::mc {Use}] DATASEC" \
	-variable pscale(datasec)

    menu $m.minmax
    $m.minmax add radiobutton -label [msgcat::mc {Scan}] \
	-variable pminmax(mode) -value scan
    $m.minmax add radiobutton -label [msgcat::mc {Sample}] \
	-variable pminmax(mode) -value sample
    $m.minmax add radiobutton -label {DATAMIN DATAMAX} \
	-variable pminmax(mode) -value datamin
    $m.minmax add radiobutton -label {IRAF-MIN IRAF-MAX} \
	-variable pminmax(mode) -value irafmin

    pack $f -side top -fill both -expand true
}

proc PrefsDialogScale {} {
    global dprefs

    set w $dprefs(tab)

    $dprefs(list) insert end [msgcat::mc {Scale}]
    lappend dprefs(tabs) [ttk::frame $w.scale]

    # Log
    set f [ttk::labelframe $w.scale.log -text [msgcat::mc {Log Exponent}]]

    ttk::entry $f.log -textvariable pscale(log) -width 10
   
    grid $f.log -padx 2 -pady 2 -sticky w

    # MinMax
    set f [ttk::labelframe $w.scale.minmax \
	       -text [msgcat::mc {Min Max Parameters}]]

    slider $f.ssample 0 1000 [msgcat::mc {Sample Increment}] \
	pminmax(sample) {}

    grid $f.ssample -padx 2 -pady 2 -sticky ew
    grid columnconfigure $f 0 -weight 1

    # Zscale
    set f [ttk::labelframe $w.scale.zscale \
	       -text [msgcat::mc {ZScale Parameters}]]

    slider $f.scontrast 0. 1. [msgcat::mc {Contrast}] \
	pzscale(contrast) {}
    slider $f.ssize 0 1000 [msgcat::mc {Number of Samples}] \
	pzscale(sample) {}
    slider $f.sline 0 500 [msgcat::mc {Samples per Line}] \
	pzscale(line) {}

    grid $f.scontrast -padx 2 -pady 2 -sticky ew
    grid $f.ssize -padx 2 -pady 2 -sticky ew
    grid $f.sline -padx 2 -pady 2 -sticky ew
    grid columnconfigure $f 0 -weight 1

    pack $w.scale.log $w.scale.minmax $w.scale.zscale -side top -fill both -expand true
}

# Buttons

proc ButtonsScaleDef {} {
    global pbuttons

    array set pbuttons {
	scale,linear 1
	scale,log 1
	scale,pow 1
	scale,sqrt 1
	scale,squared 1
	scale,asinh 1
	scale,sinh 1
	scale,hist 1
	scale,minmax 1
	scale,995 0
	scale,99 0
	scale,98 0
	scale,97 0
	scale,96 0
	scale,95 0
	scale,925 0
	scale,90 0
	scale,zscale 1
	scale,zmax 0
	scale,user 0
	scale,global 0
	scale,local 0
	scale,datasec 0
	scale,params 0
    }
}

proc CreateButtonsScale {} {
    global buttons
    global ds9
    global scale

    ttk::frame $ds9(buttons).scale
    RadioButton $ds9(buttons).scale.linear \
	[string tolower [msgcat::mc {Linear}]] \
	scale(type) linear ChangeScale
    RadioButton $ds9(buttons).scale.log \
	[string tolower [msgcat::mc {Log}]] \
	scale(type) log ChangeScale
    RadioButton $ds9(buttons).scale.pow \
	[string tolower [msgcat::mc {Power}]] \
	scale(type) pow ChangeScale
    RadioButton $ds9(buttons).scale.sqrt \
	[string tolower [msgcat::mc {Sqrt}]] \
	scale(type) sqrt ChangeScale
    RadioButton $ds9(buttons).scale.squared \
	[string tolower [msgcat::mc {Squared}]] \
	scale(type) squared ChangeScale
    RadioButton $ds9(buttons).scale.asinh \
	[string tolower {ASINH}] \
	scale(type) asinh ChangeScale
    RadioButton $ds9(buttons).scale.sinh \
	[string tolower {SINH}] \
	scale(type) sinh ChangeScale
    RadioButton $ds9(buttons).scale.hist \
	[string tolower [msgcat::mc {Histogram}]] \
	scale(type) histequ ChangeScale

    RadioButton $ds9(buttons).scale.minmax \
	[string tolower [msgcat::mc {Min Max}]] \
	scale(mode) minmax ChangeScaleMode
    RadioButton $ds9(buttons).scale.995 {99.5%} scale(mode) 99.5 ChangeScaleMode
    RadioButton $ds9(buttons).scale.99 {99%} scale(mode) 99 ChangeScaleMode
    RadioButton $ds9(buttons).scale.98 {98%} scale(mode) 98 ChangeScaleMode
    RadioButton $ds9(buttons).scale.97 {97%} scale(mode) 97 ChangeScaleMode
    RadioButton $ds9(buttons).scale.96 {96%} scale(mode) 96 ChangeScaleMode
    RadioButton $ds9(buttons).scale.95 {95%} scale(mode) 95 ChangeScaleMode
    RadioButton $ds9(buttons).scale.925 {92.5%} scale(mode) 92.5 ChangeScaleMode
    RadioButton $ds9(buttons).scale.90 {90%} scale(mode) 90 ChangeScaleMode
    RadioButton $ds9(buttons).scale.zscale {zscale} \
	scale(mode) zscale ChangeScaleMode
    RadioButton $ds9(buttons).scale.zmax {zmax} \
	scale(mode) zmax ChangeScaleMode
    RadioButton $ds9(buttons).scale.user \
	[string tolower [msgcat::mc {User}]] \
	scale(mode) user ChangeScaleMode

    RadioButton $ds9(buttons).scale.global \
	[string tolower [msgcat::mc {Global}]] \
	scale(scope) global ChangeScaleScope
    RadioButton $ds9(buttons).scale.local \
	[string tolower [msgcat::mc {Local}]] \
	scale(scope) local ChangeScaleScope

    CheckButton $ds9(buttons).scale.datasec {datasec} \
	scale(datasec) ChangeDATASEC

    ButtonButton $ds9(buttons).scale.params \
	[string tolower [msgcat::mc {Parameters}]] ScaleDialog

    set buttons(scale) "
	$ds9(buttons).scale.linear pbuttons(scale,linear)
	$ds9(buttons).scale.log pbuttons(scale,log)
	$ds9(buttons).scale.pow pbuttons(scale,pow)
	$ds9(buttons).scale.sqrt pbuttons(scale,sqrt)
	$ds9(buttons).scale.squared pbuttons(scale,squared)
	$ds9(buttons).scale.asinh pbuttons(scale,asinh)
	$ds9(buttons).scale.sinh pbuttons(scale,sinh)
	$ds9(buttons).scale.hist pbuttons(scale,hist)
	$ds9(buttons).scale.minmax pbuttons(scale,minmax)
	$ds9(buttons).scale.995 pbuttons(scale,995)
	$ds9(buttons).scale.99 pbuttons(scale,99)
	$ds9(buttons).scale.98 pbuttons(scale,98)
	$ds9(buttons).scale.97 pbuttons(scale,97)
	$ds9(buttons).scale.96 pbuttons(scale,96)
	$ds9(buttons).scale.95 pbuttons(scale,95)
	$ds9(buttons).scale.925 pbuttons(scale,925)
	$ds9(buttons).scale.90 pbuttons(scale,90)
	$ds9(buttons).scale.zscale pbuttons(scale,zscale)
	$ds9(buttons).scale.zmax pbuttons(scale,zmax)
	$ds9(buttons).scale.user pbuttons(scale,user)
	$ds9(buttons).scale.global pbuttons(scale,global)
	$ds9(buttons).scale.local pbuttons(scale,local)
	$ds9(buttons).scale.datasec pbuttons(scale,datasec)
	$ds9(buttons).scale.params pbuttons(scale,params)
    "
}

proc PrefsDialogButtonbarScale {f} {
    global buttons
    global pbuttons

    ttk::menubutton $f -text [msgcat::mc {Buttonbar}] -menu $f.menu
    
    set m $f.menu
    menu $m
    $m add checkbutton -label [msgcat::mc {Linear}] \
	-variable pbuttons(scale,linear) -command {UpdateButtons buttons(scale)}
    $m add checkbutton -label [msgcat::mc {Log}] \
	-variable pbuttons(scale,log) -command {UpdateButtons buttons(scale)}
    $m add checkbutton -label [msgcat::mc {Power}] \
	-variable pbuttons(scale,pow) -command {UpdateButtons buttons(scale)}
    $m add checkbutton -label [msgcat::mc {Square Root}] \
	-variable pbuttons(scale,sqrt) -command {UpdateButtons buttons(scale)}
    $m add checkbutton -label [msgcat::mc {Squared}] \
	-variable pbuttons(scale,squared) -command {UpdateButtons buttons(scale)}
    $m add checkbutton -label {ASINH} \
	-variable pbuttons(scale,asinh) -command {UpdateButtons buttons(scale)}
    $m add checkbutton -label {SINH} \
	-variable pbuttons(scale,sinh) -command {UpdateButtons buttons(scale)}
    $m add checkbutton -label [msgcat::mc {Histogram Equalization}] \
	-variable pbuttons(scale,hist) -command {UpdateButtons buttons(scale)}
    $m add separator
    $m add checkbutton -label [msgcat::mc {Min Max}] \
        -variable pbuttons(scale,minmax) -command {UpdateButtons buttons(scale)}
    $m add checkbutton -label {99.5%} \
	-variable pbuttons(scale,995) -command {UpdateButtons buttons(scale)}
    $m add checkbutton -label {99%} \
	-variable pbuttons(scale,99) -command {UpdateButtons buttons(scale)}
    $m add checkbutton -label {98%} \
	-variable pbuttons(scale,98) -command {UpdateButtons buttons(scale)}
    $m add checkbutton -label {97%} \
	-variable pbuttons(scale,97) -command {UpdateButtons buttons(scale)}
    $m add checkbutton -label {96%} \
	-variable pbuttons(scale,96) -command {UpdateButtons buttons(scale)}
    $m add checkbutton -label {95%} \
	-variable pbuttons(scale,95) -command {UpdateButtons buttons(scale)}
    $m add checkbutton -label {92.5%} \
	-variable pbuttons(scale,925) -command {UpdateButtons buttons(scale)}
    $m add checkbutton -label {90%} \
	-variable pbuttons(scale,90) -command {UpdateButtons buttons(scale)}
    $m add checkbutton -label {ZScale} \
	-variable pbuttons(scale,zscale) -command {UpdateButtons buttons(scale)}
    $m add checkbutton -label {ZMax} \
	-variable pbuttons(scale,zmax) -command {UpdateButtons buttons(scale)}
    $m add checkbutton -label [msgcat::mc {User}] \
	-variable pbuttons(scale,user) -command {UpdateButtons buttons(scale)}
    $m add separator
    $m add checkbutton -label [msgcat::mc {Global}] \
	-variable pbuttons(scale,global) -command {UpdateButtons buttons(scale)}
    $m add checkbutton -label [msgcat::mc {Local}] \
	-variable pbuttons(scale,local) -command {UpdateButtons buttons(scale)}
    $m add separator
    $m add checkbutton -label "[msgcat::mc {Use}] DATASEC" \
	-variable pbuttons(scale,datasec) -command {UpdateButtons buttons(scale)}
    $m add separator
    $m add checkbutton -label "[msgcat::mc {Scale Parameters}]..." \
	-variable pbuttons(scale,params) -command {UpdateButtons buttons(scale)}
}

# Support

proc UpdateScaleMenu {} {
    global ds9
    global current
    global scale

    global debug
    if {$debug(tcl,update)} {
	puts stderr "UpdateScaleMenu"
    }

    if {$current(frame) != {}} {
	if {![$current(frame) has iis]} {
	    $ds9(mb) entryconfig [msgcat::mc {Scale}] -state normal

	    set scale(type) [$current(frame) get colorscale]
	    set scale(log) [$current(frame) get colorscale log]
	    set scale(scope) [$current(frame) get clip scope]
	    set scale(mode) [$current(frame) get clip mode]
	    set scale(datasec) [$current(frame) get datasec]
	    set minmax(sample) [$current(frame) get clip minmax sample]
	    set minmax(mode) [$current(frame) get clip minmax mode]
	    set zscale(contrast) [$current(frame) get clip zscale contrast]
	    set zscale(sample) [$current(frame) get clip zscale sample]
	    set zscale(line) [$current(frame) get clip zscale line]

	    # DATAMIN/MAX IRAFMIN/MAX
	    if {[$current(frame) has fits]} {
		if {[$current(frame) has datamin]} {
		    $ds9(mb).scale.minmax entryconfig {DATAMIN DATAMAX} \
			-state normal
		} else {
		    $ds9(mb).scale.minmax entryconfig {DATAMIN DATAMAX} \
			-state disabled
		}

		if {[$current(frame) has irafmin]} {
		    $ds9(mb).scale.minmax entryconfig {IRAF-MIN IRAF-MAX} \
			-state normal
		} else {
		    $ds9(mb).scale.minmax entryconfig {IRAF-MIN IRAF-MAX} \
			-state disabled
		}
	    } else {
		$ds9(mb).scale.minmax entryconfig {DATAMIN DATAMAX} \
		    -state normal
		$ds9(mb).scale.minmax entryconfig {IRAF-MIN IRAF-MAX} \
		    -state normal
	    }
	    
	} else {
	    $ds9(mb) entryconfig [msgcat::mc {Scale}] -state disabled
	}
    } else {
	$ds9(mb) entryconfig [msgcat::mc {Scale}] -state disabled
    }
}

