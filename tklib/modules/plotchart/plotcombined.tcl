# plotcombined.tcl --
#     Procedures to create combined plots/charts
#

# methods --
#     Register the methods for the combined plots/charts
#
namespace eval ::Plotchart {

     variable methodProc

     set methodProc(tableplot,title)        DrawTitle
     set methodProc(tableplot,ytext)        DrawYtext
     set methodProc(tableplot,row)          TablePlotDrawRow
     set methodProc(tableplot,dataconfig)   TablePlotDataConfig
}

# TableFillRow --
#     Fill the row
# Arguments:
#     table       Table command
#     widget      Underlying widget
#     row         Row index of the cell
#     column      Column index of the cell
#     value       Value to be shown
#
proc ::Plotchart::TableFillRow {table widget row column value} {
    variable data_series

    if { $column == 0 } {
        #
        # Draw the legend entry
        #
        foreach {w series value} $value {break}

        set coords [$table cellcoordinates]
        set xcrd   [expr {[lindex $coords 0] + 5}]
        set ycrd   [expr {([lindex $coords 1] + [lindex $coords 3])/2}]

        set colour "black"
        if { [info exists data_series($w,$series,-colour)] } {
            set colour $data_series($w,$series,-colour)
        }
        set type "line"
        if { [info exists data_series($w,$series,-type)] } {
            set type $data_series($w,$series,-type)
        }

        if { $type == "line" || $type == "both" } {
            $widget create line $xcrd $ycrd [expr {$xcrd+15}] $ycrd -fill $colour
        }

        $widget create text [expr {$xcrd+25}] $ycrd -text $value -anchor w

        if { $type == "symbol" || $type == "both" } {
            set symbol "dot"
            if { [info exists data_series($w,$series,-symbol)] } {
                set symbol $data_series($w,$series,-symbol)
            }
            DrawSymbolPixel $w $series [expr {$xcrd+7}] $ycrd $symbol $colour {}
        }

        #
        # Reset the anchor
        #
        $table cellconfigure -anchor center

        return

    } else {
        return $value
    }
}

# createTableAndPlot --
#     Create a combined plot and table
# Arguments:
#     c           Name of the canvas
#     xlabels     List of labels for the table header
#     yscale      Minimum, maximum and step for y-axis
#     noseries    Number of series (rows in the table)
#     args        List of options:
#                 -legendwidth pixels - Width for the left-most column
#                 -legendtext  text   - Text to show for "legend"
# Result:
#     Name of a new command
# Note:
#     No attention paid yet to how the options for the
#     XY-plot and the table need to be combined into
#     a single set
#     Nor to positioning it via -box or -axesbox
#
proc ::Plotchart::createTableAndPlot {c xlabels yscale noseries args} {
    variable config
    variable style
    variable scaling

    set w [NewPlotInCanvas $c]
    interp alias {} $w {} $c

    ClearPlot $w

    set newchart "tableplot_$w"
    interp alias {} $newchart {} ::Plotchart::PlotHandler tableplot $w
    CopyConfig tableplot $w

    #
    # Options
    #
    array set option {-legendwidth 100 -legendtext "Legend"}
    array set option $args

    #
    # Compute the space required by the table
    #
    set currentStyle [plotstyle current]
    set rowHeight    $style($currentStyle,table,oddrow,height)
    set tableHeight  [expr {($noseries + 1) * $rowHeight}]

    set scaling($c,reference) $c

    set margin      [expr {$option(-legendwidth) - 50}]
    set margin      [expr {$margin > 0? $margin : 0}]
    set plotWidth   [expr {[WidthCanvas $c 0]  - $margin}]
    set plotHeight  [expr {[HeightCanvas $c 0] - $tableHeight}]

    #
    # Create the two components
    #
    foreach {ymin ymax ystep} $yscale {break}
    set y       $ymin
    set ylabels [list]
    while { $y <= $ymax+0.5*$ystep } {
        set y [expr {$y + $ystep}]
        lappend ylabels $y
    }

    set config($w,xyplot) [createXYPlot .c [list 0.0 [llength $xlabels] ""] [list $ymin $ymax {}] \
            -ylabels $ylabels \
            -box [list $margin 0 $plotWidth $plotHeight]]

    foreach {xmin ymin xmax ymax tableWidth tableHeight} [$config($w,xyplot) plotarea] {break}

    set columnWidth [expr {($xmax-$xmin+1) / [llength $xlabels]}]
    set widths      [list $option(-legendwidth)]
    foreach x $xlabels {
        lappend widths $columnWidth
    }

    set config($w,table)  [createTableChart .c [concat [list $option(-legendtext)] $xlabels] $widths \
            -axesbox [list $config($w,xyplot) sw -$option(-legendwidth) 0 $tableWidth $tableHeight]]

    $config($w,table) formatcommand ::Plotchart::TableFillRow

    return $newchart
}

# TablePlotDrawRow --
#     Draw a data series and a row
# Arguments:
#     w           Name of the canvas
#     series      Data series
#     yvalues     Values to plot
#
proc ::Plotchart::TablePlotDrawRow {w series legend yvalues} {
    variable config

    set x -0.5
    foreach y $yvalues {
        set x [expr {$x + 1.0}]
        $config($w,xyplot) plot $series $x $y
    }

    $config($w,table) separator
    $config($w,table) cellconfigure -anchor right
    $config($w,table) row [concat [list [list [$config($w,xyplot) canvas] $series $legend]] $yvalues]
}

# TablePlotDataConfig --
#     Configure the data series
# Arguments:
#     w           NAme of the canvas
#     args        Arguments to configure the data series
#
proc ::Plotchart::TablePlotDataConfig {w args} {
    variable config

    $config($w,xyplot) dataconfig {*}$args
}
