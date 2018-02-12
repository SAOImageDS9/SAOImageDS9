#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

# backward compatibility
proc ProcessFileCmd {varname iname sock ch fn} {
    upvar $varname var
    upvar $iname i

    set vvar $var
    set ii $i

    set zero  $i
    set one   [expr $i+1]
    set two   [expr $i+2]
    set three [expr $i+3]

    switch -- [string tolower [lindex $var $zero]] {
	new {
	    switch -- [string tolower [lindex $var $one]] {
		slice {ProcessFitsCmd vvar ii $sock $fn}
		fits {
		    set vvar [lreplace $var $one $one]
		    ProcessFitsCmd vvar ii $sock $fn
		}
		sfits {
		    set vvar [lreplace $var $one $one]
		    ProcessSFitsCmd vvar ii $sock $fn
		}

		rgbimage {
		    set vvar [lreplace $var $one $one]
		    ProcessRGBImageCmd vvar ii $sock $fn
		}
		rgbcube {
		    set vvar [lreplace $var $one $one]
		    ProcessRGBCubeCmd vvar ii $sock $fn
		}
		srgbcube {
		    set vvar [lreplace $var $one $one]
		    ProcessSRGBCubeCmd vvar ii $sock $fn
		}

		mecube {
		    set vvar [lreplace $var $one $one]
		    ProcessMECubeCmd vvar ii $sock $fn
		}
		memf -
		multiframe {
		    set vvar [lreplace $var $one $one]
		    ProcessMultiFrameCmd vvar ii $sock $fn
		}

		mosaicimage {
		    set vvar [lreplace $var $one $one]
		    ProcessMosaicImageCmd vvar ii $sock $fn
		}
		mosaicimagewcs {
		    set vvar [lreplace $var $one $one]
		    ProcessMosaicImageWCSCmd vvar ii $sock $fn
		}
		mosaicimageiraf {
		    set vvar [lreplace $var $one $one]
		    ProcessMosaicImageIRAFCmd vvar ii $sock $fn
		}
		mosaicimagewfpc2 {
		    set vvar [lreplace $var $one $one]
		    ProcessMosaicImageWFPC2Cmd vvar ii $sock $fn
		}

		mosaic {
		    set vvar [lreplace $var $one $one]
		    ProcessMosaicCmd vvar ii $sock $fn
		}
		mosaicwcs {
		    set vvar [lreplace $var $one $one]
		    ProcessMosaicWCSCmd vvar ii $sock $fn
		}
		mosaiciraf {
		    set vvar [lreplace $var $one $one]
		    ProcessMosaicIRAFCmd vvar ii $sock $fn
		}

		smosaic {
		    set vvar [lreplace $var $one $one]
		    ProcessSMosaicCmd vvar ii $sock $fn
		}
		smosaicwcs {
		    set vvar [lreplace $var $one $one]
		    ProcessSMosaicWCSCmd vvar ii $sock $fn
		}
		smosaiciraf {
		    set vvar [lreplace $var $one $one]
		    ProcessSMosaicIRAFCmd vvar ii $sock $fn
		}

		url {
		    set vvar [lreplace $var $one $one]
		    ProcessURLFitsCmd vvar ii
		}

		array {
		    set vvar [lreplace $var $one $one]
		    ProcessArrayCmd vvar ii $sock $fn
		}
		rgbarray {
		    set vvar [lreplace $var $one $one]
		    ProcessRGBArrayCmd vvar ii $sock $fn
		}
		photo {
		    set vvar [lreplace $var $one $one]
		    ProcessTIFFCmd vvar ii $ch $fn
		}
		default {ProcessFitsCmd vvar ii $sock $fn}
	    }
	}
	mask {
	    switch -- [string tolower [lindex $var $one]] {
		fits {
		    set vvar [lreplace $var $one $one]
		    ProcessFitsCmd vvar ii $sock $fn
		}
		sfits {
		    set vvar [lreplace $var $one $one]
		    ProcessSFitsCmd vvar ii $sock $fn
		}
		mosaicimage {
		    set vvar [lreplace $var $one $one]
		    ProcessMosaicImageCmd vvar ii $sock $fn
		}
		mosaicimagewcs {
		    set vvar [lreplace $var $one $one]
		    ProcessMosaicImageWCSCmd vvar ii $sock $fn
		}
		mosaicimageiraf {
		    set vvar [lreplace $var $one $one]
		    ProcessMosaicImageIRAFCmd vvar ii $sock $fn
		}
		mosaicimagewfpc2 {
		    set vvar [lreplace $var $one $one]
		    ProcessMosaicImageWFPC2Cmd vvar ii $sock $fn
		}
		mosaic {
		    set vvar [lreplace $var $one $one]
		    ProcessMosaicCmd vvar ii $sock $fn
		}
		mosaicwcs {
		    set vvar [lreplace $var $one $one]
		    ProcessMosaicWCSCmd vvar ii $sock $fn
		}
		mosaiciraf {
		    set vvar [lreplace $var $one $one]
		    ProcessMosaicIRAFCmd vvar ii $sock $fn
		}
		smosaic {
		    set vvar [lreplace $var $one $one]
		    ProcessSMosaicCmd vvar ii $sock $fn
		}
		smosaicwcs {
		    set vvar [lreplace $var $one $one]
		    ProcessSMosaicWCSCmd vvar ii $sock $fn
		}
		smosaiciraf {
		    set vvar [lreplace $var $one $one]
		    ProcessSMosaicIRAFCmd vvar ii $sock $fn
		}
		array {
		    set vvar [lreplace $var $one $one]
		    ProcessArrayCmd vvar ii $sock $fn
		}
		default {ProcessFitsCmd vvar ii $sock $fn}
	    }
	}
	slice {ProcessFitsCmd vvar ii $sock $fn}

	fits {
	    set vvar [lreplace $var $zero $zero]
	    ProcessFitsCmd vvar ii $sock $fn
	}
	sfits {
	    set vvar [lreplace $var $zero $zero]
	    ProcessSFitsCmd vvar ii $sock $fn
	}

	rgbimage {
	    set vvar [lreplace $var $zero $zero]
	    ProcessRGBImageCmd vvar ii $sock $fn
	}
	rgbcube {
	    set vvar [lreplace $var $zero $zero]
	    ProcessRGBCubeCmd vvar ii $sock $fn
	}
	srgbcube {
	    set vvar [lreplace $var $zero $zero]
	    ProcessSRGBCubeCmd vvar ii $sock $fn
	}

	mecube {
	    set vvar [lreplace $var $zero $zero]
	    ProcessMECubeCmd vvar ii $sock $fn
	}
	memf -
	multiframe {
	    set vvar [lreplace $var $zero $zero]
	    ProcessMultiFrameCmd vvar ii $sock $fn
	}

	mosaicimage {
	    set vvar [lreplace $var $zero $zero]
	    ProcessMosaicImageCmd vvar ii $sock $fn
	}
	mosaicimagewcs {
	    set vvar [lreplace $var $zero $zero]
	    ProcessMosaicImageWCSCmd vvar ii $sock $fn
	}
	mosaicimageiraf {
	    set vvar [lreplace $var $zero $zero]
	    ProcessMosaicImageIRAFCmd vvar ii $sock $fn
	}
	mosaicimagewfpc2 {
	    set vvar [lreplace $var $zero $zero]
	    ProcessMosaicImageWFPC2Cmd vvar ii $sock $fn
	}

	mosaic {
	    set vvar [lreplace $var $zero $zero]
	    ProcessMosaicCmd vvar ii $sock $fn
	}
	mosaicwcs {
	    set vvar [lreplace $var $zero $zero]
	    ProcessMosaicWCSCmd vvar ii $sock $fn
	}
	mosaiciraf {
	    set vvar [lreplace $var $zero $zero]
	    ProcessMosaicIRAFCmd vvar ii $sock $fn
	}

	smosaic {
	    set vvar [lreplace $var $zero $zero]
	    ProcessSMosaicCmd vvar ii $sock $fn
	}
	smosaicwcs {
	    set vvar [lreplace $var $zero $zero]
	    ProcessSMosaicWCSCmd vvar ii $sock $fn
	}
	smosaiciraf {
	    set vvar [lreplace $var $zero $zero]
	    ProcessSMosaicIRAFCmd vvar ii $sock $fn
	}

	url {
	    set vvar [lreplace $var $zero $zero]
	    ProcessURLFitsCmd vvar ii
	}

	array {
	    set vvar [lreplace $var $zero $zero]
	    ProcessArrayCmd vvar ii $sock $fn
	}
	rgbarray {
	    set vvar [lreplace $var $zero $zero]
	    ProcessRGBArrayCmd vvar ii $sock $fn
	}
	photo {
	    set vvar [lreplace $var $zero $zero]
	    ProcessTIFFCmd vvar ii $ch $fn
	}

	save {
	    set which image
	    set fn {}
	    switch -- [string tolower [lindex $var $one]] {
		resample {
		    set which resample
		    switch -- [string tolower [lindex $var $two]] {
			gz {
			    # ignore
			    set fn [lindex $var $three]
			}
			default {set fn [lindex $var $two]}
		    }
		}
		gz {
		    # ignore
		    set fn [lindex $var $two]
		}
		default {set fn [lindex $var $one]}
	    }

	    SaveFitsFile $which $fn
	}

	default {ProcessFitsCmd vvar ii $sock $fn}
    }
}

proc ProcessSendFileCmd {proc id param} {
    global current

    if {$current(frame) != {}} {
	$proc $id "[$current(frame) get fits file name full]\n"
    }
}


