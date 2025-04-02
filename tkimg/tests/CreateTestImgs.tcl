package require Img
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

set wr 5
set hr 7

set h $hr
set w [expr $wr * [llength $colorList]]

set xres [expr $w * 2]
set yres [expr $h * 2]

set fmtList [list \
    "img" "bmp"  ".bmp" ""                                      \
    "img" "gif"  ".gif" ""                                      \
    "img" "ico"  ".ico" ""                                      \
    "img" "jpeg" ".jpg" ""                                      \
    "img" "pcx"  ".pcx" ""                                      \
    "img" "png"  ".png" ""                                      \
    "img" "ppm"  ".ppm" ""                                      \
    "img" "raw"  ".raw" "-useheader true -nchan 3"              \
    "img" "sgi"  ".rgb" ""                                      \
    "img" "sun"  ".ras" ""                                      \
    "img" "tga"  ".tga" ""                                      \
    "img" "tiff" ".tif" ""                                      \
    "img" "xbm"  ".xbm" ""                                      \
    "img" "xpm"  ".xpm" ""                                      \
    "dpi" "bmp"  ".bmp" "-xresolution $xres -yresolution $yres" \
    "dpi" "jpeg" ".jpg" "-xresolution $xres -yresolution $yres" \
    "dpi" "pcx"  ".pcx" "-xresolution $xres -yresolution $yres" \
    "dpi" "png"  ".png" "-xresolution $xres -yresolution $yres" \
    "dpi" "tiff" ".tif" "-xresolution $xres -yresolution $yres" \
]

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

foreach { name fmt ext opt } $fmtList {
    set fileName "testimgs/$name$ext"
    puts "Generate image $fileName"
    if { $fmt eq "xbm" } {
        $bmp write $fileName -format $fmt
    } else {
        $photo write $fileName -format "$fmt $opt"
    }
}

set fileName "testimgs/img2.jpg"
image create photo jpg2 -file "testimgs/img.jpg"
puts "Generate image $fileName"
jpg2 write $fileName -format jpeg

set fileName "testimgs/img.jp2"
puts "Generate image $fileName"
file copy -force "sourceimgs/img.jp2" $fileName

set fileName "testimgs/img.dt0"
puts "Generate image $fileName"
file copy -force "sourceimgs/e10n48.dt0" $fileName

set fileName "testimgs/img.fpf"
puts "Generate image $fileName"
file copy -force "sourceimgs/example1.fpf" $fileName

set fileName "testimgs/img.svg"
puts "Generate image $fileName"
file copy -force "sourceimgs/img.svg" $fileName

# Create PostScript file.
set fileName "testimgs/img.ps"
puts "Generate image $fileName"
canvas .c -borderwidth 0 -highlightthickness 0 -width $w -height $h
.c create image 0 0 -image $photo -anchor nw
pack .c
update
.c postscript -file $fileName -height $h -width $w -pageanchor nw -pagewidth 40  -pagex 40 -pagey 7

# Replace line specifying BoundingBox manually with the following values:
# %%BoundingBox: 40 0 80 7

# Create PDF file.
# PDF file img.pdf was created manually using IrfanView.

exit 0
