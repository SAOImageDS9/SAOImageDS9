## -*- tcl -*-
# ### ### ### ######### ######### #########

# Canvas Behavior Module. Highlighting items and groups of items.

# ### ### ### ######### ######### #########
## Requisites

package require Tcl 8.5
package require Tk

# ### ### ### ######### ######### #########
## API

namespace eval ::canvas::highlight {
    namespace export \
	on off
    namespace ensemble create
}

proc ::canvas::highlight::on {c tagOrId cmdprefix} {
    # Setting up a general highlight, with the items to highlight
    # identified by <tagOrId> and <cmdprefix> providing the 'on' and 'off'
    # methods invoked to (de)activate highlight. The cmdprefix is
    # fully responsible for how the highlightging of a particular
    # handle is handled.

    # Install the bindings doing the highlight
    $c bind $tagOrId <Any-Enter>  [namespace code [list Highlight   $c $cmdprefix %x %y]]
    $c bind $tagOrId <Any-Leave>  [namespace code [list Unhighlight $c $cmdprefix %x %y]]
    return
}

proc ::canvas::highlight::off {c tagOrId} {
    # Remove a highlight identified by canvas <c> and <tagOrId>.

    # Find and remove the bindings for this particular combination of
    # canvas and tagOrId.

    $c bind $tagOrId <Any-Enter>  {}
    $c bind $tagOrId <Any-Leave>  {}
    return
}

# ### ### ### ######### ######### #########
## Highlight execution.

proc ::canvas::highlight::Highlight {c cmdprefix x y} {
    # Check that highlight is not active
    variable active
    if {[info exists active]} return

    # Start a highlight operation, import remainder of state
    variable clientdata

    # Get item under mouse, if any.
    set item [$c find withtag current]
    if {$item eq {}} return

    # Initialize the highlight state, run the command to initialize
    # anything external to us. We remember the current location to
    # enable the delta calculations in 'Move'.

    set active     $cmdprefix
    set clientdata [{*}$active on $c $item]
    return
}

proc ::canvas::highlight::Unhighlight {c cmdprefix x y} {
    # Check for active highlight.
    variable active
    if {![info exists active]} return

    # Import remainder of the highlight state
    variable clientdata

    # Let the commnand process the movement as it sees fit.
    # Must return a boolean. False vetos the unhighlight.
    if {![{*}$active off $c $clientdata]} return

    # Clear highlight state
    unset -nocomplain active clientdata
    return
}

# ### ### ### ######### ######### #########
## Convenience. Highlightging via ...

# ### ### ### ######### ######### #########
## State.

namespace eval ::canvas::highlight {
    # State of a highlight in progress

    variable  active     ; # command prefix to invoke for 'on' / 'off'.
    variable  clientdata ; # Result of invoking 'on', data for 'off'.
}

# ### ### ### ######### ######### #########
## Ready

package provide canvas::highlight 0.1
return

# ### ### ### ######### ######### #########
## Scrap yard.
