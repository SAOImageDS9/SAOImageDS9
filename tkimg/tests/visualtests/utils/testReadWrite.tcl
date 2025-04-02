# The list of file formats to be tested.
# First entry specifies the file extension used to create the image filenames.
# Second entry specifies the image format name as used by the Img extension.
# Third entry specifies optional format options.

set fmtList [list \
        [list ".bmp"   "bmp"  ""] \
        [list ".gif"   "gif"  ""] \
        [list ".ico"   "ico"  ""] \
        [list ".jpg"   "jpeg" "-quality 100"] \
        [list ".pcx"   "pcx"  ""] \
        [list ".png"   "png"  ""] \
        [list ".ppm"   "ppm"  ""] \
        [list ".raw"   "raw"  "-useheader true -nchan 3"] \
        [list ".rgb"   "sgi"  ""] \
        [list ".ras"   "sun"  ""] \
        [list ".tga"   "tga"  ""] \
        [list ".tif"   "tiff" ""] \
        [list ".xbm"   "xbm"  ""] \
        [list ".xpm"   "xpm"  ""] ]


# Read binary data from a file and return the data.
proc readFile { name } {
    set retVal [catch {open $name r} fp]
    if { $retVal != 0 } {
        P "\n\tERROR: Cannot open file $name for binary reading."
        IncrErrorCount
        return ""
    }
    fconfigure $fp -translation binary
    set imgData [read $fp [file size $name]]
    close $fp
    return $imgData
}

# Write binary data to a file.
proc writeFile { str name } {
    set retVal [catch {open $name w} fp]
    if { $retVal != 0 } {
        P "\n\tERROR: Cannot open file $name for binary writing."
        IncrErrorCount
        return false
    }
    fconfigure $fp -translation binary
    puts -nonewline $fp $str
    close $fp
    return true
}

# Load image data directly from a file into a photo image.
# Uses command: image create photo -file "fileName"
proc readPhotoFromFile1 { name fmt } {
    PN "File read 1: "

    set sTime [clock clicks -milliseconds]
    set retVal [catch {image create photo -file $name} ph]
    if { $retVal != 0 } {
        P "\n\tWarning: Cannot detect image file format. Trying again with -format."
        P "\tError message: $ph"
        set retVal [catch {image create photo -file $name -format $fmt} ph]
        if { $retVal != 0 } {
            P "\tERROR: Cannot read image file with format option $fmt"
            P "\tError message: $ph"
            IncrErrorCount
            return ""
        }
    }
    set eTime [clock clicks -milliseconds]
    PN "[format "%.2f " [expr ($eTime - $sTime) / 1.0E3]]"
    return $ph
}

# Load image data directly from a file into a photo image.
# Uses commands: set ph [image create photo] ; $ph read "fileName"
# args maybe "-from ..." and/or "-to ..." option.
proc readPhotoFromFile2 { name fmt width height args } {
    PN "File read 2: "

    set sTime [clock clicks -milliseconds]
    if { $width < 0 && $height < 0 } {
        set ph [image create photo]
    } else {
        set ph [image create photo -width $width -height $height]
    }
    set retVal [catch {eval {$ph read $name} $args} errMsg]
    if { $retVal != 0 } {
        P "\n\tWarning: Cannot detect image file format. Trying again with -format."
        P "\tError message: $errMsg"
        set retVal [catch {eval {$ph read $name -format $fmt} $args} errMsg]
        if { $retVal != 0 } {
            P "\tERROR: Cannot read image file with format option $fmt"
            P "\tError message: $errMsg"
            IncrErrorCount
            return ""
        }
    }
    set eTime [clock clicks -milliseconds]
    PN "[format "%.2f " [expr ($eTime - $sTime) / 1.0E3]]"
    return $ph
}

# Load binary image data from a variable into a photo image.
# Uses command: image create photo -data $imgData
proc readPhotoFromString1 { str fmt args } {
    PN "String read 1: "

    set sTime [clock clicks -milliseconds]
    set retVal [catch {image create photo -data $str} ph]
    if { $retVal != 0 } {
        P "\n\tWarning: Cannot detect image file format. Trying again with -format."
        P "\tError message: $ph"
        set retVal [catch {image create photo -data $imgData -format $fmt} ph]
        if { $retVal != 0 } {
            P "\tERROR: Cannot create photo from binary image data."
            P "\tError message: $ph"
            IncrErrorCount
            return ""
        }
    }
    set eTime [clock clicks -milliseconds]
    PN "[format "%.2f " [expr ($eTime - $sTime) / 1.0E3]]"
    return $ph
}

# Load binary image data from a variable into a photo image.
# Uses command: set ph [image create photo] ; $ph put $imgData
proc readPhotoFromString2 { str fmt width height args } {
    PN "String read 2: "

    set sTime [clock clicks -milliseconds]
    if { $width < 0 && $height < 0 } {
        set ph [image create photo]
    } else {
        set ph [image create photo -width $width -height $height]
    }
    set retVal [catch {eval {$ph put $str} $args} errMsg]
    if { $retVal != 0 } {
        P "\n\tWarning: Cannot detect image string format. Trying again with -format."
        P "\tError message: $errMsg"
        set retVal [catch {eval {$ph put $str -format $fmt} $args} errMsg]
        if { $retVal != 0 } {
            P "\tERROR: Cannot read image string with format option: $fmt"
            P "\tError message: $errMsg"
            IncrErrorCount
            return ""
        }
    }
    set eTime [clock clicks -milliseconds]
    PN "[format "%.2f " [expr ($eTime - $sTime) / 1.0E3]]"
    return $ph
}

# Write photo image to file.
# Uses command: $ph write "fileName"
proc writePhotoToFile { ph name fmt del args } {
    PN "File write: "

    set sTime [clock clicks -milliseconds]
    set retVal [catch {eval {$ph write $name -format $fmt} $args} str]
    set eTime [clock clicks -milliseconds]

    if { $retVal != 0 } {
        P "\n\tERROR: Cannot write image file $name (Format: $fmt)"
        P "\tError message: $str"
        IncrErrorCount
        return ""
    }
    if { $del } {
        image delete $ph
    }
    PN "[format "%.2f " [expr ($eTime - $sTime) / 1.0E3]]"
    return $str
}

# Write photo image into binary string.
# Uses command: $ph data
proc writePhotoToString { ph fmt del args } {
    PN "String write: "

    set sTime [clock clicks -milliseconds]
    set retVal [catch {eval {$ph data -format $fmt} $args} str]
    set eTime [clock clicks -milliseconds]
    if { $retVal != 0 } {
        P "\n\tERROR: Cannot write image to string (Format: $fmt)"
        P "\tError message: $str"
        IncrErrorCount
        return ""
    }
    if { $del } {
        image delete $ph
    }
    PN "[format "%.2f " [expr ($eTime - $sTime) / 1.0E3]]"
    return $str
}

proc createErrImg {} {
    set retVal [catch {image create photo -data [unsupportedImg]} errImg]
    if { $retVal != 0 } {
        P "FATAL ERROR: Cannot load binary GIF image into canvas."
        P "             Test will be cancelled."
        exit 1
    }
    return $errImg
}

# Read the canvas content into a photo image.
# Uses the tkimg format "window".
proc getCanvasPhoto { canvId } {
    PN "Canvas photo: "
    set sTime [clock clicks -milliseconds]
    set retVal [catch {image create photo -format window -data $canvId} ph]
    set eTime [clock clicks -milliseconds]
    if { $retVal != 0 } {
        P "\n\tFATAL ERROR: Cannot create photo from canvas window."
        P "\tError message: $ph"
        exit 1
    }
    P "[format "%.2f secs" [expr ($eTime - $sTime) / 1.0E3]]"
    return $ph
}

proc delayedUpdate {} {
    if { $::tcl_platform(os) eq "Darwin" } {
        update idletasks
    } else {
        update
    }
    after 200
}

proc drawInfo { canvId x y color xsize } {
    set ysize 10
    $canvId create rectangle $x $y [expr $x + $xsize] [expr $y + $ysize] -fill $color
    delayedUpdate
}

proc drawTestCanvas { imgVersion} {
    array set colors {
        red     "#FF0000"
        green   "#00FF00"
        blue    "#0000FF"
        cyan    "#00FFFF"
        magenta "#FF00FF"
        yellow  "#FFFF00"
        black   "#000000"
        white   "#FFFFFF"
        gray    "#808080"
    }
    set tw .0Win
    toplevel $tw
    wm title $tw "Canvas window"
    wm geometry $tw "+0+30"

    set canvId $tw.c
    # Canvas size must not exceed 256 pixels, as the ICO format
    # does not support larger images.
    set width  250
    set height 230
    canvas $canvId -bg $colors(gray) -width $width -height $height -borderwidth 0 -highlightthickness 0
    pack $canvId

    P "Drawing color rectangles into canvas .."
    $canvId create rectangle 1 1 [expr $width - 1] [expr $height - 1] -outline $colors(black)
    $canvId create rectangle 3 3 [expr $width - 3] [expr $height - 3] -outline $colors(green) -width 2
    delayedUpdate

    drawInfo $canvId 10  10 $colors(red)     [expr $width - 20]
    drawInfo $canvId 10  30 $colors(green)   [expr $width - 20]
    drawInfo $canvId 10  50 $colors(blue)    [expr $width - 20]
    drawInfo $canvId 10  70 $colors(cyan)    [expr $width - 20]
    drawInfo $canvId 10  90 $colors(magenta) [expr $width - 20]
    drawInfo $canvId 10 110 $colors(yellow)  [expr $width - 20]
    drawInfo $canvId 10 130 $colors(black)   [expr $width - 20]
    drawInfo $canvId 10 150 $colors(white)   [expr $width - 20]

    return $canvId
}
