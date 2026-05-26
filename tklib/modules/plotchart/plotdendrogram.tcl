# plotdendrogram.tcl --
#     Facilities for plotting dendrograms
#
# Note:
#     If a label consists of more than one word, it should be preceeded by "LEAF".
#
#     For example:
#
#                             +
#           +----------------------------+--------------------+
#         Label1          Label2         |                    |
#                                  +-----+-----+         +---------+
#                                Level2a   Level2b       |         C
#                                                    +---+---+
#                                                "A and B"   B
#     This dendrogram can be represented as:
#
#     set data {
#         "Label1" "Label2" {Level2a Level2b} {{{LEAF A and B} B} C}
#     }
#

# TreeCountItems --
#     Scan the tree data for the maximum depth and the number of end labels
#
# Arguments:
#     treedata          Nested list of end labels
#
# Returns:
#     List of number of end labels and the maximum depth
#
proc ::Plotchart::TreeCountItems {treedata} {
    set countLabels 0
    set countLevels 0

    return [TreeCountItemsRec $treedata $countLabels $countLevels]
}

# TreeCountItemsRec --
#     Count the end labels and the levels via recursion
#
proc ::Plotchart::TreeCountItemsRec {treedata countLabels countLevels} {

    foreach item $treedata {
        if { [llength $item] > 1 && [lindex $item 0] != "LEAF" } {
            incr countLevels
            lassign [TreeCountItemsRec $item $countLabels $countLevels] countLabels newLevels
            set countLevels [expr {max($countLevels,$newLevels)}]
        } else {
            incr countLabels
        }
    }

    return [list $countLabels $countLevels]
}

# DrawDendrogram --
#     Draw the dendrogram
#
# Arguments:
#     w                 Canvas to draw in
#     series            Name of the series in question
#     treedata          Nested list of end labels
#
# Result:
#     Dendrogram in the w
#
proc ::Plotchart::DrawDendrogram {w series treedata} {
    variable scaling

    lassign [TreeCountItems $treedata] countLabels countLevels

    set dir $scaling($w,direction)

    set canvaswidth  [WidthCanvas $w]
    set canvasheight [HeightCanvas $w]

    set width  [expr {$canvaswidth  - 10}]
    set height [expr {$canvasheight - $scaling($w,pymin)}]

    if { $dir in {"left-right" "right-left"} } {
        set vmax [expr {$width  - 200}]
    } else {
        set vmax [expr {$height - 200}]
    }
    if { $scaling($w,extend) } {
        set extend $vmax
    } else {
        set extend {}
    }

    if { $dir in {"left-right" "right-left"} } {
        set du [expr {$width / double($countLabels + 2)}]
        set dv [expr {$vmax  / double($countLevels)}]       ;# No contraction yet
    } else {
        set du [expr {$height / double($countLabels + 2)}]
        set dv [expr {$vmax  / double($countLevels)}]       ;# No contraction yet
    }

    set utext [expr {1.5 * $du}]
    set ucur  [expr {1.5 * $du}]
    if { $dir in {"left-right" "right-left"} } {
        set vcur 5
    } else {
        set vcur [expr {$scaling($w,pymin) + 20}]
    }

    TreeDrawRec $w $series $treedata $ucur $vcur $du $dv utext $extend $width $height $scaling($w,direction)
}

# TreeDrawRec --
#     Draw the dendrogram recursively
#
# Arguments:
#     w                 Canvas to draw in
#     series            Name of the series in question
#     treedata          Nested list of end labels
#     ucur              Current x-position (in a generalised sense)
#     vcur              Current y-position
#     du                Step in x-direction
#     dv                Step in y-direction
#     utext_in          Name (!) of the variable holding the text position
#     vmax              Extent in y-direction or empty
#     width             Width of the canvas area to be used
#     height            Height of the canvas area to be used
#     dir               Direction of the tree
#
# Returns:
#     Position of the last label
#
# Result:
#     Dendrogram in the w
#
proc ::Plotchart::TreeDrawRec {w series treedata ucur vcur du dv utext_in vmax width height dir} {
    variable data_series
    variable scaling

    upvar 1 $utext_in utext

    set ustart $ucur
    set vstart $vcur
    set lastu  {}
    set first  1

    set colour black
    if { [info exists data_series($w,$series,-colour)] } {
       set colour $data_series($w,$series,-colour)
    }
    set labelcolour black
    if { [info exists data_series($w,$series,-labelcolour)] } {
       set labelcolour $data_series($w,$series,-labelcolour)
    }
    set labelfont TkDefaultFont
    if { [info exists data_series($w,$series,-labelfont)] } {
       set labelfont $data_series($w,$series,-labelfont)
    }

    foreach item $treedata {
        if { [llength $item] > 1 && [lindex $item 0] ne "LEAF" } {
            set vnew [expr {$vstart + $dv}]
            set lastu [TreeDrawRec $w $series $item $ucur $vnew $du $dv utext $vmax $width $height $dir]

            #
            # Draw the connecting line above the items on this level
            #
            switch -- $dir {
                "left-right" {
                    $w create line $vcur $lastu $vnew $lastu -fill $colour
                }
                "right-left" {
                    $w create line [expr {$width-$vcur}] $lastu [expr {$width-$vnew}] $lastu -fill $colour
                }
                "top-bottom" {
                    $w create line $lastu $vcur $lastu $vnew -fill $colour
                }
                "bottom-top" {
                    $w create line $lastu [expr {$height-$vcur}] $lastu [expr {$height-$vnew}] -fill $colour
                }
            }

            set ucur $lastu

            if { $first } {
                set first 0
                set uleft $lastu
            }

        } else {
            #
            # Draw the vertical line and the label
            #
            set vend [expr {$vcur + $dv}]
            if { $vmax != {} } {
                set vend $vmax
            }

            if { [lindex $item 0] eq "LEAF" } {
                set item [lrange $item 1 end]
            }

            switch -- $dir {
                "left-right" {
                    $w create line $vcur $utext $vend $utext -fill $colour
                    $w create text [expr {$vend + 10}] $utext -text $item -anchor w -font $labelfont -fill $labelcolour
                }
                "right-left" {
                    $w create line [expr {$width-$vcur}] $utext [expr {$width-$vend}] $utext -fill $colour
                    $w create text [expr {$width-$vend-10}] $utext -text $item -anchor e -font $labelfont -fill $labelcolour
                }
                "top-bottom" {
                    $w create line $utext $vcur $utext $vend -fill $colour
                    $w create text $utext [expr {$vend + 10}] -text $item -angle 90 -anchor e -font $labelfont -fill $labelcolour
                }
                "bottom-top" {
                    $w create line $utext [expr {$height-$vcur}] $utext [expr {$height-$vend}] -fill $colour
                    $w create text $utext [expr {$height-$vend-10}] -text $item -angle 90 -anchor w -font $labelfont -fill $labelcolour
                }
            }

            set lastu $utext
            set utext [expr {$utext + $du}]
            if { $first } {
                set first 0
                set uleft $lastu
            }

        }

        set ucur [expr {$ucur + $du}]
    }

    if { [llength $treedata] > 1 && [lindex $treedata 0] ne "LEAF" } {
        if { $lastu == {} } {
            set lastu [expr {$ustart + $du * ([llength $treedata]-1)}]
        }

        switch -- $dir {
            "left-right" {
                $w create line $vcur $uleft $vcur $lastu -fill $colour
            }
            "right-left" {
                $w create line [expr {$width-$vcur}] $uleft [expr {$width-$vcur}] $lastu -fill $colour
            }
            "top-bottom" {
                $w create line $uleft $vcur $lastu $vcur -fill $colour
            }
            "bottom-top" {
                $w create line $uleft [expr {$height-$vcur}] $lastu [expr {$height-$vcur}] -fill $colour
            }
        }
        set ucur [expr {($uleft + $lastu) / 2.0}]
    }

    return $ucur
}
