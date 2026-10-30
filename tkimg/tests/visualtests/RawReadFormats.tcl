package require Tk
package require img::raw

puts "Using [expr $tcl_platform(pointerSize) *8]-bit Tcl [info patchlevel], Tk $::tk_patchLevel, img::raw [package require img::raw]"

set imgDir [file join ".." "rawimgs"]

wm withdraw .

foreach withalpha [list 0 1] {
    set t .t_$withalpha
    toplevel $t
    wm title $t "Read using option -withalpha $withalpha"

    set col 0
    set count 1
    for { set chan 1 } { $chan <= 4 } { incr chan } {
        set imgFiles [lsort -dictionary [glob -nocomplain -directory $imgDir "*${chan}chan*.raw"]]
        set row 0
        foreach imgFile $imgFiles {
            set img [image create photo -file $imgFile -format [list RAW -verbose true -withalpha $withalpha]]
            set imgScaled [image create photo]
            $imgScaled copy $img -zoom 25
            label $t.img_$count -image $imgScaled -compound top -relief ridge -text "[file tail $imgFile]"
            if { $chan == 2 } {
                $t.img_$count configure -background magenta
            } elseif { $chan == 4 } {
                $t.img_$count configure -background magenta
            } else {
                $t.img_$count configure -background white
            }
            grid $t.img_$count -row $row -column $col -padx 5 -pady 4 -sticky ew
            incr row
            incr count
        }
        incr col
    }
    bind $t <Escape> exit
}

if { [lindex $argv 0] eq "auto" } {
    update
    after 500
    exit
}
