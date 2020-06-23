#  Copyright (C) 1999-2020
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc PrismDef {} {
    global prism
    global iprism

    set iprism(prisms) {}
    set iprism(id) 0

    set iprism(mincols) 10
    set iprism(minrows) 20
    set iprism(maxevents) 10000
}

proc PrismDialog {varname} {
    global prism
    global iprism
    global ds9

    # first determine if aready in use, then increment
    if {[lsearch $iprism(prisms) $varname] >= 0} {
	incr iprism(id)
	append varname $iprism(id)
    }

    upvar #0 $varname var
    global $varname

    # main dialog
    set var(top) ".${varname}"
    set var(mb) ".${varname}mb"

    # see if we already have a window visible
    if {[winfo exists $var(top)]} {
	raise $var(top)
	return
    }

    # PRISM vars
    lappend iprism(prisms) $varname

    set var(tbldb) ${varname}tbldb
    set var(fn) {}
    set var(ext) {}
    set var(last) 0

    set var(xx) {}
    set var(yy) {}
    set var(xerr) {}
    set var(yerr) {}

    set var(plot) 0
    set var(plot,var) {}

    # create the window
    set w $var(top)
    set mb $var(mb)

    Toplevel $w $mb 6 [msgcat::mc {Prism}] "PrismDestroy $varname"
    $mb add cascade -label [msgcat::mc {File}] -menu $mb.file
    $mb add cascade -label [msgcat::mc {Edit}] -menu $mb.edit

    ThemeMenu $mb.file
    $mb.file add command -label [msgcat::mc {Load}] \
	-command [list PrismLoadFile $varname]  -accelerator "${ds9(ctrl)}O"
    $mb.file add separator
    $mb.file add command -label [msgcat::mc {Clear}] \
	-command [list PrismClear $varname]
    $mb.file add separator
    $mb.file add command -label [msgcat::mc {Plot}] \
	-command [list PrismPlot $varname]
    $mb.file add command -label [msgcat::mc {Histogram}] \
	-command [list PrismHistogram $varname]
    $mb.file add command -label [msgcat::mc {Image}] \
	-command [list PrismImage $varname]
    $mb.file add separator
    $mb.file add command -label [msgcat::mc {Close}] \
	-command [list PrismDestroy $varname] -accelerator "${ds9(ctrl)}W"

    EditMenu $mb $varname

    # Param
    set p [ttk::frame $w.param]

    # Exts
    set f [ttk::labelframe $p.ext -padding {0 2} \
	       -text [msgcat::mc {Extensions}]]

    ttk::scrollbar $f.yscroll -command [list $f.box yview] -orient vertical
    ttk::scrollbar $f.xscroll -command [list $f.box xview] -orient horizontal
    set var(dir) [ttk::treeview $f.box \
			 -xscroll [list $f.xscroll set]\
			 -yscroll [list $f.yscroll set] \
			 -selectmode browse \
			 -height 10 \
			 -show headings \
			 -columns {ext type dim} \
			]
    $var(dir) column ext -width 100 -anchor w
    $var(dir) column type -width 50 -anchor w
    $var(dir) column dim -width 220 -anchor w

    $var(dir) heading ext -text [msgcat::mc {Extension}] -anchor w
    $var(dir) heading type -text [msgcat::mc {Type}] -anchor w
    $var(dir) heading dim -text [msgcat::mc {Dimensions}] -anchor w

    grid $f.box $f.yscroll -sticky news
    grid $f.xscroll -stick news
    grid rowconfigure $f 0 -weight 1
    grid columnconfigure $f 2 -weight 1

    bind $var(dir) <<TreeviewSelect>> [list PrismExtCmd $varname]

    # Header
    set f [ttk::labelframe $p.header -padding {0 2} \
	       -text [msgcat::mc {Header Keywords}]]

    set var(header) [text $f.header \
			    -wrap none \
			    -height 10 \
			    -yscrollcommand [list $f.yscroll set] \
			    -xscrollcommand [list $f.xscroll set] \
			    -fg [ThemeTreeForeground] \
			    -bg [ThemeTreeBackground] \
			   ]


    ttk::scrollbar $f.yscroll -command [list $var(header) yview] \
	-orient vertical
    ttk::scrollbar $f.xscroll -command [list $var(header) xview] \
	-orient horizontal

    $var(header) tag configure keyword -foreground $ds9(bold)
    $var(header) configure -state normal

    grid $var(header) $f.yscroll -sticky news
    grid $f.xscroll -stick news
    grid rowconfigure $f 0 -weight 1
    grid columnconfigure $f 0 -weight 1

    grid $p.ext -row 0 -column 0 -sticky ns
    grid $p.header -row 0 -column 1 -sticky news
    grid columnconfigure $p 1 -weight 1

    # Table
    set f [ttk::labelframe $w.tbl -padding {0 2} \
	       -text [msgcat::mc {Extension Data}]]

    set var(tbl) [table $f.t \
			 -state disabled \
			 -usecommand 0 \
			 -variable $var(tbldb) \
			 -colorigin 1 \
			 -roworigin 0 \
			 -cols $iprism(mincols) \
			 -rows $iprism(minrows) \
			 -width -1 \
			 -height -1 \
			 -colwidth 14 \
			 -maxwidth 300 \
			 -maxheight 300 \
			 -titlerows 1 \
			 -xscrollcommand [list $f.xscroll set]\
			 -yscrollcommand [list $f.yscroll set]\
			 -selecttype row \
			 -selectmode single \
			 -anchor w \
			 -font [font actual TkDefaultFont] \
			 -browsecommand [list PrismSelectCmd $varname %s %S] \
			 -fg [ThemeTreeForeground] \
			 -bg [ThemeTreeBackground] \
			]

    $var(tbl) tag configure sel \
	-fg [ThemeTreeForegroundSelected] -bg [ThemeTreeBackgroundSelected]
    $var(tbl) tag configure title \
	-fg [ThemeHeadingForeground] -bg [ThemeHeadingBackground]

    ttk::scrollbar $f.xscroll -command [list $var(tbl) xview] -orient horizontal
    #ttk::scrollbar $f.yscroll -command [list $var(tbl) yview] -orient vertical
    ttk::scrollbar $f.yscroll -command [list PrismYViewCmd $varname] \
	-orient vertical

    grid $var(tbl) $f.yscroll -sticky news
    grid $f.xscroll -stick news
    grid rowconfigure $f 0 -weight 1
    grid columnconfigure $f 0 -weight 1

    # Buttons
    set f [ttk::frame $w.buttons]
    ttk::button $f.load -text [msgcat::mc {Load}] \
	-command [list PrismLoadFile $varname]
    ttk::button $f.clear -text [msgcat::mc {Clear}] \
	-command [list PrismClear $varname]
    ttk::button $f.plot -text [msgcat::mc {Plot}] \
	-command [list PrismPlot $varname]
    ttk::button $f.histogram -text [msgcat::mc {Histogram}] \
	-command [list PrismHistogram $varname]
    ttk::button $f.image -text [msgcat::mc {Image}] \
	-command [list PrismImage $varname]
    ttk::button $f.close -text [msgcat::mc {Close}] \
	-command [list PrismDestroy $varname]
    pack $f.load $f.clear $f.plot $f.histogram $f.image $f.close \
	-side left -expand true -padx 2 -pady 4

    # Fini
    ttk::separator $w.sext -orient horizontal
    pack $w.buttons $w.sext -side bottom -fill x
    pack $w.param -side top -fill x
    pack $w.tbl -side top -fill both -expand true

    bind $w <<Close>> [list PrismDestroy $varname]

    PrismDialogUpdate $varname

    $var(tbl) see 1,1

    return $varname
}

proc PrismYViewCmd {varname aa bb {cc {}}} {
    upvar #0 $varname var
    global $varname
    global iprism
    
    if {$cc != {}} {
	$var(tbl) yview $aa $bb $cc
    } else {
	$var(tbl) yview $aa $bb
    }

    global $var(tbldb)
    if {[info exists $var(tbldb)]} {
	set nr [starbase_nrows $var(tbldb)]
	set row [expr int([lindex [$var(tbl) yview] 1] * $nr)]
	if {$row>$nr} {
	    set row $nr
	}

	while {$row>$var(last)} {
	    set rr [fitsy table $var(fn) $var(ext) $var(tbldb) $var(last) $iprism(maxevents)]
	    incr var(last) $rr
	    if {$var(last)>=$nr} {
		set var(last) $nr
		break
	    }
	}
    }
}

proc PrismDestroy {varname} {
    upvar #0 $varname var
    global $varname
    global iprism

    global $var(tbldb)
    if {[info exists $var(tbldb)]} {
	unset $var(tbldb)
    }

    set ii [lsearch $iprism(prisms) $varname]
    if {$ii>=0} {
	set iprism(prisms) [lreplace $iprism(prisms) $ii $ii]
    }

    # plot window?
    if {$var(plot)} {
	PlotDestroy $var(plot,var)
    }

    if {[winfo exists $var(top)]} {
	destroy $var(top)
	destroy $var(mb)
    }
    unset $varname
}

proc UpdatePrismDialog {} {
    global iprism

    foreach varname $iprism(prisms) {
	PrismDialogUpdate $varname
    }
}

proc PrismDialogUpdate {varname} {
    upvar #0 $varname var
    global $varname

    set bb $var(top).buttons

    $var(mb).file entryconfig [msgcat::mc {Clear}] -state disabled
    $var(mb).file entryconfig [msgcat::mc {Plot}] -state disabled
    $var(mb).file entryconfig [msgcat::mc {Histogram}] -state disabled
    $var(mb).file entryconfig [msgcat::mc {Image}] -state disabled

    $bb.clear configure -state disabled
    $bb.plot configure -state disabled
    $bb.histogram configure -state disabled
    $bb.image configure -state disabled

    if {$var(fn) == {}} {
	return
    }

    $var(mb).file entryconfig [msgcat::mc {Clear}] -state normal
    $bb.clear configure -state normal

    if {$var(ext) == {}} {
	return
    }

    $var(mb).file entryconfig [msgcat::mc {Image}] -state normal
    $bb.image configure -state normal


    if {[fitsy istable $var(fn) $var(ext)]} {
	$var(mb).file entryconfig [msgcat::mc {Plot}] -state normal
	$var(mb).file entryconfig [msgcat::mc {Histogram}] -state normal

	$bb.plot configure -state normal
	$bb.histogram configure -state normal
    }
}

proc PrismLoadFile {varname} {
    upvar #0 $varname var
    global $varname
    
    set fn [OpenFileDialog fitsfbox $var(top)]
    if {$fn != {}} {
	PrismLoad $varname $fn
    }
}

proc PrismLoad {varname fn} {
    upvar #0 $varname var
    global $varname

    PrismClear $varname
    set var(fn) $fn
    
    set rr [fitsy dir $fn]
    foreach {ext name type info} $rr {
	$var(dir) insert {} end -id $ext -values [list "$name" "$type" "$info"]
    }

    PrismDialogUpdate $varname
}

proc PrismClear {varname} {
    upvar #0 $varname var
    global $varname
    global iprism

    # extension
    foreach id [$var(dir) children {}] {
	$var(dir) delete $id
    }
    set var(fn) {}
    set var(ext) {}
    set var(last) 0

    # header
    $var(header) delete 1.0 end

    # clear previous db
    global $var(tbldb)
    if {[info exists $var(tbldb)]} {
	unset $var(tbldb)
    }
    $var(tbl) configure -rows $iprism(minrows)
    $var(tbl) see 1,1

    PrismDialogUpdate $varname
}

proc PrismPlot {varname} {
    upvar #0 $varname var
    global $varname

    global ed
    
    set w ".${varname}plot"
    set mb ".${varname}plotmb"

    set ed(top) $w
    set ed(ok) 0

    set ed(xx) $var(xx)
    set ed(yy) $var(yy)
    set ed(xerr) $var(xerr)
    set ed(yerr) $var(yerr)

    DialogCreate $w [msgcat::mc {Plot}] ed(ok)

    $w configure -menu $mb
    ThemeMenu $mb

    # file
    $mb add cascade -label [msgcat::mc {File}] -menu $mb.file
    ThemeMenu $mb.file
    $mb.file add command -label [msgcat::mc {Apply}] -command {set ed(ok) 1}
    $mb.file add command -label [msgcat::mc {Cancel}] -command {set ed(ok) 0}

    # edit
    $mb add cascade -label [msgcat::mc {Edit}] -menu $mb.edit
    EditMenu $mb ed

    # param
    set f [ttk::frame $w.param]

    ttk::label $f.txx -text [msgcat::mc {X Column}]
    ttk::menubutton $f.xx -textvariable ed(xx) -menu $f.xx.menu

    ttk::label $f.tyy -text [msgcat::mc {Y Column}]
    ttk::menubutton $f.yy -textvariable ed(yy) -menu $f.yy.menu

    PrismColsMenu $varname $f.xx xx
    PrismColsMenu $varname $f.yy yy

    grid $f.txx $f.xx -padx 2 -pady 2 -sticky ew
    grid $f.tyy $f.yy -padx 2 -pady 2 -sticky ew

    # Buttons
    set f [ttk::frame $w.buttons]
    ttk::button $f.ok -text [msgcat::mc {OK}] -command {set ed(ok) 1} \
        -default active 
    ttk::button $f.cancel -text [msgcat::mc {Cancel}] -command {set ed(ok) 0}
    pack $f.ok $f.cancel -side left -expand true -padx 2 -pady 4

    bind $w <Return> {set ed(ok) 1}

    # Fini
    ttk::separator $w.sep -orient horizontal
    pack $w.param -side top -fill both -expand true
    pack $w.buttons $w.sep -side bottom -fill x

    DialogCenter $w
    DialogWait $w ed(ok) $w.buttons.ok

    if {$ed(ok)} {
	if {$ed(xx) != {} && $ed(yy) != {}} {
	    set var(xx) $ed(xx)
	    set var(yy) $ed(yy)
	    set var(xerr) $ed(xerr)
	    set var(yerr) $ed(yerr)

	    PrismPlotGenerate $varname
	}
    }

    DialogDismiss $w
    destroy $mb
}

proc PrismPlotGenerate {varname} {
    upvar #0 $varname var
    global $varname

    if {$var(xerr) == {} && $var(yerr) == {}} {
	set dim xy
    } elseif {$var(xerr) != {} && $var(yerr) == {}} {
	set dim xyex
    } elseif {$var(xerr) == {} && $var(yerr) != {}} {
	set dim xyey
    } else {
	set dim xyexey
    }

    global $var(tbldb)
    set nrows [starbase_nrows $var(tbldb)]
    set cols [starbase_columns $var(tbldb)]

    set vvarname plot${varname}
    upvar #0 $vvarname vvar
    global $vvarname

    set xdata ${vvarname}xx
    set ydata ${vvarname}yy
    set xedata ${vvarname}xe
    set yedata ${vvarname}ye
    global $xdata $ydata $xedata $yedata

    if {[info command $xdata] == {}} {
	blt::vector create $xdata $ydata $xedata $yedata
    }

    set xx {}
    set yy {}
    set xe {}
    set ye {}
    for {set ii 1} {$ii <= $nrows} {incr ii} {
	foreach col $cols {
	    set val [starbase_get $var(tbldb) $ii \
			 [starbase_colnum $var(tbldb) $col]]
	    # here's a tough one-- what to do if the col is blank
	    # for now, just set it to '0'
	    if {[string trim "$val"] == {}} {
		set val 0
	    }
	    eval "set \{$col\} \{$val\}"
	}

	switch $dim {
	    xy {
		append xx [subst "$var(xx) "]
		append yy [subst "$var(yy) "]
		append xe [subst "0 "]
		append ye [subst "0 "]
	    }
	    xyex {
		append xx [subst "$var(xx) "]
		append yy [subst "$var(yy) "]
		append xe [subst "$var(xerr) "]
		append ye [subst "0 "]
	    }
	    xyey {
		append xx [subst "$var(xx) "]
		append yy [subst "$var(yy) "]
		append xe [subst "0 "]
		append ye [subst "$var(yerr) "]
	    }
	    xyexey {
		append xx [subst "$var(xx) "]
		append yy [subst "$var(yy) "]
		append xe [subst "$var(xerr) "]
		append ye [subst "$var(yerr) "]
	    }
	}
    }

    $xdata set $xx
    $ydata set $yy
    $xedata set $xe
    $yedata set $ye

    if {![PlotPing $vvarname]} {
	PlotDialog $vvarname $var(title)
	PlotAddGraph $vvarname scatter

	set vvar(mode) pointer
	PlotChangeMode $vvarname

	set var(plot) 1
	set var(plot,var) $vvarname

	set vvar(graph,ds,xdata) $xdata
	set vvar(graph,ds,ydata) $ydata
	set vvar(graph,ds,xedata) $xedata
	set vvar(graph,ds,yedata) $yedata

	PlotExternal $vvarname xyexey
    }

    # colnames can change
    set xtitle [regsub -all {\$*} $var(xx) {}]
    set ytitle [regsub -all {\$*} $var(yy) {}]
    PlotTitle $vvarname $var(title) $xtitle $ytitle

    PlotStats $vvarname
    PlotList $vvarname
}

proc PrismHistogram {varname} {
    upvar #0 $varname var
    global $varname

    if {$var(fn) == {} || $var(ext) == {}} {
	return
    }

 #   fitsy histogram $var(fn) $var(ext) $col vecx vecy $num
}

proc PrismImage {varname} {
    upvar #0 $varname var
    global $varname

    if {$var(fn) == {} || $var(ext) == {}} {
	return
    }

    if {[fitsy isimage $var(fn) $var(ext)]} {
	PrismImageImage $varname
    } elseif {[fitsy istable $var(fn) $var(ext)]} {
	PrismImageTable $varname
    }
}
    
proc PrismImageImage {varname} {
    upvar #0 $varname var
    global $varname

    CreateFrame
    LoadFitsFile "$var(fn)\[$var(ext)\]" {} {}
    FinishLoad
}

proc PrismImageTable {varname} {
    upvar #0 $varname var
    global $varname

    global ed
    
    set w ".${varname}img"
    set mb ".${varname}imgmb"

    set ed(top) $w
    set ed(ok) 0

    set ed(xx) $var(xx)
    set ed(yy) $var(yy)

    DialogCreate $w [msgcat::mc {Bin Image}] ed(ok)

    $w configure -menu $mb
    ThemeMenu $mb

    # file
    $mb add cascade -label [msgcat::mc {File}] -menu $mb.file
    ThemeMenu $mb.file
    $mb.file add command -label [msgcat::mc {Apply}] -command {set ed(ok) 1}
    $mb.file add command -label [msgcat::mc {Cancel}] -command {set ed(ok) 0}

    # edit
    $mb add cascade -label [msgcat::mc {Edit}] -menu $mb.edit
    EditMenu $mb ed

    # param
    set f [ttk::frame $w.param]

    ttk::label $f.txx -text [msgcat::mc {X Column}]
    ttk::menubutton $f.xx -textvariable ed(xx) -menu $f.xx.menu

    ttk::label $f.tyy -text [msgcat::mc {Y Column}]
    ttk::menubutton $f.yy -textvariable ed(yy) -menu $f.yy.menu

    PrismColsMenu $varname $f.xx xx
    PrismColsMenu $varname $f.yy yy

    grid $f.txx $f.xx -padx 2 -pady 2 -sticky ew
    grid $f.tyy $f.yy -padx 2 -pady 2 -sticky ew

    # Buttons
    set f [ttk::frame $w.buttons]
    ttk::button $f.ok -text [msgcat::mc {OK}] -command {set ed(ok) 1} \
        -default active 
    ttk::button $f.cancel -text [msgcat::mc {Cancel}] -command {set ed(ok) 0}
    pack $f.ok $f.cancel -side left -expand true -padx 2 -pady 4

    bind $w <Return> {set ed(ok) 1}

    # Fini
    ttk::separator $w.sep -orient horizontal
    pack $w.param -side top -fill both -expand true
    pack $w.buttons $w.sep -side bottom -fill x

    DialogCenter $w
    DialogWait $w ed(ok) $w.buttons.ok

    if {$ed(ok)} {
	if {$ed(xx) != {} && $ed(yy) != {}} {
	    set var(xx) $ed(xx)
	    set var(yy) $ed(yy)

	    CreateFrame
	    LoadFitsFile "$var(fn)\[$var(ext)\]\[bin=$ed(xx),$ed(yy)\]" {} {}
	    FinishLoad
	}
    }

    DialogDismiss $w
    destroy $mb
}

proc PrismColsMenu {varname f ww} {
    upvar #0 $varname var
    global $varname
    global $var(tbldb)
    global ed
    global ds9

    set m $f.menu

    ThemeMenu $m
    $m configure -tearoff 0
    if {[TBLValidDB $var(tbldb)]} {
	set cnt -1
	foreach col [starbase_columns $var(tbldb)] {
	    $m add command -label $col -command "set ed($ww) \\$col"

	    # wrap if needed
	    incr cnt
	    if {$cnt>=$ds9(menu,size,wrap)} {
		set cnt 0
		$m entryconfig $col -columnbreak 1
	    }
	}
    }
}

proc PrismExtCmd {varname} {
    upvar #0 $varname var
    global $varname
    global iprism

    set var(ext) [$var(dir) selection]
    if {$var(ext) == {}} {
	return
    }

    # clear previous cols
    set var(xx) {}
    set var(yy) {}
    set var(xerr) {}
    set var(yerr) {}

    # header
    $var(header) delete 1.0 end
    $var(header) insert end [fitsy header $var(fn) $var(ext)]
    # color tag keywords
    set stop [$var(header) index end]
    for {set ii 1.0} {$ii<$stop} {set ii [expr $ii+1]} {
	$var(header) tag add keyword $ii "$ii +8 chars"
    }
    # see top
    $var(header) see 1.0

    # table
    # clear previous db
    global $var(tbldb)
    if {[info exists $var(tbldb)]} {
	unset $var(tbldb)
    }

    if {![fitsy istable $var(fn) $var(ext)]} {
	$var(tbl) configure -rows $iprism(minrows)
	$var(tbl) see 1,1

	PrismDialogUpdate $varname
	return
    }

    set t $var(tbldb)
    upvar $t T

    # init db
    set T(Header) {}
    set T(HLines) 0
    set T(Nrows) 0
    set T(Ncols) 0
    
    set var(last) \
	[fitsy table $var(fn) $var(ext) $var(tbldb) 0 $iprism(maxevents)]

    set T(Dashes) [regsub -all {[A-Za-z0-9]} $T(Header) {-}]
    set T(Ndshs) [llength $T(Header)]

    incr ${t}(HLines)
    set n $T(HLines)
    set T(H_$n) $T(Header)
    incr ${t}(HLines)
    set n $T(HLines)
    set T(H_$n) $T(Dashes)

    starbase_colmap $t

    set nr [starbase_nrows $t]
    if {$nr > $iprism(minrows)} {
	$var(tbl) configure -rows [expr $nr+1]
    } else {
	$var(tbl) configure -rows $iprism(minrows)
    }
    $var(tbl) see 1,1

    PrismDialogUpdate $varname
}

proc PrismSelectCmd {varname ss rc} {
    upvar #0 $varname var
    global $varname
}

# Process Cmds

proc ProcessPrismCmd {varname iname} {
    upvar $varname var
    upvar $iname i
    global iprism

    set ref [lindex $iprism(prisms) end]
    global cvarname
    set cvarname $ref

    prism::YY_FLUSH_BUFFER
    prism::yy_scan_string [lrange $var $i end]
    prism::yyparse
    incr i [expr $prism::yycnt-1]
}

proc ProcessSendPrismCmd {proc id param {sock {}} {fn {}}} {
    global iprism
    global parse
    set parse(proc) $proc
    set parse(id) $id

    set ref [lindex $iprism(prisms) end]
    global cvarname
    set cvarname $ref

    prismsend::YY_FLUSH_BUFFER
    prismsend::yy_scan_string $param
    prismsend::yyparse
}

proc PrismCmdRef {ref} {
    global iprism
    global cvarname

    # look for reference in current list
    if {[lsearch $iprism(prisms) $ref] < 0} {
	Error "[msgcat::mc {Unable to find prism window}] $ref"
	return
    }

    set cvarname $ref
}

proc PrismCmdLoad {fn} {
    global iprism

    PrismDialog prism
    PrismLoad [lindex $iprism(prisms) end] $fn
}
