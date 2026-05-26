# plotspecial.tcl --
#    Facilities to draw specialised plots in a dedicated canvas
#
# Note:
#    It is a companion of "plotchart.tcl"
#

# DrawTargetData --
#    Compute the coordinates for the symbol representing the skill and draw it
#
# Arguments:
#    w           Name of the canvas
#    series      Name of the series of symbols
#    xvalues     List of model results
#    yvalues     List of measurements to which the model results are compared
# Result:
#    None
#
# Side effects:
#    Symbol drawn
#
# Note:
#    The lists of model data and measurements must have the same length
#    Missing data can be represented as {}. Only pairs that have both x and
#    y values are used in the computations.
#
proc ::Plotchart::DrawTargetData { w series xvalues yvalues } {
    variable data_series

    if { [llength $xvalues] != [llength $yvalues] } {
        return -code error "Lists of model data and measurements should have the same length"
    }

    set xn {}
    set yn {}
    set xmean 0.0
    set ymean 0.0
    set count 0

    foreach x $xvalues y $yvalues {
        if { $x != {} && $y != {} } {
            lappend xn $x
            lappend yn $y

            set xmean [expr {$xmean + $x}]
            set ymean [expr {$ymean + $y}]
            incr count
        }
    }

    if { $count <= 1 } {
        return
    }

    set xmean [expr {$xmean/double($count)}]
    set ymean [expr {$ymean/double($count)}]

    set sumx2  0.0
    set sumy2  0.0
    set sumxy  0.0

    foreach x $xn y $yn {
        set sumx2 [expr {$sumx2 + ($x-$xmean)*($x-$xmean)}]
        set sumy2 [expr {$sumy2 + ($y-$ymean)*($y-$ymean)}]
        set sumxy [expr {$sumxy + ($x-$xmean)*($y-$ymean)}]
    }

    set stdevx [expr {sqrt($sumx2 / double($count-1))}]
    set stdevy [expr {sqrt($sumy2 / double($count-1))}]
    set corrxy [expr {$sumxy / $stdevx / $stdevy / double($count-1)}]

    set bstar  [expr {($xmean-$ymean) / $stdevy}]
    set sstar2 [expr {$sumx2 / $sumy2}]
    set rmsd   [expr {sqrt(1.0 + $sstar2 - 2.0 * sqrt($sstar2) * $corrxy)}]

    DataConfig $w $series -type symbol
    DrawData $w $series $rmsd $bstar
}

# DrawTaylorData --
#    Compute the coordinates for the symbol in a Taylor diagram and draw it
#
# Arguments:
#    w           Name of the canvas
#    series      Name of the series of symbols
#    stdev       Standard deviation
#    corr        Correlation
# Result:
#    None
#
# Side effects:
#    Symbol drawn
#
proc ::Plotchart::DrawTaylorData { w series stdev corr } {

    set angle [expr {acos($corr)}]
    set xdata [expr {$stdev * cos($angle)}]
    set ydata [expr {$stdev * sin($angle)}]

    DataConfig $w $series -type symbol
    DrawData $w $series $xdata $ydata
}

# DrawPerformanceData --
#    Compute the coordinates for the performance profiles and draw the lines
#
# Arguments:
#    w                  Name of the canvas
#    profiledata        Names and data for each profiled item
# Result:
#    None
#
# Side effects:
#    Symbol drawn
#
# Note:
#    The lists of model data and measurements must have the same length
#    Missing data can be represented as {}. Only pairs that have both x and
#    y values are used in the computations.
#
proc ::Plotchart::DrawPerformanceData { w profiledata } {
    variable data_series
    variable scaling

    #
    # Determine the minima per solved problem - they function as scale factors
    #
    set scale {}
    set values [lindex $profiledata 1]
    set number [llength $values]
    foreach v $values {
        lappend scale {}
    }

    foreach {series values} $profiledata {
        set idx 0
        foreach s $scale v $values {
            if { $s == {} || $s > $v } {
                lset scale $idx $v
            }
            incr idx
        }
    }

    #
    # Scale the data (remove the missing values)
    # and draw the series
    #
    set plotdata {}
    foreach {series values} $profiledata {
        set newvalues {}
        foreach s $scale v $values {
            if { $s != {} && $v != {} && $s != 0.0 } {
                lappend newvalues [expr {$v / $s}]
            }
        }
        set newvalues [lsort -real $newvalues]

        set count     1

        set yprev     {}
        foreach v $newvalues vn [concat [lrange $newvalues 1 end] 1.0e20] {
            set y [expr {$count/double($number)}]

            #
            # Construct the staircase
            #
            if { $v != $vn } {
                if { $yprev == {} } {
                    DrawData $w $series 1.0 $y
                } else {
                    DrawData $w $series $v $yprev
                }

                DrawData $w $series $v $y
                set  yprev $y
            }
            incr count
        }
    }
}

# DrawDataNormalPlot --
#    Compute the coordinates for the empirical distribution and draw the series
#    in a normal distribution plot
#
# Arguments:
#    w                  Name of the canvas
#    series             Name of the series
#    mean               Estimated mean
#    stdev              Estimated standard deviation
#    data               Actual data
# Result:
#    None
#
# Note:
#    The value of "a" is adopted from the corresponding Wikipedia page,
#    which in turn adopted it from the R "stats" package (qqnorm function)
#
proc ::Plotchart::DrawDataNormalPlot { w series mean stdev data } {
    set n   [llength $data]
    set a   0.375
    if { $n > 10 } {
        set a 0.5
    }

    set idx 1
    foreach x [lsort -real -increasing $data] {
        if { $x != {} } {
            set xn [expr {($x - $mean) / $stdev}]
            set pn [expr {($idx - $a) / ($n + 1 - 2.0 * $a)}]
            set yn [::math::statistics::Inverse-cdf-normal 0.0 1.0 $pn]

            DrawData $w $series $xn $yn
        } else {
            DrawData $w $series {}  {}
        }
        incr idx
    }
}

# DrawDiagonalNormalPlot --
#    Draw the diagonal line in a normal distribution plot
#
# Arguments:
#    w                  Name of the canvas
# Result:
#    None
#
# Note:
#    You can use the "diagonal" series to configure its colour
#
proc ::Plotchart::DrawDiagonalNormalPlot { w } {
    variable scaling

    DrawData $w diagonal $scaling($w,xmin) $scaling($w,ymin)
    DrawData $w diagonal $scaling($w,xmax) $scaling($w,ymax)
}

# DrawCircleOutline --
#    Draw the circle and the labels for a circle plot
#
# Arguments:
#    w                  Name of the canvas
#    labels             Labels for the items
# Result:
#    None
#
proc ::Plotchart::DrawCircleOutline { w labels } {
    variable scaling
    variable data_series

    foreach {xcentre ycentre} [PolarToPixelPriv $w 0.0 0.0] {break}
    foreach {xeast   ycentre} [PolarToPixelPriv $w 1.0 0.0] {break}

    set radius [expr {$xeast - $xcentre}]

    $w create oval [expr {$xcentre - $radius}] [expr {$ycentre - $radius}] [expr {$xcentre + $radius}] [expr {$ycentre + $radius}] \
         -tag circle

    set numberLabels [llength $labels]
    set dangle [expr {360.0/$numberLabels}]

    for {set n 0} {$n < $numberLabels} {incr n} {
        set angle  [expr {$n * $dangle}]
        set anchor w

        set textAngle $angle

        if { $textAngle > 90.0 && $textAngle < 270.0 } {
            set textAngle [expr {$textAngle - 180.0}]
            set anchor e
        }

        #set angle [expr {acos(-1.0)/180.0 * $angle}]

        foreach {x y}   [PolarToPixelPriv $w 1.0  $angle] {break}
        foreach {xt yt} [PolarToPixelPriv $w 1.05 $angle] {break}

        set dotId  [.c create oval [expr {$x - 3}] [expr {$y - 3}] [expr {$x + 3}] [expr {$y + 3}] -fill black -tag circle]
        set textId [.c create text $xt $yt -text [lindex $labels $n] -anchor $anchor -angle $textAngle -tag circle]

        lappend data_series($w,dotIds)  $dotId
        lappend data_series($w,textIds) $textId
        lappend data_series($w,angles)  [expr {acos(-1.0)/180.0 * $angle}]
    }
}

# DrawCircleModify --
#    Modify the label/dot in a circle plot
#
# Arguments:
#    w                  Name of the canvas
#    label              Label for which things should be modified
#    args               Key-value pairs describing the modifications
# Result:
#    None
# Note:
#    The keys should be among the recognised keys
#
proc ::Plotchart::DrawCircleModify { w label args } {
    variable data_series

    set idx [lsearch $data_series($w,labels) $label]

    if { $idx < 0 } {
        return -code error "Unknown label -- $label"
    }

    set textId [lindex $data_series($w,textIds) $idx]
    set dotId  [lindex $data_series($w,dotIds)  $idx]

    foreach {key value} $args {
        switch -- $key {
            "-textcolor" -
            "-textcolour" {
                 $w itemconfig $textId -fill $value
            }
            "-font" {
                 $w itemconfig $textId -font $value
            }
            "-dotcolor" -
            "-dotcolour" {
                 $w itemconfig $dotId -fill $value -outline $value
            }
        }
    }
}

# DrawCircleConnection --
#    Connect the dots, identified by their labels in a circle plot
#
# Arguments:
#    w                  Name of the canvas
#    first              First label
#    second             Second label
#    colour             Colour of the connecting line
#    thicnkess          Thickness of the line
# Result:
#    None
#
proc ::Plotchart::DrawCircleConnection { w first second colour thickness } {
    variable scaling
    variable data_series

    set idx1 [lsearch $data_series($w,labels) $first]
    set idx2 [lsearch $data_series($w,labels) $second]

    if { $idx1 < 0 } {
        return -code error "Unknown label -- $first"
    }
    if { $idx2 < 0 } {
        return -code error "Unknown label -- $second"
    }

    set angle1 [lindex $data_series($w,angles) $idx1]
    set angle2 [lindex $data_series($w,angles) $idx2]

    foreach {xcentre ycentre} [PolarToPixelPriv $w 0.0 0.0] {break}
    foreach {xeast   ycentre} [PolarToPixelPriv $w 1.0 0.0] {break}

    set radius [expr {$xeast - $xcentre}]

    # Create a parabola:
    #
    #    y = a * x**2 + b
    #
    # where a and b are determined such that the parabola
    # intersects the circle in two points such that the
    # tangents to the parabola in these points make an
    # angle 2 * alpha. (alpha is the angle of the tangent to
    # the positive x-axis)
    # Then:
    #    a = 0.5 * sin alpha / cos alpha ** 2
    #    b = 0.5 * sin alpha
    #
    # First create the points for the parabola, then shift
    # and rotate
    #
    set alpha [expr {0.5 * acos(-1.0) - 0.5 * ($angle2 - $angle1)}]
    set beta  [expr {-$alpha + $angle1}]
    #set beta  0.0

    set a [expr {0.5 * sin($alpha) / cos($alpha) ** 2}]
    set b [expr {0.5 * sin($alpha)}]

    set coords [list]

    set dx [expr {cos($alpha)/4.0}]
    for {set i -4} {$i <= 4} {incr i} {
        set x [expr {$dx * $i}]
        set y [expr {$a * $x**2 + $b}]

        set xp [expr {$xcentre + $radius * ($x * cos($beta) - $y * sin($beta))}]
        set yp [expr {$ycentre - $radius * ($x * sin($beta) + $y * cos($beta))}]

        lappend coords $xp $yp
    }

    $w create line $coords -smooth 1 -width $thickness -fill $colour -tag {circle connection}
    $w lower connection
}

# DrawHeatmapOutline --
#    Draw the outline of the heatmap - labels and rectangles
#
# Arguments:
#    w                  Name of the canvas
#    rowlabels          Labels for the rows
#    columnlabels       Labels for the columns
# Result:
#    None
#
proc ::Plotchart::DrawHeatmapOutline { w rowlabels columnlabels } {
    variable scaling
    variable data_series

    #
    # Height of the rows and width of the columns
    #
    set pxmin $scaling($w,pxmin)
    set pxmax $scaling($w,pxmax)
    set pymin $scaling($w,pymin)
    set pymax $scaling($w,pymax)

    set rowheight [expr {min( 30, ($pymax-$pymin) / [llength $rowlabels])}]
    set colwidth  [expr {min(100, ($pxmax-$pxmin) / [llength $columnlabels])}]

    set xt        [expr {$pxmin - 10}]
    set yt        [expr {$pymin - $rowheight / 2}]

    foreach label $rowlabels {
        set yt [expr {$yt + $rowheight}]
        $w create text $xt $yt -text $label -anchor e
    }

    set xt        [expr {$pxmin - $colwidth / 2}]
    set yt        [expr {$pymin - 10}]

    foreach label $columnlabels {
        set xt [expr {$xt + $colwidth}]
        $w create text $xt $yt -text $label -anchor s
    }

    set ye $pymin

    foreach row $rowlabels {
        set yb $ye
        set ye [expr {$ye + $rowheight}]

        set xe $pxmin
        foreach column $columnlabels {
            set xb $xe
            set xe [expr {$xe + $colwidth}]

            set data_series($w,$row,$column) [$w create rectangle $xb $yb $xe $ye]
        }
    }
}

# DrawHeatmapOutline --
#    Draw the outline of the heatmap - labels and rectangles
#
# Arguments:
#    w                  Name of the canvas
#    rowlabels          Labels for the rows
#    columnlabels       Labels for the columns
# Result:
#    None
#
proc ::Plotchart::DrawHeatmapOutline { w rowlabels columnlabels } {
    variable scaling
    variable data_series

    #
    # Height of the rows and width of the columns
    #
    set pxmin $scaling($w,pxmin)
    set pxmax $scaling($w,pxmax)
    set pymin $scaling($w,pymin)
    set pymax $scaling($w,pymax)

    set rowheight [expr {min( 30, ($pymax-$pymin) / [llength $rowlabels])}]
    set colwidth  [expr {min(100, ($pxmax-$pxmin) / [llength $columnlabels])}]

    set xt        [expr {$pxmin - 10}]
    set yt        [expr {$pymin - $rowheight / 2}]

    foreach label $rowlabels {
        set yt [expr {$yt + $rowheight}]
        $w create text $xt $yt -text $label -anchor e
    }

    set xt        [expr {$pxmin - $colwidth / 2}]
    set yt        [expr {$pymin - 10}]

    foreach label $columnlabels {
        set xt [expr {$xt + $colwidth}]
        $w create text $xt $yt -text $label -anchor s
    }

    set ye $pymin

    foreach row $rowlabels {
        set yb $ye
        set ye [expr {$ye + $rowheight}]

        set xe $pxmin
        foreach column $columnlabels {
            set xb $xe
            set xe [expr {$xe + $colwidth}]

            set data_series($w,$row,$column) [$w create rectangle $xb $yb $xe $ye]
        }
    }
}

# DrawHeatmapCells --
#    Fill the rectangle(s) belonging to the selected cells
#
# Arguments:
#    w                  Name of the canvas
#    selection          Type of selected cells
#    args               Arguments - the meaning is determined by "selection"
# Result:
#    None
#
proc ::Plotchart::DrawHeatmapCells { w selection args } {
    variable scaling
    variable data_series

    switch -- $selection {
        "row" {
            set rows    [list [lindex $args 0]]
            set columns $data_series($w,columnlabels)
            set values  [lindex $args 1]
        }
        "column" {
            set columns [list [lindex $args 0]]
            set rows    $data_series($w,rowlabels)
            set values  [lindex $args 1]
        }
        "cell" {
            set rows    [list [lindex $args 0]]
            set columns [list [lindex $args 1]]
            set values  [lindex $args 2]
        }
        default {
            return -code error "Unknown type of selection: $selection"
        }
    }

    set n 0
    foreach row $rows {
        foreach column $columns {
            set item   $data_series($w,$row,$column)
            set colour [HeatmapColour $data_series($w,startcolour) $data_series($w,endcolour) \
                                      $data_series($w,startvalue)  $data_series($w,endvalue)  \
                                      [lindex $values $n]]

            $w itemconfigure $item -fill $colour

            incr n
        }
    }
}

# HeatmapColour --
#    Construct the colour for a heatmap cell
#
# Arguments:
#    startcolour        RGB values for start colour
#    endcolour          RGB values for end colour
#    startvalue         Minimum value for the colour scale
#    endvalue           Maximum value for the colour scale
#    value              Actual value
# Result:
#    Colour to be used
#
proc ::Plotchart::HeatmapColour { startcolour endcolour startvalue endvalue value } {

    set value  [expr {min( $endvalue, max( $startvalue, $value))}]
    set factor [expr {$value / double($endvalue - $startvalue)}]

    set colour [list]
    foreach b $startcolour e $endcolour {
        set comp [expr {int($b * (1.0 - $factor) + $e * $factor)}]
        set comp [expr {min(635535,$comp)}]

        lappend colour $comp
    }

    return [format "#%4.4x%4.4x%4.4x" {*}$colour]
}

# ConfigHeatmapScale --
#    Set the properties of the colour scale
#
# Arguments:
#    w                  Name of the canvas
#    prop               Property (values or colours)
#    start              Minimum value for the property
#    end                Maximum value for the property
#    value              Actual value
# Result:
#    Colour to be used
#
proc ::Plotchart::ConfigHeatmapScale { w prop start end } {
    variable data_series

    switch -- $prop {
        "values" {
            set data_series($w,startvalue) $start
            set data_series($w,endvalue)   $end
        }
        "colours" {
            set data_series($w,startcolour) [winfo rgb . $start]
            set data_series($w,endcolour)   [winfo rgb . $end  ]
        }
        default {
            return -code error "Unknown type of property: $prop"
        }
    }
}
