namespace eval imgtest {

    namespace export haveTk86 haveTk87
    namespace export haveGs
    namespace export refSize refSize2 refResolution
    namespace export imageInit imageFinish imageCleanup
    namespace export imageNames imageSize
    namespace export imageCompare imageResolution
    namespace export readFile

    variable ImageNames

    proc _versionCompare { version1 version2 } {
        # A wrapper around package vcompare to handle alpha or beta versions
        # containing "a" or "b", ex. 8.7a4.
        set version(1) $version1
        set version(2) $version2
        set versionList(1) [split $version1 "."]
        set versionList(2) [split $version2 "."]
        foreach num { 1 2 } {
            if { [llength $versionList($num)] == 2 } {
                set major [lindex $versionList($num) 0]
                set minor [lindex $versionList($num) 1]
                if { ! [string is integer -strict $minor] } {
                    lassign [split $minor "ab"] minor patch
                    set version($num) [format "%d.%d.%d" $major $minor $patch]
                }
            }
        }
        return [package vcompare $version(1) $version(2)]
    }

    proc haveTk86 {} {
        return [expr [_versionCompare "8.6" $::tk_patchLevel] <= 0]
    }

    proc haveTk87 {} {
        return [expr [_versionCompare "8.7" $::tk_patchLevel] <= 0]
    }

    proc haveGs {} {
        set gsCmds [list "gs" "gswin64c.exe" "gswin32c.exe"]
        foreach gsCmd $gsCmds {
            if { [auto_execok $gsCmd] ne "" } {
                return true
            }
        }
        return false
    }


    proc refSize {} {
        return [list 40 7]
    }

    proc refSize2 {} {
        return [list 80 14]
    }

    proc refResolution {} {
        return [list 80 14]
    }


    proc imageInit {} {
        variable ImageNames

        if {! [info exists ImageNames]} {
            set ImageNames [lsort -dictionary [image names]]
        }
        imageCleanup
        if {[lsort -dictionary [image names]] ne $ImageNames} {
            return -code error "IMAGE NAMES mismatch: [image names] != $ImageNames"
        }
    }

    proc imageFinish {} {
        variable ImageNames

        if {[lsort -dictionary [image names]] ne $ImageNames} {
            return -code error "images remaining: [image names] != $ImageNames"
        }
        imageCleanup
    }

    proc imageCleanup {} {
        variable ImageNames

        foreach img [image names] {
            if {$img ni $ImageNames} {
                image delete $img
            }
        }
    }

    proc imageNames {} {
        variable ImageNames

        set r [list]
        foreach img [image names] {
            if {$img ni $ImageNames} {
                lappend r $img
            }
        }
        return $r
    }

    proc imageSize { phImg } {
        return [list [image width  $phImg] [image height $phImg]]
    }

    proc imageResolution { phImg } {
        set retVal [catch {$phImg cget -metadata} metaDict]
        if { $retVal != 0 } {
            return [list -1 -1]
        }

        if { [dict exists $metaDict DPI] } {
            set dpi [dict get $metaDict DPI]
        }
        if { [dict exists $metaDict aspect] } {
            set aspect [dict get $metaDict aspect]
        }
        if { [info exists dpi] && [info exists aspect] } {
            return [list [expr {int($dpi)}] [expr {int($dpi / $aspect)}]]
        }
        return [list 0 0]
    }

    proc imageCompare { phImg1 phImg2 } {
        set w1 [image width  $phImg1]
        set h1 [image height $phImg1]
        set w2 [image width  $phImg2]
        set h2 [image height $phImg2]
        if { $w1 != $w2 && $h1 != $h2 } {
            return 0
        }
        for { set y 0 } { $y < $h1 } { incr y } {
            for { set x 0 } { $x < $w1 } { incr x } {
                set left  [$phImg1 get $x $y]
                set right [$phImg2 get $x $y]

                set dr [expr { [lindex $right 0] - [lindex $left 0] }]
                if { $dr != 0 } { return 0 }

                set dg [expr { [lindex $right 1] - [lindex $left 1] }]
                if { $dg != 0 } { return 0 }

                set db [expr { [lindex $right 2] - [lindex $left 2] }]
                if { $db != 0 } { return 0 }
            }
        }
        return 1
    }

    proc readFile { name } {
        set fp [open $name r]
        fconfigure $fp -translation binary
        set imgData [read -nonewline $fp]
        close $fp
        return $imgData
    }
}

namespace import -force imgtest::*

tcltest::testConstraint Tk86 [haveTk86]
tcltest::testConstraint Tk87 [haveTk87]

tcltest::testConstraint Ghostscript [haveGs]
tcltest::testConstraint PDF [expr 0]
