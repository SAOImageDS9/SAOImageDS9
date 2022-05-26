## -*- tcl -*-
# ### ### ### ######### ######### #########

## Canvas Utilities. Operations on item tags.

# ### ### ### ######### ######### #########
## Requisites

package require Tcl 8.5
package require Tk

namespace eval ::canvas::tag {
    namespace export \
	append prepend insert remove match
    namespace ensemble create
}

# ### ### ### ######### ######### #########
## API

proc ::canvas::tag::append {c tagOrId args} {
    insert $c $tagOrId end {*}$args
    #$c addtag $newtag withtag $tagOrId
    return
}

proc ::canvas::tag::prepend {c tagOrId args} {
    insert $c $tagOrId 0 {*}$args
    return
}

proc ::canvas::tag::insert {c tagOrId index args} {
    foreach item [$c find withtag $tagOrId] {
	$c itemconfigure $item -tags [linsert [$c gettags $item] $index {*}$args]
    }
    return
}

proc ::canvas::tag::remove {c tagOrId args} {
    foreach item [$c find withtag $tagOrId] {
	set tags [$c gettags $item]
	foreach tagToRemove $args {
	    while {1} {
		set pos [lsearch -exact $tags $tagToRemove]
		if {$pos < 0} break
		set tags [lreplace $tags $pos $pos]
	    }
	}
	$c itemconfigure $item -tags $tags
    }
    return
}

proc ::canvas::tag::match {c tagOrId pattern} {
    set result {}
    foreach item [$c find withtag $tagOrId] {
	lappend result {*}[lsearch -inline -all -glob \
			       [$c gettags $item] $pattern]
    }
    return [lsort -unique $result]
}

# ### ### ### ######### ######### #########
## Ready

package provide canvas::tag 0.1
return

# ### ### ### ######### ######### #########
## Scrap yard.
