#==============================================================================
# Contains Wcb procedures for tile treeview widgets.
#
# Copyright (c) 2014-2018  Csaba Nemethi (E-mail: csaba.nemethi@t-online.de)
#==============================================================================

#
# Private procedure
# =================
#

#------------------------------------------------------------------------------
# wcb::treeviewWidgetCmd
#
# Processes the Tcl command corresponding to a tile treeview widget w with
# registered callbacks.  In this procedure, the execution of the commands
# focus, selection set, selection add, selection remove, and selection toggle
# is preceded by calls to the corresponding before-callbacks and followed by
# calls to the corresponding after-callbacks, in the global scope.
#------------------------------------------------------------------------------
proc wcb::treeviewWidgetCmd {w argList} {
    set orig [list ::_$w]

    set argCount [llength $argList]
    if {$argCount == 0} {
	# Let Tk report the error
	return [uplevel 2 $orig $argList]
    }

    set option [lindex $argList 0]
    set opLen [string length $option]
    set opArgs [lrange $argList 1 end]

    if {[string compare $option "focus"] == 0} {
	if {$argCount == 2} {
	    return [wcb::processCmd $w activate focus $opArgs]
	} else {
	    return [uplevel 2 $orig $argList]
	}

    } elseif {[string first $option "selection"] == 0 && $opLen >= 3} {
	set selOption [lindex $opArgs 0]

	if {[string first $selOption "set"] == 0} {
	    if {$argCount == 3} {
		set selOpArgs [lrange $opArgs 1 end]
		return [wcb::processCmd $w selset "selection set" \
			$selOpArgs]
	    } else {
		# Let Tk report the error
		return [uplevel 2 $orig $argList]
	    }
	} elseif {[string first $selOption "add"] == 0} {
	    if {$argCount == 3} {
		set selOpArgs [lrange $opArgs 1 end]
		return [wcb::processCmd $w seladd "selection add" \
			$selOpArgs]
	    } else {
		# Let Tk report the error
		return [uplevel 2 $orig $argList]
	    }
	} elseif {[string first $selOption "remove"] == 0} {
	    if {$argCount == 3} {
		set selOpArgs [lrange $opArgs 1 end]
		return [wcb::processCmd $w selclear "selection remove" \
			$selOpArgs]
	    } else {
		# Let Tk report the error
		return [uplevel 2 $orig $argList]
	    }
	} elseif {[string first $selOption "toggle"] == 0} {
	    if {$argCount == 3} {
		set selOpArgs [lrange $opArgs 1 end]
		return [wcb::processCmd $w seltoggle "selection toggle" \
			$selOpArgs]
	    } else {
		# Let Tk report the error
		return [uplevel 2 $orig $argList]
	    }
	} else {
	    return [uplevel 2 $orig $argList]
	}

    } else {
	return [uplevel 2 $orig $argList]
    }
}
