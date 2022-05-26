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
