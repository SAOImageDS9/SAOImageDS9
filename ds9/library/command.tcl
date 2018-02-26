#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc BadVisualError {} {
    global ds9

    Error [msgcat::mc {Sorry, DS9 requires a Truecolor8, Truecolor16, Truecolor24 visual be available}]
    exit
}

proc ProcessCommandLineFirst {} {
    global argc
    global argv
    global icolorbar
    global ds9
    global pds9

    set i 0
    while {$i < $argc} {
	set item [lindex $argv $i]

	switch -- $item {
	    -help {
		puts "For more information, use --help"
		QuitDS9
	    }
	    -debug {incr i; ProcessDebugTclCmd argv i}
	    -private {
		# backward compatibility
	    }
	    -title {
		incr i
		set ds9(title) [lindex $argv $i]
		set t "SAOImage $ds9(title)"
		wm title $ds9(top) "$t"
		wm iconname $ds9(top) "$t"
	    }
	    -language {
		incr i
		set pds9(language) [lindex $argv $i]
		set pds9(language,name) [LanguageToName $pds9(language)]
	    }
	    -msg {
		incr i
		set pds9(language,dir) [lindex $argv $i]
	    }
	    -xpa {incr i; ProcessXPAFirstCmd argv i}
	}
	incr i
    }
}

proc ProcessCommandLine {} {
    global argc
    global argv

    ProcessCommand $argv $argc
}

proc ds9Cmd {argv} {
    ProcessCommand $argv [llength $argv]
}

proc ProcessCommand {argv argc} {
    global ds9
    global pds9
    global help
    global current
    global contour
    global colorbar
    global debug
    global wcs
    global view
    global grid
    global bin
    global scale
    global minmax
    global zscale
    global iis
    global file

    set file(type) fits
    set file(mode) {}
    set file(layer) {}
    set file(mosaic) wcs

    set noopts 0
    set i 0

    # Note: -help is processed previously for fv (temporary)
    set item {}

    while {$i < $argc} {
	set item [lindex $argv $i]
	switch -- $item {
	    -- {set noopts 1}
	    -? -
	    -help -
	    --help {HelpCommand}

	    -version {
		ProcessSendVersionCmd puts stdout {}
		QuitDS9
	    }

	    -2mass {incr i; Process2MASSCmd argv i}
	    -3d -
	    -3D {incr i; Process3DCmd argv i}
	    -about {ProcessSendAboutCmd puts stdout {} {} {}}
	    -align {incr i; ProcessAlignCmd argv i}
	    -analysis {incr i; ProcessAnalysisCmd argv i {} {}}
	    -array {set file(type) array}
	    -asinh {set scale(type) asinh; ChangeScale}
	    -bg -
	    -background {incr i; ProcessBgCmd argv i}
	    -backup {incr i; ProcessBackupCmd argv i}
	    -bin {incr i; ProcessBinCmd argv i}
	    -block {incr i; ProcessBlockCmd argv i}
	    -blink {incr i; ProcessBlinkCmd argv i}
	    -blue {set current(rgb) blue; RGBChannel}
	    -cat -
	    -catalog {incr i; ProcessCatalogCmd argv i}
	    -cd {incr i; ProcessCDCmd argv i}
	    -cmap {incr i; ProcessCmapCmd argv i}
	    -colorbar {incr i; ProcessColorbarCmd argv i}
	    -console {ProcessConsoleCmd argv i}
	    -contours -
	    -contour {incr i; ProcessContourCmd argv i}
	    -nocontour {set contour(view) 0; UpdateContour}
	    -crop {incr i; ProcessCropCmd argv i}
	    -crosshair {incr i; ProcessCrosshairCmd argv i}
	    -cursor {incr i; ProcessCursorCmd argv i}
	    -datacube -
	    -cube {incr i; ProcessCubeCmd argv i}
	    -debug {incr i; ProcessDebugCmd argv i}
	    -dss -
	    -dsssao {incr i; ProcessSAOCmd argv i}
	    -dsseso {incr i; ProcessESOCmd argv i}
	    -dssstsci {incr i; ProcessSTSCICmd argv i}
	    -envi {set file(type) envi}
	    -export {incr i; ProcessExportCmd argv i}
	    -exit -
	    -quit {ProcessQuitCmd argv i}
	    -frame {incr i; ProcessFrameCmd argv i}
	    -fifo {
		incr i
		set fifo [lindex $argv $i]
		if {$fifo!="none"} {
		    set iis(ififo) ${fifo}i
		    set iis(ofifo) ${fifo}o
		} else {
		    set iis(ififo) none
		    set iis(ofifo) none
		}
	    }
	    -fifo_only {
		set iis(port) 0
		set iis(unix) none
	    }
	    -file -
	    -fits {set file(type) fits; CommandFitsCmd argv i}
	    -geometry {
		# already processed
	    }
	    -gif {set file(type) gif}
	    -green {set current(rgb) green; RGBChannel}
	    -grid {incr i; ProcessGridCmd argv i}
	    -nogrid {set grid(view) 0; GridUpdateCurrent}
	    -header {incr i; ProcessHeaderCmd argv i}
	    -height {incr i; ProcessHeightCmd argv i}
	    -histequ {set scale(type) histequ; ChangeScale}
	    -horzgraph {
		# backward compatibility
		set view(graph,horz) 1
		UpdateView
	    }
	    -nohorzgraph {
		# backward compatibility
		set view(graph,horz) 0
		UpdateView
	    }
	    -iconify {incr i; ProcessIconifyCmd argv i}
	    -iis {incr i; ProcessIISCmd argv i}
	    -info {
		# backward compatibility
		set view(info) 1
		UpdateView
	    }
	    -noinfo {
		# backward compatibility
		set view(info) 0
		UpdateView
	    }
	    -invert {set colorbar(invert) 1; InvertColorbar}
	    -jpg -
	    -jpeg {set file(type) jpeg}
	    -language {
		# already processed
		incr i
	    }
	    -lock {incr i; ProcessLockCmd argv i}
	    -linear {set scale(type) linear; ChangeScale}
	    -log {set scale(type) log; ChangeScale}
	    -lower {ProcessLowerCmd argv i}
	    -magnifier {incr i; ProcessMagnifierCmd argv i}
	    -nomagnifier {
		# backward compatibility
		set view(magnifier) 0
		UpdateView
	    }
	    -mask {incr i; set file(layer) [ProcessMaskCmd argv i]}
	    -nomask {set file(layer) {}}
	    -match {incr i; ProcessMatchCmd argv i}
	    -mecube {set file(type) mecube}
	    -memf -
	    -multiframe {set file(type) multiframe}
	    -minmax {incr i; ProcessMinMaxCmd argv i}
	    -minmaxmode {
		# backward compatibility
		incr i
		set minmax(mode) [lindex $argv $i]
	    }
	    -minmaxsample {
		# backward compatibility
		incr i
		set minmax(sample) [lindex $argv $i]
	    }
	    -mode {incr i; ProcessModeCmd argv i}

	    -mosaic {
		set file(type) mosaic
		CommandMosaicCmd argv i
	    }
	    -mosaicimage {
		set file(type) mosaicimage
		CommandMosaicImageCmd argv i
	    }

	    -mosaicimageiraf {
		# backward compatibility
		set file(type) mosaicimage
		set file(mosaic) iraf
	    }
	    -mosaicimagewcs {
		# backward compatibility
		set file(type) mosaicimage
		set file(mosaic) wcs
	    }
	    -mosaicimagewfpc2 {
		# backward compatibility
		set file(type) mosaicimage
		set file(mosaic) wfpc2
	    }

	    -mosaiciraf {
		# backward compatibility
		set file(type) mosaic
		set file(mosaic) iraf
	    }
	    -mosaicwcs {
		# backward compatibility
		set file(type) mosaic
		set file(mosaic) wcs
	    }
	    -savempeg -
	    -movie {incr i; ProcessMovieCmd argv i}

	    -msg {
		# already processed
		incr i
	    }
	    -nameserver {incr i; ProcessNRESCmd argv i}
	    -nan {incr i; ProcessNanCmd argv i}
	    -nrrd {set file(type) nrrd}
	    -nvss {incr i; ProcessNVSSCmd argv i}
	    -orient {incr i; ProcessOrientCmd argv i}
	    -pagesetup {incr i; ProcessPageSetupCmd argv i}
	    -pspagesetup {incr i; ProcessPSPageSetupCmd argv i}
	    -pan {incr i; ProcessPanCmd argv i}
	    -panner {
		# backward compatibility
		set view(panner) 1
		UpdateView
	    }
	    -nopanner {
		# backward compatibility
		set view(panner) 0
		UpdateView
	    }
	    -photo {
		# backward compatibility
		set file(type) tiff
	    }
	    -pixeltable {incr i; ProcessPixelTableCmd argv i}
	    -nopixeltable {PixelTableDestroyDialog}
	    -plot {incr i; ProcessPlotCmd argv i {} {}}
	    -png {set file(type) png}
	    -precision {incr i; ProcessPrecisionCmd argv i}
	    -port {incr i; set iis(port) [lindex $argv $i]}
	    -inet_only -
	    -port_only {
		set iis(ififo) none
		set iis(ofifo) none
		set iis(unix) none
	    }
	    -pow {set scale(type) pow; ChangeScale}
	    -prefs {incr i; ProcessPrefsCmd argv i}
	    -preserve {incr i; ProcessPreserveCmd argv i}
	    -print {incr i; ProcessPrintCmd argv i}
	    -psprint {incr i; ProcessPSPrintCmd argv i}
	    -private {
		#already processed
	    }
	    -raise {ProcessRaiseCmd argv i}
	    -red {set current(rgb) red; RGBChannel}
	    -region -
	    -regions -
	    -regionfile {incr i; ProcessRegionsCmd argv i {} {}}
	    -restore {incr i; ProcessRestoreCmd argv i}
	    -rgb {incr i; ProcessRGBCmd argv i}
	    -rgbcube {set file(type) rgbcube}
	    -srgbcube {
		# backward compatibility
		set file(type) srgbcube
	    }
	    -rgbimage {set file(type) rgbimage}
	    -rgbarray {set file(type) rgbarray}
	    -rotate {incr i; ProcessRotateCmd argv i}
	    -samp {incr i; ProcessSAMPCmd argv i}
	    -savefits -
	    -save {incr i; ProcessSaveCmd argv i}
	    -saveimage {incr i; ProcessSaveImageCmd argv i}
	    -scale -
	    -ztrans {incr i; ProcessScaleCmd argv i}
	    -scalelims -
	    -scalelimits {
		#backward compatibility
		incr i
		set scale(min) [lindex $argv $i]
		incr i
		set scale(max) [lindex $argv $i]
		ChangeScaleLimit
	    }
	    -scalemode {
		#backward compatibility
		incr i
		set scale(mode) [string tolower [lindex $argv $i]]
		ChangeScaleMode
	    }
	    -scalescope {
		#backward compatibility
		incr i
		set scale(scope) [string tolower [lindex $argv $i]]
		ChangeScaleScope
	    }
	    -sfits {
		# backward compatibility
		set file(type) sfits
		CommandSFitsCmd argv i
	    }
	    -sia {incr i; ProcessSIACmd argv i}
	    -shm {incr i; ProcessShmCmd argv i 1}
	    -single {ProcessSingleCmd argv i}
	    -sinh {set scale(type) sinh; ChangeScale}
	    -skyview {incr i; ProcessSkyViewCmd argv i}
	    -sleep {incr i; ProcessSleepCmd argv i}
	    -slice {set file(mode) slice}
	    -noslice {set file(mode) {}}
	    -smooth {incr i; ProcessSmoothCmd argv i}
	    -smosaic {
		# backward compatibility
		set file(type) smosaic
		CommandMosaicCmd argv i
	    }
	    -smosaiciraf {
		# backward compatibility
		set file(type) smosaic
		set file(mosaic) iraf
	    }
	    -smosaicwcs {
		# backward compatibility
		set file(type) smosaic
		set file(mosaic) wcs
	    }
	    -squared {set scale(type) squared; ChangeScale}
	    -sqrt {set scale(type) sqrt; ChangeScale}
	    -source {incr i; ProcessSourceCmd argv i}
	    -tcl {incr i; ; ProcessTclCmd argv i {} {}}
	    -theme {
		# backward compatibility
		incr i; ProcessThemeCmd argv i
	    }
	    -threads {incr i; ProcessThreadsCmd argv i}
	    -tif -
	    -tiff {set file(type) tiff}
	    -tile {incr i; ProcessTileCmd argv i}
	    -title {
		#already processed
		incr i
	    }
	    -unix {incr i; set iis(unix) [lindex $argv $i]}
	    -unix_only {
		set iis(ififo) none
		set iis(ofifo) none
		set iis(port) 0
	    }
	    -url {set file(type) url}
	    -update {incr i; ProcessUpdateCmd argv i}
	    -vertgraph {
		#backward compatibility
		set view(graph,vert) 1
		UpdateView
	    }
	    -novertgraph {
		#backward compatibility
		set view(graph,vert) 0
		UpdateView
	    }
	    -view {incr i; ProcessViewCmd argv i}
	    -visual {
		#already processed
	    }
	    -vla -
	    -first {incr i; ProcessVLACmd argv i}
	    -vlss  {incr i; ProcessVLSSCmd argv i}
	    -vo {incr i; ProcessVOCmd argv i}
	    -wcs {incr i; ProcessWCSCmd argv i {} {}}
	    -wcsformat {
		#backward compatibility
		incr i
		set wcs(format,) [lindex $argv $i]
	    }
	    -web {incr i; ProcessWebCmd argv i}
	    -width {incr i; ProcessWidthCmd argv i}
	    -xpa {incr i; ProcessXPACmd argv i}
	    -z1 {
		#backward compatibility
		incr i
		set scale(min) [lindex $argv $i]
		ChangeScaleLimit
	    }
	    -z2 {
		#backward compatibility
		incr i
		set scale(max) [lindex $argv $i]
		ChangeScaleLimit
	    }
	    -zscale {incr i; ProcessZScaleCmd argv i}
	    -zmax {set scale(mode) zmax; ChangeScaleMode}
	    -zoom {
		incr i;
		ProcessZoomCmd argv i

		if {0} {
		    zoom::YY_FLUSH_BUFFER
		    zoom::yy_scan_string [lrange $argv $i end]
		    zoom::yyparse
		    incr i [expr $zoom::yycnt-1]
		}
	    }

	    default {
		# allow abc, -, and -[foo] but not -abc
		if {!$noopts && [regexp -- {^-[a-zA-Z]+} $item]} {
		    puts stderr "[msgcat::mc {Unknown command}]: $item"
		    puts stderr "[msgcat::mc {For more information, use --help}]"
		    return
		}

		switch $ds9(wm) {
		    x11 -
		    aqua {CommandLineLoad $item argv i}
		    win32 {
			# if win32 and envoked via DOS shell
			# we must expand wildcards ourselves
			if {[catch {glob $item} fns]} {
			    # cygwin/double click/DOS Shell no wildcards
			    CommandLineLoad $item argv i
			} else {
			    # DOS Shell with wildcards
			    foreach fn $fns {
				CommandLineLoad $fn argv i
			    }
			}
		    }
		}

		LoadUpdate
	    }
	}
	incr i
    }

    UpdateDS9
}

proc CommandLineLoad {item argvname iname} {
    upvar $argvname argv
    upvar $iname i

    global file
    global current

    if {$current(frame) != {}} {
	switch -- [$current(frame) get type] {
	    base {CommandLineLoadBase $item $argvname $iname}
	    rgb {CommandLineLoadRGB $item $argvname $iname}
	    3d {CommandLineLoad3D $item $argvname $iname}
	}
    } else {
	CommandLineLoadBase $item $argvname $iname
    }

    SetFileLast $file(type) $item
}

proc CommandLineLoadBase {item argvname iname} {
    upvar 2 $argvname argv
    upvar 2 $iname i

    global file
    global ds9

    switch -- $file(type) {
	fits {
	    # under windows, a double click on a 
	    # data file comes here
	    MultiLoad $file(layer) $file(mode)
	    LoadFitsFile $item $file(layer) $file(mode)
	}
	url {
	    MultiLoad $file(layer) $file(mode)
	    LoadURLFits $item $file(layer) $file(mode)
	}


	rgbimage {
	    CreateRGBFrame
	    LoadRGBImageFile $item
	}
	rgbcube {
	    CreateRGBFrame
	    LoadRGBCubeFile $item
	}

	mecube {
	    MultiLoad
	    LoadMECubeFile $item
	}
	multiframe {
	    MultiLoad
	    LoadMultiFrameFile $item
	}

	mosaicimage {
	    MultiLoad $file(layer)
	    switch -- $file(mosaic) {
		iraf {LoadMosaicImageIRAFFile $item $file(layer)}
		wfpc2 {LoadMosaicImageWFPC2File $item}
		default {LoadMosaicImageWCSFile $item $file(layer) $file(mosaic)}
	    }
	}
	mosaic {
	    switch -- $file(mosaic) {
		iraf {LoadMosaicIRAFFile $item $file(layer)}
		default {LoadMosaicWCSFile $item $file(layer) $file(mosaic)}
	    }
	}

	sfits {
	    #backward compatibility
	    incr i
	    MultiLoad $file(layer) $file(mode)
	    LoadSFitsFile $item [lindex $argv $i] $file(layer) $file(mode)
	}
	srgbcube {
	    #backward compatibility
	    CreateRGBFrame
	    incr i
	    LoadSRGBCubeFile $item [lindex $argv $i]
	}
	smosaic {
	    #backward compatibility
	    incr i
	    switch -- $file(mosaic) {
		iraf {LoadSMosaicIRAFFile $item [lindex $argv $i] $file(layer)}
		default {LoadSMosaicWCSFile $item [lindex $argv $i] $file(layer) $file(mosaic)}
	    }
	}

	array {
	    MultiLoad $file(layer)
	    ImportArrayFile $item $file(layer)
	}
	rgbarray {
	    CreateRGBFrame
	    ImportRGBArrayFile $item
	}
	nrrd {
	    MultiLoad $file(layer)
	    ImportNRRDFile $item $file(layer)
	}
	envi {
	    MultiLoad
	    set fn $item
	    set fn2 [lindex $argv [expr $i+1]]
	    if {$fn2 == {} || [string range $fn2 0 0] == {-}} {
		set fn2 [FindENVIDataFile $fn]
	    } else {
		incr i
	    }
	    ImportENVIFile $fn $fn2
	}
	gif -
	tiff -
	jpeg -
	png {
	    MultiLoad {} $file(mode)
	    ImportPhotoFile $item $file(mode)
	}
    }
}

proc CommandLineLoadRGB {item argvname iname} {
    upvar 2 $argvname argv
    upvar 2 $iname i

    global file

    switch -- $file(type) {
	fits {LoadFitsFile $item {} $file(mode)}
	url {LoadURLFits $item {} $file(mode)}

	rgbimage {
	    MultiLoadRGB
	    LoadRGBImageFile $item
	}
	rgbcube {
	    MultiLoadRGB
	    LoadRGBCubeFile $item
	}

	mecube {LoadMECubeFile $item}
	multiframe {
	    # not supported
	}

	mosaicimage {
	    switch -- $file(mosaic) {
		iraf {LoadMosaicImageIRAFFile $item {}}
		wfpc2 {LoadMosaicImageWFPC2File $item}
		default {LoadMosaicImageWCSFile $item {} $file(mosaic)}
	    }
	}
	mosaic {
	    switch -- $file(mosaic) {
		iraf {LoadMosaicIRAFFile $item {}}
		default {LoadMosaicWCSFile $item {} $file(mosaic)}
	    }
	}

	sfits {
	    #backward compatibility
	    incr i
	    LoadSFitsFile $item [lindex $argv $i] {} $file(mode)
	}
	srgbcube {
	    #backward compatibility
	    MultiLoadRGB
	    incr i
	    LoadSRGBCubeFile $item [lindex $argv $i]
	}
	smosaic {
	    #backward compatibility
	    incr i
	    switch -- $file(mosaic) {
		iraf {LoadMosaicIRAFSFitsFile $item [lindex $argv $i] {}}
		default {LoadMosaicWCSSFitsFile $item [lindex $argv $i] {} $file(mosaic)}
	    }
	}

	array {ImportArrayFile $item {}}
	rgbarray {
	    MultiLoadRGB
	    ImportRGBArrayFile $item
	}
	nrrd {ImportNRRDFile $item {}}
	envi {}
	gif -
	tiff -
	jpeg -
	png {
	    MultiLoadRGB
	    ImportPhotoFile $item $file(mode)
	}

    }
}

proc CommandLineLoad3D {item argvname iname} {
    upvar 2 $argvname argv
    upvar 2 $iname i

    global file

    switch -- $file(type) {
	fits {
	    MultiLoad {} $file(mode)
	    LoadFitsFile $item {} $file(mode)
	}
	url {
	    MultiLoad {} $file(mode)
	    LoadURLFits $item {} $file(mode)
	}

	rgbimage {
	    CreateRGBFrame
	    LoadRGBImageFile $item
	}
	rgbcube {
	    CreateRGBFrame
	    LoadRGBCubeFile $item
	}

	mecube {
	    MultiLoad
	    LoadMECubeFile $item
	}
	multiframe {
	    MultiLoad
	    LoadMultiFrameFile $item
	}

	mosaicimage {
	    MultiLoad
	    switch -- $file(mosaic) {
		iraf {LoadMosaicImageIRAFFile $item {}}
		wfpc2 {LoadMosaicImageWFPC2File $item}
		default {LoadMosaicImageWCSFile $item {} $file(mosaic)}
	    }
	}
	mosaic {
	    switch -- $file(mosaic) {
		iraf {LoadMosaicIRAFFile $item {}}
		default {LoadMosaicWCSFile $item {} $file(mosaic)}
	    }
	}

	sfits {
	    #backward compatibility
	    incr i
	    MultiLoad {} $file(mode)
	    LoadSFitsFile $item [lindex $argv $i] {} $file(mode)
	}
	srgbcube {
	    #backward compatibility
	    CreateRGBFrame
	    incr i
	    LoadSRGBCubeFile $item [lindex $argv $i]
	}
	smosaic {
	    #backward compatibility
	    incr i
	    switch -- $file(mosaic) {
		iraf {LoadMosaicIRAFSFitsFile $item [lindex $argv $i] {}}
		default {LoadMosaicWCSSFitsFile $item [lindex $argv $i] {} $file(mosaic)}
	    }
	}

	array {
	    MultiLoad
	    ImportArrayFile $item {}
	}
	rgbarray {
	    CreateRGBFrame
	    ImportRGBArrayFile $item
	}
	nrrd {
	    MultiLoad
	    ImportNRRDFile $item {}
	}
	envi {
	    set fn $item
	    set fn2 [lindex $argv [expr $i+1]]
	    if {$fn2 == {} || [string range $fn2 0 0] == {-}} {
		set fn2 [FindENVIDataFile $fn]
	    } else {
		incr i
	    }
	    ImportENVIFile $fn $fn2
	}
	gif -
	tiff -
	jpeg -
	png {
	    MultiLoad {} $file(mode)
	    ImportPhotoFile $item $file(mode)
	}
    }
}

proc CommandFitsCmd {varname iname} {
    upvar $varname var
    upvar $iname i

    global file

    set item [string tolower [lindex $var [expr $i+1]]]
    switch -- $item {
	mosaicimage -
	mosaic {
	    set file(type) $item
	    incr i

	    set item [string tolower [lindex $var [expr $i+1]]]
	    switch -- $item {
		wfpc2 {incr i; set file(mosaic) wfpc2}
		default {CommandMosaicType $item $iname}
	    }
	}
	mecube -
	multiframe -
	rgbcube -
	rgbimage {
	    set file(type) $item
	    incr i
	}
    }
}

proc CommandSFitsCmd {varname iname} {
    upvar $varname var
    upvar $iname i

    global file

    set item [string tolower [lindex $var [expr $i+1]]]
    switch -- $item {
	mosaic {
	    set file(type) smosaic
	    incr i

	    set item [string tolower [lindex $var [expr $i+1]]]
	    switch -- $item {
		wfpc2 {incr i; set file(mosaic) wfpc2}
		default {CommandMosaicType $item $iname}
	    }
	}
	rgbcube {
	    set file(type) srgbcube
	    incr i
	}
    }
}

proc CommandMosaicImageCmd {varname iname} {
    upvar $varname var
    upvar $iname i

    global file

    set item [string tolower [lindex $var [expr $i+1]]]
    switch -- $item {
	wfpc2 {incr i; set file(mosaic) wfpc2}
	default {CommandMosaicType $item $iname}
    }
}

proc CommandMosaicCmd {varname iname} {
    upvar $varname var
    upvar $iname i

    global file

    set item [string tolower [lindex $var [expr $i+1]]]
    CommandMosaicType $item $iname
}

proc CommandMosaicType {sys iname} {
    upvar 2 $iname i

    global file

    switch $sys {
	iraf -
	wcs -
	wcsa -
	wcsb -
	wcsc -
	wcsd -
	wcse -
	wcsf -
	wcsg -
	wcsh -
	wcsi -
	wcsj -
	wcsk -
	wcsl -
	wcsm -
	wcsn -
	wcso -
	wcsp -
	wcsq -
	wcsr -
	wcss -
	wcst -
	wcsu -
	wcsv -
	wcsw -
	wcsx -
	wcsy -
	wcsz {
	    incr i
	    set file(mosaic) $sys
	}
	default {set file(mosaic) wcs}
    }
}
