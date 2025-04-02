package require Tk
package require img::dted

puts "Using [expr $tcl_platform(pointerSize) *8]-bit Tcl [info patchlevel], Tk $::tk_patchLevel, img::dted [package require img::dted]"

set imgFile [file join ".." "sourceimgs" "e10n48.dt0"]
# The value range of the DTED file is 372 .. 715.

# Read a DTED file into a photo image.
set imgPlain [image create photo -file $imgFile -format DTED]

# Read a DTED file into a photo image using option "-gamma".
set imgGamma2 [image create photo -file $imgFile -format [list DTED -gamma 2.0 -verbose true]]

# Read a DTED file into a photo image using option "-gamma".
set imgGamma5 [image create photo -file $imgFile -format [list DTED -gamma 0.5 -verbose true]]

# Read a DTED file into a photo image using options "-min" and "-max".
set imgMinMax1 [image create photo -file $imgFile -format [list DTED -min 0 -max 3000 -verbose true]]

# Read a DTED file into a photo image using options "-min" and "-max".
set imgMinMax2 [image create photo -file $imgFile -format [list DTED -min 0 -max 1000 -verbose true]]

# Read a DTED file into a photo image using options "-min" and "-max".
set imgMinMax3 [image create photo -file $imgFile -format [list DTED -min 400 -max 600 -verbose true]]

label .imgPlain  -image $imgPlain  -compound top -relief ridge -text "DTED"
label .imgGamma2 -image $imgGamma2 -compound top -relief ridge -text "DTED -gamma 2.0"
label .imgGamma5 -image $imgGamma5 -compound top -relief ridge -text "DTED -gamma 0.5"

label .imgMinMax1 -image $imgMinMax1 -compound top -relief ridge -text "DTED -min 0 -max 3000"
label .imgMinMax2 -image $imgMinMax2 -compound top -relief ridge -text "DTED -min 0 -max 1000"
label .imgMinMax3 -image $imgMinMax3 -compound top -relief ridge -text "DTED -min 400 -max 600"

grid .imgPlain   .imgGamma2  .imgGamma5   -padx 5 -pady 4 -sticky ew
grid .imgMinMax1 .imgMinMax2 .imgMinMax3  -padx 5 -pady 4 -sticky ew

bind . <Escape> exit

if { [lindex $argv 0] eq "auto" } {
    update
    after 500
    exit
}
