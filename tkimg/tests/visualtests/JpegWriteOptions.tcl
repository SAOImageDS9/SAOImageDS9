package require Tk
package require img::jpeg

puts "Using [expr $tcl_platform(pointerSize) *8]-bit Tcl [info patchlevel], Tk $::tk_patchLevel, img::jpeg [package require img::jpeg]"
catch { file mkdir testOut }

set imgFile [file join ".." "sourceimgs" "fractal.jpg"]

# Read a JPEG file into a photo image.
set imgIn [image create photo -file $imgFile]

# Write JPEG file using different -quality option values.
set row 0
foreach quality [list 0 25 50 75 100] {
    set outFile [file join "testOut" "jpeg-quality-${quality}.jpg"]
    $imgIn write $outFile -format [list JPEG -quality $quality -verbose true]
    set img(qu-$quality) [image create photo -file $outFile] 
    label .img(qu-$quality) -image $img(qu-$quality) -compound top -relief ridge -text "-quality $quality"
    grid .img(qu-$quality) -row $row -column 0 -padx 2 -pady 4 -sticky ew
    incr row
}

# Write JPEG file using different -smooth option values.
set row 0
foreach smooth [list 0 25 50 75 100] {
    set outFile [file join "testOut" "jpeg-smooth-${smooth}.jpg"]
    $imgIn write $outFile -format [list JPEG -smooth $smooth -verbose true]
    set img(sm-$smooth) [image create photo -file $outFile] 
    label .img(sm-$smooth) -image $img(sm-$smooth) -compound top -relief ridge -text "-smooth $smooth"
    grid .img(sm-$smooth) -row $row -column 1 -padx 2 -pady 4 -sticky ew
    incr row
}

# Write JPEG file using -grayscale option.
set row 0
set outFile [file join "testOut" "jpeg-grayscale.jpg"]
$imgIn write $outFile -format [list JPEG -grayscale -verbose true]
set img(gray) [image create photo -file $outFile] 
label .img(gray) -image $img(gray) -compound top -relief ridge -text "-grayscale"
grid .img(gray) -row $row -column 2 -padx 2 -pady 4 -sticky ew

# Write JPEG file using -optimize option.
incr row
set outFile [file join "testOut" "jpeg-optimize.jpg"]
$imgIn write $outFile -format [list JPEG -optimize -verbose true]
set img(opt) [image create photo -file $outFile] 
label .img(opt) -image $img(opt) -compound top -relief ridge -text "-optimize"
grid .img(opt) -row $row -column 2 -padx 2 -pady 4 -sticky ew

# Write JPEG file using -progressive option.
incr row
set outFile [file join "testOut" "jpeg-progressive.jpg"]
$imgIn write $outFile -format [list JPEG -progressive -verbose true]
set img(prog) [image create photo -file $outFile] 
label .img(prog) -image $img(prog) -compound top -relief ridge -text "-progressive"
grid .img(prog) -row $row -column 2 -padx 2 -pady 4 -sticky ew

bind . <Escape> exit

if { [lindex $argv 0] eq "auto" } {
    update
    after 500
    exit
}
