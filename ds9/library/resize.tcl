#  Copyright (C) 1999-2023
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

# original Author: David Easton

proc resizePhoto {src newx newy {dest ""} } {
    
    set mx [image width $src]
    set my [image height $src]
    
    if { "$dest" == ""} {
	set dest [image create photo]
    }
    $dest configure -width $newx -height $newy
    
    # Check if we can just zoom using -zoom option on copy
    if {$newx >= $mx && $newy >= $mx} {
	if { $newx % $mx == 0 && $newy % $my == 0} {
	    set ix [expr $newx/$mx]
	    set iy [expr $newy/$my]
	    $dest copy $src -zoom $ix $iy
	    return $dest
	}
    }

    # Check if we can just use -subsample option on copy
    if {$newx < $mx && $newy < $mx} {
	if { $mx % $newx == 0 && $my % $newy == 0} {
	    set ix [expr $mx/$newx]
	    set iy [expr $my/$newy]
	    $dest copy $src -subsample $ix $iy
	    return $dest
	}
    }

    # ok, got to do it the hard way
    set ny 0
    set ytot $my
    for {set y 0} {$y < $my} {incr y} {
	# Do horizontal resize
	foreach {pr pg pb} [$src get 0 $y] {break}
	set pt [$src transparency get 0 $y]

	set row [list]
	set trow [list]
	set thisrow [list]
	set tthisrow [list]
	
	set nx 0
	set xtot $mx
	for {set x 1} {$x < $mx} {incr x} {
	    # Add whole pixels as necessary
	    while { $xtot <= $newx } {
		lappend row [format "#%02x%02x%02x" $pr $pg $pb]
		lappend thisrow $pr $pg $pb
		lappend trow $pt
		lappend tthisrow $pt

		incr xtot $mx
		incr nx
	    }
	    
	    # Now add mixed pixels
	    foreach {r g b} [$src get $x $y] {break}
	    set t [$src transparency get $x $y]
	    
	    # Calculate ratios to use
	    set xtot [expr {$xtot - $newx}]
	    set rn $xtot
	    set rp [expr {$mx - $xtot}]
	    
	    # This section covers shrinking an image where
	    # more than 1 source pixel may be required to
	    # define the destination pixel
	    
	    set xr 0
	    set xg 0
	    set xb 0
	    set xt 0
	    while { $xtot > $newx } {
		incr xr $r
		incr xg $g
		incr xb $b
		incr xt $t
		
		set xtot [expr {$xtot - $newx}]
		incr x
		foreach {r g b} [$src get $x $y] {break}
		set t [$src transparency get $x $y]
	    }
	    
	    # Work out the new pixel colours
	    set tr [expr {int( ($rn*$r + $xr + $rp*$pr) / $mx)}]
	    set tg [expr {int( ($rn*$g + $xg + $rp*$pg) / $mx)}]
	    set tb [expr {int( ($rn*$b + $xb + $rp*$pb) / $mx)}]
	    set tt [expr $t || $xt || $pt]
	    
	    if {$tr > 255} {set tr 255}
	    if {$tg > 255} {set tg 255}
	    if {$tb > 255} {set tb 255}
	    
	    # Output the pixel
	    lappend row [format "#%02x%02x%02x" $tr $tg $tb]
	    lappend thisrow $tr $tg $tb
	    lappend trow $tt
	    lappend tthisrow $tt

	    incr xtot $mx
	    incr nx
	    
	    set pr $r
	    set pg $g
	    set pb $b
	    set pt $t
	}
	
	# Finish off pixels on this row
	while { $nx < $newx } {
	    lappend row [format "#%02x%02x%02x" $r $g $b]
	    lappend thisrow $r $g $b
	    lappend trow $t
	    lappend tthisrow $t

	    incr nx
	}

	# Do vertical resize
	if {[info exists prevrow] && [info exists tprevrow]} {
	    set nrow [list]
	    set tnrow [list]

	    # Add whole lines as necessary
	    while { $ytot <= $newy } {
		$dest put [list $prow] -to 0 $ny 

		set yc $ny
		set xc 0
		foreach {rr} $tprow {
		    $dest transparency set $xc $yc $rr
		    incr xc
		}

		incr ytot $my
		incr ny
	    }
	    
	    # Now add mixed line
	    # Calculate ratios to use
	    set ytot [expr {$ytot - $newy}]
	    set rn $ytot
	    set rp [expr {$my - $rn}]
	    
	    # This section covers shrinking an image
	    # where a single pixel is made from more than
	    # 2 others.  Actually we cheat and just remove 
	    # a line of pixels which is not as good as it should be
	    while { $ytot > $newy } {
		set ytot [expr {$ytot - $newy}]
		incr y
		continue
	    }
	    
	    # Calculate new row
	    foreach {pr pg pb} $prevrow {r g b} $thisrow {
		set tr [expr {int( ($rn*$r + $rp*$pr) / $my)}]
		set tg [expr {int( ($rn*$g + $rp*$pg) / $my)}]
		set tb [expr {int( ($rn*$b + $rp*$pb) / $my)}]
		lappend nrow [format "#%02x%02x%02x" $tr $tg $tb]
	    }
	    
	    # Calculate new transparency row
	    foreach {pt} $tprevrow {t} $tthisrow {
		set tt [expr ($t || $pt)]
		lappend tnrow $tt
	    }

	    $dest put [list $nrow] -to 0 $ny 

	    set yc $ny
	    set xc 0
	    foreach {rr} $tnrow {
		$dest transparency set $xc $yc $rr
		incr xc
	    }

	    incr ytot $my
	    incr ny
	}
	
	set prevrow $thisrow
	set prow $row

	set tprevrow $tthisrow
	set tprow $trow
    }
    
    # Finish off last rows
    while { $ny < $newy } {
	$dest put [list $row] -to 0 $ny

	set yc $ny
	set xc 0
	foreach {rr} $trow {
	    $dest transparency set $xc $yc $rr
	    incr xc
	}
	incr ny
    }

    return $dest
}

# requires Tk 8.7
proc resizePhoto87 { src newx newy { dest "" } } {
    set mx [image width  $src]
    set my [image height $src]

    if { $dest eq "" } {
        set dest [image create photo]
    }
    $dest configure -width $newx -height $newy

    # Check if we can just zoom using -zoom option on copy
    if { $newx % $mx == 0 && $newy % $my == 0} {
        set ix [expr {$newx / $mx}]
        set iy [expr {$newy / $my}]
        $dest copy $src -zoom $ix $iy
        return $dest
    }

    set ny 0
    set ytot $my
    for {set y 0} {$y < $my} {incr y} {
        # Do horizontal resize
        foreach {pr pg pb pa} [$src get 0 $y -withalpha] {break}

        set row [list]
        set thisrow [list]
        set nx 0
        set xtot $mx
        for {set x 1} {$x < $mx} {incr x} {
            # Add whole pixels as necessary
            while { $xtot <= $newx } {
                lappend row [format "#%02x%02x%02x%02x" $pr $pg $pb $pa]
                lappend thisrow $pr $pg $pb $pa
                incr xtot $mx
                incr nx
            }

            # Now add mixed pixels
            foreach {r g b a} [$src get $x $y -withalpha] {break}

            # Calculate ratios to use
            set xtot [expr {$xtot - $newx}]
            set rn $xtot
            set rp [expr {$mx - $xtot}]

            # This section covers shrinking an image where
            # more than 1 source pixel may be required to
            # define the destination pixel
            set xr 0
            set xg 0
            set xb 0
            set xa 0
            while { $xtot > $newx } {
                incr xr $r
                incr xg $g
                incr xb $b
                incr xa $a
                set xtot [expr {$xtot - $newx}]
                incr x
                foreach {r g b a} [$src get $x $y -withalpha] {break}
            }

            # Work out the new pixel colours
            set tr [expr {int( ($rn*$r + $xr + $rp*$pr) / $mx)}]
            set tg [expr {int( ($rn*$g + $xg + $rp*$pg) / $mx)}]
            set tb [expr {int( ($rn*$b + $xb + $rp*$pb) / $mx)}]
            set ta [expr {int( ($rn*$a + $xa + $rp*$pa) / $mx)}]

            if {$tr > 255} {set tr 255}
            if {$tg > 255} {set tg 255}
            if {$tb > 255} {set tb 255}
            if {$ta > 255} {set ta 255}

            # Output the pixel
            lappend row [format "#%02x%02x%02x%02x" $tr $tg $tb $ta]
            lappend thisrow $tr $tg $tb $ta
            incr xtot $mx
            incr nx

            set pr $r
            set pg $g
            set pb $b
            set pa $a
        }

        # Finish off pixels on this row
        while { $nx < $newx } {
            lappend row [format "#%02x%02x%02x%02x" $r $g $b $a]
            lappend thisrow $r $g $b $a
            incr nx
        }

        # Do vertical resize
        if {[info exists prevrow]} {
            set nrow [list]
            # Add whole lines as necessary
            while { $ytot <= $newy } {
                $dest put [list $prow] -to 0 $ny 
                incr ytot $my
                incr ny
            }

            # Now add mixed line
            # Calculate ratios to use
            set ytot [expr {$ytot - $newy}]
            set rn $ytot
            set rp [expr {$my - $rn}]

            # This section covers shrinking an image
            # where a single pixel is made from more than
            # 2 others.  Actually we cheat and just remove
            # a line of pixels which is not as good as it should be
            while { $ytot > $newy } {
                set ytot [expr {$ytot - $newy}]
                incr y
                continue
            }

            # Calculate new row
            foreach {pr pg pb pa} $prevrow {r g b a} $thisrow {
                set tr [expr {int( ($rn*$r + $rp*$pr) / $my)}]
                set tg [expr {int( ($rn*$g + $rp*$pg) / $my)}]
                set tb [expr {int( ($rn*$b + $rp*$pb) / $my)}]
                set ta [expr {int( ($rn*$a + $rp*$pa) / $my)}]
                lappend nrow [format "#%02x%02x%02x%02x" $tr $tg $tb $ta]
            }

            $dest put [list $nrow] -to 0 $ny
            incr ytot $my
            incr ny
        }

        set prevrow $thisrow
        set prow $row
    }

    # Finish off last rows
    while { $ny < $newy } {
        $dest put [list $row] -to 0 $ny
        incr ny
    }
    return $dest
}
