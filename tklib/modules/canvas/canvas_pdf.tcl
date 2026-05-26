# *- tcl -*-
# ### ### ### ######### ######### #########

# Copyright (c) 2014 andreas Kupries, Arjen Markus
# OLL licensed (http://wiki.tcl.tk/10892).

# ### ### ### ######### ######### #########
## Requisites

package require Tcl 8.5-
package require Tk  8.5-
package require pdf4tcl
package require fileutil

namespace eval ::canvas {}

# ### ### ### ######### ######### #########
## Implementation.

proc ::canvas::pdf {canvas} {
    #raise [winfo toplevel $canvas] 
    #update

    set tmp [fileutil::tempfile canvas_pdf_]

    # Note: The paper dimensions are hardcoded. A bit less than A7,
    # looks like. This looks to be something which could be improved
    # on.

    # Note 2: We go through a temp file to write the pdf, and load it
    # back into memory for the caller to use.

    set pdf [::pdf4tcl::new %AUTO% -paper {9.5c 6.0c}]
    $pdf canvas $canvas -width 9.2c
    $pdf write -file $tmp
    $pdf destroy

    set data [fileutil::cat $tmp]
    file delete $tmp

    return $data
}

# ### ### ### ######### ######### #########
## Helper commands. Internal.

# ### ### ### ######### ######### #########
## Ready

package provide canvas::pdf 1.0.1
return
