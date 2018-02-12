#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc BpandaDialog {varname} {
    upvar #0 $varname var
    global $varname

    # see if we already have a header window visible
    if {[winfo exists $var(top)]} {
	raise $var(top)
	return
    }

    # procs
    set var(which) bpanda
    set var(proc,apply) MarkerBasePandaRectApply
    set var(proc,close) MarkerBasePandaRectClose
    set var(proc,generate) BpandaGenerate
    set var(proc,coordCB) MarkerBasePandaRectCoordCB
    set var(proc,editCB) MarkerBasePandaRectEditCB
    set var(proc,distCB) MarkerBasePandaRectDistCB

    # base panda rect dialog
    MarkerBasePandaRectDialog $varname
}

proc BpandaGenerate {varname} {
    upvar #0 $varname var
    global $varname

    MarkerBaseAnnulusGenerateBox $varname
    MarkerBasePandaGenerateAngles $varname
}
