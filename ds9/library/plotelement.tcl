#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc PlotHighliteElement {varname rowlist} {
    upvar #0 $varname var
    global $varname

    # rowlist starts at 1
    set result {}
    foreach rr $rowlist {
	append result "[expr $rr-1] "
    }
    $var(proc,highlite) $varname $result
}
