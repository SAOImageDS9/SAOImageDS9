# plottable.tcl --
#     Routines for drawing a table and its contents
#

# DrawTableFrame --
#     Draw the horizontal and vertical lines for the table
#
# Arguments:
#     w            Widget in which to draw
#
proc ::Plotchart::DrawTableFrame { w } {
    variable scaling
    variable config

    set pxmin [lindex $scaling($w,leftside)    0]
    set pxmax [lindex $scaling($w,rightside) end]
    set pymin $scaling($w,topside)
                                                     #Config      #Config
    $w create line $pxmin $pymin $pxmax $pymin -fill $config($w,frame,color) \
        -width $config($w,frame,outerwidth) -tag frame

    set scaling($w,hseparator) [$w create line $pxmin $pymin $pxmin $pymin \
            -fill $config($w,frame,color) -width $config($w,frame,outerwidth) -tag frame]

    set scaling($w,vseparators) {}

    set linewidth "outerwidth"
    foreach left $scaling($w,leftside) {

        lappend scaling($w,vseparators) [$w create line $left $pymin $left $pymin \
               -fill $config($w,frame,color) -width $config($w,frame,$linewidth) -tag frame]
        set linewidth "innerwidth"
    }

    set right [lindex $scaling($w,rightside) end]

    lappend scaling($w,vseparators) [$w create line $right $pymin $right $pymin \
           -fill $config($w,frame,color) -width $config($w,frame,outerwidth) -tag frame]
}

# SetFormatCommand --
#     Set the format command
#
# Arguments:
#     w            Widget in which to draw
#     command      Command to use
#
proc ::Plotchart::SetFormatCommand { w command } {
    variable scaling

    set fullname [uplevel 2 [list namespace which $command]]

    if { $fullname == "" } {
        return -code error "No such command or procedure: $command"
    } else {
        set scaling($w,formatcommand) $fullname
    }
}

# DefaultFormat --
#     Default routine for formatting the contents of a cell
#
# Arguments:
#     chart        Table chart name
#     w            Widget in which to draw
#     row          Row of the current cell
#     column       Column of the current cell
#     value        Value to draw
#
# Result:
#     String to be drawn
#
# Note:
#     Does not set any cell properties
#
proc ::Plotchart::DefaultFormat { chart w row column value } {

    return $value
}

# TextAnchor --
#     Determine the position of the text in a cell
#
# Arguments:
#     chart        Table chart name
#     type         Type of cell
#     left         Left side of the cell
#     right        Right side of the cell
#
# Result:
#     X and Y-coordinate and anchor
#
proc ::Plotchart::TextAnchor { w type left right } {
    variable scaling
    variable config

    set ypos [expr {$scaling($w,topside) + $config($w,cell,topspace)}]

    switch -- $config($w,$type,anchor) {
        "left" {
            set anchor nw
            set xpos   [expr {$left + $config($w,cell,leftspace)}]
        }
        "right" {
            set anchor ne
            set xpos   [expr {$right - $config($w,cell,rightspace)}]
        }
        "center" -
        default  {
            set anchor n
            set xpos [expr {($left + $right) / 2.0}]
        }
    }

    return [list $xpos $ypos $anchor]
}

#
# DrawRow --
#     Draw a single row
#
# Arguments:
#     w            Widget in which to draw
#     values       Values to fill the row with
#     option       Option for drawing
#
# Note:
#     This does not take care at all of any configuration options!
#
proc ::Plotchart::DrawRow { w values {option {}} } {
    variable scaling
    variable config

    if { [llength $values] < [llength $scaling($w,leftside)] } {
        return -code error "Too few values to fill the row"
    }

    if { $option eq "header" } {
        foreach v $values left $scaling($w,leftside) right $scaling($w,rightside) {

            foreach {xpos ypos anchor} [TextAnchor $w header $left $right] {break}

            set font_height $config($w,header,height)
            if { [info exists config($w,header,font)] } {
                 set font_height [lindex [FontMetrics $w $config($w,header,font) 1] 1]
            }

            $w create rectangle $left $scaling($w,topside) $right [expr {$scaling($w,topside)+$font_height}] \
                -tag cellbg -fill $config($w,header,background) -outline $scaling($w,cell,-background)

           #$w create rectangle $left $scaling($w,topside) $right [expr {$scaling($w,topside)+$config($w,header,height)}] \
           #    -tag cellbg -fill $scaling($w,cell,-background) -outline $scaling($w,cell,-background)

            if { [info exists config($w,header,font)] } {
                $w create text $xpos $ypos -text $v -fill $config($w,header,color) -anchor $anchor \
                    -font $config($w,header,font)
            } else {
                $w create text $xpos $ypos -text $v -fill $config($w,header,color) -anchor $anchor
            }
        }
    } else {

        # TODO
        set type oddrow
        if { $scaling($w,row) % 2 == 0 } {
            set type evenrow
        }

        set column 0
        foreach value $values left $scaling($w,leftside) right $scaling($w,rightside) {

            foreach {xpos ypos anchor} [TextAnchor $w cell $left $right] {break}

            set scaling($w,left)     $left
            set scaling($w,right)    $right
            set scaling($w,hasworld) 0

            set text [$scaling($w,formatcommand) table_$w $w $scaling($w,row) $column $value]

            if { $scaling($w,cell,-background) ne "" } {
                $w create rectangle $left $scaling($w,topside) $right [expr {$scaling($w,topside)+$config($w,$type,height)}] \
                    -tag cellbg -fill $scaling($w,cell,-background) -outline $scaling($w,cell,-background)
            }

            if { [info exists scaling($w,cell,-font)] } {
                $w create text $xpos $ypos -text $text -anchor $anchor -tag celltext \
                    -fill $scaling($w,cell,-color) -font $scaling($w,cell,-font)
            } else {
                $w create text $xpos $ypos -text $text -anchor $anchor -tag celltext \
                -fill $scaling($w,cell,-color)
            }
            incr column
        }
    }

    set oldtop $scaling($w,toptable)
    set scaling($w,topside) [expr {$scaling($w,topside) + $config($w,evenrow,height)}]

    $w coords $scaling($w,hseparator) [lindex $scaling($w,leftside)    0] $scaling($w,topside) \
                                      [lindex $scaling($w,rightside) end] $scaling($w,topside)

    foreach vseparator $scaling($w,vseparators) hcoord $scaling($w,leftside) {
        if { $hcoord == {} } {
            set hcoord [lindex $scaling($w,rightside) end]
        }
        $w coords $vseparator $hcoord $oldtop $hcoord $scaling($w,topside)
    }

    incr scaling($w,row)

    $w lower cellbg
    $w raise celltext
    $w raise frame
}

#
# DrawSeparator --
#     Draw a horizontal separator
#
# Arguments:
#     w            Widget in which to draw
#
proc ::Plotchart::DrawSeparator { w } {
    variable scaling
    variable config

    set left  [lindex $scaling($w,leftside)    0]
    set right [lindex $scaling($w,rightside) end]

    $w create line $left $scaling($w,topside) $right $scaling($w,topside) -tag frame \
        -fill $config($w,frame,color) -width $config($w,frame,innerwidth)

    $w raise frame
}

# ConfigureTableCell --
#     Set the properties of the "current" table cell
#
# Arguments:
#     w            Widget in which to draw
#     args         List of key-value pairs
#
proc ::Plotchart::ConfigureTableCell { w args } {
    variable scaling
    variable config

    foreach {key value} $args {
        switch -- $key {
            "-background" -
            "-color"      -
            "-font"       -
            "-justify"    {
                set scaling($w,cell,$key) $value
            }
            "-anchor"     {
                #
                # Problem: this takes effect in the _next_ cell!
                #
                set config($w,cell,anchor) $value
            }
            default {
                return -code error "Unknown cell property: $key"
            }
        }
    }
}

# TableCellCoordinates --
#     Get the pixel coordinates of the "current" table cell
#
# Arguments:
#     w            Widget in which to draw
#
proc ::Plotchart::TableCellCoordinates { w } {
    variable scaling
    variable config

    return [list $scaling($w,left) $scaling($w,topside) $scaling($w,right) [expr {$scaling($w,topside)+$config($w,evenrow,height)}]]
}

# TableWorldCoordinates --
#     Set the world coordinates for the "current" table cell
#
# Arguments:
#     w            Widget in which to draw
#     xmin         Minimum x-coordinate
#     ymin         Minimum y-coordinate
#     xmax         Maximum x-coordinate
#     ymax         Maximum y-coordinate
#
proc ::Plotchart::TableWorldCoordinates { w xmin ymin xmax ymax } {
    variable scaling
    variable config

    viewPort         $w $scaling($w,left)  $scaling($w,topside) \
                        $scaling($w,right) [expr {$scaling($w,topside)+$config($w,evenrow,height)}]
    worldCoordinates $w $xmin $ymin $xmax $ymax

    set scaling($w,hasworld) 1
}

# TableWorldToPixels --
#     Convert the world coordinates for the "current" table cell to pixels
#
# Arguments:
#     w            Widget in which to draw
#     args         Either a single argument (list of xy-pairs) or separate
#                  argumentns representing xy-pairs
#
proc ::Plotchart::TableWorldToPixels { w args } {
    variable scaling

    if { [llength $args] == 1 } {
        set coords [lindex $args 0]
    } else {
        set coords $args
    }
    if { $scaling($w,hasworld) } {
        set pixelCoords {}
        foreach {x y} $coords {
            set pixelCoords [concat $pixelCoords [coordsToPixel $w $x $y]]
        }
        set coords $pixelCoords
    }

    return $coords
}
