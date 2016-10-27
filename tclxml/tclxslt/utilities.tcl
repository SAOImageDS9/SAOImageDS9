# utilities.tcl --
#
#	Miscellaneous extension functions for XSLT.
#
# Copyright (c) 2007 Explain
# http://www.explain.com.au/
# Copyright (c) 2004 Zveno Pty Ltd
# http://www.zveno.com/
#
# See the file "LICENSE" in this distribution for information on usage and
# redistribution of this file, and for a DISCLAIMER OF ALL WARRANTIES.
#
# $Id: utilities.tcl,v 1.1.1.1 2009/01/16 22:11:49 joye Exp $

package provide xslt::utilities 1.2

namespace eval xslt::utilities {
    namespace export character-first decode-base64
}

# xslt::utilities::character-first --
#
#	Returns the character that occurs first from a string
#	of possible characters.
#
# Arguments:
#	src	source string
#	chars	characters to find
#	args	not needed
#
# Results:
#	Returns a character or empty string.

proc xslt::utilities::character-first {srcNd charsNd args} {
    if {[llength $args]} {
	return -code error "too many arguments"
    }

    set src $srcNd
    catch {set src [dom::node stringValue [lindex $srcNd 0]]}
    set chars $charsNd
    catch {set chars [dom::node stringValue [lindex $charsNd 0]]}

    regsub -all {([\\\[\]^$-])} $chars {\\\1} chars
    if {[regexp [format {([%s])} $chars] $src dummy theChar]} {
	return $theChar
    }

    return {}
}

# xslt::utilities::decode-base64 --
#
#	Returns decoded (binary) base64-encoded data.
#
# Arguments:
#	src	source string
#	args	not needed
#
# Results:
#	Returns binary data.

proc xslt::utilities::decode-base64 {srcNd args} {
    if {[llength $args]} {
	return -code error "too many arguments"
    }

    if {[catch {package require base64}]} {
	return {}
    }

    set src $srcNd
    catch {set src [dom::node stringValue [lindex $srcNd 0]]}

    return [base64::decode $src]
}

# xslt::utilities::binary-document --
#
#	Writes binary data into a document
#	(this should be an extension element)
#
# Arguments:
#	fname	filename
#	data	binary data
#	args	not needed
#
# Results:
#	File opened for writing and data written.
#	Returns 1 on success, 0 otherwise

proc xslt::utilities::binary-document {fnameNd srcNd args} {
    if {[llength $args]} {
	return -code error "too many arguments"
    }

    set fname $fnameNd
    catch {set fname [dom::node stringValue [lindex $fnameNd 0]]}
    set data $dataNd
    catch {set data [dom::node stringValue [lindex $dataNd 0]]}

    if {[catch {open $fname w} ch]} {
	return 0
    }
    fconfigure $ch -trans binary -encoding binary
    puts -nonewline $ch $data
    close $ch

    return 1
}

# xslt::utilities::base64-binary-document --
#
#	Returns base64-encoded data from a file.
#
# Arguments:
#	fname	filename
#	args	not needed
#
# Results:
#	Returns text.  Returns empty string on error.

proc xslt::utilities::base64-binary-document {fnameNd args} {
    if {[llength $args]} {
	return -code error "too many arguments"
    }

    if {[catch {package require base64}]} {
	return {}
    }

    set fname $fnameNd
    catch {set fname [dom::node stringValue [lindex $fnameNd 0]]}

    if {[catch {open $fname} ch]} {
	return {}
    }
    fconfigure $ch -trans binary -encoding binary
    set data [read $ch]
    close $ch

    return [base64::encode $data]
}

