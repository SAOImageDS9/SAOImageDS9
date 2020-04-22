#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc MarkerBaseAnnulusDialog {varname} {
    upvar #0 $varname var
    global $varname

    set t [$var(frame) get marker $var(id) type]
    switch -- $t {
	ellipseannulus {set type "Ellipse Annulus"}
	boxannulus {set type "Box Annulus"}
	default {set type [string totitle $t]}
    }

    # variables
    set rr [$var(frame) get wcs]
    set var(system) [lindex $rr 0]
    set var(sky) [lindex $rr 1]
    set var(skyformat) [lindex $rr 2]
    AdjustCoordSystem $varname system

    set var(x) 0
    set var(y) 0

    # init
    MarkerBaseTextCB $varname
    MarkerBaseColorCB $varname
    MarkerBaseLineWidthCB $varname
    MarkerBasePropertyCB $varname
    MarkerBaseFontCB $varname
    $var(proc,coordCB) $varname

    MarkerBaseCenterMoveCB $varname

    # callbacks
    $var(frame) marker $var(id) callback delete MarkerBaseDeleteCB $varname
    $var(frame) marker $var(id) callback text MarkerBaseTextCB $varname
    $var(frame) marker $var(id) callback color MarkerBaseColorCB $varname
    $var(frame) marker $var(id) callback width MarkerBaseLineWidthCB $varname
    $var(frame) marker $var(id) callback property MarkerBasePropertyCB $varname
    $var(frame) marker $var(id) callback font MarkerBaseFontCB $varname

    $var(frame) marker $var(id) callback move MarkerBaseCenterMoveCB $varname

    # window
    Toplevel $var(top) $var(mb) 6 [msgcat::mc "$type"] \
	"$var(proc,close) $varname"

    # menus
    MarkerBaseMenu $varname
    MarkerBaseAnnulusFileMenu $varname
    EditMenu $var(mb) $varname
    ColorMenu $var(mb).color $varname color [list MarkerBaseColor $varname]
    WidthDashMenu $var(mb).width $varname linewidth dash \
	[list MarkerBaseLineWidth $varname] \
	[list MarkerBaseProperty $varname dash]
    MarkerBasePropertyMenu $varname
    FontMenu $var(mb).font $varname font font,size font,weight \
	font,slant [list MarkerBaseFont $varname]

    # Param
    set f [ttk::labelframe $var(top).param -text [msgcat::mc "Parameters"] \
	       -padding 2]

    ttk::label $f.tid -text [msgcat::mc {Number}]
    ttk::label $f.id -text "$var(id)"
    ttk::label $f.ttext -text [msgcat::mc {Text}]
    ttk::entry $f.text -textvariable ${varname}(text) -width 45
    ttk::label $f.tcenter -text [msgcat::mc {Center}]
    ttk::entry $f.centerx -textvariable ${varname}(x) -width 13
    ttk::entry $f.centery -textvariable ${varname}(y) -width 13
    CoordMenuButton $f.ucenter $varname system 1 sky skyformat \
	[list $var(proc,coordCB) $varname]
    CoordMenuEnable $f.ucenter.menu $varname system sky skyformat

    grid $f.tid $f.id -padx 2 -pady 2 -sticky w
    grid $f.ttext $f.text - - - -padx 2 -pady 2 -sticky w
    grid $f.tcenter $f.centerx $f.centery $f.ucenter \
	-padx 2 -pady 2 -sticky w

    # Buttons
    set f [ttk::frame $var(top).buttons]
    ttk::button $f.apply -text [msgcat::mc {Apply}] \
	-command "$var(proc,apply) $varname"
    ttk::button $f.generate -text [msgcat::mc {Generate}] \
	-command "$var(proc,generate) $varname"
    ttk::button $f.close -text [msgcat::mc {Close}] \
	-command "$var(proc,close) $varname"
    pack $f.apply $f.generate $f.close -side left -expand true -padx 2 -pady 4

    bind $var(top) <Return> "$var(proc,apply) $varname"

    # Fini
    grid $var(top).param -sticky news
    grid $var(top).buttons - - -sticky ew
}

proc MarkerBaseAnnulusFileMenu {varname} {
    upvar #0 $varname var
    global $varname

    ThemeMenu $var(mb).file
    $var(mb).file add command -label [msgcat::mc {Apply}] \
	-command "$var(proc,apply) $varname"
    $var(mb).file add command -label [msgcat::mc {Generate}] \
	-command "$var(proc,generate) $varname"
    $var(mb).file add separator
    $var(mb).file add command -label [msgcat::mc {Close}] \
	-command "$var(proc,close) $varname"
}

proc MarkerBaseAnnulusMethodMenu {varname} {
    upvar #0 $varname var
    global $varname

    $var(mb) add cascade -label [msgcat::mc {Method}] -menu $var(mb).method
    ThemeMenu $var(mb).method
    $var(mb).method add radiobutton -label [msgcat::mc {Equal Distance}] \
	-variable ${varname}(method) -value dist
    $var(mb).method add radiobutton -label [msgcat::mc {Equal Area}] \
	-variable ${varname}(method) -value area
}

proc MarkerBaseAnnulusGenerateCircle {varname} {
    upvar #0 $varname var
    global $varname

    $var(annulitxt) delete 1.0 end

    if {$var(annuli) < 1} {
	set var(annuli) 1
    }

    set inner $var(inner)
    set outer $var(outer)
    set annuli $var(annuli)

    if {($inner != {}) && ($outer != {}) && ($annuli != {})} {
	switch -- $var(method) {
	    dist {
		for {set i 0} {$i<=$annuli} {incr i} {
		    $var(annulitxt) insert end \
 		    "[expr ((($outer-$inner)/double($annuli))*$i)+$inner]\n"
		}
	    }

	    area {
		set pi 3.14159265358979323846
		set area [expr $pi*(($outer*$outer)-($inner*$inner))/$annuli]

		set r0 $inner
		$var(annulitxt) insert end "$r0\n"
		for {set i 0} {$i<$annuli} {incr i} {
		    set r1 [expr sqrt(($area+($pi*$r0*$r0))/$pi)]
		    $var(annulitxt) insert end \
			[format "%.4f\n" $r1]
		    set r0 $r1
		}
	    }
	}
    }
}

proc MarkerBaseAnnulusGenerateEllipse {varname} {
    upvar #0 $varname var
    global $varname

    $var(annulitxt) delete 1.0 end

    if {$var(annuli) < 1} {
	set var(annuli) 1
    }

    set radius1 $var(radius1)
    set radius2 $var(radius2)
    set radius3 $var(radius3)
    set annuli $var(annuli)

    if {($radius1 != {}) && ($radius2 != {}) && \
        ($radius3 != {}) && ($annuli != {})} {

	switch -- $var(method) {
	    dist {
		for {set i 0} {$i<=$annuli} {incr i} {
		    set major [expr ((($radius1-$radius3)/double($annuli))*$i)\
				   +$radius3]
		    set minor [expr $major*$radius2/$radius1]
		    $var(annulitxt) insert end "$major $minor\n"
		}
	    }

	    area {
		set pi 3.14159265358979323846
		set r [expr double($radius2)/$radius1]
		set area [expr $pi*(($radius1*$radius2)-($radius3*$radius3*$r))\
			      /$annuli]

		set major0 $radius3
		set minor0 [expr $radius3*$r]
		$var(annulitxt) insert end "$major0 $minor0\n"
		for {set i 0} {$i<$annuli} {incr i} {
		    set major1 [expr sqrt(($area+($pi*$major0*$minor0)) / \
					      ($pi*$r))]
		    set minor1 [expr $major1*$r]
		    $var(annulitxt) insert end \
			[format "%.4f %.4f\n" $major1 $minor1]
		    set major0 $major1
		    set minor0 $minor1
		}
	    }
	}
    }
}

proc MarkerBaseAnnulusGenerateBox {varname} {
    upvar #0 $varname var
    global $varname

    $var(annulitxt) delete 1.0 end

    if {$var(annuli) < 1} {
	set var(annuli) 1
    }

    set radius1 $var(radius1)
    set radius2 $var(radius2)
    set radius3 $var(radius3)
    set annuli $var(annuli)

    if {($radius1 != {}) && ($radius2 != {}) && \
        ($radius3 != {}) && ($annuli != {})} {

	if {$radius1<=0} {
	    set radius1 1
	}
	if {$radius2<=0} {
	    set radius2 1
	}

	switch -- $var(method) {
	    dist {
		for {set i 0} {$i<=$annuli} {incr i} {
		    set major [expr ((($radius1-$radius3)/$annuli)*$i)+$radius3]
		    set minor [expr $major*$radius2/$radius1]
		    $var(annulitxt) insert end "$major $minor\n"
		}
	    }

	    area {
		set r [expr double($radius2)/$radius1]
		set area [expr (($radius1*$radius2)-($radius3*$radius3*$r)) \
			      /$annuli]

		set major0 $radius3
		set minor0 [expr $radius3*$r]
		$var(annulitxt) insert end "$major0 $minor0\n"
		for {set i 0} {$i<$annuli} {incr i} {
		    set major1 [expr sqrt(($area+($major0*$minor0))/$r)]
		    set minor1 [expr $major1*$r]
		    $var(annulitxt) insert end \
			[format "%.4f %.4f\n" $major1 $minor1]
		    set major0 $major1
		    set minor0 $minor1
		}
	    }
	}
    }
}
