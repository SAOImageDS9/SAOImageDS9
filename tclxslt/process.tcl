# process.tcl --
#
#	XSLT extension providing processing functions
#
# Copyright (c) 2007 Packaged Press
# http://www.packagedpress.com/
# Copyright (c) 2002-2004 Zveno Pty Ltd
# http://www.zveno.com/
#
# See the file "LICENSE" in this distribution for information on usage and
# redistribution of this file, and for a DISCLAIMER OF ALL WARRANTIES.
#
# $Id: process.tcl,v 1.1.1.1 2009/01/16 22:11:49 joye Exp $

package provide xslt::process 1.1

package require uri 1.1
package require xslt::cache 3.2

namespace eval xslt::process {
    namespace export transform fop
    namespace export transform-result
    namespace export dtd-valid
}

# Add support for the dom: URI scheme.
#
# This scheme allows a script to reference an in-memory DOM tree.

proc ::uri::SplitDom url {
    return [list dom $url]
}

proc ::uri::JoinDom args {
    array set components {
	dom {}
    }
    array set components $args

    return dom:$components(dom)
}

# xslt::process::transform --
#
#	Perform an XSL Transformation.
#
# TODO:
#	Return messages
#	Cache source and stylesheet documents.
#	Generate dependency documents.
#
# Arguments:
#	src	Location of source document
#	ssheet	Location of stylesheet
#	result	Location for result document
#	params	Parameters (nodelist)
#	args	not needed
#
# Results:
#	Returns empty string for success

# This version forks a process
proc xslt::process::transform_fork {src ssheet result {params {}} args} {
    if {[catch {exec tclxsltproc -config /Users/steve/scms/lib/config.tcl --xinclude -o $result $ssheet $src} out]} {
	return $out
    } else {
	return {}
    }
}

# This version performs the transformation in-process.
proc xslt::process::transform:dbg {src ssheet result {params {}} args} {
    puts stderr [list process::transform $src $ssheet $result $params $args]
    if {[catch {eval transform:dbg [list $src $ssheet $result] $params $args} msg]} {
	puts stderr "\nprocess::transform returned error $msg\nStack trace:$::errorInfo\n"
	return -code error $msg
    } else {
	puts stderr [list process::transform ran OK]
	return $msg
    }
}
proc xslt::process::transform {srcNd ssheetNd resultNd {params {}} args} {

    # The filenames may be passed in as nodesets
    set src $srcNd
    catch {set src [dom::node stringValue [lindex $srcNd 0]]}
    set ssheet $ssheetNd
    catch {set ssheet [dom::node stringValue [lindex $ssheetNd 0]]}
    set result $resultNd
    catch {set result [dom::node stringValue [lindex $resultNd 0]]}

    # params will be a nodeset consisting of name/value pairs.
    # These must be converted to strings
    set parameterList {}
    switch [llength $params] {
	1 {
	    puts stderr [list xslt::process::transform params nodeType [dom::node cget $params -nodeType]]
	    set pNdList [dom::node children $params]
	}
	default {
	    set pNdList $params
	}
    }
    foreach paramNd $pNdList {
	set name [set value {}]
	foreach child [dom::node children $paramNd] {
	    set nameNd [dom::node selectNode $child name]
	    set name [dom::node stringValue $nameNd]
	    set valueNd [dom::node selectNode $child value]
	    set value [dom::node stringValue $valueNd]
	}
	if {[string compare $name {}]} {
	    lappend parameterList $name $value
	}
    }

    puts stderr [list xslt::process::transform parameters: $parameterList]

    set cleanup {}

    if {[catch {open $src} ch]} {
	# eval $cleanup
	return "unable to open source document \"$src\" for reading due to \"$ch\""
    }
    if {[catch {::dom::parse [read $ch] -baseuri $src} sourcedoc]} {
	# eval $cleanup
	return "unable to parse source document \"$src\" due to \"$sourcedoc\""
    }
    close $ch

    append cleanup "dom::destroy $sourcedoc" \n

    dom::xinclude $sourcedoc

    if {[catch {open $ssheet} ch]} {
	eval $cleanup
	return "unable to open stylesheet document \"$ssheet\" for reading due to \"$ch\""
    }
    if {[catch {::dom::parse [read $ch] -baseuri $ssheet} styledoc]} {
	eval $cleanup
	return "unable to parse stylesheet document \"$ssheet\" due to \"$styledoc\""
    }
    close $ch

    append cleanup "dom::destroy $styledoc" \n

    if {[catch {xslt::compile $styledoc} style]} {
	eval $cleanup
	return "unable to compile stylesheet \"$ssheet\" due to \"$style\""
    }

    append cleanup "rename $style {}" \n

    if {[catch {eval [list $style] transform [list $sourcedoc] $parameterList} resultdoc]} {
	eval $cleanup
	return "unable to transform document \"$src\" with stylesheet \"$ssheet\" due to \"$resultdoc\""
    }

    append cleanup "dom::destroy $resultdoc" \n

    if {[catch {open $result w} ch]} {
	eval $cleanup
	return "unable to save result document \"$result\" due to \"$ch\""
    }

    puts $ch [dom::serialize $resultdoc -method [$style cget -method]]
    close $ch

    catch {
	uplevel \#0 $cleanup
    }

    return {}
}

# xslt::process::transform-result --
#
#	Perform an XSL Transformation.
#	This version returns the result document.
#
# Arguments:
#	src	Location of source document
#	ssheet	Location of stylesheet
#	params	Parameters (nodelist)
#	args	not needed
#
# Results:
#	Returns result document.

proc xslt::process::transform-result {srcNd ssheetNd {params {}} args} {

    # The filenames may be passed in as nodesets
    set src $srcNd
    catch {set src [dom::node stringValue [lindex $srcNd 0]]}
    set ssheet $ssheetNd
    catch {set ssheet [dom::node stringValue [lindex $ssheetNd 0]]}

    # params will be a nodeset consisting of name/value pairs.
    # These must be converted to strings
    set parameterList {}
    foreach paramNd $params {
	set name [set value {}]
	foreach child [dom::node children $paramNd] {
	    set nameNd [dom::node selectNode $child name]
	    set name [dom::node stringValue $nameNd]
	    set valueNd [dom::node selectNode $child value]
	    set value [dom::node stringValue $valueNd]
	}
	if {[string compare $name {}]} {
	    lappend parameterList $name $value
	}
    }

    if {[catch {eval xslt::cache::transform [list $src $ssheet] $parameterList} rd]} {
	return "unable to perform transformation due to \"$rd\""
    }

    return $rd
}

# xslt::process::checkwffdoc --
#
#	Test a document for well-formedness
#
# Arguments:
#	doc	DOM token for document to check
#	args	not needed
#
# Results:
#	Returns success message

proc xslt::process::checkwffdoc {doc args} {
    return "of course it's well-formed, it's a DOM tree!"
}

# xslt::process::dtd-valid --
#
#	Test a document for (DTD) validity
#
# Arguments:
#	uri	URI for document to check, supports dom: scheme
#	args	not needed
#
# Results:
#	Returns success/failure message

proc xslt::process::dtd-valid {uri args} {
    array set components [uri::split $uri]

    switch -- $components(scheme) {
	file {
	    set ch [open $components(path)]
	    set xmldata [read $ch]
	    close $ch
	    set doc [dom::parse $xmldata -baseuri $uri]
	    set cleanup [list dom::destroy $doc]
	}
	dom {
	    set doc $components(dom)
	    set cleanup {}
	}
	default {
	    # TODO: support http: scheme
	    return -code error "unable to resolve entity $uri"
	}
    }

    if {[catch {dom::validate $doc} msg]} {
	set result $msg
    } else {
	set result {document is valid}
    }

    eval $cleanup

    return $result
}

# xslt::process::fop --
#
#	Format an XSL FO document using FOP
#
# Arguments:
#	fo	Location of FO document
#	pdf	Location for PDF document
#	params	Parameters (nodelist)
#	args	not needed
#
# Results:
#	Returns success message

proc xslt::process::fop {fo pdf params args} {
    return "format fo $fo to produce $pdf"
}

# xslt::process::log --
#
#	Emit a log message.  The application is expected to override this.
#
# Arguments:
#	msg	Log message
#	args	not needed
#
# Results:
#	None

proc xslt::process::log {msg args} {
    Stderr Log:\ $msg
    return {}
}


