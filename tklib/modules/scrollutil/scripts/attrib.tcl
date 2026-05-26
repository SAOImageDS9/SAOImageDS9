#==============================================================================
# Contains procedures that implement the *attrib, has*attrib, and unset*attrib
# subcommands.
#
# Copyright (c) 2022-2023  Csaba Nemethi (E-mail: csaba.nemethi@t-online.de)
#==============================================================================

#------------------------------------------------------------------------------
# scrollutil::attribSubCmd
#
# Implements the *attrib subcommands.
#------------------------------------------------------------------------------
proc scrollutil::attribSubCmd {win prefix argList} {
    upvar ::scrollutil::ns${win}::attribs attribs

    set argCount [llength $argList]
    if {$argCount > 1} {
	#
	# Set the specified attributes to the given values
	#
	if {$argCount % 2 != 0} {
	    return -code error "value for \"[lindex $argList end]\" missing"
	}
	foreach {attr val} $argList {
	    set attribs($prefix-$attr) $val
	}
	return ""
    } elseif {$argCount == 1} {
	#
	# Return the value of the specified attribute
	#
	set attr [lindex $argList 0]
	set name $prefix-$attr
	if {[info exists attribs($name)]} {
	    return $attribs($name)
	} else {
	    return ""
	}
    } else {
	#
	# Return the current list of attribute names and values
	#
	set len [string length "$prefix-"]
	set result {}
	foreach name [lsort [array names attribs "$prefix-*"]] {
	    set attr [string range $name $len end]
	    lappend result [list $attr $attribs($name)]
	}
	return $result
    }
}

#------------------------------------------------------------------------------
# scrollutil::hasattribSubCmd
#
# Implements the has*attrib subcommands.
#------------------------------------------------------------------------------
proc scrollutil::hasattribSubCmd {win prefix attr} {
    upvar ::scrollutil::ns${win}::attribs attribs

    return [info exists attribs($prefix-$attr)]
}

#------------------------------------------------------------------------------
# scrollutil::unsetattribSubCmd
#
# Implements the unset*attrib subcommands.
#------------------------------------------------------------------------------
proc scrollutil::unsetattribSubCmd {win prefix attr} {
    upvar ::scrollutil::ns${win}::attribs attribs

    set name $prefix-$attr
    if {[info exists attribs($name)]} {
	unset attribs($name)
    }

    return ""
}
