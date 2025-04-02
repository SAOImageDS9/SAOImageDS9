package require Tk
package require img::ps

source [file join "utils" "testUtil.tcl"]

puts "Using [expr $tcl_platform(pointerSize) *8]-bit Tcl [info patchlevel], Tk $::tk_patchLevel, img::ps [package require img::ps]"

if { ! [HaveGhostscript] } {
    puts "Skipping test because of missing ghostscript interpeter"
    exit
}

set imgFile [file join ".." "sourceimgs" "cawt.pdf"]

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

# Determine the number of pages of the multi-page PDF.
set numPages [GetNumPages $imgFile PDF]

# Read a PDF file into a photo image.
set imgNone [image create photo -file $imgFile -format PDF]
label .imgNone -image $imgNone -compound top -relief ridge -text "PDF"

# Read a PDF file into a photo image using option "-zoom".
set imgZoom [image create photo -file $imgFile -format [list PDF -zoom 0.5 0.9 -verbose true]]

label .imgZoom -image $imgZoom -compound top -relief ridge -text "PDF -zoom 0.5 0.9"

grid .imgNone .imgZoom -padx 2 -pady 4 -sticky sew -rowspan 4

# Read all pages from a PDF file into photo images using option "-index".
for { set n 0 } { $n < $numPages } { incr n } {
    set imgPage($n) [image create photo -file $imgFile -format [list PDF -zoom 0.25 0.25 -index $n -verbose true]]
    label .imgPage_$n -image $imgPage($n) -compound top -relief ridge -text "PDF -index $n"
    grid .imgPage_$n -row $n -column 2 -padx 2 -pady 4 -sticky sew
}

bind . <Escape> exit

if { [lindex $argv 0] eq "auto" } {
    update
    after 500
    exit
}
