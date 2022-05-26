# plotstatustimeline.tcl --
#    Facilities to draw Status Timeline charts in a dedicated canvas
#
# Note:
#    This source file contains the private functions for Status Timeline charts.
#    It is the companion of "plotchart.tcl"
#    Some functions have been derived from the similar time chart
#    functions.
#

namespace eval ::Plotchart {
   variable methodProc

   set methodProc(statustimeline,title)             DrawTitle
   set methodProc(statustimeline,subtitle)          DrawSubtitle
   set methodProc(statustimeline,xtext)             DrawXtext
   set methodProc(statustimeline,xsubtext)          DrawXsubtext
   set methodProc(statustimeline,ytext)             DrawYtext
   set methodProc(statustimeline,ysubtext)          DrawYsubtext
   set methodProc(statustimeline,vtext)             DrawVtext
   set methodProc(statustimeline,vsubtext)          DrawVsubtext
   set methodProc(statustimeline,plot)              DrawStatusTimelineData
   set methodProc(statustimeline,xticklines)        DrawXTicklines
   set methodProc(statustimeline,background)        BackgroundColour
   set methodProc(statustimeline,saveplot)          SavePlot
   set methodProc(statustimeline,colours)           SetColours
   set methodProc(statustimeline,colors)            SetColours
   set methodProc(statustimeline,xconfig)           XConfig
   set methodProc(statustimeline,config)            ConfigBar
   set methodProc(statustimeline,legendconfig)      LegendConfigure
   set methodProc(statustimeline,legend)            DrawLegend
   set methodProc(statustimeline,removefromlegend)  RemoveFromLegend
   set methodProc(statustimeline,balloon)           DrawBalloon
   set methodProc(statustimeline,balloonconfig)     ConfigBalloon
   set methodProc(statustimeline,plaintext)         DrawPlainText
   set methodProc(statustimeline,plaintextconfig)   ConfigPlainText
   set methodProc(statustimeline,drawobject)        DrawObject
   set methodProc(statustimeline,object)            DrawObject
   set methodProc(statustimeline,canvas)            GetCanvas
   set methodProc(statustimeline,deletedata)        DeleteData
   set methodProc(statustimeline,vertline)          DrawStatusTimelineVertLine

   namespace export createStatusTimeline
}

# createStatusTimeline --
#    Create a command for drawing a status timeline
# Arguments:
#    c           Name of the canvas
#    xscale      Minimum, maximum and step for x-axis
#    ylabels     List of labels for y-axis
#    args        (Optional) one or more options wrt the layout
# Result:
#    Name of a new command
# Note:
#    By default the entire canvas will be dedicated to the barchart.
#
proc ::Plotchart::createStatusTimeline { c xscale ylabels args } {
    variable data_series
    variable config
    variable settings
    variable scaling

    set w [NewPlotInCanvas $c]
    interp alias {} $w {} $c

    ClearPlot $w

    set newchart "statustimeline_$w"
    interp alias {} $newchart {} ::Plotchart::PlotHandler statustimeline $w
    CopyConfig horizbars $w

    set settings($w,showvalues)   0
    set settings($w,valuefont)    ""
    set settings($w,valuecolour)  black
    set settings($w,valueformat)  %s

    set font      $config($w,leftaxis,font)
    set xspacemax 0
    foreach ylabel $ylabels {
        set xspace [font measure $font $ylabel]
        if { $xspace > $xspacemax } {
            set xspacemax $xspace
        }
    }
    set config($w,margin,left) [expr {$xspacemax+5}] ;# Slightly more space required!

    foreach {pxmin pymin pxmax pymax} [MarginsRectangle $w $args] {break}

    set scaling($w,coordSystem) 0

    set ymin [expr {1.0 - $config($w,bar,barwidth)/2.0 - $config($w,bar,innermargin)}]
    set ymax [expr {[llength $ylabels] + $config($w,bar,barwidth)/2.0 + $config($w,bar,innermargin)}]

    set scaling($w,current) $ymax
    set scaling($w,dy)      -$config($w,bar,barwidth)

    foreach {xmin xmax xdelt} $xscale {break}

    if { $xdelt == 0.0 } {
        return -code error "Step size can not be zero"
    }

    if { ($xmax-$xmin)*$xdelt < 0.0 } {
        set xdelt [expr {-$xdelt}]
    }

    viewPort         $w $pxmin $pymin $pxmax $pymax
    worldCoordinates $w $xmin  $ymin  $xmax  $ymax
    set drawaxis 1
    if {[set idx [lsearch $args -xaxis]] >= 0} {
      set drawaxis [string is true [lindex $args $idx+1]]
    }
    if {$drawaxis} {
      DrawXaxis        $w $xmin  $xmax  $xdelt
    }
    DrawYlabels      $w $ylabels stacked
    DrawMask         $w
    DefaultLegend    $w
    set data_series($w,legendtype) "rectangle"
    DefaultBalloon   $w

    SetColours $w blue lightblue green yellow orange red magenta brown

    #
    # Take care of the compatibility for coordsToPixel and friends
    #
    CopyScalingData $w $c

    return $newchart
}

# DrawHorizBarData --
#    Draw the horizontal bars
# Arguments:
#    w           Name of the canvas
#    series      Data series
#    start       Start period
#    end         End Period
#    colour      The colour to use
# Result:
#    None
# Side effects:
#    Data bars drawn in canvas
#
proc ::Plotchart::DrawStatusTimelineData { w series time_begin time_end {colour black}} {
   variable data_series
   variable scaling

   if {![info exists data_series($w,$series)]} {
     #
     # Draw the text first
     #
     set ytext [expr {$scaling($w,current)+0.5*$scaling($w,dy)}]
     set ytopp $scaling($w,current)
     set ybott [expr {$scaling($w,current)+$scaling($w,dy)}]
     foreach {x y} [coordsToPixel $w $scaling($w,xmin) $ytext] {break}

     #$w create text 5 $y -text $series -anchor w \
     #   -tags [list vertscroll above item_[expr {int($scaling($w,current))}]]
     set item item_[expr {int($scaling($w,current))}]
     set data_series($w,$series) [list $ytext $ytopp $ybott $item]
   } else {
     foreach {ytext ytopp ybott item} $data_series($w,$series) break
     foreach {x y} [coordsToPixel $w $scaling($w,xmin) $ytext] {break}
   }

   #
   # Draw the bar to indicate the period
   #
   if {[string is double $time_begin]} {
     set xmin  $time_begin
   } else {
     set xmin  [clock scan $time_begin]
   }
   if {[string is double $time_end]} {
     set xmax $time_end
   } else {
     set xmax  [clock scan $time_end]
   }

   foreach {x1 y1} [coordsToPixel $w $xmin $ytopp] {break}
   foreach {x2 y2} [coordsToPixel $w $xmax $ybott              ] {break}
   $w create rectangle $x1 $y1 $x2 $y2 -fill $colour \
       -tags [list $w vertscroll horizscroll below $item]

   ReorderChartItems $w

   set scaling($w,current) [expr {$scaling($w,current)-1.0}]

   RescaleChart $w
}

# DrawTimeVertLine --
#    Draw a vertical line with a label
# Arguments:
#    w           Name of the canvas
#    text        Text to identify the line
#    time        Time for which the line is drawn
# Result:
#    None
# Side effects:
#    Line drawn in canvas
#
proc ::Plotchart::DrawStatusTimelineVertLine { w text time args} {
   variable data_series
   variable scaling

   #
   # Draw the text first
   #
   if {![string is double $time]} {
     set xtime [clock scan $time]
   } else {
    set xtime $time
   }
   #
   # Draw the line
   #
   foreach {x1 y1} [coordsToPixel $w $xtime $scaling($w,ymin)] {break}
   foreach {x2 y2} [coordsToPixel $w $xtime $scaling($w,ymax)] {break}

   $w create line $x1 $y1 $x2 $y2 {*}$args -tags [list $w horizscroll timeline tline]
   $w create text $x1 [expr {$y1+10}] -text $text -anchor n -tags [list $w horizscroll timeline]


   $w raise topmask
}
