package require Tk
package require img::flir

puts "Using [expr $tcl_platform(pointerSize) *8]-bit Tcl [info patchlevel], Tk $::tk_patchLevel, img::flir [package require img::flir]"

set imgFile [file join ".." "sourceimgs" "flir.fpf"]
# The value range of the FLIR file is 267.7 .. 294.0.

# Read a FLIR file into a photo image.
set imgPlain [image create photo -file $imgFile -format FLIR]

# Read a FLIR file into a photo image using option "-gamma".
set imgGamma2 [image create photo -file $imgFile -format [list FLIR -gamma 2.0 -verbose true]]
set imgGamma5 [image create photo -file $imgFile -format [list FLIR -gamma 0.5 -verbose true]]

# Read a FLIR file into a photo image using options "-min" and "-max".
set imgMinMax1 [image create photo -file $imgFile -format [list FLIR -min 100 -max 400 -verbose true]]
set imgMinMax2 [image create photo -file $imgFile -format [list FLIR -min 200 -max 300 -verbose true]]
set imgMinMax3 [image create photo -file $imgFile -format [list FLIR -min 275 -max 285 -verbose true]]

# Read a FLIR file into a photo image using option "-map agc".
set imgAgc1 [image create photo -file $imgFile -format [list FLIR -map agc -verbose true]]

# Read a FLIR file into a photo image using options "-map agc" and "-saturation".
set imgAgc2 [image create photo -file $imgFile -format [list FLIR -map agc -saturation 275 -verbose true]]

# Read a FLIR file into a photo image using options "-map agc" and "-cutoff".
set imgAgc3 [image create photo -file $imgFile -format [list FLIR -map agc -cutoff 0 -verbose true]]

# Read a FLIR file into a photo image using option "-map none".
set imgNone [image create photo -file $imgFile -format [list FLIR -map none -verbose true]]

label .imgPlain  -image $imgPlain  -compound top -relief ridge -text "FLIR"
label .imgGamma2 -image $imgGamma2 -compound top -relief ridge -text "FLIR -gamma 2.0"
label .imgGamma5 -image $imgGamma5 -compound top -relief ridge -text "FLIR -gamma 0.5"

label .imgMinMax1 -image $imgMinMax1 -compound top -relief ridge -text "FLIR -min 100 -max 400"
label .imgMinMax2 -image $imgMinMax2 -compound top -relief ridge -text "FLIR -min 200 -max 300"
label .imgMinMax3 -image $imgMinMax3 -compound top -relief ridge -text "FLIR -min 275 -max 285"

label .imgAgc1 -image $imgAgc1 -compound top -relief ridge -text "FLIR -map agc"
label .imgAgc2 -image $imgAgc2 -compound top -relief ridge -text "FLIR -map agc -saturation 275"
label .imgAgc3 -image $imgAgc3 -compound top -relief ridge -text "FLIR -map agc -cutoff 0"

label .imgNone -image $imgNone -compound top -relief ridge -text "FLIR -map none"

grid .imgPlain  .imgMinMax1 .imgAgc1 .imgNone  -padx 5 -pady 4 -sticky ew
grid .imgGamma2 .imgMinMax2 .imgAgc2  -padx 5 -pady 4 -sticky ew
grid .imgGamma5 .imgMinMax3 .imgAgc3  -padx 5 -pady 4 -sticky ew

bind . <Escape> exit

if { [lindex $argv 0] eq "auto" } {
    update
    after 500
    exit
}
