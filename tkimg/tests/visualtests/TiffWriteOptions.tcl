package require Tk
package require img::tiff

puts "Using [expr $tcl_platform(pointerSize) *8]-bit Tcl [info patchlevel], Tk $::tk_patchLevel, img::tiff [package require img::tiff]"
catch { file mkdir testOut }

set imgFile [file join ".." "sourceimgs" "multi.tif"]

# Read a TIFF file into a photo image.
set imgRGB [image create photo -file $imgFile]

# Write TIFF file using different -compression and -byteorder option values.
set row 0
set col 0
foreach order [list "none" "bigendian" "littleendian" "network" "smallendian"] {
    foreach compr [list "none" "jpeg" "packbits" "deflate"] {
	set outFile [file join "testOut" "tiff-compr-${compr}-order-${order}.tif"]
	$imgRGB write $outFile -format [list TIFF -compression $compr -byteorder $order -verbose ON]
	set img(rgba-$compr-$order) [image create photo -file $outFile] 
	label .img(rgba-$compr-$order) -image $img(rgba-$compr-$order) -compound top -relief ridge \
	      -text "TIFF -compression $compr -byteorder $order"
	grid .img(rgba-$compr-$order) -row $row -column $col -padx 5 -pady 4 -sticky ew
	incr col
    }
    incr row
    set col 0
}

# Write TIFF file using -resolution option.
set outFile [file join "testOut" "tiff-res.tif"]
$imgRGB write $outFile -format [list TIFF -verbose ON -resolution 100]
set imgSave [image create photo -file $outFile -format [list TIFF -verbose true]]
label .img_res -image $imgSave -compound top -relief ridge -text "TIFF -resolution 100"
grid .img_res -row $row -column 0 -padx 5 -pady 5 -sticky ew

# Write TIFF file using -xresolution option.
set outFile [file join "testOut" "tiff-xres.tif"]
$imgRGB write $outFile -format [list TIFF -verbose ON -xresolution 100]
set imgSave [image create photo -file $outFile -format [list TIFF -verbose true]]
label .img_xres -image $imgSave -compound top -relief ridge -text "TIFF -xresolution 100"
grid .img_xres -row $row -column 1 -padx 5 -pady 5 -sticky ew

# Write TIFF file using -xresolution and -yresolution options.
set outFile [file join "testOut" "tiff-xyres.tif"]
$imgRGB write $outFile -format [list TIFF -verbose ON -xresolution 100 -yresolution 50]
set imgSave [image create photo -file $outFile -format [list TIFF -verbose true]]
label .img_xyres -image $imgSave -compound top -relief ridge -text "TIFF -xresolution 100 -yresolution 50"
grid .img_xyres -row $row -column 2 -padx 5 -pady 5 -sticky ew

bind . <Escape> exit

if { [lindex $argv 0] eq "auto" } {
    update
    after 500
    exit
}
