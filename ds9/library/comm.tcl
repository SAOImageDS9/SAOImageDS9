#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

# used to access ProcessSend*Cmd via tcl
proc CommReturn {id rr} {
    return "$id $rr"
}

proc CommSet {fn paramlist {safemode 0}} {
    global debug
    if {$debug(tcl,hv) || $debug(tcl,samp)} {
	puts stderr "CommSet:$fn:$paramlist:$safemode"
    }

    set cmd [lindex $paramlist 0]
    set param [lrange $paramlist 1 end]
    set len 0

    set i 0

    catch {
    switch -- $cmd {
	2mass {Process2MASSCmd param i}
	3d {Process3DCmd param i}
	about {}
	align {ProcessAlignCmd param i}
	analysis {ProcessAnalysisCmd param i {} $fn}
	array {ProcessArrayCmd param i {} $fn}
	bg -
	background {ProcessBgCmd param i}
	backup {ProcessBackupCmd param i}
	blink {ProcessBlinkCmd param i}
	bin {ProcessBinCmd param i}
	block {ProcessBlockCmd param i}
	cat -
	catalog {ProcessCatalogCmd param i}
	cd {ProcessCDCmd param i}
	cmap {ProcessCmapCmd param i}
	colorbar {ProcessColorbarCmd param i}
	console {ProcessConsoleCmd param i}
	contours -
	contour {ProcessContourCmd param i}
	crop {ProcessCropCmd param i}
	crosshair {ProcessCrosshairCmd param i}
	cursor {ProcessCursorCmd param i}
	data {}
	datacube -
	cube {ProcessCubeCmd param i}
	dss -
	dsssao {ProcessSAOCmd param i}
	dsseso {ProcessESOCmd param i}
	dssstsci {ProcessSTSCICmd param i}
	envi {ProcessENVICmd param i {} $fn}
	export {ProcessExportCmd param i}
	file {ProcessFileCmd param i {} {} {}}
	fits {ProcessFitsCmd param i {} $fn}
	frame {ProcessFrameCmd param i}
	gif {ProcessGIFCmd param i {} $fn}
	grid {ProcessGridCmd param i}
	header {ProcessHeaderCmd param i}
	height {ProcessHeightCmd param i}
	iconify {ProcessIconifyCmd param i}
	iexam -
	imexam {}
	iis {ProcessIISCmd param i}
	irafalign {
	    # backward compatibility
	    ProcessIRAFAlignCmd param i
	}
	jpg -
	jpeg {ProcessJPEGCmd param i {} $fn}
	lock {ProcessLockCmd param i}
	lower {ProcessLowerCmd param i}
	magnifier {ProcessMagnifierCmd param i}
	mask {ProcessMaskCmd param i}
	match {ProcessMatchCmd param i}
	mecube {ProcessMECubeCmd param i {} $fn}
	minmax {ProcessMinMaxCmd param i}
	mode {ProcessModeCmd param i}
	mosaic {ProcessMosaicCmd param i {} $fn}
	mosaicimage {ProcessMosaicImageCmd param i {} $fn}
	mosaicwcs {
	    # backward compatibility
	    ProcessMosaicWCSCmd param i {} $fn
	}
	mosaiciraf {
	    # backward compatibility
	    ProcessMosaicIRAFCmd param i {} $fn
	}
	mosaicimagewcs {
	    # backward compatibility
	    ProcessMosaicImageWCSCmd param i {} $fn
	}
	mosaicimageiraf {
	    # backward compatibility
	    ProcessMosaicImageIRAFCmd param i {} $fn
	}
	mosaicimagewfpc2 {
	    # backward compatibility
	    ProcessMosaicImageWFPC2Cmd param i {} $fn
	}
	savempeg -
	movie {ProcessMovieCmd param i}
	memf -
	multiframe {ProcessMultiFrameCmd param i {} $fn}
	nameserver {ProcessNRESCmd param i}
	nan {ProcessNanCmd param i}
	nrrd {ProcessNRRDCmd param i {} $fn}
	nvss {ProcessNVSSCmd param i}
	orient {ProcessOrientCmd param i}
	{page setup} -
	pagesetup {ProcessPageSetupCmd param i}
	pspagesetup {ProcessPSPageSetupCmd param i}
	pan {ProcessPanCmd param i}
	pixeltable {ProcessPixelTableCmd param i}
	plot {ProcessPlotCmd param i {} $fn}
	png {ProcessPNGCmd param i {} $fn}
	precision {ProcessPrecisionCmd param i}
	prefs {ProcessPrefsCmd param i}
	preserve {ProcessPreserveCmd param i}
	print {
	    if {$safemode} {
		Error [msgcat::mc {Command not allowed}]
	    } else {
		ProcessPrintCmd param i
	    }
	}
	psprint {
	    if {$safemode} {
		Error [msgcat::mc {Command not allowed}]
	    } else {
		ProcessPSPrintCmd param i
	    }
	}
	exit -
	quit {ProcessQuitCmd param i}
	raise {ProcessRaiseCmd param i}
	restore {ProcessRestoreCmd param i}
	region -
	regions {ProcessRegionsCmd param i {} $fn}
	rgb {ProcessRGBCmd param i}
	rgbarray {ProcessRGBArrayCmd param i {} $fn}
	rgbcube {ProcessRGBCubeCmd param i {} $fn}
	rgbimage {ProcessRGBImageCmd param i {} $fn}
	rotate {ProcessRotateCmd param i}
	samp {ProcessSAMPCmd param i}
	save -
	savefits {ProcessSaveCmd param i}
	saveimage {ProcessSaveImageCmd param i}
	scale {ProcessScaleCmd param i}
	sfits {
	    # backward compatibility
	    ProcessSFitsCmd param i {} $fn
	}
	sia {ProcessSIACmd param i}
	single {ProcessSingleCmd param i}
	shm {ProcessShmCmd param i 0}
	skyview {ProcessSkyViewCmd param i}
	sleep {ProcessSleepCmd param i}
	smosaic {
	    # backward compatibility
	    ProcessSMosaicCmd param i {} $fn
	}
	smosaicwcs {
	    # backward compatibility
	    ProcessSMosaicWCSCmd param i {} $fn
	}
	smosaiciraf {
	    # backward compatibility
	    ProcessSMosaicIRAFCmd param i {} $fn
	}
	smooth {ProcessSmoothCmd param i}
	source {
	    if {$safemode} {
		Error [msgcat::mc {Command not allowed}]
	    } else {
		ProcessSourceCmd param i
	    }
	}
	srgbcube {ProcessSRGBCubeCmd param i {} $fn}
	tcl {
	    if {$safemode} {
		Error [msgcat::mc {Command not allowed}]
	    } else {
		ProcessTclCmd param i {} $fn
	    }
	}
	theme {
	    # backward compatibility
	    ProcessThemeCmd param i
	}
	threads {ProcessThreadsCmd param i}
	tif -
	tiff {ProcessTIFFCmd param i {} $fn}
	tile {ProcessTileCmd param i}
	update {ProcessUpdateCmd param i}
	url {ProcessURLFitsCmd param i}
	version {}
	view {ProcessViewCmd param i}
	vla -
	first {ProcessVLACmd param i}
	vlss {ProcessVLSSCmd param i}
	vo {ProcessVOCmd param i}
	wcs {ProcessWCSCmd param i {} $fn}
	web {ProcessWebCmd param i}
	width {ProcessWidthCmd param i}
	zoom {ProcessZoomCmd param i}
	zscale {ProcessZScaleCmd param i}
	default {Error "[msgcat::mc {Unknown command}]: $cmd"}
    }
    }
}

proc CommGet {proc id paramlist fn} {
    global debug
    if {$debug(tcl,samp)} {
	puts stderr "CommGet:$proc:$id:$paramlist:$fn"
    }

    set cmd [lindex $paramlist 0]
    set param [lrange $paramlist 1 end]

    catch {
    switch -- $cmd {
	2mass {ProcessSend2MASSCmd $proc $id $param}
	3d {ProcessSend3DCmd $proc $id $param}
	about {ProcessSendAboutCmd $proc $id $param {} $fn}
	align {ProcessSendAlignCmd $proc $id $param}
	analysis {ProcessSendAnalysisCmd $proc $id $param {} $fn}
	array {ProcessSendArrayCmd $proc $id $param {} $fn}
	bg -
	background {ProcessSendBgCmd $proc $id $param}
	blink {ProcessSendBlinkCmd $proc $id $param}
	bin {ProcessSendBinCmd $proc $id $param}
	block {ProcessSendBlockCmd $proc $id $param}
	cat -
	catalog {ProcessSendCatalogCmd $proc $id $param {} $fn}
	cd {ProcessSendCDCmd $proc $id $param}
	cmap {ProcessSendCmapCmd $proc $id $param}
	colorbar {ProcessSendColorbarCmd $proc $id $param}
	console {}
	contours -
	contour {ProcessSendContourCmd $proc $id $param {} $fn}
	crop {ProcessSendCropCmd $proc $id $param}
	crosshair {ProcessSendCrosshairCmd $proc $id $param}
	cursor {}
	data {ProcessSendDataCmd $proc $id $param {} $fn}
	datacube -
	cube {ProcessSendCubeCmd $proc $id $param}
	dss -
	dsssao {ProcessSendSAOCmd $proc $id $param}
	dsseso {ProcessSendESOCmd $proc $id $param}
	dssstsci {ProcessSendSTSCICmd $proc $id $param}
	envi {}
	exit {}
	export {}
	file {ProcessSendFileCmd $proc $id $param}
	fits {ProcessSendFitsCmd $proc $id $param {} $fn}
	frame {ProcessSendFrameCmd $proc $id $param}
	gif {ProcessSendGIFCmd $proc $id $param {} $fn}
	grid {ProcessSendGridCmd $proc $id $param}
	header {}
	height {ProcessSendHeightCmd $proc $id $param}
	iconify {ProcessSendIconifyCmd $proc $id $param}
	iexam -
	imexam {ProcessSendIExamCmd $proc $id $param}
	iis {ProcessSendIISCmd $proc $id $param}
	irafalign {
	    # backward compatibility
	    ProcessSendIRAFAlignCmd $proc $id $param
	}
	jpg -
	jpeg {ProcessSendJPEGCmd $proc $id $param {} $fn}
	lock {ProcessSendLockCmd $proc $id $param}
	lower {}
	magnifier {ProcessSendMagnifierCmd $proc $id $param}
	mask {ProcessSendMaskCmd $proc $id $param}
	match {}
	mecube {ProcessSendMECubeCmd $proc $id $param {} $fn}
	minmax {ProcessSendMinMaxCmd $proc $id $param}
	mode {ProcessSendModeCmd $proc $id $param}
	mosaic {ProcessSendMosaicCmd $proc $id $param {} $fn}
	mosaicimage {ProcessSendMosaicImageCmd $proc $id $param {} $fn}
	mosaicwcs {
	    # backward compatibility
	    ProcessSendMosaicWCSCmd $proc $id $param {} $fn
	}
	mosaiciraf {
	    # backward compatibility
	}
	mosaicimagewcs {
	    # backward compatibility
	    ProcessSendMosaicImageWCSCmd $proc $id $param {} $fn
	}
	mosaicimageiraf {
	    # backward compatibility
	}
	mosaicimagewfpc2 {
	    # backward compatibility
	}
	savempeg -
	movie {}
	memf -
	multiframe {}
	nameserver {ProcessSendNRESCmd $proc $id $param}
	nan {ProcessSendNanCmd $proc $id $param}
	nrrd {ProcessSendNRRDCmd $proc $id $param {} $fn}
	nvss {ProcessSendNVSSCmd $proc $id $param}
	orient {ProcessSendOrientCmd $proc $id $param}
	{page setup} -
	pagesetup {ProcessSendPageSetupCmd $proc $id $param}
	pan {ProcessSendPanCmd $proc $id $param}
	pixeltable {ProcessSendPixelTableCmd $proc $id $param {} $fn}
	plot {ProcessSendPlotCmd $proc $id $param}
	png {ProcessSendPNGCmd $proc $id $param {} $fn}
	precision {ProcessSendPrecisionCmd $proc $id $param}
	prefs {ProcessSendPrefsCmd $proc $id $param}
	preserve {ProcessSendPreserveCmd $proc $id $param}
	pspagesetup {ProcessSendPSPageSetupCmd $proc $id $param}
	print {ProcessSendPrintCmd $proc $id $param}
	psprint {ProcessSendPSPrintCmd $proc $id $param}
	exit -
	quit {}
	raise {}
	region -
	regions {ProcessSendRegionsCmd $proc $id $param {} $fn}
	rgb {ProcessSendRGBCmd $proc $id $param}
	rgbarray {ProcessSendRGBArrayCmd $proc $id $param {} $fn}
	rgbcube {ProcessSendRGBCubeCmd $proc $id $param {} $fn}
	rgbimage {ProcessSendRGBImageCmd $proc $id $param {} $fn}
	rotate {ProcessSendRotateCmd $proc $id $param}
	samp {}
	save -
	savefits {}
	saveimage {}
	scale {ProcessSendScaleCmd $proc $id $param}
	sfits {	
	    # backward compatibility
	}
	sia {ProcessSendSIACmd $proc $id $param {} $fn}
	single {ProcessSendSingleCmd $proc $id $param}
	shm {ProcessSendShmCmd $proc $id $param}
	skyview {ProcessSendSkyViewCmd $proc $id $param}
	smosaic {
	    # backward compatibility
	}
	smosaiciraf {
	    # backward compatibility
	}
	smosaicwcs {
	    # backward compatibility
	}
	smooth {ProcessSendSmoothCmd $proc $id $param}
	source {}
	srgbcube {}
	tcl {}
	theme {
	    # backward compatibility
	    ProcessSendThemeCmd $proc $id $param
	}
	threads {ProcessSendThreadsCmd $proc $id $param}
	tif -
	tiff {ProcessSendTIFFCmd $proc $id $param {} $fn}
	tile {ProcessSendTileCmd $proc $id $param}
	update {}
	url {}
	version {ProcessSendVersionCmd $proc $id $param}
	view {ProcessSendViewCmd $proc $id $param}
	vla -
	first {ProcessSendVLACmd $proc $id $param}
	vlss {ProcessSendVLSSCmd $proc $id $param}
	vo {ProcessSendVOCmd $proc $id $param}
	wcs {ProcessSendWCSCmd $proc $id $param}
	web {ProcessSendWebCmd $proc $id $param}
	width {ProcessSendWidthCmd $proc $id $param}
	zscale {ProcessSendZScaleCmd $proc $id $param}
	zoom {ProcessSendZoomCmd $proc $id $param} 
	default {
	    Error "[msgcat::mc {Unknown command}]: $cmd"
	    $proc $id {}
	}
    }
    }
}


