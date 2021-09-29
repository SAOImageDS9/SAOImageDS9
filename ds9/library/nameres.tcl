#  Copyright (C) 1999-2021
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc NRESDef {} {
    global nres
    global inres
    global pnres

    set inres(top) .nres
    set inres(mb) .nresmb

    # set via wcs()
    set nres(system) wcs
    set nres(sky) fk5
    set nres(skyformat) degrees

    # prefs only
    set pnres(server) simbad-cds
}

proc NRESApply {varname sync} {
    upvar #0 $varname var
    global $varname

    set var(sync) $sync
    ARApply $varname
    if {$var(name)!={}} {
	NSVRServer $varname
    } else {
	ARError $varname "Please specify an Object Name"
    }
}

proc NRESDialog {} {
    global nres
    global inres

    global ds9
    global pds9

    if {[winfo exists $inres(top)]} {
	raise $inres(top)
	return
    }

    set varname dnres
    upvar #0 $varname var
    global $varname

    # AR variables
    ARInit $varname {}

    # Variables
    set var(top) $inres(top)
    set var(mb) $inres(mb)
    set var(system) $nres(system)
    set var(sky) $nres(sky)
    set var(skyformat) $nres(skyformat)

    # create the window
    set w $var(top)
    set mb $var(mb)

    Toplevel $w $mb 6 [msgcat::mc {Name Resolution}] "ARDestroy $varname"

    # file
    $mb add cascade -label File -menu $mb.file
    ThemeMenu $mb.file
    $mb.file add command -label [msgcat::mc {Retrieve}] \
	-command "NRESApply $varname 0"
    $mb.file add command -label [msgcat::mc {Cancel}] \
	-command "ARCancel $varname"
    $mb.file add separator
    $mb.file add command -label [msgcat::mc {Pan To}] \
	-command "NRESPan $varname"
    $mb.file add command -label [msgcat::mc {Crosshair To}] \
	-command "NRESCrosshair $varname"
    $mb.file add separator
    $mb.file add command -label [msgcat::mc {Close}] \
	-command "ARDestroy $varname" -accelerator "${ds9(ctrl)}W"

    # edit
    AREditMenu $varname

    # name server
    NSVRServerMenu $varname

    # Param
    set f [ttk::frame $w.param]
    ttk::label $f.nametitle -text [msgcat::mc {Object}]
    ttk::entry $f.name -textvariable ${varname}(name) -width 48
    ttk::label $f.sky -textvariable ${varname}(sky) -anchor w
    set var(xname) [ttk::label $f.xtitle -text {} -width 1]
    ttk::label $f.x -textvariable ${varname}(x) -width 14 -relief groove
    set var(yname) [ttk::label $f.ytitle -text {} -width 1]
    ttk::label $f.y -textvariable ${varname}(y) -width 14 -relief groove
    ARSkyFormat $f.skyformat $varname
    grid $f.nametitle x $f.name - - - - -padx 2 -pady 2 -sticky w
    grid $f.sky $f.xtitle $f.x $f.ytitle $f.y $f.skyformat \
	-padx 2 -pady 2 -sticky w

    # Status
    set f [ttk::frame $w.status]
    ttk::label $f.tstatus -text [msgcat::mc {Status}]
    ttk::label $f.status -textvariable ${varname}(status)
    grid $f.tstatus $f.status -padx 2 -pady 2 -sticky w

    # Buttons
    set f [ttk::frame $w.buttons]
    set var(apply) [ttk::button $f.apply -text [msgcat::mc {Retrieve}] \
			-command "NRESApply $varname 0"]
    set var(cancel) [ttk::button $f.cancel -text [msgcat::mc {Cancel}] \
			 -command "ARCancel  $varname" -state disabled]
    ttk::button $f.close -text [msgcat::mc {Close}] \
	-command "ARDestroy $varname"
    pack $f.apply $f.cancel $f.close -side left -expand true -padx 2 -pady 4

    # Fini
    ttk::separator $w.sep -orient horizontal
    ttk::separator $w.sep2 -orient horizontal
    pack $w.buttons $w.sep $w.status $w.sep2 -side bottom -fill x
    pack $w.param -side top -fill both -expand true

    bind $w <<Close>> [list ARDestroy $varname]

    ARCoord $varname
    ARStatus $varname {}
}

proc NRESPan {varname} {
    upvar #0 $varname var
    global $varname

    if {($var(x) != {}) && ($var(y) != {})} {
	PanTo $var(x) $var(y) $var(system) $var(sky)
    }
}

proc NRESCrosshair {varname} {
    upvar #0 $varname var
    global $varname

    global current

    if {($current(frame) != {})} {
	if {[$current(frame) has wcs celestial $var(system)]} {
	    if {($var(x) != {}) && ($var(y) != {})} {
		set current(mode) crosshair
		ChangeMode
		$current(frame) crosshair \
		    $var(system) $var(sky) $var(x) $var(y)
	    }
	}
    }
}

# Prefs

proc PrefsDialogNRES {} {
    global dprefs

    set w $dprefs(tab)

    $dprefs(listbox) insert {} end -id [ttk::frame $w.namesvr] \
	-text [msgcat::mc {Name Server}]

    set f [ttk::labelframe $w.namesvr.params -text [msgcat::mc {Name Server}]]

    ttk::label $f.tsvr -text [msgcat::mc {Default}]
    ttk::menubutton $f.svr -textvariable pnres(server) -menu $f.svr.menu

    ThemeMenu $f.svr.menu
    NSVRServerMenuItems $f.svr.menu

    grid $f.tsvr $f.svr -padx 2 -pady 2 -sticky w

    pack $f -side top -fill both -expand true
}

# Process Cmds

proc ProcessNRESCmd {varname iname} {
    upvar $varname var
    upvar $iname i

    NRESDialog

    nres::YY_FLUSH_BUFFER
    nres::yy_scan_string [lrange $var $i end]
    nres::yyparse
    incr i [expr $nres::yycnt-1]
}

proc ProcessSendNRESCmd {proc id param {sock {}} {fn {}}} {
    global parse
    set parse(proc) $proc
    set parse(id) $id

    NRESDialog

    nressend::YY_FLUSH_BUFFER
    nressend::yy_scan_string $param
    nressend::yyparse
}

proc NRESSendCmd {name} {
    global parse
    global dnres
    
    set dnres(name) $name
    NRESApply dnres 1
    $parse(proc) $parse(id) "$dnres(x) $dnres(y)\n"
}
