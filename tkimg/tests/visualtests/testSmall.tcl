package require Tk

proc initPackages { args } {
    global gPkg

    foreach pkg $args {
	set retVal [catch {package require $pkg} gPkg(ext,$pkg,version)]
	set gPkg(ext,$pkg,avail) [expr !$retVal]
    }
}

initPackages img::bmp  img::gif  img::ico  img::jpeg img::pcx \
             img::png  img::ppm  img::raw  img::sgi  img::sun \
             img::tga  img::tiff img::xbm  img::xpm  img::window

set retVal [catch {package require Img} version]
if { $retVal } {
    error "Trying to load package Img: $version"
}

cd [file dirname [info script]]

source [file join "utils" "testUtil.tcl"]
source [file join "utils" "testGUI.tcl"]

source [file join "utils" "testImgs.tcl"]
source [file join "utils" "testReadWrite.tcl"]

set autoMode false
if { $argc >= 1 } {
    if { [lindex $argv 0] eq "auto" } {
        set autoMode true
    }
}

PH "Image Read/Write (Different sizes)"

P "This test tries to store the content of a canvas window in image files"
P "using all file formats available in the tkImg package."
P "After writing we try to read the image back into a photo by using the"
P "auto-detect mechanism of tkImg. If that fails, we use the \"-format\" option."
P ""

if { $tcl_platform(platform) eq "windows" } {
    catch { console show }
}

ui_init "testSmall.tcl: Read/Write (Different small sizes)" "+320+30"
SetFileTypes

P ""
StartErrorCount
set sep "\n\t"
set count  1
foreach elem $fmtList {
    set ext [lindex $elem 0]
    set fmt [lindex $elem 1]
    set opt [lindex $elem 2]
    catch { file mkdir testOut }
    set prefix [file join testOut testSmall]

    P "Format $fmt :"
    for { set w 1 } { $w <=4 } { incr w } {
	for { set h 1 } { $h <=4 } { incr h } {
	    P "Creating a photo of size: $w x $h"
	    set ph [image create photo -width $w -height $h]
	    set imgData {}
	    for { set y 1 } { $y <= $h } { incr y } {
	        set imgLine {}
		for { set x 1 } { $x <= $w } { incr x } {
		    set col 0
		    if { $x % 2 == 1 && $y % 2 == 1 ||
		         $x % 2 == 0 && $y % 2 == 0 } {
			set col 255
		    }
		    set val [format "#%02x%02x%02x" $col $col $col]
                    lappend imgLine $val
                    if { $fmt eq "xbm" } {
                        $ph put $val -to [expr $x-1] [expr $y-1]
                        $ph transparency set [expr $x-1] [expr $y-1] [expr $col]
                    }
		}
	        lappend imgData $imgLine
	    }
	    set zoom 8
            if { $fmt ne "xbm" } {
                $ph put $imgData
            }
	    set fname [format "%s_w%d_h%d%s" $prefix $w $h $ext]
	    # Write the image to a file and read it back again.
	    writePhotoToFile $ph $fname "$fmt $opt" 1
	    set ph [readPhotoFromFile1 $fname "$fmt $opt"]
	    if { $ph eq "" } {
		set ph [createErrImg]
		set zoom 1
            } else {
                CheckImageSize $ph $w $h
                CheckImagePixel $ph 0 0  255 255 255
	    }
	    # Write the image to a binary string and read it back again.
	    set str [writePhotoToString $ph "$fmt $opt" 1]
	    if { $str eq "" } {
		set ph [createErrImg]
		set zoom 1
	    } else {
		set ph [readPhotoFromString2 $str "$fmt $opt" -1 -1]
		if { $ph eq "" } {
		    set ph [createErrImg]
		    set zoom 1
                } else {
                    CheckImageSize $ph $w $h
                    CheckImagePixel $ph 0 0  255 255 255
                }
	    }
	    # Write the image to a binary string and read it back again.
	    set zw [expr [image width  $ph] * $zoom]
	    set zh [expr [image height $ph] * $zoom]
	    set zoomPh [image create photo -width $zw -height $zh]
	    $zoomPh copy $ph -zoom $zoom $zoom
	    image delete $ph
	    set msg "Image: $fname Format: $fmt $sep (Width: $w Height: $h)"
	    ui_addphoto $zoomPh $msg
	    P ""
	}
    }

    P ""
    incr count
}

PS
P "End of test (Errors: [GetErrorCount])"

P ""
PrintMachineInfo
if { $autoMode } {
    ui_exit [GetErrorCount]
} else {
    ui_show
}
