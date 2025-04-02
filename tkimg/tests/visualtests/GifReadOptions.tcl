package require Tk
package require img::gif

puts "Using [expr $tcl_platform(pointerSize) *8]-bit Tcl [info patchlevel], Tk $::tk_patchLevel, img::gif [package require img::gif]"

set imgFile [file join ".." "sourceimgs" "smiley.gif"]

proc CheckIndex { fileName fmt ind } {
    set retVal [catch {image create photo -file $fileName -format "$fmt -index $ind"} phImg]
    if { $retVal == 0 } {
        image delete $phImg
        return true
    }
    return false
}

proc GetNumPages { fileName fmt } {
    if { [CheckIndex $fileName $fmt 1] } {
        set ind 5
        while { [CheckIndex $fileName $fmt $ind] } {
            incr ind 5
        }
        incr ind -1
        while { ! [CheckIndex $fileName $fmt $ind] } {
            incr ind -1
        }
        return [expr { $ind + 1 }]
    }
    return 1
}

# Determine the number of pages of the animated GIF.
set numPages [GetNumPages $imgFile GIF]

# Extract all pages of the GIF file and display in a label.
for { set n 0 } { $n < $numPages } { incr n } {
    set img($n) [image create photo -file $imgFile -format [list GIF -index $n]]
    label .img_$n -image $img($n) -compound top -relief ridge -text "GIF -index $n"
    pack .img_$n -side left -padx 10
}

bind . <Escape> exit

if { [lindex $argv 0] eq "auto" } {
    update
    after 500
    exit
}
