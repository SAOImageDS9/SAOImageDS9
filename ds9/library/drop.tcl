#  Copyright (C) 2026
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc GetFITSExtension { fn varname } {
    upvar 1 $varname var

    global ds9

    # Adapted from prism.tcl

    if {![file exists $fn]} {
        Error "[msgcat::mc {File not found}]: $fn"
        return 0
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
                fconfigure $ch -encoding iso8859-1 -translation binary
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
        return 0
    }

    set extnames {}
    set extnum 0

    foreach {ext name type info} $rr {
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
    return 1
}


proc PeekFITSheader { varname retvals} {
    # ----------------
    upvar 1 $varname var
    upvar 1 $retvals keyvals

    # find our extension
    if {[catch {fitsy open $var(fn) $var(load) $var(ext)}]} {
        Error "[msgcat::mc {Unable to load FITS file}] $var(fn)"
        return 0
    }

    # header
    # fitsy is shared (see prism.tcl), so never leave it open
    if {[catch {fitsy header} header]} {
        fitsy close
        Error "[msgcat::mc {Unable to load FITS file}] $var(fn)"
        return 0
    }
    fitsy close

    set keys [split $header "\n"]

    # Parse FITS keywords
    # "=" will be in column 9. Key name 0-7, value in 9-80.
    # drop HISTORY, COMMENT, CONTINUE, and other keywords
    # that don't follow the old-school std

    array set keyvals {}
    foreach {keyword} $keys {
        if {![string equal [string index $keyword 8] "="]} {
            # Get rid of HISTORY, COMMENT, and other non-std-keywords
            continue
        }

        set keyname [string trim [string range $keyword 0 7]]
        set value [string trim [string range $keyword 9 end]]

        if {[string index $value 0] == "'"} {
            # string value, may contain '/'. '' is an embedded quote
            if {[regexp {^'((?:[^']|'')*)'} $value -> value]} {
                set value [string trim [string map {'' '} $value]]
            }
        } else {
            # strip the comment
            set value [string trim [regsub {/.*$} $value {}]]
        }
        set keyvals($keyname) $value
    }

    return 1
}

proc GuessFITSType { filename } {

    # errors have already been reported
    if {![GetFITSExtension $filename var]} {
        return {}
    }
    if {![PeekFITSheader var keyvals]} {
        return {}
    }

    set naxis 0
    if {[info exists keyvals(NAXIS)]} {
        set naxis $keyvals(NAXIS)
    }
    set hduclas1 {}
    if {[info exists keyvals(HDUCLAS1)]} {
        set hduclas1 $keyvals(HDUCLAS1)
    }

    if {![info exists keyvals(XTENSION)]} {
        if {$naxis == 3} {
            return "3d"
        }
        return "image"
    }

    if {$keyvals(XTENSION) == "IMAGE"} {
        if {$naxis == 3} {
            return "3d"
        }
        return "image"
    }

    if {$keyvals(XTENSION) != "BINTABLE" } {
        Error "Unable to locate usable data in $filename"
        return {}
    }

    if {$hduclas1 == "REGION"} {
        # load region
        return "region"
    }

    if {$hduclas1 == "EVENTS"} {
        # load image
        return "image"
    }

    # otherwise -- load prism
    return "prism"

}

# Run one command through its Process*Cmd, the way XPA and SAMP do
# (see CommSet). Going through ProcessCommand instead would treat it
# as the startup command line, where a parser error quits ds9.
# Errors are collected and then reported in a dialog.
proc DropCmd {proc param {extra {}}} {
    global ds9

    set i 0
    InitError drop
    if {[catch {$proc param i {*}$extra} err]} {
        if {$ds9(msg) == {}} {
            Error $err
        }
    }
    set msg $ds9(msg)
    set level $ds9(msg,level)
    InitError tcl

    if {$msg != {}} {
        ProcessMessage $level $msg
    }
}

# these execute the dropped file as a script, ask first
proc DropConfirm {infile} {
    return [expr {[tk_messageBox -type okcancel -icon question \
                       -message "[msgcat::mc {Execute}] $infile?"] == {ok}}]
}

proc LoadDrop { filenames } {

    foreach {infile} $filenames {
        # tkdnd hands us native filenames. On win32 that means backslashes,
        # which the command parser treats as escapes - glob mangles them and
        # the file silently fails to load. file normalize gives us '/'.
        set infile [file normalize $infile]

        set ext [string tolower [file extension $infile]]
        switch $ext {
            .sao -
            .lut {DropCmd ProcessCmapCmd [list load $infile]}

            .tag {DropCmd ProcessCmapCmd [list tag load $infile]}

            .bck {
                if {[DropConfirm $infile]} {
                    DropCmd ProcessRestoreCmd [list $infile]
                }
            }

            .plb {DropCmd ProcessPlotCmd [list restore $infile] {{} {}}}

            .ctr {DropCmd ProcessContourCmd [list load $infile]}

            .lev {DropCmd ProcessContourCmd [list load levels $infile]}

            .ans -
            .ds9 {DropCmd ProcessAnalysisCmd [list load $infile] {{} {}}}

            .vot -
            .xml -
            .votable {DropCmd ProcessCatalogCmd [list load $infile]}

            .rdb -
            .cat {DropCmd ProcessCatalogCmd [list import rdb $infile]}

            .tsv -
            .csv {DropCmd ProcessCatalogCmd [list import tsv $infile]}

            .flt {DropCmd ProcessCatalogCmd [list filter load $infile]}

            .sym {DropCmd ProcessCatalogCmd [list symbol load $infile]}

            .grd {DropCmd ProcessGridCmd [list load $infile]}

            .txt {DropCmd ProcessNotesCmd [list load $infile]}

            .reg {DropCmd ProcessRegionsCmd [list load $infile] {{} {}}}

            .seg {DropCmd ProcessIllustrateCmd [list load $infile] {{} {}}}

            .tcl {
                if {[DropConfirm $infile]} {
                    DropCmd ProcessSourceCmd [list $infile]
                }
            }

            .htm -
            .html {
                # win32 paths start with a drive letter: file:///C:/...
                if {[string index $infile 0] == {/}} {
                    set url file://$infile
                } else {
                    set url file:///$infile
                }
                DropCmd ProcessWebCmd [list $url]
            }

            .wcs {DropCmd ProcessWCSCmd [list load $infile] {{} {}}}

            .gif {DropCmd ProcessGIFCmd [list $infile] {{} {}}}

            .jpg -
            .jpeg {DropCmd ProcessJPEGCmd [list $infile] {{} {}}}

            .png {DropCmd ProcessPNGCmd [list $infile] {{} {}}}

            .tif -
            .tiff {DropCmd ProcessTIFFCmd [list $infile] {{} {}}}

            default {
                switch [GuessFITSType $infile] {
                    "image" {
                        DropCmd ProcessFileCmd [list $infile] {{} {} {}}
                    }
                    "prism" {DropCmd ProcessPrismCmd [list $infile]}
                    "region" {
                        DropCmd ProcessRegionsCmd [list $infile] {{} {}}
                    }
                    "3d" {
                        DropCmd Process3DCmd {}
                        DropCmd ProcessFileCmd [list $infile] {{} {} {}}
                    }
                    {} {
                        # error already reported
                    }
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

proc InitDropTarget {} {
    global ds9

    # tkdnd is not available on every platform (e.g. macos x11)
    set ds9(drop) [expr {![catch {package require tkdnd}]}]
    if {!$ds9(drop)} {
        return
    }

    tkdnd::drop_target register $ds9(canvas) DND_Files
    UnBindDropEvents
}

proc BindDropEvents {} {
    global ds9

    if {![info exists ds9(drop)] || !$ds9(drop)} {
        return
    }

    bind $ds9(canvas) <<DropEnter>> {return %A}
    bind $ds9(canvas) <<DropPosition>> {return %A}
    bind $ds9(canvas) <<DropLeave>> {return %A}
    # Load after the drop has completed. The drag source waits for the
    # drop to return, and loading can take a while or post a dialog.
    bind $ds9(canvas) <<Drop>> {after idle [list LoadDrop %D]; return %A}
}

# canvas events are off (e.g. illustrate or tile layout mode), refuse drops
proc UnBindDropEvents {} {
    global ds9

    if {![info exists ds9(drop)] || !$ds9(drop)} {
        return
    }

    bind $ds9(canvas) <<DropEnter>> {return refuse_drop}
    bind $ds9(canvas) <<DropPosition>> {return refuse_drop}
    bind $ds9(canvas) <<DropLeave>> {}
    bind $ds9(canvas) <<Drop>> {return refuse_drop}
}
