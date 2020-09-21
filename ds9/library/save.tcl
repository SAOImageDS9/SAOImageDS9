#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc SaveDef {} {
    global savefits

    set savefits(type) image
    set savefits(mosaic) 1
}

proc Save {format fn} {
    global savefits

    switch -- $format {
	fits {SaveFitsFile $savefits(type) $fn}
	sfits {}
	rgbimage {SaveRGBImageFile $fn}
	rgbcube {SaveRGBCubeFile $fn}
	srgbcube {}
	mecube {SaveMECubeFile $fn}
	multiframe {}
	mosaicimage -
	mosaicimagewcs {SaveMosaicImageWCSFile $fn}
	mosaicimageiraf {}
	mosaicimagewfpc {}
	mosaic -
	mosaicwcs {SaveMosaicWCSFile $fn $savefits(mosaic)}
	mosaiciraf {}
	smosaicwcs {}
	smosaiciraf {}
    }
}

# Process Cmds

proc ProcessSaveCmd {varname iname} {
    upvar $varname var
    upvar $iname i

    # we need to be realized
    ProcessRealizeDS9

    save::YY_FLUSH_BUFFER
    save::yy_scan_string [lrange $var $i end]
    save::yyparse
    incr i [expr $save::yycnt-1]
}

proc SaveCmdLoad {format fn} {
    FileLast savefitsfbox $fn
    Save $format $fn
}

# Support

proc SaveDialog {format} {
    global savefits
    global current

    set fn [SaveFileDialog savefitsfbox]

    set which image
    if {$fn != {}} {
	set ok 1
	if {$current(frame) != {}} {
	    switch -- $format {
		fits {
		    if {[$current(frame) has fits bin]} {
			set ok [SaveParams savefits]
		    }
		}
		slice {
		    set format fits
		    set savefits(type) slice
		}
		mosaicwcs -
		mosaiciraf {
		    if {[$current(frame) has fits mosaic]} {
			set ok [SaveMosaicParams savefits]
		    }
		}
	    }
	}

	if {$ok} {
	    Save $format $fn
	}
    }
}

proc SaveParams {varname} {
    upvar $varname var
    global ed2
    set w {.savefits}

    set ed2(ok) 0
    set ed2(type) $var(type)

    DialogCreate $w {Fits} ed2(ok)

    # Param
    set f [ttk::frame $w.param]

    ttk::label $f.tfits -text [msgcat::mc {Fits}]
    ttk::radiobutton $f.image -text [msgcat::mc {Image}] \
	-variable ed2(type) -value image
    ttk::radiobutton $f.table -text {Table} \
	-variable ed2(type) -value table
    grid $f.tfits $f.image $f.table -padx 2 -pady 2 -sticky w

    # Buttons
    set f [ttk::frame $w.buttons]
    ttk::button $f.ok -text [msgcat::mc {OK}] -command {set ed2(ok) 1} \
	-default active 
    ttk::button $f.cancel -text [msgcat::mc {Cancel}] -command {set ed2(ok) 0}
    pack $f.ok $f.cancel -side left -expand true -padx 2 -pady 4

    bind $w <Return> {set ed2(ok) 1}

    # Fini
    ttk::separator $w.sep -orient horizontal
    pack $w.buttons $w.sep -side bottom -fill x
    pack $w.param -side top -fill both -expand true

    DialogWait $w ed2(ok)
    destroy $w

    if {$ed2(ok)} {
	set var(type) $ed2(type)
    }

    set rr $ed2(ok)
    unset ed2
    return $rr
}

proc SaveMosaicParams {varname} {
    upvar $varname var
    global ed2
    set w {.savefits}

    set ed2(ok) 0
    set ed2(mosaic) $var(mosaic)

    DialogCreate $w {Mosaic} ed2(ok)

    # Param
    set f [ttk::frame $w.param]

    ttk::label $f.tmosaic -text [msgcat::mc {Mosaic}]
    ttk::entry $f.mosaic -textvariable ed2(mosaic) -width 8
    grid $f.tmosaic $f.mosaic -padx 2 -pady 2 -sticky w

    # Buttons
    set f [ttk::frame $w.buttons]
    ttk::button $f.ok -text [msgcat::mc {OK}] -command {set ed2(ok) 1} \
	-default active 
    ttk::button $f.cancel -text [msgcat::mc {Cancel}] -command {set ed2(ok) 0}
    pack $f.ok $f.cancel -side left -expand true -padx 2 -pady 4

    bind $w <Return> {set ed2(ok) 1}

    # Fini
    ttk::separator $w.sep -orient horizontal
    pack $w.buttons $w.sep -side bottom -fill x
    pack $w.param -side top -fill both -expand true

    DialogWait $w ed2(ok)
    destroy $w

    if {$ed2(ok)} {
	set var(mosaic) $ed2(mosaic)
    }

    set rr $ed2(ok)
    unset ed2
    return $rr
}
