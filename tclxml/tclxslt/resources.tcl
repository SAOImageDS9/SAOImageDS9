# resources.tcl --
#
#	XSLT extension providing access to resources.
#
# Copyright (c) 2005-2008 Explain
# http://www.explain.com.au/
# Copyright (c) 2001-2004 Zveno Pty Ltd
# http://www.zveno.com/
#
# See the file "LICENSE" in this distribution for information on usage and
# redistribution of this file, and for a DISCLAIMER OF ALL WARRANTIES.
#
# $Id: resources.tcl,v 1.1.1.1 2009/01/16 22:11:49 joye Exp $

catch {
    package require base64
}

package provide xslt::resources 1.3

namespace eval xslt::resources {
    namespace export list type exists modified
}

# xslt::resources::list --
#
#	List the resources available at a given location
#
# Arguments:
#	locn	Resource path to list
#	basedir	Base directory
#	args	not needed
#
# Results:
#	Returns list of resources

proc xslt::resources::list {locnNd {baseNd {}} args} {
    # What kind of resource is this?  file, http, ftp, etc?

    if {[llength $args]} {
	return -code error "too many arguments"
    }

    set locn $locnNd
    # The resource may be passed in as a nodeset
    catch {set locn [dom::node stringValue [lindex $locnNd 0]]}
    set base $baseNd
    catch {set base [dom::node stringValue [lindex $baseNd 0]]}

    if {[string match /* $base]} {
	regsub {^(/)} $locn {} locn
    }

    set result {}
    foreach entry [glob -nocomplain [file join $base $locn *]] {
	lappend result [file tail $entry]
    }

    return $result
}

# xslt::resources::type --
#
#	Gives the type of the resource
#
# Arguments:
#	locn	Resource path to type
#	args	not needed
#
# Results:
#	Returns string describing resource

proc xslt::resources::type {locnNd args} {

    if {[llength $args]} {
	return -code error "too many arguments"
    }

    set locn $locnNd
    catch {set locn [dom::node stringValue [lindex $locnNd 0]]}

    if {[file isdir $locn]} {
	return directory
    } elseif {[file isfile $locn]} {
	return file
    } else {
	return other
    }
}

# xslt::resources::exists --
#
#	Check whether a resource exists
#
# Arguments:
#	locn	Resource path to type
#	args	not needed
#
# Results:
#	Returns boolean

proc xslt::resources::exists {locnNd args} {

    if {[llength $args]} {
	return -code error "too many arguments"
    }

    set locn $locnNd
    catch {set locn [dom::node stringValue [lindex $locnNd 0]]}

    if {[file exists $locn]} {
	return 1
    } else {
	return 0
    }
}

# xslt::resources::modified --
#
#	Report last modification time of a resource
#
# Arguments:
#	locn	Resource path
#	args	not needed
#
# Results:
#	Returns ISO standard date-time string

proc xslt::resources::modified {locnNd args} {

    if {[llength $args]} {
	return -code error "too many arguments"
    }

    set locn $locnNd
    catch {set locn [dom::node stringValue [lindex $locnNd 0]]}

    if {[file exists $locn]} {
	return [clock format [file mtime $locn] -format {%Y-%m-%dT%H:%M:%S}]
    } else {
	return {}
    }
}

# xslt::resources::mkdir --
#
#	Create a directory hierarchy.
#
# Arguments:
#	locn	Resource path for directory
#	args	not needed
#
# Results:
#	Returns directory created or empty string if unsuccessful

proc xslt::resources::mkdir {locnNd args} {

    if {[llength $args]} {
	return {}
    }

    set locn $locnNd
    catch {set locn [dom::node stringValue [lindex $locnNd 0]]}

    set dir [file split $locn]
    set current [lindex $dir 0]
    set remaining [lrange $dir 1 end]
    while {[llength $remaining]} {
	set current [file join $current [lindex $remaining 0]]
	set remaining [lrange $remaining 1 end]
	if {[file exists $current]} {
	    if {![file isdir $current]} {
		return {}
	    }
	} elseif {[file isdir $current]} {
	    continue
	} else {
	    if {[catch {file mkdir $current}]} {
		return {}
	    }
	}
    }

    return $locn
}

# xslt::resources::copy --
#
#	Copy a resource.
#
# Arguments:
#	src	Resource to copy
#	dest	Destination for resource
#	args	not needed
#
# Results:
#	Resource copied

proc xslt::resources::copy {srcNd destNd args} {
    set src $srcNd
    catch {set src [dom::node stringValue [lindex $srcNd 0]]}
    set dest $destNd
    catch {set dest [dom::node stringValue [lindex $destNd 0]]}

    if {[catch {file copy -force $src $dest} msg]} {
	catch {
	    package require log
	    log::log error "copy failed due to \"$msg\""
	}
	return 0
    } else {
	return 1
    }
}

# xslt::resources::move --
#
#	Move (rename) a resource.
#
# Arguments:
#	src	Resource to move
#	dest	Destination for resource
#	args	not needed
#
# Results:
#	Resource renamed

proc xslt::resources::move {srcNd destNd args} {
    set src $srcNd
    catch {set src [dom::node stringValue [lindex $srcNd 0]]}
    set dest $destNd
    catch {set dest [dom::node stringValue [lindex $destNd 0]]}

    if {[catch {file rename -force $src $dest}]} {
	return 0
    } else {
	return 1
    }
}

# xslt::resources::file-attributes --
#
#	Change attributes of a resource.
#
# Arguments:
#	src	Resource to change
#	what	Attribute to change
#	detail	Attribute value
#	args	not needed
#
# Results:
#	Resource attribute changed

proc xslt::resources::file-set-attributes {srcNd whatNd detailNd args} {
    set src $srcNd
    catch {set src [dom::node stringValue [lindex $srcNd 0]]}
    set what $whatNd
    catch {set what [dom::node stringValue [lindex $whatNd 0]]}
    set detail $detailNd
    catch {set detail [dom::node stringValue [lindex $detailNd 0]]}

    if {[catch {file attributes $src -$what $detail} result]} {
	return {}
    } else {
	return $result
    }
}

# xslt::resources::delete --
#
#	Delete a resource
#
# Arguments:
#	locn	Resource path to type
#	args	not needed
#
# Results:
#	Returns boolean

proc xslt::resources::delete {locnNd args} {

    if {[llength $args]} {
	return -code error "too many arguments"
    }

    set locn $locnNd
    catch {set locn [dom::node stringValue [lindex $locnNd 0]]}

    if {[catch {file delete -force $locn} msg]} {
	catch {
	    package require log
	    log::log error "delete failed due to \"$msg\""
	}
	return 0
    } else {
	return 1
    }
}

# xslt::resources::link --
#
#	Link a resource.
#
# Arguments:
#	from	Link to create
#	to	Target of link
#	args	not needed
#
# Results:
#	Symbolic link created

proc xslt::resources::link {fromNd toNd args} {
    set from $fromNd
    catch {set from [dom::node stringValue [lindex $fromNd 0]]}
    set to $toNd
    catch {set to [dom::node stringValue [lindex $toNd 0]]}

    if {[catch {file link $from $to}]} {
	return 0
    } else {
	return 1
    }
}

# xslt::resources::write-base64 --
#
#	Decode base64 encoded data and write the binary data to a file
#
# Arguments:
#	fname	Filename
#	b64	base64 encoded data
#	args	not needed
#
# Results:
#	File opened for writing and binary data written.
#	Returns 1 if file successfully written, 0 otherwise.

proc xslt::resources::write-base64 {fnameNd b64Nd args} {
    set fname $fnameNd
    catch {set fname [dom::node stringValue [lindex $fnameNd 0]]}
    set b64 $b64Nd
    catch {set b64 [dom::node stringValue [lindex $b64Nd 0]]}

    if {[catch {package require base64}]} {
	return 0
    }

    if {[catch {open $fname w} ch]} {
	return 0
    } else {
	set binarydata [base64::decode $b64]
	fconfigure $ch -trans binary -encoding binary
	puts -nonewline $ch $binarydata
	close $ch
	return 1
    }
}

# xslt::resources::read-base64 --
#
#	Read binary data from a file and base64 encode it
#
# Arguments:
#	fname	Filename
#	args	not needed
#
# Results:
#	File opened for readng and contents read.
#	Returns content as base64-encoded data.

proc xslt::resources::read-base64 {fnameNd args} {
    set fname $fnameNd
    catch {set fname [dom::node stringValue [lindex $fnameNd 0]]}

    if {[catch {package require base64}]} {
	return 0
    }

    if {[catch {open $fname} ch]} {
	return 0
    } else {
	fconfigure $ch -trans binary -encoding binary
	set binarydata [read $ch]
	close $ch
	return [base64::encode $binarydata]
    }
}

