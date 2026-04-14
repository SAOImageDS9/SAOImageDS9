
# lappend auto_path "/data/lenin2/Projects/DS9_DND/tkdnd2.9.5/"

#  Copyright (C) 2026
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"


package provide DS9 1.0
package require tkdnd

proc GetFITSExtension { fn varname } {
    upvar 1 $varname var

    global ds9

    # Adapted from prism.tcl

    if {![file exists $fn]} {
        Error "[msgcat::mc {File not found}]: $fn"
        return
    }

    set var(fn) $fn
    set var(type) fits

    switch $ds9(wm) {
        x11 -
        aqua {
            set var(load) mmapincr

            # compressed?
            catch {
                set ch [open $fn r]
                fconfigure $ch -encoding binary -translation binary
                set bb [read $ch 2]
                close $ch
                binary scan $bb H4 cc
                if {$cc == {1f8b}} {
                    set var(load) allocgz
                }
            }
        }
        win32 {
            set var(load) allocgz
        }
    }; # End switch

    if {[catch {fitsy dir $var(fn) $var(load)} rr]} {
        Error "[msgcat::mc {Unable to load FITS file}] $fn"
        return
    }

    set extnames []
    array set blocks {}
    set extnum 0

    foreach {ext name type info} $rr {
        array set blocks [list $ext [list $name $type $info]]
        lappend extnames $name
        incr extnum
    }

    # is primary NULL?
    set var(ext) 0
    if {$extnum>1} {
        foreach {ext name type info} $rr {
            if {$info != "NULL"} {
                break
            }
            incr var(ext)
        }

        # sanity check
        if {$var(ext) >= $extnum} {
            set var(ext) 0
        }
    }

    set var(extname) [lindex $extnames $var(ext)]
    return
}


proc PeekFITSheader { varname retvals} {
    # ----------------
    upvar 1 $varname var
    upvar 1 $retvals keyvals

    # find our extension
    if {[catch {fitsy open $var(fn) $var(load) $var(ext)}]} {
        Error "[msgcat::mc {Unable to load FITS file}] $var(fn)"
        return
    }

    # header
    set header [fitsy header]
    set keys [split $header "\n"]

    # Parse FITS keywords
    # "=" will be in column 9. Key name 0-7, value in 9-80.
    # drop HISTORY, COMMENT, CONTINUE, and other keywords
    # that don't follow the old-school std

    array set keyvals {}
    foreach {keyword} $keys {

        # This isn't robust, but works for what is needed here
        set sans_comment [regsub "/.*$" $keyword ""]

        set equals [string index $sans_comment 8]
        if {![string equal $equals "="]} {
            # Get rid of HISTORY, COMMENT, and other non-std-keywords
            continue
        }

        set keyname [string trim [string range $sans_comment 0 7] ]
        set value [string trim [string range $sans_comment 9 end] ]
        set value [string trim $value "' "]
        array set keyvals [list $keyname $value]
    }

    fitsy close

    return
}

proc GuessFITSType { filename } {

    GetFITSExtension $filename var
    PeekFITSheader var keyvals


    if {![info exists keyvals(XTENSION)]} {
        if {$keyvals(NAXIS) == 3} {
            return "3d"
        }
        return "image"
    }

    if {$keyvals(XTENSION) == "IMAGE"} {
        if {$keyvals(NAXIS) == 3} {
            return "3d"
        }
        return "image"
    }

    if {$keyvals(XTENSION) != "BINTABLE" } {
        Error "Unable to locate usable data in $filename"
        return ""
    }

    if {$keyvals(HDUCLAS1) == "REGION"} {
        # load region
        return "region"
    }

    if {$keyvals(HDUCLAS1) == "EVENTS"} {
        # load image
        return "image"
    }

    # otherwise -- load prism
    return "prism"

}


proc LoadDrop { filenames } {

    foreach {infile} $filenames {
        set ext [file extension $infile]
        switch $ext {
            .sao -
            .lut { ds9Cmd "-cmap load $infile" }

            .tag { ds9Cmd "-cmap tag load $infile"}

            .bck { ds9Cmd "-restore $infile"}

            .plb { ds9Cmd "-plot restore $infile"}

            .ctr { ds9Cmd "-contour load $infile"}

            .lev { ds9Cmd "-contour load levels $infile"}

            .ans -
            .ds9 { ds9Cmd "-analysis load $infile"}

            .vot -
            .xml -
            .votable { ds9Cmd "-catalog load $infile" }

            .rdb -
            .cat { ds9Cmd "-catalog import rdb $infile"}

            .tsv -
            .csv { ds9Cmd "-catalog import tsv $infile" }

            .flt { ds9Cmd "-catalog filter load $infile" }

            .sym { ds9Cmd "-catalog symbol load $infile"}

            .grd { ds9Cmd "-grid load $infile"}

            .txt { ds9Cmd "-notes load $infile"}

            .reg {ds9Cmd "-region load $infile"}

            .seg {ds9Cmd "-illustrate load $infile"}

            .tcl  { ds9Cmd "-source $infile"}

            .htm -
            .html {ds9Cmd "-web file://$infile"}

            .wcs {ds9Cmd "-wcs load $infile"}

            .gif { ds9Cmd "-gif $infile"}

            .jpg -
            .jpeg { ds9Cmd "-jpeg $infile"}

            .png {ds9Cmd "-png $infile"}

            .tif -
            .tiff {ds9Cmd "-tiff $infile"}

            default {
                switch [GuessFITSType $infile] {
                    "image" {ds9Cmd "-file $infile"}
                    "prism" {ds9Cmd "-prism $infile"}
                    "region" {ds9Cmd "-region $infile"}
                    "3d" {ds9Cmd "-3d"; ds9Cmd "-file $infile"}
                    default {
                        Error "Unable to open $infile"
                    }
                }

            }
        }
        # end switch
    }
    # end foreach infile
}

proc BindDropEvents {} {
    global ds9

    tkdnd::drop_target register $ds9(canvas) DND_Files
    bind $ds9(canvas) <<DropEnter>> {return %A}
    bind $ds9(canvas) <<Drop>> {LoadDrop %D}
    bind $ds9(canvas) <<DropLeave>> {return %A}
    bind $ds9(canvas) <<DropPosition>> {return %A}

}
