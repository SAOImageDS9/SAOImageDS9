package require Tk
package require img::raw

puts "Using [expr $tcl_platform(pointerSize) *8]-bit Tcl [info patchlevel], Tk $::tk_patchLevel, img::raw [package require img::raw]"

set imgFile [file join ".." "sourceimgs" "gray-WithHeader.raw"]
# The value range of the RAW file is 0.0 .. 65535.0.

# Read a RAW file into a photo image.
set imgPlain [image create photo -file $imgFile -format RAW]

# Read a RAW file into a photo image using option "-gamma".
set imgGamma2 [image create photo -file $imgFile -format [list RAW -gamma 2.0 -verbose true]]
set imgGamma5 [image create photo -file $imgFile -format [list RAW -gamma 0.5 -verbose true]]

# Read a RAW file into a photo image using options "-min" and "-max".
set imgMinMax1 [image create photo -file $imgFile -format [list RAW -min     0 -max 65535 -verbose true]]
set imgMinMax2 [image create photo -file $imgFile -format [list RAW -min     0 -max 30000 -verbose true]]
set imgMinMax3 [image create photo -file $imgFile -format [list RAW -min 10000 -max 50000 -verbose true]]

# Read a RAW file into a photo image using option "-map agc".
set imgAgc1 [image create photo -file $imgFile -format [list RAW -map agc -verbose true]]

# Read a RAW file into a photo image using options "-map agc" and "-saturation".
set imgAgc2 [image create photo -file $imgFile -format [list RAW -map agc -saturation 30000 -verbose true]]

# Read a RAW file into a photo image using options "-map agc" and "-cutoff".
set imgAgc3 [image create photo -file $imgFile -format [list RAW -map agc -cutoff 0 -verbose true]]

# Read a RAW file into a photo image using option "-map none".
set imgNone [image create photo -file $imgFile -format [list RAW -map none -verbose true]]

set imgFile [file join ".." "sourceimgs" "gray-NoHeader.raw"]
set imgNoHead1 [image create photo -file $imgFile -format [list RAW -useheader false -verbose true \
                -width 256 -height 256 -nchan 1 -byteorder Intel -scanorder TopDown -pixeltype float ]]
set imgNoHead2 [image create photo -file $imgFile -format [list RAW -useheader false -verbose true \
                -width 256 -height 256 -nchan 1 -byteorder Intel -scanorder BottomUp -pixeltype float ]]

label .imgPlain  -image $imgPlain  -compound top -relief ridge -text "RAW"
label .imgGamma2 -image $imgGamma2 -compound top -relief ridge -text "RAW -gamma 2.0"
label .imgGamma5 -image $imgGamma5 -compound top -relief ridge -text "RAW -gamma 0.5"

label .imgMinMax1 -image $imgMinMax1 -compound top -relief ridge -text "RAW -min 0 -max 65535"
label .imgMinMax2 -image $imgMinMax2 -compound top -relief ridge -text "RAW -min 0 -max 30000"
label .imgMinMax3 -image $imgMinMax3 -compound top -relief ridge -text "RAW -min 10000 -max 50000"

label .imgAgc1 -image $imgAgc1 -compound top -relief ridge -text "RAW -map agc"
label .imgAgc2 -image $imgAgc2 -compound top -relief ridge -text "RAW -map agc -saturation 30000"
label .imgAgc3 -image $imgAgc3 -compound top -relief ridge -text "RAW -map agc -cutoff 0"

label .imgNone -image $imgNone -compound top -relief ridge -text "RAW -map none"

label .imgNoHead1 -image $imgNoHead1 -compound top -relief ridge -text "RAW -useheader 0 -scanorder TopDown"
label .imgNoHead2 -image $imgNoHead2 -compound top -relief ridge -text "RAW -useheader 0 -scanorder BottomUp"

grid .imgPlain  .imgMinMax1 .imgAgc1 .imgNone     -padx 5 -pady 4 -sticky ew
grid .imgGamma2 .imgMinMax2 .imgAgc2 .imgNoHead1  -padx 5 -pady 4 -sticky ew
grid .imgGamma5 .imgMinMax3 .imgAgc3 .imgNoHead2  -padx 5 -pady 4 -sticky ew

bind . <Escape> exit

if { [lindex $argv 0] eq "auto" } {
    update
    after 500
    exit
}
