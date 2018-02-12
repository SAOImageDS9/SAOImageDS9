#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

set M_PI 3.14159265358979323846

# hours to degrees
proc h2d {h} {
    return [expr ($h + 0.0) * 15.0]
}

# degrees to hours
proc d2h {d} {
    return [expr ($d + 0.0) / 15.0]
}

# degrees to radians -- returns 0 <= r < PI
proc d2r {d} {
    global M_PI
    while {[::math::fuzzy::tge $d 360.0]} {
	set d [expr $d - 360.0]
    }
    return [expr ($d + 0.0) * ($M_PI / 360.0)]
}

# radians to degrees -- returns 0 <= d < PI
proc r2d {r} {
    global M_PI
    while {[::math::fuzzy::tge $r $M_PI]} {
	set r [expr $r - $M_PI]
    }
    return [expr ($r + 0.0) * (360.0 / $M_PI)]
}

#
#    strtod -- convert string to double
#
#    Supports sexagesimal values:
#    12:30:45.6 12h30m45.6s 12d30m45.6s "12 30 45.6"

#    Supports 12.5d (degrees) 12.5r (radians)
#
#    A hidden global _strtod returns the number of arguments in the input.
#    if this value is 3 or 4, then hms or dms was input. This can be used
#    to determine that hms was input for ra so that you can convert hours
#    to degrees.
#    
#
set _strtod 0
proc strtod {d} {
    global _strtod

    set d [string trim $d]
    set d [string trimleft $d 0]
    if { $d == {} } {
	set d 0
    }

    if { [string first - $d] >= 0 } {
	set sign "-"
	regsub -all -- "-" $d  {} d
    } elseif { [string first + $d] >= 0 } {
	set sign {}
	regsub -all -- {\+} $d  {} d
    } else {
	set sign {}
    }

    regsub -all {[ \t]*[hms][ \t]*} $d   ":" d
    set arglist [split $d ": "]

    set _strtod 0
    foreach arg $arglist {
	set args($_strtod) [string trimleft $arg 0]
	if { $args($_strtod) == {} } {
	    set args($_strtod) 0
	}
	incr _strtod
    }

    switch $_strtod {
	2 {
	    error "ERROR: strtod h:m:s|d:m:s|d"
	}
	3 {
	    set d [expr double($args(0)) + 0.0];
	    set m [expr double($args(1)) + 0.0];
	    set s [expr double($args(2)) + 0.0];
	}
	4 {
	    set d [expr double($args(0)) + 0.0];
	    set m [expr double($args(1)) + 0.0];
	    set s [expr double($args(2)) + 0.0];
	}
	default {
            set c [string range $d end end]
            if { $c == "r" } {
		set d [string trimright $d r]
		set d [r2d $d]
            } elseif { $c == "d" } {
		set d [string trimright $d d]
	    }
	    set m 0
	    set s 0
	}
    }
    set val [expr  $d + ($m / 60.0) + ($s / 3600.0)]
    # we don't want this. it rounds off to a precision of 6, which can
    # cause problems with h:m:s to degree convertions
    #   set val [format "%s%g" $sign $val]
    set val "$sign$val"
    return $val
}

#
# _uformat -- primative unit format converter to convert a float to a string
# output format can be:
#   # or : (output in sexagesimal) or d (output in decimal)
#
proc _uformat {oformat value} {

    if { $value < 0.0 } {
	set sign "-"
	set d [expr -$value]
    } else {
	set sign {}
	set d $value
    }
    switch $oformat {
	{#} { 
	    set m [expr ($d - (int($d))) * 60]
	    if { $m < 0 } {
		set m 0.0
	    }
	    set s [expr ($m - (int($m))) * 60]
	    if { $s < 0 } {
		set s 0.0
	    }
	    return [format "%s%d %d %.3f" \
			$sign [expr int($d)] [expr int($m)] $s]
	}
	:   {
	    set m [expr ($d - (int($d))) * 60]
	    if { $m < 0 } {
		set m 0.0
	    }
	    set s [expr ($m - (int($m))) * 60]
	    if { $s < 0 } {
		set s 0.0
	    }
	    return [format "%s%d:%d:%.3f" \
			$sign [expr int($d)] [expr int($m)] $s]
	}
	d  {
	    return [format "%s%f" $sign $d]
	}
    }
}

#
# uformat -- unit format converter
#
# uformat input_format output_format value
#
# where input format can be:
#   h (hours) d (degrees) m (minutes) s (seconds)
# and output format can be the same, with a suffix of:
#   # or : (output in sexagesimal) or d (output in decimal)
#
proc uformat {iformat oformat value} {
    set itype [string index $iformat 0]
    set otype [string index $oformat 0]
    set oform [string index $oformat 1]
    if { $oform == {} } {
	set oform d
    }
    set value [strtod $value]

    switch $itype {
	h {
	    switch $otype {
		h   {return [_uformat $oform $value]}
		d   {return [_uformat $oform [h2d $value]]}
		m   {return [_uformat $oform [h2d $value]*60]}
		s   {return [_uformat $oform [h2d $value]*60*60]}
	    }
	}
	d {
	    switch $otype {
		h   {return [_uformat $oform [d2h $value]]}
		d   {return [_uformat $oform $value]}
		m   {return [_uformat $oform [expr $value*60]]}
		s   {return [_uformat $oform [expr $value*60*60]]}
	    }
	}
	m {
	    switch $otype {
		h   {return [_uformat $oform [d2h $value/60]]}
		d   {return [_uformat $oform [expr $value/60]]}
		m   {return [_uformat $oform $value]}
		s   {return [_uformat $oform [expr $value*60]]}
	    }
	}
	s {
	    switch $otype {
		h   {return [_uformat $oform [h2d $value/60/60]]}
		d   {return [_uformat $oform [expr $value/60/60]]}
		m   {return [_uformat $oform [expr $value/60]]}
		s   {return [_uformat $oform $value]}
	    }
	}
    }
}
