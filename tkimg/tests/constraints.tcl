namespace eval imgtest {

    namespace export imageInit imageFinish imageCleanup imageNames
    variable ImageNames

    proc imageInit {} {
        variable ImageNames
        if {![info exists ImageNames]} {
            set ImageNames [lsort [image names]]
        }
        imageCleanup
        if {[lsort [image names]] ne $ImageNames} {
            return -code error "IMAGE NAMES mismatch: [image names] != $ImageNames"
        }
    }

    proc imageFinish {} {
        variable ImageNames
        if {[lsort [image names]] ne $ImageNames} {
            return -code error "images remaining: [image names] != $ImageNames"
        }
        imageCleanup
    }

    proc imageCleanup {} {
        variable ImageNames
        foreach img [image names] {
            if {$img ni $ImageNames} {image delete $img}
        }
    }

    proc imageNames {} {
        variable ImageNames
        set r {}
        foreach img [image names] {
            if {$img ni $ImageNames} {lappend r $img}
        }
        return $r
    }
}

namespace import -force imgtest::*
