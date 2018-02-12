#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc CentroidDef {} {
    global centroid
    global icentroid

    set icentroid(top) .centroid
    set icentroid(mb) .centroidmb
}

proc CentroidDialog {} {
    global centroid
    global icentroid
    global ds9

    # see if we already have a window visible

    if {[winfo exists $icentroid(top)]} {
	raise $icentroid(top)
	return
    }

    # create the window
    set w $icentroid(top)
    set mb $icentroid(mb)

    Toplevel $w $mb 6 [msgcat::mc {Centroid Parameters}] CentroidDestroyDialog
    $mb add cascade -label [msgcat::mc {File}] -menu $mb.file
    $mb add cascade -label [msgcat::mc {Edit}] -menu $mb.edit

    menu $mb.file
    $mb.file add command -label [msgcat::mc {Apply}] \
	-command CentroidApplyDialog
    $mb.file add separator
    $mb.file add command -label [msgcat::mc {Close}] \
	-command CentroidDestroyDialog

    EditMenu $mb icentroid

    UpdateCentroidDialog

    # Param
    set f [ttk::frame $w.param]

    slider $f.islider 1 100 [msgcat::mc {Iteration}] \
	marker(centroid,iteration) [list CentroidApplyDialog]
    slider $f.rslider 0 50 [msgcat::mc {Radius}] \
	marker(centroid,radius) [list CentroidApplyDialog]

    grid $f.islider -padx 2 -pady 2 -sticky ew
    grid $f.rslider -padx 2 -pady 2 -sticky ew
    grid columnconfigure $f 0 -weight 1

    # Buttons
    set f [ttk::frame $w.buttons]
    ttk::button $f.apply -text [msgcat::mc {Apply}] \
	-command CentroidApplyDialog
    ttk::button $f.close -text [msgcat::mc {Close}] \
	-command CentroidDestroyDialog
    pack $f.apply $f.close -side left -expand true -padx 2 -pady 4

    # Fini
    ttk::separator $w.sep -orient horizontal
    pack $w.buttons $w.sep -side bottom -fill x
    pack $w.param -side top -fill both -expand true
}

proc CentroidDestroyDialog {} {
    global icentroid

    if {[winfo exists $icentroid(top)]} {
	destroy $icentroid(top)
	destroy $icentroid(mb)
    }
}

proc CentroidApplyDialog {} {
    global current
    global marker
    
    if {$current(frame) != {}} {
	$current(frame) marker centroid radius $marker(centroid,radius)
	$current(frame) marker centroid iteration $marker(centroid,iteration)
    }
}

proc UpdateCentroidDialog {} {
    global centroid
    global icentroid
    global current
    global marker

    global debug
    if {$debug(tcl,update)} {
	puts stderr "UpdateCentroidDialog"
    }

    if {[winfo exists $icentroid(top)]} {
	if {$current(frame) != {}} {
	    set marker(centroid,radius) \
		[$current(frame) get marker centroid radius]
	    set marker(centroid,iteration) \
		[$current(frame) get marker centroid iteration]
	}
    }
}

proc CentroidBackup {ch which} {
    puts $ch "$which marker centroid radius [$which get marker centroid radius]"
    puts $ch "$which marker centroid iteration [$which get marker centroid iteration]"
}
