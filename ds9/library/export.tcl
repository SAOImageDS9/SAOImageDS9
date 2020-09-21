#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc ExportDef {} {
    global export

    set export(endian) native
    set export(jpeg,quality) 75
    set export(tiff,compress) none
}

proc Export {fn format fn2} {
    global export

    switch $format {
	array {ExportArrayFile $fn $export(endian)}
	rgbarray {ExportRGBArrayFile $fn $export(endian)}
	nrrd {ExportNRRDFile $fn $export(endian)}
	envi {ExportENVIFile $fn $fn2 $export(endian)}
	gif {ExportPhotoFile $fn $format {}}
	tiff {ExportPhotoFile $fn $format $export(tiff,compress)}
	jpeg {ExportPhotoFile $fn $format $export(jpeg,quality)}
	png {ExportPhotoFile $fn $format {}}
    }
}

# Process Cmds

proc ProcessExportCmd {varname iname} {
    upvar $varname var
    upvar $iname i

    # we need to be realized
    ProcessRealizeDS9

    export::YY_FLUSH_BUFFER
    export::yy_scan_string [lrange $var $i end]
    export::yyparse
    incr i [expr $export::yycnt-1]
}

proc ExportCmdSave {format fn {fn2 {}}} {
    switch -- $format {
	array {FileLast arrayfbox $fn}
	rgbarray {FileLast rgbarrayfbox $fn}
	nrrd {FileLast nrrdfbox $fn}
	envi {
	    FileLast envifbox $fn
	    FileLast envi2fbox $fn2
	}
	gif {FileLast giffbox $fn}
	jpeg {FileLast jpegfbox $fn}
	tiff {FileLast tifffbox $fn}
	png {FileLast pngfbox $fn}
	default {
	    Error "[msgcat::mc {Not valid export format}] $format"
	    return
	}
    }
    Export $fn $format $fn2
}

# Support

proc ExportDialog {format} {
    global export
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
	array {set fn [SaveFileDialog arrayfbox]}
	rgbarray {set fn [SaveFileDialog rgbarrayfbox]}
	nrrd {set fn [SaveFileDialog nrrdfbox]}
	envi {set fn [SaveFileDialog envifbox]}
	gif {set fn [SaveFileDialog giffbox]}
	jpeg {set fn [SaveFileDialog jpegfbox]}
	tiff {set fn [SaveFileDialog tifffbox]}
	png {set fn [SaveFileDialog pngfbox]}
    }
    set fn2 {}

    if {$fn != {}} {
	set ok 1
	switch -- $format {
	    array {set ok [ArrayExportDialog export(endian)]}
	    rgbarray {}
	    nrrd {set ok [ArrayExportDialog export(endian)]}
	    envi {
		set fn2 "[file rootname $fn].bsq"
		SetFileLast envi2 $fn2
#		set fn2 [SaveFileDialog envi2fbox]
#		if {$fn2 == {}} {
#		    set ok 0
#		}
		if {$ok} {
		    set ok [ArrayExportDialog export(endian)]
		}
	    }
	    gif {}
	    jpeg {set ok [JPEGExportDialog export(jpeg,quality)]}
	    tiff {set ok [TIFFExportDialog export(tiff,compress)]}
	    png {}
	}

	if {$ok} {
	    Export $fn $format $fn2
	}
    }
}

proc ArrayExportDialog {varname} {
    upvar $varname var
    global ed2

    set w {.arr}

    set ed2(ok) 0
    set ed2(arch) $var

    DialogCreate $w [msgcat::mc {Export Array}] ed2(ok)

    # Arch
    set f [ttk::labelframe $w.arch -text [msgcat::mc {Architecture}] -padding 2]
    ttk::radiobutton $f.native -text {Native} -variable ed2(arch) \
	-value native
    ttk::radiobutton $f.big -text {Big-Endian} -variable ed2(arch) \
	-value big
    ttk::radiobutton $f.little -text {Little-Endian} -variable ed2(arch) \
	-value little
    grid $f.native -padx 2 -pady 2 -sticky w
    grid $f.big -padx 2 -pady 2 -sticky w
    grid $f.little -padx 2 -pady 2 -sticky w

    # Buttons
    set f [ttk::frame $w.buttons]
    ttk::button $f.ok -text [msgcat::mc {OK}] -command {set ed2(ok) 1} \
	-default active
    ttk::button $f.cancel -text [msgcat::mc {Cancel}] -command {set ed2(ok) 0}
    pack $f.ok $f.cancel -side left -expand true -padx 2 -pady 4

    bind $w <Return> {set ed2(ok) 1}

    # Fini
    grid $w.arch -sticky news
    grid $w.buttons -sticky ew
    grid rowconfigure $w 0 -weight 1
    grid columnconfigure $w 0 -weight 1

    DialogWait $w ed2(ok)
    destroy $w

    if {$ed2(ok)} {
	set var $ed2(arch)
    }

    set rr $ed2(ok)
    unset ed2
    return $rr
}

proc TIFFExportDialog {varname} {
    upvar $varname var
    global ed2

    set w {.savetiff}

    set ed2(ok) 0
    set ed2(compress) $var

    DialogCreate $w {TIFF} ed2(ok)

    # Param
    set f [ttk::frame $w.param]
    ttk::label $f.title -text [msgcat::mc {Compression}]
    ttk::radiobutton $f.none -text [msgcat::mc {None}] \
	-variable ed2(compress) -value none
    ttk::radiobutton $f.jpeg -text {JPEG} \
	-variable ed2(compress) -value jpeg
    ttk::radiobutton $f.packbits -text {Packbits} \
	-variable ed2(compress) -value packbits
    ttk::radiobutton $f.deflate -text {Deflate} \
	-variable ed2(compress) -value deflate
    grid $f.title -padx 2 -pady 2 -sticky w
    grid $f.none -padx 2 -pady 2 -sticky w
    grid $f.jpeg -padx 2 -pady 2 -sticky w
    grid $f.packbits -padx 2 -pady 2 -sticky w
    grid $f.deflate -padx 2 -pady 2 -sticky w

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
	set var $ed2(compress)
    }

    set rr $ed2(ok)
    unset ed2
    return $rr
}

proc JPEGExportDialog {varname} {
    upvar $varname var
    global ed2

    set w {.savejpeg}

    set ed2(ok) 0
    set ed2(quality) $var

    DialogCreate $w {JPEG} ed2(ok)

    # Param
    set f [ttk::frame $w.param]
    slider $f.squality 0 100 [msgcat::mc {JPEG Quality Factor}] \
	ed2(quality) {}

    grid $f.squality -padx 2 -pady 2 -sticky ew
    grid columnconfigure $f 0 -weight 1

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
	set var $ed2(quality)
    }

    set rr $ed2(ok)
    unset ed2
    return $rr
}

