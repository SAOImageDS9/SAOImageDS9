set TkVersion  [package require Tk]
set ImgVersion [package require Img]

puts "Using [expr $tcl_platform(pointerSize) *8]-bit Tcl [info patchlevel], Tk $TkVersion, Img $ImgVersion"

if { ! [package vsatisfies $::tk_patchLevel "8.7-"] } {
    puts "Image metadata available only with Tk 8.7 or newer."
    exit 0
}

proc Abs { a } {
    if { $a < 0.0 } {
        return [expr -1.0 * $a]
    } else {
        return $a
    }
}

proc CheckDpi { img xdpi ydpi fileName { msg "" } } {
    if { [lsearch -index 0 [$img configure] "-metadata"] >= 0 } {
        set imgDict [$img cget -metadata]
        set dpi    0.0
        set aspect 1.0
        if { [dict exists $imgDict DPI] } {
            set dpi [dict get $imgDict DPI]
        }
        if { [dict exists $imgDict aspect] } {
            set aspect [dict get $imgDict aspect]
        }
        set x $dpi
        set y $dpi
        if { $aspect != 0.0 } {
            set y [expr {$dpi / $aspect}]
        }
        if { [Abs [expr $x - $xdpi]] > 1E-3 || [Abs [expr $y - $ydpi]] > 1E-3 } {
            puts "Error in $msg: Have: $x $y Expected: $xdpi $ydpi ($fileName)"
        }
    } else {
        puts "CheckDpi $msg: -metadata not available"
    }
}

proc ConfigureDpi { img xdpi ydpi } {
    if { [lsearch -index 0 [$img configure] "-metadata"] >= 0 } {
        set dpi $xdpi
        set aspect 1.0
        if { $ydpi != 0.0 } {
            set aspect [expr {double ($xdpi) / double ($ydpi)}]
        }
        $img configure -metadata [dict create DPI $dpi aspect $aspect]
    } else {
        puts "ConfigureDpi: -metadata not available"
    }
}

set fmtList { "BMP" "JPEG" "PCX" "PNG" "TIFF" }
set extList { "bmp" "jpg"  "pcx" "png" "tif"  }

foreach fmt $fmtList ext $extList {
    set outDir "testOut/Output-$fmt"
    file mkdir $outDir

    puts "Testing format $fmt ..."

    # Read the reference PNG file with no DPI and generate
    # images in the current format with DPI information
    # using different write option combinations.
    set fNone [file join "Input" "DPI-000.png"]

    set img [image create photo -file $fNone]
    CheckDpi $img 0 0 $fNone "Test1_1"
    $img write [file join $outDir "DPI-000.$ext"]     -format "$fmt"
    $img write [file join $outDir "DPI-300.$ext"]     -format "$fmt -resolution 300"
    $img write [file join $outDir "DPI-300i.$ext"]    -format "$fmt -resolution 300i"
    $img write [file join $outDir "DPI-300p.$ext"]    -format "$fmt -resolution 4.16667p"
    $img write [file join $outDir "DPI-300c.$ext"]    -format "$fmt -resolution 762c"
    $img write [file join $outDir "DPI-300m.$ext"]    -format "$fmt -resolution 7620m"
    $img write [file join $outDir "DPI-150-100.$ext"] -format "$fmt -resolution 150 254c"
    $img write [file join $outDir "DPI-050-080.$ext"] -format "$fmt -resolution 50 80i"
    image delete $img

    # Now use the generated image files with no and 300 DPI
    # for reading and several tests.

    set fNone [file join $outDir "DPI-000.$ext"]
    set f300  [file join $outDir "DPI-300.$ext"]

    # Read and write file with no DPI information.
    set fOut [file join $outDir "Conv-000.$ext"]
    set img [image create photo -file $fNone]
    CheckDpi $img 0 0 $fNone "Test2_1"
    $img write $fOut -format $fmt
    CheckDpi $img 0 0 $fOut "Test2_2"
    image delete $img

    # Read and write file with 300 DPI information.
    set fOut [file join $outDir "Conv-300.$ext"]
    set img [image create photo -file $f300]
    CheckDpi $img 300 300 $f300 "Test3_1"
    $img write $fOut -format $fmt
    CheckDpi $img 300 300 $fOut "Test3_2"
    image delete $img

    # Read file with 300 DPI information and write out with 50 DPI.
    # Image DPI must not change.
    set fOut [file join $outDir "Conv-050.$ext"]
    set img [image create photo -file $f300]
    CheckDpi $img 300 300 $f300 "Test4_1"
    $img write $fOut -format "$fmt -resolution 50 50"
    CheckDpi $img 300 300 $fOut "Test4_2"
    image delete $img

    # Read file with 300 DPI information and configure image
    # to have DPI values of 70 and 80.
    set fOut [file join $outDir "Conv-070-080.$ext"]
    set img [image create photo -file $f300]
    CheckDpi $img 300 300 $f300 "Test5_1"
    ConfigureDpi $img 70 80
    $img write $fOut -format $fmt
    CheckDpi $img 70 80 $fOut "Test5_2"
    image delete $img

    # Read file with 300 DPI information using and existing
    # photo image and the "read" option.
    # Note, that read does not overwrite metadata information.
    set fOut [file join $outDir "Conv-Read.$ext"]
    set img [image create photo]
    ConfigureDpi $img 100 100
    CheckDpi $img 100 100 "Empty" "Test6_1"
    $img read $f300
    CheckDpi $img 100 100 $f300 "Test6_2"
    $img write $fOut -format $fmt
    CheckDpi $img 100 100 $fOut "Test6_3"

    # Read file with 300 DPI information using an existing
    # photo image and the "configure -file" option.
    set fOut [file join $outDir "Conv-Configure.$ext"]
    set img [image create photo]
    CheckDpi $img 0 0 "Empty" "Test7_1"
    $img configure -file $f300
    CheckDpi $img 300 300 $f300 "Test7_2"
    $img write $fOut -format $fmt
    CheckDpi $img 300 300 $fOut "Test7_3"

    # Read file with 300 DPI information and blank it.
    # Check, if blanking the image resets the DPI information.
    set img [image create photo -file $f300]
    CheckDpi $img 300 300 $f300 "Test8_1"
    $img blank
    CheckDpi $img 300 300 $fNone "Test8_2"
    image delete $img
}

exit 0
