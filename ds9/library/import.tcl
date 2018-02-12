#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc Import {fn format layer mode fn2} {
    global current

    if {$fn == {}} {
	return
    }

    switch -- $format {
	array {ImportArrayFile $fn $layer}
	rgbarray {
	    switch -- [$current(frame) get type] {
		base -
		3d {CreateRGBFrame}
		rgb {}
	    }
	    ImportRGBArrayFile $fn
	}
	nrrd {ImportNRRDFile $fn $layer}
	envi {ImportENVIFile $fn $fn2}
	gif -
	tiff -
	jpeg -
	png {ImportPhotoFile $fn $mode}
    }
    FinishLoad
}

# Support

proc ImportDialog {format {layer {}} {mode {}}} {
    global arrayfbox
    global rgbarrayfbox
    global nrrdfbox
    global envifbox
    global envi2fbox
    global giffbox
    global jpegfbox
    global tifffbox
    global pngfbox

    switch -- $format {
	array {set fn [OpenFileDialog arrayfbox]}
	rgbarray {set fn [OpenFileDialog rgbarrayfbox]}
	nrrd {set fn [OpenFileDialog nrrdfbox]}
	envi {set fn [OpenFileDialog envifbox]}
	gif {set fn [OpenFileDialog giffbox]}
	jpeg {set fn [OpenFileDialog jpegfbox]}
	tiff {set fn [OpenFileDialog tifffbox]}
	png {set fn [OpenFileDialog pngfbox]}
    }
    set fn2 {}

    if {$fn != {}} {
	set ok 1
	switch -- $format {
	    array {
		# do we have an array spec tag'd on
		if {![regexp -nocase {(.*)(\[.*\])} $fn foo base ext]} {
		    set ext {}
		    set ok [ArrayImportDialog 1 ext]
		    if {$ok} {
			append fn "$ext"
		    }
		}
	    }
	    rgbarray {
		# do we have an array spec tag'd on
		if {![regexp -nocase {(.*)(\[.*\])} $fn foo base ext]} {
		    set ext {}
		    set ok [ArrayImportDialog 3 ext]
		    if {$ok} {
			append fn "$ext"
		    }
		}
	    }
	    envi {
		set fn2 [FindENVIDataFile $fn]
		if {$fn2 == {}} {
		    set fn2 "[file rootname $fn].bsq"
		    SetFileLast envi2 $fn2
		    set fn2 [OpenFileDialog envi2fbox]
		    if {$fn2 == {}} {
			set ok 0
		    }
		}
	    }
	    nrrd -
	    gif -
	    jpeg -
	    tiff -
	    png {}
	}

	if {$ok} {
	    Import $fn $format $layer $mode $fn2
	}
    }
}

proc ArrayImportDialog {depth varname} {
    upvar $varname var
    global env
    global ed
    global ds9

    set w {.arr}

    set ed(ok) 0
    set ed(x) $ds9(array,x)
    set ed(y) $ds9(array,y)
    set ed(z) $depth
    set ed(bitpix) $ds9(array,bitpix)
    set ed(skip) $ds9(array,skip)
    set ed(arch) $ds9(array,arch)

    if {[info exists env(DS9_ARRAY)]} {
	if {[regexp {.*(dims.?=)([0-9]+)} $env(DS9_ARRAY) foo f1 item]} {
	    set ed(x) $item
	    set ed(y) $item
	}
	if {[regexp {.*(dim.?=)([0-9]+)} $env(DS9_ARRAY) foo f1 item]} {
	    set ed(x) $item
	    set ed(y) $item
	}
	if {[regexp {.*(xdim.?=)([0-9]+)} $env(DS9_ARRAY) foo f1 item]} {
	    set ed(x) $item
	}
	if {[regexp {.*(ydim.?=)([0-9]+)} $env(DS9_ARRAY) foo f1 item]} {
	    set ed(y) $item
	}
	if {[regexp {.*(zdim.?=)([0-9]+)} $env(DS9_ARRAY) foo f1 item]} {
	    set ed(z) $item
	}
	if {[regexp {.*(bitpix.?=)(-?[0-9]+)} $env(DS9_ARRAY) foo f1 item]} {
	    set ed(bitpix) $item
	}
	if {[regexp {.*(skip.?=)(-?[0-9]+)} $env(DS9_ARRAY) foo f1 item]} {
	    set ed(skip) $item
	}
	if {[regexp {.*arch.?=bigendian} $env(DS9_ARRAY) foo item]} {
	    set ed(arch) $item
	}
	if {[regexp {.*arch.?=littleendian} $env(DS9_ARRAY) foo item]} {
	    set ed(arch) $item
	}
    }

    DialogCreate $w [msgcat::mc {Import Array}] ed(ok)

    # Dim
    set f [ttk::labelframe $w.dim -text [msgcat::mc {Dimension}] -padding 2]
    ttk::entry $f.x -textvariable ed(x) -width 6
    ttk::entry $f.y -textvariable ed(y) -width 6
    ttk::entry $f.z -textvariable ed(z) -width 6
    grid $f.x $f.y $f.z -padx 2 -pady 2 -sticky w

    # Bitpix
    set f [ttk::labelframe $w.bitpix -text [msgcat::mc {Pixel Size}] -padding 2]
    ttk::radiobutton $f.char -text {Char} -variable ed(bitpix) -value 8
    ttk::radiobutton $f.short -text {Short} -variable ed(bitpix) -value 16
    ttk::radiobutton $f.ushort -text {UShort} -variable ed(bitpix) -value -16
    ttk::radiobutton $f.long -text {Long} -variable ed(bitpix) -value 32
    ttk::radiobutton $f.float -text {Float} -variable ed(bitpix) -value -32
    ttk::radiobutton $f.double -text {Double} -variable ed(bitpix) -value -64
    grid $f.char -padx 2 -pady 2 -sticky w
    grid $f.short $f.ushort $f.long -padx 2 -pady 2 -sticky w
    grid $f.float $f.double -padx 2 -pady 2 -sticky w

    # Skip
    set f [ttk::labelframe $w.skip -text [msgcat::mc {Header}] -padding 2]
    ttk::label $f.t1 -text [msgcat::mc {Skip First}]
    ttk::label $f.t2 -text [msgcat::mc {Bytes}]
    ttk::entry $f.skip -textvariable ed(skip) -width 6
    grid $f.t1 $f.skip $f.t2 -padx 2 -pady 2 -sticky w

    # Arch
    set f [ttk::labelframe $w.arch -text [msgcat::mc {Architecture}] -padding 2]
    ttk::radiobutton $f.big -text {Big-Endian} -variable ed(arch) \
	-value bigendian
    ttk::radiobutton $f.little -text {Little-Endian} -variable ed(arch) \
	-value littleendian
    grid $f.big $f.little -padx 2 -pady 2 -sticky w

    # Buttons
    set f [ttk::frame $w.buttons]
    ttk::button $f.ok -text [msgcat::mc {OK}] -command {set ed(ok) 1} \
	-default active
    ttk::button $f.cancel -text [msgcat::mc {Cancel}] -command {set ed(ok) 0}
    pack $f.ok $f.cancel -side left -expand true -padx 2 -pady 4

    bind $w <Return> {set ed(ok) 1}

    # Fini
    grid $w.dim -sticky news
    grid $w.bitpix -sticky news
    grid $w.skip -sticky news
    grid $w.arch -sticky news
    grid $w.buttons -sticky ew
    grid rowconfigure $w 0 -weight 1
    grid rowconfigure $w 1 -weight 1
    grid rowconfigure $w 2 -weight 1
    grid rowconfigure $w 3 -weight 1
    grid columnconfigure $w 0 -weight 1

    DialogCenter $w 
    DialogWait $w ed(ok)
    DialogDismiss $w

    if {$ed(ok)} {
	set ds9(array,x) $ed(x)
	set ds9(array,y) $ed(y)
	set ds9(array,bitpix) $ed(bitpix)
	set ds9(array,skip) $ed(skip)
	set ds9(array,arch) $ed(arch)

	set var "\[xdim=$ed(x),ydim=$ed(y),zdim=$ed(z),bitpix=$ed(bitpix),skip=$ed(skip),arch=$ed(arch)\]"
    }

    set rr $ed(ok)
    unset ed
    return $rr
}

