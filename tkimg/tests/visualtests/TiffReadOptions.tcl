package require Tk
package require img::tiff

puts "Using [expr $tcl_platform(pointerSize) *8]-bit Tcl [info patchlevel], Tk $::tk_patchLevel, img::tiff [package require img::tiff]"

set imgFile [file join ".." "sourceimgs" "multi.tif"]

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

# Determine the number of pages of the TIFF file and compare with metadata "numpages".
set numPages [GetNumPages $imgFile TIFF]
set img0 [image create photo -file $imgFile -format TIFF]
if { [package vsatisfies $::tk_patchLevel "8.7-"] } {
    set imgDict [$img0 cget -metadata]
    if { [dict exists $imgDict numpages] } {
        if { $numPages != [dict get $imgDict numpages] } {
            puts "Error: Metadata \"numpages\" not identical to result of GetNumPages."
        }
    } else {
        puts "Error: No metadata \"numpages\" available."
    }
}

# Extract all pages of the TIFF file and display in a label.
for { set n 0 } { $n < $numPages } { incr n } {
    set img($n) [image create photo -file $imgFile -format [list TIFF -verbose true -index $n]]
    label .img_$n -image $img($n) -compound top -relief ridge -text "TIFF -index $n"
    pack .img_$n -side left -padx 10
}

bind . <Escape> exit

if { [lindex $argv 0] eq "auto" } {
    update
    after 500
    exit
}
