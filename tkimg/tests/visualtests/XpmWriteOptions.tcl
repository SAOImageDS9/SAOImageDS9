package require Tk
package require img::xpm

puts "Using [expr $tcl_platform(pointerSize) *8]-bit Tcl [info patchlevel], Tk $::tk_patchLevel, img::xpm [package require img::xpm]"
catch { file mkdir testOut }

set imgFile [file join ".." "sourceimgs" "fractal.xpm"]

# Read a XPM file into a photo image.
set imgRGB [image create photo -file $imgFile]

# Write XPM file using verbose option.
set outFile [file join "testOut" "xpm.xpm"]
$imgRGB write $outFile -format [list XPM -verbose ON]
set img [image create photo -file $outFile -format [list XPM -verbose true]]
label .img -image $img -compound top -relief ridge -text "XPM -verbose 1"
grid .img -row 0 -column 0 -padx 5 -pady 5 -sticky ew

bind . <Escape> exit

if { [lindex $argv 0] eq "auto" } {
    update
    after 500
    exit
}
