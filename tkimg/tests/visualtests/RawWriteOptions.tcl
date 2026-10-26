package require Tk
package require img::raw

puts "Using [expr $tcl_platform(pointerSize) *8]-bit Tcl [info patchlevel], Tk $::tk_patchLevel, img::raw [package require img::raw]"
catch { file mkdir testOut }

set imgFile [file join ".." "rawimgs" "byte-4chan-td.raw"]

# Read a RAW file into a photo image.
set imgRGBA [image create photo -file $imgFile]

# Read a RAW file into a photo image using option "-withalpha 0".
set imgRGB [image create photo -file $imgFile -format [list RAW -withalpha 0 -verbose true]]

# Write RAW RGBA file using different -scanorder and -withalpha option values.
set row 0
foreach withalpha [list 0 1] {
    foreach scanorder [list "TopDown" "BottomUp"] {
        set outFile [file join "testOut" "raw-so-${scanorder}-alpha-${withalpha}.raw"]
        $imgRGBA write $outFile -format [list RAW -scanorder $scanorder -withalpha $withalpha -verbose ON]
        set img(rgba-$scanorder-$withalpha) [image create photo -file $outFile] 
        set imgScaled [image create photo]
        $imgScaled copy $img(rgba-$scanorder-$withalpha) -zoom 25
        label .img(rgba-$scanorder-$withalpha) -image $imgScaled -compound top -relief ridge \
              -text "rgba -scanorder $scanorder -withalpha $withalpha" -background magenta
        grid .img(rgba-$scanorder-$withalpha) -row $row -column 0 -padx 2 -pady 4 -sticky ew
        incr row
    }
}

# Write RAW RGB file using different -scanorder and -withalpha option values.
set row 0
foreach withalpha [list 0 1] {
    foreach scanorder [list "TopDown" "BottomUp"] {
	set outFile [file join "testOut" "raw-so-${scanorder}-alpha-${withalpha}.raw"]
	$imgRGB write $outFile -format [list RAW -scanorder $scanorder -withalpha $withalpha -verbose 1]
	set img(rgb-$scanorder-$withalpha) [image create photo -file $outFile] 
        set imgScaled [image create photo]
        $imgScaled copy $img(rgb-$scanorder-$withalpha) -zoom 25
	label .img(rgb-$scanorder-$withalpha) -image $imgScaled -compound top -relief ridge \
	      -text "rgb -scanorder $scanorder -withalpha $withalpha" -background magenta
	grid .img(rgb-$scanorder-$withalpha) -row $row -column 1 -padx 2 -pady 4 -sticky ew
	incr row
    }
}

bind . <Escape> exit

if { [lindex $argv 0] eq "auto" } {
    update
    after 500
    exit
}
