#  Copyright (C) 1999-2020
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc PrismDef {} {
    global prism
    global iprism
    global pprism

    set iprism(top) .prism
    set iprism(mb) .prismmb
    set iprism(mincols,header) 5
    set iprism(minrows,header) 20
    set iprism(mincols,tbl) 10
    set iprism(minrows,tbl) 20
}

proc PrismDialog {} {
    global prism
    global iprism
    global dprism
    global ds9

    # see if we already have a window visible
    if {[winfo exists $iprism(top)]} {
	raise $iprism(top)
	return
    }

    # create the window
    set w $iprism(top)
    set mb $iprism(mb)

    set dprism(tbldb) prismtbldb
    set dprism(fn) {}

    Toplevel $w $mb 6 [msgcat::mc {Prism}] PrismDestroyDialog
    $mb add cascade -label [msgcat::mc {File}] -menu $mb.file
    $mb add cascade -label [msgcat::mc {Edit}] -menu $mb.edit

    ThemeMenu $mb.file
    $mb.file add command -label [msgcat::mc {Load}] -command PrismLoadFile
    $mb.file add separator
    $mb.file add command -label [msgcat::mc {Clear}] -command PrismClear
    $mb.file add separator
    $mb.file add command -label [msgcat::mc {Plot}] -command PrismPlot
    $mb.file add command -label [msgcat::mc {Histogram}] -command PrismHistogram
    $mb.file add command -label [msgcat::mc {Image}] -command PrismImage
    $mb.file add separator
    $mb.file add command -label [msgcat::mc {Close}] \
	-command PrismDestroyDialog -accelerator "${ds9(ctrl)}W"

    EditMenu $mb iprism

    # Param
    set p [ttk::frame $w.param]

    # Exts
    set f [ttk::labelframe $p.ext -padding {0 2} \
	       -text [msgcat::mc {Extensions}]]

    ttk::scrollbar $f.yscroll -command [list $f.box yview] -orient vertical
    ttk::scrollbar $f.xscroll -command [list $f.box xview] -orient horizontal
    set dprism(ext) [ttk::treeview $f.box \
			 -xscroll [list $f.xscroll set]\
			 -yscroll [list $f.yscroll set] \
			 -selectmode browse \
			 -height 10 \
			 -show headings \
			 -columns {ext type dim} \
			]
    $dprism(ext) column ext -width 100 -anchor w
    $dprism(ext) column type -width 50 -anchor w
    $dprism(ext) column dim -width 220 -anchor w

    $dprism(ext) heading ext -text [msgcat::mc {Extension}] -anchor w
    $dprism(ext) heading type -text [msgcat::mc {Type}] -anchor w
    $dprism(ext) heading dim -text [msgcat::mc {Dimensions}] -anchor w

    grid $f.box $f.yscroll -sticky news
    grid $f.xscroll -stick news
    grid rowconfigure $f 0 -weight 1
    grid columnconfigure $f 2 -weight 1

    bind $dprism(ext) <<TreeviewSelect>> PrismExtCmd

    # Header
    set f [ttk::labelframe $p.header -padding {0 2} \
	       -text [msgcat::mc {Header Keywords}]]

    set dprism(header) [text $f.header \
			    -wrap none \
			    -height 10 \
			    -yscrollcommand [list $f.yscroll set] \
			    -xscrollcommand [list $f.xscroll set] \
			    -fg [ThemeTreeForeground] \
			    -bg [ThemeTreeForeground] \
			   ]


    ttk::scrollbar $f.yscroll -command [list $dprism(header) yview] \
	-orient vertical
    ttk::scrollbar $f.xscroll -command [list $dprism(header) xview] \
	-orient horizontal

    $dprism(header) tag configure keyword -foreground $ds9(bold)
    $dprism(header) configure -state normal

    grid $dprism(header) $f.yscroll -sticky news
    grid $f.xscroll -stick news
    grid rowconfigure $f 0 -weight 1
    grid columnconfigure $f 0 -weight 1

    grid $p.ext -row 0 -column 0 -sticky ns
    grid $p.header -row 0 -column 1 -sticky news
    grid columnconfigure $p 1 -weight 1

    # Table
    set f [ttk::labelframe $w.tbl -padding {0 2} \
	       -text [msgcat::mc {Extension Data}]]

    set dprism(tbl) [table $f.t \
		      -state disabled \
		      -usecommand 0 \
		      -variable $dprism(tbldb) \
		      -colorigin 1 \
		      -roworigin 0 \
		      -cols $iprism(mincols,tbl) \
		      -rows $iprism(minrows,tbl) \
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
		      -browsecommand [list PrismTableSelectCmd %s %S] \
		      -fg [ThemeTreeForeground] \
		      -bg [ThemeTreeBackground] \
		     ]

    $dprism(tbl) tag configure sel \
	-fg [ThemeTreeForegroundSelected] -bg [ThemeTreeBackgroundSelected]
    $dprism(tbl) tag configure title \
	-fg [ThemeHeadingForeground] -bg [ThemeHeadingBackground]

    ttk::scrollbar $f.yscroll -command [list $dprism(tbl) yview] \
	-orient vertical
    ttk::scrollbar $f.xscroll -command [list $dprism(tbl) xview] \
	-orient horizontal
    grid $dprism(tbl) $f.yscroll -sticky news
    grid $f.xscroll -stick news
    grid rowconfigure $f 0 -weight 1
    grid columnconfigure $f 0 -weight 1

    # Buttons
    set f [ttk::frame $w.buttons]
    ttk::button $f.load -text [msgcat::mc {Load}] -command PrismLoadFile
    ttk::button $f.clear -text [msgcat::mc {Clear}] -command PrismClear
    ttk::button $f.plot -text [msgcat::mc {Plot}] -command PrismPlot
    ttk::button $f.histogram -text [msgcat::mc {Histogram}] \
	-command PrismHistogram
    ttk::button $f.image -text [msgcat::mc {Image}] -command PrismImage
    ttk::button $f.close -text [msgcat::mc {Close}] -command PrismDestroyDialog
    pack $f.load $f.clear $f.plot $f.histogram $f.image $f.close \
	-side left -expand true -padx 2 -pady 4

    # Fini
    ttk::separator $w.sext -orient horizontal
    pack $w.buttons $w.sext -side bottom -fill x
    pack $w.param -side top -fill x
    pack $w.tbl -side top -fill both -expand true

    bind $w <<Close>> PrismDestroyDialog

    UpdatePrismDialog
}

proc PrismDestroyDialog {} {
    global iprism
    global dprism

    if {[winfo exists $iprism(top)]} {
	destroy $iprism(top)
	destroy $iprism(mb)
	unset dprism
    }
}

proc UpdatePrismDialog {} {
    global debug
    if {$debug(tcl,update)} {
	puts stderr "UpdatePrismDialog"
    }

}

proc PrismLoadFile {} {
    global dprism
    
    set fn [OpenFileDialog fitsfbox]
    if {$fn != {}} {
	PrismLoad $fn
    }
}

proc PrismLoad {fn} {
    global dprism

    set dprism(fn) $fn

    set rr [fitsy dir $fn]
    foreach {ext name type info} $rr {
	$dprism(ext) insert {} end -id $ext \
	    -values [list "$name" "$type" "$info"]
    }
}

proc PrismClear {} {
    global iprism
    global dprism
    
    # header
    $dprism(header) delete 1.0 end

    # extension
    foreach id [$dprism(ext) children {}] {
	$dprism(ext) delete $id
    }
    set dprism(fn) {}
}

proc PrismPlot {} {
    global dprism
}

proc PrismHistogram {} {
    global dprism
}

proc PrismImage {} {
    global dprism
}

proc PrismExtCmd {} {
    global iprism
    global dprism

    # clear header
    $dprism(header) delete 1.0 end

    set ext [$dprism(ext) selection]
    if {$ext == {}} {
	return
    }

    $dprism(header) insert end [fitsy header $dprism(fn) $ext]

    # color tag keywords
    set stop [$dprism(header) index end]
    for {set ii 1.0} {$ii<$stop} {set ii [expr $ii+1]} {
	$dprism(header) tag add keyword $ii "$ii +8 chars"
    }

    # set top
    $dprism(header) see 1.0
}

proc PrismHeaderSelectCmd {ss rc} {
}

proc PrismTableSelectCmd {ss rc} {
}

# Process Cmds

proc ProcessPrismCmd {varname iname} {
    upvar $varname var
    upvar $iname i

    prism::YY_FLUSH_BUFFER
    prism::yy_scan_string [lrange $var $i end]
    prism::yyparse
    incr i [expr $prism::yycnt-1]
}

proc ProcessSendPrismCmd {proc id param {sock {}} {fn {}}} {
    global parse
    set parse(proc) $proc
    set parse(id) $id

    prismsend::YY_FLUSH_BUFFER
    prismsend::yy_scan_string $param
    prismsend::yyparse
}

