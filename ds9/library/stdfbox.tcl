#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

# do this after the language has been defined and the prefs sourced
proc InitDialogBox {} {
    global fitsurl
    set fitsurl {}

    global fitsfbox
    set fitsfbox(file) {ds9.fits}
    set fitsfbox(dir) {}
    set fitsfbox(types) [list \
			     [list {FITS} {*.fits}] \
			     [list {FITS} {*.FITS}] \
			     [list {FITS} {*.fit}] \
			     [list {FITS} {*.FIT}] \
			     [list {FITS} {*.fts}] \
			     [list {FITS} {*.FTS}] \
			     [list {FITS} {*.ds}] \
			     [list {FITS} {*.DS}] \
			     [list {FITS} {*.fits.gz}] \
			     [list {FITS} {*.fits.bz2}] \
			     [list {FITS} {*.fits.Z}] \
			     [list {FITS} {*.fits.z}] \
			     [list {FITS} {*.fitz}] \
			     [list {FITS} {*.FITZ}] \
			     [list {FITS} {*.ftz}] \
			     [list {FITS} {*.FTZ}] \
			     [list {FITS} {*.fz}] \
			     [list {FITS} {*.FZ}] \
			    ]

    global savefitsfbox
    set savefitsfbox(file) {ds9.fits}
    set savefitsfbox(dir) {}
    set savefitsfbox(types) [list \
				 [list {FITS} {*.fits}] \
				 [list {FITS} {*.fit}] \
				 [list {FITS} {*.fts}] \
				 [list {FITS} {*.fits.gz}] \
				 [list {FITS} {*.fits.bz2}] \
				 [list {FITS} {*.fits.Z}] \
				 [list {FITS} {*.fits.z}] \
				]

    global maskfbox
    set maskfbox(file) {mask.fits}
    set maskfbox(dir) {}
    set maskfbox(types) [list \
				 [list {FITS} {*.fits}] \
				 [list {FITS} {*.fit}] \
				 [list {FITS} {*.fts}] \
				 [list {FITS} {*.fits.gz}] \
				 [list {FITS} {*.fits.bz2}] \
				 [list {FITS} {*.fits.Z}] \
				 [list {FITS} {*.fits.z}] \
				]

    global epsfbox
    set epsfbox(file) {ds9.eps}
    set epsfbox(dir) {}
    set epsfbox(types) [list \
			    [list {EPS} {*.eps}] \
			   ]
    global arrayfbox
    set arrayfbox(file) {ds9.arr}
    set arrayfbox(dir) {}
    set arrayfbox(types) [list \
			      [list [::msgcat::mc {Array}] {*.arr}] \
			     ]
    global rgbarrayfbox
    set rgbarrayfbox(file) {ds9.rgb}
    set rgbarrayfbox(dir) {}
    set rgbarrayfbox(types) [list \
				 [list [::msgcat::mc {RGB Array}] {*.rgb}] \
				]
    global nrrdfbox
    set nrrdfbox(file) {ds9.nrrd}
    set nrrdfbox(dir) {}
    set nrrdfbox(types) [list \
			     [list {NRRD} {*.nrrd}] \
			    ]
    global envifbox
    set envifbox(file) {ds9.hdr}
    set envifbox(dir) {}
    set envifbox(types) [list \
			     [list {ENVI} {*.hdr}] \
			    ]
    global envi2fbox
    set envi2fbox(file) {ds9.bsq}
    set envi2fbox(dir) {}
    set envi2fbox(types) [list \
			      [list {ENVI2} {*.bil}] \
			      [list {ENVI2} {*.bip}] \
			      [list {ENVI2} {*.bsq}] \
			      [list {ENVI2} {*.cube}] \
			     ]
    global giffbox
    set giffbox(file) {ds9.gif}
    set giffbox(dir) {}
    set giffbox(types) [list \
			    [list {GIF} {*.gif}] \
			   ]
    global jpegfbox
    set jpegfbox(file) {ds9.jpeg}
    set jpegfbox(dir) {}
    set jpegfbox(types) [list \
			     [list {JPEG} {*.jpeg}] \
			     [list {JPEG} {*.jpg}] \
			    ]
    global tifffbox
    set tifffbox(file) {ds9.tiff}
    set tifffbox(dir) {}
    set tifffbox(types) [list \
			     [list {TIFF} {*.tiff}] \
			     [list {TIFF} {*.tif}] \
			    ]
    global pngfbox
    set pngfbox(file) {ds9.png}
    set pngfbox(dir) {}
    set pngfbox(types) [list \
			    [list {PNG} {*.png}] \
			   ]
    global mpegfbox
    set mpegfbox(file) {ds9.mpeg}
    set mpegfbox(dir) {}
    set mpegfbox(types) [list \
			     [list {MPEG} {*.mpeg}] \
			     [list {MPEG} {*.mpg}] \
			    ]

    global votfbox
    set votfbox(file) {ds9.xml}
    set votfbox(dir) {}
    set votfbox(types) [list \
			       [list [::msgcat::mc {VOT}] {*.xml}] \
			       [list [::msgcat::mc {VOT}] {*.vot}] \
			       [list [::msgcat::mc {VOT}] {*.votable}] \
			      ]

    global rdbfbox
    set rdbfbox(file) {ds9.rdb}
    set rdbfbox(dir) {}
    set rdbfbox(types) [list \
			    [list [::msgcat::mc {RDB}] {*.cat}] \
			    [list [::msgcat::mc {RDB}] {*.rdb}] \
			   ]

    global tsvfbox
    set tsvfbox(file) {ds9.tsv}
    set tsvfbox(dir) {}
    set tsvfbox(types) [list \
			       [list [::msgcat::mc {TSV}] {*.tsv}] \
			       [list [::msgcat::mc {TSV}] {*.csv}] \
			      ]

    global catfitsfbox
    set catfitsfbox(file) {cat.fits}
    set catfitsfbox(dir) {}
    set catfitsfbox(types) [list \
				 [list {FITS} {*.fits}] \
				 [list {FITS} {*.fit}] \
				 [list {FITS} {*.fts}] \
				 [list {FITS} {*.fits.gz}] \
				]

    global pixelfbox
    set pixelfbox(file) {ds9.pix}
    set pixelfbox(dir) {}
    set pixelfbox(types) [list \
			      [list {PIX} {*.pix}] \
			     ]

    global markerfbox
    set markerfbox(file) {ds9.reg}
    set markerfbox(dir) {}
    set markerfbox(types) [list \
			       [list {REG} {*.reg}] \
			       [list {FITS} {*.fits}] \
			       [list {XML} {*.xml}] \
			      ]

    global templatefbox
    set templatefbox(file) {ds9.tpl}
    set templatefbox(dir) {}
    set templatefbox(types) \
	[list [list {TPL} {*.tpl}] [list [::msgcat::mc {All}] {*}] ]

    global colorbarfbox
    set colorbarfbox(file) {ds9.sao}
    set colorbarfbox(dir) {}
    set colorbarfbox(types) [list \
				 [list [::msgcat::mc {Colormap}] {*.sao}] \
				 [list [::msgcat::mc {Colormap}]  {*.lut}] \
				]

    global contrastbiasfbox
    set contrastbiasfbox(file) {ds9.cb}
    set contrastbiasfbox(dir) {}
    set contrastbiasfbox(types) [list \
				     [list {CB} {*.cb}] \
				    ]

    global colortagfbox
    set colortagfbox(file) {ds9.tag}
    set colortagfbox(dir) {}
    set colortagfbox(types) [list \
				 [list {Colortag} {*.tag}] \
				]

    global pssavfbox
    set pssavfbox(file) {ds9.ps}
    set pssavfbox(dir) {}
    set pssavfbox(types) [list \
			      [list {PS} {*.ps}] \
			     ]

    global prsavfbox
    set prsavfbox(file) {ds9.txt}
    set prsavfbox(dir) {}
    set prsavfbox(types) [list \
			      [list {TXT} {*.txt}] \
			     ]

    # contour load
    global contourlfbox
    set contourlfbox(file) {ds9.ctr}
    set contourlfbox(dir) {}
    set contourlfbox(types) [list \
				 [list {CTR} {*.ctr}] \
				 [list {CON} {*.con}] \
				]

    # contour save
    global contoursfbox
    set contoursfbox(file) {ds9.ctr}
    set contoursfbox(dir) {}
    set contoursfbox(types) [list \
				 [list {CTR} {*.ctr}] \
				]

    # contour level load
    global contourlevlfbox
    set contourlevlfbox(file) {ds9.ctr}
    set contourlevlfbox(dir) {}
    set contourlevlfbox(types) [list \
				    [list {CTR} {*.ctr}] \
				    [list {LEV} {*.lev}] \
				   ]

    # contour level save
    global contourlevsfbox
    set contourlevsfbox(file) {ds9.lev}
    set contourlevsfbox(dir) {}
    set contourlevsfbox(types) [list \
				    [list {LEV} {*.lev}] \
				   ]

    global gridfbox
    set gridfbox(file) {ds9.grd}
    set gridfbox(dir) {}
    set gridfbox(types) [list \
			     [list {GRD} {*.grd}] \
			    ]

    global catfltfbox
    set catfltfbox(file) {ds9.flt}
    set catfltfbox(dir) {}
    set catfltfbox(types) [list \
			       [list {FLT} {*.flt}] \
			      ]

    global catsymfbox
    set catsymfbox(file) {ds9.sym}
    set catsymfbox(dir) {}
    set catsymfbox(types) [list \
			       [list {SYM} {*.sym}] \
			      ]

    global catcdssrchfbox
    set catcdssrchfbox(file) {ds9.cds}
    set catcdssrchfbox(dir) {}
    set catcdssrchfbox(types) [list \
				   [list {CDS} {*.cds}] \
				  ]

    global siafbox
    set siafbox(file) {ds9.sia}
    set siafbox(dir) {}
    set siafbox(types) [list \
			    [list [::msgcat::mc {Simple Image Access}] {*.sia}]\
			   ]

    global analysisfbox
    set analysisfbox(file) {ds9.ans}
    set analysisfbox(dir) {}
    set analysisfbox(types) [list \
				 [list [::msgcat::mc {Analysis}] {*.ans}] \
				 [list [::msgcat::mc {Analysis}] {*.ds9}] \
				]

    global analysisparamfbox
    set analysisparamfbox(file) {}
    set analysisparamfbox(dir) {}
    # MacOS needs a default file type
    set analysisparamfbox(types) [list \
				      [list [::msgcat::mc {All}] {}]\
				     ]

    global apsavfbox
    set apsavfbox(file) {ds9.ps}
    set apsavfbox(dir) {}
    set apsavfbox(types) [list \
			      [list {PS} {*.ps}] \
			     ]

    global apdatafbox
    set apdatafbox(file) {ds9.dat}
    set apdatafbox(dir) {}
    set apdatafbox(types) [list \
			       [list {DAT} {*.dat}] \
			      ]

    global apconfigfbox
    set apconfigfbox(file) {ds9.plt}
    set apconfigfbox(dir) {}
    set apconfigfbox(types) [list \
				 [list {PLT} {*.plt}] \
				]

    global textfbox
    set textfbox(file) {ds9.txt}
    set textfbox(dir) {}
    set textfbox(types) [list \
			     [list {TXT} {*.txt}] \
			    ]

    global tclfbox
    set tclfbox(file) {ds9.tcl}
    set tclfbox(dir) {}
    set tclfbox(types) [list \
			    [list {TCL} {*.tcl}] \
			   ]

    global hvhtmlfbox
    set hvhtmlfbox(file) {ds9.html}
    set hvhtmlfbox(dir) {}
    set hvhtmlfbox(types) [list \
			       [list {HTML} {*.html}] \
			       [list {HTML} {*.htm}] \
			      ]

    global wcsfbox
    set wcsfbox(file) {ds9.wcs}
    set wcsfbox(dir) {}
    set wcsfbox(types) [list \
			    [list {WCS} {*.wcs}] \
			   ]

    global backupfbox
    set backupfbox(file) {ds9.bck}
    set backupfbox(dir) {}
    set backupfbox(types) [list \
			       [list {BCK} {*.bck}] \
			      ]

    global plotbackupfbox
    set plotbackupfbox(file) {ds9.plb}
    set plotbackupfbox(dir) {}
    set plotbackupfbox(types) [list \
			       [list {PLB} {*.plb}] \
			      ]

}

proc SetFileLast {format item} {
    switch $format {
	mecube -
	multiframe -
	mosaic -
	mosaicimage -
	rgbcube -
	rgbimage -
	fits {FileLast fitsfbox $item}

	array {FileLast arrayfbox $item}
	rgbarray {FileLast rgbarrayfbox $item}
	envi {FileLast envifbox $item}
	envi2 {FileLast envi2fbox $item}
	gif {FileLast giffbox $item}
	jpeg {FileLast jpegfbox $item}
	nrrd {FileLast nrrdfbox $item}
	tiff {FileLast tifffbox $item}
	png {FileLast pngfbox $item}
	
	sfits -
	srgbcube -
	sfits -
	smosaic -
	url {}
    }
}

proc ExtToFormat {fn} {
    switch -- [file extension $fn] {
	.fits -
	.FITS -
	.fit -
	.FIT -
	.fts -
	.FTS -
	.ds -
	.DS -
	.fits.gz -
	.fits.bz2 -
	.fits.Z -
	.fits.z -
	.fitz -
	.FITZ -
	.ftz -
	.FTZ -
	.fz -
	.FZ {return fits}
	.arr -
	.array {return array}
	.rgb {return rgbarray}
	.nrrd {return nrrd}
	.eps -
	.epsf {return eps}
	.gif -
	.giff {return gif}
	.jpg -
	.jpeg {return jpeg}
	.tif -
	.tiff {return tiff}
	.png {return png}
	.mpg -
	.mpeg {return mpeg}
	.hdr -
	.bil -
	.bip -
	.bsq -
	.cube {return envi}
    }
}

# used by backup
proc OpenFileDialog {varname {parent {}}} {
    global ds9

    if {$parent == {}} {
	set parent $ds9(top)
    }

    return [FileDialog $varname tk_getOpenFile $parent]
}

proc SaveFileDialog {varname {parent {}}} {
    global ds9

    if {$parent == {}} {
	set parent $ds9(top)
    }

    return [FileDialog $varname tk_getSaveFile $parent]
}

proc FileDialog {varname which parent} {
    global pds9

    switch -- $pds9(dialog) {
	motif {return [FileDialogMotif $varname $which $parent]}
	windows {return [FileDialogWindows $varname $which $parent]}
	native {return [FileDialogNative $varname $which $parent]}
    }
}

proc FileDialogMotif {varname which parent} {
    upvar #0 $varname var
    global pds9

    switch -- $which {
	tk_getOpenFile {set type open}
	tk_getSaveFile {set type save}
    }


    if {$pds9(dialog,all)} {
	set types [linsert $var(types) 0 [list [::msgcat::mc {All}] {*}]]
    } else {
	set types [linsert $var(types) end [list [::msgcat::mc {All}] {*}]]
    }

    set result [::tk::MotifFDialog $type \
		    -filetypes $types \
		    -initialdir $var(dir) \
		    -initialfile $var(file) \
		    -parent $parent]

    if {$result != {}} {
	set var(file) [file tail $result]
	set var(dir) [file dirname $result]
    }

    return $result
}

proc FileDialogWindows {varname which parent} {
    upvar #0 $varname var
    global pds9

    switch -- $which {
	tk_getOpenFile {set type open}
	tk_getSaveFile {set type save}
    }

    if {$pds9(dialog,all)} {
	set types [linsert $var(types) 0 [list [::msgcat::mc {All}] {*}]]
    } else {
	set types [linsert $var(types) end [list [::msgcat::mc {All}] {*}]]
    }

    set result [::tk::dialog::file:: $type \
		    -filetypes $types \
		    -initialdir $var(dir) \
		    -initialfile $var(file) \
		    -parent $parent]

    if {$result != {}} {
	set var(file) [file tail $result]
	set var(dir) [file dirname $result]
    }

    return $result
}

proc FileDialogNative {varname which parent} {
    upvar #0 $varname var
    global pds9

    if {$pds9(dialog,all)} {
	set types [linsert $var(types) 0 [list [::msgcat::mc {All}] {*}]]
    } else {
	set types [linsert $var(types) end [list [::msgcat::mc {All}] {*}]]
    }

    if {[catch {$which \
		    -filetypes $types \
		    -initialdir $var(dir) \
		    -initialfile $var(file) \
		    -parent $parent} result]} {

	# must have a bad file name, just clear and try again
	set var(file) {}
	set var(dir) {}
	if {[catch {$which \
			-filetypes $types \
			-parent $parent} result]} {

	    #ok, something is really wrong
	    catch {$which -parent $parent} result
	}
    }

    if {$result != {}} {
	set var(file) [file tail $result]
	set var(dir) [file dirname $result]
    }

    return $result
}


proc FileLast {varname fn} {
    upvar #0 $varname var
    global ds9

    switch $ds9(wm) {
	x11 {
	    set var(file) [file tail $fn]
	    set var(dir) [file dirname $fn]
	}
	aqua {
	    # don't conflict with native dialog
	}
	win32 {}
    }
}
