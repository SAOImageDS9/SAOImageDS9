package require Tk
package require img::xbm

puts "Using [expr $tcl_platform(pointerSize) *8]-bit Tcl [info patchlevel], Tk $::tk_patchLevel, img::xbm [package require img::xbm]"
catch { file mkdir testOut }

set imgFile [file join ".." "sourceimgs" "append.xbm"]

# Read a XBM file into a photo image.
set imgRGB [image create photo -file $imgFile]

# Write XBM file using verbose option.
set outFile [file join "testOut" "append.xbm"]
$imgRGB write $outFile -format [list XBM -verbose ON]
set img [image create photo -file $outFile -format [list XBM -verbose true]]
label .img -image $img -compound top -relief ridge -text "XBM -verbose 1"
grid .img -row 0 -column 0 -padx 5 -pady 5 -sticky ew

bind . <Escape> exit

if { [lindex $argv 0] eq "auto" } {
    update
    after 500
    exit
}
