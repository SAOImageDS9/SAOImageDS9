#  Copyright (C) 1999-2020
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc PrismDef {} {
    global prism
    global iprism

    set iprism(prisms) {}
    set iprism(seq) 0

    set iprism(mincols) 10
    set iprism(minrows) 20
    set iprism(block) 1000
}

proc PrismDialog {varname} {
    global prism
    global iprism
    global ds9
    global pap

    # first determine if aready in use, then increment
    if {[lsearch $iprism(prisms) $varname] >= 0} {
	incr iprism(seq)
	append varname $iprism(seq)
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
    set var(rows) 0
    set var(type) fits
    set var(offset) 0
    set var(load) mmapincr
    set var(ext) 0
    set var(extname) {}
    set var(extnames) {}
    set var(extnum) 0
    set var(search) {}

    set var(canvas,theme) $pap(canvas,theme)

    # also set PrismExtCmd
    set var(start) 0
    set var(goto) 1

    set var(xx) {}
    set var(yy) {}
    set var(xerr) {}
    set var(yerr) {}

    set var(graph,ds,line,color) blue
    set var(graph,ds,line,width) 0
    set var(graph,ds,line,dash) 0
    set var(graph,ds,line,shape,symbol) circle
    set var(graph,ds,line,shape,color) blue
    set var(graph,ds,line,shape,fill) 1

    set var(graph,ds,error,color) red
    set var(graph,ds,error,width) 1

    set var(col) {}

    # also set PrismExtCmd
    set var(bar,num) 10
    set var(bar,min) 0
    set var(bar,max) 0
    set var(bar,minmax) 1
    set var(bar,width) 1

    set var(graph,ds,bar,border,color) blue
    set var(graph,ds,bar,color) white
    set var(graph,ds,bar,fill) 1

    set var(plot,seq) 0
    set var(plot,data,seq) 0
    set var(plot,mode) newplot

    set var(ccp,last) {}
    set var(ccp,prev) {}

    # create the window
    set w $var(top)
    set mb $var(mb)

    Toplevel $w $mb 6 [msgcat::mc {Prism}] "PrismDestroy $varname"
    $mb add cascade -label [msgcat::mc {File}] -menu $mb.file
    $mb add cascade -label [msgcat::mc {Edit}] -menu $mb.edit
    $mb add cascade -label [msgcat::mc {Table}] -menu $mb.table

    ThemeMenu $mb.file
    $mb.file add command -label [msgcat::mc {Open}] \
	-command [list PrismLoadFile $varname] -accelerator "${ds9(ctrl)}O"
    $mb.file add separator
    $mb.file add cascade -label [msgcat::mc {Import}] -menu $mb.file.import
    $mb.file add cascade -label [msgcat::mc {Export}] -menu $mb.file.export
    $mb.file add separator
    $mb.file add command -label [msgcat::mc {Image}] \
	-command [list PrismImage $varname]
    $mb.file add command -label [msgcat::mc {Clear}] \
	-command [list PrismClear $varname]
    $mb.file add separator
    $mb.file add command -label [msgcat::mc {Close}] \
	-command [list PrismDestroy $varname] -accelerator "${ds9(ctrl)}W"

    # Import
    ThemeMenu $mb.file.import
    $mb.file.import add command -label "[msgcat::mc {VOTable}]..." \
	-command [list PrismImportVOTFile $varname]
    $mb.file.import add command -label "[msgcat::mc {Starbase}]..." \
	-command [list PrismImportRDBFile $varname]
    $mb.file.import add command -label "[msgcat::mc {Tab-Separated-Value}]..." \
	-command [list PrismImportTSVFile $varname]

    # Export
    ThemeMenu $mb.file.export
    $mb.file.export add command -label "[msgcat::mc {VOTable}]..." \
	-command [list TBLSaveVOTFile $varname]
    $mb.file.export add command -label "[msgcat::mc {Starbase}]..." \
	-command [list TBLSaveRDBFile $varname]
    $mb.file.export add command -label "[msgcat::mc {Tab-Separated-Value}]..." \
	-command [list TBLSaveTSVFile $varname]

    ThemeMenu $mb.edit
    $mb.edit add command -label [msgcat::mc {Cut}] \
	-state disabled -accelerator "${ds9(ctrl)}X"
    $mb.edit add command -label [msgcat::mc {Copy}] \
	-command [list PrismCopy $varname] -accelerator "${ds9(ctrl)}C"
    $mb.edit add command -label [msgcat::mc {Paste}] \
	-state disabled -accelerator "${ds9(ctrl)}V"
    $mb.edit add separator
    $mb.edit add command -label [msgcat::mc {Select All}] \
	-command [list SimpleTextSelectAll $varname]
    $mb.edit add command -label [msgcat::mc {Select None}] \
	-command [list SimpleTextSelectNone $varname]
    $mb.edit add separator
    $mb.edit add command -label "[msgcat::mc {Find}]..." \
	-command "SimpleTextFind $varname" -accelerator "${ds9(ctrl)}F"
    $mb.edit add command -label [msgcat::mc {Find Next}] \
	-command "SimpleTextFindNext $varname" -accelerator "${ds9(ctrl)}G"

    ThemeMenu $mb.table
    $mb.table add command -label [msgcat::mc {Plot}] \
	-command [list PrismPlot $varname]
    $mb.table add command -label [msgcat::mc {Histogram}] \
	-command [list PrismHistogram $varname]
    $mb.table add separator
    $mb.table add command -label [msgcat::mc {First Block}] \
	-command [list PrismTableFirst $varname]
    $mb.table add command -label [msgcat::mc {Next Block}] \
	-command [list PrismTableNext $varname]
    $mb.table add command -label [msgcat::mc {Previous Block}] \
	-command [list PrismTablePrev $varname]
    $mb.table add command -label [msgcat::mc {Last Block}] \
	-command [list PrismTableLast $varname]
    $mb.table add separator
    $mb.table add command -label "[msgcat::mc {Goto Row}]..." \
	-command [list PrismTableGotoQuery $varname]

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
    set f [ttk::labelframe $p.header -padding {0 2} -text [msgcat::mc {Header}]]

    set var(text) $f.text
    roText::roText $var(text)

    $var(text) configure \
	-wrap none \
	-height 10 \
	-yscrollcommand [list $f.yscroll set] \
	-xscrollcommand [list $f.xscroll set] \
	-fg [ThemeTreeForeground] \
	-bg [ThemeTreeBackground] \
	-state normal
    
    ttk::scrollbar $f.yscroll \
	-command [list roText::$var(text) yview] -orient vertical
    ttk::scrollbar $f.xscroll \
	-command [list roText::$var(text) xview] -orient horizontal
    
    $var(text) tag configure keyword -foreground [ThemeBold]

    grid $var(text) $f.yscroll -sticky news
    grid $f.xscroll -stick news
    grid rowconfigure $f 0 -weight 1
    grid columnconfigure $f 0 -weight 1

    grid $p.ext -row 0 -column 0 -sticky ns
    grid $p.header -row 0 -column 1 -sticky news
    grid columnconfigure $p 1 -weight 1

    bind $var(top) <<Find>> [list SimpleTextFind $varname]
    bind $var(top) <<FindNext>> [list SimpleTextFindNext $varname]

    # Table
    set f [ttk::labelframe $w.tbl -padding {0 2} \
	       -text [msgcat::mc {Extension Data}]]

    set var(tbl) [table $f.t \
		      -state disabled \
		      -usecommand 0 \
		      -variable $var(tbldb) \
		      -colorigin 0 \
		      -roworigin 0 \
		      -cols $iprism(mincols) \
		      -rows $iprism(minrows) \
		      -width -1 \
		      -height -1 \
		      -colwidth 14 \
		      -maxwidth 300 \
		      -maxheight 300 \
		      -titlerows 1 \
		      -titlecols 1 \
		      -resizeborders col \
		      -xscrollcommand [list $f.xscroll set]\
		      -yscrollcommand [list $f.yscroll set]\
		      -selecttitle 1 \
		      -selectmode single \
		      -selecttype col \
		      -anchor w \
		      -font [font actual TkDefaultFont] \
		      -browsecommand [list PrismTableBrowseCmd $varname %S] \
		      -fg [ThemeTreeForeground] \
		      -bg [ThemeTreeBackground] \
		     ]

    $var(tbl) tag configure sel \
	-fg [ThemeSelectedForeground] -bg [ThemeSelectedBackground]
    $var(tbl) tag configure title \
	-fg [ThemeForeground] -bg [ThemeBackground] -bd 0
    $var(tbl) width 0 8
    
    ttk::scrollbar $f.xscroll -command [list $var(tbl) xview] -orient horizontal
    ttk::scrollbar $f.yscroll -command [list $var(tbl) yview] -orient vertical

    grid $var(tbl) $f.yscroll -sticky news
    grid $f.xscroll -stick news
    grid rowconfigure $f 0 -weight 1
    grid columnconfigure $f 0 -weight 1

    TBLBindMouseWheel $varname

    # Buttons
    set f [ttk::frame $w.buttons]
    ttk::button $f.load -text [msgcat::mc {Open}] \
	-command [list PrismLoadFile $varname]
    ttk::button $f.clear -text [msgcat::mc {Clear}] \
	-command [list PrismClear $varname]
    ttk::button $f.image -text [msgcat::mc {Image}] \
	-command [list PrismImage $varname]
    ttk::button $f.plot -text [msgcat::mc {Plot}] \
	-command [list PrismPlot $varname]
    ttk::button $f.histogram -text [msgcat::mc {Histogram}] \
	-command [list PrismHistogram $varname]
    ttk::button $f.close -text [msgcat::mc {Close}] \
	-command [list PrismDestroy $varname]

    pack $f.load $f.clear $f.image $f.plot $f.histogram $f.close \
	-side left -expand true -padx 2 -pady 4

    # Fini
    ttk::separator $w.sext -orient horizontal
    pack $w.buttons $w.sext -side bottom -fill x
    pack $w.param -side top -fill x
    pack $w.tbl -side top -fill both -expand true

    bind $w <<Close>> [list PrismDestroy $varname]

    PrismDialogUpdate $varname

    return $varname
}

proc PrismDestroy {varname} {
    upvar #0 $varname var
    global $varname
    global iprism

    # just in case
    fitsy close

    global $var(tbldb)
    if {[info exists $var(tbldb)]} {
	unset $var(tbldb)
    }

    set ii [lsearch $iprism(prisms) $varname]
    if {$ii>=0} {
	set iprism(prisms) [lreplace $iprism(prisms) $ii $ii]
    }

    if {[winfo exists $var(top)]} {
	destroy $var(top)
	destroy $var(mb)
    }

    unset $varname
}

proc PrismCopy {varname} {
    upvar #0 $varname var
    global $varname

    set w [focus -displayof $var(top)]
    if {$w == $var(dir)} {
    } elseif {$w == $var(text)} {
	tk_textCopy $w
    } elseif {$w == $var(tbl)} {
	TBLCopyTable $varname
    }
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
    $var(mb).file entryconfig [msgcat::mc {Image}] -state disabled

    $var(mb).table entryconfig [msgcat::mc {Plot}] -state disabled
    $var(mb).table entryconfig [msgcat::mc {Histogram}] -state disabled

    $var(mb).table entryconfig [msgcat::mc {First Block}] -state disabled
    $var(mb).table entryconfig [msgcat::mc {Next Block}] -state disabled
    $var(mb).table entryconfig [msgcat::mc {Previous Block}] -state disabled
    $var(mb).table entryconfig [msgcat::mc {Last Block}] -state disabled
    $var(mb).table entryconfig "[msgcat::mc {Goto Row}]..." -state disabled

    $bb.clear configure -state disabled
    $bb.image configure -state disabled

    $bb.plot configure -state disabled
    $bb.histogram configure -state disabled

    if {$var(fn) == {}} {
	return
    }

    $var(mb).file entryconfig [msgcat::mc {Clear}] -state normal
    $var(mb).table entryconfig "[msgcat::mc {Goto Row}]..." -state normal
    $bb.clear configure -state normal

    switch $var(type) {
	fits  {
	    $var(mb).file entryconfig [msgcat::mc {Image}] -state normal
	    $bb.image configure -state normal

	    # open extension
	    fitsy open $var(fn) $var(load) $var(ext)

	    if {[fitsy istable]} {
		$var(mb).table entryconfig [msgcat::mc {Plot}] -state normal
		$var(mb).table entryconfig [msgcat::mc {Histogram}] \
		    -state normal

		$var(mb).table entryconfig [msgcat::mc {First Block}] \
		    -state normal
		$var(mb).table entryconfig [msgcat::mc {Next Block}] \
		    -state normal
		$var(mb).table entryconfig [msgcat::mc {Previous Block}] \
		    -state normal
		$var(mb).table entryconfig [msgcat::mc {Last Block}] \
		    -state normal

		$bb.plot configure -state normal
		$bb.histogram configure -state normal
	    }

	    fitsy close
	}
	ascii {
	    $var(mb).file entryconfig [msgcat::mc {Image}] -state disabled
	    $bb.image configure -state disabled

	    $var(mb).table entryconfig [msgcat::mc {Plot}] -state normal
	    $var(mb).table entryconfig [msgcat::mc {Histogram}] -state normal
	    $bb.plot configure -state normal
	    $bb.histogram configure -state normal
	}
    }
}

# Load

proc PrismDialogLoad {varname} {
    upvar #0 $varname var
    global $varname

    global current

    if {$current(frame) == {}} {
	PrismDialog $varname
	return
    }
    if {![$current(frame) has fits]} {
	PrismDialog $varname
	return
    }

    set fn [$current(frame) get fits file name full]
    set id [string first "\[" $fn]
    if {$id > 0} {
	set fn [string range $fn 0 [expr $id-1]]
    }

    if {![file exists $fn]} {
	PrismDialog $varname
	return
    }

    set varname [PrismDialog prism]
    PrismLoad $varname $fn
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
    global ds9
    
    PrismClear $varname

    if {![file exists $fn]} {
	Error "[msgcat::mc {File not found}]: $fn"
	return
    }

    set var(fn) $fn
    set var(type) fits
    switch $ds9(wm) {
	x11 -
	aqua {
	    set var(load) mmapincr

	    # compressed?
	    catch {
		set ch [open $fn r]
		fconfigure $ch -encoding binary -translation binary
		set bb [read $ch 2]
		close $ch
		binary scan $bb H4 cc
		if {$cc == {1f8b}} {
		    set var(load) allocgz
		}
	    }
	}
	win32 {
	    set var(load) allocgz
	}
    }

    set rr [fitsy dir $var(fn) $var(load)]
    foreach {ext name type info} $rr {
	$var(dir) insert {} end -id $ext -values [list "$name" "$type" "$info"]
	lappend ${varname}(extnames) $name
	incr ${varname}(extnum)
    }

    # is primary NULL?
    set var(ext) 0
    if {$var(extnum)>1} {
	foreach {ext name type info} $rr {
	    if {$info != "NULL"} {
		break
	    }
	    incr var(ext)
	}
	# sanity check
	if {$var(ext) >= $var(extnum)} {
	    set var(ext) 0
	}
    }
    set var(extname) [lindex $var(extnames) $var(ext)]
    $var(dir) selection set $var(ext)
	    
    # need this so that PrismExtCmd is invoked before next command
    update
    
    PrismDialogUpdate $varname
}

# Import

proc PrismImportVOTFile {varname} {
    upvar #0 $varname var
    global $varname

    set fn [OpenFileDialog votfbox $var(top)]
    if {$fn != {}} {
	PrismImportFn $varname $fn VOTRead
    }
}

proc PrismImportRDBFile {varname} {
    upvar #0 $varname var
    global $varname

    set fn [OpenFileDialog rdbfbox $var(top)]
    if {$fn != {}} {
	PrismImportFn $varname $fn starbase_read
    }
}

proc PrismImportTSVFile {varname} {
    upvar #0 $varname var
    global $varname

    set fn [OpenFileDialog tsvfbox $var(top)]
    if {$fn != {}} {
	PrismImportFn $varname $fn TSVRead
    }
}

proc PrismImportFn {varname fn reader} {
    upvar #0 $varname var
    global $varname
    global $var(tbldb)
    global iprism
    
    PrismClear $varname

    if {![file exists $fn]} {
	Error "[msgcat::mc {File not found}]: $fn"
	return
    }

    set var(fn) $fn
    set var(type) ascii
    $reader $var(tbldb) $fn

    $var(tbl) configure -titlerows 1
    set var(offset) 0

    # starbase_ncols is just cols
    # configure cols includes extra row
    set nc [starbase_ncols $var(tbldb)]
    set cc [expr $nc+1]
    if {$cc > $iprism(mincols)} {
	$var(tbl) configure -cols $cc
    } else {
	$var(tbl) configure -cols $iprism(mincols)
    }

    # starbase_nrows is just rows
    # configure rows includes all header
    set nr [starbase_nrows $var(tbldb)]
    set cc [expr $nr+1]
    if {$cc > $iprism(minrows)} {
	$var(tbl) configure -rows $cc
    } else {
	$var(tbl) configure -rows $iprism(minrows)
    }
    set var(rows) $nr
    
    set info \
	"[starbase_ncols $var(tbldb)] cols, [starbase_nrows $var(tbldb)] rows"
    $var(dir) insert {} end -id 0 -values [list [file tail $fn] "Table" "$info"]
    lappend ${varname}(extnames) [file tail $fn]
    incr ${varname}(extnum)

    set var(ext) 0
    set var(extname) [lindex $var(extnames) $var(ext)]
    $var(dir) selection set $var(ext)
    
    # add row numbers
    set $var(tbldb)(0,0) {Row}
    for {set ii 1} {$ii<=$nr} {incr ii} {
	set $var(tbldb)($ii,0) $ii
    }

    $var(tbl) see 1,1

    # need this so that PrismExtCmd is invoked before next command
    update
    
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

    # cleanup
    fitsy close

    set var(fn) {}
    set var(rows) 0
    set var(type) fits
    set var(offset) 0
    set var(load) {}
    set var(ext) 0
    set var(extname) {}
    set var(extnames) {}
    set var(extnum) 0

    # reset plots
    set var(plot,seq) 0
    set var(plot,data,seq) 0
    set var(plot,mode) newplot

    # header
    $var(text) delete 1.0 end

    # clear previous db
    global $var(tbldb)
    if {[info exists $var(tbldb)]} {
	unset $var(tbldb)
    }
    $var(tbl) configure -rows $iprism(minrows)
    $var(tbl) configure -titlerows 1

    PrismDialogUpdate $varname
}

proc PrismPlot {varname} {
    upvar #0 $varname var
    global $varname

    global ed
    global pap

    # sanity check
    if {$var(fn) == {}} {
	Error "No file loaded"
	return
    }

    set w ".${varname}plot"
    set mb ".${varname}plotmb"

    set ed(top) $w
    set ed(ok) 0

    set ed(xx) $var(xx)
    set ed(yy) $var(yy)
    set ed(xerr) $var(xerr)
    set ed(yerr) $var(yerr)

    set ed(canvas,theme) $pap(canvas,theme)

    set ed(graph,ds,line,color) $var(graph,ds,line,color)
    set ed(graph,ds,line,width) $var(graph,ds,line,width)
    set ed(graph,ds,line,dash) $var(graph,ds,line,dash)
    set ed(graph,ds,line,shape,symbol) $var(graph,ds,line,shape,symbol)
    set ed(graph,ds,line,shape,color) $var(graph,ds,line,shape,color)
    set ed(graph,ds,line,shape,fill) $var(graph,ds,line,shape,fill)

    set ed(graph,ds,error,color) $var(graph,ds,error,color)
    set ed(graph,ds,error,width) $var(graph,ds,error,width)

    set ed(plot,mode) $var(plot,mode)

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

    set g [ttk::frame $w.param]

    # Params
    set f [ttk::labelframe $g.plot -text [msgcat::mc {Parameters}]]

    ttk::label $f.txx -text [msgcat::mc {X Column}]
    ttk::menubutton $f.xx -textvariable ed(xx) -menu $f.xx.menu

    ttk::label $f.tyy -text [msgcat::mc {Y Column}]
    ttk::menubutton $f.yy -textvariable ed(yy) -menu $f.yy.menu

    ttk::label $f.txerr -text [msgcat::mc {X Error Column}]
    ttk::menubutton $f.xerr -textvariable ed(xerr) -menu $f.xerr.menu

    ttk::label $f.tyerr -text [msgcat::mc {Y Error Column}]
    ttk::menubutton $f.yerr -textvariable ed(yerr) -menu $f.yerr.menu

    PrismColsMenu $varname $f.xx xx {}
    PrismColsMenu $varname $f.yy yy {}
    PrismColsMenu $varname $f.xerr xerr {}
    PrismColsMenu $varname $f.yerr yerr {}

    grid $f.txx $f.xx $f.txerr $f.xerr -padx 2 -pady 2 -sticky ew
    grid $f.tyy $f.yy $f.tyerr $f.yerr -padx 2 -pady 2 -sticky ew

    # Properties
    set f [ttk::labelframe $g.prop -text [msgcat::mc {Properties}]]

    ttk::checkbutton $f.theme -text [msgcat::mc {Use Theme Colors}] \
	-variable ed(canvas,theme)

    ttk::label $f.tcolor -text [msgcat::mc {Color}]
    ColorMenuButton $f.color ed graph,ds,line,color {}

    ttk::label $f.twidth -text [msgcat::mc {Width}]
    ttk::menubutton $f.width -textvariable ed(graph,ds,line,width) \
	-menu $f.width.menu
    PlotLineWidthMenu $f.width.menu ed {}

    ttk::label $f.tshape -text [msgcat::mc {Shape}]
    ttk::menubutton $f.shape -textvariable ed(graph,ds,line,shape,symbol) \
	-menu $f.shape.menu
    PlotLineShapeMenu $f.shape.menu ed {}

    ttk::label $f.tshapecolor -text [msgcat::mc {Color}]
    ColorMenuButton $f.shapecolor ed graph,ds,line,shape,color {}

    ttk::checkbutton $f.shapefill -text [msgcat::mc {Fill}] \
	-variable ed(graph,ds,line,shape,fill)

    ttk::label $f.terror -text [msgcat::mc {Error}]
    ColorMenuButton $f.error ed graph,ds,error,color {}

    ttk::label $f.terrorwidth -text [msgcat::mc {Width}]
    WidthDashMenuButton $f.errorwidth ed graph,ds,error,width {} {} {}

    grid $f.theme - -padx 2 -pady 2 -sticky ew
    grid $f.tcolor $f.color $f.twidth $f.width \
	-padx 2 -pady 2 -sticky ew
    grid $f.tshape $f.shape $f.tshapecolor $f.shapecolor $f.shapefill \
	-padx 2 -pady 2 -sticky ew
    grid $f.terror $f.error $f.terrorwidth $f.errorwidth \
	-padx 2 -pady 2 -sticky ew

    # Mode
    set f [ttk::labelframe $g.mode -text [msgcat::mc {Behavior}]]

    ttk::radiobutton $f.newplot -text [msgcat::mc {New Plot}] \
	-variable ed(plot,mode) -value newplot
    ttk::radiobutton $f.newgraph -text [msgcat::mc {New Graph}] \
	-variable ed(plot,mode) -value newgraph
    ttk::radiobutton $f.newdataset -text [msgcat::mc {Overplot}] \
	-variable ed(plot,mode) -value newdataset

    grid x $f.newplot $f.newgraph $f.newdataset -padx 2 -pady 2 -sticky ew

    pack $g.plot $g.prop $g.mode -side top -fill both -expand true

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

    DialogWait $w ed(ok) $w.buttons.ok
    destroy $w
    destroy $mb

    if {$ed(ok)} {
	set var(xx) $ed(xx)
	set var(yy) $ed(yy)
	set var(xerr) $ed(xerr)
	set var(yerr) $ed(yerr)

	set var(canvas,theme) $ed(canvas,theme)

	set var(graph,ds,line,color) $ed(graph,ds,line,color)
	set var(graph,ds,line,width) $ed(graph,ds,line,width)
	set var(graph,ds,line,dash) $ed(graph,ds,line,dash)
	set var(graph,ds,line,shape,symbol) $ed(graph,ds,line,shape,symbol)
	set var(graph,ds,line,shape,color) $ed(graph,ds,line,shape,color)
	set var(graph,ds,line,shape,fill) $ed(graph,ds,line,shape,fill)

	set var(graph,ds,error,color) $ed(graph,ds,error,color)
	set var(graph,ds,error,width) $ed(graph,ds,error,width)

	set var(plot,mode) $ed(plot,mode)

	if {$ed(xx) != {} && $ed(yy) != {}} {
	    PrismPlotGenerate $varname
	} else {
	    Error "[msgcat::mc {Unable to generate plot}]"
	}
    }
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

    global iap
    switch $var(plot,mode) {
	newplot {
	    incr ${varname}(plot,seq)
	    set vvarname plot$var(plot,seq)${varname}
	}
	newgraph -
	newdataset {
	    set vvarname [lindex $iap(plots) end]
	    if {$vvarname == {}} {
		incr ${varname}(plot,seq)
		set vvarname plot$var(plot,seq)${varname}
	    }
	}
    }
    upvar #0 $vvarname vvar
    global $vvarname

    set xdata ${vvarname}xx$var(plot,data,seq)${varname}
    set ydata ${vvarname}yy$var(plot,data,seq)${varname}
    set xedata ${vvarname}xe$var(plot,data,seq)${varname}
    set yedata ${vvarname}ye$var(plot,data,seq)${varname}
    incr ${varname}(plot,data,seq)

    global $xdata $ydata
    if {[info command $xdata] == {}} {
	blt::vector create $xdata
    }
    if {[info command $ydata] == {}} {
	blt::vector create $ydata
    }

    set txx {}
    set tyy {}
    if {[catch {
    switch $var(type) {
	fits {PrismPlotGenerateFits $varname $vvarname $dim $xdata $ydata $xedata $yedata txx tyy}
	ascii {PrismPlotGenerateAscii $varname $vvarname $dim $xdata $ydata $xedata $yedata txx tyy}
    }
    }]} {
	Error "[msgcat::mc {Unable to generate plot}]"
	return
    }

    upvar #0 $vvarname vvar
    global $vvarname

    switch $var(plot,mode) {
	newplot {
	    PlotDialog $vvarname "[string totitle $varname] Plot" true
	    PlotAddGraph $vvarname line
	    PlotTitle $vvarname $var(extname) $txx $tyy
	}
	newgraph {
	    if {![PlotPing $vvarname]} {
		PlotDialog $vvarname "[string totitle $varname] Plot" true
	    }
	    PlotAddGraph $vvarname line
	    PlotTitle $vvarname $var(extname) $txx $tyy
	}
	newdataset {
	    if {![PlotPing $vvarname]} {
		PlotDialog $vvarname "[string totitle $varname] Plot" true
		PlotAddGraph $vvarname line
		PlotTitle $vvarname $var(extname) $txx $tyy
	    }
	}
    }

    set vvar(graph,ds,xdata) $xdata
    set vvar(graph,ds,ydata) $ydata
    switch $dim {
	xy {}
	xyex {set vvar(graph,ds,xedata) $xedata}
	xyey {set vvar(graph,ds,yedata) $yedata}
	xyexey {
	    set vvar(graph,ds,xedata) $xedata
	    set vvar(graph,ds,yedata) $yedata
	}
    }

    PlotExternal $vvarname $dim
    PlotDataSetName $vvarname "$var(extname) $var(xx) $var(yy)"

    set vvar(graph,ds,line,color) $var(graph,ds,line,color)
    set vvar(graph,ds,line,width) $var(graph,ds,line,width)
    set vvar(graph,ds,line,dash) $var(graph,ds,line,dash)
    set vvar(graph,ds,line,shape,symbol) $var(graph,ds,line,shape,symbol)
    set vvar(graph,ds,line,shape,color) $var(graph,ds,line,shape,color)
    set vvar(graph,ds,line,shape,fill) $var(graph,ds,line,shape,fill)
    set vvar(graph,ds,error,color) $var(graph,ds,error,color)
    set vvar(graph,ds,error,width) $var(graph,ds,error,width)
    PlotLineUpdateElement $vvarname

    set vvar(canvas,theme) $var(canvas,theme)
    PlotUpdateAllElement $vvarname

    PlotStats $vvarname
    PlotList $vvarname
}

proc PrismPlotGenerateFits {varname vvarname dim xdata ydata xedata yedata txxname tyyname} {
    upvar #0 $varname var
    global $varname

    global $xdata $ydata $xedata $yedata

    upvar $txxname txx
    upvar $tyyname tyy

    # open extension
    fitsy open $var(fn) $var(load) $var(ext)

    if {[catch {
    switch $dim {
	xy {
	    fitsy plot xy \
		$var(xx) $xdata \
		$var(yy) $ydata
	}
	xyex {
	    if {[info command $xedata] == {}} {
		blt::vector create $xedata
	    }
	    fitsy plot xyex \
		$var(xx) $xdata \
		$var(yy) $ydata \
		$var(xerr) $xedata
	}
	xyey {
	    if {[info command $yedata] == {}} {
		blt::vector create $yedata
	    }
	    fitsy plot xyey \
		$var(xx) $xdata \
		$var(yy) $ydata \
		$var(yerr) $yedata
	}
	xyexey {
	    if {[info command $xedata] == {}} {
		blt::vector create $xedata
	    }
	    if {[info command $yedata] == {}} {
		blt::vector create $yedata
	    }
	    fitsy plot xyexey \
		$var(xx) $xdata \
		$var(yy) $ydata \
		$var(xerr) $xedata \
		$var(yerr) $yedata
	}
    }
    }]} {
	fitsy close
	return -code error
    }

    set txx [string toupper $var(xx)]
    set xnum [fitsy colnum $var(xx)]
    if {$xnum != {}} {
	set unit [string trim [fitsy keyword "TUNIT$xnum"]]
	if {$unit != {}} {
	    append txx " ($unit)"
	}
    }
    set tyy [string toupper $var(yy)]
    set ynum [fitsy colnum $var(yy)]
    if {$ynum != {}} {
	set unit [string trim [fitsy keyword "TUNIT$ynum"]]
	if {$unit != {}} {
	    append tyy " ($unit)"
	}
    }

    fitsy close
}

proc PrismPlotGenerateAscii {varname vvarname dim xdata ydata xedata yedata txxname tyyname} {
    upvar #0 $varname var
    global $varname

    global $xdata $ydata $xedata $yedata
    global $var(tbldb)

    set rows [starbase_nrows $var(tbldb)]
    set colx [starbase_colnum $var(tbldb) $var(xx)]
    set coly [starbase_colnum $var(tbldb) $var(yy)]

    if {[catch {
    switch $dim {
	xy {
	    for {set ii 1} {$ii<=$rows} {incr ii} {
		$xdata append [starbase_get $var(tbldb) $ii $colx]
		$ydata append [starbase_get $var(tbldb) $ii $coly]
	    }
	}
	xyex {
	    if {[info command $xedata] == {}} {
		blt::vector create $xedata
	    }
	    set colxe [starbase_colnum $var(tbldb) $var(xerr)]
	    for {set ii 1} {$ii<=$rows} {incr ii} {
		$xdata append [starbase_get $var(tbldb) $ii $colx]
		$ydata append [starbase_get $var(tbldb) $ii $coly]
		$xedata append [starbase_get $var(tbldb) $ii $colxe]
	    }
	}
	xyey {
	    if {[info command $yedata] == {}} {
		blt::vector create $yedata
	    }
	    set colye [starbase_colnum $var(tbldb) $var(yerr)]
	    for {set ii 1} {$ii<=$rows} {incr ii} {
		$xdata append [starbase_get $var(tbldb) $ii $colx]
		$ydata append [starbase_get $var(tbldb) $ii $coly]
		$yedata append [starbase_get $var(tbldb) $ii $colye]
	    }
	}
	xyexey {
	    if {[info command $xedata] == {}} {
		blt::vector create $xedata
	    }
	    if {[info command $yedata] == {}} {
		blt::vector create $yedata
	    }
	    set colxe [starbase_colnum $var(tbldb) $var(xerr)]
	    set colye [starbase_colnum $var(tbldb) $var(yerr)]
	    for {set ii 1} {$ii<=$rows} {incr ii} {
		$xdata append [starbase_get $var(tbldb) $ii $colx]
		$ydata append [starbase_get $var(tbldb) $ii $coly]
		$xedata append [starbase_get $var(tbldb) $ii $colxe]
		$yedata append [starbase_get $var(tbldb) $ii $colye]
	    }
	}
    }
    }]} {
	return -code error
    }

    upvar $txxname txx
    upvar $tyyname tyy

    set txx [string toupper $var(xx)]
    set tyy [string toupper $var(yy)]
}

proc PrismHistogram {varname} {
    upvar #0 $varname var
    global $varname

    # sanity check
    if {$var(fn) == {}} {
	Error "No file loaded"
	return
    }

    global ed
    global pap

    set w ".${varname}hist"
    set mb ".${varname}histmb"

    set ed(top) $w
    set ed(ok) 0

    set ed(col) $var(col)
    set ed(num) $var(bar,num)
    set ed(min) $var(bar,min)
    set ed(max) $var(bar,max)

    set ed(canvas,theme) $pap(canvas,theme)

    set ed(graph,ds,bar,border,color) $var(graph,ds,bar,border,color)
    set ed(graph,ds,bar,color) $var(graph,ds,bar,color)
    set ed(graph,ds,bar,fill) $var(graph,ds,bar,fill)

    set ed(plot,mode) $var(plot,mode)

    DialogCreate $w [msgcat::mc {Histogram}] ed(ok)

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

    set g [ttk::frame $w.param]

    # Params
    set f [ttk::labelframe $g.hist -text [msgcat::mc {Parameters}]]

    ttk::label $f.tcol -text [msgcat::mc {Column}]
    ttk::menubutton $f.col -textvariable ed(col) -menu $f.col.menu

    PrismColsMenu $varname $f.col col [list PrismHistogramMinMax $varname]

    ttk::label $f.tnum -text [msgcat::mc {Bins}]
    ttk::entry $f.num -textvariable ed(num) -width 7

    ttk::label $f.tmin -text [msgcat::mc {Min}]
    ttk::entry $f.min -textvariable ed(min) -width 13

    ttk::label $f.tmax -text [msgcat::mc {Max}]
    ttk::entry $f.max -textvariable ed(max) -width 13

    grid $f.tcol $f.col -padx 2 -pady 2 -sticky ew
    grid $f.tnum $f.num -padx 2 -pady 2 -sticky ew
    grid $f.tmin $f.min -padx 2 -pady 2 -sticky ew
    grid $f.tmax $f.max -padx 2 -pady 2 -sticky ew

    # Properties
    set f [ttk::labelframe $g.prop -text [msgcat::mc {Properties}]]

    ttk::checkbutton $f.theme -text [msgcat::mc {Use Theme Colors}] \
	-variable ed(canvas,theme)

    ttk::label $f.tbordercolor -text [msgcat::mc {Border}]
    ColorMenuButton $f.bordercolor ed graph,ds,bar,border,color {}

    ttk::label $f.tcolor -text [msgcat::mc {Color}]
    ColorMenuButton $f.color ed graph,ds,bar,color {}

    ttk::checkbutton $f.fill -text [msgcat::mc {Fill}] \
	-variable ed(graph,ds,bar,fill)

    grid $f.theme - -padx 2 -pady 2 -sticky ew
    grid $f.tbordercolor $f.bordercolor -padx 2 -pady 2 -sticky ew
    grid $f.tcolor $f.color $f.fill -padx 2 -pady 2 -sticky ew

    # Mode
    set f [ttk::labelframe $g.mode -text [msgcat::mc {Behavior}]]

    ttk::radiobutton $f.newplot -text [msgcat::mc {New Plot}] \
	-variable ed(plot,mode) -value newplot
    ttk::radiobutton $f.newgraph -text [msgcat::mc {New Graph}] \
	-variable ed(plot,mode) -value newgraph
    ttk::radiobutton $f.newdataset -text [msgcat::mc {Overplot}] \
	-variable ed(plot,mode) -value newdataset

    grid x $f.newplot $f.newgraph $f.newdataset -padx 2 -pady 2 -sticky ew

    pack $g.hist $g.prop $g.mode -side top -fill both -expand true

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

    PrismHistogramMinMax $varname
    
    DialogWait $w ed(ok) $w.buttons.ok
    destroy $w
    destroy $mb

    if {$ed(ok)} {
	set var(col) $ed(col)

	set var(bar,num) $ed(num)
	set var(bar,min) $ed(min)
	set var(bar,max) $ed(max)
	set var(bar,minmax) 1

	set var(canvas,theme) $ed(canvas,theme)

	set var(graph,ds,bar,border,color) $ed(graph,ds,bar,border,color)
	set var(graph,ds,bar,color) $ed(graph,ds,bar,color)
	set var(graph,ds,bar,fill) $ed(graph,ds,bar,fill)

	set var(plot,mode) $ed(plot,mode)

	if {$ed(col) != {}} {
	    PrismHistogramGenerate $varname
	} else {
	    Error "[msgcat::mc {Unable to generate plot}]"
	}
    }
}

proc PrismHistogramMinMax {varname} {
    upvar #0 $varname var
    global $varname

    global ed

    switch $var(type) {
	fits {
	    # open extension
	    fitsy open $var(fn) $var(load) $var(ext)
	    if {[catch {fitsy minmax $ed(col) ed} ]} {
		set ed(min) 0
		set ed(max) 0
	    }
	    fitsy close
	}
	ascii {PrismHistogramMinMaxAscii $varname $ed(col) ed(min) ed(max)}
    }
}

proc PrismHistogramMinMaxAscii {varname col minname maxname} {
    upvar #0 $varname var
    global $varname

    upvar $minname min
    upvar $maxname max
    
    global $var(tbldb)

    if {$col=={}} {
	set min 0
	set max 0
	return
    }

    set rows [starbase_nrows $var(tbldb)]
    set colnum [starbase_colnum $var(tbldb) $col]
    set ll {}

    for {set ii 1} {$ii<=$rows} {incr ii} {
	set vv [starbase_get $var(tbldb) $ii $colnum]
	if {$vv != {} && [string is double $vv]} {
	    lappend ll $vv
	}
    }
    set ll [join $ll ","]
    if {$ll != {}} {
	set min [expr min($ll)]
	set max [expr max($ll)]
    } else {
	set min 0
	set max 0
    }
}

proc PrismHistogramGenerate {varname} {
    upvar #0 $varname var
    global $varname

    global iap
    switch $var(plot,mode) {
	newplot {
	    incr ${varname}(plot,seq)
	    set vvarname plot$var(plot,seq)${varname}
	}
	newgraph -
	newdataset {
	    set vvarname [lindex $iap(plots) end]
	    if {$vvarname == {}} {
		incr ${varname}(plot,seq)
		set vvarname plot$var(plot,seq)${varname}
	    }
	}
    }

    upvar #0 $vvarname vvar
    global $vvarname

    set xdata ${vvarname}xx$var(plot,data,seq)${varname}
    set ydata ${vvarname}yy$var(plot,data,seq)${varname}
    incr ${varname}(plot,data,seq)

    global $xdata $ydata
    if {[info command $xdata] == {}} {
	blt::vector create $xdata
    }
    if {[info command $ydata] == {}} {
	blt::vector create $ydata
    }

    if {[catch {
    switch $var(type) {
	fits {PrismHistogramGenerateFits $varname $xdata $ydata} 
	ascii {PrismHistogramGenerateAscii $varname $xdata $ydata}
    }
    }]} {
	Error "[msgcat::mc {Unable to generate plot}]"
	return
    }

    switch $var(plot,mode) {
	newplot {
	    PlotDialog $vvarname "[string totitle $varname] Histogram" true
	    PlotAddGraph $vvarname bar
	    PlotTitle $vvarname $var(col) {Values} {Counts}
	}
	newgraph {
	    if {![PlotPing $vvarname]} {
		PlotDialog $vvarname "[string totitle $varname] Histogram" true
	    }
	    PlotAddGraph $vvarname bar
	    PlotTitle $vvarname $var(col) {Values} {Counts}
	}
	newdataset {
	    if {![PlotPing $vvarname]} {
		PlotDialog $vvarname "[string totitle $varname] Histogram" true
		PlotAddGraph $vvarname bar
		PlotTitle $vvarname $var(col) {Values} {Counts}
	    }
	}
    }

    set vvar(graph,ds,xdata) $xdata
    set vvar(graph,ds,ydata) $ydata
    set vvar(graph,ds,bar,width) $var(bar,width)
    PlotExternal $vvarname xy
    PlotDataSetName $vvarname "$var(extname) $var(col)"

    set vvar(graph,ds,bar,border,color) $var(graph,ds,bar,border,color)
    set vvar(graph,ds,bar,color) $var(graph,ds,bar,color)
    set vvar(graph,ds,bar,fill) $var(graph,ds,bar,fill)
    PlotBarUpdateElement $vvarname
    
    set vvar(canvas,theme) $var(canvas,theme)
    PlotUpdateAllElement $vvarname

    PlotStats $vvarname
    PlotList $vvarname
}

proc PrismHistogramGenerateFits {varname xdata ydata} {
    upvar #0 $varname var
    global $varname
    global $xdata $ydata

    # open extension
    fitsy open $var(fn) $var(load) $var(ext)
    if {[catch {fitsy histogram $var(col) $xdata $ydata $var(bar,num) $var(bar,min) $var(bar,max) $var(bar,minmax) $varname} ]} {
	fitsy close
	return -code error
    }
    fitsy close
}

proc PrismHistogramGenerateAscii {varname xdata ydata} {
    upvar #0 $varname var
    global $varname

    global $var(tbldb)
    global $xdata $ydata

    if {$var(bar,minmax)} {
	set min $var(bar,min)
	set max $var(bar,max)
    } else {
	set min 0
	set max 0
	PrismHistogramMinMaxAscii $varname $var(col) min max
    }

    set num $var(bar,num)
    set rows [starbase_nrows $var(tbldb)]
    set colnum [starbase_colnum $var(tbldb) $var(col)]

    set diff [expr double($max-$min)]
    set var(bar,width) [expr $diff/double($num)]

    for {set ii 0} {$ii<$num} {incr ii} {
	$xdata append \
	    [expr double($ii)*$var(bar,width) + $var(bar,width)/2. + $min]
	$ydata append 0
    }

    for {set ii 1} {$ii<=$rows} {incr ii} {
	set vv [starbase_get $var(tbldb) $ii $colnum]
	if {$vv != {} && [string is double $vv]} {
	    set jj [expr ($vv-$min)/$var(bar,width)]

	    set kk [expr int($jj)]
	    if {$kk>=0 && $kk<$num} {
		set ww [$ydata index $kk]
		$ydata index $kk [expr $ww+1]
	    }
	}
    }
}

proc PrismImage {varname} {
    upvar #0 $varname var
    global $varname

    # sanity check
    if {$var(fn) == {}} {
	Error "No file loaded"
	return
    }

    CreateFrame
    LoadFitsFile "$var(fn)\[$var(ext)\]" {} {}
    FinishLoad
}

# used by backup	
proc PrismSetExt {varname ext} {
    upvar #0 $varname var
    global $varname

    $var(dir) selection set $ext

    # let dialog catchup
    update
}

proc PrismColsMenu {varname f ww cmd} {
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
	$m add command -label {} \
	    -command [list PrismColsMenuCmd $ww {} $cmd]
	incr cnt
	foreach col [starbase_columns $var(tbldb)] {
	    $m add command -label $col \
		-command [list PrismColsMenuCmd $ww $col $cmd]

	    # wrap if needed
	    incr cnt
	    if {$cnt>=$ds9(menu,size,wrap)} {
		set cnt 0
		$m entryconfig $col -columnbreak 1
	    }
	}
    }
}

proc PrismColsMenuCmd {ww col cmd} {
    global ed

    set ed($ww) "$col"
    if {$cmd != {}} {
	eval $cmd
    }
}

proc PrismTableFirst {varname} {
    upvar #0 $varname var
    global $varname

    # sanity check
    if {$var(fn) == {}} {
	Error "No file loaded"
	return
    }

    # sanity check
    if {$var(type) != {fits}} {
	Error "No FITS table file loaded"
	return
    }
    
    set var(start) 0
    PrismTableFits $varname
}

proc PrismTableNext {varname} {
    upvar #0 $varname var
    global $varname
    global iprism

    # sanity check
    if {$var(fn) == {}} {
	Error "No file loaded"
	return
    }

    # sanity check
    if {$var(type) != {fits}} {
	Error "No FITS table file loaded"
	return
    }
    
    set var(start) [expr $var(start)+$iprism(block)]
    if {$var(start) > $var(rows)} {
	PrismTableLast $varname
    } else {
	PrismTableFits $varname
    }
}

proc PrismTablePrev {varname} {
    upvar #0 $varname var
    global $varname
    global iprism

    # sanity check
    if {$var(fn) == {}} {
	Error "No file loaded"
	return
    }

    # sanity check
    if {$var(type) != {fits}} {
	Error "No FITS table file loaded"
	return
    }

    set var(start) [expr $var(start)-$iprism(block)]
    if {$var(start) < 0} {
	PrismTableFirst $varname
    } else {
	PrismTableFits $varname
    }
}

proc PrismTableLast {varname} {
    upvar #0 $varname var
    global $varname
    global iprism

    # sanity check
    if {$var(fn) == {}} {
	Error "No file loaded"
	return
    }

    # sanity check
    if {$var(type) != {fits}} {
	Error "No FITS table file loaded"
	return
    }

    set aa [expr int($var(rows)/$iprism(block))]
    set var(start) [expr $aa*$iprism(block)]
    PrismTableFits $varname
}

proc PrismTableGotoQuery {varname} {
    upvar #0 $varname var
    global $varname

    if {[PrismTableGotoDialog $varname]} {
	PrismTableGoto $varname
    }
}

proc PrismTableGoto {varname} {
    upvar #0 $varname var
    global $varname

    # sanity check
    if {$var(fn) == {}} {
	Error "No file loaded"
	return
    }

    # santity check
    if {$var(goto) < 1} {
	set var(goto) 1
    }
    if {$var(goto)>$var(rows)} {
	set var(goto) $var(rows)
    }

    switch $var(type) {
	fits {PrismTableGotoFits $varname}
	ascii {PrismTableGotoAscii $varname}
    }
}

proc PrismTableGotoFits {varname} {
    upvar #0 $varname var
    global $varname
    global iprism

    set aa [expr int($var(goto)/$iprism(block))]
    set rr [expr int(fmod($var(goto),$iprism(block)))+1]
    set var(start) [expr $aa*$iprism(block)]

    if {$var(start) > $var(rows)} {
	PrismTableLast $varname
    } else {
	PrismTableFits $varname
    }

    $var(tbl) see $rr,1
    $var(tbl) configure -selecttype row -selectmode single
    $var(tbl) selection set $rr,1
    $var(tbl) configure -selecttype col -selectmode mulitple
}

proc PrismTableGotoAscii {varname} {
    upvar #0 $varname var
    global $varname

    $var(tbl) see $var(goto),1
    $var(tbl) configure -selecttype row -selectmode single
    $var(tbl) selection set $var(goto),1
    $var(tbl) configure -selecttype col -selectmode mulitple
}

proc PrismTableGotoDialog {varname} {
    upvar #0 $varname var
    global $varname

    global ed

    set w ".${varname}goto"
    set mb ".${varname}gotomb"

    # needed for edit menu
    set ed(top) $w
    set ed(ok) 0

    set ed(goto) $var(goto)

    DialogCreate $w [msgcat::mc {Prism Goto}] ed(ok)

    $w configure -menu $mb
    ThemeMenu $mb

    # file
    $mb add cascade -label [msgcat::mc {File}] -menu $mb.file
    ThemeMenu $mb.file
    $mb.file add command -label [msgcat::mc {Apply}] -command {set ed(ok) 1}

    $mb.file add separator
    $mb.file add command -label [msgcat::mc {Cancel}] -command {set ed(ok) 0}

    # edit
    $mb add cascade -label [msgcat::mc {Edit}] -menu $mb.edit
    EditMenu $mb ed

    # Param
    set f [ttk::frame $w.param]
    ttk::label $f.tgoto -text [msgcat::mc {Goto}]
    ttk::entry $f.goto -textvariable ed(goto) -width 12

    grid $f.tgoto $f.goto -padx 2 -pady 2 -sticky w

    # Buttons
    set f [ttk::frame $w.buttons]
    ttk::button $f.ok -text [msgcat::mc {OK}] -command {set ed(ok) 1} \
	-default active 
    ttk::button $f.cancel -text [msgcat::mc {Cancel}] -command {set ed(ok) 0}
    pack $f.ok $f.cancel -side left -expand true -padx 2 -pady 4

    bind $w <Return> {set ed(ok) 1}

    # Fini
    ttk::separator $w.sep -orient horizontal
    pack $w.buttons $w.sep -side bottom -fill x
    pack $w.param -side top -fill both -expand true

    DialogWait $w ed(ok) $w.param.goto
    destroy $w
    destroy $mb

    if {$ed(ok)} {
	set var(goto) $ed(goto)
    }
    
    set rr $ed(ok)
    unset ed
    return $rr
}

proc PrismTableFits {varname} {
    upvar #0 $varname var
    global $varname
    global iprism

    # clear previous db
    global $var(tbldb)
    if {[info exists $var(tbldb)]} {
	unset $var(tbldb)
    }

    # open extension
    fitsy open $var(fn) $var(load) $var(ext)

    if {![fitsy istable]} {
	fitsy close

	$var(tbl) configure -rows $iprism(minrows)
	$var(tbl) configure -titlerows 1
	set var(offset) 0

	PrismDialogUpdate $varname
	return
    }

    set t $var(tbldb)
    upvar #0 $t T
    global $t

    fitsy table $t true $var(start) $iprism(block)
    fitsy close
    
    set T(HLines) 2
    set T(H_1) $T(Header)
    set T(H_2) [regsub -all {[A-Za-z0-9]} $T(Header) {-}]
    starbase_colmap $t

    $var(tbl) configure -titlerows 2
    set var(offset) 1

    # starbase_ncols is just cols
    # configure cols includes extra row
    set nc [starbase_ncols $t]
    set cc [expr $nc+1]
    if {$cc > $iprism(mincols)} {
	$var(tbl) configure -cols $cc
    } else {
	$var(tbl) configure -cols $iprism(mincols)
    }

    # starbase_nrows includes 1 extra header
    # configure rows includes all header
    set nr [starbase_nrows $t]
    set cc [expr $nr-1+2]
    if {$cc > $iprism(minrows)} {
	$var(tbl) configure -rows $cc
    } else {
	$var(tbl) configure -rows $iprism(minrows)
    }

    # add row numbers
    set $var(tbldb)(0,0) {Row}
    set $var(tbldb)(1,0) {}
    for {set ii 2} {$ii<=$nr} {incr ii} {
	set $var(tbldb)($ii,0) [expr $ii-1+$var(start)]
    }

    $var(tbl) see 2,1

    # need this so that PrismExtCmd is invoked before next command
    update

    PrismDialogUpdate $varname
}

proc PrismTableBrowseCmd {varname ss} {
    upvar #0 $varname var
    global $varname
    global $var(tbldb)

    $var(tbl) selection clear all

    # just in case
    if {![info exists $var(tbldb)]} {
	return
    }

    if {![TBLValidDB $var(tbldb)]} {
	return
    }

    set rows [$var(tbl) cget -rows]
    set cols [starbase_ncols $var(tbldb)]

    # reset current cell so next click in same cell will trigger this proc
    $var(tbl) activate 0,0

    # determine ccp,last ccp,prev
    set cc [lindex [split $ss ','] 1]
    if {$cc == 0 || $cc > $cols} {
	# greater than last column: clear
	set var(ccp,last) {}
	set var(ccp,prev) {}
    } elseif {$var(ccp,last) == $cc} {
	# click on same column
	set var(ccp,last) $var(ccp,prev)
	set var(ccp,prev) {}
    } elseif {$var(ccp,prev) == $cc} {
	# click on same column
	set var(ccp,prev) {}
    } else {
	# new column
	if {$var(ccp,prev) == {}} {
	    set var(ccp,prev) $var(ccp,last)
	}
	set var(ccp,last) $cc
    }

    # select columns
    set rows [$var(tbl) cget -rows]
    # set selection
    if {$var(ccp,last) != {}} {
	$var(tbl) selection set 2,$var(ccp,last) $rows,$var(ccp,last)
    }
    if {$var(ccp,prev) != {}} {
	$var(tbl) selection set 2,$var(ccp,prev) $rows,$var(ccp,prev)
    }

    # set histogram col
    if {$var(ccp,last) != {}} {
	set var(col) \
	    [lindex [starbase_columns $var(tbldb)] [expr $var(ccp,last)-1]]
    } else {
	set var(col) {}
    }
    
    # set plot xx,yy
    if {$var(ccp,last) != {} && $var(ccp,prev) != {}} {
	set var(xx) \
	    [lindex [starbase_columns $var(tbldb)] [expr $var(ccp,prev)-1]]
	set var(yy) \
	    [lindex [starbase_columns $var(tbldb)] [expr $var(ccp,last)-1]]
    } elseif {$var(ccp,last) != {}} {
	set var(xx) \
	    [lindex [starbase_columns $var(tbldb)] [expr $var(ccp,last)-1]]
	set var(yy) {}
    } else {
	set var(xx) {}
	set var(yy) {}
    }

#    puts "last=$var(ccp,last) prev=$var(ccp,prev)"
}

proc PrismExtCmd {varname} {
    upvar #0 $varname var
    global $varname

    # clear any selection
    $var(tbl) selection clear all

    # this proc can be called in any time
    # prepare for the worst
    if {$var(fn) == {}} {
	return
    }

    # clear
    set var(start) 0
    set var(goto) 1

    set var(xx) {}
    set var(yy) {}
    set var(xerr) {}
    set var(yerr) {}

    set var(col) {}

    set var(bar,num) 10
    set var(bar,min) 0
    set var(bar,max) 0
    set var(bar,minmax) 1
    set var(bar,width) 1

    set var(ccp,last) {}
    set var(ccp,prev) {}

    switch $var(type) {
	fits {PrismExtFitsCmd $varname}
	ascii {PrismExtAsciiCmd $varname}
    }
}

proc PrismExtFitsCmd {varname} {
    upvar #0 $varname var
    global $varname
    global iprism

    set var(ext) [$var(dir) selection]
    if {$var(ext) == {}} {
	set var(ext) 0
    }
    
    set var(extname) [lindex $var(extnames) $var(ext)]

    # find our extension
    fitsy open $var(fn) $var(load) $var(ext)

    # header
    $var(text) delete 1.0 end
    $var(text) insert end [fitsy header]

    # color tag keywords
    set stop [$var(text) index end]
    for {set ii 1.0} {$ii<$stop} {set ii [expr $ii+1]} {
	$var(text) tag add keyword $ii "$ii +8 chars"
    }
    # see top
    $var(text) see 1.0

    # table
    if {[fitsy istable]} {
	set var(rows) [fitsy rows]
    } else {
	set var(rows) 0
    }
    fitsy close

    PrismTableFits $varname
}

proc PrismExtAsciiCmd {varname} {
    upvar #0 $varname var
    global $varname

    # header
    $var(text) delete 1.0 end
    $var(text) insert end [TBLGetHeader $varname]
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
    $proc $id "$iprism(prisms)\n"
}

proc PrismCmdRef {ref} {
    global iprism
    global cvarname

    set id [lsearch $iprism(prisms) $ref]

    # look for reference in current list
    if { $id < 0} {
	Error "[msgcat::mc {Unable to find PRISM window}] $ref"
	return
    }

    set iprism(prisms) [lreplace $iprism(prisms) $id $id]
    lappend iprism(prisms) $ref
}

proc PrismCmdImport {fn reader} {
    if {![file exists $fn]} {
	Error "[msgcat::mc {File not found}]: $fn"
	return
    }

    set varname [PrismDialog prism]
    upvar #0 $varname var
    global $varname

    PrismImportFn $varname $fn $reader
}

proc PrismCmdLoad {fn} {
    if {![file exists $fn]} {
	Error "[msgcat::mc {File not found}]: $fn"
	return
    }

    set varname [PrismDialog prism]
    upvar #0 $varname var
    global $varname

    PrismLoad $varname $fn
}

proc PrismCmdExt {ext} {
    global iprism
    global cvarname
    if {$cvarname == {}} {
	return
    }
    upvar #0 $cvarname cvar
    
    if {$ext >= 0 && $ext <= $cvar(extnum)} {
	$cvar(dir) selection set $ext

	# let dialog catchup
	update
    } else {
	Error "[msgcat::mc {Extension not found}]: $ext"
    }
}

proc PrismCmdExtName {extname} {
    global iprism
    global cvarname
    if {$cvarname == {}} {
	return
    }
    upvar #0 $cvarname cvar
    
    set ext [lsearch $cvar(extnames) $extname]
    if {$ext >= 0} {
	$cvar(dir) selection set $ext

	# let dialog catchup
	update
    } else {
	Error "[msgcat::mc {Extension not found}]: $extname"
    }
}

# Backup

proc PrismBackup {ch dir} {
    global iprism

    foreach ww $iprism(prisms) {
	set varname $ww
	upvar #0 $varname var
	global $varname
	
	# if we have no filename, don't save
	if {$var(fn) == {}} {
	    continue
	}
    
	set fdir [file join $dir $ww]
	set rdir "./[lindex [file split $dir] end]/$ww"
    
	# create dir if needed
	if {![file isdirectory $fdir]} {
	    if {[catch {file mkdir $fdir}]} {
		Error [msgcat::mc {An error has occurred during backup}]
		return
	    }
	}

	puts $ch "PrismDialog $varname"

	switch $var(type) {
	    fits {PrismBackupFits $varname $ch $fdir $rdir}
	    ascii {PrismBackupAscii $varname $ch $fdir $rdir}
	}
    }
}

proc PrismBackupFits {varname ch fdir rdir} {
    upvar #0 $varname var
    global $varname

    set fn $var(fn)

    # check for extension
    set id [string first "\[" $var(fn)]
    if {$id > 0} {
	set fn [string range $var(fn) 0 [expr $id-1]]
	set ext [string range $var(fn) $id end]
    } else {
	set fn $var(fn)
	set ext {}
    }

    if {![file exists $fn]} {
	return
    }

    global pds9
    if {$pds9(backup)} {
	# look for sym links
	switch [file type $fn] {
	    file {}
	    link {set fn [file join [file dirname $fn] [file readlink $fn]]}
	    default {
		return
	    }
	}

	set src [lindex [file split $fn] end]
	if {![file exists [file join $fdir $src]]} {
	    if {[catch {file copy $var(fn) $fdir}]} {
		return
	    }
	}
	puts $ch "PrismLoad $varname $rdir/[file tail $fn]"
    } else {
	if {[file pathtype $fn] == {relative}} {
	    puts $ch "PrismLoad $varname [file join [pwd] $fn]"
	} else {
	    puts $ch "PrismLoad $varname $fn"
	}
    }

    if {$var(ext) > 0} {
	puts $ch "PrismSetExt $varname $var(ext)"
    }
}

proc PrismBackupAscii {varname ch fdir rdir} {
    upvar #0 $varname var
    global $varname

    set fn [file rootname [file tail $var(fn)]]
    append fn {.xml}

    VOTWrite $var(tbldb) $fdir/$fn
    puts $ch "PrismImportFn $varname $rdir/$fn VOTRead"
}
