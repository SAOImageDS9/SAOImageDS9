#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc slider {w from to label varname cmd {num {5}} {width {7}}} {
    ttk::frame $w
    ttk::scale $w.slider \
	-length 300 \
	-orient horizontal \
	-variable $varname \
	-takefocus 0 \
	-command [list SliderCmd $w $varname $cmd]

    ttk::label $w.label -text $label
    ttk::entry $w.entry -textvariable $varname -width $width
    grid $w.label -sticky w
    grid $w.slider -row 1 -padx 2 -pady 2 -sticky news
    grid $w.entry -row 1 -padx 2 -pady 2

    for {set ii 0} {$ii<$num} {incr ii} {
	ttk::label $w.t$ii -width $width -anchor center
    }

    grid rowconfigure $w 1 -weight 1
    grid columnconfigure $w 0 -weight 1
    grid rowconfigure $w 2 -weight 1

    bind $w.entry <Return> $cmd

    SliderFromTo $w $from $to
    SliderMinMax $w $from $to $num $num

    return $w
}

proc SliderFromTo {w from to} {
    $w.slider configure -from $from -to $to
}

proc SliderMinMax {w from to {num 5} {max 5}} {
    grid $w.label -columnspan $num
    grid $w.slider -columnspan $num
    grid $w.entry -column $num

    # forget all txt
    for {set ii 0} {$ii<$max} {incr ii} {
	if {[winfo exists $w.t$ii]} {
	    $w.t$ii configure -text {}
	    grid forget $w.t$ii
	}
    }

    for {set ii 0} {$ii<$num} {incr ii} {
	if {$from != $to} {
	    set vv [expr ($to*1.-$from)/($num-1)*$ii + $from]
	    if {[string is integer $from] && [string is integer $to]} {
		set vv [expr int($vv)]
	    } else {
		set vv [format {%.5g} $vv]
	    }
	    $w.t$ii configure -text $vv
	} else {
	    $w.t$ii configure -text {}
	}
	grid $w.t$ii -row 2 -column $ii
    }
}

proc SliderCmd {w varname cmd vv} {
    upvar $varname var

    set from [$w.slider cget -from]
    set to [$w.slider cget -to]

    if {[string is integer $from] && [string is integer $to]} {
	set var [expr int($vv)]
    }
    if {$cmd != {}} {
	eval $cmd
    }
}
