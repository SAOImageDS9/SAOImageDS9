package require Tk
package require img::tga

puts "Using [expr $tcl_platform(pointerSize) *8]-bit Tcl [info patchlevel], Tk $::tk_patchLevel, img::tga [package require img::tga]"
catch { file mkdir testOut }

set imgFile [file join ".." "sourceimgs" "tree.tga"]

# Read a Targa file into a photo images.
set imgRGBA [image create photo -file $imgFile]

# Read a Targa file into a photo image using option "-withalpha 0".
set imgRGB [image create photo -file $imgFile -format [list TGA -matte 0 -verbose true]]

# Write Targa RGBA file using different -compression and -withalpha option values.
set row 0
foreach withalpha [list 0 1] {
    foreach compr [list "none" "rle"] {
	set outFile [file join "testOut" "tga-compr-${compr}-alpha-${withalpha}.rgba"]
	$imgRGBA write $outFile -format [list TGA -compression $compr -withalpha $withalpha -verbose ON]
	set img(rgba-$compr-$withalpha) [image create photo -file $outFile] 
	label .img(rgba-$compr-$withalpha) -image $img(rgba-$compr-$withalpha) -compound top -relief ridge \
	      -text "rgba -compression $compr -withalpha $withalpha"
	grid .img(rgba-$compr-$withalpha) -row $row -column 0 -padx 2 -pady 4 -sticky ew
	incr row
    }
}

# Write Targa RGB file using different -compression and -withalpha option values.
set row 0
foreach withalpha [list 0 1] {
    foreach compr [list "none" "rle"] {
	set outFile [file join "testOut" "tga-compr-${compr}-alpha-${withalpha}.rgb"]
	$imgRGB write $outFile -format [list TGA -compression $compr -withalpha $withalpha -verbose 1]
	set img(rgb-$compr-$withalpha) [image create photo -file $outFile] 
	label .img(rgb-$compr-$withalpha) -image $img(rgb-$compr-$withalpha) -compound top -relief ridge \
	      -text "rgb -compression $compr -withalpha $withalpha"
	grid .img(rgb-$compr-$withalpha) -row $row -column 1 -padx 2 -pady 4 -sticky ew
	incr row
    }
}

bind . <Escape> exit

if { [lindex $argv 0] eq "auto" } {
    update
    after 500
    exit
}
