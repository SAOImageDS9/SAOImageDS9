package require Tk
package require img::ico

puts "Using [expr $tcl_platform(pointerSize) *8]-bit Tcl [info patchlevel], Tk $::tk_patchLevel, img::ico [package require img::ico]"
catch { file mkdir testOut }

set imgFile [file join ".." "sourceimgs" "img.ico"]

# Read a ICO file into a photo image.
set imgRGB [image create photo -file $imgFile]

# Write ICO file using verbose option.
set outFile [file join "testOut" "ico.ico"]
$imgRGB write $outFile -format [list ICO -verbose ON]
set img [image create photo -file $outFile -format [list ICO -verbose true]]
label .img -image $img -compound top -relief ridge -text "ICO -verbose 1"
grid .img -row 0 -column 0 -padx 5 -pady 5 -sticky ew

bind . <Escape> exit

if { [lindex $argv 0] eq "auto" } {
    update
    after 500
    exit
}
