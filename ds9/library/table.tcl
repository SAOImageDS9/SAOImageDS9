#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc TBLGetURL {varname url query} {
    upvar #0 $varname var
    global $varname

    # save just in case of redirection
    set var(qq) $query

    ARStatus $varname [msgcat::mc {Loading}]

    global ihttp
    if {$var(sync)} {
	if {![catch {set var(token) [http::geturl $url \
					 -query $query \
					 -timeout $ihttp(timeout) \
					 -headers "[ProxyHTTP]"]
	}]} {
	    # reset errorInfo (may be set in http::geturl)
	    global errorInfo
	    set errorInfo {}

	    set var(active) 1
	    TBLGetURLFinish $varname $var(token)
	} else {
	    eval [list $var(proc,error) $varname "[msgcat::mc {Unable to locate URL}] $url"]
	}
    } else {
	if {![catch {set var(token) [http::geturl $url \
					 -query $query \
					 -timeout $ihttp(timeout) \
					 -command \
					 [list TBLGetURLFinish $varname] \
					 -headers "[ProxyHTTP]"]
	}]} {
	    # reset errorInfo (may be set in http::geturl)
	    global errorInfo
	    set errorInfo {}

	    set var(active) 1
	} else {
	    eval [list $var(proc,error) $varname "[msgcat::mc {Unable to locate URL}] $url"]
	}
    }
}

proc TBLGetURLFinish {varname token} {
    upvar #0 $varname var
    global $varname

    if {!($var(active))} {
	ARCancelled $varname
	return
    }

    upvar #0 $token t

    # Code
    set code [http::ncode $token]

    # Log it
    HTTPLog $token

    # Result?
    switch -- $code {
	200 -
	203 -
	404 -
	503 {eval [list $var(proc,exec) $varname]}

	201 -
	300 -
	301 -
	302 -
	303 -
	305 -
	307 {
	    foreach {name value} $t(meta) {
		if {[regexp -nocase ^location$ $name]} {
		    # clean up and resubmit
		    http::cleanup $token
		    unset var(token)

		    eval [list $var(proc,load) $varname $value $var(qq)]
		}
	    }
	}

	default {
	    eval [list $var(proc,error) $varname "[msgcat::mc {Error code was returned}] $code"]
	}
    }
}

proc TBLClearFrame {layer} {
    global current

    if {$current(frame) != {}} {
	$current(frame) marker $layer delete all
    }
}

proc TBLValidDB {varname} {
    upvar #0 $varname var
    global $varname

    if {[info exists var(Nrows)] && 
	[info exists var(Ncols)] &&
	[info exists var(Header)]} {
	return 1
    } else {
	return 0
    }
}

proc TBLStatusRows {varname rowlist} {
    upvar #0 $varname var
    global $varname

    # rowlist start at 1
    if {[llength $rowlist]>0} {
	ARStatus $varname "[msgcat::mc {Row}] [join $rowlist {,}]"
    } else {
	ARStatus $varname {}
    }
}

proc TBLSelectTimer {varname layer} {
    upvar #0 $varname var
    global $varname

    switch -- $var(blink) {
	0 {
	    set var(blink) 0
	    set var(blink,count) 0
	    set var(blink,marker) {}
	    set var(blink,marker,color) {}
	}
	1 {
	    for {set ii 0} {$ii<[llength $var(blink,marker)]} {incr ii} {
		set mm [lindex $var(blink,marker) $ii]
		set clr [lindex $var(blink,marker,color) $ii]

		if {[info commands $var(frame)] != {}} {
		    if {[$var(frame) has fits]} {
			if {$var(blink,count) < 4} {
			    switch $clr {
				red {$var(frame) marker $layer $mm color green}
				default {$var(frame) marker $layer $mm color red}
			    }
			}
			$var(frame) marker $layer $mm highlite
		    }
		}
	    }
	    
	    incr ${varname}(blink,count)
	    if {$var(blink,count) < 5} {
		set var(blink) 2
	    } else {
		set var(blink) 0
	    }

	    after 250 [list TBLSelectTimer $varname $layer]
	}
	2 {
	    for {set ii 0} {$ii<[llength $var(blink,marker)]} {incr ii} {
		set mm [lindex $var(blink,marker) $ii]
		set clr [lindex $var(blink,marker,color) $ii]

		if {[info commands $var(frame)] != {}} {
		    if {[$var(frame) has fits]} {
			$var(frame) marker $layer $mm color $clr
			$var(frame) marker $layer $mm unhighlite
		    }
		}
	    }
	    set var(blink) 1

	    after 250 [list TBLSelectTimer $varname $layer]
	}
    }
}

proc TBLSelectTimerCancel {varname layer} {
    upvar #0 $varname var
    global $varname
    
    if {$var(blink)} {
	# cancel all pending
	foreach aa [after info] {
	    set id [string range $aa 6 end]
	    after cancel $aa
	}

	for {set ii 0} {$ii<[llength $var(blink,marker)]} {incr ii} {
	    set mm [lindex $var(blink,marker) $ii]
	    set clr [lindex $var(blink,marker,color) $ii]

	    if {[info commands $var(frame)] != {}} {
		if {[$var(frame) has fits]} {
		    $var(frame) marker $layer $mm color $clr
		}
	    }
	}
    }

    $var(frame) marker $layer $varname unhighlite

    # init timer vars
    set var(blink) 0
    set var(blink,count) 0
    set var(blink,marker) {}
    set var(blink,marker,color) {}
}

proc TBLCrosshair {varname} {
    upvar #0 $varname var
    global $varname

    if {[info commands $var(frame)] == {}} {
	return
    }

    if {![$var(frame) has fits]} {
	return
    }

    set var(name) {}
    set var(x) {}
    set var(y) {}

    if {[$var(frame) has wcs celestial $var(system)]} {
	set coord [$var(frame) get crosshair \
		       $var(system) $var(sky) $var(skyformat)]
	set var(x) [lindex $coord 0]
	set var(y) [lindex $coord 1]
    }
}

proc TBLPanTo {varname mk layer} {
    upvar #0 $varname var
    global $varname

    if {[info commands $var(frame)] == {}} {
	return
    }

    if {![$var(frame) has fits]} {
	return
    }

    # pan to first region
    if {$var(panto) && $mk != {}} {
	set tt [$var(frame) get marker $layer $mk tag]
	if {$tt!={}} {
	    set cc [$var(frame) get marker $layer $tt center \
			$var(psystem) $var(psky)]
	    PanToFrame $var(frame) [lindex $cc 0] [lindex $cc 1] \
		$var(psystem) $var(psky)
	}
    }
}

proc TBLUpdate {varname} {
    upvar #0 $varname var
    global $varname

    if {[info commands $var(frame)] == {}} {
	return
    }

    if {![$var(frame) has fits]} {
	return
    }

    set var(name) {}
    set var(x) {}
    set var(y) {}
    set var(radius) {}

    if {[$var(frame) has wcs celestial $var(system)]} {
	set coord [$var(frame) get fits center \
		       $var(system) $var(sky) $var(skyformat)]
	set var(x) [lindex $coord 0]
	set var(y) [lindex $coord 1]

	set size [$var(frame) get fits size \
		      $var(system) $var(sky) $var(rformat)]
	set ww [lindex $size 0]
	set hh [lindex $size 1]
	set var(radius) [expr ($ww+$hh)/4]
    }
}

proc TBLWCSMenuUpdate {varname} {
    upvar #0 $varname var
    global $varname

    ARCoord $varname

    set var(psystem) $var(system)
    set var(psky) $var(sky)
    CoordMenuButtonCmd $varname psystem psky {}
}

proc TBLUpdateFont {ll} {
    foreach varname $ll {
	upvar #0 $varname var
	global $varname

	$var(tbl) configure -font [font actual TkDefaultFont]
    }
}

# Scroll

proc TBLBindMouseWheel {varname} {
    upvar #0 $varname var
    global $varname
    global ds9

    switch $ds9(wm) {
	x11 {
	    bind $var(tbl) <Button-4> [list TBLYScroll $varname 1]
	    bind $var(tbl) <Button-5> [list TBLYScroll $varname -1]
	    bind $var(tbl) <Shift-Button-4> [list TBLXScroll $varname 1]
	    bind $var(tbl) <Shift-Button-5> [list TBLXScroll $varname -1]
	}
	aqua -
	win32 {
	    bind $var(tbl) <MouseWheel> [list TBLYScroll $varname %D]
	}
    }
} 

proc TBLXScroll {varname cnt} {
    upvar #0 $varname var
    global $varname

    $var(tbl) xview scroll [expr -$cnt] units
}

proc TBLYScroll {varname cnt} {
    upvar #0 $varname var
    global $varname

    $var(tbl) yview scroll [expr -$cnt] units
}

# Cut/Copy

proc TBLCopy {varname} {
    upvar #0 $varname var
    global $varname

    set w [focus -displayof $var(top)]
    if {$w == $var(tbl)} {
	TBLCopyTable $varname
    } else {
	EntryCopy $var(top)
    }
}

proc TBLCut {varname} {
    upvar #0 $varname var
    global $varname

    set w [focus -displayof $var(top)]
    if {$w == $var(tbl)} {
	TBLCopyTable $varname
    } else {
	EntryCut $var(top)
    }
}

proc TBLCopyTable {varname} {
    upvar #0 $varname var
    global $varname

    set w [focus -displayof $var(top)]

    set sel [$var(tbl) curselection]
    set data {}
    set row [lindex [split [lindex $sel 0] ,] 0]
    foreach ss $sel {
	set rr [lindex [split $ss ,] 0]
	if {$rr != $row} {
	    append data "\n"
	    set row $rr
	} else {
	    if {$data != {}} {
		append data "\t"
	    }
	}
	append data "[$var(tbl) get $ss]"
    }
    append data "\n"
    clipboard clear -displayof $w
    clipboard append -displayof $w $data
}

# Save via File

proc TBLSaveVOTFile {varname} {
    upvar #0 $varname var
    global $varname

    set fn [SaveFileDialog votfbox $var(top)]
    TBLSaveFn $varname $fn VOTWrite
}

proc TBLSaveRDBFile {varname} {
    upvar #0 $varname var
    global $varname

    set fn [SaveFileDialog rdbfbox $var(top)]
    TBLSaveFn $varname $fn starbase_write
}

proc TBLSaveTSVFile {varname} {
    upvar #0 $varname var
    global $varname

    set fn [SaveFileDialog tsvfbox $var(top)]
    TBLSaveFn $varname $fn TSVWrite
}

proc TBLSaveFn {varname fn writer} {
    upvar #0 $varname var
    global $varname
    global $var(tbldb)

    if {$fn == {}} {
	return
    }

    # do we have a db?
    if {![TBLValidDB $var(tbldb)]} {
	return
    }

    if {[info exists var(offset)]} {
	$writer $var(tbldb) $fn $var(offset)
    } else {
	$writer $var(tbldb) $fn
    }
}

# Sort

proc TBLSortMenu {varname} {
    upvar #0 $varname var
    global $varname
    global $var(catdb)

    global ds9

    set m $var(sortmenu).menu
    catch {destroy $m}

    ThemeMenu $m
    $m configure -tearoff 0
    $m add command -label {} -command "TBLSortCmd $varname {}"
    if {[TBLValidDB $var(catdb)]} {
	set cnt -1
	foreach col [starbase_columns $var(catdb)] {
	    $m add command -label $col -command "TBLSortCmd $varname \{$col\}"

	    # wrap if needed
	    incr cnt
	    if {$cnt>=$ds9(menu,size,wrap)} {
		set cnt 0
		$m entryconfig $col -columnbreak 1
	    }
	}
    }
}

proc TBLSortCmd {varname val} {
    upvar #0 $varname var
    global $varname

    set ${varname}(sort) $val
    $var(proc,table) $varname
}

proc TBLTable {varname} {
    upvar #0 $varname var
    global $varname

    eval [list $var(proc,table) $varname]
}

# Edit Dialog

proc TBLEditDialog {varname which db} {
    upvar #0 $varname var
    global $varname
    global ds9
    global ed

    set w ".${varname}edit"
    set mb ".${varname}editmb"

    set ed(ok) 0
    set ed(text) $w.param.txt

    DialogCreate $w [msgcat::mc {Edit}] ed(ok)

    $w configure -menu $mb
    ThemeMenu $mb

    # file
    $mb add cascade -label [msgcat::mc {File}] -menu $mb.file
    ThemeMenu $mb.file
    $mb.file add command -label "[msgcat::mc {Open}]..." \
	-command [list TBLEditDialogLoad $w]
    $mb.file add command -label "[msgcat::mc {Save}]..." \
	-command [list TBLEditDialogSave $w]
    $mb.file add separator
    $mb.file add command -label [msgcat::mc {Apply}] \
	-command {set ed(ok) 1}
    $mb.file add command -label [msgcat::mc {Clear}] \
	-command TBLEditDialogClear
    $mb.file add separator
    $mb.file add command -label [msgcat::mc {Cancel}] \
	-command {set ed(ok) 0}

    # edit
    $mb add cascade -label [msgcat::mc {Edit}] -menu $mb.edit
    ThemeMenu $mb.edit
    $mb.edit add command -label [msgcat::mc {Undo}] \
	-command "$ed(text) edit undo"
    $mb.edit add command -label [msgcat::mc {Redo}] \
	-command "$ed(text) edit redo"
    $mb.edit add separator
    $mb.edit add command -label [msgcat::mc {Cut}] \
	-command "tk_textCut $ed(text)" -accelerator "${ds9(ctrl)}X"
    $mb.edit add command -label [msgcat::mc {Copy}] \
	-command "tk_textCopy $ed(text)" -accelerator "${ds9(ctrl)}C"
    $mb.edit add command -label [msgcat::mc {Paste}] \
	-command "tk_textPaste $ed(text)" -accelerator "${ds9(ctrl)}V"

    global $db
    # column
    $mb add cascade -label [msgcat::mc {Column}] -menu $mb.col
    if {[info exists $mb.col]} {
	destroy $mb.col
    }
    ThemeMenu $mb.col
    if {[TBLValidDB $db]} {
	set cnt -1
	foreach col [starbase_columns $db] {
	    $mb.col add command -label "$col" \
		-command "$ed(text) insert insert \{\$$col\}"

	    # wrap if needed
	    incr cnt
	    if {$cnt>=$ds9(menu,size,wrap)} {
		set cnt 0
		$mb.col entryconfig $col -columnbreak 1
	    }
	}
    }

    # operator
    $mb add cascade -label [msgcat::mc {Operator}] -menu $mb.op
    ThemeMenu $mb.op
    $mb.op add command -label {-} \
	-command "$ed(text) insert insert {-}"
    $mb.op add command -label {!} \
	-command "$ed(text) insert insert {!}"
    $mb.op add command -label {(} \
				   -command "$ed(text) insert insert {(}"
	$mb.op add command -label {)} \
	-command "$ed(text) insert insert {)}"
    $mb.op add separator
    $mb.op add command -label {*} \
	-command "$ed(text) insert insert {*}"
    $mb.op add command -label {/} \
	-command "$ed(text) insert insert {/}"
    $mb.op add command -label {%} \
	-command "$ed(text) insert insert {%}"
    $mb.op add command -label {+} \
	-command "$ed(text) insert insert {+}"
    $mb.op add command -label {-} \
	-command "$ed(text) insert insert {-}"
    $mb.op add separator
    $mb.op add command -label {<} \
	-command "$ed(text) insert insert {<}"
    $mb.op add command -label {>} \
	-command "$ed(text) insert insert {>}"
    $mb.op add command -label {<=} \
	-command "$ed(text) insert insert {<=}"
    $mb.op add command -label {>=} \
	-command "$ed(text) insert insert {>=}"
    $mb.op add command -label {==} \
	-command "$ed(text) insert insert {==}"
    $mb.op add command -label {!=} \
	-command "$ed(text) insert insert {!=}"
    $mb.op add separator
    $mb.op add command -label {&&} \
	-command "$ed(text) insert insert {&&}"
    $mb.op add command -label {||} \
	-command "$ed(text) insert insert {||}"

    # operator
    $mb add cascade -label [msgcat::mc {Math Function}] -menu $mb.math
    ThemeMenu $mb.math
    $mb.math add command -label {acos} \
	-command "$ed(text) insert insert {acos()}"
    $mb.math add command -label {asin} \
	-command "$ed(text) insert insert {asin()}"
    $mb.math add command -label {atan} \
	-command "$ed(text) insert insert {atan()}"
    $mb.math add command -label {atan2} \
	-command "$ed(text) insert insert {atan2(,)}"
    $mb.math add command -label {ceil} \
	-command "$ed(text) insert insert {ceil()}"
    $mb.math add command -label {cos} \
	-command "$ed(text) insert insert {cos()}"
    $mb.math add command -label {cosh} \
	-command "$ed(text) insert insert {cosh()}"
    $mb.math add command -label {exp} \
	-command "$ed(text) insert insert {exp()}"
    $mb.math add command -label {floor} \
	-command "$ed(text) insert insert {floor()}"
    $mb.math add command -label {fmod} \
	-command "$ed(text) insert insert {fmod(,)}"
    $mb.math add command -label {hypot} \
	-command "$ed(text) insert insert {hypot(,)}"
    $mb.math add command -label {log} \
	-command "$ed(text) insert insert {log()}"
    $mb.math add command -label {log10} \
	-command "$ed(text) insert insert {log10()}"
    $mb.math add command -label {pow} \
        -command "$ed(text) insert insert {pow(,)}"
    $mb.math add command -label {sin} \
	-command "$ed(text) insert insert {sin()}"
    $mb.math add command -label {sinh} \
	-command "$ed(text) insert insert {sinh()}"
    $mb.math add command -label {sqrt} \
	-command "$ed(text) insert insert {sqrt()}"
    $mb.math add command -label {tan} \
	-command "$ed(text) insert insert {tan()}"
    $mb.math add command -label {tanh} \
	-command "$ed(text) insert insert {tanh()}"
    $mb.math add command -label {abs} \
	-command "$ed(text) insert insert {abs()}"
    $mb.math add command -label {double} \
	-command "$ed(text) insert insert {double()}"
    $mb.math add command -label {int} \
	-command "$ed(text) insert insert {int()}"
    $mb.math add command -label {round} \
	-command "$ed(text) insert insert {round()}"

    # Text  
    set f [ttk::frame $w.param]

    text $f.txt \
	-height 10 \
	-width 60 \
	-yscrollcommand "$f.yscroll set" \
	-xscrollcommand "$f.xscroll set" \
	-undo true \
	-wrap none 
    ttk::scrollbar $f.yscroll -command [list $ed(text) yview] \
	-orient vertical
    ttk::scrollbar $f.xscroll -command [list $ed(text) xview] \
	-orient horizontal

    grid $ed(text) $f.yscroll -sticky news
    grid $f.xscroll -stick news
    grid rowconfigure $f 0 -weight 1
    grid columnconfigure $f 0 -weight 1

    # Buttons
    set f [ttk::frame $w.buttons]
    ttk::button $f.ok -text [msgcat::mc {OK}] -command {set ed(ok) 1} \
        -default active 
    ttk::button $f.clear -text [msgcat::mc {Clear}] -command TBLEditDialogClear
    ttk::button $f.cancel -text [msgcat::mc {Cancel}] -command {set ed(ok) 0}
    pack $f.ok $f.clear $f.cancel -side left -expand true -padx 2 -pady 4

    bind $w <Return> {set ed(ok) 1}

    # Fini
    ttk::separator $w.sep -orient horizontal
    pack $w.param -side top -fill both -expand true
    pack $w.buttons $w.sep -side bottom -fill x

    $ed(text) insert end $var($which)
    $ed(text) see end

    DialogWait $w ed(ok) $w.buttons.ok

    if {$ed(ok)} {
	set flt [$ed(text) get 1.0 end]
	catch {regsub {\n} $flt " " flt}
	set var($which) [string trim $flt]
    }

    # must wait until now
    destroy $w
    destroy $mb
    set rr $ed(ok)
    unset ed
    return $rr
}

proc TBLEditDialogClear {} {
    global ed

    $ed(text) delete 1.0 end
}

proc TBLEditDialogSave {parent} {
    global ed

    set fn [SaveFileDialog catfltfbox $parent]
    if {$fn != {}} {
	if {[catch {open $fn w} fp]} {
	    Error "[msgcat::mc {Unable to open file}] $fn: $fp"
	    return
	}
	set flt [$ed(text) get 1.0 end]
	catch {regsub {\n} $flt " " flt}
	puts $fp [string trim $flt]
	catch {close $fp}
    }
}

proc TBLEditDialogLoad {parent} {
    global ed

    set fn [OpenFileDialog catfltfbox $parent]
    if {$fn != {}} {
	if {[catch {open $fn r} fp]} {
	    Error "[msgcat::mc {Unable to open file}] $fn: $fp"
	    return
	}
	$ed(text) delete 1.0 end
	$ed(text) insert end [read -nonewline $fp]
	$ed(text) see end
	catch {close $fp}
    }
}

proc TBLGetHeader {varname} {
    upvar #0 $varname var
    global $varname
    global $var(tbldb)

    set t $var(tbldb)
    upvar #0 $t T

    if {![TBLValidDB $var(tbldb)]} {
	return {}
    }

    # last 2 lines are cols and dashes, ignore
    set hdr {}
    set nl [expr $T(HLines)-2]
    for {set ll 1} {$ll <= $nl} {incr ll} {
	append hdr "$T(H_$ll)\n"
    }
    return $hdr
}

# Cmd

proc TBLCmdSave {fn writer} {
    global cvarname
    if {$cvarname == {}} {
	return
    }

    if {$fn != {}} {
	TBLSaveFn $cvarname $fn $writer
	FileLast votbox $fn
    }
}

proc TBLCmdCoord {xx yy sky} {
    global cvarname
    if {$cvarname == {}} {
	return
    }
    upvar #0 $cvarname cvar

    set cvar(x) $xx
    set cvar(y) $yy
    set cvar(sky) $sky
}

proc TBLCmdSize {radius rformat} {
    global cvarname
    if {$cvarname == {}} {
	return
    }
    upvar #0 $cvarname cvar

    set cvar(radius) $radius
    set cvar(rformat) $rformat
    set cvar(rformat,msg) $rformat
}

proc TBLCmdSkyframe {skyframe} {
    global cvarname
    if {$cvarname == {}} {
	return
    }
    upvar #0 $cvarname cvar

    set cvar(sky) $skyframe
    CoordMenuButtonCmd $cvarname system sky [list TBLWCSMenuUpdate $cvarname]
}

proc TBLCmdSystem {sys} {
    global cvarname
    if {$cvarname == {}} {
	return
    }
    upvar #0 $cvarname cvar

    set cvar(system) $sys
    CoordMenuButtonCmd $cvarname system sky [list TBLWCSMenuUpdate $cvarname]
}

proc TBLCmdFilterLoad {fn} {
    global cvarname
    if {$cvarname == {}} {
	return
    }
    upvar #0 $cvarname cvar

    if {$fn != {}} {
	if {[catch {open $fn r} fp]} {
	    Error "[msgcat::mc {Unable to open file}] $fn: $fp"
	    yyerror
	}
	set flt [read -nonewline $fp]
	catch {regsub {\n} $flt " " $flt}
	set cvar(filter) [string trim $flt]
	catch {close $fp}
    }
}

# print

proc TBLPrint {varname} {
    upvar #0 $varname var
    global $varname

    if {[PRPrintDialog]} { 
	if {[catch {TBLPostScript $varname} printError]} {
	    Error "[msgcat::mc {An error has occurred while printing}] $printError"
	}
    }
}

proc TBLPostScript {varname} {
    upvar #0 $varname var
    global $varname
    global $var(tbldb)

    global ps

    if {$ps(dest) == "file"} {
	if {[catch {set ch [open "$ps(filename,txt)" w]}]} {
	    Error [msgcat::mc {An error has occurred while saving}]
	    return
	}
    } else {
	if {[catch {set ch [open "| $ps(cmd)" w]}]} {
	    Error [msgcat::mc {An error has occurred while saving}]
	    return
	}
    }
    starbase_writefp $var(tbldb) $ch
    close $ch
}

proc TBLCmdPrint {varname} {
    upvar #0 $varname var
    global $varname
    global $var(tbldb)

    global ps

    set ch [open "| $ps(cmd)" w]
    starbase_writefp $var(tbldb) $ch
    close $ch
}


