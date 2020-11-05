#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc CATSymDef {} {
    global icatsym

    set icatsym(minrows) 8
    set icatsym(mincols) 8
}

proc CATSymDialog {parent} {
    upvar #0 $parent pvar
    global $parent

    set varname $pvar(symdl)
    upvar #0 $varname var
    global $varname

    global ds9
    global icatsym

    # main dialog
    set var(top) ".${varname}"
    set var(mb) ".${varname}mb"

    if {[winfo exists $var(top)]} {
	raise $var(top)
	return
    }

    # variables
    set var(parent) $parent
    set var(symdb) $pvar(symdb)

    global $var(symdb)
    set var(row) 1

    # initialize
    if {$var(row) <= [starbase_nrows $var(symdb)]} {
	set var(condition) [starbase_get $var(symdb) $var(row) \
				[starbase_colnum $var(symdb) condition]]
	set var(shape) [starbase_get $var(symdb) $var(row) \
			    [starbase_colnum $var(symdb) shape]]
	set var(color) [starbase_get $var(symdb) $var(row) \
			    [starbase_colnum $var(symdb) color]]
	set var(width) [starbase_get $var(symdb) $var(row) \
			    [starbase_colnum $var(symdb) width]]
	set var(dash) [starbase_get $var(symdb) $var(row) \
			    [starbase_colnum $var(symdb) dash]]
	set var(font) [starbase_get $var(symdb) $var(row) \
			    [starbase_colnum $var(symdb) font]]
	set var(font,size) [starbase_get $var(symdb) $var(row) \
			    [starbase_colnum $var(symdb) fontsize]]
	set var(font,weight) [starbase_get $var(symdb) $var(row) \
			    [starbase_colnum $var(symdb) fontweight]]
	set var(font,slant) [starbase_get $var(symdb) $var(row) \
			    [starbase_colnum $var(symdb) fontslant]]
	set var(text) [starbase_get $var(symdb) $var(row) \
			   [starbase_colnum $var(symdb) text]]
	set var(size) [starbase_get $var(symdb) $var(row) \
			   [starbase_colnum $var(symdb) size]]
	set var(size2) [starbase_get $var(symdb) $var(row) \
			    [starbase_colnum $var(symdb) size2]]
	set var(units) [starbase_get $var(symdb) $var(row) \
			    [starbase_colnum $var(symdb) units]]
	set var(angle) [starbase_get $var(symdb) $var(row) \
			    [starbase_colnum $var(symdb) angle]]
    }


    # create the window
    set w $var(top)
    set mb $var(mb)

    Toplevel $w $mb 7 [msgcat::mc {Symbol Editor}] "CATSymDestroy $varname"
    $mb add cascade -label [msgcat::mc {File}] -menu $mb.file
    $mb add cascade -label [msgcat::mc {Edit}] -menu $mb.edit

    # menu
    ThemeMenu $mb.file
    $mb.file add command -label "[msgcat::mc {Open}]..." \
	-command "CATSymLoad $varname" -accelerator "${ds9(ctrl)}O"
    $mb.file add command -label "[msgcat::mc {Save}]..." \
	-command "CATSymSave $varname" -accelerator "${ds9(ctrl)}S"
    $mb.file add separator
    $mb.file add command -label [msgcat::mc {Apply}] \
	-command "CATSymApply $varname"
    $mb.file add separator
    $mb.file add command -label [msgcat::mc {Add}] \
	-command "CATSymAdd $varname"
    $mb.file add command -label [msgcat::mc {Delete}] \
	-command "CATSymRemove $varname"
    $mb.file add separator
    $mb.file add command -label [msgcat::mc {Close}] \
	-command "CATSymDestroy $varname" -accelerator "${ds9(ctrl)}W"

    EditMenu $mb $varname
    
    # Param
    set f [ttk::frame $w.param]

    ttk::label $f.tcondition -text [msgcat::mc {If}] 
    ttk::entry $f.condition -textvariable ${varname}(condition) -width 40
    ttk::button $f.bcondition -text [msgcat::mc {Edit}] \
	-command "TBLEditDialog $varname condition $pvar(catdb)"
    ttk::label $f.tthen -text [msgcat::mc {Then}] 
    ttk::label $f.tshape -text [msgcat::mc {Shape}] 
    ttk::menubutton $f.shape -textvariable ${varname}(shape) -menu $f.shape.menu
    ttk::label $f.tcolor -text [msgcat::mc {Color}] 
    ColorMenuButton $f.color $varname color {}
    ttk::label $f.twidth -text [msgcat::mc {Width}] 
    WidthDashMenuButton $f.width $varname width dash {} {}
    ttk::label $f.tfont -text [msgcat::mc {Font}] 
    FontMenuButton $f.font $varname font font,size font,weight font,slant {}
    ttk::label $f.ttext -text [msgcat::mc {Text}] 
    ttk::entry $f.text -textvariable ${varname}(text) -width 40
    ttk::button $f.btext -text [msgcat::mc {Edit}] \
	-command "TBLEditDialog $varname text  $pvar(catdb)"
    ttk::label $f.tsize -text [msgcat::mc {Size/Radius}] 
    ttk::entry $f.size -textvariable ${varname}(size) -width 40
    ttk::button $f.bsize -text [msgcat::mc {Edit}] \
	-command "TBLEditDialog $varname size $pvar(catdb)"
    ttk::label $f.tsize2 -text "[msgcat::mc {Size/Radius}] 2" 
    ttk::entry $f.size2 -textvariable ${varname}(size2) -width 40
    ttk::button $f.bsize2 -text [msgcat::mc {Edit}] \
	-command "TBLEditDialog $varname size2 $pvar(catdb)"
    ttk::label $f.tunits -text [msgcat::mc {Units}] 

    set m $f.units
    set mm $m.menu
    ttk::menubutton $m -textvariable ${varname}(units) -menu $mm
    ThemeMenu $mm
    $mm add radiobutton -label [msgcat::mc {Image}] \
	-variable ${varname}(units) -value image
    $mm add radiobutton -label [msgcat::mc {Physical}] \
	-variable ${varname}(units) -value physical
    $mm add separator
    $mm add radiobutton -label [msgcat::mc {Degrees}] \
	-variable ${varname}(units) -value degrees
    $mm add radiobutton -label [msgcat::mc {ArcMin}] \
	-variable ${varname}(units) -value arcmin
    $mm add radiobutton -label [msgcat::mc {ArcSec}] \
	    -variable ${varname}(units) -value arcsec

    $f.units.menu configure
    ttk::label $f.tangle -text [msgcat::mc {Angle}] 
    ttk::entry $f.angle -textvariable ${varname}(angle) -width 40
    ttk::button $f.bangle -text [msgcat::mc {Edit}] \
	-command "TBLEditDialog $varname angle $pvar(catdb)"

    ThemeMenu $f.shape.menu
    $f.shape.menu add radiobutton  -label [msgcat::mc {Circle}] \
	-variable ${varname}(shape) -value {circle}
    $f.shape.menu add radiobutton  -label [msgcat::mc {Ellipse}] \
	-variable ${varname}(shape) -value {ellipse}
    $f.shape.menu add radiobutton  -label [msgcat::mc {Box}] \
	-variable ${varname}(shape) -value {box}
    $f.shape.menu add radiobutton  -label [msgcat::mc {Vector}] \
	-variable ${varname}(shape) -value {vector}
    $f.shape.menu add radiobutton  -label [msgcat::mc {Text}] \
	-variable ${varname}(shape) -value {text}
    $f.shape.menu add cascade -label [msgcat::mc {Point}] \
	-menu $f.shape.menu.point

    ThemeMenu $f.shape.menu.point
    $f.shape.menu.point add radiobutton -label [msgcat::mc {Circle}] \
	-variable ${varname}(shape) -value {circle point}
    $f.shape.menu.point add radiobutton -label [msgcat::mc {Box}] \
	-variable ${varname}(shape) -value {box point}
    $f.shape.menu.point add radiobutton -label [msgcat::mc {Diamond}] \
	-variable ${varname}(shape) -value {diamond point}
    $f.shape.menu.point add radiobutton -label [msgcat::mc {Cross}] \
	-variable ${varname}(shape) -value {cross point}
    $f.shape.menu.point add radiobutton -label [msgcat::mc {X}] \
	-variable ${varname}(shape) -value {x point}
    $f.shape.menu.point add radiobutton -label [msgcat::mc {Arrow}] \
	-variable ${varname}(shape) -value {arrow point}
    $f.shape.menu.point add radiobutton -label [msgcat::mc {BoxCircle}] \
	-variable ${varname}(shape) -value {boxcircle point}

    grid $f.tcondition $f.condition $f.bcondition -padx 2 -pady 2 -sticky w
    grid $f.tthen -padx 2 -pady 2 -sticky w
    grid $f.tshape $f.shape -padx 2 -pady 2 -sticky w
    grid $f.tcolor $f.color -padx 2 -pady 2 -sticky w
    grid $f.twidth $f.width -padx 2 -pady 2 -sticky w
    grid $f.tfont $f.font -padx 2 -pady 2 -sticky w
    grid $f.ttext $f.text $f.btext -padx 2 -pady 2 -sticky w
    grid $f.tsize $f.size $f.bsize -padx 2 -pady 2 -sticky w
    grid $f.tsize2 $f.size2 $f.bsize2 -padx 2 -pady 2 -sticky w
    grid $f.tunits $f.units -padx 2 -pady 2 -sticky w
    grid $f.tangle $f.angle $f.bangle -padx 2 -pady 2 -sticky w

    # Table
    set f [ttk::frame $w.tbl]

    set var(tbl) [table $f.t \
		      -state disabled \
		      -usecommand 0 \
		      -variable $var(symdb) \
		      -colorigin 1 \
		      -roworigin 0 \
		      -cols $icatsym(mincols) \
		      -rows $icatsym(minrows) \
		      -width -1 \
		      -height -1 \
		      -maxwidth 550 \
		      -maxheight 300 \
		      -titlerows 1 \
		      -resizeborders col \
		      -xscrollcommand [list $f.xscroll set]\
		      -yscrollcommand [list $f.yscroll set]\
		      -selecttype row \
		      -selectmode single \
		      -anchor w \
		      -font [font actual TkDefaultFont] \
		      -browsecommand [list CATSymSelectCB $varname] \
		      -fg [ThemeTreeForeground] \
		      -bg [ThemeTreeBackground] \
		 ]

    $var(tbl) tag configure sel \
	-fg [ThemeSelectedForeground] -bg [ThemeSelectedBackground]
    $var(tbl) tag configure title -fg [ThemeForeground] -bg [ThemeBackground]

    ttk::scrollbar $f.yscroll -command [list $var(tbl) yview] -orient vertical
    ttk::scrollbar $f.xscroll -command [list $var(tbl) xview] -orient horizontal

    grid $var(tbl) $f.yscroll -sticky news
    grid $f.xscroll -stick news
    grid rowconfigure $f 0 -weight 1
    grid columnconfigure $f 0 -weight 1

    # Buttons
    set f [ttk::frame $w.buttons]
    ttk::button $f.apply -text [msgcat::mc {Apply}] \
	-command "CATSymApply $varname"
    ttk::button $f.add -text [msgcat::mc {Add}] \
	-command "CATSymAdd $varname"
    ttk::button $f.remove -text [msgcat::mc {Delete}] \
	-command "CATSymRemove $varname"
    ttk::button $f.close -text [msgcat::mc {Close}] \
	-command "CATSymDestroy $varname"
    pack $f.apply $f.add $f.remove $f.close \
	-side left -expand true -padx 2 -pady 4

    # Fini
    ttk::separator $w.sparam -orient horizontal
    ttk::separator $w.sstatus -orient horizontal
    pack $w.buttons $w.sstatus -side bottom -fill x
    pack $w.param $w.sparam -side top -fill x
    pack $w.tbl -side top -fill both -expand true

    CATSymTable $varname

    $var(tbl) selection set $var(row),1

    bind $w <<Open>> [list CATSymLoad $varname]
    bind $w <<Save>> [list CATSymSave $varname]
    bind $w <<Close>> [list CATSymDestroy $varname]
}

proc CATSymDestroy {varname} {
    upvar #0 $varname var
    global $varname

    destroy $var(top)
    destroy $var(mb)

    unset var
}

proc CATSymApply {varname} {
    upvar #0 $varname var
    global $varname
    global $var(symdb)

    if {$var(row) != {}} {
	if {$var(row) <= [starbase_nrows $var(symdb)]} {
	    starbase_set $var(symdb) $var(row) \
		[starbase_colnum $var(symdb) condition] $var(condition)
	    starbase_set $var(symdb) $var(row) \
		[starbase_colnum $var(symdb) shape] $var(shape)
	    starbase_set $var(symdb) $var(row) \
		[starbase_colnum $var(symdb) color] $var(color)
	    starbase_set $var(symdb) $var(row) \
		[starbase_colnum $var(symdb) width] $var(width)
	    starbase_set $var(symdb) $var(row) \
		[starbase_colnum $var(symdb) dash] $var(dash)
	    starbase_set $var(symdb) $var(row) \
		[starbase_colnum $var(symdb) font] $var(font)
	    starbase_set $var(symdb) $var(row) \
		[starbase_colnum $var(symdb) fontsize] $var(font,size)
	    starbase_set $var(symdb) $var(row) \
		[starbase_colnum $var(symdb) fontweight] $var(font,weight)
	    starbase_set $var(symdb) $var(row) \
		[starbase_colnum $var(symdb) fontslant] $var(font,slant)
	    starbase_set $var(symdb) $var(row) \
		[starbase_colnum $var(symdb) text] $var(text)
	    starbase_set $var(symdb) $var(row) \
		[starbase_colnum $var(symdb) size] $var(size)
	    starbase_set $var(symdb) $var(row) \
		[starbase_colnum $var(symdb) size2] $var(size2)
	    starbase_set $var(symdb) $var(row) \
		[starbase_colnum $var(symdb) units] $var(units)
	    starbase_set $var(symdb) $var(row) \
		[starbase_colnum $var(symdb) angle] $var(angle)
	}
    }

    CATSymUpdate $varname
}

proc CATSymAdd {varname} {
    upvar #0 $varname var
    global $varname
    global $var(symdb)
    global pcat

    set row [expr [starbase_nrows $var(symdb)]+1]
    starbase_rowins $var(symdb) $row
    starbase_set $var(symdb) $row \
	[starbase_colnum $var(symdb) shape] $pcat(sym,shape)
    starbase_set $var(symdb) $row \
	[starbase_colnum $var(symdb) color] $pcat(sym,color)
    starbase_set $var(symdb) $row \
	[starbase_colnum $var(symdb) width] $pcat(sym,width)
    starbase_set $var(symdb) $row \
	[starbase_colnum $var(symdb) dash] $pcat(sym,dash)
    starbase_set $var(symdb) $row \
	[starbase_colnum $var(symdb) font] $pcat(sym,font)
    starbase_set $var(symdb) $row \
	[starbase_colnum $var(symdb) fontsize] $pcat(sym,font,size)
    starbase_set $var(symdb) $row \
	[starbase_colnum $var(symdb) fontweight] $pcat(sym,font,weight)
    starbase_set $var(symdb) $row \
	[starbase_colnum $var(symdb) fontslant] $pcat(sym,font,slant)
    starbase_set $var(symdb) $row \
	[starbase_colnum $var(symdb) units] $pcat(sym,units)

    $var(tbl) selection clear all
    $var(tbl) selection set $row,1
    $var(tbl) see $row,1

    CATSymSelectCB $varname
    CATSymTable $varname
}

proc CATSymRemove {varname} {
    upvar #0 $varname var
    global $varname
    global $var(symdb)

    set ss "[$var(tbl) curselection]"
    set var(row) [string trim [lindex [split $ss ,] 0]]
    if {$var(row) != {}} {
	set nr [starbase_nrows $var(symdb)]
	if {$nr > 1 && $var(row) <= $nr} {
	    starbase_rowdel $var(symdb) $var(row)
	    set var(row) {}
	}
    }

    CATSymClear $varname
    CATSymTable $varname
}

proc CATSymSave {varname} {
    upvar #0 $varname var
    global $varname
    global $var(symdb)

    set fn [SaveFileDialog catsymfbox $var(top)]
    if {$fn != {}} {
	starbase_write $var(symdb) $fn
    }
}

proc CATSymLoad {varname} {
    upvar #0 $varname var
    global $varname
    global $var(symdb)

    set fn [OpenFileDialog catsymfbox $var(top)]
    if {$fn != {}} {
	if {[file exists $fn]} {
	    if {[info exists $var(symdb)]} {
		unset $var(symdb)
	    }
	    starbase_read $var(symdb) $fn
	    CATSymUpdate $varname
	} else {
	    Error "[msgcat::mc {Unable to open file}] $fn"
	    return
	}
    }
}

proc CATSymClear {varname} {
    upvar #0 $varname var
    global $varname

    $var(tbl) selection clear all

    set var(row) {}

    set var(condition) {}
    set var(shape) {}
    set var(color) {}
    set var(width) {}
    set var(dash) {}
    set var(font) {}
    set var(font,size) {}
    set var(font,weight) {}
    set var(font,slant) {}
    set var(text) {}
    set var(size) {}
    set var(size2) {}
    set var(units) {}
    set var(angle) {}
}

# Support

proc CATSymDBInit {varname} {
    upvar #0 $varname var
    global $varname
    global $var(symdb)
    global pcat

    if {[info exists $var(symdb)]} {
	unset $var(symdb)
    }

    starbase_new $var(symdb) condition shape color width dash \
	font fontsize fontweight fontslant text size size2 units angle
    starbase_rowins $var(symdb) 1
    starbase_set $var(symdb) 1 \
	[starbase_colnum $var(symdb) shape] $pcat(sym,shape)
    starbase_set $var(symdb) 1 \
	[starbase_colnum $var(symdb) color] $pcat(sym,color)
    starbase_set $var(symdb) 1 \
	[starbase_colnum $var(symdb) width] $pcat(sym,width)
    starbase_set $var(symdb) 1 \
	[starbase_colnum $var(symdb) dash] $pcat(sym,dash)
    starbase_set $var(symdb) 1 \
	[starbase_colnum $var(symdb) font] $pcat(sym,font)
    starbase_set $var(symdb) 1 \
	[starbase_colnum $var(symdb) fontsize] $pcat(sym,font,size)
    starbase_set $var(symdb) 1 \
	[starbase_colnum $var(symdb) fontweight] $pcat(sym,font,weight)
    starbase_set $var(symdb) 1 \
	[starbase_colnum $var(symdb) fontslant] $pcat(sym,font,slant)
    starbase_set $var(symdb) 1 \
	[starbase_colnum $var(symdb) units] $pcat(sym,units)
}

proc CATSymUpdate {varname} {
    upvar #0 $varname var
    global $varname

    CATGenerate $var(parent)
}

proc CATSymTable {varname} {
    upvar #0 $varname var
    global $varname
    global $var(symdb)
    global icatsym

    set nc [starbase_ncols $var(symdb)]
    if { $nc > $icatsym(mincols)} {
	$var(tbl) configure -cols $nc
    } else {
	$var(tbl) configure -cols $icatsym(mincols)
    }

    # add header row
    set nr [expr [starbase_nrows $var(symdb)]+1] 
    if {$nr > $icatsym(minrows)} {
	$var(tbl) configure -rows $nr
    } else {
	$var(tbl) configure -rows $icatsym(minrows)
    }
}

proc CATSymSelectCB {varname} {
    upvar #0 $varname var
    global $varname
    global $var(symdb)

    set ss "[$var(tbl) curselection]"
    set var(row) [string trim [lindex [split $ss ,] 0]]
    if {$var(row) != {}} {
	if {$var(row) <= [starbase_nrows $var(symdb)]} {
	    set var(condition) [starbase_get $var(symdb) $var(row) \
				    [starbase_colnum $var(symdb) condition]]
	    set var(shape) [starbase_get $var(symdb) $var(row) \
				[starbase_colnum $var(symdb) shape]]
	    set var(color) [starbase_get $var(symdb) $var(row) \
				[starbase_colnum $var(symdb) color]]
	    set var(width) [starbase_get $var(symdb) $var(row) \
				[starbase_colnum $var(symdb) width]]
	    set var(dash) [starbase_get $var(symdb) $var(row) \
				[starbase_colnum $var(symdb) dash]]
	    set var(font) [starbase_get $var(symdb) $var(row) \
				[starbase_colnum $var(symdb) font]]
	    set var(font,size) [starbase_get $var(symdb) $var(row) \
				[starbase_colnum $var(symdb) fontsize]]
	    set var(font,weight) [starbase_get $var(symdb) $var(row) \
				[starbase_colnum $var(symdb) fontweight]]
	    set var(font,slant) [starbase_get $var(symdb) $var(row) \
				[starbase_colnum $var(symdb) fontslant]]
	    set var(text) [starbase_get $var(symdb) $var(row) \
			       [starbase_colnum $var(symdb) text]]
	    set var(size) [starbase_get $var(symdb) $var(row) \
			       [starbase_colnum $var(symdb) size]]
	    set var(size2) [starbase_get $var(symdb) $var(row) \
				[starbase_colnum $var(symdb) size2]]
	    set var(units) [starbase_get $var(symdb) $var(row) \
				[starbase_colnum $var(symdb) units]]
	    set var(angle) [starbase_get $var(symdb) $var(row) \
				[starbase_colnum $var(symdb) angle]]
	    return
	}
    }

    CATSymClear $varname
}
