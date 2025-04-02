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

PH "Image Read/Write (Full Images)"

P "This test tries to store the content of a canvas window in image files"
P "using all file formats available in the tkImg package."
P "After writing we try to read the image back into a photo by using the"
P "auto-detect mechanism of tkImg. If that fails, we use the \"-format\" option."
P ""

if { $tcl_platform(platform) eq "windows" } {
    catch { console show }
}

ui_init "testFull.tcl: Read/Write (Full Images)" "+320+30"
SetFileTypes

set canvId [drawTestCanvas $version]

P ""
StartErrorCount
set sep "\n\t"
set count  1
set phCanvas [getCanvasPhoto $canvId]
foreach elem $fmtList {
    set ext [lindex $elem 0]
    set fmt [lindex $elem 1]
    set opt [lindex $elem 2]
    catch { file mkdir testOut }
    set fname1 [file join "testOut" "testFullFile$ext"]
    set fname2 [file join "testOut" "testFullString$ext"]
    set msg "Image $count: $fname1 Format: $fmt $sep (Options: $opt)"
    P $msg

    PN "\t"

    # Read and write from file.
    writePhotoToFile $phCanvas $fname1 "$fmt $opt" 0

    set ph [readPhotoFromFile1 $fname1 "$fmt $opt"]
    if { $ph eq "" } {
        set ph [createErrImg]
    } else {
        CheckImageSize $ph 250 230
        if { $fmt ne "xbm" } {
            CheckImagePixel $ph 52 52  0 0 255
        }
    }
    set msg "Image $count.1: $fname1 Format: $fmt $sep (Read from file 1)"
    ui_addphoto $ph $msg

    set ph [readPhotoFromFile2 $fname1 "$fmt $opt" -1 -1]
    if { $ph eq "" } {
        set ph [createErrImg]
    } else {
        CheckImageSize $ph 250 230
        if { $fmt ne "xbm" } {
            CheckImagePixel $ph 52 52  0 0 255
        }
    }
    set msg "Image $count.2: $fname1 Format: $fmt $sep (Read from file 2)"
    ui_addphoto $ph $msg

    # Read and write from string.
    set str [writePhotoToString $phCanvas "$fmt $opt" 0]
    writeFile $str $fname2

    set ph [readPhotoFromString1 $str "$fmt $opt"]
    if { $ph eq "" } {
        set ph [createErrImg]
    } else {
        CheckImageSize $ph 250 230
        if { $fmt ne "xbm" } {
            CheckImagePixel $ph 52 52  0 0 255
        }
    }
    set msg "Image $count.3: $fname2 Format: $fmt $sep (Read from string 1)"
    ui_addphoto $ph $msg

    set ph [readPhotoFromString2 $str "$fmt $opt" -1 -1]
    if { $ph eq "" } {
        set ph [createErrImg]
    } else {
        CheckImageSize $ph 250 230
        if { $fmt ne "xbm" } {
            CheckImagePixel $ph 52 52  0 0 255
        }
    }
    set msg "Image $count.4: $fname2 Format: $fmt $sep (Read from string 2)"
    ui_addphoto $ph $msg

    set imgData [readFile $fname2]
    set ph [readPhotoFromString2 $imgData "$fmt $opt" -1 -1]
    if { $ph eq "" } {
        set ph [createErrImg]
    } else {
        CheckImageSize $ph 250 230
        if { $fmt ne "xbm" } {
            CheckImagePixel $ph 52 52  0 0 255
        }
    }
    set msg "Image $count.5: $fname2 Format: $fmt $sep (Read from string 3)"
    ui_addphoto $ph $msg

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
