#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc Open {fn format layer mode sys} {
    if {$fn == {}} {
	return
    }

    switch -- $format {
	fits {LoadFitsFile $fn $layer $mode}
	mosaicimagewcs {LoadMosaicImageWCSFile $fn $layer $sys}
	mosaicimageiraf {LoadMosaicImageIRAFFile $fn $layer}
	mosaicimagewfpc2 {LoadMosaicImageWFPC2File $fn $layer}
	mosaicwcs {LoadMosaicWCSFile $fn $layer $sys}
	mosaiciraf {LoadMosaicIRAFFile $fn $layer}
	mecube {LoadMECubeFile $fn}
	multiframe {LoadMultiFrameFile $fn}
	rgbimage {LoadRGBImageFile $fn}
	rgbcube {LoadRGBCubeFile $fn}
    }
    FinishLoad
}

# Support

proc OpenDialog {format {layer {}} {mode {}}} {
    global current
    global fitsfbox

    set fn [OpenFileDialog fitsfbox]

    # just in case (could be invoked via a menu keyshortcut)
    if {$current(frame) == {}} {
	CreateFrame
    }

    set sys wcs
    if {$fn != {}} {
	set ok 1
	switch -- $format {
	    mosaicimagewcs {set ok [MosaicWCSDialog sys]}
	    mosaicwcs {set ok [MosaicWCSDialog sys]}
	}

	if {$ok} {
	    switch -- $layer {
		mask {set ok [MaskLoad]}
	    }
	}
	
	if {$ok} {
	    Open $fn $format $layer $mode $sys
	}
    }
}

proc MosaicWCSDialog {varname} {
    upvar $varname var
    global ed

    set w {.wcs}

    set ed(ok) 0
    set ed(sys) wcs
    set ed(label) WCS

    DialogCreate $w [msgcat::mc {Load Mosaic}] ed(ok)

    # Param
    set f [ttk::frame $w.param]

    ttk::label $f.title -text [msgcat::mc {Select Coordinate System }]
    ttk::menubutton $f.sys -textvariable ed(label) \
	-menu $f.sys.m -width 10

    ThemeMenu $f.sys.m
    $f.sys.m add radiobutton -label [msgcat::mc {WCS}] \
	-variable ed(sys) -value "wcs" -command [list set ed(label) WCS]
    $f.sys.m add separator
    foreach l {a b c d e f g h i j k l m n o p q r s t u v w x y z} {
	$f.sys.m add radiobutton -variable ed(sys) \
	    -label "[msgcat::mc {WCS}] $l" \
	    -value "wcs$l" \
	    -command [list set ed(label) "[msgcat::mc {WCS}] $l"]
    }

    grid $f.title $f.sys

    # Buttons
    set f [ttk::frame $w.buttons]
    ttk::button $f.ok -text [msgcat::mc {OK}] -command {set ed(ok) 1} \
	-default active 
    ttk::button $f.cancel -text [msgcat::mc {Cancel}] -command {set ed(ok) 0}
    pack $f.ok $f.cancel -side left -expand true -padx 2 -pady 4

    bind $w <Return> {set ed(ok) 1}

    # Fini
    ttk::separator $w.sep -orient horizontal
    pack $w.buttons $w.sep -side bottom -fill x
    pack $w.param -side top -fill both -expand true

    DialogWait $w ed(ok)
    destroy $w

    if {$ed(ok)} {
	set var $ed(sys)
    }

    set rr $ed(ok)
    unset ed
    return $rr
}

