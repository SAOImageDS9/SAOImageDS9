# library of tcl procedures for generating portable document format files
# this began as a port of pdf4php from php to tcl
#
# Copyright (c) 2004 by Frank Richter <frichter@truckle.in-chemnitz.de> and
#                       Jens Ponisch <jens@ruessel.in-chemnitz.de>
# Copyright (c) 2006-2016 by Peter Spjuth <peter.spjuth@gmail.com>
# Copyright (c) 2009 by Yaroslav Schekin <ladayaroslav@yandex.ru>
#
# See the file "licence.terms" for information on usage and redistribution
# of this file, and for a DISCLAIMER OF ALL WARRANTIES.

package provide pdf4tcl 0.9.4
package require TclOO
package require pdf4tcl::stdmetrics
package require pdf4tcl::glyph2unicode

namespace eval pdf4tcl {
    # helper variables (constants) packaged into arrays to minimize
    # variable import statements
    variable g
    variable paper_sizes
    variable units
    variable dir [file dirname [file join [pwd] [info script]]]

    # Make mathops available
    namespace import ::tcl::mathop::*

    # Known paper sizes. These are always in points.
    array set paper_sizes {
        a0     {2380.0 3368.0}
        a1     {1684.0 2380.0}
        a2     {1190.0 1684.0}
        a3     { 842.0 1190.0}
        a4     { 595.0  842.0}
        a5     { 421.0  595.0}
        a6     { 297.0  421.0}
        11x17  { 792.0 1224.0}
        ledger {1224.0  792.0}
        legal  { 612.0 1008.0}
        letter { 612.0  792.0}
    }

    # Known units. The value is their relationship to points
    array set units [list \
            mm [expr {72.0 / 25.4}] \
            m  [expr {72.0 / 25.4}] \
            cm [expr {72.0 / 2.54}] \
            c  [expr {72.0 / 2.54}] \
            i  72.0                 \
            p  1.0                  \
           ]

    # Font Variables

    variable ttfpos 0
    variable ttfdata
    # Base font attributes:
    variable BFA
    # BaseFontParts for TTF fonts:
    variable BFP
    # List of all created fonts:
    variable Fonts
    variable FontsAttrs
    # For currently processed font:
    variable ttfname ""
    variable ttftables
    variable type1AFM
    variable type1PFB

    # Utility to look up paper size by name
    # A two element list of width and height is also allowed.
    # Return value is in points
    proc getPaperSize {papername {unit 1.0}} {
        variable paper_sizes

        set papername [string tolower $papername]
        if {[info exists paper_sizes($papername)]} {
            # This array is always correct format
            return $paper_sizes($papername)
        }
        if {[catch {set len [llength $papername]}] || $len != 2} {
            return {}
        }
        foreach {w h} $papername break
        set w [getPoints $w $unit]
        set h [getPoints $h $unit]
        return [list $w $h]
    }

    # Return a list of known paper sizes
    proc getPaperSizeList {} {
        variable paper_sizes
        return [array names paper_sizes]
    }

    # Get points from a measurement.
    # No unit means points.
    # Supported units are "mm", "m", "cm", "c", "p" and "i".
    proc getPoints {val {unit 1.0}} {
        variable units
        if {[string is double -strict $val]} {
            # Always return a pure double value
            return [expr {$val * $unit}]
        }
        if {[regexp {^\s*(\S+?)\s*([[:alpha:]]+)\s*$} $val -> num unit]} {
            if {[string is double -strict $num]} {
                if {[info exists units($unit)]} {
                    return [expr {$num * $units($unit)}]
                }
            }
        }
        throw "PDF4TCL" "unknown value $val"
    }

    # Wrapper to create pdf4tcl object
    proc new {args} {
        set cmd create
        # Support Snit style of naming
        if {[lindex $args 0] eq "%AUTO%"} {
            set args [lrange $args 1 end]
            set cmd new
        }
        uplevel 1 pdf4tcl::pdf4tcl $cmd $args
    }

    # ===== Procs for TrueType fonts processing =====

    proc createBaseTrueTypeFont {basefontname ttf_data {validate 0}} {
        variable ttfname $basefontname
        variable ttfdata $ttf_data
        InitBaseTTF $validate
    }

    proc loadBaseTrueTypeFont {basefontname filename {validate 0}} {
        variable ttfname $basefontname
        variable ttfdata
        set fd [open $filename]
        fconfigure $fd -translation binary
        set ttfdata [read $fd]
        close $fd
        InitBaseTTF $validate
    }

    proc InitBaseTTF {validate} {
        variable BFA
        variable BFP
        variable ttfname
        variable ttfdata
        variable ttftables
        variable ttfpos 0

        set BFA($ttfname,FontType) TTF
        set subfontIndex 0

        if {[ReadHeader]} {
            ReadTTCHeader
            GetSubfont $subfontIndex $validate
        } else {
            ChecksumFile
            ReadTableDirectory $validate
            set BFA($ttfname,subfontNameX) ""
        }

        ExtractInfo

        unset -nocomplain ttfdata
        unset -nocomplain ttftables
        set BFA($ttfname,SubFontIdx) 0
    }

    # Pad data with zero bytes to: len % 4 == 0
    proc CalcTTFCheckSum {data pos len} {
        binary scan $data "@${pos}Iu[expr {$len >> 2}]" datalst

        if {$len & 3} {
            set s [expr {$pos + (($len >> 2) << 2)}]
            set e [expr {$s + ($len & 3)}]
            set lc "[string range $data $s $e][string repeat "\0" 3]"
            binary scan $lc "Iu" lastb
            lappend datalst $lastb
        }

        set sum 0
        foreach u_int32 $datalst {
            incr sum $u_int32
        }
        set sum [expr {$sum & 0xFFFFFFFF}]
        return $sum
    }

    # read the sfnt header at the current position:
    proc ReadHeader {} {
        variable ttfpos
        variable ttfdata
        set ttfVersions [list 65536 1953658213 1953784678]

        binary scan $ttfdata "@${ttfpos}Iu" version
        incr ttfpos 4
        if {$version == 0x4F54544F} {
            throw "PDF4TCL" "TTF: postscript outlines are not supported"
        }
        if {$version ni $ttfVersions} {
            throw "PDF4TCL" "not a TrueType font: version=$version"
        }
        return [expr {$version == [lindex $ttfVersions end]}]
    }

    proc ChecksumFile {} {
        variable ttfdata
        set checksum [CalcTTFCheckSum $ttfdata 0 [string length $ttfdata]]
        if {$checksum != 0xB1B0AFBA} {
            throw "PDF4TCL" "invalid TTF file checksum [format %X $checksum]"
        }
    }

    proc ReadTTCHeader {} {
        variable ttfname
        variable ttfpos
        variable ttfdata
        variable BFA
        variable ttfSubFontOffsets
        set ttcVersions [list 65536 131072]

        binary scan $ttfdata "@${ttfpos}IuIu" \
                ttcVersion BFA($ttfname,numSubfonts)
        incr ttfpos 8

        if {$ttcVersion ni $ttcVersions} {
            throw "PDF4TCL" "not a TTC file"
        }

        binary scan $ttfdata "@${ttfpos}Iu$BFA($ttfname,numSubfonts)" \
                ttfSubFontOffsets
        incr ttfpos [expr {$BFA($ttfname,numSubfonts) * 4}]
    }

    proc GetSubfont {subfontIndex {validate 0}} {
        variable ttfpos
        variable ttfSubFontOffsets
        if {$subfontIndex >= [llength $ttfSubFontOffsets]} {
            throw "PDF4TCL" "bad subfontIndex $subfontIndex"
        }
        set ttfpos [lindex $ttfSubFontOffsets $subfontIndex]
        ReadHeader
        ReadTableDirectory $validate
    }

    proc ReadTableDirectory {validate} {
        variable ttfdata
        variable ttfpos
        variable ttftables
        variable ttfname
        variable BFP
        variable BFA
        # Must copy only needed tables here, if they exist:
        set NT [list "name" "OS/2" "cvt " "fpgm" "prep" \
                "glyf" "post" "hhea" "maxp" "head"]

        # 'srange', 'esel' and 'rshift' are UNUSED
        binary scan $ttfdata "@${ttfpos}SuSuSuSu" numTables srange esel rshift
        incr ttfpos 8

        for {set f 0} {$f < $numTables} {incr f} {
            # list is 'checksum offset length'
            binary scan $ttfdata "@${ttfpos}a4Iu3" tag rlist
            incr ttfpos 16
            set ttftables($tag) $rlist
            if {$tag in $NT} {
                foreach {cksum offset len} $rlist break
                set last [expr {$offset + $len - 1}]
                set BFP($ttfname,$tag) [string range $ttfdata $offset $last]
                lappend BFA($ttfname,tables) $tag
            }
        }
        if {$validate} ChecksumTables
    }

    # Check the checksums for all tables
    proc ChecksumTables {} {
        variable ttftables
        variable ttfdata

        foreach t [array names ttftables] {
            foreach {checksum offset length} $ttftables($t) break
            set RCkSum [CalcTTFCheckSum $ttfdata $offset $length]
            if {$t eq "head"} {
                incr offset 8
                binary scan $ttfdata "@${offset}Iu" adjustment
                set RCkSum [expr {($RCkSum - $adjustment) & 0xFFFFFFFF}]
            }
            if {$RCkSum != $checksum} {
                throw "PDF4TCL" "TTF: invalid checksum of table $t"
            }
        }
    }

    # Extract typographic information from the loaded font file.
    #
    # The following attributes will be set::
    #
    #    name         PostScript font name
    #    flags        Font flags
    #    ascend       Typographic ascender in 1/1000ths of a point
    #    descend      Typographic descender in 1/1000ths of a point
    #    CapHeight    Cap height in 1/1000ths of a point (0 if not available)
    #    bbox         Glyph bounding box [l,b,r,t] in 1/1000ths of a point
    #    _bbox        Glyph bounding box [l,b,r,t] in unitsPerEm
    #    unitsPerEm   Glyph units per em
    #    ItalicAngle  Italic angle in degrees ccw
    #    stemV        stem weight in 1/1000ths of a point (approximate)
    #
    # If charInfo is true, the following will also be set::
    #
    #    defaultWidth   default glyph width in 1/1000ths of a point
    #    charWidths     dictionary of character widths for every supported UCS
    #                   character code
    #
    # This will only work if the font has a Unicode cmap (platform 3,
    # encoding 1, format 4 or platform 0 any encoding format 4).  Setting
    # charInfo to false avoids this requirement
    proc ExtractInfo {{charInfo 1}} {
        variable ttfdata
        variable ttftables
        variable ttfpos
        variable ttfname
        variable BFA

        # name - Naming table
        set name_pos [lindex $ttftables(name) 1]
        set ttfpos $name_pos
        binary scan $ttfdata "@${ttfpos}SuSuSu" fmt NumRecords SDoffset
        if {$fmt != 0} {
            throw "PDF4TCL" "TTF: Unknown name table format $fmt"
        }
        incr ttfpos 6
        set SDoffset [expr {$name_pos + $SDoffset}]
        array set names {1 "" 2 "" 3 "" 4 "" 6 ""}
        set NIDS [array names names]
        set nameCount [llength $NIDS]

        for {set f 0} {$f < $NumRecords} {incr f} {
            binary scan $ttfdata "@${ttfpos}SuSuSuSuSuSu" PlId EncId LangId \
                    nameId length offset
            incr ttfpos 12
            if {$nameId ni $NIDS} {
                continue
            }
            set npos [expr {$SDoffset + $offset}]
            set nend [expr {$npos + $length - 1}]
            set Nstr [string range $ttfdata $npos $nend]
            set N ""

            if {$PlId == 3 && $EncId == 1 && $LangId == 0x409} {
                # Microsoft, Unicode, US English, PS Name
                if {$length & 1} {
                    throw "PDF4TCL" \
                            "PostScript name is UTF-16 string of odd length"
                }
                # Try to read a string of unicode chars:
                set N [encoding convertfrom unicode $Nstr]
            } elseif {$PlId == 1 && $EncId == 0 && $LangId == 0} {
                # Macintosh, Roman, English, PS Name
                # According to OpenType spec, if PS name exists, it must exist
                # both in MS Unicode and Macintosh Roman formats. Apparently,
                # you can find live TTF fonts which only have Macintosh format.
                set N [encoding convertfrom iso8859-1 $Nstr]
            }
            if {[string length $N] && $names($nameId) == ""} {
                set names($nameId) $N
                incr nameCount -1
                if {$nameCount == 0} break
            }
        }

        set BFA($ttfname,psName) [string map {" " -} $names(6)]
        if {$BFA($ttfname,psName) eq ""} {
            throw "PDF4TCL" "could not find PostScript font name"
        }

        #----------------------------------
        # head - Font header table
        set ttfpos [lindex $ttftables(head) 1]
        binary scan $ttfdata "@${ttfpos}SuSuSux6Iux2Sux16SSSSx6SuSu" \
                ver_maj ver_min fnt_rev magic \
                BFA($ttfname,unitsPerEm) xMin yMin xMax yMax \
                indexToLocFormat glyphDataFormat

        if {$ver_maj != 1} {
            throw "PDF4TCL" "unknown head table version $ver_maj"
        }
        if {$magic != 0x5F0F3CF5} {
            throw "PDF4TCL" "invalid head table magic $magic"
        }

        set BFA($ttfname,bbox) [list \
                [Rescale $xMin] [Rescale $yMin] [Rescale $xMax] [Rescale $yMax]]

        # OS/2 - OS/2 and Windows metrics table (needs data from head table)
        if {[info exists ttftables(OS/2)]} {
            set ttfpos [lindex $ttftables(OS/2) 1]
            binary scan $ttfdata "@${ttfpos}Sux2Sux2Sux58SS" \
                    version usWeightClass fsType sTypoAscender sTypoDescender
            incr ttfpos 88

            set BFA($ttfname,ascend) [Rescale $sTypoAscender]
            set BFA($ttfname,descend) [Rescale $sTypoDescender]

            if {$version > 1} {
                binary scan $ttfdata "@${ttfpos}Su" sCapHeight
                set BFA($ttfname,CapHeight) [Rescale $sCapHeight]
            } else {
                set BFA($ttfname,CapHeight) $BFA($ttfname,ascend)
            }
        } else {
            # Microsoft TTFs require an OS/2 table; Apple ones do not.  Try to
            # cope. The data is not very important anyway.
            set usWeightClass 500
            set BFA($ttfname,ascend) [Rescale $yMax]
            set BFA($ttfname,descend) [Rescale $yMin]
            set BFA($ttfname,CapHeight) $BFA($ttfname,ascend)
        }

        set BFA($ttfname,stemV) [expr {50 + int(pow($usWeightClass / 65.0, 2))}]

        #----------------------
        # post - PostScript table (needs data from OS/2 table)
        set ttfpos [lindex $ttftables(post) 1]
        binary scan $ttfdata "@${ttfpos}SuSuSSuSSIu" \
                ver_maj ver_min itan0 itan1 ulpos ulthick isFixedPitch

        set BFA($ttfname,ItalicAngle) [expr {$itan0 + $itan1 / 65536.0}]

        set flags 4 ; # "symbolic".
        if {$BFA($ttfname,ItalicAngle) != 0} {set flags [expr {$flags | 64}]}
        if {$usWeightClass >= 600} {set flags [expr {$flags | (1 << 18)}]}
        if {$isFixedPitch} {set flags [expr {$flags | 1}]}
        set BFA($ttfname,flags) $flags
        set BFA($ttfname,fixed) $isFixedPitch

        # hhea - Horizontal header table
        set ttfpos [lindex $ttftables(hhea) 1]
        binary scan $ttfdata "@${ttfpos}SuSux28SuSu" \
                ver_maj ver_min metricDataFormat numberOfHMetrics
        if {$ver_maj != 1} {
            throw "PDF4TCL" "unknown hhea table version"
        }
        if {$metricDataFormat != 0} {
            throw "PDF4TCL" "unknown horizontal metric data format"
        }
        if {$numberOfHMetrics == 0} {
            throw "PDF4TCL" "number of horizontal metrics is 0"
        }

        # maxp - Maximum profile table
        set ttfpos [lindex $ttftables(maxp) 1]
        binary scan $ttfdata "@${ttfpos}SuSuSu" \
                ver_maj ver_min numGlyphs
        if {$ver_maj != 1} {
            throw "PDF4TCL" "unknown maxp table version"
        }
        if {!$charInfo} return

        # We don't care of this earlier:
        if {$glyphDataFormat != 0} {
            throw "PDF4TCL" "unknown glyph data format"
        }

        # cmap - Character to glyph index mapping table
        set ttfpos [lindex $ttftables(cmap) 1]
        set cmap_offset $ttfpos
        binary scan $ttfdata "@${ttfpos}x2Su" cmapTableCount
        incr ttfpos 4

        set priority 0
        for {set f 0} {$f < $cmapTableCount} {incr f} {
            binary scan $ttfdata "@${ttfpos}SuSuIu" platformID encodingID offset
            incr ttfpos 8

            binary scan $ttfdata "@[expr {$cmap_offset+$offset}]Su" format
            if {$format ni [list 4 6 10 12 13]} continue

            switch -glob -- $platformID,$encodingID,$priority {
                3,10,* {set stoffset $offset; break}
                0,4,* - 0,6,* {set stoffset $offset; set priority 3}
                3,1,0 - 3,1,1 {set stoffset $offset; set priority 2}
                3,*,0 {set stoffset $offset; set priority 1}
                0,5,0 {continue}
                0,*,0 - 1,0,0 - 1,1,0 {set stoffset $offset}
            }
        }

        if {![info exists stoffset]} {
            throw "PDF4TCL" "font does not have cmap for Unicode"
        }

        set unicode_cmap_offset [expr {$cmap_offset + $stoffset}]
        binary scan $ttfdata "@${unicode_cmap_offset}Su" format

        switch -exact -- $format {
            4 {
                binary scan $ttfdata "@${unicode_cmap_offset}x2Su" length
                set ttfpos [expr {$unicode_cmap_offset + 6}]
                binary scan $ttfdata "@${ttfpos}Su" segCount
                set segCount [expr {$segCount / 2}]
                set limit [expr {$unicode_cmap_offset + $length}]
                set ttfpos [expr {$unicode_cmap_offset + 14}]
                binary scan $ttfdata "@${ttfpos}Su$segCount" endCount
                set ttfpos [expr {$ttfpos + 2*$segCount + 2}]
                binary scan $ttfdata "@${ttfpos}Su$segCount" startCount
                set ttfpos [expr {$ttfpos + 2*$segCount}]
                binary scan $ttfdata "@${ttfpos}S$segCount" idDelta
                set ttfpos [expr {$ttfpos + 2*$segCount}]
                set idRangeOffset_start $ttfpos
                binary scan $ttfdata "@${ttfpos}Su$segCount" idRangeOffset

                # Now it gets tricky.
                for {set f 0} {$f < $segCount} {incr f} {
                    set r_start [lindex $startCount $f]
                    set r_end   [lindex $endCount   $f]
                    for {set unichar $r_start} {$unichar <= $r_end} {incr unichar} {
                        set r_offset [lindex $idRangeOffset $f]
                        set r_delta [lindex $idDelta $f]
                        if {$r_offset == 0} {
                            set glyph [expr {($unichar + $r_delta) & 0xFFFF}]
                        } else {
                            set offset [expr {($unichar - $r_start) * 2 + $r_offset}]
                            set offset [expr {$idRangeOffset_start + 2 * $f + $offset}]
                            if {$offset > $limit} {
                                # workaround for broken fonts (like Thryomanes)
                                set glyph 0
                            } else {
                                binary scan $ttfdata "@${offset}Su" glyph
                                if {$glyph != 0} {
                                    set glyph [expr {($glyph + $r_delta) & 0xFFFF}]
                                }
                            }
                        }
                        dict set BFA($ttfname,charToGlyph) $unichar $glyph
                        lappend glyphToChar($glyph) $unichar
                    }
                }
            }
            6 {
                set ttfpos [expr {$unicode_cmap_offset + 6}]
                binary scan $ttfdata "@${ttfpos}SuSu" first count
                set last [expr {$first + $count}]
                incr ttfpos 4
                for {set unichar $first} {$unichar < $last} {incr unichar} {
                    binary scan $ttfdata "@${ttfpos}Su" glyph
                    dict set BFA($ttfname,charToGlyph) $unichar $glyph
                    lappend glyphToChar($glyph) $unichar
                    incr ttfpos 2
                }
            }
            10 {
                set ttfpos [expr {$unicode_cmap_offset + 12}]
                binary scan $ttfdata "@${ttfpos}IuIu" first count
                set last [expr {$first + $count}]
                incr ttfpos 4
                for {set unichar $first} {$unichar < $last} {incr unichar} {
                    binary scan $ttfdata "@${ttfpos}Su" glyph
                    dict set BFA($ttfname,charToGlyph) $unichar $glyph
                    lappend glyphToChar($glyph) $unichar
                    incr ttfpos 2
                }
            }
            12 {
                set ttfpos [expr {$unicode_cmap_offset + 12}]
                binary scan $ttfdata "@${ttfpos}Iu" segCount
                incr ttfpos 4
                for {set f 0} {$f < $segCount} {incr f} {
                    binary scan $ttfdata "@${ttfpos}IuIuIu" start end glyph
                    for {set unichar $start} {$unichar <= $end} {incr unichar} {
                        dict set BFA($ttfname,charToGlyph) $unichar $glyph
                        lappend glyphToChar($glyph) $unichar
                        incr glyph
                    }
                    incr ttfpos 12
                }
            }
            13 {
                set ttfpos [expr {$unicode_cmap_offset + 12}]
                binary scan $ttfdata "@${ttfpos}Iu" segCount
                incr ttfpos 4
                for {set f 0} {$f < $segCount} {incr f} {
                    binary scan $ttfdata "@${ttfpos}IuIuIu" start end glyph
                    for {set unichar $start} {$unichar <= $end} {incr unichar} {
                        dict set BFA($ttfname,charToGlyph) $unichar $glyph
                        lappend glyphToChar($glyph) $unichar
                    }
                    incr ttfpos 12
                }
            }
        }

        #-----------------------------------------------------
        # hmtx - Horizontal metrics table
        # (needs data from hhea, maxp, and cmap tables)
        set ttfpos [lindex $ttftables(hmtx) 1]
        for {set glyph 0} {$glyph < $numberOfHMetrics} {incr glyph} {
            # advance width and left side bearing. lsb is actually signed
            # short, but we don't need it anyway (except for subsetting)
            binary scan $ttfdata "@${ttfpos}SuSu" aw lsb
            incr ttfpos 4
            lappend BFA($ttfname,hmetrics) [list $aw $lsb]
            set aws [Rescale $aw]
            if {$glyph == 0} {set BFA($ttfname,defaultWidth) $aws}
            if {[info exists glyphToChar($glyph)]} {
                foreach char $glyphToChar($glyph) {
                    dict set BFA($ttfname,charWidths) $char $aws
                }
            }
        }

        # The rest of the table only lists advance left side bearings.
        # so we reuse aw set by the last iteration of the previous loop.
        # -- BUG (in reportlab) fixed here: aw used scaled in hmetrics,
        # -- i.e. float (must be int)
        for {set glyph $numberOfHMetrics} {$glyph < $numGlyphs} {incr glyph} {
            binary scan $ttfdata "@${ttfpos}Su" lsb
            incr ttfpos 2
            lappend BFA($ttfname,hmetrics) [list $aw $lsb]
            if {[info exists glyphToChar($glyph)]} {
                foreach char $glyphToChar($glyph) {
                    dict set BFA($ttfname,charWidths) $char $aws
                }
            }
        }

        # loca - Index to location
        if {![info exists ttftables(loca)]} {
            throw "PDF4TCL" "font does not have \"loca\" part"
        }
        set ttfpos [lindex $ttftables(loca) 1]
        incr numGlyphs
        if {$indexToLocFormat == 0} {
            binary scan $ttfdata "@${ttfpos}Su$numGlyphs" glyphPositions
            foreach el $glyphPositions {
                lappend BFA($ttfname,glyphPos) [expr {$el << 1}]
            }
        } elseif {$indexToLocFormat == 1} {
            binary scan $ttfdata "@${ttfpos}Iu$numGlyphs" BFA($ttfname,glyphPos)
        } else {
            throw "PDF4TCL" "unknown location table format $indexToLocFormat"
        }
    }

    proc Rescale {x} {
        variable BFA
        variable ttfname
        return [expr {$x * 1000.0 / $BFA($ttfname,unitsPerEm)}]
    }

    proc ConvertToUTF16BE {uchar} {
        if {$uchar < 65536} {
            return $uchar
        }
        set uchar [expr {$uchar - 0x010000}]
        return [expr {((0xD800 + ($uchar >> 10)) << 16) + (0xDC00 + ($uchar & 0x3FF))}]
    }

    # Creates a ToUnicode CMap for a given subset.
    proc MakeToUnicodeCMap {fontname subset} {
        set len [llength $subset]
        set cmap "/CIDInit /ProcSet findresource begin\n"
        append cmap "12 dict begin\n"
        append cmap "begincmap\n"
        append cmap "/CIDSystemInfo\n"
        append cmap "<< /Registry ($fontname)\n"
        append cmap "/Ordering ($fontname)\n"
        append cmap "/Supplement 0\n"
        append cmap ">> def\n"
        append cmap "/CMapName /$fontname def\n"
        append cmap "/CMapType 2 def\n"
        append cmap "1 begincodespacerange\n"
        append cmap "<00> <[format %02X [expr {$len-1}]]>\n"
        append cmap "endcodespacerange\n"
        append cmap "$len beginbfchar\n"
        set f 0
        foreach uchar $subset {
            append cmap [format "<%02X> <%04X>\n" $f [ConvertToUTF16BE $uchar]]
            incr f
        }
        append cmap "endbfchar\n"
        append cmap "endcmap\n"
        append cmap "CMapName currentdict /CMap defineresource pop\n"
        append cmap "end\n"
        append cmap "end\n"
        return $cmap
    }

    # Create a subset of a TrueType font. Subset is a list of unicode values.
    proc MakeTTFSubset {bfname fontname subset} {
        variable BFA
        variable BFP
        variable FontsAttrs

        set GF_ARG_1_AND_2_ARE_WORDS     [expr {1 << 0}]
        set GF_WE_HAVE_A_SCALE           [expr {1 << 3}]
        set GF_MORE_COMPONENTS           [expr {1 << 5}]
        set GF_WE_HAVE_AN_X_AND_Y_SCALE  [expr {1 << 6}]
        set GF_WE_HAVE_A_TWO_BY_TWO      [expr {1 << 7}]

        # Build a mapping of glyphs in the subset to glyph numbers in
        # the original font.  Also build a mapping of UCS codes to
        # glyph values in the new font.

        # Start with 0 -> 0: "missing character"
        set glyphMap [list 0] ; # new glyph index -> old glyph index
        set glyphSet(0) 0     ; # old glyph index -> new glyph index
        #codeToGlyph            # unicode -> new glyph index
        foreach code $subset {
            if {[dict exists $BFA($bfname,charToGlyph) $code]} {
                set originalGlyphIdx [dict get $BFA($bfname,charToGlyph) $code]
            } else {
                set originalGlyphIdx 0
            }
            if {![info exists glyphSet($originalGlyphIdx)]} {
                set glyphSet($originalGlyphIdx) [llength $glyphMap]
                lappend glyphMap $originalGlyphIdx
            }
            set codeToGlyph($code) $glyphSet($originalGlyphIdx)
        }

        # Also include glyphs that are parts of composite glyphs
        set n 0
        while {$n < [llength $glyphMap]} {
            set originalGlyphIdx [lindex $glyphMap $n]
            set glyphPos [lindex $BFA($bfname,glyphPos) $originalGlyphIdx]
            set glyphEnd [lindex $BFA($bfname,glyphPos) $originalGlyphIdx+1]
            set glyphLen [expr {$glyphEnd - $glyphPos}]
            set cpos $glyphPos
            binary scan $BFP($bfname,glyf) "@${cpos}S" numberOfContours
            if {$numberOfContours < 0} {
                # composite glyph
                incr cpos 10
                set flags $GF_MORE_COMPONENTS
                while {$flags & $GF_MORE_COMPONENTS} {
                    binary scan $BFP($bfname,glyf) "@${cpos}SuSu" flags glyphIdx
                    incr cpos 4
                    if {![info exists glyphSet($glyphIdx)]} {
                        set glyphSet($glyphIdx) [llength $glyphMap]
                        lappend glyphMap $glyphIdx
                    }

                    if {$flags & $GF_ARG_1_AND_2_ARE_WORDS} {
                        incr cpos 4
                    } else {
                        incr cpos 2
                    }

                    if {$flags & $GF_WE_HAVE_A_SCALE} {
                        incr cpos 2
                    } elseif {$flags & $GF_WE_HAVE_AN_X_AND_Y_SCALE} {
                        incr cpos 4
                    } elseif {$flags & $GF_WE_HAVE_A_TWO_BY_TWO} {
                        incr cpos 8
                    }
                }
            }
            incr n
        }

        set n [llength $glyphMap]
        set numGlyphs $n

        while {$n > 1 && \
                [lindex $BFA($bfname,hmetrics) $n 0] == \
                [lindex $BFA($bfname,hmetrics) $n-1 0]} {
            incr n -1
        }
        set numberOfHMetrics $n

        # post - PostScript
        set    t(post) "\x00\x03\x00\x00"
        append t(post) [string range $BFP($bfname,post) 4 15]
        append t(post) [string repeat "\0" 16]

        # hhea - Horizontal Header
        set    t(hhea) [string range $BFP($bfname,hhea) 0 33]
        append t(hhea) [binary format Su $numberOfHMetrics]
        append t(hhea) [string range $BFP($bfname,hhea) 36 end]

        # maxp - Maximum Profile
        set    t(maxp) [string range $BFP($bfname,maxp) 0 3]
        append t(maxp) [binary format Su $numGlyphs]
        append t(maxp) [string range $BFP($bfname,maxp) 6 end]

        # cmap - Character to glyph mapping
        set entryCount [llength $subset]
        set length [expr {10 + $entryCount * 2}]
        foreach char $subset {lappend tlist $codeToGlyph($char)}
        set t(cmap) [binary format "SuSuSuSuSuSuSuSuSuSuSuSu*" 0 1 1 0 0 12 6 \
                $length 0 0 $entryCount $tlist]

        # hmtx - Horizontal Metrics
        for {set f 0} {$f < $numGlyphs} {incr f} {
            set originalGlyphIdx [lindex $glyphMap $f]
            foreach {aw lsb} [lindex $BFA($bfname,hmetrics) $originalGlyphIdx] break
            if {$f < $numberOfHMetrics} {
                append t(hmtx) [binary format Su $aw]
            }
            append t(hmtx) [binary format Su $lsb]
        }

        # glyf - Glyph data
        set pos 0
        for {set f 0} {$f < $numGlyphs} {incr f} {
            lappend offsets $pos
            set originalGlyphIdx [lindex $glyphMap $f]
            set glyphPos [lindex $BFA($bfname,glyphPos) $originalGlyphIdx]
            set glyphEnd [lindex $BFA($bfname,glyphPos) $originalGlyphIdx+1]
            set glyphLen [expr {$glyphEnd - $glyphPos}]
            set glyphEndPos [expr {$glyphPos + $glyphLen - 1}]
            set data [string range $BFP($bfname,glyf) $glyphPos $glyphEndPos]
            # Fix references in composite glyphs
            if {$glyphLen > 2} {
                binary scan $data "S" compos
                if {$compos < 0} {
                    set pos_in_glyph 10
                    set flags $GF_MORE_COMPONENTS
                    while {$flags & $GF_MORE_COMPONENTS} {
                        binary scan $data "@${pos_in_glyph}SuSu" flags glyphIdx
                        set odata $data
                        set data    [string range $odata 0 $pos_in_glyph+1]
                        append data [binary format Su $glyphSet($glyphIdx)]
                        append data [string range $odata $pos_in_glyph+4 end]
                        incr pos_in_glyph 4
                        if {$flags & $GF_ARG_1_AND_2_ARE_WORDS} {
                            incr pos_in_glyph 4
                        } else {
                            incr pos_in_glyph 2
                        }
                        if {$flags & $GF_WE_HAVE_A_SCALE} {
                            incr pos_in_glyph 2
                        } elseif {$flags & $GF_WE_HAVE_AN_X_AND_Y_SCALE} {
                            incr pos_in_glyph 4
                        } elseif {$flags & $GF_WE_HAVE_A_TWO_BY_TWO} {
                            incr pos_in_glyph 8
                        }
                    }
                }
            }
            append t(glyf) $data
            incr pos $glyphLen
            if {$pos % 4 != 0}  {
                set padding [expr {4 - $pos % 4}]
                append t(glyf) [string repeat "\0" $padding]
                incr pos $padding
            }

        }
        lappend offsets $pos

        # loca - Index to location
        if {(($pos + 1) >> 1) > 0xFFFF} {
            set indexToLocFormat 1 ; # long format
            set t(loca) [binary format "Iu*" $offsets]
        } else {
            set indexToLocFormat 0 ; # short format
            foreach offset $offsets {
                append t(loca) [binary format "Su" [expr {$offset >> 1}]]
            }
        }

        # head - Font header
        set    t(head) [string range $BFP($bfname,head) 0 7]
        append t(head) [string repeat "\0" 4]
        append t(head) [string range $BFP($bfname,head) 12 49]
        append t(head) [binary format Su $indexToLocFormat]
        append t(head) [string range $BFP($bfname,head) 52 end]
        #----------------------------------------------------------------------
        set tables [lsort -unique [concat $BFA($bfname,tables) [array names t]]]
        set numTables [llength $tables]

        set searchRange 1
        set entrySelector 0

        while {$searchRange * 2 <= $numTables} {
            set searchRange [expr {$searchRange * 2}]
            incr entrySelector
        }
        set searchRange [expr {$searchRange * 16}]
        set rangeShift [expr {$numTables * 16 - $searchRange}]

        # Header
        set res [binary format "IuSuSuSuSu" [expr {0x00010000}] $numTables \
                $searchRange $entrySelector $rangeShift]

        # Table directory
        set offset [expr {12 + $numTables * 16}]
        foreach tag $tables {
            if {$tag eq "head"} {set head_start $offset}
            if {[info exists t($tag)]} {
                set len [string length $t($tag)]
                set checksum [CalcTTFCheckSum $t($tag) 0 $len]
            } else {
                set len [string length $BFP($bfname,$tag)]
                set checksum [CalcTTFCheckSum $BFP($bfname,$tag) 0 $len]
            }
            append res [binary format a4IuIuIu $tag $checksum $offset $len]
            incr offset [expr {($len + 3) & ~3}]
        }

        # Table data.
        foreach tag $tables {
            if {[info exists t($tag)]} {
                set len [string length $t($tag)]
                append res $t($tag)
            } else {
                set len [string length $BFP($bfname,$tag)]
                append res $BFP($bfname,$tag)
            }
            append res [string repeat "\0" [expr {(4 - ($len & 3)) & 3}]]
        }

        set len [string length $res]
        set checksum [CalcTTFCheckSum $res 0 $len]
        incr head_start 7

        set checksum [expr {(0xB1B0AFBA - $checksum) & 0xFFFFFFFF}]
        set res "[string range $res 0 $head_start][binary format Iu $checksum][string range $res $head_start+5 end]"

        set FontsAttrs($fontname,data) $res
        set FontsAttrs($fontname,SubFontIdx) $BFA($bfname,SubFontIdx)
        incr BFA($bfname,SubFontIdx)
    }

    # make subfont name
    proc MakeSFNamePrefix {idx} {
        string map {0 A 1 B 2 C 3 D 4 E 5 F 6 G 7 H 8 I 9 J} [format %06d $idx]
    }

    # ----- General font support -----
    # Create Font from BaseFont:
    proc createFont {bfname fontname enc_name} {
        variable FontsAttrs
        variable BFA
        variable Fonts

        set subset [list]
        for {set f 0} {$f<256} {incr f} {lappend codes $f}
        set uchars [encoding convertfrom $enc_name [binary format cu* $codes]]
        foreach unichar [split $uchars {}]  {
            lappend subset [scan $unichar %c]
        }

        if {$BFA($bfname,FontType) eq "TTF"} {
            # Create TTF subset here:
            MakeTTFSubset $bfname $fontname $subset
            set FontsAttrs($fontname,type) TTF
        } else {
            set FontsAttrs($fontname,type) Type1
        }

        lappend Fonts $fontname
        set FontsAttrs($fontname,basefontname) $bfname
        set FontsAttrs($fontname,uniset) $subset
        set FontsAttrs($fontname,specialencoding) 0
        set FontsAttrs($fontname,encoding) $enc_name
    }

    # Give list of available fonts
    proc getFonts {} {
        variable Fonts
        return $Fonts
    }

    # subset must be a list of unicode values:
    proc createFontSpecEnc {bfname fontname subset} {
        variable FontsAttrs
        variable BFA
        variable Fonts

        if {$BFA($bfname,FontType) eq "TTF"} {
            # Create TTF subset here:
            MakeTTFSubset $bfname $fontname $subset
            set FontsAttrs($fontname,type) TTF
        } else {
            set FontsAttrs($fontname,type) Type1
        }

        lappend Fonts $fontname
        set FontsAttrs($fontname,basefontname) $bfname
        set FontsAttrs($fontname,uniset) $subset
        set FontsAttrs($fontname,specialencoding) 1
        set FontsAttrs($fontname,encoding) {}

        set symcode 0
        foreach ucode $subset {
            set uchar [format %c $ucode]
            dict set FontsAttrs($fontname,encoding) $uchar \
                    [binary format cu $symcode]
            incr symcode
        }
    }

    # ===== Procs for Type1 fonts processing =====

    # Create encoding differences list:
    proc MakeEncDiff {BFN fontname} {
        variable BFA

        # get WinAnsiEncoding unicodes:
        for {set f 0} {$f < 256} {incr f} {lappend bcodes $f}
        set bchars [encoding convertfrom cp1252 [binary format cu* $bcodes]]
        foreach unichar [split $bchars {}]  {
            lappend bset [scan $unichar %c]
        }

        set f 0
        set res [list]
        set eqflag 1
        foreach ucode $::pdf4tcl::FontsAttrs($fontname,uniset) bcode $bset {
            if {$ucode != $bcode} {
                if {$eqflag} {lappend res $f}
                if {[dict exists $BFA($BFN,uni2glyph) $ucode]} {
                    lappend res "/[dict get $BFA($BFN,uni2glyph) $ucode]"
                } else {
                    lappend res "/.notdef"
                }
                set eqflag 0
            } else {
                set eqflag 1
            }
            incr f
        }
        return $res
    }

    proc PfbCheck {pos data mark} {
        binary scan $data "@${pos}cucu" d0 d1
        if {($d0 != 0x80) || ($d1 != $mark)} {
            throw "PDF4TCL" "bad pfb data at $pos"
        }
        if {$mark == 3} return; #PFB_EOF
        incr pos 2
        binary scan $data "@${pos}iu" l
        incr pos 4
        set npos [expr {$pos + $l}]
        if {$npos > [string length $data]} {
            throw "PDF4TCL" "pfb data is too short"
        }
        return $npos
    }

    # There's no need to create NEW binary stream, use font as is:
    proc ParsePFB {} {
        variable type1PFB
        variable type1name
        variable BFA
        set p1 [PfbCheck 0 $type1PFB 1]
        set p2 [PfbCheck $p1 $type1PFB 2]
        set p3 [PfbCheck $p2 $type1PFB 1]
        PfbCheck $p3 $type1PFB 3
        set BFA($type1name,Length1) [expr {$p1-6}]
        set BFA($type1name,Length2) [expr {$p2-$p1-6}]
        set BFA($type1name,Length3) [expr {$p3-$p2-6}]
        # Extract the type 1 font from PFB
        set d1 [string range $type1PFB 6 [expr {$p1 - 1}]]
        set d2 [string range $type1PFB [expr {$p1 + 6}] [expr {$p2 - 1}]]
        set d3 [string range $type1PFB [expr {$p2 + 6}] [expr {$p3 - 1}]]
        set BFA($type1name,data) $d1$d2$d3
    }

    # Creates charWidths and mapping 'unicode=>glyph_name' for this font.
    proc ParseAFM {} {
        variable type1AFM
        variable type1name
        variable BFA
        variable GlName2Uni

        array set nmap {Ascender ascend Descender descend FontBBox bbox}
        set BFA($type1name,ascend) 1000
        set BFA($type1name,descend) 0
        set BFA($type1name,CapHeight) 1000
        set BFA($type1name,ItalicAngle) 0
        set BFA($type1name,stemV) 0
        set BFA($type1name,bbox) [list 0 0 1000 1000]

        set lineslst [split $type1AFM "\n"]
        if {[llength $lineslst] < 2} {
            throw "PDF4TCL" "AFM hasn't enough data"
        }

        set InMetrics 0
        set InHeader 0
        foreach line $lineslst {
            if {[string equal -nocase -length 7 $line comment]} continue
            # StartCharMetrics terminates header:
            switch -nocase -glob -- $line {
                "StartCharMetrics*" {set InMetrics 1; continue}
                "StartFontMetrics*" {set InHeader 1; continue}
                "EndCharMetrics*"   {break}
            }

            if {$InMetrics} {
                set toklst [list]
                set reslst [list]
                # Create toklst -- list of needed tokens (only starting three):
                foreach chunk [lrange [split $line ";"] 0 2] {
                    foreach el $chunk {
                        lappend toklst $el
                    }
                }
                # Convert and store tokens:
                foreach {l r} $toklst {et ss} [list C %d WX %d N %s] {
                    if {$l != $et} {
                        throw "PDF4TCL" "bad line in font AFM ($et)"
                    }
                    if {![scan $r $ss val]} {
                        throw "PDF4TCL" "incorrect '$et' value in font AFM"
                    }
                    lappend reslst $val
                }
                # Must create charWidths and font's Uni2Glyph here:
                set N  [lindex $reslst 2]
                set WX [lindex $reslst 1]

                set ucode -1
                if {$N ne ".notdef"} {
                    catch {set ucode $GlName2Uni($N)}
                } else {
                    set ucode 0
                }
                if {($ucode == -1) && [string equal -length 3 $N "uni"]} {
                    scan $N "uni%x" ucode
                }

                if {$ucode != -1} {
                    dict set BFA($type1name,charWidths) $ucode $WX
                    dict set BFA($type1name,uni2glyph) $ucode $N
                }
            } elseif {$InHeader} {
                # Split into 2 parts on first space:
                set idx [string first " " $line]
                set l [string range $line 0 $idx-1]
                set r [string range $line $idx+1 end]
                if {[info exists nmap($l)]} {
                    set l $nmap($l)
                }
                set BFA($type1name,$l) $r
            }
        }
    }

    proc createBaseType1Font {basefontname afm_data pfb_data} {
        variable type1name $basefontname
        variable type1AFM $afm_data
        variable type1PFB $pfb_data
        InitBaseType1
    }

    proc loadBaseType1Font {basefontname AFMfilename PFBfilename} {
        variable type1name $basefontname
        variable type1AFM
        variable type1PFB
        set fd [open $AFMfilename "r"]
        set type1AFM [read $fd]
        close $fd
        set fd [open $PFBfilename "rb"]
        set type1PFB [read $fd]
        close $fd
        InitBaseType1
    }

    proc InitBaseType1 {} {
        variable type1name
        variable type1AFM
        variable type1PFB
        ParseAFM
        ParsePFB
        set ::pdf4tcl::BFA($type1name,FontType) Type1
        unset -nocomplain type1PFB
        unset -nocomplain type1AFM
        unset -nocomplain type1name
    }

    # The incoming RGB must contain three values in the range 0.0 to 1.0
    # The return value is CMYK as a list of values in the range 0.0 to 1.0
    proc rgb2Cmyk {RGB} {
        foreach {r g b} $RGB break

        # Black, including some margin for float roundings
        if {$r <= 0.00001 && $g <= 0.00001 && $b <= 0.00001} {
            return [list 0.0 0.0 0.0 1.0]
        }
        set c [expr {1.0 - $r}]
        set m [expr {1.0 - $g}]
        set y [expr {1.0 - $b}]

        # k is min of c/m/y
        set k [expr {min($c, $m, $y)}]
        # k is less than 1 since only black would give exactly 1
        # so all divisions are safe.
        # Since k is min, all numerators are >= 0
        # All numerators are <= denominators, leaving all results <= 1.0
        set c [expr {($c - $k) / (1.0 - $k)}]
        set m [expr {($m - $k) / (1.0 - $k)}]
        set y [expr {($y - $k) / (1.0 - $k)}]

        return [list $c $m $y $k]
    }

    # The incoming CMYK must contain four values in the range 0.0 to 1.0
    # The return value is RGB as a list of values in the range 0.0 to 1.0
    proc cmyk2Rgb {CMYK} {
        foreach {c m y k} $CMYK break

        # Black, including some margin for float roundings
        if {$k >= 0.99999} {
            return [list 0.0 0.0 0.0]
        }

        set c [expr {$c * (1.0 - $k) + $k}]
        set m [expr {$m * (1.0 - $k) + $k}]
        set y [expr {$y * (1.0 - $k) + $k}]

        set r [expr {1.0 - $c}]
        set g [expr {1.0 - $m}]
        set b [expr {1.0 - $y}]

        return [list $r $g $b]
    }
}

#######################################################################
# Object used for generating pdf
#######################################################################
catch {oo::class create ::pdf4tcl::pdf4tcl}
oo::define ::pdf4tcl::pdf4tcl {
    variable pdf
    # In 8.5 recode these as dicts within the pdf array
    variable images
    variable files
    variable fonts
    variable bitmaps
    variable extgs
    variable patterns
    variable grads
    variable metadata
    # Array of type1 base fonts already included in this PDF file:
    variable type1basefonts

    #######################################################################
    # Snit-like option handling
    #######################################################################
    variable options

    # Define an option
    # Should be called from constructor
    method Option {option args} {
        my variable optiondefs
        my variable optiondeflist

        dict set optiondefs $option -readonly 0
        dict set optiondefs $option -default ""
        dict set optiondefs $option -validatemethod ""
        dict set optiondefs $option -configuremethod ""
        dict set optiondefs $option _Initialised 0

        foreach {opt val} $args {
            dict set optiondefs $option $opt $val
        }
        set options($option) [dict get $optiondefs $option -default]
        # Keep a nice list available
        set optiondeflist [lsort -dictionary [dict keys $optiondefs]]
    }

    # Handle a configuration command.
    # Should always be called from constructor
    method Configurelist {lst} {
        my variable optiondefs
        my variable optiondeflist
        if {[llength $lst] % 2 != 0} {
            throw "PDF4TCL" "wrong number of args"
        }
        foreach {option value} $lst {
            # TODO: recode to use prefix matching
            #tcl::prefix match $optiondeflist $option
            if {![dict exists $optiondefs $option]} {
                throw "PDF4TCL" "unknown option \"$option\""
            }
            if {[dict get $optiondefs $option -readonly] && \
                        [dict get $optiondefs $option _Initialised]} {
                throw "PDF4TCL" \
                        "option $option can only be set at instance creation"
            }
            if {[dict get $optiondefs $option -validatemethod] ne ""} {
                ##nagelfar ignore Non static subcommand
                my [dict get $optiondefs $option -validatemethod] \
                        $option $value
            }
            if {[dict get $optiondefs $option -configuremethod] ne ""} {
                ##nagelfar ignore Non static subcommand
                my [dict get $optiondefs $option -configuremethod] \
                        $option $value
            } else {
                set options($option) $value
            }
            dict set optiondefs $option _Initialised 1
        }
        foreach option [dict keys $optiondefs] {
            if {![dict get $optiondefs $option _Initialised]} {
                # Uninitialised options should get their defaults through
                # configuremethod if there is any.
                if {[dict get $optiondefs $option -configuremethod] ne ""} {
                    ##nagelfar ignore Non static subcommand
                    my [dict get $optiondefs $option -configuremethod] \
                            $option [dict get $optiondefs $option -default]
                }
                dict set optiondefs $option _Initialised 1
            }
        }
    }

    method cget {option} {
        return $options($option)
    }

    method configure {args} {
        if {$args eq {}} {
            return [array get options]
        }
        if {[llength $args] == 1} {
            return $options([lindex $args 0])
        }
        my Configurelist $args
    }

    #######################################################################
    # Option handling methods
    #######################################################################

    # Validator for -paper
    method CheckPaper {option value} {
        set papersize [pdf4tcl::getPaperSize $value]
        if {[llength $papersize] == 0} {
            throw "PDF4TCL" "papersize \"$value\" is unknown"
        }
    }

    # Validator for -unit
    method CheckUnit {option value} {
        if {![info exists ::pdf4tcl::units($value)]} {
            throw "PDF4TCL" "unit \"$value\" is unknown"
        }
    }

    # Validator for -margin
    method CheckMargin {option value} {
        switch [llength $value] {
            1 - 2 - 4 {
                foreach elem $value {
                    if {[catch {pdf4tcl::getPoints $elem}]} {
                        throw "PDF4TCL" "bad margin value \"$elem\""
                    }
                }
            }
            default {
                throw "PDF4TCL" "bad margin list \"$value\""
            }
        }
    }

    # Validator for boolean options
    method CheckBoolean {option value} {
        if {![string is boolean -strict $value]} {
            throw "PDF4TCL" "option $option must have a boolean value"
        }
    }

    # Validator for word restricted options
    method CheckWord {option value} {
        if {![string is wordchar -strict $value]} {
            throw "PDF4TCL" "option $option must be alphanumeric"
        }
    }

    # Validator for -rotate
    method CheckRotation {option value} {
        my CheckNumeric $value rotation -nonnegative -integer
        if { $value % 90  } {
            throw "PDF4TCL" "rotation $value not a multiple of 90"
        }
    }

    # Validator helper for numerics
    ##nagelfar syntax _obj,pdf4tcl\ CheckNumeric x x o*
    ##nagelfar option _obj,pdf4tcl\ CheckNumeric \
            -nonnegative -positive -integer -unit
    ##nagelfar option _obj,pdf4tcl\ CheckNumeric\ -unit x
    method CheckNumeric {val what args} {
        set origVal $val
        # If -unit is given, the value should be interpreted by getPoints
        set i [lsearch -exact $args -unit]
        if {$i >= 0} {
            set unit [lindex $args [expr {$i + 1}]]
            if {[catch {pdf4tcl::getPoints $val $unit} p]} {
                throw "PDF4TCL" "bad $what \"$val\", must be numeric"
            }
            set val $p
        }
        if {![string is double -strict $val]} {
            throw "PDF4TCL" "bad $what \"$origVal\", must be numeric"
        }
        set nonneg [lsearch -exact $args -nonnegative]
        set pos    [lsearch -exact $args -positive]
        set int    [lsearch -exact $args -integer]
        if {$nonneg >= 0 && $val < 0} {
            throw "PDF4TCL" "bad $what \"$origVal\", may not be negative"
        }
        if {$pos >= 0 && $val <= 0} {
            throw "PDF4TCL" "bad $what \"$origVal\", must be positive"
        }
        if {$int >= 0 && ![string is integer -strict $val]} {
            throw "PDF4TCL" "bad $what \"$origVal\", must be integer"
        }
        return $val
    }

    # Configure method for page properties
    method SetPageOption {option value} {
        set options($option) $value
        # Fill in page properties
        my SetPageSize   $options(-paper) $options(-landscape) \
                $options(-rotate)
        my SetPageMargin $options(-margin)
    }

    # Configure method for -unit
    method SetUnit {option value} {
        set options($option) $value
        set pdf(unit) $::pdf4tcl::units($value)
    }

    #######################################################################
    # Constructor
    #######################################################################

    constructor {args} {
        # Object should be able to find pdf4tcl help procedures
        namespace path [list {*}[namespace path] ::pdf4tcl]
        set pdf(bookmarks) {}
        set pdf(forms) {}

        # The unit translation factor is needed before parsing arguments
        set pdf(unit) 1.0

        my Option -file      -default "" -readonly 1
        my Option -paper     -default a4     -validatemethod CheckPaper \
                -configuremethod SetPageOption
        my Option -landscape -default 0      -validatemethod CheckBoolean \
                -configuremethod SetPageOption
        my Option -orient    -default 1      -validatemethod CheckBoolean
        my Option -cmyk      -default 0      -validatemethod CheckBoolean \
                -readonly 1
        my Option -unit      -default p      -validatemethod CheckUnit \
                -configuremethod SetUnit -readonly 1
        my Option -compress  -default 1      -validatemethod CheckBoolean \
                -readonly 1
        my Option -margin    -default 0      -validatemethod CheckMargin \
                -configuremethod SetPageOption
        my Option -rotate    -default 0      -validatemethod CheckRotation \
                -configuremethod SetPageOption

        my Configurelist $args

        # Document data
        set pdf(pages) {}
        set pdf(pdf_obj) 4 ;# Objects 1-3 are reserved for use in "finish"
        set pdf(out_pos) 0
        set pdf(data_start) 0
        set pdf(data_len) 0
        array set fonts {}
        array set type1basefonts {}
        set pdf(font_set) false
        set pdf(in_text_object) false
        array set images {}
        array set files {}
        array set bitmaps {}
        array set extgs {}
        array set patterns {}
        array set grads {}
        set pdf(objects) {}
        set pdf(compress) $options(-compress)
        set pdf(finished) false
        set pdf(inPage) false
        set pdf(fillColor) [list 0 0 0]
        set pdf(bgColor) [list 0 0 0]
        set pdf(strokeColor) [list 0 0 0]
        # start without default font
        set pdf(font_size) 1
        set pdf(current_font) ""
        set pdf(line_spacing) 1.0
        # The gsave/grestore commands affect the graphics and text state in
        # the PDF document. Some of those are kept in copy in pdf4tcl and thus
        # should be restored as well. The following variable lists all elements
        # of pdf() that contains such state.
        # xpos or ypos in saved?
        set tmp {
            # Graphics State:
            # fillColor is normally associated with the "rg" operator
            fillColor
            # strokeColor is normally associated with the "RG" operator
            strokeColor
            # bgColor is a pdf4tcl thing, but stored for symmetry
            bgColor
            # Other Graphics State are not stored

            # Text State stores font/size:
            current_font
            font_size
            # line_spacing is a pdf4tcl thing, but stored for symmetry
            line_spacing
        }
        # Trick to allow comments in above list
        set pdf(stateToGSave) [regsub -all -line "\#.*" $tmp ""]

        # Page data
        # Fill in page properties
        my SetPageSize   $options(-paper) $options(-landscape) \
                $options(-rotate)
        my SetPageMargin $options(-margin)
        set pdf(orient) $options(-orient)
        set pdf(cmyk) $options(-cmyk)

        # The first buffer is for collecting page data until end of page.
        # This is to support compressing whole pages.
        set pdf(ob) ""

        # Write to file directly if requested.
        set pdf(ch) ""
        if {$options(-file) ne ""} {
            if {[catch {open $options(-file) "w"} ch]} {
                throw "PDF4TCL" "could not open file $options(-file) for writing: $ch"
            }
            fconfigure $ch -translation binary
            set pdf(ch) $ch
        }

        # collect output in memory
        set pdf(pdf) ""

        # Start on pdfout
        my Pdfout "%PDF-1.4\n"
        set pdf(version) 1.4
        # Add some chars >= 0x80 as recommended by the PDF standard
        # to make it easy to detect that this is not an ASCII file.
        my Pdfout "%\xE5\xE4\xF6\n"
    }

    destructor {
        # Close any open channel
        if {[info exists pdf(ch)] && $pdf(ch) ne ""} {
            catch {my finish}
            catch {close $pdf(ch)}
            set pdf(ch) ""
        }
    }

    # This is only for internal testing
    method DebugGetInternalState {} {
        array get pdf
    }
    export DebugGetInternalState

    #######################################################################
    # Collect PDF Output
    #######################################################################

    # Add raw data to accumulated pdf output
    method Pdfout {out} {
        append pdf(ob) $out
        incr pdf(out_pos) [string length $out]
    }

    # Add line of words to accumulated pdf output
    method Pdfoutn {args} {
        set out [join $args " "]\n
        my Pdfout $out
    }

    # Helper to format a line consisting of numbers and last a command
    method Pdfoutcmd {args} {
        set str ""
        foreach num [lrange $args 0 end-1] {
            append str [Nf $num] " "
        }
        append str "[lindex $args end]\n"
        my Pdfout $str
    }

    # Move data from pdf(ob) cache to final destination.
    # Return number of bytes added
    method Flush {{compress 0}} {
        set data $pdf(ob)
        set pdf(ob) ""
        if {$compress} {
            set data [zlib compress $data]
        }
        set len [string length $data]
        if {$pdf(ch) eq ""} {
            append pdf(pdf) $data
        } else {
            puts -nonewline $pdf(ch) $data
        }
        return $len
    }

    #######################################################################
    # ?? Handling
    #######################################################################

    # If any feature requires PDF version > 1.4 they should call this
    method RequireVersion {version} {
        if {$version > $pdf(version)} {
            set pdf(version) $version
        }
    }

    #######################################################################
    # Page Handling
    #######################################################################

    # Fill in page margin from a user specified value
    method SetPageMargin {value} {
        set value2 {}
        foreach val $value {
            lappend value2 [pdf4tcl::getPoints $val $pdf(unit)]
        }
        switch -- [llength $value2] {
            1 {
                set pdf(marginleft)   [lindex $value2 0]
                set pdf(marginright)  [lindex $value2 0]
                set pdf(margintop)    [lindex $value2 0]
                set pdf(marginbottom) [lindex $value2 0]
            }
            2 {
                set pdf(marginleft)   [lindex $value2 0]
                set pdf(marginright)  [lindex $value2 0]
                set pdf(margintop)    [lindex $value2 1]
                set pdf(marginbottom) [lindex $value2 1]
            }
            4 {
                set pdf(marginleft)   [lindex $value2 0]
                set pdf(marginright)  [lindex $value2 1]
                set pdf(margintop)    [lindex $value2 2]
                set pdf(marginbottom) [lindex $value2 3]
            }
            default { ##nagelfar nocover
                # This should not happen since validation should catch it
                puts "ARARARARARAR '$value'"
            }
        }
    }

    # Fill in page data from options
    method SetPageSize {paper landscape rotation} {
        set papersize [pdf4tcl::getPaperSize $paper $pdf(unit)]
        set width  [lindex $papersize 0]
        set height [lindex $papersize 1]

        # Switch if landscape has been asked for
        if {$landscape} {
            Swap width height
        }
        set pdf(width)  $width
        set pdf(height) $height
        set pdf(xpos)   0
        set pdf(ypos)   $height
        set pdf(rotate) $rotation
        set pdf(origxpos) 0
        set pdf(origypos) $height
    }

    # Start on a new XObject
    method startXObject {args} {
        # Get some defaults from document
        set localopts(-orient)    $options(-orient)
        set localopts(-landscape) 0
        set localopts(-margin)    0
        set localopts(-paper)     {100p 100p}
        set localopts(-rotate)    0
        set localopts(-noimage)   0
        set localopts(-xobject)   1

        # Parse options
        foreach {option value} $args {
            switch -- $option {
                -paper {
                    my CheckPaper $option $value
                }
                -landscape {
                    my CheckBoolean $option $value
                }
                -margin {
                    my CheckMargin $option $value
                }
                -orient {
                    my CheckBoolean $option $value
                }
                -rotate {
                    my CheckRotation $option $value
                }
                -noimage {
                    my CheckBoolean $option $value
                }
                default {
                    throw "PDF4TCL" "unknown option \"$option\""
                }
            }
            set localopts($option) $value
        }
        set oid [eval \my startPage [array get localopts]]
        set id xobject$oid
        set images($id) [list $pdf(width) $pdf(height) $oid $localopts(-noimage)]
        return $id
    }
    # Finish an XObject, this is just a wrapper for endPage available
    # for symmetry with startXObject.
    method endXObject {} {
        my endPage
    }

    # Start on a new page
    method startPage {args} {
        # Get defaults from document
        set localopts(-orient)    $options(-orient)
        set localopts(-landscape) $options(-landscape)
        set localopts(-margin)    $options(-margin)
        set localopts(-paper)     $options(-paper)
        set localopts(-rotate)    $options(-rotate)
        # Unofficial option to overlay startXObject on startPage
        set localopts(-xobject)   0
        set localopts(-noimage)   0

        if {[llength $args] % 2 != 0} {
            # Uneven, error
            throw "PDF4TCL" "uneven number of arguments to startPage"
        } else {
            # Parse options
            foreach {option value} $args {
                switch -- $option {
                    -paper {
                        my CheckPaper $option $value
                    }
                    -landscape {
                        my CheckBoolean $option $value
                    }
                    -margin {
                        my CheckMargin $option $value
                    }
                    -orient {
                        my CheckBoolean $option $value
                    }
                    -rotate {
                        my CheckRotation $option $value
                    }
                    -xobject {
                        my CheckBoolean $option $value
                    }
                    -noimage {
                        my CheckBoolean $option $value
                    }
                    default {
                        throw "PDF4TCL" "unknown option \"$option\""
                    }
                }
                set localopts($option) $value
            }
        }

        if {$pdf(inPage)} {
            my endPage
        }
        # Fill in page properties
        my SetPageSize $localopts(-paper) $localopts(-landscape) \
                $localopts(-rotate)
        my SetPageMargin $localopts(-margin)
        set pdf(orient) $localopts(-orient)

        set pdf(inPage) 1
        set pdf(inXObject) $localopts(-xobject)

        # dimensions
        if {!$pdf(inXObject)} {
            set oid [my GetOid]
            lappend pdf(pages) $oid
            set pdf(pageobjid) $oid

            # create page object without delimiter
            set pdf(pageobj) {}
            append pdf(pageobj) "$oid 0 obj\n"
            append pdf(pageobj) "<</Type /Page\n"
            append pdf(pageobj) "/Parent 2 0 R\n"
            append pdf(pageobj) "/Resources 3 0 R\n"
            append pdf(pageobj) "/Group <</S /Transparency /CS /DeviceRGB /I false /K false>>\n"
            append pdf(pageobj) [format "/MediaBox \[0 0 %g %g\]\n" $pdf(width) $pdf(height)]
            if {$pdf(rotate) != 0} {
                append pdf(pageobj) "/Rotate $pdf(rotate)\n"
            }
            append pdf(pageobj) "/Contents \[[my NextOid] 0 R\]\n"
        }
        # reset annotations (this variable contains a list)
        set pdf(annotations) {}

        # start of contents
        set oid [my GetOid]
        my Pdfout "$oid 0 obj\n"
        # Allocate an object for the page length
        set pdf(pagelengthoid) [my GetOid 1]
        my Pdfout "<<\n"
        if {$pdf(inXObject)} {
            my Pdfout "/Type /XObject\n"
            my Pdfout "/Subtype /Form\n"
            # If the XObject is created with -noimage it is not included in
            # the image list in Resources. It then needs a ref to Resources.
            if {$localopts(-noimage)} {
                my Pdfout "/Resources 3 0 R\n"
            }
            my Pdfout [format "/BBox \[0 0 %g %g\]\n" $pdf(width) $pdf(height)]
            # This matrix makes the final Xobject to be size 1x1 in user space
            # just like an image
            my Pdfout [format "/Matrix \[%g 0 0 %g 0 0\]\n" \
                               [expr {1.0/$pdf(width)}] \
                               [expr {1.0/$pdf(height)}]]
            # TBD: Resources?
        }
        if {$pdf(compress)} {
            my Pdfout "/Filter \[/FlateDecode\]\n"
        }
        my Pdfout "/Length $pdf(pagelengthoid) 0 R\n"
        my Pdfout ">>\nstream\n"
        set pdf(data_start) $pdf(out_pos)
        set pdf(in_text_object) false

        # no font set on new pages
        set pdf(font_set) false

        # capture output
        my Flush

        return $oid
    }

    # Finish a page
    method endPage {} {
        if {! $pdf(inPage)} {
            return
        }
        if {$pdf(in_text_object)} {
            my Pdfout "\nET\n"
        }
        # get buffer
        set data_len [my Flush $pdf(compress)]
        set pdf(out_pos) [expr {$pdf(data_start)+$data_len}]
        my Pdfout "\nendstream\n"
        my Pdfout "endobj\n\n"

        # Create Length object
        my StoreXref $pdf(pagelengthoid)
        my Pdfout "$pdf(pagelengthoid) 0 obj\n"
        incr data_len
        my Pdfout "$data_len\n"
        my Pdfout "endobj\n\n"
        set pdf(inPage) false

        # insert annotations array and write page object
        if {!$pdf(inXObject)} {
            if {[llength $pdf(annotations)] > 0} {
                append pdf(pageobj) "/Annots \[[join $pdf(annotations) \n]\]\n"
            }
            append pdf(pageobj) ">>\n"
            append pdf(pageobj) "endobj\n\n"
            my StoreXref $pdf(pageobjid)
            my Pdfout $pdf(pageobj)
        }

        # Dump stored objects
        my FlushObjects
    }

    method FlushObjects {} {
        if {$pdf(inPage)} {
            throw "PDF4TCL" "FlushObjects may not be called when in a page"
        }

        # Dump stored objects
        foreach {oid body} $pdf(objects) {
            my StoreXref $oid
            my Pdfout $body
        }
        set pdf(objects) {}
        my Flush
    }

    # This must create optionally compressed PDF stream.
    # dictval must contain correct string value without >> terminator.
    # Terminator and length will be added by this proc.
    proc ::pdf4tcl::MakeStream {dictval body compress} {
        set res $dictval
        if {$compress} {
            set body2 [zlib compress $body]
            # Any win?
            if {[string length $body2] + 20 < [string length $body]} {
                append res "\n/Filter \[/FlateDecode\]"
                set body $body2
            }
        }
        set len [string length $body]
        append res "\n/Length $len\n>>\nstream\n"
        append res $body
        append res "\nendstream"
        return $res
    }

    # Create an object to be added to the stream at a suitable time.
    # Returns the Object Id.
    method AddObject {body} {
        set oid [my GetOid 1]
        lappend pdf(objects) $oid "$oid 0 obj\n$body\nendobj\n"
        return $oid
    }

    # Finish document
    method finish {{dryRun 0}} {
        if {$pdf(finished)} {
            return
        }

        if {$pdf(inPage)} {
            my endPage
        }
        if {$dryRun} {
            set backupDryRun [array get pdf]
        }
        # Object 1 is the Root of the document
        my StoreXref 1
        my Pdfout "1 0 obj\n"
        my Pdfout "<<\n"
        my Pdfout "/Type /Catalog\n"
        if {$pdf(version) > 1.4} {
            my Pdfout "/Version $pdf(version)\n"
        }
        my Pdfout "/Pages 2 0 R\n"
        # Determine the number of bookmarks to add to the document.
        set nbookmarks [llength $pdf(bookmarks)]
        if {$nbookmarks > 0} {
            set bookmark_oid [my GetOid 1]
            my Pdfout "/Outlines $bookmark_oid 0 R\n"
        }
        # Any forms?
        if {[llength $pdf(forms)] > 0} {
            set form_oid [my GetOid 1]
            my Pdfout "/AcroForm $form_oid 0 R\n"
        }
        my Pdfout ">>\n"
        my Pdfout "endobj\n\n"

        # Object 2 lists the pages
        my StoreXref 2
        my Pdfout "2 0 obj\n"
        my Pdfout "<<\n/Type /Pages\n"
        my Pdfout "/Count [llength $pdf(pages)]\n"
        my Pdfout "/Kids \["
        foreach oid $pdf(pages) {
            my Pdfout "$oid 0 R "
        }
        my Pdfout "\]\n"
        my Pdfout ">>\n"
        my Pdfout "endobj\n\n"

        # Object 3 is the Resources Object
        my StoreXref 3
        my Pdfout "3 0 obj\n"
        my Pdfout "<<\n"
        my Pdfout "/ProcSet\[/PDF /Text /ImageC\]\n"

        # font references
        if {[array size fonts] > 0} {
            my Pdfout "/Font <<\n"
            foreach fontname [array names fonts] {
                set oid $fonts($fontname)
                my Pdfout "/$fontname $oid 0 R\n"
            }
            my Pdfout ">>\n"
        }

        # extended graphics state references
        if {[array size extgs] > 0} {
            my Pdfout "/ExtGState <<\n"
            foreach egs [array names extgs] {
                set oid $extgs($egs)
                my Pdfout "/$egs $oid 0 R\n"
            }
            my Pdfout ">>\n"
        }

        # image references
        if {[array size images] > 0} {
            my Pdfout "/XObject <<\n"
            foreach key [array names images] {
                # If it is an XObject created with -noimage, it is not added.
                if {![lindex $images($key) 3]} {
                    set oid [lindex $images($key) 2]
                    my Pdfout "/$key $oid 0 R\n"
                }
            }
            my Pdfout ">>\n"
        }

        # pattern references
        if {[array size patterns] > 0} {
            my Pdfout "/ColorSpace <<\n"
            if {$pdf(cmyk)} {
                my Pdfout "/Cs1 \[/Pattern /DeviceCMYK\]\n"
            } else {
                my Pdfout "/Cs1 \[/Pattern /DeviceRGB\]\n"
            }
            my Pdfout ">>\n"

            my Pdfout "/Pattern <<\n"
            foreach key [array names patterns] {
                set oid [lindex $patterns($key) 2]
                my Pdfout "/$key $oid 0 R\n"
            }
            my Pdfout ">>\n"
        }

        # gradient references
        if {[array size grads] > 0} {
            my Pdfout "/Shading <<\n"
            foreach key [array names grads] {
                set oid [lindex $grads($key) 2]
                my Pdfout "/$key $oid 0 R\n"
            }
            my Pdfout ">>\n"
        }

        my Pdfout ">>\nendobj\n\n" ;# Resources object

        if {$nbookmarks > 0} {
            set count [BookmarkCount $pdf(bookmarks) -1]

            # Create the outline dictionary.
            set oid [my NextOid]
            my StoreXref $bookmark_oid
            my Pdfout "$bookmark_oid 0 obj\n"
            my Pdfout "<<\n/Type /Outlines\n"
            my Pdfout "/First $oid 0 R\n"
            my Pdfout "/Last [expr {$oid + $nbookmarks - 1}] 0 R\n"
            if {$count} {
                my Pdfout "/Count $count\n"
            }
            my Pdfout ">>\nendobj\n\n"

            # Create the outline item dictionary for each bookmark.
            set nbookmark 0
            set parent $bookmark_oid
            set previous {}
            foreach bookmark $pdf(bookmarks) {
                if {[lindex $bookmark 1] == 0} {
                    set previous [my BookmarkObject $parent $previous \
                                          [lrange $pdf(bookmarks) $nbookmark end]]
                }
                incr nbookmark
            }
        }
        # Any forms?
        if {[llength $pdf(forms)] > 0} {
            my StoreXref $form_oid
            my Pdfout "$form_oid 0 obj\n"
            my Pdfout "<<\n/Fields \[[join $pdf(forms) \n]\]\n"
            my Pdfout "/DR 3 0 R\n"
            my Pdfout ">>\nendobj\n\n"
        }

        # Create the PDF document information dictionary.
        if {[array exists metadata]} {
            set metadata_oid [my GetOid]
            my StoreXref $metadata_oid
            my Pdfout "$metadata_oid 0 obj\n<<\n"
            foreach {name value} [array get metadata] {
                my Pdfout "/$name ([CleanText $value $pdf(current_font)])\n"
            }
            my Pdfout ">>\nendobj\n\n"
        }

        # Cross reference table
        set xref_pos $pdf(out_pos)
        my Pdfout "xref\n"
        my Pdfout "0 [my NextOid]\n"
        my Pdfout "0000000000 65535 f \n"
        for {set a 1} {$a<[my NextOid]} {incr a} {
            set xref $pdf(xref,$a)
            my Pdfout [format "%010ld 00000 n \n" $xref]
        }

        # Document trailer
        my Pdfout "trailer\n"
        my Pdfout "<<\n"
        my Pdfout "/Size [my NextOid]\n"
        my Pdfout "/Root 1 0 R\n"
        if {[info exists metadata_oid]} {
            my Pdfout "/Info $metadata_oid 0 R\n"
        }
        my Pdfout ">>\n"
        my Pdfout "\nstartxref\n"
        my Pdfout "$xref_pos\n"
        my Pdfout "%%EOF\n"
        my Flush

        if {$dryRun} {
            # Revert everything done by this call before returning the result.
            set result $pdf(pdf)
            array set pdf $backupDryRun
            return $result
        }
        set pdf(finished) true
    }

    # Get finished PDF data
    method get {} {
        if {$pdf(inPage)} {
            my endPage
        }
        if {! $pdf(finished)} {
            my finish
        }
        return $pdf(pdf)
    }

    # Write PDF data to file
    method write {args} {
        set chan stdout
        set outfile 0
        foreach {arg value} $args {
            switch -- $arg {
                "-file" {
                    if {[catch {open $value "w"} chan]} {
                        throw "PDF4TCL" "could not open file $value for writing: $chan"
                    } else {
                        set outfile 1
                    }
                }
                default {
                    throw "PDF4TCL" "unknown option \"$arg\""
                }
            }
        }

        fconfigure $chan -translation binary
        puts -nonewline $chan [my get]
        if {$outfile} {
            close $chan
        }
    }

    # Transform absolute user coordinates to page coordinates
    # This should take into account orientation, margins.
    method Trans {x y txName tyName} {
        upvar 1 $txName tx $tyName ty

        set px [pdf4tcl::getPoints $x $pdf(unit)]
        set py [pdf4tcl::getPoints $y $pdf(unit)]

        set tx [expr {$px + $pdf(marginleft)}]
        if {$pdf(orient)} {
            set ty [expr {$py + $pdf(margintop)}]
            set ty [expr {$pdf(height) - $ty}]
        } else {
            set ty [expr {$py + $pdf(marginbottom)}]
        }
    }

    # Transform relative user coordinates to page coordinates
    # This should take into account orientation, but not margins.
    method TransR {x y txName tyName} {
        upvar 1 $txName tx $tyName ty

        set tx [pdf4tcl::getPoints $x $pdf(unit)]
        set ty [pdf4tcl::getPoints $y $pdf(unit)]

        if {$pdf(orient)} {
            set ty [expr {- $ty}]
        }
    }

    # Returns width and height of drawable area, excluding margins.
    method getDrawableArea {} {
        set w [expr {$pdf(width)  - $pdf(marginleft) - $pdf(marginright)}]
        set h [expr {$pdf(height) - $pdf(margintop)  - $pdf(marginbottom)}]
        # Translate to current unit
        set w [expr {$w / $pdf(unit)}]
        set h [expr {$h / $pdf(unit)}]
        return [list $w $h]
    }

    #######################################################################
    # Bookmark Handling
    #######################################################################

    method bookmarkAdd {args} {
        set closed 0
        set level  0
        set title  {}

        foreach {option value} $args {
            switch -- $option {
                -title {
                    set value [string trim $value]
                    if {[string length $value] == 0} {
                        throw "PDF4TCL" "option $option requires a string"
                    }
                    set title $value
                }
                -level {
                    my CheckNumeric $value -level -nonnegative -integer
                    set level $value
                }
                -closed {
                    my CheckBoolean $option $value
                    set closed $value
                }
                default {
                    throw "PDF4TCL" "unknown option \"$option\""
                }
            }
        }

        if {$pdf(pages) == {}} {
            throw "PDF4TCL" "no pages defined"
        }

        # Determine the object id of the current page.
        set oid [lindex $pdf(pages) end]

        # Add the bookmark to the list.
        lappend pdf(bookmarks) [list $oid $level $closed $title]
    }

    #---------------------------------------------------------------------------
    # This procedure determines the number of open items of an outline
    # dictionary object.

    proc ::pdf4tcl::BookmarkCount {bookmarks level} {
        set count 0

        # Increment the count if the bookmark is not closed.
        foreach bookmark $bookmarks {
            if {[lindex $bookmark 1] <= $level} {break}
            if {! [lindex $bookmark 2]} {
                incr count
            }
        }

        return $count
    }

    #---------------------------------------------------------------------------
    # This procedure creates a outline item dictionary object.

    method BookmarkObject {parent previous bookmarks} {
        set bookmark [lindex $bookmarks 0]

        set destination [lindex $bookmark 0]
        set level       [lindex $bookmark 1]
        set closed      [lindex $bookmark 2]
        set title       [lindex $bookmark 3]

        set oid [my GetOid]
        my StoreXref $oid

        BookmarkProperties $oid $level [lrange $bookmarks 1 end] \
                next first last count

        if {$closed} {
            set count [expr {-$count}]
        }

        my Pdfout "$oid 0 obj\n"
        my Pdfout "<<\n/Title ([CleanText $title $pdf(current_font)])\n"
        my Pdfout "/Parent $parent 0 R\n"
        if {$previous != {}} {my Pdfout "/Prev $previous 0 R\n"}
        if {$next     != {}} {my Pdfout "/Next $next 0 R\n"}
        if {$first    != {}} {my Pdfout "/First $first 0 R\n"}
        if {$last     != {}} {my Pdfout "/Last $last 0 R\n"}
        if {$count} {my Pdfout "/Count $count\n"}
        my Pdfout "/Dest \[$destination 0 R /XYZ null null null\]\n"
        my Pdfout ">>\n"
        my Pdfout "endobj\n\n"

        if {$next != {}} {
            set previous $oid
        }

        # Create the bookmark objects for all bookmarks that are children of
        # this bookmark.
        if {$first != {}} {
            set parent $oid
            set prev {}
            incr level
            set n 0
            foreach bookmark [lrange $bookmarks 1 end] {
                incr n
                if {[lindex $bookmark 1] < $level} {break}
                if {[lindex $bookmark 1] == $level} {
                    set prev [my BookmarkObject $parent $prev \
                            [lrange $bookmarks $n end]]
                }
            }
        }

        return $previous
    }

    #---------------------------------------------------------------------------
    # This procedure determines the properties for an outline item dictionary
    # object.

    proc ::pdf4tcl::BookmarkProperties {oid current bookmarks n f l c} {
        upvar 1 $n next $f first $l last $c count

        set next  {}
        set first {}
        set last  {}

        # Determine the number of open descendants.
        set count [BookmarkCount $bookmarks $current]

        set child [expr {$current + 1}]

        set n 0

        foreach bookmark $bookmarks {
            incr n

            set level [lindex $bookmark 1]

            if {$level < $current} {break}

            # Determine the object ID for the next bookmark at the same level.
            if {$next == {}} {
                if {$level == $current} {
                    set next [expr {$oid + $n}]
                    continue
                }

                # Determine the object ID for the first and last child
                # bookmarks.
                if {$level == $child} {
                    if {$first == {}} {
                        set first [expr {$oid + $n}]
                    }
                    set last [expr {$oid + $n}]
                }
            }
        }
    }

    #--------------------------------------------------------------------------
    # Configure method for the PDF document metadata options.
    method metadata {args} {
        foreach {option value} $args {
            set value [string trim $value]
            if {[string length $value] > 0} {
                switch -- $option {
                    -author   {set metadata(Author)   $value}
                    -creator  {set metadata(Creator)  $value}
                    -keywords {set metadata(Keywords) $value}
                    -producer {set metadata(Producer) $value}
                    -subject  {set metadata(Subject)  $value}
                    -title    {set metadata(Title)    $value}
                    -creationdate {
                        if {$value == 0} {
                            set value [clock seconds]
                        }
                        set c [clock format $value -format {D:%Y%m%d%H%M%S%z} -gmt 0]
                        set metadata(CreationDate) [string range $c 0 end-2]
                    }
                }
            }
        }
    }

    #######################################################################
    # Text Handling
    #######################################################################

    # Set current font
    method setFont {size {fontname ""} {internal 0}} {
        if {$fontname eq ""} {
            if {$pdf(current_font) eq ""} {
                throw "PDF4TCL" "no font family set"
            }
            set fontname $pdf(current_font)
        }

        # Font already loaded?
        if {$fontname ni $::pdf4tcl::Fonts} {
            throw "PDF4TCL" "font $fontname doesn't exist"
        }

        if {!$internal} {
            set size [pdf4tcl::getPoints $size $pdf(unit)]
        }

        set pdf(current_font) $fontname
        set pdf(font_size) $size

        # Delay putting things in until we are actually on a page
        if {$pdf(inPage)} {
            my SetupFont
        }
    }

    # Set current font for tkpath ptext object
    method setTkpfont {size name weight slant} {
        my variable canvasFontMapping
        set bold [expr {$weight eq "bold"}]
        set italic [expr {$slant ne "normal"}]
        switch -glob [string tolower $name] {
            *courier* - *fixed* {
                set family Courier
                if {$bold && $italic} {
                    append family -BoldOblique
                } elseif {$bold} {
                    append family -Bold
                } elseif {$italic} {
                    append family -BoldOblique
                }
            }
            *times* - {*nimbus roman*} {
                if {$bold && $italic} {
                    set family Times-BoldItalic
                } elseif {$bold} {
                    set family Times-Bold
                } elseif {$italic} {
                    set family Times-Italic
                } else {
                    set family Times-Roman
                }
            }
            *helvetica* - *arial* - {*nimbus sans*} - default {
                set family Helvetica
                if {$bold && $italic} {
                    append family -BoldOblique
                } elseif {$bold} {
                    append family -Bold
                } elseif {$italic} {
                    append family -BoldOblique
                }
            }
        }
        array set userMappingArr $canvasFontMapping
        if {[info exists userMappingArr($name)]} {
           set family $userMappingArr($name)
        }
        my setFont $size $family 1
    }

    # Helpers to temporarily store and restore the current font state
    method PushFont {} {
        lappend pdf(font_stack) \
                [list $pdf(current_font) $pdf(font_size) $pdf(font_set)]
    }
    method PopFont {} {
        if {![info exists pdf(font_stack)] || [llength $pdf(font_stack)] < 1} {
            return
        }
        set old [lindex $pdf(font_stack) end]
        set pdf(font_stack) [lrange $pdf(font_stack) 0 end-1]
        foreach {pdf(current_font) pdf(font_size) pdf(font_set)} $old break
    }

    # Make Sure ZaDb font is available, for internal use
    method SetupZaDbFont {} {
        set fontname ZaDb
        if {[info exists fonts($fontname)]} return
        set body    "<<\n/Type /Font\n"
        append body "/Subtype /Type1\n"
        append body "/Name /$fontname\n"
        append body "/BaseFont /ZapfDingbats\n"
        append body ">>"
        set oid [my AddObject $body]
        set fonts($fontname) $oid
    }

    # Set the current font on the page
    method SetupFont {} {
        variable ::pdf4tcl::BFA

        if {$pdf(current_font) eq ""} {
            throw "PDF4TCL" "no font set"
        }
        set fontname $pdf(current_font)
        my Pdfoutn "/$fontname [Nf $pdf(font_size)]" "Tf"
        my Pdfoutcmd 0 "Tr"
        my Pdfoutcmd $pdf(font_size) "TL"

        # Make sure a font object exists
        if {![info exists fonts($fontname)]} {
            set fonttype $::pdf4tcl::FontsAttrs($fontname,type)
            if {$fonttype eq "std"} {
                set body    "<<\n/Type /Font\n"
                append body "/Subtype /Type1\n"
                append body "/Encoding /WinAnsiEncoding\n"
                append body "/Name /$fontname\n"
                append body "/BaseFont /$fontname\n"
                append body ">>"
           } elseif {$fonttype eq "TTF"} {
                # Add truetype font objects:
                set BFN $::pdf4tcl::FontsAttrs($fontname,basefontname)
                set SFI $::pdf4tcl::FontsAttrs($fontname,SubFontIdx)
                set BaseFN "[MakeSFNamePrefix $SFI]+$BFN"
                # 1. Font subset binary data.
                set lc [string length $::pdf4tcl::FontsAttrs($fontname,data)]
                set dictv "<<\n/Length1 $lc"
                set body [MakeStream $dictv \
                        $::pdf4tcl::FontsAttrs($fontname,data) \
                        $pdf(compress)]
                set fsoid [my AddObject $body]
                # 2. Font subset descriptor.
                set    body "<<\n/FontName /$BaseFN\n"
                append body "/StemV [Nf $BFA($BFN,stemV)]\n"
                append body "/FontFile2 $fsoid 0 R\n"
                append body "/Ascent [Nf $BFA($BFN,ascend)]\n"
                append body "/Flags $BFA($BFN,flags)\n"
                append body "/Descent [Nf $BFA($BFN,descend)]\n"
                append body "/ItalicAngle [Nf $BFA($BFN,ItalicAngle)]\n"
                foreach n $BFA($BFN,bbox) {lappend fbbox [Nf $n]}
                append body "/FontBBox \[$fbbox\]\n"
                append body "/Type /FontDescriptor\n"
                append body "/CapHeight [Nf $BFA($BFN,CapHeight)]\n>>"
                set foid [my AddObject $body]
                # 3. ToUnicode Cmap for subset.
                set body [MakeStream "<<" \
                        [MakeToUnicodeCMap $BaseFN \
                        $::pdf4tcl::FontsAttrs($fontname,uniset)] \
                        $pdf(compress)]
                set uoid [my AddObject $body]
                # 4. Font object.
                # Make array of widths here:
                set Widths [list]
                foreach ucode $::pdf4tcl::FontsAttrs($fontname,uniset) {
                    set res 0.0
                    if {[dict exists $BFA($BFN,charWidths) $ucode]} {
                        set res [dict get $::pdf4tcl::BFA($BFN,charWidths) $ucode]
                    }
                    lappend Widths [Nf $res]
                }
                set body    "<<\n/FirstChar 0\n"
                append body "/LastChar [expr {[llength $Widths]-1}]\n"
                append body "/ToUnicode $uoid 0 R\n"
                append body "/FontDescriptor $foid 0 R\n"
                append body "/Name /$fontname\n"
                append body "/BaseFont /$BaseFN\n"
                append body "/Subtype /TrueType\n"
                append body "/Widths \[$Widths\]\n"
                append body "/Type /Font\n"
                append body ">>"
            } else {
                # Add type1 font objects:
                set BFN $::pdf4tcl::FontsAttrs($fontname,basefontname)
                # Font data & descriptor if not already included in PDF file:
                if {![info exists type1basefonts($BFN)]} {
                    #1. Font data:
                    set    dictv "<<\n/Length1 $BFA($BFN,Length1)"
                    append dictv "\n/Length2 $BFA($BFN,Length2)"
                    append dictv "\n/Length3 $BFA($BFN,Length3)"
                    set body [MakeStream $dictv $BFA($BFN,data) $pdf(compress)]
                    set fsoid [my AddObject $body]
                    #2. Font descriptor:
                    set    body "<<\n/FontName /$BFN\n"
                    append body "/StemV [Nf $BFA($BFN,stemV)]\n"
                    append body "/FontFile $fsoid 0 R\n"
                    append body "/Ascent [Nf $BFA($BFN,ascend)]\n"
                    append body "/Flags 34\n"
                    append body "/Descent [Nf $BFA($BFN,descend)]\n"
                    append body "/ItalicAngle [Nf $BFA($BFN,ItalicAngle)]\n"
                    foreach n $BFA($BFN,bbox) {lappend fbbox [Nf $n]}
                    append body "/FontBBox \[$fbbox\]\n"
                    append body "/Type /FontDescriptor\n"
                    append body "/CapHeight [Nf $BFA($BFN,CapHeight)]\n>>"
                    set foid [my AddObject $body]
                    set type1basefonts($BFN) $foid
                } else {
                    set foid $type1basefonts($BFN)
                }
                # 3. ToUnicode Cmap.
                set body [MakeStream "<<" \
                        [MakeToUnicodeCMap $BFN \
                        $::pdf4tcl::FontsAttrs($fontname,uniset)] \
                        $pdf(compress)]
                set uoid [my AddObject $body]
                # 4. Font object:
                set Widths [list]
                foreach ucode $::pdf4tcl::FontsAttrs($fontname,uniset) {
                    set res 0.0
                    if {[dict exists $BFA($BFN,charWidths) $ucode]} {
                        set res [dict get $::pdf4tcl::BFA($BFN,charWidths) $ucode]
                    }
                    lappend Widths [Nf $res]
                }
                set body    "<<\n/FirstChar 0\n"
                append body "/LastChar [expr {[llength $Widths]-1}]\n"
                append body "/ToUnicode $uoid 0 R\n"
                append body "/FontDescriptor $foid 0 R\n"
                append body "/Name /$fontname\n"
                append body "/BaseFont /$BFN\n"
                append body "/Subtype /Type1\n"
                append body "/Widths \[$Widths\]\n"
                append body "/Type /Font\n"
                set diffs [MakeEncDiff $BFN $fontname]
                append body "/Encoding <<\n/Type /Encoding\n"
                append body "/BaseEncoding /WinAnsiEncoding\n"
                append body "/Differences \[$diffs\]\n>>\n>>"
            }
            set oid [my AddObject $body]
            set fonts($fontname) $oid
        }
        set pdf(font_set) true
    }

    # Get metrics from current font.
    # Supported metrics are:
    # height  = height of font's Bounding Box.
    # ascend  = top of typical glyph, displacement from anchor point.
    #           Typically positive.
    # descend = bottom of typical glyph, displacement from anchor point.
    #           Typically negative.
    # fixed   = Boolean which is true if this is a fixed width font.
    # bboxb   = Bottom of Bounding Box displacement from anchor point.
    #           Typically a negative number since it is below the anchor point.
    # bboxt   = Top of Bounding Box displacement from anchor point.
    #           Typically a positive number.
    # bboxy   = bboxb, kept for backward compatibility
    method getFontMetric {metric {internal 0}} {
        if {$pdf(current_font) eq ""} {
            throw "PDF4TCL" "no font set"
        }
        set BFN $::pdf4tcl::FontsAttrs($pdf(current_font),basefontname)
        set bbox $::pdf4tcl::BFA($BFN,bbox)
        switch $metric {
            bboxy   {set val [expr {[lindex $bbox 1] * 0.001}]}
            bboxb   {set val [expr {[lindex $bbox 1] * 0.001}]}
            bboxt   {set val [expr {[lindex $bbox 3] * 0.001}]}
            fixed   {return $::pdf4tcl::BFA($BFN,fixed)}
            height  {set val [expr {([lindex $bbox 3] - [lindex $bbox 1])* 0.001}]}
            ascend - descend {
                set val [expr {$::pdf4tcl::BFA($BFN,$metric) * 0.001}]
            }
            default {
                if {![info exists ::pdf4tcl::BFA($BFN,$metric)]} {
                    throw "PDF4TCL" "metric $metric doesn't exist"
                }
                return $::pdf4tcl::BFA($BFN,$metric)
            }
        }
        # Translate to current unit
        if {!$internal} {
            set val [expr {$val/ $pdf(unit)}]
        }
        return [expr {$val * $pdf(font_size)}]
    }

    # Get the width of a string under the current font.
    method getStringWidth {txt {internal 0}} {
        if {$pdf(current_font) eq ""} {
            throw "PDF4TCL" "no font set"
        }
        set w 0.0
        foreach ch [split $txt ""] {
            set w [expr {$w + [GetCharWidth $pdf(current_font) $ch]}]
        }
        if {!$internal} {
            set w [expr {$w / $pdf(unit)}]
        }
        return [expr {$w * $pdf(font_size)}]
    }

    # Get the width of a character. "ch" must be exactly one char long.
    proc ::pdf4tcl::GetCharWidth {font ch} {
        if {$ch eq "\n"} {
            return 0.0
        }
        # This can't fail since ch is always 1 char long
        scan $ch %c n

        set BFN $::pdf4tcl::FontsAttrs($font,basefontname)
        set res 0.0
        catch {set res [dict get $::pdf4tcl::BFA($BFN,charWidths) $n]}
        set res [expr {$res * 0.001}]
        return $res
    }

    # Get the width of a character under the current font.
    method getCharWidth {ch {internal 0}} {
        if {$pdf(current_font) eq ""} {
            throw "PDF4TCL" "no font set"
        }
        set len [string length $ch]
        if {$len == 0} {
            return 0.0
        } elseif {$len > 1} {
            set ch [string index $ch 0]
        }
        set width [expr {[GetCharWidth $pdf(current_font) $ch] * $pdf(font_size)}]
        if {!$internal} {
            set width [expr {$width / $pdf(unit)}]
        }
        return $width
    }

    # Set coordinate for next text command. Internal version
    method SetTextPosition {x y} {
        my BeginTextObj
        set pdf(xpos) $x
        set pdf(ypos) $y
        my Pdfoutcmd 1 0 0 1 $pdf(xpos) $pdf(ypos) "Tm"
    }

    proc ::pdf4tcl::MulVxM {vector matrix} {
        foreach {x y} $vector break
        foreach {a b c d e f} $matrix break
        lappend res [expr {$a*$x + $c*$y + $e}]
        lappend res [expr {$b*$x + $d*$y + $f}]
        return $res
    }

    proc ::pdf4tcl::MulMxM {m1 m2} {
        foreach {a1 b1 c1 d1 e1 f1} $m1 break
        foreach {a2 b2 c2 d2 e2 f2} $m2 break
        lappend res [expr {$a1*$a2 + $b1*$c2}]
        lappend res [expr {$a1*$b2 + $b1*$d2}]
        lappend res [expr {$c1*$a2 + $d1*$c2}]
        lappend res [expr {$c1*$b2 + $d1*$d2}]
        lappend res [expr {$e1*$a2 + $f1*$c2 + $e2}]
        lappend res [expr {$e1*$b2 + $f1*$d2 + $f2}]
        return $res
    }

    method SetTextPositionAngle {x y angle xangle yangle} {
        my BeginTextObj
        set rad [expr {$angle*3.1415926/180.0}]
        set c [expr {cos($rad)}]
        set s [expr {sin($rad)}]
        set pdf(xpos) $x
        set pdf(ypos) $y

        if {$xangle == 0 && $yangle == 0} {
            my Pdfoutcmd $c $s [expr {-$s}] $c $x $y "Tm"
            return
        }

        # Add skew if specified
        set tx [expr {tan($xangle*3.1415926/180.0)}]
        set ty [expr {tan($yangle*3.1415926/180.0)}]

        set mr [list $c $s [expr {-$s}] $c 0 0]
        set ms [list 1 $tx $ty 1 0 0]
        set ma [MulMxM $mr $ms]
        lset ma 4 $x
        lset ma 5 $y

        my Pdfoutcmd {*}$ma "Tm"
    }

    # Set coordinate for next text command.
    method setTextPosition {x y} {
        my BeginTextObj
        my Trans $x $y x y
        # Store for reference
        set pdf(origxpos) $x
        set pdf(origypos) $y
        my SetTextPosition $x $y
    }

    # Move coordinate for next text command.
    method moveTextPosition {x y} {
        my TransR $x $y x y
        set y [expr {$pdf(ypos) + $y}]
        set x [expr {$pdf(xpos) + $x}]
        my SetTextPosition $x $y
    }

    # Get current test position
    method getTextPosition {} {
        # This is basically a reverse Trans
        set tx [expr {$pdf(xpos) - $pdf(marginleft)}]
        if {$pdf(orient)} {
            set ty [expr {$pdf(height) - $pdf(ypos)}]
            set ty [expr {$ty - $pdf(margintop)}]
        } else {
            set ty [expr {$pdf(ypos) - $pdf(marginbottom)}]
        }

        # Translate to current unit
        set tx [expr {$tx / $pdf(unit)}]
        set ty [expr {$ty / $pdf(unit)}]
        return [ list $tx $ty ]
    }

    # Move text position to new line, relative to last
    # setTextPosition command.
    method newLine {{spacing {}}} {
        if {$spacing eq ""} {
            set spacing $pdf(line_spacing)
        } else {
            my CheckNumeric $spacing "line spacing"
        }
        # Update to next line
        set y [expr {$pdf(ypos) - $pdf(font_size) * $spacing}]
        set x $pdf(origxpos)
        my SetTextPosition $x $y
    }

    # Set Line spacing factor (which is used by method newLine
    # if no explicit spacing is given)
    method setLineSpacing {spacing} {
        my CheckNumeric $spacing "line spacing"
        set pdf(line_spacing) $spacing
    }

    # Return the current line spacing factor
    method getLineSpacing {} {
        return $pdf(line_spacing)
    }

    # Draw a text string
    # Returns the width of the drawn string.
    method text {str args} {
        if {!$pdf(inPage)} { my startPage }
        set align "left"
        set angle 0
        set xangle 0
        set yangle 0
        set bg 0
        set x $pdf(xpos)
        set y $pdf(ypos)
        set posSet 0

        foreach {arg value} $args {
            switch -- $arg {
                "-align" {
                    set align $value
                }
                "-angle" {
                    set angle $value
                }
                "-xangle" {
                    set xangle $value
                }
                "-yangle" {
                    set yangle $value
                }
                "-background" - "-bg" - "-fill" {
                    if {[string is boolean -strict $value]} {
                        set bg $value
                    } else {
                        set bg [my GetColor $value]
                    }
                }
                "-y" {
                    my Trans 0 $value _ y
                    set posSet 1
                }
                "-x" {
                    my Trans $value 0 x _
                    set posSet 1
                }
                default {
                    throw "PDF4TCL" "unknown option \"$arg\""
                }
            }
        }

        if {!$pdf(font_set)} {
            my SetupFont
        }

        set strWidth [my getStringWidth $str 1]
        if {$align == "right"} {
            set x [expr {$x - $strWidth * cos($angle*3.1415926/180.0)}]
            set y [expr {$y - $strWidth * sin($angle*3.1415926/180.0)}]
            set posSet 1
        } elseif {$align == "center"} {
            set x [expr {$x - $strWidth / 2 * cos($angle*3.1415926/180.0)}]
            set y [expr {$y - $strWidth / 2 * sin($angle*3.1415926/180.0)}]
            set posSet 1
        }
        # Draw a background box if needed.
        if {[llength $bg] > 1 || $bg} {
            set bboxb [my getFontMetric bboxb 1]
            set bboxt [my getFontMetric bboxt 1]
            set ytop [expr {$y + $bboxt}]
            set ybot [expr {$y + $bboxb}]
            set dh [expr {$bboxt - $bboxb}]
            my EndTextObj
            # Temporarily shift fill color
            my Pdfoutcmd "q"
            if {[llength $bg] > 1} {
                my SetFillColor $bg
            } else {
                my SetFillColor $pdf(bgColor)
            }
            if {$angle || $xangle || $yangle} {
                # Create rotated and skewed background polygon:
                # Translation from x,y to origin matrix:
                set mt [list 1 0 0 1 [expr {-$x}] [expr {-$y}]]
                # Rotation matrix:
                set r1 [expr {$angle*3.1415926/180.0}]
                set c [expr {cos($r1)}]
                set s [expr {sin($r1)}]
                set mr [list $c $s [expr {-$s}] $c 0 0]
                # Skew matrix:
                set tx [expr {tan($xangle*3.1415926/180.0)}]
                set ty [expr {tan($yangle*3.1415926/180.0)}]
                set ms [list 1 $tx $ty 1 0 0]
                # Translation from origin to x,y matrix:
                set mtb [list 1 0 0 1 $x $y]
                # Matrix of all operations:
                set ma [MulMxM $mt $mr]
                set ma [MulMxM $ma $ms]
                set ma [MulMxM $ma $mtb]
                # Four points must be translated:
                set x2 [expr {$x+$strWidth}]
                set y2 $ybot
                set p1 [MulVxM [list $x $ytop] $ma]
                set p2 [MulVxM [list $x2 $ytop] $ma]
                set p3 [MulVxM [list $x2 $y2] $ma]
                set p4 [MulVxM [list $x $y2] $ma]
                eval \my DrawPoly 0 1 $p1 $p2 $p3 $p4
            } else {
                my DrawRect $x $ybot $strWidth $dh 0 1
            }
            my Pdfoutcmd "Q"
            # Position needs to be set since we left the text object
            set posSet 1
        }
        my BeginTextObj
        if {$angle || $xangle || $yangle} {
            my SetTextPositionAngle $x $y $angle $xangle $yangle
        } elseif {$posSet} {
            my SetTextPosition $x $y
        }

        my Pdfout "([CleanText $str $pdf(current_font)]) Tj\n"
        set pdf(xpos) [expr {$x + $strWidth}]
        return $strWidth
    }

    # Draw a text string at a given position.
    method DrawTextAt {x y str {align left}} {
        if {! $pdf(font_set)} {
            my SetupFont
        }

        set strWidth [my getStringWidth $str 1]
        if {$align == "right"} {
            set x [expr {$x - $strWidth}]
        } elseif {$align == "center"} {
            set x [expr {$x - $strWidth / 2}]
        }
        my BeginTextObj
        my SetTextPosition $x $y
        my Pdfout "([CleanText $str $pdf(current_font)]) Tj\n"
    }

    method drawTextBox {x y width height txt args} {
        set align left
        set linesVar ""
        set dryrun 0
        foreach {arg value} $args {
            switch -- $arg {
                "-align" {
                    set align $value
                }
                "-linesvar" {
                    set linesVar $value
                }
                "-dryrun" {
                    my CheckBoolean -dryrun $value
                    set dryrun $value
                }
                default {
                    throw "PDF4TCL" "unknown option \"$arg\""
                }
            }
        }

        if {!$pdf(inPage) && !$dryrun} { my startPage }

        if {$linesVar ne ""} {
            upvar 1 $linesVar lines
        }
        set lines 0

        my Trans  $x $y x y
        my TransR $width $height width height

        if {!$pdf(orient)} {
            # Always have anchor position upper left
            set y [expr {$y + $height}]
        } else {
            # Restore a positive height
            set height [expr {- $height}]
        }

        if {!$dryrun} {
            my BeginTextObj
            if {! $pdf(font_set)} {
                my SetupFont
            }
        }

        # pre-calculate some values
        set font_height [expr {$pdf(font_size) * $pdf(line_spacing)}]
        set space_width [my getCharWidth " " 1]

        # Displace y to put the first line within the box
        set bboxb [my getFontMetric bboxb 1]
        set ystart $y
        set y [expr {$y - $pdf(font_size) - $bboxb}]

        set len [string length $txt]

        # run through chars until we exceed width or reach end
        set start 0
        set pos 0
        set cwidth 0
        set lastbp 0
        set done false

        while {! $done} {
            set ch [string index $txt $pos]
            # test for breakable character
            if {[regexp "\[ \t\r\n-\]" $ch]} {
                set lastbp $pos
            }
            set w [my getCharWidth $ch 1]
            if {($cwidth+$w)>$width || $pos>=$len || $ch=="\n"} {
                if {$pos>=$len} {
                    set done true
                } else {
                    # backtrack to last breakpoint
                    if {$lastbp != $start} {
                        set pos $lastbp
                    } else {
                        # Word longer than line.
                        # Back up one char if possible
                        if {$pos > $start} {
                            incr pos -1
                        }
                    }
                }
                set sent [string trim [string range $txt $start $pos]]
                switch -- $align {
                    "justify" {
                        # count number of spaces
                        set words [split $sent " "]
                        if {[llength $words]>1 && (!$done) && $ch!="\n"} {
                            # determine additional width per space
                            set sw [my getStringWidth $sent 1]
                            set add [expr {($width-$sw)/([llength $words]-1)}]
                            # display words
                            if {!$dryrun} {
                                my Pdfoutcmd $add "Tw"
                                my DrawTextAt $x $y $sent
                                my Pdfoutcmd 0 "Tw"
                            }
                        } else {
                            if {!$dryrun} {
                                my DrawTextAt $x $y $sent
                            }
                        }
                    }
                    "right" {
                        if {!$dryrun} {
                            my DrawTextAt [expr {$x+$width}] $y $sent right
                        }
                    }
                    "center" {
                        if {!$dryrun} {
                            my DrawTextAt [expr {$x+$width/2.0}] $y $sent center
                        }
                    }
                    default {
                        if {!$dryrun} {
                            my DrawTextAt $x $y $sent
                        }
                    }
                }
                # Move y down to next line
                set y [expr {$y-$font_height}]
                incr lines

                set start $pos
                incr start
                set cwidth 0
                set lastbp $start

                # Will another line fit?
                if {($ystart - ($y + $bboxb)) > $height} {
                    return [string range $txt $start end]
                }
            } else {
                set cwidth [expr {$cwidth+$w}]
            }
            incr pos
        }
        return ""
    }

    # start text object, if not already in text
    method BeginTextObj {} {
        if {!$pdf(in_text_object)} {
            my Pdfout "BT\n"
            set pdf(in_text_object) true
        }
    }

    # end text object, if in text, else do nothing
    method EndTextObj {} {
        if {!$pdf(inPage)} { my startPage }
        if {$pdf(in_text_object)} {
            my Pdfout "ET\n"
            set pdf(in_text_object) false
        }
    }

    #######################################################################
    # Graphics Handling
    #######################################################################

    # Convert any user color to PDF color
    method GetColor {color} {
        # Remove list layers, to accept things that have been
        # multiply listified
        if {[llength $color] == 1} {
            set color [lindex $color 0]
        }
        if {[llength $color] == 4} {
            # Maybe range check them here...
            if {$pdf(cmyk)} {
                return $color
            }
            # Convert CMYK to RGB
            set color [pdf4tcl::cmyk2Rgb $color]
        }
        if {[llength $color] == 3} {
            # Maybe range check them here...
            set RGB $color
        } elseif {[regexp {^\#([[:xdigit:]]{2})([[:xdigit:]]{2})([[:xdigit:]]{2})$} \
                $color -> rHex gHex bHex]} {
            set red   [expr {[scan $rHex %x] / 255.0}]
            set green [expr {[scan $gHex %x] / 255.0}]
            set blue  [expr {[scan $bHex %x] / 255.0}]
            set RGB [list $red $green $blue]
        } else {
            # Use catch both to catch bad color, and to catch Tk not present
            if {[catch {winfo rgb . $color} tkcolor]} {
                throw "PDF4TCL" "unknown color: $color"
            }
            foreach {red green blue} $tkcolor break
            set red   [expr {($red   & 0xFF00) / 65280.0}]
            set green [expr {($green & 0xFF00) / 65280.0}]
            set blue  [expr {($blue  & 0xFF00) / 65280.0}]
            set RGB [list $red $green $blue]
        }
        if {!$pdf(cmyk)} {
            return $RGB
        }
        # Convert RGB to CMYK
        return [pdf4tcl::rgb2Cmyk $RGB]
    }

    ###<jpo 2004-11-08: replaced "on off" by "args"
    ###                 to enable resetting dashed lines
    method setLineStyle {width args} {
        set width [my CheckNumeric $width "line width" -nonnegative \
                           -unit $pdf(unit)]
        # Validate dash pattern
        set sum 0
        set pattern {}
        foreach p $args {
            set p [my CheckNumeric $p "dash pattern" -nonnegative \
                           -unit $pdf(unit)]
            set sum [expr {$sum + $p}]
            lappend pattern [Nf $p]
        }
        if {[llength $args] > 0 && $sum == 0} {
            throw "PDF4TCL" "dash pattern may not be all zeroes"
        }
        my EndTextObj
        my Pdfoutcmd $width "w"
        my Pdfout "\[$pattern\] 0 d\n"
    }

    method setLineWidth {width} {
        set width [my CheckNumeric $width "line width" -nonnegative \
                           -unit $pdf(unit)]
        my EndTextObj
        my Pdfoutcmd $width "w"
    }

    # Arguments are pairs for dash pattern plus an optional offset
    method setLineDash {args} {
        if {([llength $args] % 2) == 1} {
            set offset [lindex $args end]
            set args [lrange $args 0 end-1]
        } else {
            set offset 0
        }
        set offset [my CheckNumeric $offset "dash offset" -nonnegative \
                            -unit $pdf(unit)]
        # Validate dash pattern
        set sum 0
        set pattern {}
        foreach p $args {
            set p [my CheckNumeric $p "dash pattern" -nonnegative \
                           -unit $pdf(unit)]
            set sum [expr {$sum + $p}]
            lappend pattern [Nf $p]
        }
        if {[llength $args] > 0 && $sum == 0} {
            throw "PDF4TCL" "dash pattern may not be all zeroes"
        }
        my EndTextObj
        my Pdfout "\[$pattern\] [Nf $offset] d\n"
    }

    method DrawLine {args} {
        my EndTextObj
        set cmd "m"
        foreach {x y} $args {
            my Pdfoutcmd $x $y $cmd
            set cmd "l"
        }
        my Pdfoutcmd "S"
    }

    method line {x1 y1 x2 y2} {
        if {!$pdf(inPage)} { my startPage }
        my Trans $x1 $y1 x1 y1
        my Trans $x2 $y2 x2 y2

        my DrawLine $x1 $y1 $x2 $y2
    }

    # Draw a quadratic or cubic bezier curve
    method curve {x1 y1 x2 y2 x3 y3 args} {
        if {[llength $args] != 2 && [llength $args] != 0} {
            throw "PDF4TCL" "wrong # args: should be curve x1 y1 x2 y2 x3 y3 ?x4 y4?"
        }
        my EndTextObj
        my Trans $x1 $y1 x1 y1
        my Trans $x2 $y2 x2 y2
        my Trans $x3 $y3 x3 y3
        if {[llength $args] == 2} {
            # Cubic curve
            my Trans {*}$args x4 y4
        } else {
            # Quadratic curve
            set x4 $x3
            set y4 $y3
            set x3 [expr {($x4+2.0*$x2)/3.0}]
            set y3 [expr {($y4+2.0*$y2)/3.0}]
            set x2 [expr {($x1+2.0*$x2)/3.0}]
            set y2 [expr {($y1+2.0*$y2)/3.0}]
        }
        my Pdfoutcmd $x1 $y1 "m"
        my Pdfoutcmd $x2 $y2 $x3 $y3 $x4 $y4 "c"
        my Pdfoutcmd "S"
    }

    # Draw a polygon
    method polygon {args} {
        my EndTextObj

        set filled 0
        set stroke 1
        set start 1
        set closed 1

        foreach {x y} $args {
            if {[string match {-[a-z]*} $x]} {
                switch -- $x {
                    "-filled" {
                        set filled $y
                    }
                    "-stroke" {
                        set stroke $y
                    }
                    "-closed" {
                        set closed $y
                    }
                    default {
                        throw "PDF4TCL" "unknown option \"$x\""
                    }
                }
            } else {
                my Trans $x $y x y
                if {$start} {
                    my Pdfoutcmd $x $y "m"
                    set start 0
                } else {
                    my Pdfoutcmd $x $y "l"
                }
            }
        }
        if {$filled && $stroke} {
            my Pdfoutcmd "b"
        } elseif {$filled && !$stroke} {
            my Pdfoutcmd "f"
        } elseif {$closed} {
            my Pdfoutcmd "s"
        } else {
            my Pdfoutcmd "S"
        }
    }

    method DrawOval {x y rx ry stroke filled} {
        my EndTextObj

        set sq [expr {4.0*(sqrt(2.0)-1.0)/3.0}]
        set x0(0) [expr {$x+$rx}]
        set y0(0) $y
        set x1(0) [expr {$x+$rx}]
        set y1(0) [expr {$y+$ry*$sq}]
        set x2(0) [expr {$x+$rx*$sq}]
        set y2(0) [expr {$y+$ry}]
        set x3(0) $x
        set y3(0) [expr {$y+$ry}]
        set x1(1) [expr {$x-$rx*$sq}]
        set y1(1) [expr {$y+$ry}]
        set x2(1) [expr {$x-$rx}]
        set y2(1) [expr {$y+$ry*$sq}]
        set x3(1) [expr {$x-$rx}]
        set y3(1) $y
        set x1(2) [expr {$x-$rx}]
        set y1(2) [expr {$y-$ry*$sq}]
        set x2(2) [expr {$x-$rx*$sq}]
        set y2(2) [expr {$y-$ry}]
        set x3(2) $x
        set y3(2) [expr {$y-$ry}]
        set x1(3) [expr {$x+$rx*$sq}]
        set y1(3) [expr {$y-$ry}]
        set x2(3) [expr {$x+$rx}]
        set y2(3) [expr {$y-$ry*$sq}]
        set x3(3) [expr {$x+$rx}]
        set y3(3) $y
        my Pdfoutcmd $x0(0) $y0(0) "m"
        for {set i 0} {$i < 4} {incr i} {
            my Pdfoutcmd $x1($i) \
                            $y1($i) \
                            $x2($i) \
                            $y2($i) \
                            $x3($i) \
                            $y3($i) "c"
        }
        if {$filled && $stroke} {
            my Pdfoutcmd "b"
        } elseif {$filled && !$stroke} {
            my Pdfoutcmd "f"
        } else {
            my Pdfoutcmd " s"
        }
    }

    method circle {x y r args} {
        if {!$pdf(inPage)} { my startPage }
        set filled 0
        set stroke 1

        foreach {arg value} $args {
            switch -- $arg {
                "-filled" {
                    set filled $value
                }
                "-stroke" {
                    set stroke $value
                }
                default {
                    throw "PDF4TCL" "unknown option \"$arg\""
                }
            }
        }

        my Trans $x $y x y
        set r [pdf4tcl::getPoints $r $pdf(unit)]

        my DrawOval $x $y $r $r $stroke $filled
    }

    method oval {x y rx ry args} {
        if {!$pdf(inPage)} { my startPage }
        set filled 0
        set stroke 1

        foreach {arg value} $args {
            switch -- $arg {
                "-filled" {
                    set filled $value
                }
                "-stroke" {
                    set stroke $value
                }
                default {
                    throw "PDF4TCL" "unknown option \"$arg\""
                }
            }
        }

        my Trans $x $y x y
        set rx [pdf4tcl::getPoints $rx $pdf(unit)]
        set ry [pdf4tcl::getPoints $ry $pdf(unit)]

        my DrawOval $x $y $rx $ry $stroke $filled
    }

    # rotate by phi, scale with rx/ry and move by (dx, dy)
    proc ::pdf4tcl::Transform {rx ry phi dx dy points} {
        set cos_phi [expr {cos($phi)}]
        set sin_phi [expr {sin($phi)}]
        set res [list]
        foreach {x y} $points {
            set xn [expr {$rx * ($x*$cos_phi - $y*$sin_phi) + $dx}]
            set yn [expr {$ry * ($x*$sin_phi + $y*$cos_phi) + $dy}]
            lappend res $xn $yn
        }
        return $res
    }

    # Create a four-point spline that forms an arc along the unit circle
    # from angle -phi2 to +phi2 (where phi2 is in radians)
    proc ::pdf4tcl::Simplearc {phi2} {
        set x0 [expr {cos($phi2)}]
        set y0 [expr {-sin($phi2)}]
        set x3 $x0
        set y3 [expr {-$y0}]
        set x1 [expr {0.3333*(4.0-$x0)}]
        set y1 [expr {(1.0-$x0)*(3.0-$x0)/(3.0*$y0)}]
        set x2 $x1
        set y2 [expr {-$y1}]
        return [list $x0 $y0 $x1 $y1 $x2 $y2 $x3 $y3]
    }

    method DrawArc {x0 y0 rx ry phi extend stroke filled style} {
        if {abs($extend) >= 360.0} {
            my DrawOval $x0 $y0 $rx $ry $stroke $filled
            return
        }
        if {abs($extend) < 0.01} return
        my EndTextObj

        set count 1
        while {abs($extend) > 90} {
            set count [expr {2*$count}]
            set extend [expr {0.5*$extend}]
        }
        set phi [expr {$phi/180.0*3.1416}]
        set extend [expr {$extend/180.0*3.1416}]
        set phi2 [expr {0.5*$extend}]
        set x [expr {$x0+$rx*cos($phi)}]
        set y [expr {$y0+$ry*sin($phi)}]
        my Pdfoutcmd $x $y "m"
        set points [Simplearc $phi2]
        set phi [expr {$phi+$phi2}]
        for {set i 0} {$i < $count} {incr i} {
            foreach {x y x1 y1 x2 y2 x3 y3} \
                    [Transform $rx $ry $phi $x0 $y0 $points] break
            set phi [expr {$phi+$extend}]
            my Pdfoutcmd $x1 $y1 $x2 $y2 $x3 $y3 "c"
        }
        switch $style {
            "arc" {
                set filled 0
            }
            "pieslice" {
                # Add the line to the center
                my Pdfoutcmd $x0 $y0 "l"
                # Close the path
                my Pdfoutcmd "h"
            }
            "chord" {
                # Close the path
                my Pdfoutcmd "h"
            }
        }
        if {$filled && $stroke} {
            my Pdfoutcmd "B"
        } elseif {$filled && !$stroke} {
            my Pdfoutcmd "f"
        } else {
            my Pdfoutcmd "S"
        }
    }

    # Draw an arc
    method arc {x0 y0 rx ry phi extend args} {
        if {!$pdf(inPage)} { my startPage }
        set filled 0
        set stroke 1
        set style arc

        foreach {arg value} $args {
            switch -- $arg {
                "-filled" {
                    set filled $value
                }
                "-stroke" {
                    set stroke $value
                }
                "-style" {
                    set style $value
                }
                default {
                    throw "PDF4TCL" "unknown option \"$arg\""
                }
            }
        }

        my Trans $x0 $y0 x0 y0
        set rx [pdf4tcl::getPoints $rx $pdf(unit)]
        set ry [pdf4tcl::getPoints $ry $pdf(unit)]

        my DrawArc $x0 $y0 $rx $ry $phi $extend $stroke $filled $style
    }

    method arrow {x1 y1 x2 y2 sz {angle 20}} {
        if {!$pdf(inPage)} { my startPage }
        my Trans $x1 $y1 x1 y1
        my Trans $x2 $y2 x2 y2
        set sz [pdf4tcl::getPoints $sz $pdf(unit)]

        my DrawLine $x1 $y1 $x2 $y2
        set rad [expr {$angle*3.1415926/180.0}]
        set ang [expr {atan2(($y1-$y2), ($x1-$x2))}]
        my DrawLine $x2 $y2 [expr {$x2+$sz*cos($ang+$rad)}] \
                [expr {$y2+$sz*sin($ang+$rad)}]
        my DrawLine $x2 $y2 [expr {$x2+$sz*cos($ang-$rad)}] \
                [expr {$y2+$sz*sin($ang-$rad)}]
    }

    method setBgColor {args} {
        set pdf(bgColor) [my GetColor $args]
    }

    method SetFillColor {color} {
        if {$pdf(cmyk)} {
            foreach {red green blue k} $color break
            my Pdfoutcmd $red $green $blue $k "k"
        } else {
            foreach {red green blue} $color break
            my Pdfoutcmd $red $green $blue "rg"
        }
    }

    method setFillColor {args} {
        if {!$pdf(inPage)} { my startPage }
        set pdf(fillColor) [my GetColor $args]
        my SetFillColor $pdf(fillColor)
    }

    method SetStrokeColor {color} {
        if {$pdf(cmyk)} {
            foreach {red green blue k} $color break
            my Pdfoutcmd $red $green $blue $k "K"
        } else {
            foreach {red green blue} $color break
            my Pdfoutcmd $red $green $blue "RG"
        }
    }

    method setStrokeColor {args} {
        if {!$pdf(inPage)} { my startPage }
        set pdf(strokeColor) [my GetColor $args]
        my SetStrokeColor $pdf(strokeColor)
    }

    # Draw a rectangle, internal version
    method DrawRect {x y w h stroke filled} {
        my Pdfoutcmd $x $y $w $h "re"
        if {$filled && $stroke} {
            my Pdfoutcmd "B"
        } elseif {$filled && !$stroke} {
            my Pdfoutcmd "f"
        } else {
            my Pdfoutcmd "S"
        }
    }

    # Draw a polygon, internal version
    method DrawPoly {stroke filled args} {
        set start 1
        foreach {x y} $args {
            if {$start} {
                my Pdfoutcmd $x $y "m"
                set start 0
            } else {
                my Pdfoutcmd $x $y "l"
            }
        }
        if {$filled && $stroke} {
            my Pdfoutcmd "b"
        } elseif {$filled && !$stroke} {
            my Pdfoutcmd "f"
        } else {
            my Pdfoutcmd "s"
        }
    }

    # Draw a rectangle
    method rectangle {x y w h args} {
        my EndTextObj

        set filled 0
        set stroke 1
        foreach {arg value} $args {
            switch -- $arg {
                "-filled" {
                    set filled $value
                }
                "-stroke" {
                    set stroke $value
                }
                default {
                    throw "PDF4TCL" "unknown option \"$arg\""
                }
            }
        }
        my Trans $x $y x y
        my TransR $w $h w h

        my DrawRect $x $y $w $h $stroke $filled
    }

    # Clip outside a rectangle
    method clip {x y w h} {
        my EndTextObj

        my Trans $x $y x y
        my TransR $w $h w h
        set x1 $x
        set y1 $y
        set x2 [expr {$x + $w}]
        set y2 [expr {$y + $h}]

        my Pdfoutcmd $x1 $y1 "m"
        my Pdfoutcmd $x2 $y1 "l"
        my Pdfoutcmd $x2 $y2 "l"
        my Pdfoutcmd $x1 $y2 "l"
        my Pdfoutcmd $x1 $y1 "l"
        my Pdfoutcmd "W"
        my Pdfoutcmd "n"
    }

    # Save graphic context
    method gsave {} {
        my Pdfoutcmd "q"
        # Keep track of the state in the PDF object that is stored in paralell
        foreach item $pdf(stateToGSave) {
            lappend pdf(saved,$item) $pdf($item)
        }
    }

    # Restore graphic context
    method grestore {} {
        my Pdfoutcmd "Q"
        foreach item $pdf(stateToGSave) {
            if {[info exists pdf(saved,$item)]} {
                if {[llength $pdf(saved,$item)] > 0} {
                    set pdf($item) [lindex $pdf(saved,$item) end]
                    set pdf(saved,$item) [lrange $pdf(saved,$item) 0 end-1]
                }
            }
        }
    }

    #######################################################################
    # Image Handling
    #######################################################################

    # Add an image to the document
    method addImage {filename args} {
        set id ""
        set type ""
        foreach {arg val} $args {
            switch -- $arg {
                -id {
                    set id $val
                }
                -type {
                    set type $val
                }
            }
        }

        if {$type eq ""} {
            switch -glob -nocase $filename {
                *.png {
                    set type png
                }
                *.jpg - *.jpeg {
                    set type jpg
                }
                *.tif - *.tiff {
                    set type tiff
                }
                default {
                    throw "PDF4TCL" "unknown image type \"$filename\""
                }
            }
        }
        switch $type {
            png {
                set id [my AddPng $filename $id]
            }
            jpg - jpeg {
                set id [my AddJpeg $filename $id]
            }
            tif - tiff {
                set id [my AddTiff $filename $id]
            }
            default {
                throw "PDF4TCL" "unknown image type \"$type\""
            }
        }
        return $id
    }

    # JPEG part of addImage
    method AddJpeg {filename id} {
        if {!$pdf(inPage)} { my startPage }

        set imgOK false
        if {[catch {open $filename "r"} if]} {
            throw "PDF4TCL" "could not open file $filename"
        }

        fconfigure $if -translation binary
        set img [read $if]
        close $if
        binary scan $img "H4" h
        if {$h != "ffd8"} {
            throw "PDF4TCL" "file $filename does not contain JPEG data"
        }
        set pos 2
        set img_length [string length $img]
        while {$pos < $img_length} {
            set endpos [expr {$pos+4}]
            binary scan [string range $img $pos $endpos] "H4S" h length
            set length [expr {$length & 0xffff}]
            if {$h == "ffc0"} {
                incr pos 4
                set endpos [expr {$pos+6}]
                binary scan [string range $img $pos $endpos] "cSSc" \
                        depth height width components
                set height [expr {$height & 0xffff}]
                set width [expr {$width & 0xffff}]
                set imgOK true
                break
            } else {
                incr pos 2
                incr pos $length
            }
        }
        if {!$imgOK} {
            throw "PDF4TCL" "something is wrong with jpeg data in file $filename"
        }
        set    xobject "<<\n/Type /XObject\n"
        append xobject "/Subtype /Image\n"
        append xobject "/Width $width\n/Height $height\n"
        if {$components == 1} {
            append xobject "/ColorSpace /DeviceGray\n"
        } else {
            append xobject "/ColorSpace /DeviceRGB\n"
        }
        append xobject "/BitsPerComponent $depth\n"
        append xobject "/Filter /DCTDecode\n"
        append xobject "/Length $img_length >>\n"
        append xobject "stream\n"
        append xobject $img
        append xobject "\nendstream"

        set oid [my AddObject $xobject]

        if {$id eq ""} {
            set id image$oid
        }
        set images($id) [list $width $height $oid 0]
        return $id
    }

    # PNG support
    #
    # This implementation uses tricks in PDF to avoid unpacking the
    # compressed data stream.  Currently this means that interlaced
    # images are not supported.
    # Decompressing (using zlib) would be feasible I guess, but the
    # de-filtering and de-interlacing steps would be rather costly.
    # Anyone needing such png images can always load them themselves
    # and provide them as raw images.

    method AddPng {filename id} {

        set imgOK false
        if {[catch {open $filename "r"} if]} {
            throw "PDF4TCL" "could not open file $filename"
        }

        fconfigure $if -translation binary
        if {[read $if 8] != "\x89PNG\r\n\x1a\n"} {
            close $if
            throw "PDF4TCL" "file does not contain PNG data"
        }
        set img [read $if]
        close $if

        set pos 0
        set img_length [string length $img]
        set img_data ""
        set palette ""
        while {$pos < $img_length} {
            # Scan one chunk
            binary scan $img "@${pos}Ia4" length type
            incr pos 8
            set data [string range $img $pos [expr {$pos + $length - 1}]]
            incr pos $length
            binary scan $img "@${pos}I" crc
            incr pos 4

            switch $type {
                "IHDR" {
                    set imgOK 1
                    binary scan $data IIccccc width height depth color \
                            compression filter interlace
                }
                "PLTE" {
                    set palette $data
                }
                "IDAT" {
                    append img_data $data
                }
            }
        }

        if {!$imgOK} {
            throw "PDF4TCL" "something is wrong with PNG data in file $filename"
        }
        if {[string length $img_data] == 0} {
            throw "PDF4TCL" "PNG file does not contain any IDAT chunks"
        }
        if {$compression != 0} {
            throw "PDF4TCL" "PNG file is of an unsupported compression type"
        }
        if {$filter != 0} {
            throw "PDF4TCL" "PNG file is of an unsupported filter type"
        }
        if {$interlace != 0} {
            # Would need to unpack and repack to do interlaced
            throw "PDF4TCL" "interlaced PNG is not supported"
        }

        if {$palette ne ""} {
            # Transform the palette into a PDF Indexed color space
            binary scan $palette H* PaletteHex
            set PaletteLen [expr {[string length $palette] / 3 - 1}]
            set paletteX "\[ /Indexed /DeviceRGB "
            append paletteX $PaletteLen " < "
            append paletteX $PaletteHex
            append paletteX " > \]"
        }

        set    xobject "<<\n/Type /XObject\n"
        append xobject "/Subtype /Image\n"
        append xobject "/Width $width\n/Height $height\n"

        if {$depth > 8} {
            my RequireVersion 1.5
        }

        switch $color {
            0 { # Grayscale
                append xobject "/ColorSpace /DeviceGray\n"
                append xobject "/BitsPerComponent $depth\n"
                append xobject "/Filter /FlateDecode\n"
                append xobject "/DecodeParms << /Predictor 15 /Colors 1 /BitsPerComponent $depth /Columns $width>>\n"
            }
            2 { # RGB
                append xobject "/ColorSpace /DeviceRGB\n"
                append xobject "/BitsPerComponent $depth\n"
                append xobject "/Filter /FlateDecode\n"
                append xobject "/DecodeParms << /Predictor 15 /Colors 3 /BitsPerComponent $depth /Columns $width>>\n"
            }
            3 { # Palette
                append xobject "/ColorSpace $paletteX\n"
                append xobject "/BitsPerComponent $depth\n"
                append xobject "/Filter /FlateDecode\n"
                append xobject "/DecodeParms << /Predictor 15 /Colors 1 /BitsPerComponent $depth /Columns $width>>\n"
            }
            4 { # Gray + alpha
                my PngInitGrayAlpha
                append xobject "/ColorSpace $pdf(png_ga) 0 R\n"
                append xobject "/BitsPerComponent $depth\n"
                append xobject "/Filter /FlateDecode\n"
                append xobject "/DecodeParms << /Predictor 15 /Colors 2 /BitsPerComponent $depth /Columns $width>>\n"
            }
            6 { # RGBA
                my PngInitRgba
                append xobject "/ColorSpace $pdf(png_rgba) 0 R\n"
                append xobject "/BitsPerComponent $depth\n"
                append xobject "/Filter /FlateDecode\n"
                append xobject "/DecodeParms << /Predictor 15 /Colors 4 /BitsPerComponent $depth /Columns $width>>\n"
            }
        }

        append xobject "/Length [string length $img_data] >>\n"
        append xobject "stream\n"
        append xobject $img_data
        append xobject "\nendstream"

        set oid [my AddObject $xobject]

        if {$id eq ""} {
            set id image$oid
        }
        set images($id) [list $width $height $oid 0]
        return $id
    }

    # Create the Color Space needed to display RGBA as RGB
    method PngInitRgba {} {
        if {[info exists pdf(png_rgba)]} return
        set    body "<< /FunctionType 4\n"
        append body {/Domain [ 0.0  1.0  0.0  1.0 0.0  1.0 0.0  1.0 ]} \n
        append body {/Range [ 0.0  1.0 0.0  1.0 0.0  1.0 ]} \n
        append body {/Length 5} \n
        append body {>>} \n
        append body {stream} \n
        append body {{pop}} \n
        append body {endstream}
        set oid [my AddObject $body]

        set body    "\[ /DeviceN\n"
        append body "   \[ /Red /Green /Blue /Alpha \]\n"
        append body "    /DeviceRGB\n"
        append body "    $oid 0 R   % Tint transformation function\n"
        append body "\]"
        set pdf(png_rgba) [my AddObject $body]
    }


    # TIFF part of addImage
    method AddTiff {filename id} {
        if {[catch {package require tiff}]} {
            throw PDF4TCL "package tiff is required to use TIFF"
        }
        if {![::tiff::isTIFF $filename]} {
            throw PDF4TCL "file $filename does not contain TIFF data"
        }
        if {[catch {open $filename r} chan]} {
            throw PDF4TCL "could not open file $filename"
        }
        try {
            chan configure $chan -translation binary

            lassign [::tiff::getEntry $filename Compression] -> compression
            lassign [::tiff::getEntry $filename ImageWidth] -> width
            lassign [::tiff::getEntry $filename PhotometricInterpretation] -> \
                    photometric
            lassign [::tiff::getEntry $filename ImageLength] -> height
            lassign [::tiff::getEntry $filename StripOffsets] -> offsets
            lassign [::tiff::getEntry $filename StripByteCounts] -> sbc
            lassign [::tiff::getEntry $filename RowsPerStrip] -> rps
            lassign [::tiff::getEntry $filename FillOrder] -> fillOrder

            set img_data {}
            foreach offset $offsets bc $sbc {
                seek $chan $offset
                append img_data [read $chan $bc]
            }

            set    xobject "<<\n/Type /XObject\n"
            append xobject "/Subtype /Image\n"
            append xobject "/Width $width\n/Height $height\n"

            append xobject "/Length [string length $img_data]\n"

            if {$photometric} {
                set blackisone { /BlackIs1 true}
            } else {
                set blackisone {}
            }

            switch $compression {
                4 {
                    append xobject "/BitsPerComponent 1\n"
                    append xobject "/ColorSpace /DeviceGray\n"
                    append xobject "/Filter /CCITTFaxDecode /DecodeParms << /K -1 /Columns $width /Rows $height $blackisone>>\n"

                    if {$fillOrder == 2} {
                        # Swap bitwise endian in each byte
                        binary scan $img_data b* apa
                        set img_data [binary format B* $apa]
                    }
                }
                default {
                    throw PDF4TCL "unsupported TIFF compression"
                }
            }
            append xobject ">>\n"
            append xobject stream\n
            append xobject $img_data
            append xobject \nendstream

            set oid [my AddObject $xobject]
            if {$id eq {}} {
                set id image$oid
            }
            set images($id) [list $width $height $oid 0]
        } finally {
            close $chan
        }
        return $id
    }

    # Create the Color Space needed to display Gray+Alpha as Gray
    method PngInitGrayAlpha {} {
        if {[info exists pdf(png_ga)]} return
        set    body "<< /FunctionType 4\n"
        append body {/Domain [ 0.0  1.0  0.0  1.0 ]} \n
        append body {/Range [ 0.0  1.0 ]} \n
        append body {/Length 5} \n
        append body {>>} \n
        append body {stream} \n
        append body {{pop}} \n
        append body {endstream}
        set oid [my AddObject $body]

        set body    "\[ /DeviceN\n"
        append body "   \[ /_Gray_ /_Alpha_ \]\n"
        append body "    /DeviceGray\n"
        append body "    $oid 0 R   % Tint transformation function\n"
        append body "\]"
        set pdf(png_ga) [my AddObject $body]
    }

    # Incomplete gif experiment...
    method AddGif {filename id} {

        set imgOK false
        if {[catch {open $filename "r"} if]} {
            throw "PDF4TCL" "could not open file $filename"
        }

        fconfigure $if -translation binary
        set sign [read $if 6]
        if {![string match "GIF*" $sign]} {
            close $if
            throw "PDF4TCL" "file does not contain GIF data"
        }
        set img [read $if]
        close $if

        set pos 0
        set img_length [string length $img]
        set img_data ""
        set palette ""

        # Read the screen descriptor
        binary scan $img "ssccc" scrWidth scrHeight cr bg dummy
        set pos 7
        set depth [expr {($cr & 7) + 1}]
        set colorMap [expr {($cr >> 7) & 1}]
        set colorRes [expr {($cr >> 4) & 7}]
        set nColor [expr {1 << $colorRes}]

        set gMap {}
        if {$colorMap} {
            for {set t 0} {$t < $nColor} {incr t} {
                binary scan $img "@${pos}ccc" red green blue
                incr pos 3
                lappend gMap $red $green $blue
            }
        }

        while {$pos < $img_length} {
            # Scan one chunk
            binary scan $img "@${pos}Ia4" length type
            incr pos 8
            set data [string range $img $pos [expr {$pos + $length - 1}]]
            incr pos $length
            binary scan $img "@${pos}I" crc
            incr pos 4

            switch $type {
                "IHDR" {
                    set imgOK 1
                    binary scan $data IIccccc width height depth color \
                            compression filter interlace
                }
                "PLTE" {
                    set palette $data
                }
                "IDAT" {
                    append img_data $data
                }
            }
        }

        if {!$imgOK} {
            throw "PDF4TCL" "something is wrong with PNG data in file $filename"
        }
        if {[string length $img_data] == 0} {
            throw "PDF4TCL" "PNG file does not contain any IDAT chunks"
        }
        if {$compression != 0} {
            throw "PDF4TCL" "PNG file is of an unsupported compression type"
        }
        if {$filter != 0} {
            throw "PDF4TCL" "PNG file is of an unsupported filter type"
        }
        if {$interlace != 0} {
            # Would need to unpack and repack to do interlaced
            throw "PDF4TCL" "interlaced PNG is not supported"
        }

        if {$palette ne ""} {
            # Transform the palette into a PDF Indexed color space
            binary scan $palette H* PaletteHex
            set PaletteLen [expr {[string length $palette] / 3 - 1}]
            set paletteX "\[ /Indexed /DeviceRGB "
            append paletteX $PaletteLen " < "
            append paletteX $PaletteHex
            append paletteX " > \]"
        }

        set    xobject "<<\n/Type /XObject\n"
        append xobject "/Subtype /Image\n"
        append xobject "/Width $width\n/Height $height\n"

        if {$depth > 8} {
            my RequireVersion 1.5
        }

        switch $color {
            0 { # Grayscale
                append xobject "/ColorSpace /DeviceGray\n"
                append xobject "/BitsPerComponent $depth\n"
                append xobject "/Filter /FlateDecode\n"
                append xobject "/DecodeParms << /Predictor 15 /Colors 1 /BitsPerComponent $depth /Columns $width>>\n"
            }
            2 { # RGB
                append xobject "/ColorSpace /DeviceRGB\n"
                append xobject "/BitsPerComponent $depth\n"
                append xobject "/Filter /FlateDecode\n"
                append xobject "/DecodeParms << /Predictor 15 /Colors 3 /BitsPerComponent $depth /Columns $width>>\n"
            }
            3 { # Palette
                append xobject "/ColorSpace $paletteX\n"
                append xobject "/BitsPerComponent $depth\n"
                append xobject "/Filter /FlateDecode\n"
                append xobject "/DecodeParms << /Predictor 15 /Colors 1 /BitsPerComponent $depth /Columns $width>>\n"
            }
            4 { # Gray + alpha
                my PngInitGrayAlpha
                append xobject "/ColorSpace $pdf(png_ga) 0 R\n"
                append xobject "/BitsPerComponent $depth\n"
                append xobject "/Filter /FlateDecode\n"
                append xobject "/DecodeParms << /Predictor 15 /Colors 2 /BitsPerComponent $depth /Columns $width>>\n"
            }
            6 { # RGBA
                my PngInitRgba
                append xobject "/ColorSpace $pdf(png_rgba) 0 R\n"
                append xobject "/BitsPerComponent $depth\n"
                append xobject "/Filter /FlateDecode\n"
                append xobject "/DecodeParms << /Predictor 15 /Colors 4 /BitsPerComponent $depth /Columns $width>>\n"
            }
        }

        append xobject "/Length [string length $img_data] >>\n"
        append xobject "stream\n"
        append xobject $img_data
        append xobject "\nendstream"

        set oid [my AddObject $xobject]

        if {$id eq ""} {
            set id image$oid
        }
        set images($id) [list $width $height $oid 0]
        return $id
    }

    # Return the height of an image.
    method getImageHeight {id} {
        set status {}
        if {[info exists images($id)]} {
            set status [lindex $images($id) 1]
        }
        return $status
    }

    # Return the size of an image. The size is returned as a list containing
    # the width and height of the image.
    method getImageSize {id} {
        set status {}
        if {[info exists images($id)]} {
            set status [lrange $images($id) 0 1]
        }
        return $status
    }

    # Return the width of an image.
    method getImageWidth {id} {
        set status {}
        if {[info exists images($id)]} {
            set status [lindex $images($id) 0]
        }
        return $status
    }

    # Check an anchor value and optionally translate it
    method CheckAnchor {value {dxName ""} {dyName ""}} {
        if {$value ni {nw n ne e se s sw w center}} {
            throw "PDF4TCL" "bad anchor \"$value\""
        }
        if {$dxName eq "" && $dyName eq ""} return
        upvar 1 $dxName dx $dyName dy

        switch $value {
            nw { set dx 0.0 ; set dy 1.0 }
            n  { set dx 0.5 ; set dy 1.0 }
            ne { set dx 1.0 ; set dy 1.0 }
            e  { set dx 1.0 ; set dy 0.5 }
            se { set dx 1.0 ; set dy 0.0 }
            s  { set dx 0.5 ; set dy 0.0 }
            sw { set dx 0.0 ; set dy 0.0 }
            w  { set dx 0.0 ; set dy 0.5 }
            default { set dx 0.5 ; set dy 0.5 }
        }
    }

    # Place an image at the page
    method putImage {id x y args} {
        my EndTextObj
        foreach {width height oid} $images($id) {break}

        my Trans $x $y x y
        set w $width
        set h $height
        set wfix 0
        set hfix 0
        set angle 0
        # Default anchor depends on coordinate system
        if {$pdf(orient)} {
            set anchor nw
        } else {
            set anchor sw
        }

        foreach {arg value} $args {
            switch -- $arg {
                "-angle" {
                    my CheckNumeric $value "angle"
                    set angle $value
                }
                "-anchor" {
                    my CheckAnchor $value
                    set anchor $value
                }
                "-width"  {
                    set w [pdf4tcl::getPoints $value $pdf(unit)]
                    set wfix 1
                }
                "-height" {
                    set h [pdf4tcl::getPoints $value $pdf(unit)]
                    set hfix 1
                }
            }
        }
        if {$wfix && !$hfix} {
            set h [expr {$height*$w/$width}]
        }
        if {$hfix && !$wfix} {
            set w [expr {$width*$h/$height}]
        }

        my Pdfoutcmd "q"

        # 1: Translate origin, to rotate around the anchor
        #
        my CheckAnchor $anchor dx dy
        set mt [list 1 0 0 1 [- $dx] [- $dy]]
        # 2: Scale while in the right direction
        set mt [MulMxM $mt [list $w 0 0 $h 0 0]]
        # 3: Rotate
        if {$angle != 0} {
            # Rotation matrix:
            set r1 [expr {$angle*3.1415926/180.0}]
            set c [expr {cos($r1)}]
            set s [expr {sin($r1)}]
            set mr [list $c $s [- $s] $c 0 0]
            # Which order should this be?
            set mt [MulMxM $mt $mr]
        }
        # Move into place
        set mt [MulMxM $mt [list 1 0 0 1 $x $y]]
        my Pdfoutcmd {*}$mt "cm"
        my Pdfout "/$id Do\nQ\n"
    }

    # Add a raw image to the document, to be placed later
    method addRawImage {img_data args} {
        # Determine the width and height of the image, which is
        # a list of lists(rows).
        set width [llength [lindex $img_data 0]]
        set height [llength $img_data]

        set compress $pdf(compress)
        set id ""
        foreach {arg value} $args {
            switch -- $arg {
                "-compress" {
                    my CheckBoolean -compress $value
                    set compress $value
                }
                "-id" {set id $value}
            }
        }

        set    xobject "<<\n/Type /XObject\n"
        append xobject "/Subtype /Image\n"
        append xobject "/Width $width\n/Height $height\n"
        append xobject "/ColorSpace /DeviceRGB\n"
        append xobject "/BitsPerComponent 8\n"

        # Iterate on each row of the image data.
        set img ""
        foreach rawRow $img_data {
            # Remove spaces and # characters
            set row [string map "# {} { } {}" $rawRow]
            # Convert data to binary format and
            # add to data stream.
            append img [binary format H* $row]
        }

        if {$compress} {
            append xobject "/Filter \[/FlateDecode\]\n"
            set img [zlib compress $img]
        }

        append xobject "/Length [string length $img]>>\n"
        append xobject "stream\n"
        append xobject $img
        append xobject "\nendstream"

        set oid [my AddObject $xobject]

        if {$id eq ""} {
            set id image$oid
        }
        set images($id) [list $width $height $oid 0]
        return $id
    }

    # Place a raw image at the page
    method putRawImage {img_data x y args} {
        my EndTextObj
        # Determine the width and height of the image, which is
        # a list of lists(rows).
        set width [llength [lindex $img_data 0]]
        set height [llength $img_data]

        my Trans $x $y x y
        set w $width
        set h $height
        set wfix 0
        set hfix 0
        set angle 0
        set compress $pdf(compress)
        # Default anchor depends on coordinate system
        if {$pdf(orient)} {
            set anchor nw
        } else {
            set anchor sw
        }

        foreach {arg value} $args {
            switch -- $arg {
                "-angle" {
                    my CheckNumeric $value "angle"
                    set angle $value
                }
                "-anchor" {
                    my CheckAnchor $value
                    set anchor $value
                }
                "-compress" {
                    my CheckBoolean -compress $value
                    set compress $value
                }
                "-width"  {
                    set w [pdf4tcl::getPoints $value $pdf(unit)]
                    set wfix 1
                }
                "-height" {
                    set h [pdf4tcl::getPoints $value $pdf(unit)]
                    set hfix 1
                }
            }
        }
        if {$wfix && !$hfix} {
            set h [expr {$height*$w/$width}]
        }
        if {$hfix && !$wfix} {
            set w [expr {$width*$h/$height}]
        }

        my Pdfoutcmd "q"

        # 1: Translate origin, to rotate around the anchor
        #
        my CheckAnchor $anchor dx dy
        set mt [list 1 0 0 1 [- $dx] [- $dy]]
        # 2: Scale while in the right direction
        set mt [MulMxM $mt [list $w 0 0 $h 0 0]]
        # 3: Rotate
        if {$angle != 0} {
            # Rotation matrix:
            set r1 [expr {$angle*3.1415926/180.0}]
            set c [expr {cos($r1)}]
            set s [expr {sin($r1)}]
            set mr [list $c $s [- $s] $c 0 0]
            # Which order should this be?
            set mt [MulMxM $mt $mr]
        }
        # Move into place
        set mt [MulMxM $mt [list 1 0 0 1 $x $y]]
        my Pdfoutcmd {*}$mt "cm"

        my Pdfoutcmd "BI"
        my Pdfoutn   "/W [Nf $width]"
        my Pdfoutn   "/H [Nf $height]"
        my Pdfoutn   "/CS /RGB"
        my Pdfoutn   "/BPC 8"

        # Iterate on each row of the image data.
        set img ""
        foreach rawRow $img_data {
            # Remove spaces and # characters
            set row [string map "# {} { } {}" $rawRow]
            # Convert data to binary format and
            # add to data stream.
            append img [binary format H* $row]
        }

        if {$compress} {
            my Pdfoutn "/F /Fl"
            set img [zlib compress $img]
        }

        my Pdfoutcmd "ID"
        my Pdfout    $img
        my Pdfout    \n
        my Pdfoutcmd "EI"
        my Pdfoutcmd "Q"
    }

    # Add a bitmap to the document, as a pattern
    method AddBitmap {bitmap args} {
        set id ""
        set pattern ""
        foreach {arg value} $args {
            switch -- $arg {
                "-id"      {set id $value}
                "-pattern" {set pattern $value}
            }
        }

        # Load the bitmap file
        if {[string index $bitmap 0] eq "@"} {
            set filename [string range $bitmap 1 end]
        } else {
            # Internal bitmap
            set filename [file join $::pdf4tcl::dir "bitmaps" ${bitmap}.xbm]
        }
        if {![file exists $filename]} {
            throw "PDF4TCL" "no such bitmap $bitmap"
        }
        set ch [open $filename "r"]
        set bitmapdata [read $ch]
        close $ch
        if {![regexp {_width (\d+)} $bitmapdata -> width]} {
            throw "PDF4TCL" "not a bitmap $bitmap"
        }
        if {![regexp {_height (\d+)} $bitmapdata -> height]} {
            throw "PDF4TCL" "not a bitmap $bitmap"
        }
        if {![regexp {_bits\s*\[\]\s*=\s*\{(.*)\}} $bitmapdata -> rawdata]} {
            throw "PDF4TCL" "not a bitmap $bitmap"
        }
        set bytes [regexp -all -inline {0x[a-fA-F0-9]{2}} $rawdata]
        set bytesPerLine [expr {[llength $bytes] / $height}]

        set bits ""
        foreach byte $bytes {
            # Reverse bit order
            for {set t 0} {$t < 8} {incr t} {
                append bits [expr {1 & $byte}]
                set byte [expr {$byte >> 1}]
            }
        }
        set bitstream [binary format B* $bits]

        if {$pattern eq ""} {
            # The Image Mask Object can be used as transparency Mask
            # for something else, e.g. when drawing the bitmap itself
            # with transparent background.

            set    xobject "<<\n/Type /XObject\n"
            append xobject "/Subtype /Image\n"
            append xobject "/Width $width\n/Height $height\n"
            append xobject {/ImageMask true /Decode [ 1 0 ]} \n
            append xobject "/BitsPerComponent 1\n"
            append xobject "/Length [string length $bitstream]\n"
            append xobject ">>\nstream\n"
            append xobject $bitstream
            append xobject "\nendstream"

            set imoid [my AddObject $xobject]
            if {$id eq ""} {
                set id bitmap$imoid
            }
            set bitmaps($id) [list $width $height $imoid $bitstream]
            return $id
        } else {
            # Inline image within the Pattern Object
            set    stream "q\n"
            append stream "$width 0 0 $height 0 0 " "cm" \n
            append stream "BI\n"
            append stream "/W [Nf $width]\n"
            append stream "/H [Nf $height]\n"
            append stream {/IM true /Decode [ 1 0 ]} \n
            append stream "/BPC 1\n"
            append stream "ID\n"
            append stream $bitstream
            append stream ">\nEI\nQ"

            # The Pattern Object can be used as a stipple Mask with the Cs1
            # Colorspace.

            if {[llength $pattern] == 4} {
                foreach {xscale yscale xoffset yoffset} $pattern break
            } else {
                set xscale 1
                set yscale 1
                set xoffset 0
                set yoffset 0
            }

            set xobject "<<\n/Type /Pattern\n"
            append xobject "/PatternType 1\n"
            append xobject "/PaintType 2\n"
            append xobject "/TilingType 1\n"
            append xobject "/BBox \[ 0 0 $width $height \]\n"
            append xobject "/XStep $width\n"
            append xobject "/YStep $height\n"
            append xobject "/Matrix \[ $xscale 0 0 $yscale $xoffset $yoffset \] \n"
            append xobject "/Resources <<\n"
            append xobject ">>\n"
            append xobject "/Length [string length $stream]\n"
            append xobject ">>\n"
            append xobject "stream\n"
            append xobject $stream
            append xobject "\nendstream"

            set oid [my AddObject $xobject]

            if {$id eq ""} {
                set id pattern$oid
            }
            set patterns($id) [list $width $height $oid]
            return $id
        }
    }

    # Add tkpath pimage object, this can be either an alpha mask
    # or a RGB image, both formatted as an PDF object with stream
    # of pixel data appended
    method addTkpimgObj {width height xobject} {
        if {!$pdf(inPage)} { my startPage }
        set oid [my AddObject $xobject]
        set id pimg$oid
        set images($id) [list $width $height $oid 0]
        return [list $oid $id]
    }

    # Format one line of tkpath ptext
    method getTkpptext {font line} {
        return [CleanText $line $font]
    }

    # Add tkpath extended graphics state object
    method addTkpextgs {body {smoid {}}} {
        if {!$pdf(inPage)} { my startPage }
        if {$smoid ne {}} {
            set id smask$smoid
            set extgs($id) $smoid
        }
        set oid [my AddObject $body]
        set id extgs$oid
        set extgs($id) $oid
        return [list $oid $id]
    }

    # Add tkpath object e.g. for gradient fills
    method addTkpobj {body} {
        if {!$pdf(inPage)} { my startPage }
        return [my AddObject $body]
    }

    # Add tkpath shading/pattern object for gradient fills
    method addTkpgrad {oid} {
        if {!$pdf(inPage)} { my startPage }
        set id grad$oid
        set grads($id) [list 0 0 $oid]
        return [list $oid $id]
    }

    # Embed a file and return a handle to the File Specification Object.
    method embedFile {fn args} {
        set id ""
        set contents ""
        set contentsIsSet 0
        foreach {arg val} $args {
            switch -- $arg {
                -id {
                    set id $val
                }
                -contents {
                    set contents $val
                    set contentsIsSet 1
                }
            }
        }
        if {!$contentsIsSet} {
            set ch [open $fn r]
            fconfigure $ch -translation binary
            set contents [read $ch]
            close $ch
        }

        # 1. make stream with file contents
        set body [MakeStream "<< /Type /EmbeddedFile " $contents $pdf(compress)]
        set sid [my AddObject $body]

        # 2. create file specification dictionary
        set fsdict "<< /Type /Filespec\n"
        append fsdict " /F [QuoteString $fn]\n"
        append fsdict " /EF << /F $sid 0 R >>\n"
        append fsdict ">>\n"
        set fsid [my AddObject $fsdict]

        if {$id eq ""} {
            set id file$fsid
        }
        set files($id) $fsid

        return $id
    }

    # Embed a file and create a file annotation
    method attachFile {x y width height fid description args} {
        set icon Paperclip

        foreach {option value} $args {
            switch -- $option {
                -icon {
                    if {$value ni {Paperclip Tag Graph PushPin}} {
                        if {![info exists images($value)]} {
                            throw "PDF4TCL" "unknown value for -icon"
                        }
                    }
                    set icon $value
                }
                default {
                    throw "PDF4TCL" "unknown option \"$option\""
                }
            }
        }

        # recompute coordinates to current system
        my Trans  $x $y x y
        my TransR $width $height width height
        set x2 [expr {$x+$width}]
        set y2 [expr {$y+$height}]

        set fsid $files($fid)

        # Create annotation
        set andict "<< /Type /Annot\n"
        append andict "  /Subtype /FileAttachment\n"
        append andict "  /FS $fsid 0 R\n"
        append andict "  /Contents [QuoteString $description]\n"
        if {[info exists images($icon)]} {
            foreach {_ _ iconOid} $images($icon) break
            append andict "  /AP << /N $iconOid 0 R >>\n"
        } else {
            append andict "  /Name /$icon\n"
        }
        append andict "  /Rect \[$x $y $x2 $y2\]\n"
        append andict ">>\n"
        set anid [my AddObject $andict]

        # 4. Insert annotation into current page
        lappend pdf(annotations) "$anid 0 R"
    }

    # Add an interactive form
    # Currently supports text and checkbutton
    method addForm {ftype x y width height args} {
        if {$ftype ni {text checkbutton}} {
            throw "PDF4TCL" "unknown form type $ftype"
        }
        set initValue ""
        set onObj ""
        set offObj ""
        set idStr ""
        set multiline 0
        if {$ftype eq "checkbutton"} {
            set initValue 0
        }

        # Handle options
        foreach {option value} $args {
            switch -- $option {
                -init {
                    set initValue $value
                }
                -on {
                    set onObj $value
                }
                -off {
                    set offObj $value
                }
                -id {
                    # An ID may not include a period according to PDF standard.
                    # We keep it stricter to stay within word characters.
                    my CheckWord $option $value
                    set idStr $value
                }
                -multiline {
                    my CheckBoolean $option $value
                    set multiline $value
                }
                default {
                    throw "PDF4TCL" "unknown option \"$option\""
                }
            }
        }
        # Unique id if none was given
        if {$idStr eq ""} {
            set idStr ${ftype}form[my NextOid]
        }

        # Check init value
        if {$ftype eq "checkbutton"} {
            if {![string is boolean -strict $initValue]} {
                throw "PDF4TCL" "initial value for checkbutton must be boolean"
            }
            if {$offObj ne ""} {
                if {![info exists images($offObj)]} {
                    throw "PDF4TCL" "bad id for -off"
                }
                # Must have been created by xobject, image is no good
                if {![string match xobject* $offObj]} {
                    throw "PDF4TCL" "bad id for -off"
                }
            }
            if {$onObj ne ""} {
                if {![info exists images($onObj)]} {
                    throw "PDF4TCL" "bad id for -on"
                }
                # Must have been created by xobject, image is no good
                if {![string match xobject* $onObj]} {
                    throw "PDF4TCL" "bad id for -on"
                }
            }
        }

        # recompute coordinates to current system
        my Trans  $x $y x y
        my TransR $width $height width height
        set x2 [expr {$x+$width}]
        # Make sure we have a positive height, regardless of coordinate system.
        if {$height < 0} {
            set y2 $y
            set y [expr {$y2+$height}]
            set height [expr {-$height}]
        } else {
            set y2 [expr {$y+$height}]
        }

        if {$ftype eq "checkbutton"} {
            # Note, the xobject will be scaled to fit in the form's Rect and
            # thus do not need to be the same size.
            my SetupZaDbFont

            # Appearance streams for on and off state of check button.
            set obj "<< /BBox \[ 0 0 [Nf $width] [Nf $height]\] \n"
            append obj "/Resources 3 0 R\n"
            append obj "/Subtype /Form\n/Type /XObject\n"
            if {$onObj ne ""} {
                set onid [lindex $images($onObj) 2]
            } else {
                # Use char 4 from Zapf, which is a checkmark (unicode 0x2714)
                set fs [expr {$height * 0.9}]
                set charW [expr {0.846 * $fs}] ;# Char width 846 for checkmark
                set baseL [expr {0.143 * $fs}] ;# Baseline 143 for Zapf
                set cX [expr {($width-$charW)/2.0}]
                set cY [expr {$height*0.05 + $baseL}]
                set stream "/Tx BMC BT 0 Tc 0 Tw 100 Tz 0 g 0 Tr /ZaDb [Nf $fs] Tf "
                append stream "1 0 0 1 [Nf $cX] [Nf $cY] Tm "
                append stream "\[(4)\]TJ ET EMC"
                set body [MakeStream $obj $stream $pdf(compress)]
                set onid [my AddObject $body]
            }
            if {$offObj ne ""} {
                set offid [lindex $images($offObj) 2]
            } else {
                # Empty, for off
                if {![info exists pdf(checkboxoffobj)]} {
                    set stream ""
                    set body [MakeStream $obj $stream $pdf(compress)]
                    set pdf(checkboxoffobj) [my AddObject $body]
                }
                set offid $pdf(checkboxoffobj)
            }
        } else {
            if {$initValue ne ""} {
                # Appearance stream for init value of text
                set obj "<< /BBox \[ 0 0 [Nf $width] [Nf $height]\] \n"
                append obj "/Resources 3 0 R\n"
                append obj "/Subtype /Form\n/Type /XObject\n"
                set stream "/Tx BMC BT "
                append stream "/$pdf(current_font) [Nf $pdf(font_size)] Tf 0 g "
                # TODO: correct placement?
                append stream "2 1.1 Td "
                append stream "([CleanText $initValue $pdf(current_font)]) Tj "
                append stream "ET EMC"
                set body [MakeStream $obj $stream $pdf(compress)]
                set onid [my AddObject $body]
            }
        }

        # Create annotation
        set andict "<<\n"
        append andict "  /Subtype /Widget\n"
        # Page reference
        append andict "  /P $pdf(pageobjid) 0 R\n"
        # Placement
        append andict "  /Rect \[[Nf $x] [Nf $y] [Nf $x2] [Nf $y2]\]\n"
        if {$ftype eq "text"} {
            # Form type text
            append andict "  /FT /Tx\n"
            # Unique Identity
            append andict "  /T ($idStr)\n"
            # Multi-line text form
            if {$multiline} {
                # Set flag bit 13 to indicate multi line
                append andict "  /Ff 4096\n"
            }
            # Appearance
            append andict "  /DA (/$pdf(current_font) [Nf $pdf(font_size)] Tf 0 g)\n"
            # Left justified flag
            append andict "  /Q 0\n"
            # Value
            if {$initValue ne ""} {
                append andict "  /V ([CleanText $initValue $pdf(current_font)])\n"
                # Appearance
                append andict "  /AP << /N $onid 0 R >>\n"
            }
        } else {
            # Form type checkbutton (Ff flags are zero for checkbutton)
            append andict "  /FT /Btn\n"
            # Unique Identity
            append andict "  /T ($idStr)\n"
            # State
            if {$initValue} {
                append andict "  /AS /Yes\n"
                append andict "  /V /Yes\n"
            } else {
                append andict "  /AS /Off\n"
                append andict "  /V /Off\n"
            }
            # Appearance
            append andict "  /AP << "
            append andict "   /N << /Yes $onid 0 R /Off $offid 0 R >>\n"
            append andict "   /D << /Yes $onid 0 R /Off $offid 0 R >>\n"
            append andict "  >>\n"
            # Highlight mode = Push
            append andict "  /H /P\n"
            # ??
            #append andict "  /MK << /CA (4) >>\n"
        }
        # Flag for print
        append andict "  /F 4\n"
        append andict ">>\n"
        set anid [my AddObject $andict]

        # Insert annotation into current page
        lappend pdf(annotations) "$anid 0 R"
        # Insert form into document
        lappend pdf(forms) "$anid 0 R"
    }

    #######################################################################
    # Canvas Handling
    #######################################################################

    method canvas {path args} {
        my variable canvasFontMapping
        my EndTextObj

        set sticky "nw"
        my Trans 0 0 x y
        set width ""
        set height ""
        set bbox [$path bbox all]
        set bg 0
        set textscale ""
        # A dict mapping from Tk font name to PDF font family name can be given
        set canvasFontMapping {}
        foreach {arg value} $args {
            switch -- $arg {
                "-width"  {set width  [pdf4tcl::getPoints $value $pdf(unit)]}
                "-height" {set height [pdf4tcl::getPoints $value $pdf(unit)]}
                "-sticky" {set sticky $value}
                "-textscale" {set textscale $value}
                "-y"      {my Trans 0 $value _ y}
                "-x"      {my Trans $value 0 x _}
                "-bbox"   {set bbox $value}
                "-bg"     {set bg $value}
                "-fontmap" {set canvasFontMapping $value}
                default {
                    throw "PDF4TCL" "unknown option \"$arg\""
                }
            }
        }
        if {$bbox eq ""} {
            # Nothing to display
            return
        }
        if {$width eq ""} {
            set width [expr {$pdf(width) - \
                    $pdf(marginright) - $x}]
        }
        if {$height eq ""} {
            if {$pdf(orient)} {
                set height [expr {$y - $pdf(marginbottom)}]
            } else {
                set height [expr {$pdf(height) - $pdf(margintop) - $y}]
            }
        }
        if {[llength $bbox] != 4} {
            throw "PDF4TCL" "-bbox must be a four element list"
        }
        foreach {bbx1 bby1 bbx2 bby2} $bbox break
        set bbw [expr {$bbx2 - $bbx1}]
        set bbh [expr {$bby2 - $bby1}]

        set stickyw [string match "*w*" $sticky]
        set stickye [string match "*e*" $sticky]
        set stickyn [string match "*n*" $sticky]
        set stickys [string match "*s*" $sticky]
        set fillx [expr {$stickyw && $stickye}]
        set filly [expr {$stickyn && $stickys}]

        # Now calculate offset and scale between canvas coords
        # and pdf coords.

        set xscale  [expr {$width / $bbw}]
        set yscale  [expr {$height / $bbh}]

        if {$xscale > $yscale && !$fillx} {
            set xscale $yscale
        }
        if {$yscale > $xscale && !$filly} {
            set yscale $xscale
        }

        set xoffset [expr {$x - $bbx1 * $xscale}]
        if {!$fillx && !$stickyw} {
            # Move right
            set xoffset [expr {$xoffset + ($width - $bbw * $xscale)}]
        }

        if {$pdf(orient)} {
            set yoffset $y
        } else {
            set yoffset [expr {$y + $height}]
        }
        set yoffset [expr {$yoffset + $bby1 * $yscale}]
        if {!$filly && !$stickyn} {
            # Move down
            set yoffset [expr {$yoffset - ($height - $bbh * $yscale)}]
        }

        # Resulting size, used for return value below
        set rX [expr {$xoffset + $bbx1 * $xscale}]
        set rY [expr {$yoffset - $bby1 * $yscale}]
        set rHeight [* $bbh $yscale]
        set rWidth  [* $bbw $xscale]

        # Canvas coordinate system starts in upper corner
        # Thus we need to flip the y axis
        set yscale [expr {-$yscale}]

        # Set up clean graphics modes

        my Pdfoutcmd "q"
        my Pdfoutcmd 1.0 "w"
        my Pdfout "\[\] 0 d\n"
        if {$pdf(cmyk)} {
            my Pdfoutcmd 0 0 0 1 "k"
            my Pdfoutcmd 0 0 0 1 "K"
        } else {
            my Pdfoutcmd 0 0 0 "rg"
            my Pdfoutcmd 0 0 0 "RG"
        }
        my Pdfoutcmd 0 "J" ;# Butt cap style
        my Pdfoutcmd 0 "j" ;# Miter join style
        # Miter limit; Tk switches from miter to bevel at 11 degrees
        my Pdfoutcmd [expr {1.0/sin(11.0/180.0*3.14159265/2.0)}] "M"
        # Store scale. Used to get the correct size of stipple patterns.
        set pdf(canvasscale) [list [Nf $xscale] [Nf [expr {-$yscale}]] \
                [Nf $xoffset] [Nf $yoffset]]

        # Use better resolution for the scale since that can be small numbers
        my Pdfoutn [Nf $xscale 6] 0 0 [Nf $yscale 6] \
                [Nf $xoffset] [Nf $yoffset] "cm"

        # Clip region
        my Pdfoutcmd $bbx1 $bby1 "m"
        my Pdfoutcmd $bbx1 $bby2 "l"
        my Pdfoutcmd $bbx2 $bby2 "l"
        my Pdfoutcmd $bbx2 $bby1 "l"
        #my Pdfoutcmd $bbx1 $bby1 $bbw $bbh "re"
        my Pdfoutcmd "W"
        if {$bg} {
            # Draw the region in background color if requested
            my SetFillColor [my GetColor [$path cget -background]]
            my Pdfoutcmd "f"
            if {$pdf(cmyk)} {
                my Pdfoutcmd 0 0 0 1 "k"
            } else {
                my Pdfoutcmd 0 0 0 "rg"
            }
        } else {
            my Pdfoutcmd "n"
        }

        #set enclosed [$path find enclosed $bbx1 $bby1 $bbx2 $bby2]
        # ::canvas=Canvas, ::tkp::canvas=PathCanvas, ::tko::path=TkoPath
        switch [winfo class $path] {
            Canvas {set cls 1}
            PathCanvas {set cls 2}
            default {set cls 3}
        }
        set overlapping [$path find overlapping $bbx1 $bby1 $bbx2 $bby2]
        foreach id $overlapping {
            CanvasGetOpts $path $id opts
            if {[info exists opts(-state)] && $opts(-state) eq "hidden"} {
                continue
            }
            # Save graphics state for each item
            my Pdfoutcmd "q"

            # Special handling for tkpath items
            if {$cls == 3} {
                my CanvasDoTkoPathItem $path $id opts
            } elseif {[$path type $id] in {pimage ptext pline polyline ppolygon prect circle ellipse path group}} {
                my CanvasDoTkpathItem $path $id
            } else {
                # Standard Tk Canvas
                set opts(-textscale) $textscale
                my CanvasDoItem $path $id [$path coords $id] opts
            }

            # Restore graphics state after the item
            my Pdfoutcmd "Q"
        }
        # Restore graphics state after the canvas
        my Pdfoutcmd "Q"
        # Return bbox

        # This is basically a reverse Trans
        set tx [expr {$rX - $pdf(marginleft)}]
        if {$pdf(orient)} {
            set ty [expr {$pdf(height) - $rY}]
            set ty [expr {$ty - $pdf(margintop)}]
            set rHeight [- $rHeight]
        } else {
            set ty [expr {$rY - $pdf(marginbottom)}]
        }
        # Translate to current unit
        set tx [expr {$tx / $pdf(unit)}]
        set ty [expr {$ty / $pdf(unit)}]
        set rWidth [expr {$rWidth / $pdf(unit)}]
        set rHeight [expr {$rHeight / $pdf(unit)}]

        # Bbox should be in order
        if {$rWidth >= 0} {
            set tx2 [+ $tx $rWidth]
        } else {
            set tx2 $tx
            set tx [+ $tx $rWidth]
        }
        if {$rHeight < 0} {
            set ty2 [- $ty $rHeight]
        } else {
            set ty2 $ty
            set ty [- $ty $rHeight]
        }
        return [list $tx $ty $tx2 $ty2]
    }

    # Handle one TkoPath item
    method CanvasDoTkoPathItem {path id optsName} {
        # Get the fully qualified name for callback to this object
        set myCb [namespace which my]
        switch [$path type $id] {
            image {
                my Pdfout [$path itempdf $id [list $myCb addTkpimgObj]]
            }
            text {
                my setTkpfont \
                        [$path itemcget $id -fontsize] \
                        [$path itemcget $id -fontfamily] \
                        [$path itemcget $id -fontweight] \
                        [$path itemcget $id -fontslant]
                my Pdfout \
                        [$path itempdf $id \
                                 [list $myCb addTkpextgs] \
                                 [list $myCb getTkpptext $pdf(current_font)] \
                                 $pdf(current_font)]
            }
            line - polyline - polygon - rect - circle - ellipse -
            path - group {
                my Pdfout [$path itempdf $id \
                                      [list $myCb addTkpextgs] \
                                      [list $myCb addTkpobj] \
                                      [list $myCb addTkpgrad]]
            }
            window {
                upvar 1 $optsName opts
                catch {package require Img}
                if {[catch {
                    image create photo -format window -data $opts(-window)
                } image]} {
                    set image ""
                }
                if {$image eq ""} {
                    # Get a size even if it is unmapped
                    foreach width [list [winfo width $opts(-window)] \
                                        $opts(-width) \
                                        [winfo reqwidth $opts(-window)]] {
                        if {$width > 1} break
                    }
                    foreach height [list [winfo height $opts(-window)] \
                                         $opts(-height) \
                                         [winfo reqheight $opts(-window)]] {
                        if {$height > 1} break
                    }
                } else {
                    set id [my addRawImage [$image data]]

                    foreach {width height oid} $images($id) break
                }
                foreach {x1 y1} [$path coords $id] break
                # Since the canvas coordinate system is upside
                # down we must flip back to get the image right.
                # We do this by adjusting y and y scale.
                switch $opts(-anchor) {
                    nw { set dx 0.0 ; set dy 1.0 }
                    n  { set dx 0.5 ; set dy 1.0 }
                    ne { set dx 1.0 ; set dy 1.0 }
                    e  { set dx 1.0 ; set dy 0.5 }
                    se { set dx 1.0 ; set dy 0.0 }
                    s  { set dx 0.5 ; set dy 0.0 }
                    sw { set dx 0.0 ; set dy 0.0 }
                    w  { set dx 0.0 ; set dy 0.5 }
                    default { set dx 0.5 ; set dy 0.5 }
                }
                set x [expr {$x1 - $width  * $dx}]
                set y [expr {$y1 + $height * $dy}]

                if {$image eq ""} {
                    # Draw a black box
                    my Pdfoutcmd $x [expr {$y - $height}] \
                            $width $height "re"
                    my Pdfoutcmd "f"
                } else {
                    my Pdfoutcmd $width 0 0 [expr {-$height}] $x $y "cm"
                    my Pdfout "/$id Do\n"
                }
            }
        }
    }

    # Handle one tkpath item
    method CanvasDoTkpathItem {path id} {
        # Get the fully qualified name for callback to this object
        set myCb [namespace which my]
        switch [$path type $id] {
            pimage {
                my Pdfout [$path itempdf $id [list $myCb addTkpimgObj]]
            }
            ptext {
                my setTkpfont \
                        [$path itemcget $id -fontsize] \
                        [$path itemcget $id -fontfamily] \
                        [$path itemcget $id -fontweight] \
                        [$path itemcget $id -fontslant]
                my Pdfout \
                        [$path itempdf $id \
                                 [list $myCb addTkpextgs] \
                                 [list $myCb getTkpptext $pdf(current_font)] \
                                 $pdf(current_font)]
            }
            pline - polyline - ppolygon - prect - circle - ellipse -
            path - group {
                my Pdfout [$path itempdf $id \
                                      [list $myCb addTkpextgs] \
                                      [list $myCb addTkpobj] \
                                      [list $myCb addTkpgrad]]
            }
        }
    }

    # Handle one canvas item
    method CanvasDoItem {path id coords optsName} {
        upvar 1 $optsName opts
        my variable canvasFontMapping

        # Not implemented: line/polygon -splinesteps
        # Not implemented: stipple offset
        # Limited: Stipple scale and offset does not match screen display
        # Limited: window item needs Img, and needs to be mapped

        switch [$path type $id] {
            rectangle {
                foreach {x1 y1 x2 y2} $coords break
                set w [expr {$x2 - $x1}]
                set h [expr {$y2 - $y1}]

                my CanvasStdOpts opts
                set stroke [expr {$opts(-outline) ne ""}]
                set filled [expr {$opts(-fill) ne ""}]

                if {$stroke || $filled} {
                    my DrawRect $x1 $y1 $w $h $stroke $filled
                }
            }
            line {
                # For a line, -fill means the stroke colour
                set opts(-outline)        $opts(-fill)
                set opts(-outlinestipple) $opts(-stipple)
                set opts(-outlineoffset)  $opts(-offset)

                my CanvasStdOpts opts

                set arrows {}
                if {$opts(-arrow) eq "first" || $opts(-arrow) eq "both"} {
                    lappend arrows [lindex $coords 2] [lindex $coords 3] \
                            [lindex $coords 0] [lindex $coords 1] 0
                }
                if {$opts(-arrow) eq "last" || $opts(-arrow) eq "both"} {
                    lappend arrows [lindex $coords end-3] [lindex $coords end-2] \
                            [lindex $coords end-1] [lindex $coords end] \
                            [expr {[llength $coords] - 2}]
                }
                if {[llength $arrows] > 0} {
                    foreach {shapeA shapeB shapeC} $opts(-arrowshape) break
                    # Adjust like Tk does
                    set shapeA [expr {$shapeA + 0.001}]
                    set shapeB [expr {$shapeB + 0.001}]
                    set shapeC [expr {$shapeC + $opts(-width) / 2.0 + 0.001}]

                    set fracHeight [expr {($opts(-width)/2.0)/$shapeC}]
                    set backup  [expr {$fracHeight * $shapeB + \
                            $shapeA * (1.0 - $fracHeight)/2.0}]
                    foreach {x1 y1 x2 y2 ix} $arrows {
                        set poly [list 0 0 0 0 0 0 0 0 0 0 0 0]
                        lset poly 0  $x2
                        lset poly 10 $x2
                        lset poly 1  $y2
                        lset poly 11 $y2
                        set dx [expr {$x2 - $x1}]
                        set dy [expr {$y2 - $y1}]
                        set length [expr {hypot($dx, $dy)}]
                        if {$length == 0} {
                            set sinTheta 0.0
                            set cosTheta 0.0
                        } else {
                            set sinTheta [expr {$dy / $length}]
                            set cosTheta [expr {$dx / $length}]
                        }
                        set  vertX  [expr {[lindex $poly 0] - $shapeA * $cosTheta}]
                        set  vertY  [expr {[lindex $poly 1] - $shapeA * $sinTheta}]
                        set  temp   [expr {                   $shapeC * $sinTheta}]
                        lset poly 2 [expr {[lindex $poly 0] - $shapeB * $cosTheta + $temp}]
                        lset poly 8 [expr {[lindex $poly 2] - 2 * $temp}]
                        set  temp   [expr {                   $shapeC * $cosTheta}]
                        lset poly 3 [expr {[lindex $poly 1] - $shapeB * $sinTheta - $temp}]
                        lset poly 9 [expr {[lindex $poly 3] + 2 * $temp}]
                        lset poly 4 [expr {[lindex $poly 2] * $fracHeight + $vertX * (1.0-$fracHeight)}]
                        lset poly 5 [expr {[lindex $poly 3] * $fracHeight + $vertY * (1.0-$fracHeight)}]
                        lset poly 6 [expr {[lindex $poly 8] * $fracHeight + $vertX * (1.0-$fracHeight)}]
                        lset poly 7 [expr {[lindex $poly 9] * $fracHeight + $vertY * (1.0-$fracHeight)}]

                        # Adjust line end to draw it under the arrow
                        lset coords $ix [expr {[lindex $coords $ix] - $backup * $cosTheta}]
                        incr ix
                        lset coords $ix [expr {[lindex $coords $ix] - $backup * $sinTheta}]

                        # Draw polygon
                        set cmd "m"
                        foreach {x y} $poly {
                            my Pdfoutcmd $x $y $cmd
                            set cmd "l"
                        }
                        my Pdfoutcmd "f"
                    }
                }

                # Draw lines
                if {([string is true -strict $opts(-smooth)] || \
                        $opts(-smooth) eq "bezier") && [llength $coords] > 4} {
                    my CanvasBezier $coords
                } elseif {$opts(-smooth) eq "raw"} {
                    my CanvasRawCurve $coords
                } else {
                    set cmd "m"
                    foreach {x y} $coords {
                        my Pdfoutcmd $x $y $cmd
                        set cmd "l"
                    }
                }
                my Pdfoutcmd "S"
            }
            oval {
                foreach {x1 y1 x2 y2} $coords break
                set x  [expr {($x2 + $x1) / 2.0}]
                set y  [expr {($y2 + $y1) / 2.0}]
                set rx [expr {($x2 - $x1) / 2.0}]
                set ry [expr {($y2 - $y1) / 2.0}]

                my CanvasStdOpts opts
                set stroke [expr {$opts(-outline) ne ""}]
                set filled [expr {$opts(-fill) ne ""}]

                my DrawOval $x $y $rx $ry $stroke $filled
            }
            arc {
                foreach {x1 y1 x2 y2} $coords break
                set x  [expr {($x2 + $x1) / 2.0}]
                set y  [expr {($y2 + $y1) / 2.0}]
                set rx [expr {($x2 - $x1) / 2.0}]
                # Flip y-axis
                set ry [expr {-($y2 - $y1) / 2.0}]

                # Canvas draws arc with bevel style
                if {![info exists opts(-joinstyle)]} {
                    set opts(-joinstyle) bevel
                }
                my CanvasStdOpts opts
                set stroke [expr {$opts(-outline) ne ""}]
                set filled [expr {$opts(-fill) ne ""}]

                set phi $opts(-start)
                set extend $opts(-extent)

                my DrawArc $x $y $rx $ry $phi $extend $stroke $filled \
                        $opts(-style)
            }
            polygon {
                my CanvasStdOpts opts
                set stroke [expr {$opts(-outline) ne ""}]
                set filled [expr {$opts(-fill) ne ""}]

                if {[string is true -strict $opts(-smooth)] || \
                            $opts(-smooth) eq "bezier"} {
                    # Close the coordinates if necessary
                    if {[lindex $coords 0] != [lindex $coords end-1] || \
                                [lindex $coords 1] != [lindex $coords end]} {
                        lappend coords [lindex $coords 0] [lindex $coords 1]
                    }
                    my CanvasBezier $coords
                } elseif {$opts(-smooth) eq "raw"} {
                    my CanvasRawCurve $coords
                } else {
                    set cmd "m"
                    foreach {x y} $coords {
                        my Pdfoutcmd $x $y $cmd
                        set cmd "l"
                    }
                }
                if {$filled && $stroke} {
                    my Pdfoutcmd "b"
                } elseif {$filled && !$stroke} {
                    my Pdfoutcmd "f"
                } else {
                    my Pdfoutcmd "s"
                }
            }
            text {
                # Width is not a stroke option here
                array unset opts -width
                my CanvasStdOpts opts

                set lines [CanvasGetWrappedText $path $id underline]
                foreach {x y} $coords break
                foreach {x1 y1 x2 y2} [$path bbox $id] break

                my PushFont
                my CanvasSetFont $opts(-font) $canvasFontMapping
                set fontsize $pdf(font_size)
                # Next, figure out if the text fits within the bbox
                # with the current font, or it needs to be scaled.
                # compute width on canvas using font measure instead of bbox
                # to get it right for angled text
                set widest 0.0
                set cwidest 0.0
                foreach line $lines {
                    set width [my getStringWidth $line 1]
                    set cwidth [font measure $opts(-font) $line]
                    if {$width > $widest} {
                        set widest $width
                    }
                    if {$cwidth > $cwidest} {
                        set cwidest $cwidth
                    }
                }
                if {$cwidest == 0} {
                    # The text does not produce any size, which probably
                    # mean it is empty.
                    return
                }
                set xscale [expr {$widest / $cwidest}]
                set yscale [expr {([llength $lines] * $fontsize) / \
                        ($y2 - $y1)}]
                # Scale down if the font is too big
                if {$opts(-textscale) ne ""} {
                    set xscale $opts(-textscale)
                }
                if {$xscale > 1.001} {
                    my setFont [expr {$fontsize / $xscale}] "" 1
                    set fontsize $pdf(font_size)
                    set widest [expr {$widest / $xscale}]
                }

                # Now we have selected an appropriate font and size.

                # Move x/y to point nw/n/ne depending on anchor
                # and justification
                set width $widest

                set xc $x ;# center of rotation coordinates
                set yc $y ;# they are not adjusted

                # First line is assumed to be height of bounding box.
                # Add font size for each new line.
                # Thus it is assumed that:
                #  line spacing = font size
                #  canvas coordinate = corner of bounding box
                set bboxHeight [my getFontMetric height 1]
                set height [expr {$fontsize * [llength $lines] + \
                        $bboxHeight - $fontsize}]

                if {[string match "s*" $opts(-anchor)]} {
                    set y [expr {$y - $height}]
                } elseif {![string match "n*" $opts(-anchor)]} {
                    set y [expr {$y - ($height / 2.0)}]
                }
                if {[string match "*w" $opts(-anchor)]} {
                    set xanchor 0
                } elseif {[string match "*e" $opts(-anchor)]} {
                    set xanchor 2
                } else {
                    set xanchor 1
                }
                set xjustify [lsearch {left center right} $opts(-justify)]
                set x [expr {$x + ($xjustify - $xanchor) * $width / 2.0}]

                # Displace y to base line of font
                # Since canvas coordinates are assumed to point to corner of
                # bounding box, we use bboxt to displace.
                set bboxt [my getFontMetric bboxt 1]
                # The -1 is a fudge factor that has given better results in
                # practice. I do not understand why it is needed.
                set y [expr {$y + $bboxt - 1.0}]
                set lineNo 0
                set ulcoords {}
                foreach line $lines {
                    set width [my getStringWidth $line 1]
                    set x0 [expr {$x - $xjustify * $width / 2.0}]

                    # Since we have put the coordinate system upside
                    # down to follow canvas coordinates we need a
                    # negative y scale here to get the text correct.

                    # if -angle is present, turn
                    if {$opts(-angle) != 0} {
                        #puts "Angle is $opts(-angle)"
                        set sx [expr {sin(-$opts(-angle)*3.14159265358979/180)}]
                        set cx [expr {cos(-$opts(-angle)*3.14159265358979/180)}]
                        set msx [expr {-$sx}]
                        set mcx [expr {-$cx}]

                        set mxc [expr {-$xc}]
                        set myc [expr {-$yc}]
                        # Compute test rotation matrix.
                        # First subtract center of rotation, rotate, shift back

                        set rotationmatrix [list 1 0 0 1 $mxc $myc]
                        set rotationmatrix [MulMxM $rotationmatrix \
                                                    [list $cx $sx $msx $cx 0 0]]
                        set rotationmatrix [MulMxM $rotationmatrix \
                                                    [list 1 0 0 1 $xc $yc]]

                        # compute final coordinates.
                        foreach {xs ys} [MulVxM [list $x0 $y] $rotationmatrix] break
                        my Pdfoutcmd $cx $sx $sx $mcx $xs $ys "Tm"
                    } else {
                        my Pdfoutcmd 1 0 0 -1 $x0 $y "Tm"
                    }

                    my Pdfout "([CleanText $line $pdf(current_font)]) Tj\n"

                    if {$underline != -1} {
                        if {[lindex $underline 0] eq $lineNo} {
                            set index [lindex $underline 1]
                            set ulx [my getStringWidth [string range $line \
                                               0 [expr {$index - 1}]] 1]
                            set ulw [my getStringWidth [string index $line $index] 1]
                            lappend ulcoords [expr {$x0 + $ulx}] \
                                    [expr {$y + 1.0}] $ulw
                        }
                    }
                    incr lineNo
                    set y [expr {$y + $fontsize}]
                }
                my EndTextObj
                my PopFont

                # Draw any underline
                if {[info exists rotationmatrix]} {
                    # transform underlines by same matrix as text anchor point
                    foreach {x y w} $ulcoords {
                        my Pdfoutcmd {*}[MulVxM [list $x $y] $rotationmatrix] "m"
                        my Pdfoutcmd {*}[MulVxM [list [expr {$x + $w}] $y] $rotationmatrix] "l"
                        my Pdfoutcmd "S"
                    }
                } else {
                    foreach {x y w} $ulcoords {
                        my Pdfoutcmd $x $y "m"
                        my Pdfoutcmd [expr {$x + $w}] $y "l"
                        my Pdfoutcmd "S"
                    }
                }
            }
            bitmap {
                set bitmap $opts(-bitmap)
                if {$bitmap eq ""} {
                    return
                }
                set id bitmap_canvas_[file rootname [file tail $bitmap]]
                if {![info exists bitmaps($id)]} {
                    my AddBitmap $bitmap -id $id
                }
                foreach {width height imoid stream} $bitmaps($id) break
                foreach {x1 y1} $coords break
                # Since the canvas coordinate system is upside
                # down we must flip back to get the image right.
                # We do this by adjusting y and y scale.
                switch $opts(-anchor) {
                    nw { set dx 0.0 ; set dy 1.0 }
                    n  { set dx 0.5 ; set dy 1.0 }
                    ne { set dx 1.0 ; set dy 1.0 }
                    e  { set dx 1.0 ; set dy 0.5 }
                    se { set dx 1.0 ; set dy 0.0 }
                    s  { set dx 0.5 ; set dy 0.0 }
                    sw { set dx 0.0 ; set dy 0.0 }
                    w  { set dx 0.0 ; set dy 0.5 }
                    default { set dx 0.5 ; set dy 0.5 }
                }
                set x [expr {$x1 - $width  * $dx}]
                set y [expr {$y1 + $height * $dy}]

                set bg $opts(-background)
                if {$bg eq ""} {
                    # Dummy background to see if masking fails
                    set bg $opts(-foreground)
                }
                # Build a two-color palette
                set colors [concat [my GetColor $bg] \
                                    [my GetColor $opts(-foreground)]]
                set PaletteHex ""
                foreach color $colors {
                    append PaletteHex [format %02x \
                            [expr {int(round($color * 255.0))}]]
                }
                if {$pdf(cmyk)} {
                    set paletteX "\[ /Indexed /DeviceCMYK "
                } else {
                    set paletteX "\[ /Indexed /DeviceRGB "
                }
                append paletteX "1 < "
                append paletteX $PaletteHex
                append paletteX " > \]"

                # An image object for this bitmap+color
                set    xobject "<<\n/Type /XObject\n"
                append xobject "/Subtype /Image\n"
                append xobject "/Width $width\n/Height $height\n"
                append xobject "/ColorSpace $paletteX\n"
                append xobject "/BitsPerComponent 1\n"
                append xobject "/Length [string length $stream]\n"
                if {$opts(-background) eq ""} {
                    append xobject "/Mask $imoid 0 R\n"
                }
                append xobject ">>\n"
                append xobject "stream\n"
                append xobject $stream
                append xobject "\nendstream"

                set newoid [my AddObject $xobject]
                set newid image$newoid
                set images($newid) [list $width $height $newoid 0]

                # Put the image on the page
                my Pdfoutcmd $width 0 0 [expr {-$height}] $x $y "cm"
                my Pdfout "/$newid Do\n"
            }
            image {
                set image $opts(-image)
                if {$image eq ""} {
                    return
                }
                set id image_canvas_$image
                if {![info exists images($id)]} {
                    my addRawImage [$image data] -id $id
                }
                foreach {width height oid} $images($id) break
                foreach {x1 y1} $coords break
                # Since the canvas coordinate system is upside
                # down we must flip back to get the image right.
                # We do this by adjusting y and y scale.
                switch $opts(-anchor) {
                    nw { set dx 0.0 ; set dy 1.0 }
                    n  { set dx 0.5 ; set dy 1.0 }
                    ne { set dx 1.0 ; set dy 1.0 }
                    e  { set dx 1.0 ; set dy 0.5 }
                    se { set dx 1.0 ; set dy 0.0 }
                    s  { set dx 0.5 ; set dy 0.0 }
                    sw { set dx 0.0 ; set dy 0.0 }
                    w  { set dx 0.0 ; set dy 0.5 }
                    default { set dx 0.5 ; set dy 0.5 }
                }
                set x [expr {$x1 - $width  * $dx}]
                set y [expr {$y1 + $height * $dy}]

                my Pdfoutcmd $width 0 0 [expr {-$height}] $x $y "cm"
                my Pdfout "/$id Do\n"
            }
            window {
                catch {package require Img}
                if {[catch {
                    image create photo -format window -data $opts(-window)
                } image]} {
                    set image ""
                }
                if {$image eq ""} {
                    # Get a size even if it is unmapped
                    foreach width [list [winfo width $opts(-window)] \
                                        $opts(-width) \
                                        [winfo reqwidth $opts(-window)]] {
                        if {$width > 1} break
                    }
                    foreach height [list [winfo height $opts(-window)] \
                                         $opts(-height) \
                                         [winfo reqheight $opts(-window)]] {
                        if {$height > 1} break
                    }
                } else {
                    set id [my addRawImage [$image data]]

                    foreach {width height oid} $images($id) break
                }
                foreach {x1 y1} $coords break
                # Since the canvas coordinate system is upside
                # down we must flip back to get the image right.
                # We do this by adjusting y and y scale.
                switch $opts(-anchor) {
                    nw { set dx 0.0 ; set dy 1.0 }
                    n  { set dx 0.5 ; set dy 1.0 }
                    ne { set dx 1.0 ; set dy 1.0 }
                    e  { set dx 1.0 ; set dy 0.5 }
                    se { set dx 1.0 ; set dy 0.0 }
                    s  { set dx 0.5 ; set dy 0.0 }
                    sw { set dx 0.0 ; set dy 0.0 }
                    w  { set dx 0.0 ; set dy 0.5 }
                    default { set dx 0.5 ; set dy 0.5 }
                }
                set x [expr {$x1 - $width  * $dx}]
                set y [expr {$y1 + $height * $dy}]

                if {$image eq ""} {
                    # Draw a black box
                    my Pdfoutcmd $x [expr {$y - $height}] \
                            $width $height "re"
                    my Pdfoutcmd "f"
                } else {
                    my Pdfoutcmd $width 0 0 [expr {-$height}] $x $y "cm"
                    my Pdfout "/$id Do\n"
                }
            }
        } ;# End of switch over item type
        # Note: Any item above may return early if needed, so
        # there should not be any code here.
    }

    method CanvasBezier {coords} {
        # Is it a closed curve?
        if {[lindex $coords 0] == [lindex $coords end-1] && \
                    [lindex $coords 1] == [lindex $coords end]} {
            set closed 1

            set x0 [expr {0.5  * [lindex $coords end-3] + 0.5  *[lindex $coords 0]}]
            set y0 [expr {0.5  * [lindex $coords end-2] + 0.5  *[lindex $coords 1]}]
            set x1 [expr {0.167* [lindex $coords end-3] + 0.833*[lindex $coords 0]}]
            set y1 [expr {0.167* [lindex $coords end-2] + 0.833*[lindex $coords 1]}]
            set x2 [expr {0.833* [lindex $coords 0]     + 0.167*[lindex $coords 2]}]
            set y2 [expr {0.833* [lindex $coords 1]     + 0.167*[lindex $coords 3]}]
            set x3 [expr {0.5  * [lindex $coords 0]     + 0.5  *[lindex $coords 2]}]
            set y3 [expr {0.5  * [lindex $coords 1]     + 0.5  *[lindex $coords 3]}]
            my Pdfoutcmd $x0 $y0 "m"
            my Pdfoutcmd $x1 $y1 $x2 $y2 $x3 $y3 "c"
        } else {
            set closed 0
            set x3 [lindex $coords 0]
            set y3 [lindex $coords 1]
            my Pdfoutcmd $x3 $y3 "m"
        }
        set len [llength $coords]
        for {set i 2} {$i < ($len - 2)} {incr i 2} {
            foreach {px1 py1 px2 py2} [lrange $coords $i [expr {$i + 3}]] break
            set x1 [expr {0.333*$x3 + 0.667*$px1}]
            set y1 [expr {0.333*$y3 + 0.667*$py1}]

            if {!$closed && $i == ($len - 4)} {
                # Last of an open curve
                set x3 $px2
                set y3 $py2
            } else {
                set x3 [expr {0.5 * $px1 + 0.5 * $px2}]
                set y3 [expr {0.5 * $py1 + 0.5 * $py2}]
            }
            set x2 [expr {0.333 * $x3 + 0.667 * $px1}]
            set y2 [expr {0.333 * $y3 + 0.667 * $py1}]
            my Pdfoutcmd $x1 $y1 $x2 $y2 $x3 $y3 "c"
        }
    }

    method CanvasRawCurve {coords} {
        set x3 [lindex $coords 0]
        set y3 [lindex $coords 1]
        my Pdfoutcmd $x3 $y3 "m"

        set len [llength $coords]
        # Is there a complete set of segments in the list?
        set add [expr {($len - 2) % 6}]
        if {$add != 0} {
            eval lappend coords [lrange $coords 0 [expr {$add - 1}]]
        }
        for {set i 0} {$i < ($len - 8)} {incr i 6} {
            foreach {px1 py1 px2 py2 px3 py3 px4 py4} \
                    [lrange $coords $i [expr {$i + 7}]] break
            if {$px1 == $px2 && $py1 == $py2 && $px3 == $px4 && $py3 == $py4} {
                # Straight line
                my Pdfoutcmd $px4 $py4 "l"
            } else {
                my Pdfoutcmd $px2 $py2 $px3 $py3 $px4 $py4 "c"
            }
        }
    }

    method CanvasGetBitmap {bitmap offset} {
        # The pattern is unique for the scale for this canvas
        foreach {xscale yscale xoffset yoffset} $pdf(canvasscale) break
        # Adapt to offset
        if {[regexp {^(\#?)(.*),(.*)$} $offset -> pre ox oy]} {
            set xoffset [expr {$xoffset + $ox * $xscale}]
            set yoffset [expr {$yoffset - $oy * $yscale}]
        } else {
            # Not supported yet
        }

        set scale [list $xscale $yscale $xoffset $yoffset]
        set tail [string map {. x} [join $scale _]]
        set id pattern_canvas_[file rootname [file tail $bitmap]]_$tail
        if {![info exists patterns($id)]} {
            my AddBitmap $bitmap -id $id -pattern $scale
        }
        return $id
    }

    # Utility for translating dash patterns - if needed
    proc ::pdf4tcl::CanvasMakeDashPattern {pattern linewidth} {
        # If numeric, return the same
        if { ! [regexp {[.,-_]} $pattern] } {
            return $pattern
        }
        # A pattern adapts to line width
        set linewidth [expr {int($linewidth + 0.5)}]
        if {$linewidth < 1} {
            set linewidth 1
        }
        set lw2 [expr {2 * $linewidth}]
        set lw4 [expr {4 * $linewidth}]
        set lw6 [expr {6 * $linewidth}]
        set lw8 [expr {8 * $linewidth}]
        # Translate each character
        set newPattern {}
        foreach c [split $pattern ""] {
            switch $c {
                " " {
                    if { [llength $newPattern] > 0 } {
                        set lastNumber [expr {$lw4 + [lindex $newPattern end]}]
                        set newPattern [lreplace $newPattern end end $lastNumber]
                    }
                }
                "." {
                    lappend newPattern $lw2 $lw4
                }
                "," {
                    lappend newPattern $lw4 $lw4
                }
                "-" {
                    lappend newPattern $lw6 $lw4
                }
                "_" {
                    lappend newPattern $lw8 $lw4
                }
            }
        }
        return $newPattern
    }

    # Setup the graphics state from standard options
    method CanvasStdOpts {optsName} {
        upvar 1 $optsName opts

        # Stipple for fill color
        set fillstippleid ""
        if {[info exists opts(-stipple)] && $opts(-stipple) ne ""} {
            set fillstippleid [my CanvasGetBitmap $opts(-stipple) \
                    $opts(-offset)]
        }
        # Stipple for stroke color
        set strokestippleid ""
        if {[info exists opts(-outlinestipple)] && \
                $opts(-outlinestipple) ne ""} {
            set strokestippleid [my CanvasGetBitmap $opts(-outlinestipple) \
                    $opts(-outlineoffset)]
        }
        # Outline controls stroke color
        if {[info exists opts(-outline)] && $opts(-outline) ne ""} {
            my CanvasStrokeColor $opts(-outline) $strokestippleid
        }
        # Fill controls fill color
        if {[info exists opts(-fill)] && $opts(-fill) ne ""} {
            my CanvasFillColor $opts(-fill) $fillstippleid
        }
        # Line width
        if {[info exists opts(-width)]} {
            my Pdfoutcmd $opts(-width) "w"
        }
        # Dash pattern and offset
        if {[info exists opts(-dash)] && $opts(-dash) ne ""} {
            set dashPattern [CanvasMakeDashPattern $opts(-dash) $opts(-width)]
            my Pdfout "\[$dashPattern\] $opts(-dashoffset) d\n"
        }
        # Cap style
        if {[info exists opts(-capstyle)] && $opts(-capstyle) ne "butt"} {
            switch $opts(-capstyle) {
                projecting {
                    my Pdfoutcmd 2 "J"
                }
                round {
                    my Pdfoutcmd 1 "J"
                }
            }
        }
        # Join style
        if {[info exists opts(-joinstyle)] && $opts(-joinstyle) ne "miter"} {
            switch $opts(-joinstyle) {
                bevel {
                    my Pdfoutcmd 2 "j"
                }
                round {
                    my Pdfoutcmd 1 "j"
                }
            }
        }
    }

    # Set the fill color from a Tk color
    method CanvasFillColor {color {bitmapid ""}} {
        set cList [my GetColor $color]
        if {$bitmapid eq ""} {
            my SetFillColor $cList
        } else {
            foreach {red green blue k} $cList break
            my Pdfout "/Cs1 cs\n"
            if {$pdf(cmyk)} {
                my Pdfoutcmd $red $green $blue $k "/$bitmapid scn"
            } else {
                my Pdfoutcmd $red $green $blue "/$bitmapid scn"
            }
        }
    }

    # Set the stroke color from a Tk color
    method CanvasStrokeColor {color {bitmapid ""}} {
        set cList [my GetColor $color]
        if {$bitmapid eq ""} {
            my SetStrokeColor $cList
        } else {
            foreach {red green blue k} $cList break
            my Pdfout "/Cs1 CS\n"
            if {$pdf(cmyk)} {
                my Pdfoutcmd $red $green $blue $k "/$bitmapid SCN"
            } else {
                my Pdfoutcmd $red $green $blue "/$bitmapid SCN"
            }
        }
    }

    # Helper to extract configuration from a canvas item
    proc ::pdf4tcl::CanvasGetOpts {path id arrName} {
        upvar 1 $arrName arr
        array unset arr
        foreach item [$path itemconfigure $id] {
            set arr([lindex $item 0]) [lindex $item 4]
        }
        if {![info exists arr(-state)]} {
            return
        }
        if {$arr(-state) eq "" || $arr(-state) eq "normal"} {
            return
        }
        # Translate options depending on state
        set state $arr(-state)
        foreach item [array names arr] {
            if {[regexp -- "^-${state}(.*)\$" $item -> orig]} {
                if {[info exists arr(-$orig)]} {
                    set arr(-$orig) $arr($item)
                }
            }
        }
    }

    # Get the text from a text item, as a list of lines
    # This takes and line wrapping into account
    proc ::pdf4tcl::CanvasGetWrappedText {w item ulName} {
        upvar 1 $ulName underline
        set text  [$w itemcget $item -text]
        set width [$w itemcget $item -width]
        set underline [$w itemcget $item -underline]

        # Simple non-wrapping case. Only divide on newlines.
        if {$width == 0} {
            set lines [split $text \n]
            if {$underline != -1} {
                set isum 0
                set lineNo 0
                foreach line $lines {
                    set iend [expr {$isum + [string length $line]}]
                    if {$underline < $iend} {
                        set underline [list $lineNo [expr {$underline - $isum}]]
                        break
                    }
                    incr lineNo
                    set isum [expr {$iend + 1}]
                }
            }
            return $lines
        }

        # Run across the text's left side and look for all indexes
        # that start a line.

        foreach {x1 y1 x2 y2} [$w bbox $item] break
        set firsts {}
        for {set y $y1} {$y < $y2} {incr y} {
            lappend firsts [$w index $item @$x1,$y]
        }
        set firsts [lsort -integer -unique $firsts]

        # Extract each displayed line
        set prev 0
        set res {}
        foreach index $firsts {
            if {$prev != $index} {
                set line [string range $text $prev [expr {$index - 1}]]
                if {[string index $line end] eq "\n"} {
                    set line [string trimright $line \n]
                } else {
                    # If the line does not end with \n it is wrapped.
                    # Then spaces should be discarded
                    set line [string trimright $line]
                }
                lappend res $line
            }
            set prev $index
        }
        # The last chunk
        lappend res [string range $text $prev end]
        if {$underline != -1} {
            set lineNo -1
            set prev 0
            foreach index $firsts {
                if {$underline < $index} {
                    set underline [lindex $lineNo [expr {$underline - $prev}]]
                    break
                }
                set prev $index
                incr lineNo
            }
        }
        return $res
    }

    # Given a Tk font, figure out a reasonable font to use and set it
    # as current font.
    # A dict mapping from Tk font name to PDF font family name can be given
    method CanvasSetFont {font {userMapping {}}} {
        array unset fontinfo
        array set fontinfo [font actual $font]
        array set fontinfo [font metrics $font]
        # Any fixed font maps to courier
        if {$fontinfo(-fixed)} {
            set fontinfo(-family) courier
        }
        set bold [expr {$fontinfo(-weight) eq "bold"}]
        set italic [expr {$fontinfo(-slant) eq "italic"}]

        switch -glob [string tolower $fontinfo(-family)] {
            *courier* - *fixed* {
                set family Courier
                if {$bold && $italic} {
                    append family -BoldOblique
                } elseif {$bold} {
                    append family -Bold
                } elseif {$italic} {
                    append family -BoldOblique
                }
            }
            *times* - {*nimbus roman*} {
                if {$bold && $italic} {
                    set family Times-BoldItalic
                } elseif {$bold} {
                    set family Times-Bold
                } elseif {$italic} {
                    set family Times-Italic
                } else {
                    set family Times-Roman
                }
            }
            *helvetica* - *arial* - {*nimbus sans*} - default {
                set family Helvetica
                if {$bold && $italic} {
                    append family -BoldOblique
                } elseif {$bold} {
                    append family -Bold
                } elseif {$italic} {
                    append family -BoldOblique
                }
            }
        }
        set fontsize $fontinfo(-linespace)
        array set userMappingArr $userMapping
        if {[info exists userMappingArr($font)]} {
            set family $userMappingArr($font)
            if {[string is list $family] && [llength $family] > 1} {
                if {[string is integer -strict [lindex $family 1]]} {
                    set fontsize [lindex $family 1]
                    set family [lindex $family 0]
                }
            }
        }
        my BeginTextObj
        my setFont $fontsize $family 1
    }

    #######################################################################
    # Helper functions
    #######################################################################

    proc ::pdf4tcl::Swap {aName bName} {
        upvar 1 $aName a $bName b
        set tmp $a
        set a   $b
        set b   $tmp
    }

    # helper function: mask parentheses and backslash
    proc ::pdf4tcl::CleanText {in fn} {
        variable ::pdf4tcl::FontsAttrs
        if {$FontsAttrs($fn,specialencoding)} {
            # Convert using special encoding of font subset:
            set out ""
            foreach uchar [split $in {}] {
                append out [dict get $FontsAttrs($fn,encoding) $uchar]
            }
        } else {
            set out [encoding convertto $FontsAttrs($fn,encoding) $in]
        }
        # map special characters
        return [string map {
            \n "\\n" \r "\\r" \t "\\t" \b "\\b" \f "\\f" ( "\\(" ) "\\)" \\ "\\\\"
        } $out]
    }

    # helper function: correctly quote string with parentheses
    proc ::pdf4tcl::QuoteString {string} {
        # map special characters
        return ([string map {
            \n "\\n" \r "\\r" \t "\\t" \b "\\b" \f "\\f" ( "\\(" ) "\\)" \\ "\\\\"
        } $string])
    }

    # helper function: consume and return an object id
    method GetOid {{noxref 0}} {
        if {!$noxref} {
            my StoreXref
        }
        set res $pdf(pdf_obj)
        incr pdf(pdf_obj)
        return $res
    }

    # helper function: return next object id (without incrementing)
    method NextOid {} {
        return $pdf(pdf_obj)
    }

    # helper function: set xref of (current) oid to current out_pos
    method StoreXref {{oid {}}} {
        if {$oid eq ""} {
            set oid $pdf(pdf_obj)
        }
        set pdf(xref,$oid) $pdf(out_pos)
    }

    # helper function for formatting floating point numbers
    proc ::pdf4tcl::Nf {n {deci 3}} {
        # Up to 3 decimals
        set num [format %.*f $deci $n]
        # Remove surplus decimals
        set num [string trimright [string trimright $num "0"] "."]
        # Small negative numbers might become -0
        if {$num eq "-0"} {
            set num "0"
        }
        return $num
    }
} ;# end of class pdf4tcl::pdf4tcl


#######################################################################
# Implementation of pdf4tcl::catPdf resides below
#######################################################################

# Put all helpers in a namespace
namespace eval pdf4tcl::cat {}

# Parse a PDF dictionary in <<>> and put its elements and values in a tcl dict
proc pdf4tcl::cat::PdfDictToTclDict {dict} {
    # Remove surrounding <<>>
    regexp {^\s*<<\s*(.*?)\s*>>\s*$} $dict -> values
    if {![info exists values]} {
        #puts DICT??
        return {}
    }
    # Parser
    set state none
    set key ""
    set value ""
    set result {}
    set i 0
    set len [string length $values]
    set bracketDepth 0
    set firstVal 1
    while {$i < $len} {
        set c [string index $values $i]
        switch $state {
            none {
                if {$c eq "/"} {
                    set key $c
                    set state name
                    incr i
                }
            }
            name {
                if {[string is alnum $c]} {
                    append key $c
                    incr i
                } elseif {[string is space $c]} {
                    set state space
                    incr i
                } else {
                    # Do not consume the first value char here
                    set value ""
                    set state val
                    set firstVal 1
                }
            }
            space {
                if {[string is space $c]} {
                    incr i
                } else {
                    # Do not consume the first value char here
                    set value ""
                    set state val
                    set firstVal 1
                }
            }
            valbr {
                append value $c
                incr i
                if {$c eq "\]"} {
                    incr bracketDepth -1
                    if {$bracketDepth <= 0} {
                        set state val
                    }
                } elseif {$c eq "\["} {
                    incr bracketDepth
                }
            }
            val {
                if {$c eq "\["} {
                    append value $c
                    incr i
                    set bracketDepth 1
                    set state valbr
                } elseif {$c eq "/" && !$firstVal} {
                    # Start of a new key, unless it is first in the value
                    dict set result $key [string trim $value]
                    set key $c
                    set value ""
                    set state name
                    incr i
                } elseif {0} {
                    # TODO: take care of << [ ( etc.
                } else {
                    append value $c
                    incr i
                }
                set firstVal 0
            }
        }
    }
    if {$key ne ""} {
        dict set result $key $value
    }
    return $result
}

# Parse a PDF object's dictionary and put its elements and values in a
# tcl dict
proc pdf4tcl::cat::PdfObjToTclDict {obj {streamName {}}} {
    # Optional out parameter
    if {$streamName ne ""} {
        upvar 1 $streamName stream
    }
    #set apa $dict
    # Remove surrounding obj
    regexp {^\s*\d+\s+0\s+obj\s*(.*)$} $obj -> obj
    set obj [string trim $obj]
    # Remove endobj
    set dict [string range $obj 0 end-6]
    # Stream after dict:
    set stream ""
    if {[regexp -indices {>>\s*\nstream\s*\n} $dict ixs]} {
        lassign $ixs sIndex eIndex
        incr sIndex
        incr eIndex
        set stream [string range $dict $eIndex end]
        set dict [string range $dict 0 $sIndex]
    }
    if {[regexp -indices {endstream\s*$} $stream ixs]} {
        lassign $ixs sIndex eIndex
        incr sIndex -1
        set stream [string range $stream 0 $sIndex]
    }
    # TODO, only stream handled?
    # TODO: remove any stream?
    return [PdfDictToTclDict $dict]
}

# Make a tcl dict into a PDF dictionary in <<>>
proc pdf4tcl::cat::TclDictToPdfDict {dict} {
    set res "<<"
    foreach {key val} $dict {
        append res $key " " $val \n
    }
    append res ">>"
    return $res
}

# Read a PDF and organise its data into a dict with the following elements
# N : Number of objects + 1  (i.e. they go from 1 to N-1)
# trailer: trailer dictionary defining e.g. Root object
# root: Dictionary from root object
# rootid : Object number of root object
# info: Dictionary from info object, if any
# infoid : Object number of info object, if any
# <n> : Object <n> from "n 0 obj" through "endobj". A dict with keys:
#       full: entire object
#       dict: main dictionary, if any, converted to tcl dict
#       stream: any stream
proc pdf4tcl::cat::ReadPdf {file} {
    set ch [open $file rb]
    set data [read $ch]
    close $ch

    # Locate all incremental xref tables
    set allXref {}
    set xrefIndices {}
    # Locate last xref table
    regexp {startxref\s+(\d+)\s+%%EOF\s*$} $data -> startxref
    while 1 {
        set endpart [string range $data $startxref end]
        lappend xrefIndices $startxref
        # Extract trailer
        regexp {(?:trailer\s+(.*?)\s+startxref){1,1}?} $endpart -> trailertxt
        set trailer [PdfDictToTclDict $trailertxt]
        # Store
        lappend allXref $endpart $trailer
        # Fetch previous if there is one
        if {[dict exists $trailer /Prev]} {
            set startxref [dict get $trailer /Prev]
            #puts "New startxref $startxref"
        } else {
            break
        }
    }
    set xrefIndices [lsort -integer $xrefIndices]
    #puts "[llength $allXref]"

    # Go through xref tables from front
    set allTrailer {}
    set xrefs {}
    set unusedIndices {}
    foreach {trailer endpart} [lreverse $allXref] {
        # Merge the trailer dictionaries
        set allTrailer [dict merge $allTrailer $trailer]
        # Extract xrefs
        set obj 0
        foreach line [split $endpart \n] {
            if {[string match *trailer* $line]} break
            if {[regexp {(\d+) (\d+)\s*$}  $line -> objNo nObjs]} {
                #puts "OBJS $objNo $nObjs"
                set obj $objNo
                continue
            }
            if {[regexp {(\d+) (\d+) (n|f)} $line -> index _rev flag]} {
                # If we overwrite a reference, keep the index for later
                if {[dict exists $xrefs $obj]} {
                    lappend unusedIndices [dict get $xrefs $obj]
                }
                if {$flag eq "n"} {
                    dict set xrefs $obj [string trimleft $index 0]
                } elseif {$flag eq "f"} {
                    # TBD handle deleted objs?
                    dict set xrefs $obj -1
                }
                incr obj
            }
        }
    }
    # Extract unused into dummy object numbers
    set obj -1
    foreach index $unusedIndices {
        dict set xrefs $obj $index
        incr obj -1
    }

    # Do not keep any Prev in final trailer
    set trailer $allTrailer
    dict unset trailer /Prev
    #puts $trailer

    # Highest object number
    set obj [lindex [lsort -stride 2 -integer -decreasing -index 0 $xrefs] 0]
    dict set pdfdata N [expr {$obj + 1}]
    dict set pdfdata "trailer" $trailer
    # Cut out objects, from the end
    set xrefs [lsort -stride 2 -integer -decreasing -index 1 $xrefs]
    #puts $xrefs
    foreach {obj index} $xrefs {
        # Negative index is a deleted object
        if {$index < 0} continue
        # See if there is an xref after this object
        set xxx [lsearch -integer -bisect $xrefIndices $index]
        set xrefIx [expr {[lindex $xrefIndices [expr {$xxx + 1}]] - 1}]
        # Limit object extaction to xref
        set fullObj [string trim [string range $data $index $xrefIx]]
        set data [string range $data 0 [expr {$index - 1}]]
        if {$obj >= 0} {
            # TBD limit length properly on the full string
            if {![string match *endobj $fullObj]} {
                # This should not happen if the xref limit above works
                puts "XXXX $obj [regexp -all -inline {endobj} $fullObj]"
            }
            dict set pdfdata $obj full $fullObj
        }
    }
    # Get root object
    set rval [dict get $trailer /Root]
    set rootid [lindex $rval 0]
    dict set pdfdata "rootid" $rootid
    dict set pdfdata root [PdfObjToTclDict [dict get $pdfdata $rootid full]]
    # Any info object?
    if {[dict exists $trailer /Info]} {
        set rval [dict get $trailer /Info]
        set infoid [lindex $rval 0]
        dict set pdfdata "infoid" $infoid
        dict set pdfdata info [PdfObjToTclDict [dict get $pdfdata $infoid full]]
    }

    return $pdfdata
}

# Debug
proc pdf4tcl::cat::Dump {pdfdata} {
    array set d $pdfdata
    parray d {[a-zA-Z]*}
    # lowest id
    set ix [lindex [lsort -dictionary [dict keys $pdfdata]] 0]
    puts "Lowest id: $ix"
    parray d $ix
    parray d 6
    parray d 285
}

# Write to an output stream, keep track of number of chars
proc pdf4tcl::cat::WriteCh {ch str cntName} {
    upvar 1 $cntName cnt
    incr cnt [string length $str]
    puts -nonewline $ch $str
}

# Given a dictionary like the one from ReadPdf, create a PDF
proc pdf4tcl::cat::WritePdf {filename pdfd} {
    set ch [open $filename wb]
    set pos 0
    set xref {}
    WriteCh $ch "%PDF-1.4\n" pos
    WriteCh $ch "%\xE5\xE4\xF6\n" pos
    foreach obj [lreverse [dict keys $pdfd]] {
        if {![string is digit -strict $obj]} continue
        dict set xref $obj $pos
        # TODO: do not take the full if parts exist
        WriteCh $ch [dict get $pdfd $obj full]\n pos
    }
    set xref_pos $pos
    set N [dict get $pdfd N]
    WriteCh $ch "xref\n" pos
    WriteCh $ch "0 $N\n" pos
    WriteCh $ch "0000000000 65535 f \n" pos
    for {set a 1} {$a < $N} {incr a} {
        # TBD handle missing objects?
        WriteCh $ch [format "%010ld 00000 n \n" [dict get $xref $a]] pos
    }
    WriteCh $ch "trailer\n" pos
    WriteCh $ch [TclDictToPdfDict [dict get $pdfd trailer]]\n pos
    WriteCh $ch "startxref\n" pos
    WriteCh $ch "$xref_pos\n" pos
    WriteCh $ch "%%EOF\n" po

    close $ch
}

# renumber any " N 0 R" reference found
# TODO: detect stream in an object??
proc pdf4tcl::cat::RenumberRef {val delta {refmapping {}}} {
    set rest $val
    set result ""
    while {$rest ne ""} {
        # Locate first reference
        if {[regexp -indices {^\d+ 0 R} $rest ixs]} {
            lassign $ixs is ie
            incr is -1
        } elseif {[regexp -indices {\W\d+ 0 R} $rest ixs]} {
            lassign $ixs is ie
        } else {
            append result $rest
            break
        }

        append result [string range $rest 0 $is]
        incr is
        set ref [string range $rest $is $ie]
        incr ie
        set rest [string range $rest $ie end]

        set ref [lindex $ref 0]
        set new [expr {$ref + $delta}]
        if {[dict exists $refmapping $ref]} {
            set new [dict get $refmapping $ref]
        }
        append result "$new 0 R"
    }
    return $result
}

# renumber Tcl dict version of a dict
proc pdf4tcl::cat::RenumberDict {d delta {refmapping {}}} {
    foreach {key val} $d {
        dict set d $key [RenumberRef $val $delta]
    }
    return $d
}

# Renumber a complete object
proc pdf4tcl::cat::RenumberObj {obj delta {refmapping {}}} {
    # Extract initial obj part
    if {![regexp {^\s*(\d+)\s+0\s+obj\s*(.*)$} $obj -> objid objbody]} {
        #puts OBJ??
        #puts '$obj'
        return $obj
    }
    # TODO, remove any stream before passing it to RenumberRef
    set objbody [RenumberRef $objbody $delta $refmapping]
    set objid [expr {$objid + $delta}]
    set result "$objid 0 obj\n$objbody"
    return $result
}

proc pdf4tcl::cat::RenumberPdf {pdfd delta {refmapping {}}} {
    set newd {}
    foreach {key val} $pdfd {
        if {[string is digit $key]} {
            set val [dict get $val full] ;# TBD if stream identified?
            dict set newd [expr {$key + $delta}] \
                    full [RenumberObj $val $delta $refmapping]
            continue
        }
        switch $key {
            N {
                # N will represent end of object numbers
                dict set newd $key [expr {$val + $delta}]
            }
            trailer - root - info {# Dictionary
                dict set newd $key [RenumberDict $val $delta]
            }
            rootid - infoid {
                dict set newd $key [expr {$val + $delta}]
            }
        }
    }
    return $newd
}

# Add one pdf's contents to another
proc pdf4tcl::cat::AppendPdf {pdf1 pdf2} {
    # Get the pages from first pdf
    set pages1id [lindex [dict get $pdf1 root /Pages] 0]
    regexp {/Kids\s*\[([^\]]*)\]} [dict get $pdf1 $pages1id full] -> kids1vec

    # Get the pages id from second pdf
    set pages2id [lindex [dict get $pdf2 root /Pages] 0]
    # References in pdf2 to its Pages object should be redirected
    # to pdf1's Pages object instead,
    set refmapping [list $pages2id $pages1id]

    # Now, renumber all objects in pdf2 to put them after all objs in pdf1
    set delta [expr {[dict get $pdf1 N] - 1}]
    set pdf2 [RenumberPdf $pdf2 $delta $refmapping]
    #Dump $pdf2

    # Get the list of pages from second pdf, after renumbering
    set pages2id [lindex [dict get $pdf2 root /Pages] 0]
    regexp {/Kids\s*\[([^\]]*)\]} [dict get $pdf2 $pages2id full] -> kids2vec
    #puts "PAGE2 $pages2id $kids2vec"

    # Recreate the pages object and replace it in pdf1
    set kids "$kids1vec $kids2vec"
    set count [expr {[llength $kids] / 3}]
    set newobj "$pages1id 0 obj\n<<\n"
    append newobj "/Type /Pages\n"
    append newobj "/Count $count\n"
    append newobj "/Kids \[ $kids \]\n"
    append newobj ">>\nendobj"
    dict set pdf1 $pages1id full $newobj

    # TODO: Merge other stuff in Catalog, like AcroForm or Metadata
    if {[dict exists $pdf1 root /AcroForm] && \
                [dict exists $pdf2 root /AcroForm]
    } {
        set ob1 [lindex [dict get $pdf1 root /AcroForm] 0]
        set ob2 [lindex [dict get $pdf2 root /AcroForm] 0]
        set d1 [PdfObjToTclDict [dict get $pdf1 $ob1 full]]
        set d2 [PdfObjToTclDict [dict get $pdf2 $ob2 full]]
        # How to do this???
        #puts $d1
        #puts $d2
    }

    # Transfer all objects from 2 to 1
    foreach {key val} $pdf2 {
        if {[string is digit $key]} {
            dict set pdf1 $key full [dict get $val full]
        }
    }
    # Update size in trailer
    dict set pdf1 trailer /Size [dict get $pdf2 N]
    dict set pdf1 N [dict get $pdf2 N]

    return $pdf1
}

# Extract page objects from pdf dictionary (from ReadPdf)
# Return type is a list of page streams, uncompressed
proc pdf4tcl::cat::GetPages {pdf} {
    # Get the pages from Kids vector
    set pages1id [lindex [dict get $pdf root /Pages] 0]
    regexp {/Kids\s*\[([^\]]*)\]} [dict get $pdf $pages1id full] -> kidsvec

    set pages {}
    foreach {id _ _} $kidsvec {
        # Page object to get contents reference
        set pObj [dict get $pdf $id]
        set fullObj [dict get $pObj full]
        set d [PdfObjToTclDict $fullObj]
        set contentsRef [dict get $d /Contents]
        set contentsRef [string trim $contentsRef "\[\]"]
        lassign $contentsRef contentsId

        # Contents object
        set cObj [dict get $pdf $contentsId]
        set fullObj [dict get $cObj full]
        set d [PdfObjToTclDict $fullObj stream]
        if {[dict exists $d /Filter]} {
            set filter [dict get $d /Filter]
            # TODO: Other filters?
            if {[string match "*/FlateDecode*" $filter]} {
                set stream [zlib decompress $stream]
            }
        }
        lappend pages $stream
    }
    return $pages
}

# Extract text from a page stream, uncompressed
# Result is a list of lines in y coordinate order.
# Each line is a list of text chunks from the same y coordinate, in x order.
proc pdf4tcl::cat::GetTextFromPage {pageStream} {
    # TODO: Handle more complex stuff, this basically assumes being generated from
    # straightforward pdf4tcl usage.
    # Needs to handle transforms and other text commands than Tm/Tj.
    # Also, cannot assume linebreaks after each command?
    set textChunks {}
    set currX 0.0
    set currY 0.0
    foreach line [split $pageStream \n] {
        if {[regexp { Tm\s*$} $line]} {
            lassign $line _ _ _ _ currX currY _
            continue
        }
        if {[regexp {\((.*)\)\s+Tj\s*$} $line -> text]} {
            # TODO: clean up from escapes
            # TODO: fix encoding issues with fonts (tricky)
            lappend textChunks $currX $currY $text
        }
    }
    # Sort in x first
    set textChunks [lsort -real -increasing -stride 3 -index 0 $textChunks]
    # Then in y to make it primary
    set textChunks [lsort -real -decreasing -stride 3 -index 1 $textChunks]

    set result {}
    set line {}
    set currY -100000
    foreach {x y t} $textChunks {
        if {$y != $currY} {
            if {[llength $line] != 0} {
                lappend result $line
            }
            set line [list $t]
            set currY $y
        } else {
            lappend line $t
        }
    }
    if {[llength $line] != 0} {
        lappend result $line
    }
    return $result
}

# Concatenate PDFs.
# Currently the implementation limits the PDFs a lot since not all details
# are taken care of yet. Straightforward ones like those created with pdf4tcl
# or ps2pdf should work mostly ok.
proc pdf4tcl::catPdf {args} {
    if {[llength $args] < 3} {
        throw "PDF4TCL" "wrong # args: should be \"catPdf infile ?infile ...? outfile\""
    }
    set outfile [lindex $args end]
    set infile1 [lindex $args 0]
    set infiles [lrange $args 1 end-1]

    set pdf1 [pdf4tcl::cat::ReadPdf $infile1]
    #pdf4tcl::cat::Dump $pdf1
    foreach f $infiles {
        set pdf2 [pdf4tcl::cat::ReadPdf $f]
        #pdf4tcl::cat::Dump $pdf2
        set pdf1 [pdf4tcl::cat::AppendPdf $pdf1 $pdf2]
    }
    pdf4tcl::cat::WritePdf $outfile $pdf1
}

# Extract form data from a PDF file
# Return value is a dictionary of id/info pairs.
#  info is a dictionary containing these fields:
#   type    : Field type.
#   value   : Form value.
#   flags   : Value of form flags field.
#   default : Default value, if any.
proc pdf4tcl::getForms {pdfFile} {
    if {![file exists $pdfFile]} {
        throw "PDF4TCL" "No such file: $pdfFile"
    }
    set pdf [pdf4tcl::cat::ReadPdf $pdfFile]

    # Locate Forms
    set N [dict get $pdf N]
    set result {}
    for {set o 1} {$o <= $N} {incr o} {
        if {![dict exists $pdf $o]} continue
        set d [pdf4tcl::cat::PdfObjToTclDict [dict get $pdf $o full]]
        if {[dict exists $d /Subtype] && [dict get $d /Subtype] eq "/Widget"} {
            set id [dict get $d /T]
            # Remove parens from ID-string
            set id [string trim $id "()"]
            # Field Type (/Tx or /Btn)
            if {[dict exists $d /FT]} {
                dict set result $id type [dict get $d /FT]
            } else {
                dict set result $id type {}
            }
            # Default value, if any
            if {[dict exists $d /AS]} {
                dict set result $id default [dict get $d /AS]
            }
            # Value
            if {[dict exists $d /V]} {
                dict set result $id value [dict get $d /V]
            } else {
                dict set result $id value {}
            }
            # Flags
            if {[dict exists $d /Ff]} {
                dict set result $id flags [dict get $d /Ff]
            } else {
                dict set result $id flags 0
            }
        }
    }
    return $result
}

# vim: tw=0
