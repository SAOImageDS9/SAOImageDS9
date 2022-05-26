# plotaxis.tcl --
#    Facilities to draw simple plots in a dedicated canvas
#
# Note:
#    This source file contains the functions for drawing the axes
#    and the legend. It is the companion of "plotchart.tcl"
#

# FormatNumber --
#    Format a number (either as double or as integer)
# Arguments:
#    format      Format string
#    number      Number to be formatted
# Result:
#    String containing the formatted number
# Note:
#    This procedure tries to format the string as a double first,
#    but to allow formats like %x, it also tries it that way.
#
proc ::Plotchart::FormatNumber { format number } {

    if { [catch {
        set string [format $format $number]
    } msg1] } {
        if { [catch {
            set string [format $format [expr {int($number)}]]
        } msg2] } {
            set string [format $format $number] ;# To get the original message
        }
    }

    return $string
}

# Ceil, Floor --
#     Compute ceil and floor in an absolute sense
#
# Arguments:
#     value      Extreme value to "round"
#     step       Step to use for rounding
#
proc ::Plotchart::Floor {value step} {

    if { $step eq "" } {
        return $value
    }

    if { $value > 0.0 } {
        set result [expr {floor(($value+0.0)/$step) * $step}]
    } else {
        set result [expr {ceil(($value+0.0)/$step) * $step}]
    }

    return $result
}
proc ::Plotchart::Ceil {value step} {

    if { $step eq "" } {
        return $value
    }

    if { $value > 0.0 } {
        set result [expr {ceil(($value+0.0)/$step) * $step}]
    } else {
        set result [expr {floor(($value+0.0)/$step) * $step}]
    }

    return $result
}

# DrawYaxis --
#    Draw the y-axis
# Arguments:
#    w           Name of the canvas
#    ymin        Minimum y coordinate
#    ymax        Maximum y coordinate
#    ystep       Step size
#    args        Options (currently: -ylabels list and -altylabels list)
# Result:
#    None
# Side effects:
#    Axis drawn in canvas
#
proc ::Plotchart::DrawYaxis { w ymin ymax ydelt args} {
    variable scaling
    variable config

    set scaling($w,ydelt) $ydelt

    $w delete "yaxis && $w"

    set linecolor    $config($w,leftaxis,color)
    set textcolor    $config($w,leftaxis,textcolor)
    set textfont     $config($w,leftaxis,font)
    set ticklength   $config($w,leftaxis,ticklength)
    set thickness    $config($w,leftaxis,thickness)
    set labeloffset  $config($w,leftaxis,labeloffset)
    set offtick      [expr {($ticklength > 0)? $ticklength+$labeloffset : $labeloffset}]

    if { $config($w,leftaxis,showaxle) } {
        $w create line $scaling($w,pxmin) $scaling($w,pymin) \
                       $scaling($w,pxmin) $scaling($w,pymax) \
                       -fill $linecolor -tag [list yaxis $w] -width $thickness
    }

    set format $config($w,leftaxis,format)
    if { [info exists scaling($w,-format,y)] } {
        set format $scaling($w,-format,y)
    }

    if { $ymax > $ymin } {
        set y  [Ceil $ymin $ydelt]
        set ym [Floor $ymax $ydelt]
        set yt $y
    } else {
        set y  [Floor $ymax $ydelt]
        set ym [Ceil $ymin $ydelt]
        set yt $ym
    }

    set scaling($w,yaxis) {}

    set ys      {}
    set yts     {}
    set ybackup {}
    set numeric 1

    if { $ydelt eq {} } {

        foreach {arg val} $args {
            switch -exact -- $arg {
                -ylabels {
                    set ys $val
                    set ydbackup [expr {($scaling($w,ymax)-$scaling($w,ymin))/([llength $val]-1.0)}]
                    set yb       $scaling($w,ymin)

                    foreach yval $val {
                        if { [string is double $yval] } {
                            lappend yts [expr {$yval+0.0}]
                        } else {
                            set numeric 0
                            lappend yts $yval
                        }
                        lappend ybackup $yb
                        set     yb      [expr {$yb + $ydbackup}]
                    }

                    set scaling($w,ydelt) $ys
                }
                -altylabels {
                    set numeric 0
                    foreach {yval ylabel} $val {
                        lappend yts     $ylabel
                        lappend ybackup $yval
                    }

                    set scaling($w,ydelt) $ylabel
                }
                default {
                    error "Argument $arg not recognized"
                }
            }
        }
    } else {
        set scaling($w,ydelt) $ydelt
        while { $y < $ym+0.0001*abs($ydelt) } {
            lappend ys $y
            lappend yts $yt
            set y  [expr {$y+abs($ydelt)}]
            set yt [expr {$yt+$ydelt}]
            if { abs($y) < 0.5*abs($ydelt) } {
                set yt 0.0
            }
        }
        set dyminor [expr {$ydelt/($config($w,leftaxis,minorticks)+1.0)}]
    }

    foreach y $ys yt $yts yb $ybackup {

        if { $numeric } {
            foreach {xcrd ycrd} [coordsToPixel $w $scaling($w,xmin) $yt] {break}
        } else {
            foreach {xcrd ycrd} [coordsToPixel $w $scaling($w,xmin) $yb] {break}
        }
        set xcrd2 [expr {$xcrd-$ticklength}]
        set xcrd3 [expr {$xcrd-$offtick}]

        if { $ycrd >= $scaling($w,pymin)-1 && $ycrd <= $scaling($w,pymax)+1 } {
            lappend scaling($w,yaxis) $ycrd

            #
            # Use the default format %.12g - this is equivalent to setting
            # tcl_precision to 12 - to solve overly precise labels in Tcl 8.5
            #
            if { [string is double $yt] } {
                set ylabel [format "%.12g" $yt]
                if { $format != "" } {
                    set ylabel [FormatNumber $format $y]
                }
            } else {
                set ylabel $yt
            }
            $w create line $xcrd2 $ycrd $xcrd $ycrd -tag [list yaxis $w] -fill $linecolor

            if { $config($w,leftaxis,shownumbers) } {
                $w create text $xcrd3 $ycrd -text $ylabel -tag [list yaxis $w label] -anchor e \
                    -fill $textcolor -font $textfont
            }

            if { $ydelt != {} && $numeric && $yt < $ym } {
                for {set i 1} {$i <= $config($w,leftaxis,minorticks)} {incr i} {
                    set xcrd4  [expr {$xcrd-$ticklength*0.6}]
                    set yminor [expr {$yt  + $i * $dyminor}]
                    foreach {xcrd ycrd4} [coordsToPixel $w $scaling($w,xmin) $yminor] {break}
                    $w create line $xcrd4 $ycrd4 $xcrd $ycrd4 -tag [list yaxis $w] -fill $linecolor
                }
            }
        }
    }
}

# DrawRightaxis --
#    Draw the y-axis on the right-hand side
# Arguments:
#    w           Name of the canvas
#    ymin        Minimum y coordinate
#    ymax        Maximum y coordinate
#    ystep       Step size
#    args        Options (currently: -ylabels list)
# Result:
#    None
# Side effects:
#    Axis drawn in canvas
#
proc ::Plotchart::DrawRightaxis { w ymin ymax ydelt args } {
    variable scaling
    variable config

    set scaling($w,ydelt) $ydelt

    $w delete "raxis && $w"

    set linecolor    $config($w,rightaxis,color)
    set textcolor    $config($w,rightaxis,textcolor)
    set textfont     $config($w,rightaxis,font)
    set thickness    $config($w,rightaxis,thickness)
    set ticklength   $config($w,rightaxis,ticklength)
    set labeloffset  $config($w,leftaxis,labeloffset)
    set offtick      [expr {($ticklength > 0)? $ticklength+$labeloffset : $labeloffset}]

    if { $config($w,rightaxis,showaxle) } {
        $w create line $scaling($w,pxmax) $scaling($w,pymin) \
                       $scaling($w,pxmax) $scaling($w,pymax) \
                       -fill $linecolor -tag [list raxis $w] -width $thickness
    }

    set format $config($w,rightaxis,format)
    if { [info exists scaling($w,-format,y)] } {
        set format $scaling($w,-format,y)
    }

    if { $ymax > $ymin } {
        set y  [Ceil $ymin $ydelt]
        set ym [Floor $ymax $ydelt]
        set yt $y
    } else {
        set y  [Floor $ymax $ydelt]
        set ym [Ceil $ymin $ydelt]
        set yt $ym
    }

    set scaling($w,yaxis) {}

    set ys       {}
    set yts      {}
    set ybackup  {}
    set numeric  1

    if { $ydelt eq {} } {

        foreach {arg val} $args {
            switch -exact -- $arg {
                -ylabels {
                    set ys $val
                    set ydbackup [expr {($scaling($w,ymax)-$scaling($w,ymin))/([llength $val]-1.0)}]
                    set yb       $scaling($w,ymin)

                    foreach yval $val {
                        if { [string is double $yval] } {
                            lappend yts [expr {$yval+0.0}]
                        } else {
                            set numeric 0
                            lappend yts $yval
                        }
                        lappend ybackup $yb
                        set     yb      [expr {$yb + $ydbackup}]
                    }

                    set scaling($w,ydelt) $ys
                }
                default {
                    error "Argument $arg not recognized"
                }
            }
        }
    } else {
        set scaling($w,ydelt) $ydelt
        while { $y < $ym+0.0001*abs($ydelt) } {
            lappend ys $y
            lappend yts $yt
            set y  [expr {$y+abs($ydelt)}]
            set yt [expr {$yt+$ydelt}]
            if { abs($y) < 0.5*abs($ydelt) } {
                set yt 0.0
            }
        }
        set dyminor [expr {$ydelt/($config($w,rightaxis,minorticks)+1.0)}]
    }


    foreach y $ys yt $yts yb $ybackup {

        if { $numeric } {
            foreach {xcrd ycrd} [coordsToPixel $w $scaling($w,xmax) $yt] {break}
        } else {
            foreach {xcrd ycrd} [coordsToPixel $w $scaling($w,xmax) $yb] {break}
        }
        set xcrd2 [expr {$xcrd+$ticklength}]
        set xcrd3 [expr {$xcrd+$offtick}]

        if { $ycrd >= $scaling($w,pymin)-1 && $ycrd <= $scaling($w,pymax)+1 } {
            lappend scaling($w,yaxis) $ycrd

            #
            # Use the default format %.12g - this is equivalent to setting
            # tcl_precision to 12 - to solve overly precise labels in Tcl 8.5
            #
            if { [string is double $yt] } {
                set ylabel [format "%.12g" $yt]
                if { $format != "" } {
                    set ylabel [FormatNumber $format $y]
                }
            } else {
                set ylabel $yt
            }
            $w create line $xcrd2 $ycrd $xcrd $ycrd -tag [list raxis $w] -fill $linecolor

            if { $config($w,leftaxis,shownumbers) } {
                $w create text $xcrd3 $ycrd -text $ylabel -tag [list raxis $w label] -anchor w \
                    -fill $textcolor -font $textfont
            }

            if { $ydelt != {} && $numeric && $yt < $ym } {
                for {set i 1} {$i <= $config($w,rightaxis,minorticks)} {incr i} {
                    set xcrd4  [expr {$xcrd+$ticklength*0.6}]
                    set yminor [expr {$yt  + $i * $dyminor}]
                    foreach {xcrd ycrd4} [coordsToPixel $w $scaling($w,xmax) $yminor] {break}
                    $w create line $xcrd4 $ycrd4 $xcrd $ycrd4 -tag [list raxis $w] -fill $linecolor
                }
            }
        }
    }
}

# DrawLogYaxis --
#    Draw the logarithmic y-axis
# Arguments:
#    w           Name of the canvas
#    ymin        Minimum y coordinate
#    ymax        Maximum y coordinate
#    ystep       Step size
# Result:
#    None
# Side effects:
#    Axis drawn in canvas
#
proc ::Plotchart::DrawLogYaxis { w ymin ymax ydelt } {
    variable scaling
    variable config

    set scaling($w,ydelt) $ydelt

    $w delete "yaxis && $w"

    set linecolor    $config($w,leftaxis,color)
    set textcolor    $config($w,leftaxis,textcolor)
    set textfont     $config($w,leftaxis,font)
    set thickness    $config($w,leftaxis,thickness)
    set ticklength   $config($w,leftaxis,ticklength)
    set labeloffset  $config($w,leftaxis,labeloffset)
    set offtick      [expr {($ticklength > 0)? $ticklength+$labeloffset : $labeloffset}]

    if { $config($w,leftaxis,showaxle) } {
        $w create line $scaling($w,pxmin) $scaling($w,pymin) \
                       $scaling($w,pxmin) $scaling($w,pymax) \
                       -fill $linecolor -tag [list yaxis $w] -width $thickness
    }

    set format $config($w,leftaxis,format)
    if { [info exists scaling($w,-format,y)] } {
        set format $scaling($w,-format,y)
    }

    set scaling($w,yaxis) {}

    set y       [expr {pow(10.0,floor(log10($ymin)))}]
    set ylogmax [expr {pow(10.0,ceil(log10($ymax)))+0.1}]

    while { $y < $ylogmax } {

        #
        # Labels and tickmarks
        #
        foreach factor {1.0 2.0 3.0 4.0 5.0 6.0 7.0 8.0 9.0} {
            set yt [expr {$y*$factor}]
            if { $yt < $ymin } continue
            if { $yt > $ymax } break

            foreach {xcrd ycrd} [coordsToPixel $w $scaling($w,xmin) [expr {log10($yt)}]] {break}
            set xcrd2 [expr {$xcrd-$ticklength}]
            set xcrd3 [expr {$xcrd-$offtick}]

            lappend scaling($w,yaxis) $ycrd

            #
            # Use the default format %.12g - this is equivalent to setting
            # tcl_precision to 12 - to solve overly precise labels in Tcl 8.5
            #
            set ylabel [format "%.12g" $y]
            if { $format != "" } {
                set ylabel [FormatNumber $format $y]
            }
            $w create line $xcrd2 $ycrd $xcrd $ycrd -tag yaxis -fill $linecolor
            if { $factor == 1.0 && $config($w,leftaxis,showaxle) } {
                $w create text $xcrd3 $ycrd -text $ylabel -tag [list yaxis $w] -anchor e \
                    -fill $textcolor -font $textfont
            }
        }
        set y [expr {10.0*$y}]
    }

    set scaling($w,ydelt) $ydelt
}

# DrawXaxis --
#    Draw the x-axis
# Arguments:
#    w           Name of the canvas
#    xmin        Minimum x coordinate
#    xmax        Maximum x coordinate
#    xstep       Step size
#    args        Options (currently: -xlabels list)
# Result:
#    None
# Side effects:
#    Axis drawn in canvas
#
proc ::Plotchart::DrawXaxis { w xmin xmax xdelt args } {
    variable scaling
    variable config

    $w delete "xaxis && $w"

    set linecolor    $config($w,bottomaxis,color)
    set textcolor    $config($w,bottomaxis,textcolor)
    set textfont     $config($w,bottomaxis,font)
    set thickness    $config($w,bottomaxis,thickness)
    set ticklength   $config($w,bottomaxis,ticklength)
    set labeloffset  $config($w,leftaxis,labeloffset)
    set offtick      [expr {($ticklength > 0)? $ticklength+$labeloffset : $labeloffset}]

    if { $config($w,bottomaxis,showaxle) } {
        $w create line $scaling($w,pxmin) $scaling($w,pymax) \
                       $scaling($w,pxmax) $scaling($w,pymax) \
                       -fill $linecolor -tag [list xaxis $w] -width $thickness
    }

    set format $config($w,bottomaxis,format)
    if { [info exists scaling($w,-format,x)] } {
        set format $scaling($w,-format,x)
    }

    if { $xmax > $xmin } {
        set x  [Ceil $xmin $xdelt]
        set xm [Floor $xmax $xdelt]
        set xt $x
    } else {
        set x  [Floor $xmax $xdelt]
        set xm [Ceil $xmin $xdelt]
        set xt $xm
    }

    set scaling($w,xaxis) {}

    set xs      {}
    set xts     {}
    set xbackup {}
    set numeric 1
    set gmt     0

    if { $xdelt eq {} } {
        set numeric 1

        foreach {arg val} $args {
            switch -exact -- $arg {
                -xlabels {
                    set xs       $val
                    set xdbackup [expr {($scaling($w,xmax)-$scaling($w,xmin))/([llength $val]-1.0)}]
                    set xb       $scaling($w,xmin)

                    foreach xval $val {
                        if { [string is double $xval] } {
                            lappend xts [expr {$xval+0.0}]
                        } else {
                            set numeric 0
                            lappend xts $xval
                        }
                        lappend xbackup $xb
                        set     xb      [expr {$xb + $xdbackup}]
                    }

                    set scaling($w,xdelt) $xs

                }
                default {
                    error "Argument $arg not recognized or incorrectly used"
                }
            }
        }
    } else {
        set scaling($w,xdelt) $xdelt
        while { $x < $xm+0.5*abs($xdelt) } {
            lappend xs       $x
            lappend xts      $xt
            lappend xbackup  $xt
            set x  [expr {$x+abs($xdelt)}]
            set xt [expr {$xt+$xdelt}]
            if { abs($x) < 0.5*abs($xdelt) } {
                set xt 0.0
            }
        }
        set dxminor [expr {$xdelt/($config($w,bottomaxis,minorticks)+1.0)}]

        foreach {arg val} $args {
            switch -exact -- $arg {
                -timeformat {
                    # Format the axis labels via [clock format]
                    set numeric    2
                    set timeformat $val
                    set scaling($w,xdelt) $xdelt
                }
                -gmt {
                    set gmt $val
                }
            }
        }
    }

    foreach x $xs xt $xts xb $xbackup {

        if { $numeric > 0 } {
            foreach {xcrd ycrd} [coordsToPixel $w $xt $scaling($w,ymin)] {break}
        } else {
            foreach {xcrd ycrd} [coordsToPixel $w $xb $scaling($w,ymin)] {break}
        }
        set ycrd2 [expr {$ycrd+$ticklength}]
        set ycrd3 [expr {$ycrd+$offtick}]

        if { $xcrd >= $scaling($w,pxmin)-1 && $xcrd <= $scaling($w,pxmax)+1 } {
            lappend scaling($w,xaxis) $xcrd

            #
            # Use the default format %.12g - this is equivalent to setting
            # tcl_precision to 12 - to solve overly precise labels in Tcl 8.5
            #
            if { [string is double $xt] } {
                if { $numeric == 1 } {
                    set xlabel [format "%.12g" $xt]
                    if { $format != "" } {
                        set xlabel [FormatNumber $format $xt]
                    }
                } else {
                    set xlabel [clock format [expr {int($xt)}] -format $timeformat -gmt $gmt]
                }
            } else {
                set xlabel $xt
            }

            $w create line $xcrd $ycrd2 $xcrd $ycrd -tag [list xaxis $w] -fill $linecolor

            if { $config($w,bottomaxis,shownumbers) } {
                $w create text $xcrd $ycrd3 -text $xlabel -tag [list xaxis $w label] -anchor n \
                     -fill $textcolor -font $textfont
            }

            if { $xdelt != {} && $numeric && $xt < $xm } {
                for {set i 1} {$i <= $config($w,bottomaxis,minorticks)} {incr i} {
                    set ycrd4  [expr {$ycrd+$ticklength*0.6}]
                    set xminor [expr {$xt  + $i * $dxminor}]
                    foreach {xcrd4 ycrd} [coordsToPixel $w $xminor $scaling($w,ymin)] {break}
                    $w create line $xcrd4 $ycrd4 $xcrd4 $ycrd -tag [list xaxis $w] -fill $linecolor
                }
            }
        }
    }
}

# DrawLogXaxis --
#    Draw the logarithmic x-axis
# Arguments:
#    w           Name of the canvas
#    xmin        Minimum x coordinate
#    xmax        Maximum x coordinate
#    xstep       Step size
#    args        Options (currently: -xlabels list)
# Result:
#    None
# Side effects:
#    Axis drawn in canvas
#
proc ::Plotchart::DrawLogXaxis { w xmin xmax xdelt args } {
    variable scaling
    variable config

    $w delete "xaxis && $w"

    set linecolor    $config($w,bottomaxis,color)
    set textcolor    $config($w,bottomaxis,textcolor)
    set textfont     $config($w,bottomaxis,font)
    set thickness    $config($w,bottomaxis,thickness)
    set ticklength   $config($w,bottomaxis,ticklength)
    set labeloffset  $config($w,leftaxis,labeloffset)
    set offtick      [expr {($ticklength > 0)? $ticklength+$labeloffset : $labeloffset}]

    if { $config($w,bottomaxis,showaxle) } {
        $w create line $scaling($w,pxmin) $scaling($w,pymax) \
                       $scaling($w,pxmax) $scaling($w,pymax) \
                       -fill $linecolor -tag [list xaxis $w] -width $thickness
    }

    set format $config($w,bottomaxis,format)
    if { [info exists scaling($w,-format,x)] } {
        set format $scaling($w,-format,x)
    }

    set scaling($w,xaxis) {}

    set x       [expr {pow(10.0,floor(log10($xmin)))}]
    set xlogmax [expr {pow(10.0,ceil(log10($xmax)))+0.1}]

    while { $x < $xlogmax } {
        #
        # Labels and tickmarks
        #
        foreach factor {1.0 2.0 3.0 4.0 5.0 6.0 7.0 8.0 9.0} {
            set xt [expr {$x*$factor}]
            if { $xt < $xmin } continue
            if { $xt > $xmax } break

            foreach {xcrd ycrd} [coordsToPixel $w [expr {log10($xt)}] $scaling($w,ymin)] {break}
            set ycrd2 [expr {$ycrd+$ticklength}]
            set ycrd3 [expr {$ycrd+$offtick}]

            if {($xcrd >= $scaling($w,pxmin)) && ($xcrd <= $scaling($w,pxmax))} {
                lappend scaling($w,xaxis) $xcrd

                #
                # Use the default format %.12g - this is equivalent to setting
                # tcl_precision to 12 - to solve overly precise labels in Tcl 8.5
                #
                set xlabel [format "%.12g" $xt]
                if { $format != "" } {
                    set xlabel [FormatNumber $format $xt]
                }
                $w create line $xcrd $ycrd2 $xcrd $ycrd -tag [list xaxis $w] -fill $linecolor
                if { $factor == 1.0 && $config($w,bottomaxis,shownumbers) } {
                    $w create text $xcrd $ycrd3 -text $xlabel -tag [list xaxis $w] -anchor n \
                        -fill $textcolor -font $textfont
                }
            }
        }
        set x [expr {10.0*$x}]
    }

    set scaling($w,xdelt) $xdelt
}

# DrawTernaryAxes --
#    Draw the three axes of a ternary diagram
# Arguments:
#    w           Name of the canvas
#    xmin        Minimum axis coordinate
#    xmax        Maximum axis coordinate
#    xstep       Step size
# Result:
#    None
# Side effects:
#    Two axes drawn in canvas
#
proc ::Plotchart::DrawTernaryAxes { w xmin xmax xdelt } {
    variable scaling
    variable config

    $w delete "ternaryaxis && $w"

    set linecolor    $config($w,axis,color)
    set textcolor    $config($w,axis,textcolor)
    set textfont     $config($w,axis,font)
    set ticklength   $config($w,axis,ticklength)
    set thickness    $config($w,axis,thickness)
    set labeloffset  $config($w,axis,labeloffset)
    set offtick      [expr {($ticklength > 0)? $ticklength+$labeloffset : $labeloffset}]

    if { $config($w,axis,showaxle) } {
        $w create line [expr {($scaling($w,pxmin)+$scaling($w,pxmax))/2.0}] $scaling($w,pymin) \
                       $scaling($w,pxmin) $scaling($w,pymax) \
                       -fill $linecolor -tag [list ternaryaxis $w] -width $thickness
        $w create line [expr {($scaling($w,pxmin)+$scaling($w,pxmax))/2.0}] $scaling($w,pymin) \
                       $scaling($w,pxmax) $scaling($w,pymax) \
                       -fill $linecolor -tag [list ternaryaxis $w] -width $thickness
        $w create line $scaling($w,pxmin) $scaling($w,pymax) $scaling($w,pxmax) $scaling($w,pymax) \
                       -fill $linecolor -tag [list ternaryaxis $w] -width $thickness
    }

    set format $config($w,axis,format)

    if { $xmax > $xmin } {
        set x  [Ceil $xmin $xdelt]
        set xm [Floor $xmax $xdelt]
        set xt $x
    } else {
        set x  [Floor $xmax $xdelt]
        set xm [Ceil $xmin $xdelt]
        set xt $xm
    }

    set scaling($w,axis) {}

    set xs      {}
    set xts     {}
    set xbackup {}

    set scaling($w,ternarydelt) $xdelt
    while { $x < $xm+0.0001*abs($xdelt) } {
        lappend xs $x
        lappend xts $xt
        set x  [expr {$x+abs($xdelt)}]
        set xt [expr {$xt+$xdelt}]
        if { abs($x) < 0.5*abs($xdelt) } {
            set xt 0.0
        }
    }
    set dxminor [expr {$xdelt/($config($w,axis,minorticks)+1.0)}]

    foreach x $xs xt $xts xb $xbackup {

        foreach {xcrdl ycrdl} [coordsToPixel $w [expr {$scaling($w,ternarymax)-$xt}] 0.0 $xt] {break}
        foreach {xcrdr ycrdr} [coordsToPixel $w 0.0 [expr {$scaling($w,ternarymax)-$xt}] $xt] {break}
        foreach {xcrdb ycrdb} [coordsToPixel $w $xt [expr {$scaling($w,ternarymax)-$xt}] 0.0] {break}

        set xcrdl2 [expr {$xcrdl-$ticklength}]
        set xcrdl3 [expr {$xcrdl-$offtick}]
        set xcrdr2 [expr {$xcrdr+$ticklength}]
        set xcrdr3 [expr {$xcrdr+$offtick}]
        set ycrdb2 [expr {$ycrdb+$ticklength}]
        set ycrdb3 [expr {$ycrdb+$offtick}]

        if { $ycrdl >= $scaling($w,pymin)-1 && $ycrdl <= $scaling($w,pymax)+1 } {
            lappend scaling($w,ternaryaxis) $xt

            #
            # Use the default format %.12g - this is equivalent to setting
            # tcl_precision to 12 - to solve overly precise labels in Tcl 8.5
            #
            set ylabell [format "%.12g" $xt]
            set ylabelr [format "%.12g" [expr {$scaling($w,ternarymax)-$xt}]]
            set xlabelb [format "%.12g" $xt]
            if { $format != "" } {
                 set ylabell [FormatNumber $format $xt]
                 set ylabelr [FormatNumber $format [expr {$scaling($w,ternarymax)-$xt}]]
                 set xlabelb [FormatNumber $format $xt]
            }
            $w create line $xcrdl2 $ycrdl  $xcrdl $ycrdl -tag [list ternaryaxis $w] -fill $linecolor
            $w create line $xcrdr2 $ycrdr  $xcrdr $ycrdr -tag [list ternaryaxis $w] -fill $linecolor
            $w create line $xcrdb  $ycrdb2 $xcrdb $ycrdb -tag [list ternaryaxis $w] -fill $linecolor

            if { $config($w,axis,shownumbers) } {
                $w create text $xcrdl3 $ycrdl -text $ylabell -tag [list ternaryaxis $w] -anchor e \
                    -fill $textcolor -font $textfont
                $w create text $xcrdr3 $ycrdr -text $ylabelr -tag [list ternaryaxis $w] -anchor w \
                    -fill $textcolor -font $textfont
                $w create text $xcrdb $ycrdb3 -text $xlabelb -tag [list ternaryaxis $w] -anchor n \
                    -fill $textcolor -font $textfont
            }

            if { $xdelt != {} && $xt < $xm } {
                for {set i 1} {$i <= $config($w,axis,minorticks)} {incr i} {
                    set yminor [expr {$xt  + $i * $dxminor}]
                    foreach {xcrdl  ycrd4} [coordsToPixel $w [expr {$scaling($w,ternarymax)-$yminor}] 0.0 $yminor] {break}
                    foreach {xcrdr  ycrd4} [coordsToPixel $w 0.0 [expr {$scaling($w,ternarymax)-$yminor}] $yminor] {break}
                    foreach {xcrdb4 ycrdb} [coordsToPixel $w [expr {$scaling($w,ternarymax)-$yminor}] $yminor 0.0] {break}
                    set xcrdl4 [expr {$xcrdl-$ticklength*0.6}]
                    set xcrdr4 [expr {$xcrdr+$ticklength*0.6}]
                    set ycrdb4 [expr {$ycrdb+$ticklength*0.6}]
                    $w create line $xcrdl4 $ycrd4  $xcrdl  $ycrd4 -tag [list ternaryaxis $w] -fill $linecolor
                    $w create line $xcrdr4 $ycrd4  $xcrdr  $ycrd4 -tag [list ternaryaxis $w] -fill $linecolor
                    $w create line $xcrdb4 $ycrdb4 $xcrdb4 $ycrdb -tag [list ternaryaxis $w] -fill $linecolor
                }
            }
        }
    }
}

# DrawXtext --
#    Draw text to the x-axis
# Arguments:
#    w           Name of the canvas
#    args        Text to be drawn (more than one argument if rendering in on)
# Result:
#    None
# Side effects:
#    Text drawn in canvas
#
proc ::Plotchart::DrawXtext { w args } {
    variable scaling
    variable config

    set textcolor  $config($w,bottomaxis,textcolor)
    set textfont   $config($w,bottomaxis,font)

    set xt [expr {($scaling($w,pxmin)+$scaling($w,pxmax))/2}]
    set yt [expr {$scaling($w,pymax)+$config($w,font,char_height)+4}]

    $w delete "xtext && $w"
    if {$config($w,bottomaxis,render) eq "simple"} {
        $w create text $xt $yt -text [lindex $args 0] -fill $textcolor -anchor n -font $textfont -tags [list xtext $w]
    } elseif {$config($w,bottomaxis,render) eq "text"} {
        RenderText $w $xt $yt -text $args -anchor n -font $textfont -tags [list xtext $w] \
           -fill $textcolor
    }
}

# DrawXsubtext --
#    Draw subtext to the x-axis
# Arguments:
#    w           Name of the canvas
#    args        Text to be drawn (more than one argument if rendering in on)
# Result:
#    None
# Side effects:
#    Text drawn in canvas
#
proc ::Plotchart::DrawXsubtext { w args } {
    variable scaling
    variable config

    set textcolor  $config($w,bottomaxis,subtextcolor)
    set textfont   $config($w,bottomaxis,subtextfont)

    set char_height [font metrics $textfont -linespace]

    set xt [expr {($scaling($w,pxmin)+$scaling($w,pxmax))/2}]
    set yt [expr {$scaling($w,pymax)+2*$char_height+4}]

    $w delete "xsubtext && $w"
    if {$config($w,bottomaxis,render) eq "simple"} {
        $w create text $xt $yt -text [lindex $args 0] -fill $textcolor -anchor n -font $textfont -tags [list xsubtext $w]
    } elseif {$config($w,bottomaxis,render) eq "text"} {
        RenderText $w $xt $yt -text $args -anchor n -font $textfont -tags [list xsubtext $w] \
           -fill $textcolor
    }
}

# DrawYtext --
#    Draw text to the y-axis
# Arguments:
#    w           Name of the canvas
#    text        Text to be drawn
# Result:
#    None
# Side effects:
#    Text drawn in canvas
#
proc ::Plotchart::DrawYtext { w text } {
    variable scaling
    variable config


    if { [string match "r*" $w] == 0 } {
        set textcolor  $config($w,leftaxis,textcolor)
        set textfont   $config($w,leftaxis,font)
        set xt         $scaling($w,pxmin)
        set anchor     se
        set usesubtext $config($w,leftaxis,usesubtext)
    } else {
        set textcolor  $config($w,rightaxis,textcolor)
        set textfont   $config($w,rightaxis,font)
        set xt $scaling($w,pxmax)
        set anchor     sw
        set usesubtext $config($w,rightaxis,usesubtext)
    }

    if { $usesubtext } {
        set char_height [font metrics $textfont -linespace]
        set yt [expr {$scaling($w,pymin)-$config($w,font,char_height)/2 - $char_height}]
    } else {
        set yt [expr {$scaling($w,pymin)-$config($w,font,char_height)/2}]
    }

    $w delete "ytext && $w"
    $w create text $xt $yt -text $text -fill $textcolor -anchor $anchor -font $textfont -tags [list ytext $w]
}

# DrawYsubtext --
#    Draw subtext to the y-axis
# Arguments:
#    w           Name of the canvas
#    text        Text to be drawn
# Result:
#    None
# Side effects:
#    Text drawn in canvas
#
proc ::Plotchart::DrawYsubtext { w text } {
    variable scaling
    variable config

    if { [string match "r*" $w] == 0 } {
        set textcolor  $config($w,leftaxis,subtextcolor)
        set textfont   $config($w,leftaxis,subtextfont)
        set xt         $scaling($w,pxmin)
        set anchor     se
    } else {
        set textcolor  $config($w,rightaxis,subtextcolor)
        set textfont   $config($w,rightaxis,subtextfont)
        set xt $scaling($w,pxmax)
        set anchor     sw
    }

    set char_height [font metrics $textfont -linespace]

    set yt [expr {$scaling($w,pymin)-$char_height/2+4}]

    $w delete "ysubtext && $w"
    $w create text $xt $yt -text $text -fill $textcolor -anchor $anchor -font $textfont -tags [list ysubtext $w]
}

# DrawVtext --
#    Draw vertical text to the y-axis
# Arguments:
#    w           Name of the canvas
#    text        Text to be drawn
# Result:
#    None
# Side effects:
#    Text drawn in canvas
# Note:
#    This requires Tk 8.6 or later
#
proc ::Plotchart::DrawVtext { w text } {
    variable scaling
    variable config

    if { [package vsatisfies [package present Tk] 8.6] } {

        set yt [expr {($scaling($w,pymin) + $scaling($w,pymax)) / 2}]

        if { [string match "r*" $w] } {
            set anchor n
            set bbox   [$w bbox "raxis && $w"]
            set tag    "rvtext"
            set axis   "rightaxis"
            set xt   [expr {[lindex $bbox 2] + $config($w,rightaxis,vtextoffset)}]
        } else {
            set anchor s
            set bbox [$w bbox "yaxis && $w"]
            set tag  "vtext"
            set axis "leftaxis"
            set xt   [expr {[lindex $bbox 0] - $config($w,leftaxis,vtextoffset)}]
        }

        if { $config($w,$axis,usevsubtext) } {
            set char_height [font metrics $config($w,$axis,font) -linespace]
            set xt          [expr {$xt - $char_height - 4}]
        }

        $w delete "$tag && $w"
        $w create text $xt $yt -text $text -fill black -anchor $anchor -angle 90 -tags [list $tag $w] \
            -font $config($w,$axis,font) -fill $config($w,$axis,textcolor)
    }
}

# DrawVsubtext --
#    Draw vertical subtext to the y-axis
# Arguments:
#    w           Name of the canvas
#    text        Text to be drawn
# Result:
#    None
# Side effects:
#    Text drawn in canvas
# Note:
#    This requires Tk 8.6 or later
#
proc ::Plotchart::DrawVsubtext { w text } {
    variable scaling
    variable config

    if { [package vsatisfies [package present Tk] 8.6] } {
        set yt [expr {($scaling($w,pymin) + $scaling($w,pymax)) / 2}]

        if { [string match "r*" $w] } {
            set anchor n
            set bbox   [$w bbox "raxis && $w"]
            set tag    "rvsubtext"
            set axis   "rightaxis"
            set xt   [expr {[lindex $bbox 2] + $config($w,rightaxis,vtextoffset)}]
        } else {
            set anchor s
            set bbox [$w bbox "yaxis && $w"]
            set tag  "vsubtext"
            set axis "leftaxis"
            set xt   [expr {[lindex $bbox 0] - $config($w,leftaxis,vtextoffset)}]
        }

        $w delete "$tag && $w"
        $w create text $xt $yt -text $text -fill black -anchor $anchor -angle 90 -tags [list $tag $w] \
            -font $config($w,$axis,vsubtextfont) -fill $config($w,$axis,vsubtextcolor)
    }
}

# DrawTernaryText --
#    Draw text to the corners of a ternary diagram
# Arguments:
#    w           Name of the canvas
#    xtext       Text to left corner
#    ytext       Text to right corner
#    ztext       Text to top corner
# Result:
#    None
# Side effects:
#    Text drawn in canvas
#
proc ::Plotchart::DrawTernaryText { w xtext ytext ztext } {
    variable scaling
    variable config

    set textcolor  $config($w,bottomaxis,textcolor)
    set textfont   $config($w,bottomaxis,font)

    set xl [expr {$scaling($w,pxmin) - 5}]
    set yl [expr {$scaling($w,pymax) - 10}]
    set xr [expr {$scaling($w,pxmax) + 5}]
    set yr [expr {$scaling($w,pymax) - 10}]
    set xt [expr {($scaling($w,pxmin)+$scaling($w,pxmax))/2.0 - 5}]
    set yt [expr {$scaling($w,pymin) - 5}]

    $w delete "ternarytext && $w"

    $w create text $xl $yl -text $xtext -tags [list ternarytext $w] -font $config($w,text,font) -fill $config($w,text,textcolor) -anchor se
    $w create text $xr $yr -text $ytext -tags [list ternarytext $w] -font $config($w,text,font) -fill $config($w,text,textcolor) -anchor sw
    $w create text $xt $yt -text $ztext -tags [list ternarytext $w] -font $config($w,text,font) -fill $config($w,text,textcolor) -anchor s
}

# DrawPolarAxes --
#    Draw thw two polar axes
# Arguments:
#    w           Name of the canvas
#    rad_max     Maximum radius
#    rad_step    Step in radius
# Result:
#    None
# Side effects:
#    Axes drawn in canvas
#
proc ::Plotchart::DrawPolarAxes { w rad_max rad_step } {
    variable config

    set linecolor  $config($w,axis,color)
    set textcolor  $config($w,axis,textcolor)
    set textfont   $config($w,axis,font)
    set thickness  $config($w,axis,thickness)
    set bgcolor    $config($w,background,innercolor)

    #
    # Draw the spikes
    #
    set angle 0.0

    foreach {xcentre ycentre} [PolarToPixelPriv $w 0.0 0.0] {break}

    while { $angle < 360.0 } {
        foreach {xcrd ycrd} [PolarToPixelPriv $w $rad_max $angle] {break}
        foreach {xtxt ytxt} [PolarToPixelPriv $w [expr {1.05*$rad_max}] $angle] {break}
        $w create line $xcentre $ycentre $xcrd $ycrd -fill $linecolor -width $thickness
        if { $xcrd > $xcentre } {
            set dir w
        } else {
            set dir e
        }
        if { $config($w,axis,shownumbers) } {
            $w create text $xtxt $ytxt -text $angle -anchor $dir -fill $textcolor -font $textfont -tags [list polar $w]
        }
        set angle [expr {$angle+30}]
    }

    #
    # Draw the concentric circles
    #
    set rad $rad_step

    while { $rad < $rad_max+0.5*$rad_step } {
        foreach {xright ytxt}    [PolarToPixelPriv $w $rad    0.0] {break}
        foreach {xleft  ycrd}    [PolarToPixelPriv $w $rad  180.0] {break}
        foreach {xcrd   ytop}    [PolarToPixelPriv $w $rad   90.0] {break}
        foreach {xcrd   ybottom} [PolarToPixelPriv $w $rad  270.0] {break}

        set oval [$w create oval $xleft $ytop $xright $ybottom -outline $linecolor -width $thickness -fill {} \
                     -tags [list polar $w]]
        $w lower $oval

        if { $config($w,axis,shownumbers) } {
            $w create text $xright [expr {$ytxt+3}] -text $rad -anchor n -fill $textcolor -font $textfont -tags [list polar $w]
        }

        set rad [expr {$rad+$rad_step}]
    }
}

# DrawXlabels --
#    Draw the labels to an x-axis (barchart)
# Arguments:
#    w           Name of the canvas
#    xlabels     List of labels
#    noseries    Number of series or "stacked"
#    arguments   Options (key-value pairs). Currently: -xlabelangles $angle
# Result:
#    None
# Side effects:
#    Axis drawn in canvas
#
proc ::Plotchart::DrawXlabels { w xlabels noseries arguments} {
    variable scaling
    variable config

    set linecolor  $config($w,bottomaxis,color)
    set textcolor  $config($w,bottomaxis,textcolor)
    set textfont   $config($w,bottomaxis,font)
    set thickness  $config($w,bottomaxis,thickness)

    $w delete "xaxis && $w"

    $w create line $scaling($w,pxmin) $scaling($w,pymax) \
                   $scaling($w,pxmax) $scaling($w,pymax) \
                   -fill $linecolor -width $thickness -tag [list xaxis $w]

    set angle  0
    set anchor n
    foreach {key value} $arguments {
        switch -- $key {
            "-xlabelangle" {
                 set angle $value
                 if { $angle > 0 } {
                     set anchor ne
                 }
                 if { $angle < 0 } {
                     set anchor nw
                 }
            }
        }
    }
    if { ! [package vsatisfies [package present Tk] 8.6] } {
        set angle {}
    }

    if { $noseries eq "stacked" } {
        set x 1.0
    } else {
        set x 1.0
        #set x [expr {0.5 + int($noseries)/(2.0*$noseries)}]
    }
    set scaling($w,ybase) {}
    foreach label $xlabels {
        foreach {xcrd ycrd} [coordsToPixel $w $x $scaling($w,ymin)] {break}
        set ycrd [expr {$ycrd+2}]
        if { $angle == {} } {
            $w create text $xcrd $ycrd -text $label -tag [list xaxis $w] -anchor n \
                -fill $textcolor -font $textfont
        } else {
            $w create text $xcrd $ycrd -text $label -tag [list xaxis $w] -anchor $anchor -angle $angle \
                -fill $textcolor -font $textfont
        }
        set x [expr {$x+1.0}]

        lappend scaling($w,ybase) 0.0
    }

    if { $noseries != "stacked" } {
        set scaling($w,stacked)  0
        set scaling($w,xshift)   [expr {$config($w,bar,barwidth)/$noseries}]
        set scaling($w,barwidth) [expr {$config($w,bar,barwidth)/$noseries}]
        set scaling($w,xbase)    [expr {1.0 - $config($w,bar,barwidth)/2.0}]
    } else {
        set scaling($w,stacked)  1
        set scaling($w,xshift)   0.0
        set scaling($w,barwidth) $config($w,bar,barwidth)
        set scaling($w,xbase)    [expr {1.0 - $config($w,bar,barwidth)/2.0}]
    }
}

# DrawYlabels --
#    Draw the labels to a y-axis (barchart)
# Arguments:
#    w           Name of the canvas
#    ylabels     List of labels
#    noseries    Number of series or "stacked"
# Result:
#    None
# Side effects:
#    Axis drawn in canvas
#
proc ::Plotchart::DrawYlabels { w ylabels noseries } {
    variable scaling
    variable config

    set linecolor  $config($w,leftaxis,color)
    set textcolor  $config($w,leftaxis,textcolor)
    set textfont   $config($w,leftaxis,font)
    set thickness  $config($w,leftaxis,thickness)

    $w delete "yaxis && $w"

    $w create line $scaling($w,pxmin) $scaling($w,pymin) \
                   $scaling($w,pxmin) $scaling($w,pymax) \
                   -fill $linecolor -width $thickness -tag [list yaxis $w]

    if { $noseries != "stacked" } {
        set y 1.0
        #set y [expr {0.5 + int($noseries)/(2.0*$noseries)}]
    }  else {
        set y 1.0
    }
    set scaling($w,xbase) {}
    foreach label $ylabels {
        foreach {xcrd ycrd} [coordsToPixel $w $scaling($w,xmin) $y] {break}
        set xcrd [expr {$xcrd-2}]
        $w create text $xcrd $ycrd -text $label -tag [list yaxis $w] -anchor e \
            -fill $textcolor -font $textfont
        set y [expr {$y+1.0}]

        lappend scaling($w,xbase) 0.0
    }

    if { $noseries != "stacked" } {
        set scaling($w,stacked)  0
        set scaling($w,yshift)   [expr {$config($w,bar,barwidth)/$noseries}]
        set scaling($w,barwidth) [expr {$config($w,bar,barwidth)/$noseries}]
        set scaling($w,ybase)    [expr {1.0 - $config($w,bar,barwidth)/2.0}]
    } else {
        set scaling($w,stacked)  1
        set scaling($w,yshift)   0.0
        set scaling($w,barwidth) $config($w,bar,barwidth)
        set scaling($w,ybase)    [expr {1.0 - $config($w,bar,barwidth)/2.0}]
    }
}

# XConfig --
#    Configure the x-axis for an XY plot
# Arguments:
#    w           Name of the canvas
#    args        Option and value pairs
# Result:
#    None
#
proc ::Plotchart::XConfig { w args } {
    AxisConfig xyplot $w x DrawXaxis $args
}

# TConfig --
#    Configure the time-axis for an TX plot
# Arguments:
#    w           Name of the canvas
#    args        Option and value pairs
# Result:
#    None
#
proc ::Plotchart::TConfig { w args } {
    AxisConfig txplot $w x DrawTimeaxis $args
}

# YConfig --
#    Configure the y-axis for an XY plot
# Arguments:
#    w           Name of the canvas
#    args        Option and value pairs
# Result:
#    None
#
proc ::Plotchart::YConfig { w args } {
    if { ! [string match "r*" $w] } {
        AxisConfig xyplot $w y DrawYaxis $args
    } else {
        AxisConfig xyplot $w y DrawRightaxis $args
    }
}

# LogXConfig, ... --
#    Configure the x-axis for an logX-Y, X-logY or logX-logY plot
# Arguments:
#    w           Name of the canvas
#    args        Option and value pairs
# Result:
#    None
#
proc ::Plotchart::XConfigLogXY { w args } {
    AxisConfig logxyplot $w x DrawLogXaxis $args
}

proc ::Plotchart::XConfigXLogY { w args } {
    AxisConfig xlogyplot $w x DrawXaxis $args
}

proc ::Plotchart::XConfigLogXLogY { w args } {
    AxisConfig logxlogyplot $w x DrawLogXaxis $args
}

# LogYConfig --
#    Configure the y-axis for an X-logY, X-logY or logX-logY plot
# Arguments:
#    w           Name of the canvas
#    args        Option and value pairs
# Result:
#    None
#
proc ::Plotchart::YConfigLogXY { w args } {
    if { ! [string match "r*" $w] } {
        AxisConfig logxyplot $w y DrawYaxis $args
    } else {
        #
        # TODO: this is not supported yet
        #
        AxisConfig xyplot $w y DrawRightaxis $args
    }
}

proc ::Plotchart::YConfigXLogY { w args } {
    if { ! [string match "r*" $w] } {
        AxisConfig xlogyplot $w y DrawLogYaxis $args
    } else {
        #
        # TODO: this is not supported yet
        #
        AxisConfig xyplot $w y DrawRightaxis $args
    }
}

proc ::Plotchart::YConfigLogXLogY { w args } {
    if { ! [string match "r*" $w] } {
        AxisConfig logxlogyplot $w y DrawLogYaxis $args
    } else {
        #
        # TODO: this is not supported yet
        #
        AxisConfig xyplot $w y DrawRightaxis $args
    }
}

# AxisConfig --
#    Configure an axis and redraw it if necessary
# Arguments:
#    plottype       Type of plot
#    w              Name of the canvas
#    orient         Orientation of the axis
#    drawmethod     Drawing method
#    option_values  Option/value pairs
# Result:
#    None
#
# Note:
#    Merge the old configuration system with the new
#
proc ::Plotchart::AxisConfig { plottype w orient drawmethod option_values } {
    variable config
    variable scaling
    variable axis_options
    variable axis_option_clear
    variable axis_option_values
    variable axis_option_config

    set clear_data 0

    foreach {option value} $option_values {
        set idx [lsearch $axis_options $option]
        if { $idx < 0 } {
            return -code error "Unknown or invalid option: $option (value: $value)"
        } else {
            set clear_data [lindex  $axis_option_clear  $idx]
            set values     [lindex  $axis_option_values [expr {2*$idx+1}]]
            set isconfig   [lindex  $axis_option_config $idx]
            if { $values != "..." } {
                if { [lsearch $values $value] < 0 } {
                    return -code error "Unknown or invalid value: $value for option $option - $values"
                }
            }
            if { $isconfig } {
                if { $orient == "x" } {
                    set axis bottomaxis
                }
                if { $orient == "y" } {
                    set axis leftaxis
                }
                set config($w,$axis,[string range $option 1 end]) $value
            } else {
                set scaling($w,$option,$orient) $value
            }
            if { $option == "-scale" } {
                set min  ${orient}min
                set max  ${orient}max
                set delt ${orient}delt
                foreach [list $min $max $delt] $value {break}
                #checker exclude warnVarRef
                set scaling($w,$min)  [set $min]
                #checker exclude warnVarRef
                set scaling($w,$max)  [set $max]
                #checker exclude warnVarRef
                set scaling($w,$delt) [set $delt]
            }
        }
    }

    if { $clear_data }  {
        $w delete data
    }

    set xmin $scaling($w,xmin)
    set xmax $scaling($w,xmax)
    set ymin $scaling($w,ymin)
    set ymax $scaling($w,ymax)

    switch -- $plottype {
        "logxyplot" {
            set xmin [expr {pow(10.0,$scaling($w,xmin))}]
            set xmax [expr {pow(10.0,$scaling($w,xmax))}]
        }
        "xlogyplot" {
            set ymin [expr {pow(10.0,$scaling($w,ymin))}]
            set ymax [expr {pow(10.0,$scaling($w,ymax))}]
        }
        "logxlogyplot" {
            set xmin [expr {pow(10.0,$scaling($w,xmin))}]
            set xmax [expr {pow(10.0,$scaling($w,xmax))}]
            set ymin [expr {pow(10.0,$scaling($w,ymin))}]
            set ymax [expr {pow(10.0,$scaling($w,ymax))}]
        }
    }

    set originalSystem $scaling($w,coordSystem)
    set scaling($w,coordSystem) 0

    worldCoordinates $w $xmin $ymin $xmax $ymax

    if { $orient == "x" } {
        if { [llength $scaling($w,xdelt)] == 1 } {
            #$drawmethod $w $scaling($w,xmin) $scaling($w,xmax) $scaling($w,xdelt)
            $drawmethod $w $xmin $xmax $scaling($w,xdelt)
        } else {
            #$drawmethod $w $scaling($w,xmin) $scaling($w,xmax) {} -xlabels $scaling($w,xdelt)
            $drawmethod $w $xmin $xmax {} -xlabels $scaling($w,xdelt)
        }
    }
    if { $orient == "y" } {
        if { [llength $scaling($w,ydelt)] == 1 } {
            #$drawmethod $w $scaling($w,ymin) $scaling($w,ymax) $scaling($w,ydelt)
            $drawmethod $w $ymin $ymax $scaling($w,ydelt)
        } else {
            #$drawmethod $w $scaling($w,ymin) $scaling($w,ymax) {} -ylabels $scaling($w,ydelt)
            $drawmethod $w $ymin $ymax {} -ylabels $scaling($w,ydelt)
        }
    }
    if { $orient == "z" } {
        $drawmethod $w $scaling($w,zmin) $scaling($w,zmax) $scaling($w,zdelt)
    }

    set scaling($w,coordSystem) $originalSystem
}

# DrawXTicklines --
#    Draw the ticklines for the x-axis
# Arguments:
#    w           Name of the canvas
#    colour      Colour of the ticklines
#    dash        Dash pattern
# Result:
#    None
#
proc ::Plotchart::DrawXTicklines { w {colour black} {dash lines}} {
    DrawTicklines $w x $colour $dash
}

# DrawYTicklines --
#    Draw the ticklines for the y-axis
# Arguments:
#    w           Name of the canvas
#    colour      Colour of the ticklines
#    dash        Dash pattern
# Result:
#    None
#
proc ::Plotchart::DrawYTicklines { w {colour black} {dash lines}} {
    DrawTicklines $w y $colour $dash
}

# DrawTicklines --
#    Draw the ticklines
# Arguments:
#    w           Name of the canvas
#    axis        Which axis (x or y)
#    colour      Colour of the ticklines
#    dash        Dash pattern
# Result:
#    None
#
proc ::Plotchart::DrawTicklines { w axis colour dash } {
    variable scaling
    variable pattern

    if { ! [info exists pattern($dash)] } {
        set dash "lines"
    }

    if { $axis == "x" } {
        #
        # Cater for both regular x-axes and time-axes
        #
        if { [info exists scaling($w,xaxis)] } {
            set botaxis xaxis
        } else {
            set botaxis taxis
        }
        $w delete [list xtickline && $w]
        if { $colour != {} } {
            foreach x $scaling($w,$botaxis) {
                $w create line $x $scaling($w,pymin) \
                               $x $scaling($w,pymax) \
                               -fill $colour -tag [list xtickline $w] \
                               -dash $pattern($dash)
            }
        }
    } else {
        $w delete [list ytickline && $w]
        if { $colour != {} } {
            foreach y $scaling($w,yaxis) {
                $w create line $scaling($w,pxmin) $y \
                               $scaling($w,pxmax) $y \
                               -fill $colour -tag [list ytickline $w] \
                               -dash $pattern($dash)
            }
        }
    }
    $w raise [list xaxis && $w]
    $w raise [list yaxis && $w]
    $w raise [list raxis && r$w]
    $w raise legendbg
    $w raise legend
}

# DrawTernaryTicklines --
#    Draw the ticklines in a ternary diagram
# Arguments:
#    w           Name of the canvas
#    axis        Which axis (x or y)
#    colour      Colour of the ticklines (optional)
#    dash        Dash pattern (optional)
# Result:
#    None
#
proc ::Plotchart::DrawTernaryTicklines { w axis {colour grey} {dash lines} } {
    variable scaling
    variable pattern

    if { ! [info exists pattern($dash)] } {
        set dash "lines"
    }

    $w delete [list ternarytickline && $w]

    if { $colour != {} } {
        foreach v $scaling($w,ternaryaxis) {
            foreach {pxcrdl pycrdh} [coordsToPixel $w [expr {$scaling($w,ternarymax)-$v}] 0.0 $v]  {break}
            foreach {pxcrdr pycrdh} [coordsToPixel $w 0.0 [expr {$scaling($w,ternarymax)-$v}] $v]  {break}
            foreach {pxcrdb pycrdb} [coordsToPixel $w $v  [expr {$scaling($w,ternarymax)-$v}] 0.0] {break}
            foreach {pxcrdi pycrdb} [coordsToPixel $w [expr {$scaling($w,ternarymax)-$v}] $v  0.0] {break}

            $w create line $pxcrdl $pycrdh $pxcrdr $pycrdh \
                           -fill $colour -tag [list ternarytickline $w] \
                           -dash $pattern($dash)
            $w create line $pxcrdl $pycrdh $pxcrdi $pycrdb \
                           -fill $colour -tag [list ternarytickline $w] \
                           -dash $pattern($dash)
            $w create line $pxcrdr $pycrdh $pxcrdb $pycrdb \
                           -fill $colour -tag [list ternarytickline $w] \
                           -dash $pattern($dash)
        }
    }

    $w raise [list ternaryaxis && $w]
    $w raise legendbg
    $w raise legend
}

# DefaultLegend --
#    Set all legend options to default
# Arguments:
#    w              Name of the canvas
# Result:
#    None
#
proc ::Plotchart::DefaultLegend { w } {
    variable legend
    variable config

    set legend($w,background) $config($w,legend,background)
    set legend($w,border)     $config($w,legend,border)
    set legend($w,canvas)     $w
    set legend($w,position)   $config($w,legend,position)
    set legend($w,series)     ""
    set legend($w,text)       ""
    set legend($w,move)       0
    set legend($w,spacing)    10

    $w bind legendobj <ButtonPress-1>   [list ::Plotchart::LegendAnchor $w %x %y]
    $w bind legendobj <Motion>          [list ::Plotchart::LegendMove   $w %x %y]
    $w bind legendobj <ButtonRelease-1> [list ::Plotchart::LegendRelease $w]
}

# LegendConfigure --
#    Configure the legend
# Arguments:
#    w              Name of the canvas
#    args           Key-value pairs
# Result:
#    None
#
proc ::Plotchart::LegendConfigure { w args } {
    variable legend

    foreach {option value} $args {
        switch -- $option {
            "-background" {
                 set legend($w,background) $value
            }
            "-border" {
                 set legend($w,border) $value
            }
            "-canvas" {
                 set legend($w,canvas) $value
            }
            "-position" {
                 if { [lsearch {top-left top-right bottom-left bottom-right} $value] >= 0 } {
                     set legend($w,position) $value
                 } else {
                     return -code error "Unknown or invalid position: $value"
                 }
            }
            "-font" {
                set legend($w,font) $value
            }
            "-legendtype" {
                set legend($w,legendtype) $value
            }
            "-spacing" {
                set legend($w,spacing) $value
            }
            default {
                return -code error "Unknown or invalid option: $option (value: $value)"
            }
        }
    }
}

# DrawLegend --
#    Draw or extend the legend - add the item and draw
# Arguments:
#    w              Name of the canvas
#    series         For which series?
#    text           Text to be shown
#    spacing        (Optionally) spacing between entries
# Result:
#    None
#
proc ::Plotchart::DrawLegend { w series text {spacing {}}} {
    variable legend

    if { [string match r* $w] } {
        set w [string range $w 1 end]
    }

    # Append only if new item - not in list already
    if { [lsearch -exact $legend($w,series) $series] < 0 } {
        lappend legend($w,series) $series
        lappend legend($w,text)   $text
    }

    ActuallyDrawLegend $w $spacing
}

# RemoveFromLegend --
#    Remove an item from the legend and redraw it
# Arguments:
#    w              Name of the canvas
#    series         For which series?
# Result:
#    None
#
proc ::Plotchart::RemoveFromLegend { w series } {
    variable legend
    variable scaling

    if { [string match r* $w] } {
        set w [string range $w 1 end]
    }

    #
    # Remove item from list
    #
    set indx [lsearch -exact $legend($w,series) $series]
    set legend($w,series) [lreplace $legend($w,series) $indx $indx]
    set legend($w,text)   [lreplace $legend($w,text) $indx $indx]

    ActuallyDrawLegend $w
}

# ActuallyDrawLegend --
#    Actually draw the legend
# Arguments:
#    w              Name of the canvas
#    spacing        (Optionally) spacing between entries
# Result:
#    None
#
proc ::Plotchart::ActuallyDrawLegend { w {spacing {}}} {
    variable legend
    variable scaling
    variable data_series

    if { [string match r* $w] } {
        set w [string range $w 1 end]
    }

    set legendw               $legend($w,canvas)

    $legendw delete "legend   && $w"
    $legendw delete "legendbg && $w"

    set y          0
    set hasEntries 0
    foreach series $legend($w,series) text $legend($w,text) {

        set hasEntries 1

        set colour "black"
        if { [info exists data_series($w,$series,-colour)] } {
            set colour $data_series($w,$series,-colour)
        }
        set type "line"
        if { [info exists data_series($w,$series,-type)] } {
            set type $data_series($w,$series,-type)
        }
        if { [info exists data_series($w,legendtype)] } {
            set type $data_series($w,legendtype)
        }
        if {[info exists legend($w,legendtype)]} {
            set type $legend($w,legendtype)
        }
        set width 1
        if { [info exists data_series($w,$series,-width)] } {
            set width $data_series($w,$series,-width)
        }
        set font TkTextFont
        if {[info exists legend($w,font)]} {
            set font $legend($w,font)
        }
        if {[info exists legend($w,spacing)] && $spacing == {}} {
            set spacing $legend($w,spacing)
        }
        #
        # Store this setting
        #
        if { $spacing != {} } {
            set legend($w,spacing) $spacing
        }

        # TODO: line or rectangle!

        if { $type != "rectangle" } {
            if { $type == "line" || $type == "both" } {
                $legendw create line 0 $y 15 $y -fill $colour -tag [list legend legendobj $w] -width $width
            }

            if { $type == "symbol" || $type == "both" } {
                set symbol "dot"
                if { [info exists data_series($w,$series,-symbol)] } {
                    set symbol $data_series($w,$series,-symbol)
                }
                DrawSymbolPixel $legendw $series 7 $y $symbol $colour [list legend legendobj legend_$series $w]
            }
        } else {
            $legendw create rectangle 0 [expr {$y-3}] 15 [expr {$y+3}] \
                -fill $colour -tag [list legend legendobj legend_$series $w]
        }

        $legendw create text 25 $y -text $text -anchor w -tag [list legend legendobj legend_$series $w] -font $font

        set y [expr {$y + $spacing}]   ;# TODO: size of font!
    }

    #
    # Now the frame and the background, but only if we do have any legend entries
    #
    if { ! $hasEntries } {
        return
    }

    foreach {xl yt xr yb} [$legendw bbox "legend && $w"] {break}

    set xl [expr {$xl-2}]
    set xr [expr {$xr+2}]
    set yt [expr {$yt-2}]
    set yb [expr {$yb+2}]

    $legendw create rectangle $xl $yt $xr $yb -fill $legend($w,background) \
        -outline $legend($w,border) -tag [list legendbg legendobj $w]

    $legendw raise legend

    if { $w == $legendw } {
        switch -- $legend($w,position) {
            "top-left" {
                 set dx [expr { 10+$scaling($w,pxmin)-$xl}]
                 set dy [expr { 10+$scaling($w,pymin)-$yt}]
            }
            "top-right" {
                 set dx [expr {-10+$scaling($w,pxmax)-$xr}]
                 set dy [expr { 10+$scaling($w,pymin)-$yt}]
            }
            "bottom-left" {
                 set dx [expr { 10+$scaling($w,pxmin)-$xl}]
                 set dy [expr {-10+$scaling($w,pymax)-$yb}]
            }
            "bottom-right" {
                 set dx [expr {-10+$scaling($w,pxmax)-$xr}]
                 set dy [expr {-10+$scaling($w,pymax)-$yb}]
            }
        }
    } else {
        set dx 10
        set dy 10
    }

    $legendw move "legend   && $w" $dx $dy
    $legendw move "legendbg && $w" $dx $dy
}

# LegendAnchor --
#    Record the coordinates of the button press -
#    for moving the legend
# Arguments:
#    w           Name of the canvas
#    x           X-coordinate
#    y           Y-coordinate
# Result:
#    None
# Side effects:
#    X and Y stored
#
proc ::Plotchart::LegendAnchor { w x y } {
    variable legend

    set legend($w,move)    1
    set legend($w,xbutton) $x
    set legend($w,ybutton) $y
}

# LegendRelease --
#    Release the legend - it no longer moves
# Arguments:
#    w           Name of the canvas
# Result:
#    None
#
proc ::Plotchart::LegendRelease { w } {
    variable legend

    set legend($w,move)    0
}

# LegendMove --
#    Move the legend objects
# Arguments:
#    w           Name of the canvas
#    x           X-coordinate
#    y           Y-coordinate
# Result:
#    None
# Side effects:
#    Legend moved
#
proc ::Plotchart::LegendMove { w x y } {
    variable legend

    if { $legend($w,move) } {
        set dx [expr {$x - $legend($w,xbutton)}]
        set dy [expr {$y - $legend($w,ybutton)}]

        $w move legendobj $dx $dy

        set legend($w,xbutton) $x
        set legend($w,ybutton) $y
    }
}

# DrawTimeaxis --
#    Draw the date/time-axis
# Arguments:
#    w           Name of the canvas
#    tmin        Minimum date/time
#    tmax        Maximum date/time
#    tstep       Step size in days
# Result:
#    None
# Side effects:
#    Axis drawn in canvas
#
proc ::Plotchart::DrawTimeaxis { w tmin tmax tdelt } {
    variable scaling
    variable config

    set linecolor  $config($w,bottomaxis,color)
    set textcolor  $config($w,bottomaxis,textcolor)
    set textfont   $config($w,bottomaxis,font)
    set thickness  $config($w,bottomaxis,thickness)
    set ticklength $config($w,bottomaxis,ticklength)
    set justify    $config($w,bottomaxis,justify)
    set offtick    [expr {($ticklength > 0)? $ticklength+2 : 2}]

   #set scaling($w,tdelt) $tdelt
    set scaling($w,xdelt) $tdelt

    $w delete "taxis && $w"

    $w create line $scaling($w,pxmin) $scaling($w,pymax) \
                   $scaling($w,pxmax) $scaling($w,pymax) \
                   -fill $linecolor -width $thickness -tag [list taxis $w]

    set format $config($w,bottomaxis,format)
    if { [info exists scaling($w,-format,x)] } {
        set format $scaling($w,-format,x)
    }

    if { ! [string is double -strict $tmin] } {
        set ttmin  [clock scan $tmin]
        set ttmax  [clock scan $tmax]
    } else {
        set ttmin $tmin
        set ttmax $tmax
    }

    set t      [expr {int($ttmin)}]
    set ttdelt [expr {$tdelt*86400.0}]

    set scaling($w,taxis) {}

    while { $t <= $ttmax } {

        foreach {xcrd ycrd} [coordsToPixel $w $t $scaling($w,ymin)] {break}
        set ycrd2 [expr {$ycrd+$ticklength}]
        set ycrd3 [expr {$ycrd+$offtick}]

        lappend scaling($w,taxis) $xcrd

        if { $format != "" } {
            set tlabel [clock format $t -format $format]
        } else {
            set tlabel [clock format $t -format "%Y-%m-%d"]
        }
        $w create line $xcrd $ycrd2 $xcrd $ycrd -tag [list taxis $w] -fill $linecolor
        $w create text $xcrd $ycrd3 -text $tlabel -tag [list taxis $w] -anchor n \
            -fill $textcolor -font $textfont -justify $justify
        set t [expr {int($t+$ttdelt)}]
    }

   #set scaling($w,tdelt) $tdelt
    set scaling($w,xdelt) $tdelt
}

# RescalePlot --
#    Partly redraw the XY plot to allow for new axes
# Arguments:
#    w           Name of the canvas
#    xscale      New minimum, maximum and step for x-axis
#    yscale      New minimum, maximum and step for y-axis
# Result:
#    None
# Side effects:
#    Axes redrawn in canvas, data scaled and moved
# Note:
#    Symbols will be scaled as well!
#
proc ::Plotchart::RescalePlot { w xscale yscale } {
    variable scaling

   foreach {xmin xmax xdelt} $xscale {break}
   foreach {ymin ymax ydelt} $yscale {break}

   if { $xdelt == 0.0 || $ydelt == 0.0 } {
      return -code error "Step size can not be zero"
   }

   if { ($xmax-$xmin)*$xdelt < 0.0 } {
      set xdelt [expr {-$xdelt}]
   }
   if { ($ymax-$ymin)*$ydelt < 0.0 } {
      set ydelt [expr {-$ydelt}]
   }

   $w delete xaxis
   $w delete yaxis

   #
   # Zoom in to the new scaling: move and scale the existing data
   #

   foreach {xb  yb}  [coordsToPixel $w  $scaling($w,xmin) $scaling($w,ymin)] {break} ;# Extreme pixels
   foreach {xe  ye}  [coordsToPixel $w  $scaling($w,xmax) $scaling($w,ymax)] {break} ;# Extreme pixels
   foreach {xnb ynb} [coordsToPixel $w  $xmin $ymin] {break} ;# Current pixels of new rectangle
   foreach {xne yne} [coordsToPixel $w  $xmax $ymax] {break}

   set fx [expr {($xe-$xb)/double($xne-$xnb)}]
   set fy [expr {($ye-$yb)/double($yne-$ynb)}]

   $w scale data $xnb $ynb $fx $fy
   $w move  data [expr {$xb-$xnb}] [expr {$yb-$ynb}]

   worldCoordinates $w $xmin  $ymin  $xmax  $ymax

   DrawYaxis        $w $ymin  $ymax  $ydelt
   DrawXaxis        $w $xmin  $xmax  $xdelt
}

# DrawRoseAxes --
#    Draw the axes to support a wind rose
# Arguments:
#    w           Name of the canvas
#    rad_max     Maximum radius
#    rad_step    Step in radius
# Result:
#    None
# Side effects:
#    Axes drawn in canvas
#
proc ::Plotchart::DrawRoseAxes { w rad_max rad_step } {

    #
    # Draw the spokes
    #
    set angle 0.0

    foreach {xcentre ycentre} [PolarToPixelPriv $w 0.0 0.0] {break}

    foreach {angle text dir} {
         90  North s
        180  West  e
        270  South n
          0  East  w } {
        foreach {xcrd ycrd} [PolarToPixelPriv $w $rad_max $angle] {break}
        foreach {xtxt ytxt} [PolarToPixelPriv $w [expr {1.05*$rad_max}] $angle] {break}
        $w create line $xcentre $ycentre $xcrd $ycrd
        $w create text $xtxt    $ytxt    -text $text -anchor $dir
    }

    #
    # Draw the concentric circles
    #
    set rad $rad_step

    while { $rad < $rad_max+0.5*$rad_step } {
        foreach {xtxt   ytxt}    [PolarToPixelPriv $w $rad   45.0] {break}
        foreach {xright ycrd}    [PolarToPixelPriv $w $rad    0.0] {break}
        foreach {xleft  ycrd}    [PolarToPixelPriv $w $rad  180.0] {break}
        foreach {xcrd   ytop}    [PolarToPixelPriv $w $rad   90.0] {break}
        foreach {xcrd   ybottom} [PolarToPixelPriv $w $rad  270.0] {break}

        $w create oval $xleft $ytop $xright $ybottom

        $w create text $xtxt [expr {$ytxt+3}] -text $rad -anchor s

        set rad [expr {$rad+$rad_step}]
    }
}

# MoveAxesToZero --
#     Move the axes to the origin of the plot if applicable
# Arguments:
#     w           Name of the canvas
#     xmin        Minimum x coordinate
#     xmax        Maximum x coordinate
#     ymin        Minimum y coordinate
#     ymax        Maximum y coordinate
# Result:
#     None
# Side effects:
#     Axles and axis labels moved
#
proc ::Plotchart::MoveAxesToZero { w xmin xmax ymin ymax } {

    #
    # Check that the move is possible
    #
    set movex 0
    set movey 0
    if { $xmin < 0.0 && $xmax > 0.0 } {
        set movey 1 ;# Note: this is correct!
    }
    if { $xmin > 0.0 && $xmax < 0.0 } {
        set movey 1
    }
    if { $ymin < 0.0 && $ymax > 0.0 } {
        set movex 1
    }
    if { $ymin > 0.0 && $ymax < 0.0 } {
        set movex 1
    }

    #
    # First move the axle and labels
    #
    lassign [coordsToPixel $w $xmin $ymin] x1 y1
    lassign [coordsToPixel $w 0.0   0.0  ] x2 y2

    if { $movex } {
        $w move "xaxis && $w" 0 [expr {$y2 - $y1}]
    }
    if { $movey } {
        $w move "yaxis && $w" [expr {$x2 - $x1}] 0
    }

    #
    # Then move the labels at the axes
    #
    # First the x-axis
    #
    if { $movex } {
        foreach id [$w find withtag "xaxis && $w && label"] {
            lassign [$w coords $id] x y
            if { $x > $x2-10 && $x < $x2+10 && $y > $y2-10 && $y < $y2+10 } {
                $w itemconfigure $id -anchor ne
                $w move $id -3 0
            }
        }
    }
    if { $movey } {
        foreach id [$w find withtag "yaxis && $w && label"] {
            lassign [$w coords $id] x y
            if { $x > $x2-10 && $x < $x2+10 && $y > $y2-10 && $y < $y2+10 } {
                $w itemconfigure $id -anchor se
            }
        }
    }

}
