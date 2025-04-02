package require Tk
package require img::pcx

puts "Using [expr $tcl_platform(pointerSize) *8]-bit Tcl [info patchlevel], Tk $::tk_patchLevel, img::pcx [package require img::pcx]"
catch { file mkdir testOut }

set imgFile [file join ".." "sourceimgs" "fractal.pcx"]

# Read a PCX file into a photo image.
set imgRGB [image create photo -file $imgFile]
set w [image width $imgRGB]
set h [image height $imgRGB]

# Write PCX file using different -compression option values.
set col 0
foreach compr [list "none" "rle"] {
    set outFile [file join "testOut" "pcx-compr-${compr}.pcx"]
    $imgRGB write $outFile -format [list PCX -compression $compr -verbose ON -xresolution $w -yresolution $h]
    set img($compr) [image create photo -file $outFile -format [list PCX -verbose true]]
    label .img($compr) -image $img($compr) -compound top -relief ridge \
          -text "pcx -compression $compr"
    grid .img($compr) -row 0 -column $col -padx 5 -pady 5 -sticky ew
    incr col
}

if { [package vsatisfies $::tk_patchLevel "8.7-"] } {
    # Set resolution metadata and write PCX using no resolution options.
    $imgRGB configure -metadata { DPI 200 aspect 2 }
    set outFile [file join "testOut" "pcx-meta.pcx"]
    $imgRGB write $outFile -format [list PCX -verbose ON]
    set imgSave [image create photo -file $outFile -format [list PCX -verbose true]]
    label .img_meta -image $imgSave -compound top -relief ridge -text "PCX with metadata"
} else {
    label .img_meta -compound top -relief ridge -text "No metadata"
}
grid .img_meta -row 1 -column 0 -padx 5 -pady 5 -sticky ew

# Write PCX file using -resolution option.
set outFile [file join "testOut" "pcx-res.pcx"]
$imgRGB write $outFile -format [list PCX -verbose ON -resolution 100]
set imgSave [image create photo -file $outFile -format [list PCX -verbose true]]
label .img_res -image $imgSave -compound top -relief ridge -text "PCX -resolution 100"
grid .img_res -row 1 -column 1 -padx 5 -pady 5 -sticky ew

# Write PCX file using -xresolution option.
set outFile [file join "testOut" "pcx-xres.pcx"]
$imgRGB write $outFile -format [list PCX -verbose ON -xresolution 100]
set imgSave [image create photo -file $outFile -format [list PCX -verbose true]]
label .img_xres -image $imgSave -compound top -relief ridge -text "PCX -xresolution 100"
grid .img_xres -row 2 -column 0 -padx 5 -pady 5 -sticky ew

# Write PCX file using -xresolution and -yresolution options.
set outFile [file join "testOut" "pcx-xyres.pcx"]
$imgRGB write $outFile -format [list PCX -verbose ON -xresolution 100 -yresolution 50]
set imgSave [image create photo -file $outFile -format [list PCX -verbose true]]
label .img_xyres -image $imgSave -compound top -relief ridge -text "PCX -xresolution 100 -yresolution 50"
grid .img_xyres -row 2 -column 1 -padx 5 -pady 5 -sticky ew -columnspan 2

bind . <Escape> exit

if { [lindex $argv 0] eq "auto" } {
    update
    after 500
    exit
}
