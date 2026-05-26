# history.tcl --
#
#       Provides a history mechanism for entry widgets
#
# Copyright (c) 2005    Aaron Faupell <afaupell@users.sourceforge.net>
# Copyright (c) 2016    MeshParts <info@meshparts.de>
#
# See the file "license.terms" for information on usage and redistribution
# of this file, and for a DISCLAIMER OF ALL WARRANTIES.

package require Tk
package provide history 0.3

namespace eval history {
    bind History <Up>   {::history::up %W}
    bind History <Down> {::history::down %W}
}

proc ::history::init {w {len 30}} {
    variable history
    variable prefs
    set bt [bindtags $w]
    if {[lsearch $bt History] > -1} { error "$w already has a history" }
    if {[set i [lsearch $bt $w]] < 0} { error "can't find $w in bindtags" }
    bindtags $w [linsert $bt [expr {$i + 1}] History]
    array set history [list $w,list {} $w,cur 0]
    set prefs(maxlen,$w) $len
    return $w
}

proc ::history::remove {w} {
    variable history
    variable prefs
    set bt [bindtags $w]
    if {[set i [lsearch $bt History]] < 0} { error "$w has no history" }
    bindtags $w [lreplace $bt $i $i]
    unset prefs(maxlen,$w) history($w,list) history($w,cur)
}

proc ::history::add {w line} {
    variable history
    variable prefs
    if {$history($w,cur) > 0 && [lindex $history($w,list) $history($w,cur)] == $line} {
	set history($w,list) [lreplace $history($w,list) $history($w,cur) $history($w,cur)]
    }
    # prevent entry of duplicate lines. effectively pulls old line to the front
    set idx [lsearch -dictionary $history($w,list) $line]
    if {$idx>=0} {
	set history($w,list) [lreplace $history($w,list) $idx $idx]
    }
    set history($w,list) [linsert $history($w,list) 0 $line]
    set history($w,list) [lrange $history($w,list) 0 $prefs(maxlen,$w)]
    set history($w,cur) 0
}

proc ::history::up {w} {
    variable history
    if {[lindex $history($w,list) [expr {$history($w,cur) + 1}]] != ""} {
	if {$history($w,cur) == 0} {
	    set history($w,tmp) [$w get]
	}
	$w delete 0 end
	incr history($w,cur)
	$w insert end [lindex $history($w,list) $history($w,cur)]
    } else {
	alert $w
    }
}

proc ::history::down {w} {
    variable history
    if {$history($w,cur) != 0} {
	$w delete 0 end
	if {$history($w,cur) == 0} {
	    $w insert end $history($w,tmp)
	    set history($w,cur) 0
	} else {
	    incr history($w,cur) -1
	    $w insert end [lindex $history($w,list) $history($w,cur)]
	}
    } else {
	alert $w
    }
}

proc ::history::get {w} {
    variable history
    return $history($w,list)
}

proc ::history::clear {w} {
    variable history
    set history($w,cur) 0
    set history($w,list) {}
    unset -nocomplain history($w,tmp)
}

proc ::history::configure {w option {value {}}} {
    variable history
    variable prefs
    switch -exact -- $option {
	length {
	    if {$value == ""} { return $prefs(maxlen,$w) }
	    ##nagelfar ignore
	    if {![string is integer -strict $value]} {
		return -code error "length must be an integer"
	    }
	    set prefs(maxlen,$w) $value
	}
	alert {
	    if {$value == ""} { return [info body ::history::alert] }
	    proc ::history::alert w $value
	}
	default {
	    return -code error "unknown option $option, expected alert, or length"
	}
    }
}

proc ::history::alert {w} {
    bell
}
