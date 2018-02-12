#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc InitXPA {} {
    global ds9
    global pds9
    global env

    if {![info exists env(XPA_METHOD)]} {
	set env(XPA_METHOD) localhost
    }

    switch -- $ds9(wm) {
	x11 -
	win32 {}
	aqua {set env(PATH) "$ds9(root):$env(PATH)"}
    }

    catch {CreateXPA}
    UpdateFileMenu
}

proc CreateXPA {} {
    global xpa
    global ds9

    set xpa [xpacmdnew "DS9" $ds9(title)]

    xpacmdadd $xpa 2mass \
	{} \
	XPASend2MASS {} {} \
	XPARcvd2MASS {} "fillbuf=false"

    xpacmdadd $xpa 3d \
	{} \
	XPASend3D {} {} \
	XPARcvd3D {} "fillbuf=false"

    xpacmdadd $xpa 3D \
	{} \
	XPASend3D {} {} \
	XPARcvd3D {} "fillbuf=false"

    xpacmdadd $xpa about \
	{} \
	XPASendAbout {} {} \
	{} {} {}

    xpacmdadd $xpa align \
	{} \
	XPASendAlign {} {} \
	XPARcvdAlign {} {}

    xpacmdadd $xpa analysis \
	{} \
	XPASendAnalysis {} {} \
	XPARcvdAnalysis {} {}

    xpacmdadd $xpa array \
	{} \
	XPASendArray {} {} \
	XPARcvdArray {} "fillbuf=false"

    xpacmdadd $xpa background \
	{} \
	XPASendBg {} {} \
	XPARcvdBg {} {}

    xpacmdadd $xpa backup \
	{} \
	{} {} {} \
	XPARcvdBackup {} {}

    xpacmdadd $xpa bg \
	{} \
	XPASendBg {} {} \
	XPARcvdBg {} {}

    xpacmdadd $xpa blink \
	{} \
	XPASendBlink {} {} \
	XPARcvdBlink {} "fillbuf=false"

    xpacmdadd $xpa bin \
	{} \
	XPASendBin {} {} \
	XPARcvdBin {} "fillbuf=false"

    xpacmdadd $xpa block \
	{} \
	XPASendBlock {} {} \
	XPARcvdBlock {} "fillbuf=false"

    xpacmdadd $xpa cat \
	{} \
	XPASendCAT {} {} \
	XPARcvdCAT {} "fillbuf=false"

    xpacmdadd $xpa catalog \
	{} \
	XPASendCAT {} {} \
	XPARcvdCAT {} "fillbuf=false"

    xpacmdadd $xpa cd \
	{} \
	XPASendCD {} {} \
	XPARcvdCD {} "fillbuf=false"

    xpacmdadd $xpa cmap \
	{} \
	XPASendCmap {} {} \
	XPARcvdCmap {} "fillbuf=false"

    xpacmdadd $xpa colorbar \
	{} \
	XPASendColorbar {} {} \
	XPARcvdColorbar {} "fillbuf=false"

    xpacmdadd $xpa console \
	{} \
	{} {} {} \
	XPARcvdConsole {} "fillbuf=false"

    xpacmdadd $xpa contour \
	{} \
	XPASendContour {} {} \
	XPARcvdContour {} "fillbuf=false"

    xpacmdadd $xpa contours \
	{} \
	XPASendContour {} {} \
	XPARcvdContour {} "fillbuf=false"

    xpacmdadd $xpa crop \
	{} \
	XPASendCrop {} {} \
	XPARcvdCrop {} "fillbuf=false"

    xpacmdadd $xpa crosshair \
	{} \
	XPASendCrosshair {} {} \
	XPARcvdCrosshair {} "fillbuf=false"

    xpacmdadd $xpa cube \
	{} \
	XPASendCube {} {} \
	XPARcvdCube {} "fillbuf=false"

    xpacmdadd $xpa cursor \
	{} \
	{} {} {} \
	XPARcvdCursor {} "fillbuf=false"

    xpacmdadd $xpa data \
	{} \
	XPASendData {} {} \
	{} {} {}

    xpacmdadd $xpa datacube \
	{} \
	XPASendCube {} {} \
	XPARcvdCube {} "fillbuf=false"

    xpacmdadd $xpa dss \
	{} \
	XPASendSAO {} {} \
	XPARcvdSAO {} "fillbuf=false"

    xpacmdadd $xpa dsssao \
	{} \
	XPASendSAO {} {} \
	XPARcvdSAO {} "fillbuf=false"

    xpacmdadd $xpa dsseso \
	{} \
	XPASendESO {} {} \
	XPARcvdESO {} "fillbuf=false"

    xpacmdadd $xpa dssstsci \
	{} \
	XPASendSTSCI {} {} \
	XPARcvdSTSCI {} "fillbuf=false"

    xpacmdadd $xpa envi \
	{} \
	{} {} {} \
	XPARcvdENVI {} "fillbuf=false"

    xpacmdadd $xpa exit \
	{} \
	{} {} {} \
	XPARcvdExit {} "fillbuf=false"

    xpacmdadd $xpa export \
	{} \
	{} {} {} \
	XPARcvdExport {} "fillbuf=false"
 
    xpacmdadd $xpa file \
	{} \
	XPASendFile {} {} \
	XPARcvdFile {} "fillbuf=false"

    xpacmdadd $xpa first \
	{} \
	XPASendVLA {} {} \
	XPARcvdVLA {} "fillbuf=false"

    xpacmdadd $xpa fits \
	{} \
	XPASendFits {} "fillbuf=false" \
	XPARcvdFits {} "fillbuf=false"

    xpacmdadd $xpa frame \
	{} \
	XPASendFrame {} {} \
	XPARcvdFrame {} "fillbuf=false"

    xpacmdadd $xpa gif \
	{} \
	XPASendGIF {} {} \
	XPARcvdGIF {} "fillbuf=false"

    xpacmdadd $xpa grid \
	{} \
	XPASendGrid {} {} \
	XPARcvdGrid {} "fillbuf=false"

    xpacmdadd $xpa header \
	{} \
	{} {} {} \
	XPARcvdHeader {} "fillbuf=false"

    xpacmdadd $xpa height \
	{} \
	XPASendHeight {} {} \
	XPARcvdHeight {} "fillbuf=false"

    xpacmdadd $xpa iconify \
	{} \
	XPASendIconify {} {} \
	XPARcvdIconify {} "fillbuf=false"

    xpacmdadd $xpa iexam \
	{} \
	XPASendIExam {} {} \
	{} {} {}

    xpacmdadd $xpa iis \
	{} \
	XPASendIIS {} {} \
	XPARcvdIIS {} "fillbuf=false"

    # backward compatibility
    xpacmdadd $xpa imexam \
	{} \
	XPASendIExam {} {} \
	{} {} {}

    xpacmdadd $xpa jpg \
	{} \
	XPASendJPEG {} {} \
	XPARcvdJPEG {} "fillbuf=false"

    xpacmdadd $xpa jpeg \
	{} \
	XPASendJPEG {} {} \
	XPARcvdJPEG {} "fillbuf=false"

    xpacmdadd $xpa lock \
	{} \
	XPASendLock {} {} \
	XPARcvdLock {} "fillbuf=false"

    xpacmdadd $xpa lower \
	{} \
	{} {} {} \
	XPARcvdLower {} "fillbuf=false"

    xpacmdadd $xpa magnifier \
	{} \
	XPASendMagnifier {} {} \
	XPARcvdMagnifier {} "fillbuf=false"

    xpacmdadd $xpa mask \
	{} \
	XPASendMask {} {} \
	XPARcvdMask {} "fillbuf=false"

    xpacmdadd $xpa match \
	{} \
	{} {} {} \
	XPARcvdMatch {} "fillbuf=false"

    xpacmdadd $xpa mecube \
	{} \
	XPASendMECube {} "fillbuf=false" \
	XPARcvdMECube {} "fillbuf=false"

    xpacmdadd $xpa memf \
	{} \
	{} {} {} \
	XPARcvdMultiFrame {} "fillbuf=false"

    xpacmdadd $xpa minmax \
	{} \
	XPASendMinMax {} {} \
	XPARcvdMinMax {} "fillbuf=false"

    xpacmdadd $xpa mode \
	{} \
	XPASendMode {} {} \
	XPARcvdMode {} "fillbuf=false"

    xpacmdadd $xpa mosaic \
	{} \
	XPASendMosaic {} {} \
	XPARcvdMosaic {} "fillbuf=false"

    xpacmdadd $xpa mosaicimage \
	{} \
	XPASendMosaicImage {} {} \
	XPARcvdMosaicImage {} "fillbuf=false"

    # backward compatibility
    xpacmdadd $xpa mosaicwcs \
	{} \
	XPASendMosaicWCS {} {} \
	XPARcvdMosaicWCS {} "fillbuf=false"

    # backward compatibility
    xpacmdadd $xpa mosaiciraf \
	{} \
	{} {} {} \
	XPARcvdMosaicIRAF {} "fillbuf=false"

    # backward compatibility
    xpacmdadd $xpa mosaicimagewcs \
	{} \
	XPASendMosaicImageWCS {} {} \
	XPARcvdMosaicImageWCS {} "fillbuf=false"

    # backward compatibility
    xpacmdadd $xpa mosaicimageiraf \
	{} \
	{} {} {} \
	XPARcvdMosaicImageIRAF {} "fillbuf=false"

    # backward compatibility
    xpacmdadd $xpa mosaicimagewfpc2 \
	{} \
	{} {} {} \
	XPARcvdMosaicImageWFPC2 {} "fillbuf=false"

    xpacmdadd $xpa multiframe \
	{} \
	{} {} {} \
	XPARcvdMultiFrame {} "fillbuf=false"

    xpacmdadd $xpa movie \
	{} \
	{} {} {} \
	XPARcvdMovie {} "fillbuf=false"

    xpacmdadd $xpa nameserver \
	{} \
	XPASendNRES {} {} \
	XPARcvdNRES {} "fillbuf=false"

    xpacmdadd $xpa nan \
	{} \
	XPASendNan {} {} \
	XPARcvdNan {} {}

    xpacmdadd $xpa nrrd \
	{} \
	XPASendNRRD {} {} \
	XPARcvdNRRD {} "fillbuf=false"

    xpacmdadd $xpa nvss \
	{} \
	XPASendNVSS {} {} \
	XPARcvdNVSS {} "fillbuf=false"

    xpacmdadd $xpa orient \
	{} \
	XPASendOrient {} {} \
	XPARcvdOrient {} "fillbuf=false"

    xpacmdadd $xpa {page setup} \
	{} \
	XPASendPageSetup {} {} \
	XPARcvdPageSetup {} "fillbuf=false"

    xpacmdadd $xpa pagesetup \
	{} \
	XPASendPageSetup {} {} \
	XPARcvdPageSetup {} "fillbuf=false"

    xpacmdadd $xpa pspagesetup \
	{} \
	XPASendPSPageSetup {} {} \
	XPARcvdPSPageSetup {} "fillbuf=false"

    xpacmdadd $xpa pan \
	{} \
	XPASendPan {} {} \
	XPARcvdPan {} "fillbuf=false"

    xpacmdadd $xpa pixeltable \
	{} \
	XPASendPixelTable {} {} \
	XPARcvdPixelTable {} "fillbuf=false"

    xpacmdadd $xpa plot \
	{} \
	XPASendPlot {} {} \
	XPARcvdPlot {} {}

    xpacmdadd $xpa png \
	{} \
	XPASendPNG {} {} \
	XPARcvdPNG {} "fillbuf=false"

    xpacmdadd $xpa precision \
	{} \
	XPASendPrecision {} {} \
	XPARcvdPrecision {} {}

    xpacmdadd $xpa prefs \
	{} \
	XPASendPrefs {} {} \
	XPARcvdPrefs {} "fillbuf=false"

    xpacmdadd $xpa preserve \
	{} \
	XPASendPreserve {} {} \
	XPARcvdPreserve {} "fillbuf=false"

    xpacmdadd $xpa print \
	{} \
	XPASendPrint {} {} \
	XPARcvdPrint {} "fillbuf=false"

    xpacmdadd $xpa psprint \
	{} \
	XPASendPSPrint {} {} \
	XPARcvdPSPrint {} "fillbuf=false"

    xpacmdadd $xpa quit \
	{} \
	{} {} {} \
	XPARcvdExit {} "fillbuf=false"

    xpacmdadd $xpa raise \
	{} \
	{} {} {} \
	XPARcvdRaise {} "fillbuf=false"

    xpacmdadd $xpa region \
	{} \
	XPASendRegions {} {} \
	XPARcvdRegions {} "fillbuf=false"

    xpacmdadd $xpa regions \
	{} \
	XPASendRegions {} {} \
	XPARcvdRegions {} "fillbuf=false"

    xpacmdadd $xpa restore \
	{} \
	{} {} {} \
	XPARcvdRestore {} {}

    xpacmdadd $xpa rgb \
	{} \
	XPASendRGB {} {} \
	XPARcvdRGB {} "fillbuf=false"

    xpacmdadd $xpa rgbarray \
	{} \
	XPASendRGBArray {} {} \
	XPARcvdRGBArray {} "fillbuf=false"

    xpacmdadd $xpa rgbcube \
	{} \
	XPASendRGBCube {} {} \
	XPARcvdRGBCube {} "fillbuf=false"

    xpacmdadd $xpa rgbimage \
	{} \
	XPASendRGBImage {} {} \
	XPARcvdRGBImage {} "fillbuf=false"

    xpacmdadd $xpa rotate \
	{} \
	XPASendRotate {} {} \
	XPARcvdRotate {} "fillbuf=false"

    xpacmdadd $xpa save \
	{} \
	{} {} {} \
	XPARcvdSave {} "fillbuf=false"

    xpacmdadd $xpa saveimage \
	{} \
	{} {} {} \
	XPARcvdSaveImage {} "fillbuf=false"

    # backward compatibility
    xpacmdadd $xpa savefits \
	{} \
	{} {} {} \
	XPARcvdSave {} "fillbuf=false"

    # backward compatibility
    xpacmdadd $xpa savempeg \
	{} \
	{} {} {} \
	XPARcvdMovie {} "fillbuf=false"

    xpacmdadd $xpa scale \
	{} \
	XPASendScale {} {} \
	XPARcvdScale {} "fillbuf=false"

    # backward compatibility
    xpacmdadd $xpa sfits \
	{} \
	{} {} {} \
	XPARcvdSFits {} "fillbuf=false"

    xpacmdadd $xpa sia \
	{} \
	XPASendSIA {} {} \
	XPARcvdSIA {} "fillbuf=false"

    xpacmdadd $xpa single \
	{} \
	XPASendSingle {} {} \
	XPARcvdSingle {} "fillbuf=false"

    xpacmdadd $xpa shm \
	{} \
	XPASendShm {} {} \
	XPARcvdShm {} "fillbuf=false"

    xpacmdadd $xpa skyview \
	{} \
	XPASendSkyView {} {} \
	XPARcvdSkyView {} "fillbuf=false"

    xpacmdadd $xpa sleep \
	{} \
	{} {} {} \
	XPARcvdSleep {} "fillbuf=false"

    xpacmdadd $xpa slice \
	{} \
	XPASendCube {} {} \
	XPARcvdCube {} "fillbuf=false"

    # backward compatibility
    xpacmdadd $xpa smosaic \
	{} \
	{} {} {} \
	XPARcvdSMosaic {} "fillbuf=false"

    # backward compatibility
    xpacmdadd $xpa smosaicwcs \
	{} \
	{} {} {} \
	XPARcvdSMosaicWCS {} "fillbuf=false"

    # backward compatibility
    xpacmdadd $xpa smosaiciraf \
	{} \
	{} {} {} \
	XPARcvdSMosaicIRAF {} "fillbuf=false"

    xpacmdadd $xpa smooth \
	{} \
	XPASendSmooth {} {} \
	XPARcvdSmooth {} "fillbuf=false"

    xpacmdadd $xpa source \
	{} \
	{} {} {} \
	XPARcvdSource {} "fillbuf=false"

    # backward compatibility
    xpacmdadd $xpa srgbcube \
	{} \
	{} {} {} \
	XPARcvdSRGBCube {} "fillbuf=false"

    xpacmdadd $xpa tcl \
	{} \
	{} {} {} \
	XPARcvdTcl {} {}

    # backward compatibility
    xpacmdadd $xpa theme \
	{} \
	XPASendTheme {} {} \
	XPARcvdTheme {} "fillbuf=false"

    xpacmdadd $xpa threads \
	{} \
	XPASendThreads {} {} \
	XPARcvdThreads {} {}

    xpacmdadd $xpa tif \
	{} \
	XPASendTIFF {} {} \
	XPARcvdTIFF {} "fillbuf=false"

    xpacmdadd $xpa tiff \
	{} \
	XPASendTIFF {} {} \
	XPARcvdTIFF {} "fillbuf=false"

    xpacmdadd $xpa tile \
	{} \
	XPASendTile {} {} \
	XPARcvdTile {} "fillbuf=false"

    xpacmdadd $xpa update \
	{} \
	{} {} {} \
	XPARcvdUpdate {} "fillbuf=false"

    xpacmdadd $xpa url \
	{} \
	{} {} {} \
	XPARcvdURLFits {} {}

    xpacmdadd $xpa version \
	{} \
	XPASendVersion {} {} \
	{} {} {}

    xpacmdadd $xpa view \
	{} \
	XPASendView {} {} \
	XPARcvdView {} "fillbuf=false"

    xpacmdadd $xpa vla \
	{} \
	XPASendVLA {} {} \
	XPARcvdVLA {} "fillbuf=false"

    xpacmdadd $xpa vlss \
	{} \
	XPASendVLSS {} {} \
	XPARcvdVLSS {} "fillbuf=false"

    xpacmdadd $xpa vo \
	{} \
	XPASendVO {} {} \
	XPARcvdVO {} "fillbuf=false"

    xpacmdadd $xpa wcs \
	{} \
	XPASendWCS {} {} \
	XPARcvdWCS {} "fillbuf=false"

    xpacmdadd $xpa web \
	{} \
	XPASendWeb {} {} \
	XPARcvdWeb {} "fillbuf=false"

    xpacmdadd $xpa width \
	{} \
	XPASendWidth {} {} \
	XPARcvdWidth {} "fillbuf=false"

    xpacmdadd $xpa xpa \
	{} \
	XPASendXPA {} {} \
	XPARcvdXPA {} "fillbuf=false"

    xpacmdadd $xpa zscale \
	{} \
	XPASendZScale {} {} \
	XPARcvdZScale {} "fillbuf=false"

    xpacmdadd $xpa zoom \
	{} \
	XPASendZoom {} {} \
	XPARcvdZoom {} "fillbuf=false"
}

proc XPASend2MASS {xpa cdata param} {
    InitError xpa
    catch {ProcessSend2MASSCmd xpasetbuf $xpa $param}
    XPACatchError $xpa
}

proc XPARcvd2MASS {xpa cdata param buf len} {
    XPADebug "XPARcvd2MASS" $param
    InitError xpa
    catch {set i 0; Process2MASSCmd param i}
    XPACatchError $xpa
}

proc XPASend3D {xpa cdata param} {
    InitError xpa
    catch {ProcessSend3DCmd xpasetbuf $xpa $param}
    XPACatchError $xpa
}

proc XPARcvd3D {xpa cdata param buf len} {
    XPADebug "XPARcvd3D" $param
    InitError xpa
    catch {set i 0; Process3DCmd param i}
    XPACatchError $xpa
}

proc XPASendAbout {xpa cdata param} {
    InitError xpa
    catch {ProcessSendAboutCmd xpasetbuf $xpa $param {} {}}
    XPACatchError $xpa
}

proc XPASendAlign {xpa cdata param} {
    InitError xpa
    catch {ProcessSendAlignCmd xpasetbuf $xpa $param}
    XPACatchError $xpa
}

proc XPARcvdAlign {xpa cdata param buf len} {
    XPADebug "XPARcvdAlign" $param
    InitError xpa
    catch {set i 0; ProcessAlignCmd param i}
    XPACatchError $xpa
}

proc XPASendAnalysis {xpa cdata param} {
    InitError xpa
    catch {ProcessSendAnalysisCmd xpasetbuf $xpa $param {} {}}
    XPACatchError $xpa
}

proc XPARcvdAnalysis {xpa cdata param buf len} {
    XPADebug "XPARcvdAnalysis" $param
    InitError xpa
    catch {set i 0; ProcessAnalysisCmd param i $buf {}}
    XPACatchError $xpa
}

proc XPASendArray {xpa cdata param} {
    InitError xpa
    catch {ProcessSendArrayCmd {} {} $param [xparec $xpa datafd] {}}
    XPACatchError $xpa
}

proc XPARcvdArray {xpa cdata param buf len} {
    XPADebug "XPARcvdArray" $param
    InitError xpa
    catch {set i 0; ProcessArrayCmd param i [xparec $xpa datafd] {}}
    XPACatchError $xpa
}

proc XPASendBg {xpa cdata param} {
    InitError xpa
    catch {ProcessSendBgCmd xpasetbuf $xpa $param}
    XPACatchError $xpa
}

proc XPARcvdBg {xpa cdata param buf len} {
    XPADebug "XPARcvdBg" $param
    InitError xpa
    catch {set i 0; ProcessBgCmd param i}
    XPACatchError $xpa
}

proc XPARcvdBackup {xpa cdata param buf len} {
    XPADebug "XPARcvdBackup" $param
    InitError xpa
    catch {set i 0; ProcessBackupCmd param i}
    XPACatchError $xpa
}

proc XPASendBlink {xpa cdata param} {
    InitError xpa
    catch {ProcessSendBlinkCmd xpasetbuf $xpa $param}
    XPACatchError $xpa
}

proc XPARcvdBlink {xpa cdata param buf len} {
    XPADebug "XPARcvdBlink" $param
    InitError xpa
    catch {set i 0; ProcessBlinkCmd param i}
    XPACatchError $xpa
}

proc XPASendBin {xpa cdata param} {
    InitError xpa
    catch {ProcessSendBinCmd xpasetbuf $xpa $param}
    XPACatchError $xpa
}

proc XPARcvdBin {xpa cdata param buf len} {
    XPADebug "XPARcvdBin" $param
    InitError xpa
    catch {set i 0; ProcessBinCmd param i}
    XPACatchError $xpa
}

proc XPASendBlock {xpa cdata param} {
    InitError xpa
    catch {ProcessSendBlockCmd xpasetbuf $xpa $param}
    XPACatchError $xpa
}

proc XPARcvdBlock {xpa cdata param buf len} {
    XPADebug "XPARcvdBlock" $param
    InitError xpa
    catch {set i 0; ProcessBlockCmd param i}
    XPACatchError $xpa
}

proc XPASendCAT {xpa cdata param} {
    InitError xpa
    catch {ProcessSendCatalogCmd xpasetbuf $xpa $param {} {}}
    XPACatchError $xpa
}

proc XPARcvdCAT {xpa cdata param buf len} {
    XPADebug "XPARcvdCat" $param
    InitError xpa
    catch {set i 0; ProcessCatalogCmd param i}
    XPACatchError $xpa
}

proc XPASendCD {xpa cdata param} {
    InitError xpa
    catch {ProcessSendCDCmd xpasetbuf $xpa $param}
    XPACatchError $xpa
}

proc XPARcvdCD {xpa cdata param buf len} {
    XPADebug "XPARcvdCD" $param
    InitError xpa
    catch {set i 0; ProcessCDCmd param i}
    XPACatchError $xpa
}

proc XPARcvdConsole {xpa cdata param buf len} {
    XPADebug "XPARcvdConsole" $param
    InitError xpa
    catch {set i 0; ProcessConsoleCmd param i}
    XPACatchError $xpa
}

proc XPASendContour {xpa cdata param} {
    InitError xpa
    catch {ProcessSendContourCmd xpasetbuf $xpa $param {} {}}
    XPACatchError $xpa
}

proc XPARcvdContour {xpa cdata param buf len} {
    XPADebug "XPARcvdContour" $param
    InitError xpa
    catch {set i 0; ProcessContourCmd param i}
    XPACatchError $xpa
}

proc XPASendCmap {xpa cdata param} {
    InitError xpa
    catch {ProcessSendCmapCmd xpasetbuf $xpa $param}
    XPACatchError $xpa
}

proc XPARcvdCmap {xpa cdata param buf len} {
    XPADebug "XPARcvdCmap" $param
    InitError xpa
    catch {set i 0; ProcessCmapCmd param i}
    XPACatchError $xpa
}

proc XPASendColorbar {xpa cdata param} {
    InitError xpa
    catch {ProcessSendColorbarCmd xpasetbuf $xpa $param}
    XPACatchError $xpa
}

proc XPARcvdColorbar {xpa cdata param buf len} {
    XPADebug "XPARcvdColorbar" $param
    InitError xpa
    catch {set i 0; ProcessColorbarCmd param i}
    XPACatchError $xpa
}

proc XPASendCrop {xpa cdata param} {
    InitError xpa
    catch {ProcessSendCropCmd xpasetbuf $xpa $param}
    XPACatchError $xpa
}

proc XPARcvdCrop {xpa cdata param buf len} {
    XPADebug "XPARcvdCrop" $param
    InitError xpa
    catch {set i 0; ProcessCropCmd param i}
    XPACatchError $xpa
}

proc XPASendCrosshair {xpa cdata param} {
    InitError xpa
    catch {ProcessSendCrosshairCmd xpasetbuf $xpa $param}
    XPACatchError $xpa
}

proc XPARcvdCrosshair {xpa cdata param buf len} {
    XPADebug "XPARcvdCrosshair" $param
    InitError xpa
    catch {set i 0; ProcessCrosshairCmd param i}
    XPACatchError $xpa
}

proc XPASendCube {xpa cdata param} {
    InitError xpa
    catch {ProcessSendCubeCmd xpasetbuf $xpa $param}
    XPACatchError $xpa
}

proc XPARcvdCube {xpa cdata param buf len} {
    XPADebug "XPARcvdCube" $param
    InitError xpa
    catch {set i 0; ProcessCubeCmd param i}
    XPACatchError $xpa
}

proc XPARcvdCursor {xpa cdata param buf len} {
    XPADebug "XPARcvdCursor" $param
    InitError xpa
    catch {set i 0; ProcessCursorCmd param i}
    XPACatchError $xpa
}

proc XPASendData {xpa cdata param} {
    InitError xpa
    catch {ProcessSendDataCmd xpasetbuf $xpa $param {} {}}
    XPACatchError $xpa
}

proc XPASendSAO {xpa cdata param} {
    InitError xpa
    catch {ProcessSendSAOCmd xpasetbuf $xpa $param}
    XPACatchError $xpa
}

proc XPARcvdSAO {xpa cdata param buf len} {
    XPADebug "XPARcvdSAO" $param
    InitError xpa
    catch {set i 0; ProcessSAOCmd param i}
    XPACatchError $xpa
}

proc XPASendESO {xpa cdata param} {
    InitError xpa
    catch {ProcessSendESOCmd xpasetbuf $xpa $param}
    XPACatchError $xpa
}

proc XPARcvdESO {xpa cdata param buf len} {
    XPADebug "XPARcvdESO" $param
    InitError xpa
    catch {set i 0; ProcessESOCmd param i}
    XPACatchError $xpa
}

proc XPASendSTSCI {xpa cdata param} {
    InitError xpa
    catch {ProcessSendSTSCICmd xpasetbuf $xpa $param}
    XPACatchError $xpa
}

proc XPARcvdSTSCI {xpa cdata param buf len} {
    XPADebug "XPARcvdSTSCI" $param
    InitError xpa
    catch {set i 0; ProcessSTSCICmd param i}
    XPACatchError $xpa
}

proc XPARcvdENVI {xpa cdata param buf len} {
    XPADebug "XPARcvdENVI" $param
    InitError xpa
    catch {set i 0; ProcessENVICmd param i {} {}}
    XPACatchError $xpa
}

proc XPARcvdExit {xpa cdata param buf len} {
    XPADebug "XPARcvdExit" $param
    InitError xpa
    catch {set i 0; ProcessQuitCmd param i}
    XPACatchError $xpa
}

proc XPARcvdExport {xpa cdata param buf len} {
    XPADebug "XPARcvdExport" $param
    InitError xpa
    catch {set i 0; ProcessExportCmd param i}
    XPACatchError $xpa
}

proc XPASendFile {xpa cdata param} {
    InitError xpa
    catch {ProcessSendFileCmd xpasetbuf $xpa $param}
    XPACatchError $xpa
}

proc XPARcvdFile {xpa cdata param buf len} {
    XPADebug "XPARcvdFile" $param
    InitError xpa
    catch {
	# do not send socket as it does not contain data, only filenames
	set i 0
	global tcl_platform
	switch $tcl_platform(os) {
	    Linux -
	    Darwin -
	    SunOS {ProcessFileCmd param i {} [xparec $xpa datachan] {}}
	    {Windows NT} {ProcessFileCmd param i {} dummy {}}
	}
    }
    XPACatchError $xpa
}

proc XPASendFits {xpa cdata param} {
    InitError xpa
    catch {ProcessSendFitsCmd xpasetbuf $xpa $param [xparec $xpa datafd] {}}
    XPACatchError $xpa
}

proc XPARcvdFits {xpa cdata param buf len} {
    XPADebug "XPARcvdFits" $param
    InitError xpa
    catch {set i 0; ProcessFitsCmd param i [xparec $xpa datafd] {}}
    XPACatchError $xpa
}

proc XPASendFrame {xpa cdata param} {
    InitError xpa
    catch {ProcessSendFrameCmd xpasetbuf $xpa $param}
    XPACatchError $xpa
}

proc XPARcvdFrame {xpa cdata param buf len} {
    XPADebug "XPARcvdFrame" $param
    InitError xpa
    catch {set i 0; ProcessFrameCmd param i}
    XPACatchError $xpa
}

proc XPASendGIF {xpa cdata param} {
    InitError xpa
    catch {
	global tcl_platform
	switch $tcl_platform(os) {
	    Linux -
	    Darwin -
	    SunOS {ProcessSendGIFCmd {} {} $param [xparec $xpa datachan] {}} 
	    {Windows NT} {ProcessSendGIFCmd {} {} $param dummy {}}
	}
    }
    XPACatchError $xpa
}

proc XPARcvdGIF {xpa cdata param buf len} {
    XPADebug "XPARcvdGIF" $param
    InitError xpa
    catch {
	set i 0
	global tcl_platform
	switch $tcl_platform(os) {
	    Linux -
	    Darwin -
	    SunOS {ProcessGIFCmd param i [xparec $xpa datachan] {}} 
	    {Windows NT} {ProcessGIFCmd param i dummy {}}
	}
    }
    XPACatchError $xpa
}

proc XPASendGrid {xpa cdata param} {
    InitError xpa
    catch {ProcessSendGridCmd xpasetbuf $xpa $param}
    XPACatchError $xpa
}

proc XPARcvdGrid {xpa cdata param buf len} {
    XPADebug "XPARcvdGrid" $param
    InitError xpa
    catch {set i 0; ProcessGridCmd param i}
    XPACatchError $xpa
}

proc XPARcvdHeader {xpa cdata param buf len} {
    XPADebug "XPARcvdHeader" $param
    InitError xpa
    catch {set i 0; ProcessHeaderCmd param i}
    XPACatchError $xpa
}

proc XPASendHeight {xpa cdata param} {
    InitError xpa
    catch {ProcessSendHeightCmd xpasetbuf $xpa $param}
    XPACatchError $xpa
}

proc XPARcvdHeight {xpa cdata param buf len} {
    XPADebug "XPARcvdHeight" $param
    InitError xpa
    catch {set i 0; ProcessHeightCmd param i}
    XPACatchError $xpa
}

proc XPASendIconify {xpa cdata param} {
    InitError xpa
    catch {ProcessSendIconifyCmd xpasetbuf $xpa $param}
    XPACatchError $xpa
}

proc XPARcvdIconify {xpa cdata param buf len} {
    XPADebug "XPARcvdIconify" $param
    InitError xpa
    catch {set i 0; ProcessIconifyCmd param i}
    XPACatchError $xpa
}

proc XPASendIExam {xpa cdata param} {
    InitError xpa
    catch {ProcessSendIExamCmd xpasetbuf $xpa $param}
    XPACatchError $xpa
}

proc XPASendIIS {xpa cdata param} {
    InitError xpa
    catch {ProcessSendIISCmd xpasetbuf $xpa $param}
    XPACatchError $xpa
}

proc XPARcvdIIS {xpa cdata param buf len} {
    XPADebug "XPARcvdIIS" $param
    InitError xpa
    catch {set i 0; ProcessIISCmd param i}
    XPACatchError $xpa
}

proc XPASendJPEG {xpa cdata param} {
    InitError xpa
    catch {
	global tcl_platform
	switch $tcl_platform(os) {
	    Linux -
	    Darwin -
	    SunOS {ProcessSendJPEGCmd {} {} $param [xparec $xpa datachan] {}} 
	    {Windows NT} {ProcessSendJPEGCmd {} {} $param dummy {}}
	}
    }
    XPACatchError $xpa
}

proc XPARcvdJPEG {xpa cdata param buf len} {
    XPADebug "XPARcvdJPEG" $param
    InitError xpa
    catch {
	set i 0
	global tcl_platform
	switch $tcl_platform(os) {
	    Linux -
	    Darwin -
	    SunOS {ProcessJPEGCmd param i [xparec $xpa datachan] {}} 
	    {Windows NT} {ProcessJPEGCmd param i dummy {}}
	}
    }
    XPACatchError $xpa
}

proc XPASendLock {xpa cdata param} {
    InitError xpa
    catch {ProcessSendLockCmd xpasetbuf $xpa $param}
    XPACatchError $xpa
}

proc XPARcvdLock {xpa cdata param buf len} {
    XPADebug "XPARcvdLock" $param
    InitError xpa
    catch {set i 0; ProcessLockCmd param i}
    XPACatchError $xpa
}

proc XPARcvdLower {xpa cdata param buf len} {
    XPADebug "XPARcvdLower" $param
    InitError xpa
    catch {set i 0; ProcessLowerCmd param i}
    XPACatchError $xpa
}

proc XPASendMagnifier {xpa cdata param} {
    InitError xpa
    catch {ProcessSendMagnifierCmd xpasetbuf $xpa $param}
    XPACatchError $xpa
}

proc XPARcvdMagnifier {xpa cdata param buf len} {
    XPADebug "XPARcvdMagnifier" $param
    InitError xpa
    catch {set i 0; ProcessMagnifierCmd param i}
    XPACatchError $xpa
}

proc XPASendMask {xpa cdata param} {
    InitError xpa
    catch {ProcessSendMaskCmd xpasetbuf $xpa $param}
    XPACatchError $xpa
}

proc XPARcvdMask {xpa cdata param buf len} {
    XPADebug "XPARcvdMask" $param
    InitError xpa
    catch {set i 0; ProcessMaskCmd param i}
    XPACatchError $xpa
}

proc XPARcvdMatch {xpa cdata param buf len} {
    XPADebug "XPARcvdMatch" $param
    InitError xpa
    catch {set i 0; ProcessMatchCmd param i}
    XPACatchError $xpa
}

proc XPASendMECube {xpa cdata param} {
    InitError xpa
    catch {ProcessSendMECubeCmd xpasetbuf $xpa $param [xparec $xpa datafd] {}}
    XPACatchError $xpa
}

proc XPARcvdMECube {xpa cdata param buf len} {
    XPADebug "XPARcvdMECube" $param
    InitError xpa
    catch {set i 0; ProcessMECubeCmd param i [xparec $xpa datafd] {}}
    XPACatchError $xpa
}

proc XPASendMinMax {xpa cdata param} {
    InitError xpa
    catch {ProcessSendMinMaxCmd xpasetbuf $xpa $param}
    XPACatchError $xpa
}

proc XPARcvdMinMax {xpa cdata param buf len} {
    XPADebug "XPARcvdMinMax" $param
    InitError xpa
    catch {set i 0; ProcessMinMaxCmd param i}
    XPACatchError $xpa
}

proc XPASendMode {xpa cdata param} {
    InitError xpa
    catch {ProcessSendModeCmd xpasetbuf $xpa $param}
    XPACatchError $xpa
}

proc XPARcvdMode {xpa cdata param buf len} {
    XPADebug "XPARcvdMode" $param
    InitError xpa
    catch {set i 0; ProcessModeCmd param i}
    XPACatchError $xpa
}

proc XPASendMosaic {xpa cdata param} {
    InitError xpa
    catch {ProcessSendMosaicCmd {} {} $param [xparec $xpa datafd] {}}
    XPACatchError $xpa
}

proc XPARcvdMosaic {xpa cdata param buf len} {
    XPADebug "XPARcvdMosaic" $param
    InitError xpa
    catch {set i 0; ProcessMosaicCmd param i [xparec $xpa datafd] {}}
    XPACatchError $xpa
}

proc XPASendMosaicImage {xpa cdata param} {
    InitError xpa
    catch {ProcessSendMosaicImageCmd {} {} $param [xparec $xpa datafd] {}}
    XPACatchError $xpa
}

proc XPARcvdMosaicImage {xpa cdata param buf len} {
    XPADebug "XPARcvdMosaicImage" $param
    InitError xpa
    catch {set i 0; ProcessMosaicImageCmd param i [xparec $xpa datafd] {}}
    XPACatchError $xpa
}

# backward compatibility
proc XPASendMosaicWCS {xpa cdata param} {
    InitError xpa
    catch {ProcessSendMosaicWCSCmd {} {} $param [xparec $xpa datafd] {}}
    XPACatchError $xpa
}

# backward compatibility
proc XPARcvdMosaicWCS {xpa cdata param buf len} {
    XPADebug "XPARcvdMosaicWCS" $param
    InitError xpa
    catch {set i 0; ProcessMosaicWCSCmd param i [xparec $xpa datafd] {}}
    XPACatchError $xpa
}

# backward compatibility
proc XPARcvdMosaicIRAF {xpa cdata param buf len} {
    XPADebug "XPARcvdMosaicIRAF" $param
    InitError xpa
    catch {set i 0; ProcessMosaicIRAFCmd param i [xparec $xpa datafd] {}}
    XPACatchError $xpa
}

# backward compatibility
proc XPASendMosaicImageWCS {xpa cdata param} {
    InitError xpa
    catch {ProcessSendMosaicImageWCSCmd {} {} $param [xparec $xpa datafd] {}}
    XPACatchError $xpa
}

# backward compatibility
proc XPARcvdMosaicImageWCS {xpa cdata param buf len} {
    XPADebug "XPARcvdMosaicImageWCS" $param
    InitError xpa
    catch {set i 0; ProcessMosaicImageWCSCmd param i [xparec $xpa datafd] {}}
    XPACatchError $xpa
}

# backward compatibility
proc XPARcvdMosaicImageIRAF {xpa cdata param buf len} {
    XPADebug "XPARcvdMosaicImageIRAF" $param
    InitError xpa
    catch {set i 0; ProcessMosaicImageIRAFCmd param i [xparec $xpa datafd] {}}
    XPACatchError $xpa
}

# backward compatibility
proc XPARcvdMosaicImageWFPC2 {xpa cdata param buf len} {
    XPADebug "XPARcvdMosaicImageWFPC2" $param
    InitError xpa
    catch {set i 0; ProcessMosaicImageWFPC2Cmd param i [xparec $xpa datafd] {}}
    XPACatchError $xpa
}

proc XPARcvdMovie {xpa cdata param buf len} {
    XPADebug "XPARcvdMovie" $param
    InitError xpa
    catch {set i 0; ProcessMovieCmd param i}
    XPACatchError $xpa
}

proc XPARcvdMultiFrame {xpa cdata param buf len} {
    XPADebug "XPARcvdMultiFrame" $param
    InitError xpa
    catch {
	set i 0
	global tcl_platform
	switch $tcl_platform(os) {
	    Linux -
	    Darwin -
	    SunOS {ProcessMultiFrameCmd param i [xparec $xpa datachan] {}} 
	    {Windows NT} {ProcessMultiFrameCmd param i dummy {}}
	}
    }
    XPACatchError $xpa
}

proc XPASendNan {xpa cdata param} {
    InitError xpa
    catch {ProcessSendNanCmd xpasetbuf $xpa $param}
    XPACatchError $xpa
}

proc XPARcvdNan {xpa cdata param buf len} {
    XPADebug "XPARcvdNan" $param
    InitError xpa
    catch {set i 0; ProcessNanCmd param i}
    XPACatchError $xpa
}

proc XPASendNRES {xpa cdata param} {
    InitError xpa
    catch {ProcessSendNRESCmd xpasetbuf $xpa $param}
    XPACatchError $xpa
}

proc XPARcvdNRES {xpa cdata param buf len} {
    XPADebug "XPARcvdNRES" $param
    InitError xpa
    catch {set i 0; ProcessNRESCmd param i}
    XPACatchError $xpa
}

proc XPASendNRRD {xpa cdata param} {
    InitError xpa
    catch {ProcessSendNRRDCmd {} {} $param [xparec $xpa datafd] {}}
    XPACatchError $xpa
}

proc XPARcvdNRRD {xpa cdata param buf len} {
    XPADebug "XPARcvdNRRD" $param
    InitError xpa
    catch {set i 0; ProcessNRRDCmd param i [xparec $xpa datafd] {}}
    XPACatchError $xpa
}

proc XPASendNVSS {xpa cdata param} {
    InitError xpa
    catch {ProcessSendNVSSCmd xpasetbuf $xpa $param}
    XPACatchError $xpa
}

proc XPARcvdNVSS {xpa cdata param buf len} {
    XPADebug "XPARcvdNVSS" $param
    InitError xpa
    catch {set i 0; ProcessNVSSCmd param i}
    XPACatchError $xpa
}

proc XPASendOrient {xpa cdata param} {
    InitError xpa
    catch {ProcessSendOrientCmd xpasetbuf $xpa $param}
    XPACatchError $xpa
}

proc XPARcvdOrient {xpa cdata param buf len} {
    XPADebug "XPARcvdOrient" $param
    InitError xpa
    catch {set i 0; ProcessOrientCmd param i}
    XPACatchError $xpa
}

proc XPASendPageSetup {xpa cdata param} {
    InitError xpa
    catch {ProcessSendPageSetupCmd xpasetbuf $xpa $param}
    XPACatchError $xpa
}

proc XPARcvdPageSetup {xpa cdata param buf len} {
    XPADebug "XPARcvdPageSetup" $param
    InitError xpa
    catch {set i 0; ProcessPageSetupCmd param i}
    XPACatchError $xpa
}

proc XPASendPSPageSetup {xpa cdata param} {
    InitError xpa
    catch {ProcessSendPSPageSetupCmd xpasetbuf $xpa $param}
    XPACatchError $xpa
}

proc XPARcvdPSPageSetup {xpa cdata param buf len} {
    XPADebug "XPARcvdPSPageSetup" $param
    InitError xpa
    catch {set i 0; ProcessPSPageSetupCmd param i}
    XPACatchError $xpa
}

proc XPASendPan {xpa cdata param} {
    InitError xpa
    catch {ProcessSendPanCmd xpasetbuf $xpa $param}
    XPACatchError $xpa
}

proc XPARcvdPan {xpa cdata param buf len} {
    XPADebug "XPARcvdPan" $param
    InitError xpa
    catch {set i 0; ProcessPanCmd param i}
    XPACatchError $xpa
}

proc XPASendPixelTable {xpa cdata param} {
    InitError xpa
    catch {ProcessSendPixelTableCmd xpasetbuf $xpa $param {} {}}
    XPACatchError $xpa
}

proc XPARcvdPixelTable {xpa cdata param buf len} {
    XPADebug "XPARcvdPixelTable" $param
    InitError xpa
    catch {set i 0; ProcessPixelTableCmd param i}
    XPACatchError $xpa
}

proc XPASendPlot {xpa cdata param} {
    InitError xpa
    catch {ProcessSendPlotCmd xpasetbuf $xpa $param}
    XPACatchError $xpa
}

proc XPARcvdPlot {xpa cdata param buf len} {
    XPADebug "XPARcvdPlot" $param
    InitError xpa
    catch {set i 0; ProcessPlotCmd param i $buf {}}
    XPACatchError $xpa
}

proc XPASendPNG {xpa cdata param} {
    InitError xpa
    catch {
	global tcl_platform
	switch $tcl_platform(os) {
	    Linux -
	    Darwin -
	    SunOS {ProcessSendPNGCmd {} {} $param [xparec $xpa datachan] {}} 
	    {Windows NT} {ProcessSendPNGCmd {} {} $param dummy {}}
	}
    }
    XPACatchError $xpa
}

proc XPARcvdPNG {xpa cdata param buf len} {
    XPADebug "XPARcvdPNG" $param
    InitError xpa
    catch {
	set i 0
	global tcl_platform
	switch $tcl_platform(os) {
	    Linux -
	    Darwin -
	    SunOS {ProcessPNGCmd param i [xparec $xpa datachan] {}}
	    {Windows NT} {ProcessPNGCmd param i dummy {}}
	}
    }
    XPACatchError $xpa
}

proc XPASendPrecision {xpa cdata param} {
    InitError xpa
    catch {ProcessSendPrecisionCmd xpasetbuf $xpa $param}
    XPACatchError $xpa
}

proc XPARcvdPrecision {xpa cdata param buf len} {
    XPADebug "XPARcvdPrecision" $param
    InitError xpa
    catch {set i 0; ProcessPrecisionCmd param i}
    XPACatchError $xpa
}

proc XPASendPrefs {xpa cdata param} {
    InitError xpa
    catch {ProcessSendPrefsCmd xpasetbuf $xpa $param}
    XPACatchError $xpa
}

proc XPARcvdPrefs {xpa cdata param buf len} {
    XPADebug "XPARcvdPrefs" $param
    InitError xpa
    catch {set i 0; ProcessPrefsCmd param i}
    XPACatchError $xpa
}

proc XPASendPreserve {xpa cdata param} {
    InitError xpa
    catch {ProcessSendPreserveCmd xpasetbuf $xpa $param}
    XPACatchError $xpa
}

proc XPARcvdPreserve {xpa cdata param buf len} {
    XPADebug "XPARcvdPreserve" $param
    InitError xpa
    catch {set i 0; ProcessPreserveCmd param i}
    XPACatchError $xpa
}

proc XPASendPrint {xpa cdata param} {
    InitError xpa
    catch {ProcessSendPrintCmd xpasetbuf $xpa $param}
    XPACatchError $xpa
}

proc XPARcvdPrint {xpa cdata param buf len} {
    XPADebug "XPARcvdPrint" $param
    InitError xpa
    catch {
	if {[XPAIsLocal]} {
	    set i 0
	    ProcessPrintCmd param i
	} else {
	    Error [msgcat::mc {This function is not available.}]    
	}
    }
    XPACatchError $xpa
}

proc XPASendPSPrint {xpa cdata param} {
    InitError xpa
    catch {ProcessSendPSPrintCmd xpasetbuf $xpa $param}
    XPACatchError $xpa
}

proc XPARcvdPSPrint {xpa cdata param buf len} {
    XPADebug "XPARcvdPSPrint" $param
    InitError xpa
    catch {
	if {[XPAIsLocal]} {
	    set i 0
	    ProcessPSPrintCmd param i
	} else {
	    Error [msgcat::mc {This function is not available.}]    
	}
    }
    XPACatchError $xpa
}

proc XPARcvdRaise {xpa cdata param buf len} {
    XPADebug "XPARcvdRaise" $param
    InitError xpa
    catch {set i 0; ProcessRaiseCmd param i}
    XPACatchError $xpa
}

proc XPASendRegions {xpa cdata param} {
    InitError xpa
    catch {ProcessSendRegionsCmd xpasetbuf $xpa $param {} {}}
    XPACatchError $xpa
}

proc XPARcvdRegions {xpa cdata param buf len} {
    XPADebug "XPARcvdRegions" $param
    InitError xpa
    catch {set i 0; ProcessRegionsCmd param i [xparec $xpa datafd] {}}
    XPACatchError $xpa
}

proc XPARcvdRestore {xpa cdata param buf len} {
    XPADebug "XPARcvdRestore" $param
    InitError xpa
    catch {set i 0; ProcessRestoreCmd param i}
    XPACatchError $xpa
}

proc XPASendRGB {xpa cdata param} {
    InitError xpa
    catch {ProcessSendRGBCmd xpasetbuf $xpa $param}
    XPACatchError $xpa
}

proc XPARcvdRGB {xpa cdata param buf len} {
    XPADebug "XPARcvdRGB" $param
    InitError xpa
    catch {set i 0; ProcessRGBCmd param i}
    XPACatchError $xpa
}

proc XPASendRGBArray {xpa cdata param} {
    InitError xpa
    catch {ProcessSendRGBArrayCmd {} {} $param [xparec $xpa datafd] {}}
    XPACatchError $xpa
}

proc XPARcvdRGBArray {xpa cdata param buf len} {
    XPADebug "XPARcvdRGBArray" $param
    InitError xpa
    catch {set i 0; ProcessRGBArrayCmd param i [xparec $xpa datafd] {}}
    XPACatchError $xpa
}

proc XPASendRGBCube {xpa cdata param} {
    InitError xpa
    catch {ProcessSendRGBCubeCmd {} {} $param [xparec $xpa datafd] {}}
    XPACatchError $xpa
}

proc XPARcvdRGBCube {xpa cdata param buf len} {
    XPADebug "XPARcvdRGBCube" $param
    InitError xpa
    catch {set i 0; ProcessRGBCubeCmd param i [xparec $xpa datafd] {}}
    XPACatchError $xpa
}

proc XPASendRGBImage {xpa cdata param} {
    InitError xpa
    catch {ProcessSendRGBImageCmd {} {} $param [xparec $xpa datafd] {}}
    XPACatchError $xpa
}

proc XPARcvdRGBImage {xpa cdata param buf len} {
    XPADebug "XPARcvdRGBImage" $param
    InitError xpa
    catch {set i 0; ProcessRGBImageCmd param i [xparec $xpa datafd] {}}
    XPACatchError $xpa
}

proc XPASendRotate {xpa cdata param} {
    InitError xpa
    catch {ProcessSendRotateCmd xpasetbuf $xpa $param}
    XPACatchError $xpa
}

proc XPARcvdRotate {xpa cdata param buf len} {
    XPADebug "XPARcvdRotate" $param
    InitError xpa
    catch {set i 0; ProcessRotateCmd param i}
    XPACatchError $xpa
}

proc XPARcvdSave {xpa cdata param buf len} {
    XPADebug "XPARcvdSave" $param
    InitError xpa
    catch {set i 0; ProcessSaveCmd param i}
    XPACatchError $xpa
}

proc XPARcvdSaveImage {xpa cdata param buf len} {
    XPADebug "XPARcvdSaveImage" $param
    InitError xpa
    catch {set i 0; ProcessSaveImageCmd param i}
    XPACatchError $xpa
}

proc XPASendScale {xpa cdata param} {
    InitError xpa
    catch {ProcessSendScaleCmd xpasetbuf $xpa $param}
    XPACatchError $xpa
}

proc XPARcvdScale {xpa cdata param buf len} {
    XPADebug "XPARcvdScale" $param
    InitError xpa
    catch {set i 0; ProcessScaleCmd param i}
    XPACatchError $xpa
}

# backward compatibility
proc XPARcvdSFits {xpa cdata param buf len} {
    XPADebug "XPARcvdSFits" $param
    InitError xpa
    catch {set i 0; ProcessSFitsCmd param i [xparec $xpa datafd] {}}
    XPACatchError $xpa
}

proc XPASendSIA {xpa cdata param} {
    InitError xpa
    catch {ProcessSendSIACmd xpasetbuf $xpa $param {} {}}
    XPACatchError $xpa
}

proc XPARcvdSIA {xpa cdata param buf len} {
    XPADebug "XPARcvdSIA" $param
    InitError xpa
    catch {set i 0; ProcessSIACmd param i}
    XPACatchError $xpa
}

proc XPASendSingle {xpa cdata param} {
    InitError xpa
    catch {ProcessSendSingleCmd xpasetbuf $xpa $param}
    XPACatchError $xpa
}

proc XPARcvdSingle {xpa cdata param buf len} {
    XPADebug "XPARcvdSingle" $param
    InitError xpa
    catch {set i 0; ProcessSingleCmd param i}
    XPACatchError $xpa
}

proc XPASendShm {xpa cdata param} {
    InitError xpa
    catch {ProcessSendShmCmd xpasetbuf $xpa $param}
    XPACatchError $xpa
}

proc XPARcvdShm {xpa cdata param buf len} {
    XPADebug "XPARcvdShm" $param
    InitError xpa
    catch {set i 0; ProcessShmCmd param i 0}
    XPACatchError $xpa
}

proc XPASendSkyView {xpa cdata param} {
    InitError xpa
    catch {ProcessSendSkyViewCmd xpasetbuf $xpa $param}
    XPACatchError $xpa
}

proc XPARcvdSkyView {xpa cdata param buf len} {
    XPADebug "XPARcvdSkyView" $param
    InitError xpa
    catch {set i 0; ProcessSkyViewCmd param i}
    XPACatchError $xpa
}

proc XPARcvdSleep {xpa cdata param buf len} {
    XPADebug "XPARcvdSleep" $param
    InitError xpa
    catch {set i 0; ProcessSleepCmd param i}
    XPACatchError $xpa
}

# backward compatibility
proc XPARcvdSMosaic {xpa cdata param buf len} {
    XPADebug "XPARcvdSMosaic" $param
    InitError xpa
    catch {set i 0; ProcessSMosaicCmd param i [xparec $xpa datafd] {}}
    XPACatchError $xpa
}

# backward compatibility
proc XPARcvdSMosaicWCS {xpa cdata param buf len} {
    XPADebug "XPARcvdSMosaicWCS" $param
    InitError xpa
    catch {set i 0; ProcessSMosaicWCSCmd param i [xparec $xpa datafd] {}}
    XPACatchError $xpa
}

# backward compatibility
proc XPARcvdSMosaicIRAF {xpa cdata param buf len} {
    XPADebug "XPARcvdSMosaicIRAF" $param
    InitError xpa
    catch {set i 0; ProcessSMosaicIRAFCmd param i [xparec $xpa datafd] {}}
    XPACatchError $xpa
}

proc XPASendSmooth {xpa cdata param} {
    InitError xpa
    catch {ProcessSendSmoothCmd xpasetbuf $xpa $param}
    XPACatchError $xpa
}

proc XPARcvdSmooth {xpa cdata param buf len} {
    XPADebug "XPARcvdSmooth" $param
    InitError xpa
    catch {set i 0; ProcessSmoothCmd param i}
    XPACatchError $xpa
}

proc XPARcvdSource {xpa cdata param buf len} {
    XPADebug "XPARcvdSource" $param
    InitError xpa
    catch {
	if {[XPAIsLocal]} {
	    set i 0
	    ProcessSourceCmd param i
	} else {
	    Error [msgcat::mc {This function is not available.}]    
	}
    }
    XPACatchError $xpa
}

# backward compatibility
proc XPARcvdSRGBCube {xpa cdata param buf len} {
    XPADebug "XPARcvdSRGBCube" $param
    InitError xpa
    catch {set i 0; ProcessSRGBCubeCmd param i [xparec $xpa datafd] {}}
    XPACatchError $xpa
}

proc XPARcvdTcl {xpa cdata param buf len} {
    XPADebug "XPARcvdTcl" $param
    InitError xpa
    catch {
	if {[XPAIsLocal]} {
	    set i 0
	    ProcessTclCmd param i $buf {}
	} else {
	    Error [msgcat::mc {This function is not available.}]    
	}
    }
    XPACatchError $xpa
}

# backward compatibility
proc XPASendTheme {xpa cdata param} {
    InitError xpa
    catch {ProcessSendThemeCmd xpasetbuf $xpa $param}
    XPACatchError $xpa
}

# backward compatibility
proc XPARcvdTheme {xpa cdata param buf len} {
    XPADebug "XPARcvdTheme" $param
    InitError xpa
    catch {set i 0; ProcessThemeCmd param i}
    XPACatchError $xpa
}

proc XPASendThreads {xpa cdata param} {
    InitError xpa
    catch {ProcessSendThreadsCmd xpasetbuf $xpa $param}
    XPACatchError $xpa
}

proc XPARcvdThreads {xpa cdata param buf len} {
    XPADebug "XPARcvdThreads" $param
    InitError xpa
    catch {set i 0; ProcessThreadsCmd param i}
    XPACatchError $xpa
}

proc XPASendTIFF {xpa cdata param} {
    InitError xpa
    catch {
	global tcl_platform
	switch $tcl_platform(os) {
	    Linux -
	    Darwin -
	    SunOS {ProcessSendTIFFCmd {} {} $param [xparec $xpa datachan] {}}
	    {Windows NT} {ProcessSendTIFFCmd {} {} $param dummy {}}
	}
    }
    XPACatchError $xpa
}

proc XPARcvdTIFF {xpa cdata param buf len} {
    XPADebug "XPARcvdTIFF" $param
    InitError xpa
    catch {
	set i 0
	global tcl_platform
	switch $tcl_platform(os) {
	    Linux -
	    Darwin -
	    SunOS {ProcessTIFFCmd param i [xparec $xpa datachan] {}}
	    {Windows NT} {ProcessTIFFCmd param i dummy {}}
	}
    }
    XPACatchError $xpa
}

proc XPASendTile {xpa cdata param} {
    InitError xpa
    catch {ProcessSendTileCmd xpasetbuf $xpa $param}
    XPACatchError $xpa
}

proc XPARcvdTile {xpa cdata param buf len} {
    XPADebug "XPARcvdTile" $param
    InitError xpa
    catch {set i 0; ProcessTileCmd param i}
    XPACatchError $xpa
}

proc XPARcvdUpdate {xpa cdata param buf len} {
    XPADebug "XPARcvdUpdate" $param
    InitError xpa
    catch {set i 0; ProcessUpdateCmd param i}
    XPACatchError $xpa
}

proc XPARcvdURLFits {xpa cdata param buf len} {
    XPADebug "XPARcvdURLFits" $param
    InitError xpa
    catch {set i 0; ProcessURLFitsCmd param i}
    XPACatchError $xpa
}

proc XPASendVersion {xpa cdata param} {
    InitError xpa
    catch {ProcessSendVersionCmd xpasetbuf $xpa $param}
    XPACatchError $xpa
}

proc XPASendView {xpa cdata param} {
    InitError xpa
    catch {ProcessSendViewCmd xpasetbuf $xpa $param}
    XPACatchError $xpa
}

proc XPARcvdView {xpa cdata param buf len} {
    XPADebug "XPARcvdView" $param
    InitError xpa
    catch {set i 0; ProcessViewCmd param i}
    XPACatchError $xpa
}

proc XPASendVLA {xpa cdata param} {
    InitError xpa
    catch {ProcessSendVLACmd xpasetbuf $xpa $param}
    XPACatchError $xpa
}

proc XPARcvdVLA {xpa cdata param buf len} {
    XPADebug "XPARcvdVLA" $param
    InitError xpa
    catch {set i 0; ProcessVLACmd param i}
    XPACatchError $xpa
}

proc XPASendVLSS {xpa cdata param} {
    InitError xpa
    catch {ProcessSendVLSSCmd xpasetbuf $xpa $param}
    XPACatchError $xpa
}

proc XPARcvdVLSS {xpa cdata param buf len} {
    XPADebug "XPARcvdVLSS" $param
    InitError xpa
    catch {set i 0; ProcessVLSSCmd param i}
    XPACatchError $xpa
}

proc XPASendVO {xpa cdata param} {
    InitError xpa
    catch {ProcessSendVOCmd xpasetbuf $xpa $param}
    XPACatchError $xpa
}

proc XPARcvdVO {xpa cdata param buf len} {
    XPADebug "XPARcvdVO" $param
    InitError xpa
    catch {set i 0; ProcessVOCmd param i}
    # someone is setting the error state
    InitError xpa
}

proc XPASendWCS {xpa cdata param} {
    InitError xpa
    catch {ProcessSendWCSCmd xpasetbuf $xpa $param}
    XPACatchError $xpa
}

proc XPARcvdWCS {xpa cdata param buf len} {
    XPADebug "XPARcvdWCS" $param
    InitError xpa
    catch {set i 0; ProcessWCSCmd param i [xparec $xpa datafd] {}}
    XPACatchError $xpa
}

proc XPASendWeb {xpa cdata param} {
    InitError xpa
    catch {ProcessSendWebCmd xpasetbuf $xpa $param}
    XPACatchError $xpa
}

proc XPARcvdWeb {xpa cdata param buf len} {
    XPADebug "XPARcvdWeb" $param
    InitError xpa
    catch {set i 0; ProcessWebCmd param i}
    # someone is setting an error state
    InitError xpa
}

proc XPASendWidth {xpa cdata param} {
    InitError xpa
    catch {ProcessSendWidthCmd xpasetbuf $xpa $param}
    XPACatchError $xpa
}

proc XPARcvdWidth {xpa cdata param buf len} {
    XPADebug "XPARcvdWidth" $param
    InitError xpa
    catch {set i 0; ProcessWidthCmd param i}
    XPACatchError $xpa
}

proc XPASendXPA {xpa cdata param} {
    InitError xpa
    catch {ProcessSendXPACmd xpasetbuf $xpa $param}
    XPACatchError $xpa
}

proc XPARcvdXPA {xpa cdata param buf len} {
    XPADebug "XPARcvdXPA" $param
    InitError xpa
    catch {set i 0; ProcessXPACmd param i}
    XPACatchError $xpa
}

proc XPASendZoom {xpa cdata param} {
    InitError xpa
    catch {ProcessSendZoomCmd xpasetbuf $xpa $param}
    XPACatchError $xpa
}

proc XPARcvdZoom {xpa cdata param buf len} {
    XPADebug "XPARcvdZoom" $param
    InitError xpa
    catch {set i 0; ProcessZoomCmd param i}
    XPACatchError $xpa
}

proc XPASendZScale {xpa cdata param} {
    InitError xpa
    catch {ProcessSendZScaleCmd xpasetbuf $xpa $param}
    XPACatchError $xpa
}

proc XPARcvdZScale {xpa cdata param buf len} {
    XPADebug "XPARcvdZScale" $param
    InitError xpa
    catch {set i 0; ProcessZScaleCmd param i}
    XPACatchError $xpa
}

proc XPAConnect {} {
    global xpa

    if {[info exists xpa]} {
	catch {xpafree $xpa}
	unset xpa
    }
    InitXPA

    UpdateFileMenu
}

proc XPADisconnect {} {
    global xpa

    if {[info exists xpa]} {
	if {[catch {xpafree $xpa} result]} {
	    Error "$result"
	}
	unset xpa
    } else {
	Error "[msgcat::mc {XPA not initialized}]"
    }

    UpdateFileMenu
}

proc XPAInfo {} {
    global xpa

    if {[info exists xpa]} {
	SimpleTextDialog xpatxt "[msgcat::mc {XPA Information}]" \
	    80 20 append bottom "[XPAInfoResult]"
    } else {
	Error "[msgcat::mc {XPA not initialized}]"
    }
}

proc XPAInfoResult {} {
    global xpa

    set rr {}
    if {[info exists xpa]} {
	append rr "[format "XPA_VERSION:\t%s" [xparec $xpa version]]\n"
	append rr "[format "XPA_CLASS:\t%s"   [xparec $xpa class]]\n"
	append rr "[format "XPA_NAME:\t%s"    [xparec $xpa name]]\n"
	append rr "[format "XPA_METHOD:\t%s"  [xparec $xpa method]]\n"
    }

    return $rr
}

# unwind xpa errors
# requires catch {} to allow a check to take place
proc XPADebug {which param} {
    global debug

    if {$debug(tcl,xpa)} {
	puts stderr "$which $param"
    }
}

proc XPACatchError {xpa} {
    global ds9
    global icursor

    global errorInfo
    if {$errorInfo != {} || $ds9(msg) != {}} {
	if {$ds9(msg) != {}} {
	    xpaerror $xpa $ds9(msg)
	} else {
	    xpaerror $xpa [lindex [split $errorInfo "\n"] 0]
	}
	InitError xpa
    }
}

proc XPAMethod {} {
    global xpa

    if {[info exists xpa]} {
	return [xparec $xpa method]
    } else {
	return {none}
    }
}

proc XPAIsLocal {} {
    global xpa
    global env

    if {[info exists env(XPA_METHOD)]} {
	switch $env(XPA_METHOD) {
	    localhost -
	    unix -
	    local {return 1}
	}
    }
    return 0;
}

# Process Cmds

proc ProcessXPAFirstCmd {varname iname} {
    upvar $varname var
    upvar $iname i

    global ds9
    global pds9
    global env

    switch -- [string tolower [lindex $var $i]] {
	unix -
	inet -
	local -
	localhost {set env(XPA_METHOD) [lindex $var $i]}
	noxpans {set env(XPA_NSREGISTER) false}

	yes -
	true -
	on -
	1 -
	no -
	false -
	off -
	0 {set pds9(xpa) [FromYesNo [lindex $var $i]]}
    }
}

proc ProcessXPACmd {varname iname} {
    upvar $varname var
    upvar $iname i

    global ds9
    global pds9

    switch -- [string tolower [lindex $var $i]] {
	tcl {
	    # backward compatibility
	    incr i
	}

	connect {XPAConnect}
	disconnect {XPADisconnect}
	info {XPAInfo}
    }
}

proc ProcessSendXPACmd {proc id param} {
    switch -- [string tolower [lindex $param 0]] {
	info {$proc $id [XPAInfoResult]} 
    }
}
