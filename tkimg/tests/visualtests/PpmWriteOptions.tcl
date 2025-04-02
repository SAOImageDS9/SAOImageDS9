package require Tk
package require img::ppm

puts "Using [expr $tcl_platform(pointerSize) *8]-bit Tcl [info patchlevel], Tk $::tk_patchLevel, img::ppm [package require img::ppm]"
catch { file mkdir testOut }

set imgFile [file join ".." "sourceimgs" "gray.pgm"]

# Read a PPM file into a photo image.
set imgRGB [image create photo -file $imgFile]

# Write PPM file using different -ascii option values.
set col 0
foreach asciiFlag [list true false] {
    set outFile [file join "testOut" "ppm-ascii-${asciiFlag}.pgm"]
    $imgRGB write $outFile -format [list PPM -ascii $asciiFlag -verbose ON]
    set img($asciiFlag) [image create photo -file $outFile -format [list PPM -verbose true]]
    label .img($asciiFlag) -image $img($asciiFlag) -compound top -relief ridge \
          -text "ppm -ascii $asciiFlag"
    grid .img($asciiFlag) -row 0 -column $col -padx 5 -pady 5 -sticky ew
    incr col
}

bind . <Escape> exit

if { [lindex $argv 0] eq "auto" } {
    update
    after 500
    exit
}
