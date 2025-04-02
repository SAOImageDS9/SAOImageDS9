proc P { str } {
    catch {puts $str ; flush stdout}
}

proc PN { str } {
    catch {puts -nonewline $str ; flush stdout}
}

proc PP { str } {
    P ""
    P $str
    P ""
}

proc PS { } {
    P ""
    P "------------------------------------------------------------"
    P ""
}

proc PH { str } {
    P ""
    P "Test: $str"
    PS
}

proc PF { floatVal { prec 4 } } {
    set fmtStr "%.${prec}f"
    return [format $fmtStr $floatVal]
}

proc PSec { msg sec } {
    P [format "%s: %.4f seconds" $msg $sec]
}

proc PrintMachineInfo {} {
    global tcl_platform

    P "Machine specific information:"
    P  "platform    : $tcl_platform(platform)"
    P  "os          : $tcl_platform(os)"
    P  "osVersion   : $tcl_platform(osVersion)"
    P  "machine     : $tcl_platform(machine)"
    P  "byteOrder   : $tcl_platform(byteOrder)"
    P  "pointerSize : $tcl_platform(pointerSize)"
    P  "wordSize    : $tcl_platform(wordSize)"
    P  "user        : $tcl_platform(user)"
    P  "hostname    : [info hostname]"
    P  "Tcl version : [info patchlevel]"
    P  "Tk version  : $::tk_patchLevel"
    P  "Img version : [package version Img]"
}

proc SetFileTypes { } {
    global fInfo env

    set fInfo(suf) ".tga"
    set fInfo(fmt) "targa"
    set fInfo(vsn) "int"
    set fInfo(modfmt) 0
}

proc StartErrorCount {} {
    set ::gErrorCount 0
}

proc IncrErrorCount {} {
    incr ::gErrorCount
}

proc GetErrorCount {} {
    return $::gErrorCount
}

proc CheckImageSize { phImg w h } {
    set iw [image width $phImg]
    set ih [image height $phImg]
    if { $iw != $w || $ih != $h } {
        P "\nERROR: Image size ($iw x $ih) does not fit constraint: ($w x $h)"
        IncrErrorCount
    }
}

proc _Abs { a } {
    if { $a < 0 } {
        return [expr {-$a}]
    } else {
        return $a
    }
}

proc _Delta { a b } {
    return [_Abs [expr {$a - $b}]]
}

proc CheckImagePixel { phImg x y r g b } {
    lassign [$phImg get $x $y] ir ig ib 
    # Do not compare directly because of lossy compressions like jpeg.
    set delta 4
    if { [_Delta $ir $r] > $delta || \
         [_Delta $ig $g] > $delta || \
         [_Delta $ib $b] > $delta } {
        P "\nERROR: Image color ($ir, $ig, $ib) does not fit constraint: ($r, $g, $b)"
        IncrErrorCount
    }
}

proc HaveGhostscript {} {
    set gsCmds [list "gs" "gswin64c.exe" "gswin32c.exe"]
    foreach gsCmd $gsCmds {
        if { [auto_execok $gsCmd] ne "" } {
            return true
        }
    }
    return false
}

