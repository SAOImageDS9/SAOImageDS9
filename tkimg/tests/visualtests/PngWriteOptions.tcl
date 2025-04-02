package require Tk
package require img::png

puts "Using [expr $tcl_platform(pointerSize) *8]-bit Tcl [info patchlevel], Tk $::tk_patchLevel, img::png [package require img::png]"
catch { file mkdir testOut }

set imgFile [file join ".." "sourceimgs" "tree.png"]

# Read a PNG file into a photo image.
set imgRGBA [image create photo -file $imgFile]

# Read a PNG file into a photo image using option "-withalpha 0".
set imgRGB [image create photo -file $imgFile -format [list PNG -withalpha 0 -verbose true]]

set row 0

# Write PNG RGBA file using different -withalpha option values.
foreach withalpha [list 0 1] {
    set outFile [file join "testOut" "pnga-alpha-${withalpha}.png"]
    $imgRGBA write $outFile -format [list PNG -withalpha $withalpha -verbose ON]
    set img(rgba-$withalpha) [image create photo -file $outFile] 
    label .img(rgba-$withalpha) -image $img(rgba-$withalpha) -compound top -relief ridge \
          -text "rgba -withalpha $withalpha"
    grid .img(rgba-$withalpha) -row $row -column 0 -padx 2 -pady 4 -sticky ew
    incr row
}

# Write PNG RGB file using different -withalpha option values.
foreach withalpha [list 0 1] {
    set outFile [file join "testOut" "png-alpha-${withalpha}.png"]
    $imgRGB write $outFile -format [list PNG -withalpha $withalpha -verbose 1]
    set img(rgb-$withalpha) [image create photo -file $outFile] 
    label .img(rgb-$withalpha) -image $img(rgb-$withalpha) -compound top -relief ridge \
          -text "rgb -withalpha $withalpha"
    grid .img(rgb-$withalpha) -row $row -column 0 -padx 2 -pady 4 -sticky ew
    incr row
}

# Write PNG file using -resolution option.
set outFile [file join "testOut" "png-res.png"]
$imgRGBA write $outFile -format [list PNG -verbose ON -resolution 100]
set imgSave [image create photo -file $outFile -format [list PNG -verbose true]]
label .img_res -image $imgSave -compound top -relief ridge -text "PNG -resolution 100"
grid .img_res -row 0 -column 1 -padx 5 -pady 5 -sticky ew

# Write PNG file using -xresolution option.
set outFile [file join "testOut" "png-xres.png"]
$imgRGBA write $outFile -format [list PNG -verbose ON -xresolution 100]
set imgSave [image create photo -file $outFile -format [list PNG -verbose true]]
label .img_xres -image $imgSave -compound top -relief ridge -text "PNG -xresolution 100"
grid .img_xres -row 1 -column 1 -padx 5 -pady 5 -sticky ew

# Write PNG file using -xresolution and -yresolution options.
set outFile [file join "testOut" "png-xyres.png"]
$imgRGBA write $outFile -format [list PNG -verbose ON -xresolution 100 -yresolution 50]
set imgSave [image create photo -file $outFile -format [list PNG -verbose true]]
label .img_xyres -image $imgSave -compound top -relief ridge -text "PNG -xresolution 100 -yresolution 50"
grid .img_xyres -row 2 -column 1 -padx 5 -pady 5 -sticky ew

# Write PNG file using -tag options.
set outFile [file join "testOut" "png-tags.png"]
$imgRGBA write $outFile -format [list PNG -verbose ON -resolution 123 -tag Author Paul -tag Key2 Value2]
set imgSave [image create photo -file $outFile -format [list PNG -verbose true]]
label .img_tag -image $imgSave -compound top -relief ridge -text "PNG -tag"
grid .img_tag -row 3 -column 1 -padx 5 -pady 5 -sticky ew

bind . <Escape> exit

if { [lindex $argv 0] eq "auto" } {
    update
    after 500
    exit
}
