# Create images using 255 and 256 different colors and try to
# write them as GIF files. The 256 color image generates an error.

package require Tk
package require img::gif

puts "Using [expr $tcl_platform(pointerSize) *8]-bit Tcl [info patchlevel], Tk $::tk_patchLevel, img::gif [package require img::gif]"
catch { file mkdir testOut }

set imgFile [file join ".." "sourceimgs" "smiley.gif"]

# Read a GIF file into a photo image.
set imgRGB [image create photo -file $imgFile]

# Write GIF file using verbose option.
set outFile [file join "testOut" "gif.gif"]
$imgRGB write $outFile -format [list GIF -verbose ON]
set img [image create photo -file $outFile -format [list GIF -verbose true]]
label .img -image $img -compound top -relief ridge -text "GIF -verbose 1"
grid .img -row 0 -column 0 -padx 5 -pady 5 -sticky ew


# One color is used as transparent color.
# If we generate 255 different colors in the image,
# the GIF write should succeed.
set img255 [image create photo -width 256 -height 1]
$img255 blank
for { set i 0 } { $i < 255 } { incr i } {
    $img255 put [format "#%02X%02X%02X" $i $i $i] -to $i 0
}
set filePrefix "testOut/gif-255"
$img255 write "${filePrefix}.ppm" -format PPM
set retVal [catch {$img255 write "${filePrefix}.gif" -format GIF} errMsg]
if { $retVal != 0 } {
    puts "Should succeed: Error writing ${filePrefix}.gif: $errMsg"
} else {
    puts "Succeeded writing ${filePrefix}.gif"

}

# One color is used as transparent color.
# If we generate 256 different colors in the image,
# the GIF write should fail.
set img256 [image create photo -width 256 -height 1]
$img256 blank
for { set i 0 } { $i < 256 } { incr i } {
    $img256 put [format "#%02X%02X%02X" $i $i $i] -to $i 0
}
set filePrefix "testOut/gif-256"
$img256 write "${filePrefix}.ppm" -format PPM
set retVal [catch {$img256 write "${filePrefix}.gif" -format GIF} errMsg]
if { $retVal != 0 } {
    puts "Should fail: Error writing ${filePrefix}.gif: $errMsg"
} else {
    puts "Succeeded writing ${filePrefix}.gif"
}

bind . <Escape> exit

if { [lindex $argv 0] eq "auto" } {
    update
    after 500
    exit
}
