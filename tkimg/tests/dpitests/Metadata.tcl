package require Tk
package require tablelist

set useImg false
set useJp2 false
set useChk false

proc CreateScrolledWidget { wType w args } {
    if { [winfo exists $w.par] } {
        destroy $w.par
    }
    ttk::frame $w.par
    pack $w.par -side top -fill both -expand 1

    $wType $w.par.widget \
       -xscrollcommand "$w.par.xscroll set" \
       -yscrollcommand "$w.par.yscroll set" {*}$args
    ttk::scrollbar $w.par.xscroll -command "$w.par.widget xview" -orient horizontal
    ttk::scrollbar $w.par.yscroll -command "$w.par.widget yview" -orient vertical
    set rowNo 0
    grid $w.par.widget $w.par.yscroll -sticky news
    grid $w.par.xscroll               -sticky ew

    grid rowconfigure    $w.par $rowNo -weight 1
    grid columnconfigure $w.par 0      -weight 1

    return $w.par.widget
}

proc CreateScrolledTablelist { w args } {
    return [CreateScrolledWidget tablelist::tablelist $w {*}$args]
}

proc CreateScrolledCanvas { w args } {
    return [CreateScrolledWidget canvas $w {*}$args]
}

proc ShowPreview { tableId canvasId inDir } {
    global gImg

    set ind [lindex [$tableId curselection] 0]
    set fileName [$tableId cellcget "$ind,1" -text]
    set fileName [file join $inDir $fileName]
    set w [$tableId cellcget "$ind,3" -text]
    set h [$tableId cellcget "$ind,4" -text]
    if { [file extension $fileName] eq ".b64" } {
        set retVal [catch {open $fileName r} fp]
        if { $retVal == 0 } {
            fconfigure $fp -translation binary
            set imgData [read $fp]
            close $fp
            set retVal [catch {set img [image create photo -data $imgData]} err]
        }
    } else {
        set retVal [catch {set img [image create photo -file $fileName]} err]
    }
    if { [info exists gImg] } {
        image delete $gImg
        unset gImg
    }
    if { $retVal == 0 } {
        $canvasId itemconfigure MyImage -image $img
        set iw [image width  $img]
        set ih [image height $img]
        $canvasId configure -scrollregion "0 0 $iw $ih"
        set gImg $img
    } else {
        $canvasId itemconfigure MyImage -image {}
    }
}

frame .fr
pack .fr -side left -expand true -fill both

frame .fr.tableFr
frame .fr.canvasFr
grid .fr.tableFr  -row 0 -column 0 -sticky news
grid .fr.canvasFr -row 1 -column 0 -sticky news
grid rowconfigure    .fr 1 -weight 1
grid columnconfigure .fr 0 -weight 1

set tableId [CreateScrolledTablelist .fr.tableFr \
    -height 20 -width 150 \
    -columns {0 "#"             "right"
              0 "File name"     "left"
              0 "Format"        "left"
              0 "Width"         "right"
              0 "Height"        "right"
              0 "XDPI"          "right"
              0 "YDPI"          "right"
              0 "Metadata dict" "left" } \
            -stretch 7 \
            -labelcommand tablelist::sortByColumn \
            -selectmode single \
            -showseparators true]
$tableId columnconfigure 0 -showlinenumbers true
$tableId columnconfigure 1 -sortmode dictionary
$tableId columnconfigure 2 -sortmode dictionary
$tableId columnconfigure 3 -sortmode integer
$tableId columnconfigure 4 -sortmode integer
$tableId columnconfigure 5 -sortmode real
$tableId columnconfigure 6 -sortmode real

set canvasId [CreateScrolledCanvas .fr.canvasFr \
    -width 500 -height 300 \
    -borderwidth 0 -highlightthickness 0]
$canvasId create image 0 0 -anchor nw -tags "MyImage"

set catchVal [catch { image metadata -data "1234" }]
if { $catchVal != 0 } {
    puts "Tk does not have experimental \"image metadata\" command."
    exit
}

set curArg 0
while { $curArg < $argc } {
    set curParam [lindex $argv $curArg]
    if { [string first "--" $curParam] == 0 } {
        set curParam [string range $curParam 1 end]
    }
    if { $curParam eq "-img" } {
        set useImg true
    } elseif { $curParam eq "-jp2" } {
        set useJp2 true
    } elseif { $curParam eq "-chk" } {
        set useChk true
    } elseif { $curParam eq "-dir" } {
        incr curArg
        set inDir [file normalize [lindex $argv $curArg]]
    } elseif { $curParam eq "-help" } {
        puts "$argv0 -img -jp2 -chk -dir <dir>"
        exit
    }
    incr curArg
}

set msg "Using Tk "
if { $useImg } {
    package require Img
    package require img::raw
    package require img::flir
    package require img::dted
    append msg "+ Img "
}
if { $useJp2 } {
    package require imgjp2
    append msg "+ JP2 "
}
wm title . $msg

if { ! [info exists inDir] } {
    set inDir [file join ".." "testimgs"]
}

bind $tableId <<TablelistSelect>> [list ShowPreview $tableId $canvasId $inDir]
bind . <Escape> exit

update

set count 0
foreach fileName [lsort -dictionary [glob -nocomplain "$inDir/*"]] {
    if { [file isdirectory $fileName] } {
        continue
    }
    set err ""
    if { [file extension $fileName] eq ".base64" } {
        # Files with extension ".base64" are for tcltests only.
        continue
    } elseif { [file extension $fileName] eq ".b64" } {
        puts "image metadata -data $fileName"
        set retValMeta [catch {open $fileName r} fp]
        if { $retValMeta == 0 } {
            fconfigure $fp -translation binary
            set imgData [read $fp]
            close $fp
            set metaDict [image metadata -data $imgData]
            if { $useChk } {
                set retValImg [catch {set phImg [image create photo -data $imgData]} err]
                if { $retValImg == 0 } {
                    set imgDict [$phImg cget -metadata]
                    image delete $phImg
                }
            }
        }
    } else {
        puts "image metadata -file $fileName"
        set metaDict [image metadata -file $fileName]
        if { $useChk } {
            set retValImg [catch {set phImg [image create photo -file $fileName]} err]
            if { $retValImg == 0 } {
                set imgDict [$phImg cget -metadata]
                image delete $phImg
            }
        }
    }
    set pureName [file tail $fileName]
    if { [info exists metaDict] && [dict exists $metaDict "format"] } {
        set fmt [dict get $metaDict "format"]
        set w   [dict get $metaDict "width"]
        set h   [dict get $metaDict "height"]
        set xdpi -1
        set ydpi -1
        if { [dict exists $metaDict "DPI"] } {
            set xdpi [dict get $metaDict "DPI"]
        }
        if { [dict exists $metaDict "aspect"] } {
            set aspect [dict get $metaDict "aspect"]
            set ydpi [expr { $xdpi / $aspect }]
        } else {
            set ydpi $xdpi
        }
        if { $xdpi >= 0.0 } {
            set xdpi [expr {int ($xdpi + 0.5) }]
        }
        if { $ydpi >= 0.0 } {
            set ydpi [expr {int ($ydpi + 0.5) }]
        }
        $tableId insert end [list "" $pureName $fmt $w $h $xdpi $ydpi $metaDict]

        if { [info exists imgDict] && [dict exists $imgDict "DPI"] } {
            set xdpiImg [dict get $imgDict "DPI"]
            if { $xdpi != $xdpiImg } {
                $tableId cellconfigure "end,5" -background red
                puts "Error XDPI: $pureName $xdpi $xdpiImg"
            }
        }

        if { [info exists imgDict] && [dict exists $imgDict "aspect"] } {
            set aspectImg [dict get $imgDict "aspect"]
            set ydpiImg   [expr { $xdpiImg / $aspectImg }]
            if { $ydpi != $ydpiImg } {
                $tableId cellconfigure "end,6" -background red
                puts "Error YDPI: $pureName $ydpi $ydpiImg"
            }
        }
    } else {
        $tableId insert end [list "" $pureName "" "" "" "" "" $err]
    }
    $tableId see end
    incr count
    if { $count % 20 == 0 } {
        update
    }
}
$tableId see 0
update
