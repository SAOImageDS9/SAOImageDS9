#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc BoxAnnulusDialog {varname} {
    upvar #0 $varname var
    global $varname

    # see if we already have a header window visible
    if {[winfo exists $var(top)]} {
	raise $var(top)
	return
    }

    # procs
    set var(which) boxannulus
    set var(proc,apply) MarkerBaseAnnulusRectApply
    set var(proc,close) MarkerBaseAnnulusRectClose
    set var(proc,generate) MarkerBaseAnnulusGenerateBox
    set var(proc,coordCB) MarkerBaseAnnulusRectCoordCB
    set var(proc,editCB) MarkerBaseAnnulusRectEditCB
    set var(proc,distCB) MarkerBaseAnnulusRectDistCB

    # base
    MarkerBaseAnnulusRectDialog $varname size Width Height
}
