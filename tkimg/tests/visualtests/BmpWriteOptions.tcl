package require Tk
package require img::bmp

puts "Using [expr $tcl_platform(pointerSize) *8]-bit Tcl [info patchlevel], Tk $::tk_patchLevel, img::bmp [package require img::bmp]"
catch { file mkdir testOut }

# The BMP file does not contain resolution information.
set imgFile [file join ".." "sourceimgs" "fractal.bmp"]

# Read a BMP file into a photo image.
set imgRGB [image create photo -file $imgFile]

# Write BMP file using no resolution options.
set outFile [file join "testOut" "bmp-nores.bmp"]
$imgRGB write $outFile -format [list BMP -verbose ON]
set img [image create photo -file $outFile -format [list BMP -verbose true]]
label .img_nores -image $img -compound top -relief ridge -text "BMP"
grid .img_nores -row 0 -column 0 -padx 5 -pady 5 -sticky ew

if { [package vsatisfies $::tk_patchLevel "8.7-"] } {
    # Set resolution metadata and write BMP using no resolution options.
    $imgRGB configure -metadata { DPI 200 aspect 2 }
    set outFile [file join "testOut" "bmp-meta.bmp"]
    $imgRGB write $outFile -format [list BMP -verbose ON]
    set img [image create photo -file $outFile -format [list BMP -verbose true]]
    label .img_meta -image $img -compound top -relief ridge -text "BMP with metadata"
} else {
    label .img_meta -compound top -relief ridge -text "No metadata"
}
grid .img_meta -row 0 -column 1 -padx 5 -pady 5 -sticky ew

# Write BMP file using -resolution option.
set outFile [file join "testOut" "bmp-res.bmp"]
$imgRGB write $outFile -format [list BMP -verbose ON -resolution 100]
set img [image create photo -file $outFile -format [list BMP -verbose true]]
label .img_res -image $img -compound top -relief ridge -text "BMP -resolution 100"
grid .img_res -row 1 -column 0 -padx 5 -pady 5 -sticky ew

# Write BMP file using -xresolution option.
set outFile [file join "testOut" "bmp-xres.bmp"]
$imgRGB write $outFile -format [list BMP -verbose ON -xresolution 100]
set img [image create photo -file $outFile -format [list BMP -verbose true]]
label .img_xres -image $img -compound top -relief ridge -text "BMP -xresolution 100"
grid .img_xres -row 1 -column 1 -padx 5 -pady 5 -sticky ew

# Write BMP file using -xresolution and -yresolution options.
set outFile [file join "testOut" "bmp-xyres.bmp"]
$imgRGB write $outFile -format [list BMP -verbose ON -xresolution 100 -yresolution 50]
set img [image create photo -file $outFile -format [list BMP -verbose true]]
label .img_xyres -image $img -compound top -relief ridge -text "BMP -xresolution 100 -yresolution 50"
grid .img_xyres -row 2 -column 0 -padx 5 -pady 5 -sticky ew -columnspan 2

bind . <Escape> exit

if { [lindex $argv 0] eq "auto" } {
    update
    after 500
    exit
}
