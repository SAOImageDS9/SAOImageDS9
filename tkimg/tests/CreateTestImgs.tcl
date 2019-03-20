package require base64
package require Img
package require img::dted
package require img::raw

# Red Green Blue Cyan Magenta Yellow Magenta Black White
set colorList {
    "#FF0000" 
    "#00FF00" 
    "#0000FF" 
    "#00FFFF" 
    "#FF00FF" 
    "#FFFF00" 
    "#000000" 
    "#FFFFFF" 
}

set fmtList {
    "bmp"  ".bmp" ""
    "gif"  ".gif" ""
    "ico"  ".ico" ""
    "jpeg" ".jpg" ""
    "pcx"  ".pcx" ""
    "png"  ".png" ""
    "ppm"  ".ppm" ""
    "raw"  ".raw" "-useheader true -nomap true -nchan 3"
    "sgi"  ".rgb" ""
    "sun"  ".ras" ""
    "tga"  ".tga" ""
    "tiff" ".tif" ""
    "xbm"  ".xbm" ""
    "xpm"  ".xpm" ""
}

proc DrawBmpRect { img xs ys w h mask } {
    set scanline [list]
    for { set x 0 } { $x < $w } { incr x } {
        for { set y 0 } { $y < $h } { incr y } {
            $img put "#FFFFFF" -to [expr $xs + $x] [expr $ys + $y]
            $img transparency set [expr $xs + $x] [expr $ys + $y] $mask
        }
    }
}

proc DrawPhotoRect { img xs ys w h color } {
    set scanline [list]
    for { set x 0 } { $x < $w } { incr x } {
        lappend scanline $color
    }
    set data [list]
    lappend data $scanline
    for { set y 0 } { $y < $h } { incr y } {
        $img put $data -to $xs [expr $ys + $y]
    }
}

proc WriteBase64File { fileName base64Data { varName "imgdata" } } {
    puts "WriteBase64Data $fileName"
    set fp [open $fileName w]
    puts -nonewline $fp "set $varName \\\n\{"
    puts -nonewline $fp $base64Data
    puts $fp "\}"
    close $fp
}

proc ReadImgData { fileName } {
    set retVal [catch {open $fileName r} fp]
    if { $retVal == 0 } {
        fconfigure $fp -translation binary
        set imgData [read $fp]
        close $fp
        set base64Data [::base64::encode -maxlen 72 $imgData]
        return $base64Data
    } else {
        error "Could not read $fileName"
    }
}

set wr 5
set hr 7

set h $hr
set w [expr $wr * [llength $colorList]]


set photo [image create photo -width $w -height $h]
set bmp   [image create photo -width $w -height $h]

set x 0
set y 0
foreach color $colorList {
    DrawPhotoRect $photo $x $y $wr $hr $color
    set x [expr $x + $wr]
}

set x 0
set y 0
set mask false
foreach color $colorList {
    DrawBmpRect $bmp $x $y $wr $hr $mask
    set x [expr $x + $wr]
    set mask [expr ! $mask]
}

foreach { fmt ext opt } $fmtList {
    set fileName "testimgs/img$ext"
    puts "Generate image $fileName"
    if { $fmt eq "xbm" } {
        $bmp write $fileName -format $fmt
    } else {
        $photo write $fileName -format "$fmt $opt"
    }

    if { $fmt eq "xpm" } {
        # TODO: XPM should write as base64, too.
        set base64Data [$photo data -format $fmt]
    } elseif { $fmt eq "xbm" } {
        set base64Data [$bmp data -format $fmt]
    } else {
        set base64Data [ReadImgData $fileName]
    }
    WriteBase64File "$fileName.base64" $base64Data
}

set fileName "testimgs/img2.jpg"
image create photo jpg2 -file "testimgs/img.jpg"
puts "Generate image $fileName"
jpg2 write $fileName -format jpeg
set base64Data [ReadImgData $fileName]
WriteBase64File "$fileName.base64" $base64Data "imgdata2"

set fileName "testimgs/img.dt0"
puts "Generate image $fileName"
file copy -force "e10n48.dt0" $fileName
set base64Data [ReadImgData $fileName]
WriteBase64File "$fileName.base64" $base64Data

exit 0
