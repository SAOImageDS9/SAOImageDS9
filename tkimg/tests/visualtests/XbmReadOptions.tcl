package require Tk
package require img::xbm

puts "Using [expr $tcl_platform(pointerSize) *8]-bit Tcl [info patchlevel], Tk $::tk_patchLevel, img::xbm [package require img::xbm]"

proc _append {} {
    return {
        #define append_width 32
        #define append_height 32
        static char append_bits[] = {
          0x00, 0x00, 0x00, 0x00,
          0x00, 0x00, 0x00, 0x00,
          0x00, 0x00, 0x00, 0x00,
          0x00, 0x00, 0x00, 0x00,
          0xc0, 0xff, 0x3f, 0x00,
          0xc0, 0xff, 0x3f, 0x00,
          0xc0, 0x00, 0xf0, 0x00,
          0xc0, 0x00, 0xf0, 0x00,
          0xc0, 0x00, 0x30, 0x03,
          0xc0, 0x00, 0x30, 0x03,
          0xc0, 0x00, 0xf0, 0x0f,
          0xc0, 0x00, 0xf0, 0x0f,
          0xc0, 0x30, 0x00, 0x0c,
          0xc0, 0x30, 0x00, 0x0c,
          0xc0, 0xf0, 0x00, 0x0c,
          0xc0, 0xf0, 0x00, 0x0c,
          0xfc, 0xff, 0x03, 0x0c,
          0xfc, 0xff, 0x03, 0x0c,
          0xfc, 0xff, 0x03, 0x0c,
          0xfc, 0xff, 0x03, 0x0c,
          0xc0, 0xf0, 0x00, 0x0c,
          0xc0, 0xf0, 0x00, 0x0c,
          0xc0, 0x30, 0x00, 0x0c,
          0xc0, 0x30, 0x00, 0x0c,
          0xc0, 0x00, 0x00, 0x0c,
          0xc0, 0x00, 0x00, 0x0c,
          0xc0, 0x00, 0x00, 0x0c,
          0xc0, 0x00, 0x00, 0x0c,
          0xc0, 0xff, 0xff, 0x0f,
          0xc0, 0xff, 0xff, 0x0f,
          0x00, 0x00, 0x00, 0x00,
          0x00, 0x00, 0x00, 0x00};
    }
}

proc CreateErrorImage { width height } {
    set phImg [image create photo -width $width -height $height]
    set scanline [lrepeat $width "#A00000"]
    lset scanline [expr { $width/2 + 0 }] "#FFFF00"
    lset scanline [expr { $width/2 + 1 }] "#FFFF00"
    set data [list]
    lappend data $scanline
    for { set y 0 } { $y < $height } { incr y } {
        $phImg put $data -to 0 $y
    }
    return $phImg
}

proc append { succeedFlag type args } {
    puts "append $succeedFlag $type $args"
    if { $type eq "bitmap" } {
        set catchVal [catch {image create bitmap -data [_append] {*}$args} img]
    } else {
        set catchVal [catch {image create photo -data [_append] -format [list XBM {*}$args]} img]
    }
    if { $catchVal == 0 } {
        if { $succeedFlag } {
            return $img
        } else {
            puts "    Error: $img"
        }
    } else {
        if { $succeedFlag } {
            puts "    Error: $img"
        } else {
            puts "    Should fail: $img"
        }
        return [CreateErrorImage 32 32]
    }
}

set labelBg "lightgreen"
set typeList [list  "bitmap" "photo"]

pack [frame .top]
pack [text .top.t -height 3]
.top.t insert end \
"Display images from a XBM string using the \"image create bitmap\"
and \"image create photo -format XBM\" commands.
Both image columns should be identical."

pack [frame .cont]
foreach type $typeList {
    frame .cont.$type
}
pack {*}[winfo children .cont] -side left

foreach type $typeList {
    puts "Column $type:"
    label .cont.${type}.l -text $type -anchor nw

    label .cont.${type}.l1 -background $labelBg
    .cont.${type}.l1 configure -image [append true $type]

    label .cont.${type}.l2 -background $labelBg
    .cont.${type}.l2 configure -image [append true $type -foreground "red"]

    label .cont.${type}.l3 -background $labelBg
    .cont.${type}.l3 configure -image [append true $type -background "yellow"]

    label .cont.${type}.l4 -background $labelBg
    .cont.${type}.l4 configure -image [append true $type -foreground "#FF00FF" -background "#FFFFFF"]

    label .cont.${type}.l5 -background $labelBg
    if { $type eq "bitmap" } {
        puts "   Ignoring append bitmap -background \"NoColor\""
        .cont.${type}.l5 configure -image [CreateErrorImage 32 32]
    } else {
        .cont.${type}.l5 configure -image [append false $type -background "NoColor"]
    }

    label .cont.${type}.l6 -background $labelBg
    .cont.${type}.l6 configure -image [append false $type -background]

    label .cont.${type}.l7 -background $labelBg
    .cont.${type}.l7 configure -image [append false $type -invalidoption "#FF00FF"]

    pack {*}[winfo children .cont.${type}] -pady 5
    puts ""
}

bind . <Escape> exit

if { [lindex $argv 0] eq "auto" } {
    update
    after 500
    exit
}
