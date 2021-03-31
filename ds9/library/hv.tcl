#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc HVDef {} {
    global ihv

    set ihv(unique) 0
    set ihv(windows) {}
}

# Public

proc HV {varname title url {init {}} {sync 0} {save 0}} {
    upvar #0 $varname var
    global $varname

    global ds9
    global ihv

    global debug
    if {$debug(tcl,hv)} {
	puts stderr "HV $varname $title $url $init $sync"
    }

    set var(top) ".${varname}"
    set var(mb) ".${varname}mb"

    set w $var(top)
    set mb $var(mb)

    # see if we already have a window visible
    if {[winfo exists $w]} {
	raise $w
    } else {
	# add it to our xpa list
	lappend ihv(windows) $varname

	set var(widget) {}
	set var(status) {}
	set var(sync) $sync
	set var(frame) new
	set var(save) $save
	set var(title) "$title"
	set var(copy) {}
	set var(search) {}
	set var(search,start) 0

	set var(active) 0
	set var(index) 0
	set var(font) $ds9(times)
	switch $ds9(wm) {
	    x11 {set var(font,size) 10}
	    aqua {set var(font,size) 16}
	    win32 {set var(font,size) 14}
	}
	set var(font,weight) normal
	set var(font,slant) roman
	set var(init) $init
	set var(cookies) {}

	set var(images,forward) ${varname}forward
	set var(images,back) ${varname}back
	set var(images,reload) ${varname}reload
	set var(images,stop) ${varname}stop
	set var(images,gray) ${varname}gray

	# init some vars
	HVClearAll $varname
	set var(delete) 0

	# create window
	Toplevel $w $mb 7 $title "HVDestroy $varname"

	$mb add cascade -label [msgcat::mc {File}] -menu $mb.file
	$mb add cascade -label [msgcat::mc {Edit}] -menu $mb.edit
	$mb add cascade -label [msgcat::mc {View}] -menu $mb.view
	$mb add cascade -label [msgcat::mc {Frame}] -menu $mb.frame

	ThemeMenu $mb.file
	$mb.file add command -label [msgcat::mc {Open URL}] \
	    -command "HVURLDialogCmd $varname"
	$mb.file add command -label [msgcat::mc {Open File}] \
	    -command "HVFileDialogCmd $varname"
	$mb.file add separator
	$mb.file add command -label [msgcat::mc {Clear}] \
	    -command "HVClearCmd $varname"
	$mb.file add separator
	$mb.file add command -label [msgcat::mc {Close}] \
	    -command "HVDestroy $varname" -accelerator "${ds9(ctrl)}W"

	ThemeMenu $mb.edit
	$mb.edit add command -label [msgcat::mc {Cut}] \
	    -state disabled -accelerator "${ds9(ctrl)}X"
	$mb.edit add command -label [msgcat::mc {Copy}] \
	    -command "HVCopyCmd $varname" -accelerator "${ds9(ctrl)}C"
	$mb.edit add command -label [msgcat::mc {Paste}] \
	    -state disabled -accelerator "${ds9(ctrl)}V"
	$mb.edit add separator
	$mb.edit add command -label "[msgcat::mc {Find}]..." \
	    -command "HVFindCmd $varname" -accelerator "${ds9(ctrl)}F"
	$mb.edit add command -label [msgcat::mc {Find Next}] \
	    -command "HVFindNextCmd $varname" -accelerator "${ds9(ctrl)}G"
	$mb.edit add separator
	$mb.edit add command -label [msgcat::mc {Clear Cache}] \
	    -command "HVClearCache $varname"

	ThemeMenu $mb.view
	$mb.view add command -label [msgcat::mc {Back}] \
	    -command "HVBackCmd $varname"
	$mb.view add command -label [msgcat::mc {Forward}] \
	    -command "HVForwardCmd $varname"
	$mb.view add separator
	$mb.view add command -label [msgcat::mc {Stop}] \
	    -command "HVStopCmd $varname"
	$mb.view add command -label [msgcat::mc {Reload}] \
	    -command "HVReloadCmd $varname"
	$mb.view add separator
	$mb.view add command -label [msgcat::mc {Page Source}] \
	    -command "HVPageSourceCmd $varname"

	ThemeMenu $mb.frame 
	$mb.frame add checkbutton \
	    -label [msgcat::mc {Save Image on Download}] \
	    -variable ${varname}(save)
	$mb.frame add separator
	$mb.frame add radiobutton \
	    -label [msgcat::mc {Create New Frame on Download}] \
	    -variable ${varname}(frame) -value new
	$mb.frame add radiobutton \
	    -label [msgcat::mc {Use Current Frame on Download}] \
	    -variable ${varname}(frame) -value current

	image create photo $var(images,back) -data {R0lGODlhDwANAKL/AM///8DAwJD//y/I/y+X/y9n/wAAAAAAACH5BAEAAAEALAAAAAAPAA0AAAM0GLq2/qE0+AqYVFmB6eZFKEoRIAyCaaYCYWxDLM9uYBAxoe/7dA8ug3AoZOg6mRsyuUxmEgA7}
	image create photo $var(images,forward) -data {R0lGODlhDwANAKL/AM///8DAwJD//y/I/y+X/y9n/wAAAAAAACH5BAEAAAEALAAAAAAPAA0AAAM3GLpa/K8YSMuYlBVwV/kgCAhdsAFoig7ktA1wLA9SQdw4DkuB4f8/Ag2TMRB4GYUBmewRm09FAgA7}
	image create photo $var(images,stop) -data {R0lGODlhDQANALP/AP///1Lq81I5Of+EhCEAAHsAAMYAAP+UQv9zCHuMjP8AMf8AKf+MnK1CSv8QIQAAACH5BAEAAAEALAAAAAANAA0AAARWMMjUTC1J6ubOQYdiCBuIIMuiiCT1OWu6Ys05AMPC4ItBGB8dYMdI+RoHR4qY6v1CwlvRcEQ4brndwFAgJAwIRdPIzVTEYiqXJBEU1FQCW5Mg2O0ZSQQAOw==}
	image create photo $var(images,reload) -data {R0lGODlhDAANALP/AP///zk5OVJSUoSEhKWlpcDAwP//1v//xr3erZTOezGcEFKtSimce3NzezkxOQAAACH5BAEAAAUALAAAAAAMAA0AAARRcJBJyRilEMC5AcjQaB1wHMYkCFuXLKDQONsBLIuynEBAGAcJAnYy0AyGBOLENPg4qGUISTMdEIoEg4A6ohK6BND4YyqBqCdyve453vB44BEBADs=}

	image create photo $var(images,gray) -data {R0lGODdhPAA+APAAALi4uAAAACwAAAAAPAA+AAACQISPqcvtD6OctNqLs968+w+G4kiW5omm6sq27gvH8kzX9o3n+s73/g8MCofEovGITCqXzKbzCY1Kp9Sq9YrNFgsAO}

	# Buttons
	set f [ttk::frame $w.buttons]
	ttk::button $f.back -image $var(images,back) -takefocus 0 \
	    -command "HVBackCmd $varname"
	ttk::button $f.forward -image $var(images,forward) -takefocus 0 \
	    -command "HVForwardCmd $varname"
	ttk::button $f.stop -image $var(images,stop) -takefocus 0 \
	    -command "HVStopCmd $varname"
	ttk::button $f.reload -image $var(images,reload) -takefocus 0 \
	    -command "HVReloadCmd $varname"
	pack $f.back $f.forward $f.stop $f.reload -side left

	# Param
	set f [ttk::frame $w.param]

	set var(widget) [html $f.html \
			     -yscrollcommand "$f.yscroll set" \
			     -xscrollcommand "$f.xscroll set" \
			     -padx 5 \
			     -pady 9 \
			     -formcommand "HVFormCB $varname" \
			     -imagecommand "HVImageCB $varname" \
			     -scriptcommand "HVScriptCB $varname"\
			     -appletcommand "HVAppletCB $varname" \
			     -framecommand "HVFrameCB $varname" \
			     -underlinehyperlinks 1 \
			     -bg white \
			     -width 640 \
			     -height 512 \
			     -fontcommand "HVFontCB $varname" \
			     -tablerelief raised \
			    ]

	$var(widget) token handler {NOSCRIPT} "HVNoScriptCB $varname"
	$var(widget) token handler {/NOSCRIPT} "HVNoScriptCB $varname"

	ttk::scrollbar $f.yscroll -orient vertical \
	    -command "$f.html yview"
	ttk::scrollbar $f.xscroll -orient horizontal \
	    -command "$f.html xview"

	grid $f.html $f.yscroll -sticky news
	grid $f.xscroll -stick news
	grid rowconfigure $f 0 -weight 1
	grid columnconfigure $f 0 -weight 1

	bind $var(widget).x <Motion> "HVMotion $varname %x %y" 
	bind $var(widget).x <Button-1> "HVButton1 $varname %x %y"
	bind $var(widget).x <B1-Motion> "HVMotion1 $varname %x %y" 
	bind $var(widget).x <ButtonRelease-1> "HVRelease1 $varname %x %y"

	bind $w <Up> "$f.html yview scroll -1 units"
	bind $w <Down> "$f.html yview scroll 1 units"
	bind $w <Right> "$f.html xview scroll 1 units"
	bind $w <Left> "$f.html xview scroll -1 units"
	bind $w <<Copy>> "HVCopyCmd $varname"

	bind $w <<Find>> [list HVFindCmd $varname]
	bind $w <<FindNext>> [list HVFindNextCmd $varname]

	bind $w <<Close>> [list HVDestroy $varname]

	switch $ds9(wm) {
	    x11 {
		bind $w <Button-4> "HVMouseWheel $varname 1"
		bind $w <Button-5> "HVMouseWheel $varname -1"
	    }
	    aqua -
	    win32 {
		bind $w <MouseWheel> "HVMouseWheel $varname %D"
	    }
	}

	# Status
	set f [ttk::frame $w.status]
	ttk::label $f.status -textvariable ${varname}(status) \
	    -width 120 -anchor w
	pack $f.status -side left

	# Fini
	ttk::separator $w.sep -orient horizontal
	pack $w.status $w.sep -side bottom -fill x
	pack $w.buttons -side top -fill x
	pack $w.param -side top -fill both -expand true
    }

    selection handle $w [list HVExportSelection $varname]

    if {$url != {}} {
	# no need to resolve
	HVLoadURL $varname $url {} $var(sync)
    }
}

proc HVDestroy {varname} {
    upvar #0 $varname var
    global $varname
    global ihv

    global debug
    if {$debug(tcl,hv)} {
	puts stderr "HVDestroy"
    }

    HVCancel $varname

    # clear the widge and all images
    $var(widget) clear

    # clear image cache
    foreach x [array names $varname "images,*"] {
	image delete $var($x)
	unset ${varname}($x)
    }

    # clear cache
    HVClearCache $varname

    # destroy the window and menubar
    if {[winfo exists $var(top)]} {
	destroy $var(top)
	destroy $var(mb)
    }

    # delete it from the xpa list
    set ii [lsearch $ihv(windows) $varname]
    if {$ii>=0} {
	set ihv(windows) [lreplace $ihv(windows) $ii $ii]
    }

    # clear varname
    unset $varname
}

# Bindings

proc HVMotion {varname x y} {
    upvar #0 $varname var
    global $varname

    global ds9

    set url [$var(widget) href $x $y] 

    if {[string length $url] > 0} {
	switch $ds9(wm)  {
	    x11 -
	    win32 {$var(widget) configure -cursor hand2}
	    aqua {$var(widget) configure -cursor pointinghand}
	}
    } else {
	$var(widget) configure -cursor {}
    }

    HVStatus $varname $url
}

proc HVButton1 {varname x y} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,hv)} {
	puts stderr "HVButton1"
    }

    $var(widget) selection clear
    set var(sel,x) -1
    set var(sel,y) -1

    HVClearIndex $varname $var(index)

    set url [$var(widget) href $x $y]
    if {[string length $url] != 0} {
	HVResolveURL $varname $url
    } else {
	set var(sel,x) $x
	set var(sel,y) $y
    }
}

proc HVMotion1 {varname x y} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,hv)} {
	puts stderr "HVMotion1"
    }

    if {$var(sel,x) != -1 && $var(sel,y) != -1} {
	$var(widget) selection set @$var(sel,x),$var(sel,y) @$x,$y
    }
}

proc HVRelease1 {varname x y} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,hv)} {
	puts stderr "HVRelease1"
    }

    if {$var(sel,x) != -1 && $var(sel,y) != -1} {
	set var(copy) [$var(widget) text ascii @$var(sel,x),$var(sel,y) @$x,$y]
	selection own -command [list HVLostSelection $varname] $var(top)
    }
}

proc HVMouseWheel {varname cnt} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,hv)} {
	puts stderr "HVMouseWheel"
    }

    $var(widget) yview scroll [expr -$cnt] units
}

# Commands

proc HVClearCmd {varname} {
    upvar #0 $varname var
    global $varname

    # clear the widge and all images
    $var(widget) clear

    HVClearCache $varname
    HVClearAll $varname
}

proc HVCopyCmd {varname} {
    upvar #0 $varname var
    global $varname

    clipboard clear -displayof $var(top)
    clipboard append -displayof $var(top) $var(copy)
}

proc HVExportSelection {varname offset bytes} {
    upvar #0 $varname var
    global $varname

    if {$var(copy) != {}} {
	return [string range $var(copy) $offset [expr $offset+$bytes]]
    }
}

proc HVLostSelection {varname} {
    upvar #0 $varname var
    global $varname

    $var(widget) selection clear
    set var(copy) {}
}

proc HVURLDialogCmd {varname} {
    upvar #0 $varname var
    global $varname

    global debug

    set url "$var(url)"
    if {[EntryDialog [msgcat::mc {URL}] [msgcat::mc {Enter URL}] 80 url]} {
	if {[string length $url] == 0} {
	    return
	}

	ParseURL $url r
	switch -- $r(scheme) {
	    {} {
		# append 'http://' if needed
		if {[string range $r(path) 0 0] == "/"} {
		    set url "http:/$url"
		} else {
		    set url "http://$url"
		}
		
		if {$debug(tcl,hv)} {
		    puts stderr "HVURLDialogCmd new $url"
		}
	    }
	}

	# clear the base
	$var(widget) config -base {}

	HVClearIndex $varname 0
	HVClearAll $varname
	# no need to resolve
	HVLoadURL $varname $url {}
    }
}

proc HVFileDialogCmd {varname} {
    upvar #0 $varname var
    global $varname

    global debug

    set fn [OpenFileDialog hvhtmlfbox $var(top)]
    if {"$fn" != {}} {
	HVFileDialog $varname "$fn"
    }
}

proc HVFileDialog {varname fn} {
    upvar #0 $varname var
    global $varname

    global debug

    # clear the base
    $var(widget) config -base {}

    HVClearIndex $varname 0
    HVClearAll $varname
    # no need to resolve
    HVLoadURL $varname "$fn" {}
}

proc HVBackCmd {varname} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,hv)} {
	puts stderr "HVBackCmd index $var(index)"
    }

    incr ${varname}(index) -1
    if {[info exists ${varname}(index,$var(index))]} {
	set url [lindex $var(index,$var(index)) 0]
	set query [lindex $var(index,$var(index)) 1]
	if {$debug(tcl,hv)} {
	    puts stderr "HVBackCmd :$var(index):$url:$query:"
	}
	# clear the base
	$var(widget) config -base {}

	# HVGotoHTML will incr the index again
	incr ${varname}(index) -1
	# no need to resolve
	HVLoadURL $varname $url $query $var(sync)
    } else {
	incr ${varname}(index)
    }
}

proc HVFind {varname} {
    upvar #0 $varname var
    global $varname

    set toks [$var(widget) token list 1.0 end]

    set aa -1
    set bb 0
    set cc -1
    set dd 0
    set id -1
    set ss $var(search,start)

    while {$ss<[llength $toks] && $cc==-1} {
	set pat [lindex $var(search) 0]
	set id [lsearch -glob -start $ss $toks "Text *$pat*"]

	if {$id != -1} {
	    set ok 1

	    set aa $id
	    set ss $id
	    set tt [string first $pat [lindex [lindex $toks $aa] 1]]
	    if {$tt != -1} {
		set bb $tt
	    }

	    for {set ii 1} {$ii<[llength $var(search)]} {incr ii} {
		set pat [lindex $var(search) $ii]
		set str [lindex [lindex $toks [expr $id+$ii*2]] 1]
		if {[string compare -length [string length $pat] $pat $str]} {
		    incr ss
		    set ok 0
		    break
		}
	    }

	    if {$ok} {
		set cc [expr $aa+([llength $var(search)]-1)*2]
		set tt [string last $pat [lindex [lindex $toks $cc] 1]]
		if {$tt != -1} {
		    set dd [expr $tt+[string length $pat]]
		}
	    }
	} else {
	    break
	}
    }

    if {$aa == -1 || $cc == -1} {
	return 0
    } else {
	set var(search,start) [expr $cc+1]
	$var(widget) selection set "[expr $aa+1].$bb" "[expr $cc+1].$dd"
	$var(widget) yview text "[expr $aa+1].$bb"
	return 1
    }
}

proc HVFindCmd {varname} {
    upvar #0 $varname var
    global $varname

    set result "$var(search)"
    if {[EntryDialog [msgcat::mc {Search}] [msgcat::mc {Enter Search Expression}] 40 result]} {
	set var(search) "$result"
	set var(search,start) 0
	$var(widget) selection clear

	if {![HVFind $varname]} {
	    Error "$var(search) [msgcat::mc {Not Found}]"
	}
    }
}

proc HVFindNextCmd {varname} {
    upvar #0 $varname var
    global $varname

    if {$var(search,start) == 0} {
	HVFindCmd $varname
    } else {
	if {![HVFind $varname]} {
	    # wrap
	    set var(search,start) 0
	    if {![HVFind $varname]} {
		Error "$var(search) [msgcat::mc {Not Found}]"
	    }
	}
    }
}

proc HVForwardCmd {varname} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,hv)} {
	puts stderr "HVForwardCmd $var(index)"
    }

    incr ${varname}(index)
    if {[info exists ${varname}(index,$var(index))]} {
	set url [lindex $var(index,$var(index)) 0]
	set query [lindex $var(index,$var(index)) 1]
	if {$debug(tcl,hv)} {
	    puts stderr "HVForwardCmd :$var(index):$url:$query:"
	}
	# clear the base
	$var(widget) config -base {}

	# HVGotoHTML will incr the index again
	incr ${varname}(index) -1
	# no need to resolve
	HVLoadURL $varname $url $query $var(sync)
    } else {
	incr ${varname}(index) -1
    }
}

proc HVGotoCmd {varname nn} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,hv)} {
	puts stderr "HVGotoCmd $nn"
    }

    set var(index) $nn
    if {[info exists ${varname}(index,$var(index))]} {
	set url [lindex $var(index,$var(index)) 0]
	set query [lindex $var(index,$var(index)) 1]
	if {$debug(tcl,hv)} {
	    puts stderr "HVGotoCmd :$var(index):$url:$query:"
	}
	# clear the base
	$var(widget) config -base {}

	# HVGotoHTML will incr the index again
	incr ${varname}(index) -1
	# no need to resolve
	HVLoadURL $varname $url $query $var(sync)
    } else {
	incr ${varname}(index)
    }
}

proc HVReloadCmd {varname} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,hv)} {
	puts stderr "HVReloadCmd"
    }

    # clear the base
    $var(widget) config -base {}

    # HVGotoHTML will incr the index again
    incr ${varname}(index) -1
    # no need to resolve
    HVLoadURL $varname $var(url) $var(query) $var(sync)
}

proc HVStopCmd {varname} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,hv)} {
	puts stderr "\n*** HVStopCmd ***\n"
    }

    HVCancel $varname
}

proc HVPageSourceCmd {varname} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,hv)} {
	puts stderr "HVPageSourceCmd"
    }

    SimpleTextDialog ${varname}txt $var(url) 80 20 insert top $var(data)
}

proc HVArchUserCmd {varname title url} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,hv)} {
	puts stderr "HVArchUserCmd"
    }

    if {[string length $url] == 0} {
	return
    }

    ParseURL $url r
    switch -- $r(scheme) {
	{} {
	    # append 'http://' if needed
	    if {[string range $r(path) 0 0] == "/"} {
		set url "http:/$url"
	    } else {
		set url "http://$url"
	    }
	    
	    if {$debug(tcl,hv)} {
		puts stderr "HVArchUserCmd new $url"
	    }
	}
    }
    HV $varname $title $url
}

proc HVAnalysisCmd {varname title url sync} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,hv)} {
	puts stderr "HVAnalysisCmd $varname $title $url $sync"
    }

    if {[string length $url] == 0} {
	HV $varname "$title" {} {} $sync
    } else {
	ParseURL $url r
	switch -- $r(scheme) {
	    {} {
		# append 'http://' if needed
		if {[string range $r(path) 0 0] == "/"} {
		    set url "http:/$url"
		} else {
		    set url "http://$url"
		}
		
		if {$debug(tcl,hv)} {
		    puts stderr "HVAnalysisCmd new $url"
		}
	    }
	}
	HV $varname "$title" $url {} $sync
    }
}

proc HVAnalysisURL {which i url sync} {
    set varname "at${which}${i}"
    global $varname

    global debug
    if {$debug(tcl,hv)} {
	puts stderr "HVAnalysisURL $which $i $url"
    }

    set ${varname}(cookies) {}
    set ${varname}(sync) $sync
    HVClearAll $varname
    HVSetAnalysis $varname 1 $which $i
    HVLoadURL $varname $url {} $sync
}

proc HVAnalysisCancel {which i} {
    set varname "at${which}${i}"
    global $varname

    HVCancel $varname
}

# Archive Servers

proc HVArchChandraFTP {} {
    global current

    set ra {}
    set dec {}
    set wid {}

    if {$current(frame) != {}} {
	if {[$current(frame) has wcs celestial wcs]} {
	    set coord [$current(frame) get fits center wcs fk5 sexagesimal]
	    set ra [lindex $coord 0]
	    set dec [lindex $coord 1]

	    set wid [lindex [$current(frame) get fits size wcs fk5 degrees] 0]
	}
    }

    set l {}
    if {[string length $ra] != 0} {
	lappend l "1 ra \{$ra\}"
	lappend l "1 dec \{$dec\}"
	lappend l "1 wid \{$wid\}"
    }

    global hvchandraftp
    HV hvchandraftp {Chandra FTP} \
	http://www.cfa.harvard.edu/archive/chandra/search $l
}

# Other

# Process Cmds

proc ProcessWebCmd {varname iname} {
    upvar $varname var
    upvar $iname i
    global ihv

    set ref [lindex $ihv(windows) end]
    global cvarname
    set cvarname $ref

    web::YY_FLUSH_BUFFER
    web::yy_scan_string [lrange $var $i end]
    web::yyparse
    incr i [expr $web::yycnt-1]
}

proc WebCmdCheck {} {
    global cvarname
    if {$cvarname == {}} {
	return
    }
    upvar #0 $cvarname cvar

    if {![info exists cvar(top)]} {
	Error "[msgcat::mc {Unable to find web window}] $cvarname"
	return 0
    }
    if {![winfo exists $cvar(top)]} {
	Error "[msgcat:: mc {Unable to find web window}] $cvarname"
	return 0
    }
    return 1
}

proc WebCmdRef {ref} {
    global ihv
    global cvarname

    # look for reference in current list
    if {[lsearch $ihv(windows) $ref] < 0} {
	Error "[msgcat::mc {Unable to find web window}] $ref"
	return 0
    }

    set cvarname $ref
    return [WebCmdCheck]
}

proc WebCmdNew {url {ww {hvweb}}} {
    global ihv

    set ii [lsearch $ihv(windows) $ww]
    if {$ii>=0} {
	append ww $ihv(unique)
	incr ihv(unique)
    }

    if {[string length $url] == 0} {
	HV $ww Web {} {} 1
    } else {
	ParseURL $url rr
	switch -- $rr(scheme) {
	    {} {
		# append 'http://' if needed
		if {[string range $rr(path) 0 0] == "/"} {
		    set url "http:/$url"
		} else {
		    set url "http://$url"
		}
	    }
	}
	HV $ww Web $url {} 1
    }
}

proc WebCmdClick {id} {
    global cvarname
    if {$cvarname == {}} {
	return
    }
    upvar #0 $cvarname cvar
    
    if {![info exists cvar(widget)]} {
	return
    }

    set tokens [$cvar(widget) token list 1.0 end]
    set cnt 0
    for {set ii 0} {$ii<[llength $tokens]} {incr ii} {
	set tok [lindex $tokens $ii]
	if {[string tolower [lindex $tok 0]] == "markup" && 
	    [string tolower [lindex $tok 2]] == "href"} {
	    set url [lindex $tok 3]
	    incr cnt
	    if {$cnt == $id} {
		HVResolveURL $cvarname [$cvar(widget) resolve $url]
		break;
	    }
	}
    }
}

proc ProcessSendWebCmd {proc id param {sock {}} {fn {}}} {
    global ihv
    $proc $id "$ihv(windows)\n"
}

