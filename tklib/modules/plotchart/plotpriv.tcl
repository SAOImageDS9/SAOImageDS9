# plotpriv.tcl --
#    Facilities to draw simple plots in a dedicated canvas
#
# Note:
#    This source file contains the private functions.
#    It is the companion of "plotchart.tcl"
#
# To do:
#    The procedures DrawTimePeriod and DrawAdditionalPeriod
#    share a lot of code - add two driver procedures and
#    parameterise?
#    Similar for DrawMilestone and DrawAdditionalMilestone
#

# WidthCanvas --
#    Return the width of the canvas
# Arguments:
#    w           Name of the canvas
#    useref      Use reference width if it exists
# Result:
#    Width in pixels
#
proc ::Plotchart::WidthCanvas {w {useref 1}} {
    variable scaling

    set ref $scaling($w,reference)

    if { [string match {[0-9]*} $w] } {
        set w [string range $w [string first . $w] end]
    }

    if { [info exists scaling($ref,refwidth)] && $useref } {
        set width $scaling($ref,refwidth)
    } else {
        set width [winfo width $w]

        if { $width < 10 } {
            set width [$w cget -width]
        }
    }
    incr width -[$w cget -borderwidth]

    return $width
}

# HeightCanvas --
#    Return the height of the canvas
# Arguments:
#    w           Name of the canvas
#    useref      Use reference height if it exists
# Result:
#    Height in pixels
#
proc ::Plotchart::HeightCanvas {w {useref 1}} {
    variable scaling

    set ref $scaling($w,reference)

    if { [string match {[0-9]*} $w] } {
        set w [string range $w [string first . $w] end]
    }

    if { [info exists scaling($ref,refheight)] && $useref } {
        set height $scaling($ref,refheight)
    } else {
        set height [winfo height $w]
        if { $height < 10 } {
            set height [$w cget -height]
        }
    }
    incr height -[$w cget -borderwidth]
    return $height
}

# SavePlot --
#    Save the plot/chart to a PostScript file (using default options)
# Arguments:
#    w           Name of the canvas
#    filename    Name of the file to write
#    args        Additional optional arguments as ?option value ... ...?
#                     -format name            a file format different from PostScript to save the plot into
#                     -plotregion region      define what region of the plot to save
#                                             ('bbox' saves all within the bbox, 'window' saves what is visible in the current window)
# Result:
#    None
# Side effect:
#    A (new) PostScript file or other file format
#
proc ::Plotchart::SavePlot { w filename args } {
    array set options {-format ps -plotregion window}
    array set options $args
    foreach {opt val} $args {
        if {$opt ni {-format -plotregion}} {
            return -code error "Unknown option: $opt - must be: -format or -plotregion"
        }
    }
    if {$options(-plotregion) eq "bbox" && $options(-format) ne "ps"} {
        return -code error "'-plotregion bbox' can only be used together with '-format ps'"
    }
    if {$options(-format) ne "ps"} {
        regexp {\..*} $w c
        package require Img
        #
        # This is a kludge:
        # Somehow tkwait does not always work (on Windows XP, that is)
        #
        raise [winfo toplevel $c]
        # tkwait visibility [winfo toplevel $c]
        after 2000 {set ::Plotchart::waited 0}
        vwait ::Plotchart::waited
        set img [image create photo -data $c -format window]
        $img write $filename -format $options(-format)
    } else {
        #
        # Wait for the canvas to become visible - just in case.
        # Then write the file
        #
        update idletasks
        if {$options(-plotregion) eq "window"} {
            $w postscript -file $filename
        } elseif {$options(-plotregion) eq "bbox"} {
            lassign [$w bbox all] xmin ymin xmax ymax
            # '+2' here, because the bbox from the canvas is only approximate
            # and may be a tiny bit too small sometimes, especially with text
            # at the edges
            set width  [expr {$xmax-$xmin+2}]
            set height [expr {$ymax-$ymin+2}]
            $w postscript -file $filename -x $xmin -y $ymin -height $height -width $width
        } else {
            return -code error "Unknown value '$options(-plotregion)' for -plotregion option"
        }
    }
}

# PolarToPixelPriv --
#    Convert polar coordinates to pixel coordinates
# Arguments:
#    w           Name of the canvas
#    rad         Radius of the point
#    phi         Angle of the point (degrees)
# Result:
#    List of two elements, x- and y-coordinates in pixels
#
# Note:
#    This is the original version, to be used by the creation routines only.
#    It has been replaced by coordsToPixel for general use.
#
proc ::Plotchart::PolarToPixelPriv { w rad phi } {
   variable torad

   set xcrd [expr {$rad*cos($phi*$torad)}]
   set ycrd [expr {$rad*sin($phi*$torad)}]

   coordsToPixel $w $xcrd $ycrd
}

# DetermineFromAxesBox --
#    Determine the layout from the information in an axes box
# Arguments:
#    axesbox           Data defining the axes box
#    pxdef             Default minimum x-coordinate
#    pydef             Default minimum y-coordinate
#    margin_right      Margin right
#    margin_bottom     Margin bottom
# Result:
#    List of four values
#
proc ::Plotchart::DetermineFromAxesBox {axesbox pxdef pydef margin_right margin_bottom} {
    variable scaling

    foreach {ref_plot dir upperx uppery axis_width axis_height} $axesbox {break}

    set pos      [string first _ $ref_plot]
    set ref_plot [string range $ref_plot [expr {$pos+1}] end]

    set refxmin $scaling($ref_plot,pxmin)
    set refymin $scaling($ref_plot,pymin)
    set refxmax $scaling($ref_plot,pxmax)
    set refymax $scaling($ref_plot,pymax)

    switch -- [string toupper $dir] {
        "N" {
            set pxmin [expr {($refxmin + $refxmax)/2}]
            set pymin $refymin
        }
        "NW" {
            set pxmin $refxmin
            set pymin $refymin
        }
        "NE" {
            set pxmin $refxmax
            set pymin $refymin
        }
        "E" {
            set pxmin $refxmax
            set pymin [expr {($refymin + $refymax)/2}]
        }
        "SE" {
            set pxmin $refxmax
            set pymin $refymax
        }
        "S" {
            set pxmin [expr {($refxmin + $refxmax)/2}]
            set pymin $refymax
        }
        "SW" {
            set pxmin $refxmin
            set pymin $refymax
        }
        "W" {
            set pxmin $refxmin
            set pymin [expr {($refymin + $refymax)/2}]
        }
        "C" {
            set pxmin [expr {($refxmin + $refxmax)/2}]
            set pymin [expr {($refymin + $refymax)/2}]
        }
        default {
            set pxmin $refxmin
            set pymin $refymin
        }
    }
    set pxmin  [expr {$pxmin       - $pxdef + $upperx}]
    set pymin  [expr {$pymin       - $pydef - $uppery}]        ;# Because of inversion of y-axis
    set width  [expr {$axis_width  + $pxdef + $margin_right}]
    set height [expr {$axis_height + $pydef + $margin_bottom}]

    return [list $pxmin $pymin $width $height]
}

# MarginsRectangle --
#    Determine the margins for a rectangular plot/chart
# Arguments:
#    w           Name of the plot
#    argv        List of options
#    notext      Number of lines of text to make room for at the top
#                (default: 2.0)
#    text_width  Number of characters to be displayed at most on left
#                (default: 8)
# Result:
#    List of four values
#
proc ::Plotchart::MarginsRectangle { w argv {notext 2.0} {text_width 8}} {
    variable config
    variable scaling

    if { [string match {[0-9]*} $w] } {
        set c [string range $w 2 end]
    } else {
        set c $w
    }
    set char_width  $config(font,char_width)
    set char_height $config(font,char_height)
    set config($w,font,char_width)  $char_width
    set config($w,font,char_height) $char_height

    foreach {char_width char_height} [FontMetrics $w] {break}
    set margin_right [expr {$char_width * 4}]
    if { $margin_right < $config($w,margin,right) } {
        set margin_right $config($w,margin,right)
    }
    if { $config($w,rightaxis,usevsubtext) } {
        set char_height [font metrics $config($w,rightaxis,vsubtextfont) -linespace]
        set margin_right [expr {$margin_right + $char_height + 4}]
    }
    set margin_bottom [expr {$char_height * 2 + 2}]
    if { $margin_bottom < $config($w,margin,bottom) } {
        set margin_bottom $config($w,margin,bottom)
    }
    if { $config($w,bottomaxis,usesubtext) } {
        set char_height [font metrics $config($w,bottomaxis,subtextfont) -linespace]
        set margin_bottom [expr {$margin_bottom + $char_height}]
    }

    set config($w,margin,right)  $margin_right
    set config($w,margin,bottom) $margin_bottom

    set pxmin [expr {$char_width*$text_width}]
    if { $pxmin < $config($w,margin,left) } {
        set pxmin $config($w,margin,left)
    }
    set pymin [expr {int($char_height*$notext) + [$w cget -borderwidth]}]
    if { $pymin < $config($w,margin,top) } {
        set pymin $config($w,margin,top)
    }
    if { $config($w,leftaxis,usesubtext) || $config($w,rightaxis,usesubtext) } {
        set char_height1 [font metrics $config($w,leftaxis,subtextfont) -linespace]
        set char_height2 [font metrics $config($w,rightaxis,subtextfont) -linespace]
        set pymin [expr {$pymin + max($char_height1,$char_height2)}]
    }
    if { $config($w,leftaxis,usevsubtext) } {
        set char_height [font metrics $config($w,leftaxis,vsubtextfont) -linespace]
        set pxmin [expr {$pxmin + $char_height + 4}]
    }

    array set options $argv
    if {[info exists options(-box)]} {
        foreach {offx offy width height} $options(-box) {break}
        if { $offy == 0 } {
            set offy [$w cget -borderwidth]
        }
        set scaling($w,reference) $w
        set scaling($w,refx)      $offx
        set scaling($w,refy)      $offy
        set scaling($w,refwidth)  [expr {$offx + $width}]
        set scaling($w,refheight) [expr {$offy + $height}]
    } elseif {[info exists options(-axesbox)]} {
        foreach {offx offy width height} [DetermineFromAxesBox $options(-axesbox) $pxmin $pymin $margin_right $margin_bottom] {break}
        if { $offy == 0 } {
            set offy [$w cget -borderwidth]
        }
        set ref_plot [lindex $options(-axesbox) 0]
        set pos      [string first _ $ref_plot]
        set ref      [string range $ref_plot [expr {$pos+1}] end]
        set scaling($w,reference) $scaling($ref,reference) ;# A chain of references is possible!
    } else {
        set scaling($w,reference) $w
        set offx   0
        set offy   [$w cget -borderwidth]
        set width  [WidthCanvas $w]
        set height [HeightCanvas $w]
        set scaling($w,refx)      0
        set scaling($w,refy)      0
        set scaling($w,refwidth)  $width
        set scaling($w,refheight) $height
    }

    set pxmin [expr {$offx + $pxmin}]
    set pymin [expr {$offy + $pymin}]

    set pxmax [expr {$offx + $width  - $margin_right}]
    set pymax [expr {$offy + $height - $margin_bottom}]

    set ref $scaling($w,reference)

    if { ! [info exists scaling($ref,boxxmin)] } {
        set scaling($ref,boxxmin) $pxmin
        set scaling($ref,boxymin) $pymin
        set scaling($ref,boxxmax) $pxmax
        set scaling($ref,boxymax) $pymax
        set scaling($ref,refx)    $offx
        set scaling($ref,refy)    $offy
    } else {
        Minset scaling($ref,boxxmin) $pxmin
        Minset scaling($ref,boxymin) $pymin
        Maxset scaling($ref,boxxmax) $pxmax
        Maxset scaling($ref,boxymax) $pymax
        Minset scaling($ref,refx)    $offx
        Minset scaling($ref,refy)    $offy
    }

    return [list $pxmin $pymin $pxmax $pymax]
}

# Minset, Maxset --
#     Auxiliary procedures to conditionally update a variable
# Arguments:
#     varName    Name of the variable
#     newValue   New value
#
proc ::Plotchart::Minset {varName newValue} {
    upvar 1 $varName var

    if { $var > $newValue } {
        set var $newValue
    }
}
proc ::Plotchart::Maxset {varName newValue} {
    upvar 1 $varName var

    if { $var < $newValue } {
        set var $newValue
    }
}

# MarginsSquare --
#    Determine the margins for a square plot/chart
# Arguments:
#    w           Name of the canvas
#    notext      Number of lines of text to make room for at the top
#                (default: 2.0)
#    text_width  Number of characters to be displayed at most on left
#                (default: 8)
# Result:
#    List of four values
#
proc ::Plotchart::MarginsSquare { w {notext 2.0} {text_width 8}} {
    variable config
    variable scaling

    set scaling($w,reference) $w
    set scaling($w,refx)      0
    set scaling($w,refy)      [$w cget -borderwidth]
    set scaling($w,refwidth)  [WidthCanvas $w]
    set scaling($w,refheight) [HeightCanvas $w]

    set char_width  $config(font,char_width)
    set char_height $config(font,char_height)
    set config($w,font,char_width)  $char_width
    set config($w,font,char_height) $char_height

    foreach {char_width char_height} [FontMetrics $w] {break}
    set margin_right [expr {$char_width * 4}]
    if { $margin_right < $config($w,margin,right) } {
        set margin_right $config($w,margin,right)
    }
    set margin_bottom [expr {$char_height * 2 + 2}]
    if { $margin_bottom < $config($w,margin,bottom) } {
        set margin_bottom $config($w,margin,bottom)
    }

    set pxmin [expr {$char_width*$text_width}]
    if { $pxmin < $config($w,margin,left) } {
        set pxmin $config($w,margin,left)
    }
    set pymin [expr {int($char_height*$notext)}]
    if { $pymin < $config($w,margin,top) } {
        set pymin $config($w,margin,top)
    }
    set pxmax [expr {[WidthCanvas $w]  - $margin_right}]
    set pymax [expr {[HeightCanvas $w] - $margin_bottom}]

    if { $pxmax-$pxmin > $pymax-$pymin } {
        set pxmax [expr {$pxmin + ($pymax - $pymin)}]
    } else {
        set pymax [expr {$pymin + ($pxmax - $pxmin)}]
    }

    return [list $pxmin $pymin $pxmax $pymax]
}

# MarginsCircle --
#    Determine the margins for a circular plot/chart
# Arguments:
#    w           Name of the canvas
#    args        additional arguments for placement of plot,
#                currently: '-box', '-reference', and '-units'
# Result:
#    List of four values giving the pixel coordinates
#    of the boundary of the piechart
#
proc ::Plotchart::MarginsCircle { w args } {
   variable scaling

   array set options $args
   if { [info exists options(-box)] } {
       set scaling($w,reference) $w
   } elseif { [info exists options(-reference)] } {
       set ref_plot [lindex $options(-reference) 0]
       set pos      [string first _ $ref_plot]
       set ref      [string range $ref_plot [expr {$pos+1}] end]
       set scaling($w,reference) $scaling($ref,reference)
   } else {
       set scaling($w,reference) $w
   }

   set pxmin 80
   set pymin 30
   set pxmax [expr {[WidthCanvas $w]  - 80}]
   set pymax [expr {[HeightCanvas $w] - 30}]
   #set pxmax [expr {[$w cget -width]  - 80}]
   #set pymax [expr {[$w cget -height] - 30}]

   # width (dx) and height (dy) of plot region in pixels:
   if {[info exists options(-units)]} {
      # refUnitX, refUnitY - size of one world coordinate unit in the piechart,
      #      given as canvas coords (can also be m,c,i,p units)
      # Note: the pie is always 2 world coordinate units in diameter
      #
      lassign $options(-units) refUnitX refUnitY
      set wc [string range $w 2 end]
      set refUnitX [winfo pixels $wc $refUnitX]
      set refUnitY [winfo pixels $wc $refUnitY]
      set dx [expr {$refUnitX * 2}]
      set dy [expr {$refUnitY * 2}]
   } else {
      set dx [expr {$pxmax-$pxmin+1}]
      set dy [expr {$pymax-$pymin+1}]
      # make sure, we get a centred circle:
      if {$dx < $dy} {
          set dy $dx
      } else {
          set dx $dy
      }
      set pxmin [expr {($pxmin+$pxmax-$dx)/2}]
   }

   # new default coords of plotting region:
   set pxmax [expr {$pxmin + $dx}]
   set pymax [expr {$pymin + $dy}]

   if {[info exists options(-reference)]} {
        # refPlot - name of the plot referring to
        # refX - x world coordinate of center of new piechart in refPlot coordinate system
        # refY - see above, just for y
        #
        lassign $options(-reference) refPlot refX refY
        set pos [string first _ $refPlot]
        set refPlot [string range $refPlot [expr {$pos+1}] end]
        lassign [coordsToPixel $refPlot $refX $refY] refpx refpy
        if {$dx < $dy} {set delta [expr {$dx/2.0}]} else {set delta [expr {$dy/2.0}]}
        set pxmin [expr {$refpx - $delta}]
        set pxmax [expr {$refpx + $delta}]
        set pymin [expr {$refpy - $delta}]
        set pymax [expr {$refpy + $delta}]
   } elseif {[info exists options(-box)]} {
        # put the pie into the middle of the -box and make it
        # as large as possible, ignoring the labels for now,
        # that may be placed outside the box
        # Note: also ignores -units setting
        lassign $options(-box) pxmin pymin width height
        if {$height >= $width} {
            # place vertically in the middle of the -box
            if { $pxmin == 0 } {set pxmin [$w cget -borderwidth]}
            set pymin [expr {$pymin + ($height-$width)/2.0}]
            if { $pymin == 0 } {set pymin [$w cget -borderwidth]}
        } else {
            # place horizontally in the middle of the -box
            if { $pymin == 0 } {set pymin [$w cget -borderwidth]}
            set pxmin [expr {$pxmin + ($width-$height)/2.0}]
            if { $pxmin == 0 } {set pxmin [$w cget -borderwidth]}
        }
        # only take the smallest dimension to keep the pie a circle:
        if {$width < $height} {set height $width}
        if {$height < $width} {set width $height}
        set pxmax [expr {$pxmin + $width}]
        set pymax [expr {$pymin + $height}]

        set scaling($w,refx)      $pxmin
        set scaling($w,refy)      $pymin
        set scaling($w,refwidth)  [expr {$pxmin + $width}]
        set scaling($w,refheight) [expr {$pymin + $height}]
   } else {
        set scaling($w,refx)      0
        set scaling($w,refy)      [$w cget -borderwidth]
        set scaling($w,refwidth)  [WidthCanvas $w]
        set scaling($w,refheight) [HeightCanvas $w]
   }

   return [list $pxmin $pymin $pxmax $pymax]
}

# Margins3DPlot --
#    Determine the margins for a 3D plot
# Arguments:
#    w           Name of the canvas
# Result:
#    List of four values
#
proc ::Plotchart::Margins3DPlot { w } {
   variable scaling

   set scaling($w,reference) $w
   set scaling($w,refx)      0
   set scaling($w,refy)      [$w cget -borderwidth]
   set scaling($w,refwidth)  [WidthCanvas $w]
   set scaling($w,refheight) [HeightCanvas $w]

   set yfract 0.33
   set zfract 0.50
   if { [info exists scaling($w,yfract)] } {
      set yfract $scaling($w,yfract)
   } else {
      set scaling($w,yfract) $yfract
   }
   if { [info exists scaling($w,zfract)] } {
      set zfract $scaling($w,zfract)
   } else {
      set scaling($w,zfract) $zfract
   }

   set yzwidth  [expr {(-120+[WidthCanvas $w])/(1.0+$yfract)}]
   set yzheight [expr {(-60+[HeightCanvas $w])/(1.0+$zfract)}]
   #set yzwidth  [expr {(-120+[$w cget -width])/(1.0+$yfract)}]
   #set yzheight [expr {(-60+[$w cget -height])/(1.0+$zfract)}]

   set pxmin    [expr {60+$yfract*$yzwidth}]
   set pxmax    [expr {[WidthCanvas $w] - 60}]
   #set pxmax    [expr {[$w cget -width] - 60}]
   set pymin    30
   set pymax    [expr {30+$yzheight}]

   return [list $pxmin $pymin $pxmax $pymax]
}

# MarginsTernary --
#    Determine the margins for a ternary diagram
# Arguments:
#    w           Name of the plot
#    argv        List of options
#    notext      Number of lines of text to make room for at the top
#                (default: 2.0)
#    text_width  Number of characters to be displayed at most on left
#                (default: 8)
# Result:
#    List of four values
#
proc ::Plotchart::MarginsTernary { w argv {notext 2.0} {text_width 8}} {
    variable config

    foreach {pxmin pymin pxmax pymax} [MarginsRectangle $w $argv $notext $text_width] {break}

    #
    # Determine what the largest isosceles triangle is that fits in this rectangle
    #
    set width  [expr {$pxmax-$pxmin+1}]
    set height [expr {$pymax-$pymin+1}]

    set triangleheight [expr {sqrt(3.0)/2.0 * $width}]
    set trianglewidth  [expr {$height / (sqrt(3.0)/2.0)}]

    if { $triangleheight > $height } {
        #
        # Shrink the width
        #
        set dx    [expr {int(($width - $trianglewidth)/2.0)}]
        set pxmin [expr {$pxmin + $dx}]
        set pxmax [expr {$pxmax - $dx}]
        set config($w,margin,right) [expr {$config($w,margin,right) + $dx}]
    } else {
        #
        # Shrink the height
        #
        set dy    [expr {int(($height - $triangleheight)/2.0)}]
        set pymin [expr {$pymin + $dy}]
        set pymax [expr {$pymax - $dy}]
        set config($w,margin,bottom) [expr {$config($w,margin,bottom) + $dy}]
    }

    return [list $pxmin $pymin $pxmax $pymax]
}

# GetPlotArea --
#    Return the area reserved for the plot
# Arguments:
#    w           Name of the canvas
# Result:
#    List of: (x,y) upper left, (x,y) lower right, width and height
#
proc ::Plotchart::GetPlotArea { w } {
   variable scaling

   set width  [expr {$scaling($w,pxmax) - $scaling($w,pxmin) + 1}]
   set height [expr {$scaling($w,pymax) - $scaling($w,pymin) + 1}]

   return [list $scaling($w,pxmin) $scaling($w,pymin) $scaling($w,pxmax) $scaling($w,pymax) $width $height]
}

# CopyScalingData --
#    Copy the scaling data for coordsToPixel and friends if needed
# Arguments:
#    w           Name of the plot
#    c           Name of the canvas
# Result:
#    None
#
proc ::Plotchart::CopyScalingData { w c } {
   variable scaling

   if { [string match "00*" $w] } {
       foreach var {new xmin xmax ymin ymax pxmin pxmax pymin pymax coordSystem xfactor yfactor} {
           set scaling($c,$var) $scaling($w,$var)
       }
   }
}

# SetColours --
#    Set the colours for those plots that treat them as a global resource
# Arguments:
#    w           Name of the canvas
#    args        List of colours to be used
# Result:
#    None
#
proc ::Plotchart::SetColours { w args } {
   variable scaling

   set scaling($w,colours) $args
}

# CycleColours --
#    create cycling colours for those plots that treat them as a global resource
# Arguments:
#    colours     List of colours to be used. An empty list will activate to default colours
#    nr_data     Number of data records
# Result:
#    List of 'nr_data' colours to be used
#
proc ::Plotchart::CycleColours { colours nr_data } {
   if {![llength ${colours}]} {
       # force to most usable default colour list
       set colours {green blue red cyan yellow magenta}
   }

   if {[llength ${colours}] < ${nr_data}} {
   # cycle through colours
   set init_colours ${colours}
        set colours {}
        set pos 0
        for {set nr 0} {${nr} < ${nr_data}} {incr nr} {
            lappend colours [lindex ${init_colours} ${pos}]
            incr pos
            if {[llength ${init_colours}] <= ${pos}} {
                set pos 0
            }
   }
        if {[string equal [lindex ${colours} 0] [lindex ${colours} end]]} {
            # keep first and last colour different from selected colours
       #    this will /sometimes fail in cases with only one/two colours in list
       set colours [lreplace ${colours} end end [lindex ${colours} 1]]
        }
   }
   return ${colours}
}

# DataConfig --
#    Configure the data series
# Arguments:
#    w           Name of the canvas
#    series      Name of the series in question
#    args        Option and value pairs
# Result:
#    None
#
proc ::Plotchart::DataConfig { w series args } {
   variable data_series
   variable options
   variable option_keys
   variable option_values

   foreach {option value} $args {
      set idx [lsearch $options $option]
      if { $idx < 0 } {
         return -code error "Unknown or invalid option: $option (value: $value)"
      } else {
         set key [lindex $option_keys    $idx]
         set idx [lsearch $option_values $key]
         set values  [lindex $option_values [incr idx]]
         if { $values != "..." } {
            if { [lsearch $values $value] < 0 } {
               return -code error "Unknown or invalid value: $value for option $option - $values"
            }
         }
         set data_series($w,$series,$key) $value
      }
   }
}

# ScaleIsometric --
#    Determine the scaling for an isometric plot
# Arguments:
#    w           Name of the canvas
#    xmin        Minimum x coordinate
#    ymin        Minimum y coordinate
#    xmax        Maximum x coordinate
#    ymax        Maximum y coordinate
#                (default: 1.5)
# Result:
#    None
# Side effect:
#    Array with scaling parameters set
#
proc ::Plotchart::ScaleIsometric { w xmin ymin xmax ymax } {
   variable scaling

   set pxmin $scaling($w,pxmin)
   set pymin $scaling($w,pymin)
   set pxmax $scaling($w,pxmax)
   set pymax $scaling($w,pymax)

   set dx [expr {double($xmax-$xmin)/($pxmax-$pxmin)}]
   set dy [expr {double($ymax-$ymin)/($pymax-$pymin)}]

   #
   # Which coordinate is dominant?
   #
   if { $dy < $dx } {
      set yminn [expr {0.5*($ymax+$ymin) - 0.5 * $dx * ($pymax-$pymin)}]
      set ymaxn [expr {0.5*($ymax+$ymin) + 0.5 * $dx * ($pymax-$pymin)}]
      set ymin  $yminn
      set ymax  $ymaxn
   } else {
      set xminn [expr {0.5*($xmax+$xmin) - 0.5 * $dy * ($pxmax-$pxmin)}]
      set xmaxn [expr {0.5*($xmax+$xmin) + 0.5 * $dy * ($pxmax-$pxmin)}]
      set xmin  $xminn
      set xmax  $xmaxn
   }

   worldCoordinates $w $xmin $ymin $xmax $ymax
}

# PlotHandler --
#    Handle the subcommands for an XY plot or chart
# Arguments:
#    type        Type of plot/chart
#    w           Name of the canvas
#    command     Subcommand or method to run
#    args        Data for the command
# Result:
#    Whatever returned by the subcommand
#
proc ::Plotchart::PlotHandler { type w command args } {
    variable methodProc

    if { [info exists methodProc($type,$command)] } {
        if { [llength $methodProc($type,$command)] == 1 } {
            eval $methodProc($type,$command) $w $args
        } else {
            eval $methodProc($type,$command)_$w $w $args
        }
    } else {
        return -code error "No such method - $command"
    }
}

# DrawMask --
#    Draw the stuff that masks the data lines outside the graph
# Arguments:
#    w           Name of the canvas
# Result:
#    None
# Side effects:
#    Several polygons drawn in the background colour
#
proc ::Plotchart::DrawMask { w } {
    variable scaling
    variable config

    if { $config($w,mask,draw) == 0 } {
        return
    }

    if { [string match {[0-9]*} $w] } {
        set c [string range $w 2 end]
    } else {
        set c $w
    }

    set ref $scaling($w,reference)

    if { [info exists scaling($ref,boxxmin)] } {
        set pxmin  $scaling($ref,boxxmin)
        set pymin  $scaling($ref,boxymin)
        set pxmax  $scaling($ref,boxxmax)
        set pymax  $scaling($ref,boxymax)
        set offx   $scaling($ref,refx)
        set offy   $scaling($ref,refy)
    } else {
        set pxmin  [expr {$scaling($w,pxmin)-1}]
        set pymin  [expr {$scaling($w,pymin)-1}]
        set pxmax  $scaling($w,pxmax)
        set pymax  $scaling($w,pymax)
        set offx   0
        set offy   0
    }
    #set width  [expr {[WidthCanvas  $w 0] + 1}]
    #set height [expr {[HeightCanvas $w 0] + 1}]
    set width  [expr {$pxmax + $config($w,margin,right)}]
    set height [expr {$pymax + $config($w,margin,bottom)}]

    set colour $config($w,background,outercolor)

    #$w delete "mask && $w"
    $w delete "mask && $ref"
    $w create rectangle $offx  $offy  $pxmin $height -fill $colour -outline $colour -tag [list mask $ref]
    $w create rectangle $offx  $offy  $width $pymin  -fill $colour -outline $colour -tag [list mask $ref]
    $w create rectangle $offx  $pymax $width $height -fill $colour -outline $colour -tag [list mask $ref]
    $w create rectangle $pxmax $offy  $width $height -fill $colour -outline $colour -tag [list mask $ref]

    $w lower mask
}

# DrawScrollMask --
#    Draw the masking rectangles for a time or Gantt chart
# Arguments:
#    w           Name of the canvas
# Result:
#    None
# Side effects:
#    Several polygons drawn in the background colour, with appropriate
#    tags
#
proc ::Plotchart::DrawScrollMask { w } {
   variable scaling
   variable config

   set width  [expr {[WidthCanvas $w]  + 1}]
   set height [expr {[HeightCanvas $w] + 1}]
   set colour $config($w,background,outercolor)
   set pxmin  [expr {$scaling($w,pxmin)-1}]
   set pxmax  $scaling($w,pxmax)
   set pymin  [expr {$scaling($w,pymin)-1}]
   set pymax  $scaling($w,pymax)
   $w create rectangle 0      0      $pxmin $height -fill $colour -outline $colour -tag vertmask
   $w create rectangle 0      0      $width $pymin  -fill $colour -outline $colour -tag horizmask
   $w create rectangle 0      $pymax $width $height -fill $colour -outline $colour -tag horizmask
   $w create rectangle $pxmax 0      $width $height -fill $colour -outline $colour -tag vertmask

   $w create rectangle 0      0      $pxmin $pymin  -fill $colour -outline $colour -tag {topmask top}
   $w create rectangle $pxmax 0      $width $pymin  -fill $colour -outline $colour -tag {topmask top}

   $w lower topmask
   $w lower horizmask
   $w lower vertmask
}

# DrawTernaryMask --
#    Draw the stuff that masks the data lines outside the ternary diagram
# Arguments:
#    w           Name of the canvas
# Result:
#    None
# Side effects:
#    Several polygons drawn in the background colour
#
proc ::Plotchart::DrawTernaryMask { w } {
    variable scaling
    variable config

    if { $config($w,mask,draw) == 0 } {
        return
    }

    if { [string match {[0-9]*} $w] } {
        set c [string range $w 2 end]
    } else {
        set c $w
    }

    set pxmin  [expr {$scaling($w,pxmin)-1}]
    set pymin  [expr {$scaling($w,pymin)-1}]
    set pxmax  $scaling($w,pxmax)
    set pymax  $scaling($w,pymax)
    set offx   0
    set offy   0

    set width  [expr {$pxmax + $config($w,margin,right)}]
    set height [expr {$pymax + $config($w,margin,bottom)}]

    set colour $config($w,background,outercolor)

    $w delete "mask && $w"

    set pxmid [expr {($pxmin+$pxmax)/2.0}]

    $w create polygon   $offx  $offy  $pxmid $offy $pxmid $pymin $pxmin $pymax $offx $pymax \
        -fill $colour -outline $colour -tag [list mask $w]
    $w create rectangle $offx  $height $width $pymax  -fill $colour -outline $colour -tag [list mask $w]
    $w create polygon   $width $offy  $pxmid $offy $pxmid $pymin $pxmax $pymax $width $pymax \
        -fill $colour -outline $colour -tag [list mask $w]
    $w lower mask
}

# DrawTitle --
#    Draw the title
# Arguments:
#    w           Name of the canvas
#    title       Title to appear above the graph
#    position    Position of the title (default: center)
# Result:
#    None
# Side effects:
#    Text string drawn
#
proc ::Plotchart::DrawTitle { w title {position center}} {
    variable scaling
    variable config

    set ref    $scaling($w,reference)
    set offx   $scaling($ref,refx)
    set offy   $scaling($ref,refy)
    set width  [WidthCanvas $w]
    #set width  [$w cget -width]
    set pymin  $scaling($w,pymin)

    switch -- $position {
        "left" {
            set tx [expr {$offx + 3}]
            set anchor nw
        }
        "right" {
            set tx [expr {$width - 3}]
            set anchor ne
        }
        default {
            set tx [expr {($offx + $width)/2}]
            set anchor n
        }
    }

    $w delete "title_$anchor && $ref"
    set obj [$w create text $tx [expr {$offy + 3 + [$w cget -borderwidth]}] -text $title \
                -tags [list title title_$anchor $ref] -font $config($w,title,font) \
                -fill $config($w,title,textcolor) -anchor $anchor]

    set titlecolour $config($w,title,background)
    if { $titlecolour == "" } {
        set titlecolour $config($w,background,outercolor)
    }
    set bbox    [$w bbox $obj]
    set theight [lindex $bbox end]
    set bgobj [$w create rectangle $offx $offy $width $theight -fill $titlecolour -tag [list titlebackground $ref] -outline $titlecolour]
    $w raise titlebackground
    $w raise title
    $w raise ytext
}

# DrawSubtitle --
#    Draw the subtitle
# Arguments:
#    w           Name of the canvas
#    title       Title to appear above the graph
# Result:
#    None
# Side effects:
#    Text string drawn
#
proc ::Plotchart::DrawSubtitle { w title } {
    variable scaling
    variable config

    set ref    $scaling($w,reference)
    set offx   $scaling($ref,refx)
    set width  [WidthCanvas $w]
    set pymin  $scaling($w,pymin)

    set tx [expr {($offx + $width)/2}]
    set offy   [lindex [$w bbox title] end]
    if { $offy == {} } {
        set $scaling($ref,refy)
    }

    $w delete "subtitle && $ref"
    set obj [$w create text $tx [expr {$offy + 3 + [$w cget -borderwidth]}] -text $title \
                -tags [list subtitle $ref] -font $config($w,subtitle,font) \
                -fill $config($w,subtitle,textcolor) -anchor n]

    set titlecolour $config($w,subtitle,background)
    if { $titlecolour == "" } {
        set titlecolour $config($w,background,outercolor)
    }
    set bbox    [$w bbox $obj]
    set theight [lindex $bbox end]
    set bgobj [$w create rectangle $offx $offy $width $theight -fill $titlecolour -tag [list subtitlebackground $ref] -outline $titlecolour]
    $w raise subtitlebackground
    $w raise subtitle
    $w raise ytext
}

# DrawData --
#    Draw the data in an XY-plot
# Arguments:
#    w           Name of the canvas
#    series      Data series
#    xcrd        Next x coordinate
#    ycrd        Next y coordinate
# Result:
#    None
# Side effects:
#    New data drawn in canvas
#
proc ::Plotchart::DrawData { w series xcrd ycrd } {
   variable data_series
   variable scaling

   #
   # Check for missing values
   #
   if { $xcrd == "" || $ycrd == "" } {
       unset -nocomplain data_series($w,$series,x)
       return
   }

   #
   # Draw the line piece
   #
   set colour "black"
   if { [info exists data_series($w,$series,-colour)] } {
      set colour $data_series($w,$series,-colour)
   }

   set type "line"
   if { [info exists data_series($w,$series,-type)] } {
      set type $data_series($w,$series,-type)
   }
   set filled "no"
   if { [info exists data_series($w,$series,-filled)] } {
      set filled $data_series($w,$series,-filled)
   }
   set fillcolour white
   if { [info exists data_series($w,$series,-fillcolour)] } {
      set fillcolour $data_series($w,$series,-fillcolour)
   }
   set width 1
   if { [info exists data_series($w,$series,-width)] } {
      set width $data_series($w,$series,-width)
   }

   foreach {pxcrd pycrd} [coordsToPixel $w $xcrd $ycrd] {break}

   if { [info exists data_series($w,$series,x)] } {
       set xold $data_series($w,$series,x)
       set yold $data_series($w,$series,y)
       foreach {pxold pyold} [coordsToPixel $w $xold $yold] {break}

       if { $filled ne "no" } {
           if { $filled eq "down" } {
               set pym $scaling($w,pymax)
           } else {
               set pym $scaling($w,pymin)
           }
           $w create polygon $pxold $pym $pxold $pyold $pxcrd $pycrd $pxcrd $pym \
               -fill $fillcolour -outline {} -width $width -tag [list data data_$series]
       }

       if { $type == "line" || $type == "both" } {
          $w create line $pxold $pyold $pxcrd $pycrd \
                         -fill $colour -width $width -tag [list data data_$series]
       }
   }

   if { $type == "symbol" || $type == "both" } {
      set symbol "dot"
      if { [info exists data_series($w,$series,-symbol)] } {
         set symbol $data_series($w,$series,-symbol)
      }
      DrawSymbolPixel $w $series $pxcrd $pycrd $symbol $colour [list "data" data_$series]
   }

   $w lower data

   set data_series($w,$series,x) $xcrd
   set data_series($w,$series,y) $ycrd
}

# DrawStripData --
#    Draw the data in a stripchart
# Arguments:
#    w           Name of the canvas
#    series      Data series
#    xcrd        Next x coordinate
#    ycrd        Next y coordinate
# Result:
#    None
# Side effects:
#    New data drawn in canvas
#
proc ::Plotchart::DrawStripData { w series xcrd ycrd } {
   variable data_series
   variable scaling

   #
   # Check for missing values
   #
   if { $xcrd == "" || $ycrd == "" } {
       unset data_series($w,$series,x)
       return
   }

   if { $xcrd > $scaling($w,xmax) } {
      set xdelt $scaling($w,xdelt)
      set xmin  $scaling($w,xmin)
      set xmax  $scaling($w,xmax)

      set xminorg $xmin
      while { $xmax < $xcrd } {
         set xmin [expr {$xmin+$xdelt}]
         set xmax [expr {$xmax+$xdelt}]
      }
      set ymin  $scaling($w,ymin)
      set ymax  $scaling($w,ymax)

      worldCoordinates $w $xmin $ymin $xmax $ymax
      DrawXaxis $w $xmin $xmax $xdelt {*}$scaling($w,axisoptions)

      foreach {pxminorg pyminorg} [coordsToPixel $w $xminorg $ymin] {break}
      foreach {pxmin pymin}       [coordsToPixel $w $xmin    $ymin] {break}
      $w move data [expr {$pxminorg-$pxmin+1}] 0
   }

   DrawData $w $series $xcrd $ycrd
}

# DrawLogYData --
#    Draw the data in an X-logY-plot
# Arguments:
#    w           Name of the canvas
#    series      Data series
#    xcrd        Next x coordinate
#    ycrd        Next y coordinate
# Result:
#    None
# Side effects:
#    New data drawn in canvas
#
proc ::Plotchart::DrawLogYData { w series xcrd ycrd } {

    DrawData $w $series $xcrd [expr {log10($ycrd)}]
}

# DrawLogXData --
#    Draw the data in an logX-Y-plot
# Arguments:
#    w           Name of the canvas
#    series      Data series
#    xcrd        Next x coordinate
#    ycrd        Next y coordinate
# Result:
#    None
# Side effects:
#    New data drawn in canvas
#
proc ::Plotchart::DrawLogXData { w series xcrd ycrd } {

    DrawData $w $series [expr {log10($xcrd)}] $ycrd
}

# DrawLogXLogYData --
#    Draw the data in an logX-logY-plot
# Arguments:
#    w           Name of the canvas
#    series      Data series
#    xcrd        Next x coordinate
#    ycrd        Next y coordinate
# Result:
#    None
# Side effects:
#    New data drawn in canvas
#
proc ::Plotchart::DrawLogXLogYData { w series xcrd ycrd } {

    DrawData $w $series [expr {log10($xcrd)}] [expr {log10($ycrd)}]
}

# DrawRegion --
#    Draw a filled region an XY-plot (and variants)
# Arguments:
#    w           Name of the canvas
#    series      Data series
#    xcrds       List of x coordinates
#    ycrds       List of y coordinates
# Result:
#    None
# Side effects:
#    Filled polygon drawn in canvas
#
proc ::Plotchart::DrawRegion { w series xcrds ycrds } {
   variable data_series
   variable scaling

   #
   # Convert the coordinates
   #
   set pxy {}
   foreach xcrd $xcrds ycrd $ycrds {
       foreach {px py} [coordsToPixel $w $xcrd $ycrd] {break}
       lappend pxy $px $py
   }

   #
   # Get the configuration options
   #
   set filled "no"
   if { [info exists data_series($w,$series,-filled)] } {
      set filled $data_series($w,$series,-filled)
   }

   set colour "black"
   if { [info exists data_series($w,$series,-colour)] } {
      set colour $data_series($w,$series,-colour)
   }

   set fillcolour white
   if { [info exists data_series($w,$series,-fillcolour)] } {
      set fillcolour $data_series($w,$series,-fillcolour)
   }

   set width 1
   if { [info exists data_series($w,$series,-width)] } {
      set width $data_series($w,$series,-width)
   }

   $w create polygon $pxy \
       -fill $fillcolour -outline $colour -width $width -tag [list data data_$series]

   $w lower data
}

# DrawMinMax --
#    Draw a filled region representing a band of minimum and maximum values in an XY-plot (and variants)
# Arguments:
#    w           Name of the canvas
#    series      Data series
#    xcrd        X coordinate
#    ymin        Minimum y coordinate
#    ymax        Maximum y coordinate
# Result:
#    None
# Side effects:
#    Filled polygon drawn in canvas
# Note:
#    ymin and ymax may be empty strings
#
proc ::Plotchart::DrawMinMax { w series xcrd ymin ymax } {
   variable data_series
   variable scaling

   #
   # Do we have a break?
   #
   if { $ymin eq {} && $ymax eq {} } {
       unset -nocomplain data_series($w,$series,minmaxid)
       return
   }

   #
   # If not, create the canvas item with the right colours and other attributes
   #
   set hasmin 1
   set hasmax 1
   if { $ymin eq {} } {
       set hasmin 0
       set ymin   $ymax
   }
   if { $ymax eq {} } {
       set hasmax 0
       set ymax   $ymin
   }
   set ycrd $ymin

   if { ![info exists data_series($w,$series,minmaxid)] } {
      foreach {px py} [coordsToPixel $w $xcrd $ycrd] {break}

      set pxy [list $px $py $px $py $px $py]

      #
      # Get the configuration options
      #
      set filled "no"
      if { [info exists data_series($w,$series,-filled)] } {
         set filled $data_series($w,$series,-filled)
      }

      set colour "black"
      if { [info exists data_series($w,$series,-colour)] } {
         set colour $data_series($w,$series,-colour)
      }

      set fillcolour white
      if { [info exists data_series($w,$series,-fillcolour)] } {
         set fillcolour $data_series($w,$series,-fillcolour)
      }

      set width 1
      if { [info exists data_series($w,$series,-width)] } {
         set width $data_series($w,$series,-width)
      }

      set data_series($w,$series,minmaxid) \
         [$w create polygon $pxy \
             -fill $fillcolour -outline $colour -width $width -tag [list data data_$series]]

      $w lower data

      set data_series($w,$series,minx) $xcrd
      set data_series($w,$series,miny) $ymin
      set data_series($w,$series,maxx) $xcrd
      set data_series($w,$series,maxy) $ymax
   }

   #
   # We have one or two new points - add them
   #
   if { $hasmin } {
       lappend data_series($w,$series,minx) $xcrd
       lappend data_series($w,$series,miny) $ymin
   }
   if { $hasmax } {
       set data_series($w,$series,maxx) [concat $xcrd $data_series($w,$series,maxx)]
       set data_series($w,$series,maxy) [concat $ymax $data_series($w,$series,maxy)]
   }

   #
   # Convert the coordinates
   #
   set pxy {}
   foreach xcrd $data_series($w,$series,minx) ycrd $data_series($w,$series,miny) {
       foreach {px py} [coordsToPixel $w $xcrd $ycrd] {break}
       lappend pxy $px $py
   }
   foreach xcrd $data_series($w,$series,maxx) ycrd $data_series($w,$series,maxy) {
       foreach {px py} [coordsToPixel $w $xcrd $ycrd] {break}
       lappend pxy $px $py
   }

   $w coords $data_series($w,$series,minmaxid) $pxy
}

# DrawInterval --
#    Draw the data as an error interval in an XY-plot
# Arguments:
#    w           Name of the canvas
#    series      Data series
#    xcrd        X coordinate
#    ymin        Minimum y coordinate
#    ymax        Maximum y coordinate
#    ycentr      Central y coordinate (optional)
# Result:
#    None
# Side effects:
#    New interval drawn in canvas
#
proc ::Plotchart::DrawInterval { w series xcrd ymin ymax {ycentr {}} } {
   variable data_series
   variable scaling

   #
   # Check for missing values
   #
   if { $xcrd == "" || $ymin == "" || $ymax == "" } {
       return
   }

   #
   # Draw the line piece
   #
   set colour "black"
   if { [info exists data_series($w,$series,-colour)] } {
      set colour $data_series($w,$series,-colour)
   }

   foreach {pxcrd pymin} [coordsToPixel $w $xcrd $ymin] {break}
   foreach {pxcrd pymax} [coordsToPixel $w $xcrd $ymax] {break}
   if { $ycentr != "" } {
       foreach {pxcrd pycentr} [coordsToPixel $w $xcrd $ycentr] {break}
   }

   #
   # Draw the I-shape (note the asymmetry!)
   #
   $w create line $pxcrd $pymin $pxcrd $pymax \
                        -fill $colour -tag [list data data_$series]
   $w create line [expr {$pxcrd-3}] $pymin [expr {$pxcrd+4}] $pymin \
                        -fill $colour -tag [list data data_$series]
   $w create line [expr {$pxcrd-3}] $pymax [expr {$pxcrd+4}] $pymax \
                        -fill $colour -tag [list data data_$series]

   if { $ycentr != "" } {
      set symbol "dot"
      if { [info exists data_series($w,$series,-symbol)] } {
         set symbol $data_series($w,$series,-symbol)
      }
      DrawSymbolPixel $w $series $pxcrd $pycentr $symbol $colour [list data data_$series]
   }

   $w lower data
}

# DrawTernaryData --
#    Draw a single data point in a ternary diagram
# Arguments:
#    w           Name of the canvas
#    series      Data series
#    xcrd        X coordinate
#    ycrd        Y coordinate
#    zcrd        Z coordinate
#    text        Text to be drawn next to the data point
#    dir         Direction (optional)
# Result:
#    None
# Side effects:
#    New data drawn in canvas
#
proc ::Plotchart::DrawTernaryData { w series xcrd ycrd zcrd text {dir w} } {
   variable data_series
   variable scaling
   variable config

   #
   # Check for missing values
   #
   if { $xcrd == "" || $ycrd == "" } {
       return
   }

   #
   # Draw the symbol
   #
   set colour "black"
   if { [info exists data_series($w,$series,-colour)] } {
      set colour $data_series($w,$series,-colour)
   }

   set type "line"
   if { [info exists data_series($w,$series,-type)] } {
      set type $data_series($w,$series,-type)
   }
   set filled "no"
   if { [info exists data_series($w,$series,-filled)] } {
      set filled $data_series($w,$series,-filled)
   }
   set fillcolour white
   if { [info exists data_series($w,$series,-fillcolour)] } {
      set fillcolour $data_series($w,$series,-fillcolour)
   }

   foreach {pxcrd pycrd} [coordsToPixel $w $xcrd $ycrd $zcrd] {break}

   set symbol "dot"
   if { [info exists data_series($w,$series,-symbol)] } {
       set symbol $data_series($w,$series,-symbol)
   }
   DrawSymbolPixel $w $series $pxcrd $pycrd $symbol $colour [list data data_$series]

   set dx 0
   set dy 0
   switch $dir {
       "w"  { set dx  7            }
       "nw" { set dx  7; set dy -7 }
       "n"  {            set dy -7 }
       "ne" { set dx -7; set dy -7 }
       "e"  { set dx -7            }
       "se" { set dx -7; set dy  7 }
       "s"  {            set dy  7 }
       "sw" { set dx  7; set dy -7 }
   }
   $w create text [expr {$pxcrd+$dx}] [expr {$pycrd+$dy}] -text $text -anchor $dir \
       -font $config($w,text,font) -fill $config($w,text,textcolor) -tags [list data data_$series]

   $w lower data
}

# DrawSymbolPixel --
#    Draw a symbol in an xy-plot, polar plot or stripchart
# Arguments:
#    w           Name of the canvas
#    series      Data series
#    pxcrd       Next x (pixel) coordinate
#    pycrd       Next y (pixel) coordinate
#    symbol      What symbol to draw
#    colour      What colour to use
#    tag         What tag to use
# Result:
#    None
# Side effects:
#    New symbol drawn in canvas
#
proc ::Plotchart::DrawSymbolPixel { w series pxcrd pycrd symbol colour tag } {
   variable data_series
   variable scaling

   set radius 4
   if { [info exists data_series($w,$series,-radius)] } {
      set radius $data_series($w,$series,-radius)
   }

   set pxmin  [expr {$pxcrd - $radius}]
   set pxmax  [expr {$pxcrd + $radius}]
   set pymin  [expr {$pycrd - $radius}]
   set pymax  [expr {$pycrd + $radius}]

   switch -- $symbol {
   "plus"     { $w create line $pxmin $pycrd $pxmax $pycrd \
                               $pxcrd $pycrd $pxcrd $pymin \
                               $pxcrd $pymax \
                               -fill $colour -tag $tag \
                               -capstyle projecting
              }
   "cross"    { $w create line $pxmin $pymin $pxmax $pymax \
                               $pxcrd $pycrd $pxmax $pymin \
                               $pxmin $pymax \
                               -fill $colour -tag $tag \
                               -capstyle projecting
              }
   "circle"   { $w create oval $pxmin $pymin $pxmax $pymax \
                               -outline $colour -tag $tag
              }
   "dot"      { $w create oval $pxmin $pymin $pxmax $pymax \
                               -outline $colour -fill $colour -tag $tag
              }
   "up"       { $w create polygon $pxmin $pymax $pxmax $pymax \
                               $pxcrd $pymin \
                               -outline $colour -fill {} -tag $tag
              }
   "upfilled" { $w create polygon $pxmin $pymax $pxmax $pymax \
                              $pxcrd $pymin \
                              -outline $colour -fill $colour -tag $tag
              }
   "down"     { $w create polygon $pxmin $pymin $pxmax $pymin \
                              $pxcrd $pymax \
                              -outline $colour -fill {} -tag $tag
              }
   "downfilled" { $w create polygon $pxmin $pymin $pxmax $pymin \
                              $pxcrd $pymax \
                              -outline $colour -fill $colour -tag $tag
              }
   }
}

# DrawTimeData --
#    Draw the data in an TX-plot
# Arguments:
#    w           Name of the canvas
#    series      Data series
#    time        Next date/time value
#    xcrd        Next x coordinate (vertical axis)
# Result:
#    None
# Side effects:
#    New data drawn in canvas
#
proc ::Plotchart::DrawTimeData { w series time xcrd } {
    DrawData $w $series [clock scan $time] $xcrd
}

# DetermineMedian --
#    Determine the median of a sorted list of values
# Arguments:
#    values      Sorted values
# Result:
#    Median value
#
proc ::Plotchart::DetermineMedian { values } {
    set length [llength $values]

    if { $length == 1 } {
        set median [lindex $values 0]
    } elseif { $length % 2 == 1 } {
        set median [lindex $values [expr {$length/2}]]
    } else {
        set median1 [lindex $values [expr {$length/2-1}]]
        set median2 [lindex $values [expr {$length/2}]]
        set median  [expr {($median1 + $median2)/2.0}]
    }
    return $median
}

# DrawBoxWhiskers --
#    Draw the data in an XY-plot as box-and-whiskers
# Arguments:
#    w           Name of the canvas
#    series      Data series
#    xcrd        Next x coordinate or a list of values
#    ycrd        Next y coordinate or a list of values
# Result:
#    None
# Side effects:
#    New data drawn in canvas
# Note:
#    We can do either a horizontal box (one y value) or
#    a vertical box (one x value). Not both
#
proc ::Plotchart::DrawBoxWhiskers { w series xcrd ycrd } {
    variable data_series
    variable scaling

    #
    # Check orientation
    #
    set type "?"
    if { [llength $xcrd] > 1 && [llength $ycrd] == 1 } {
        set type h
    }
    if { [llength $xcrd] == 1 && [llength $ycrd] > 1 } {
        set type v
    }
    if { $type == "?" } {
        return -code error "Use either a list of x values or a list of y values - not both"
    }

    #
    # Determine the quartiles:
    #
    # quartile1 is the 25% quantile
    # quartile2 is the 50% quantile (the median value)
    # quartile3 is the 75% quantile
    #
    # also
    # values between 'lower'/'upper' and outlower'/'outupper' are values within 1.5*IQR - 3*IQR (drawn as a dot)
    # values outside 'outlower'/'outupper' are values outside 3*IQR (drawn as a star)
    #
    # quartile1 is the 25% quantile
    # quartile2 is the 50% quantile (the median value)
    # quartile3 is the 75% quantile
    #
    # also
    # values between 'lower'/'upper' and outlower'/'outupper' are values within 1.5*IQR - 3*IQR (drawn as a dot)
    # values outside 'outlower'/'outupper' are values outside 3*IQR (drawn as a star)
    #
    if { $type == "h" } {
        set data [lsort -real -increasing $xcrd]
    } else {
        set data [lsort -real -increasing $ycrd]
    }
    set length    [llength $data]
    if { $length % 2 == 0 } {
        set lowerhalf [expr {($length-1)/2}]
        set upperhalf [expr {($length+1)/2}]
    } else {
        set lowerhalf [expr {$length/2-1}]
        set upperhalf [expr {$length/2+1}]
    }

    set quartile2 [DetermineMedian $data]
    set quartile1 [DetermineMedian [lrange $data 0 $lowerhalf]]
    set quartile3 [DetermineMedian [lrange $data $upperhalf end]]

    set hspread   [expr {$quartile3-$quartile1}]

    set lower     [expr {$quartile1-1.5*$hspread}]
    set upper     [expr {$quartile3+1.5*$hspread}]
    set outlower  [expr {$quartile1-3.0*$hspread}]
    set outupper  [expr {$quartile3+3.0*$hspread}]

    set whisker IQR
    if { [info exists data_series($w,$series,-whisker)] } {
        set whisker $data_series($w,$series,-whisker)
    }
    if { $whisker eq "extremes" } {
        set minimum [lindex $data 0]
        set maximum [lindex $data end]
    } elseif { $whisker eq "IQR" || $whisker eq "iqr" } {

        set minimum {}
        set maximum {}
        foreach value $data {
            if { $value >= $lower } {
                if { $minimum == {} || $minimum > $value } {
                    set minimum $value
                }
            }
            if { $value <= $upper } {
                if { $maximum == {} || $maximum < $value } {
                    set maximum $value
                }
            }
        }
    } elseif { $whisker eq "none"} {
        # nop
    } else {
        return -code error "unknown value '$whisker' for -whisker option"
    }

    #
    # Draw the box and whiskers
    #
    set colour "black"
    if { [info exists data_series($w,$series,-colour)] } {
        set colour $data_series($w,$series,-colour)
    }
    set mediancolour $colour
    if { [info exists data_series($w,$series,-mediancolour)] } {
        set mediancolour $data_series($w,$series,-mediancolour)
    }
    set mediancolour $colour
    if { [info exists data_series($w,$series,-mediancolour)] } {
       set mediancolour $data_series($w,$series,-mediancolour)
    }
    set filled "no"
    if { [info exists data_series($w,$series,-filled)] } {
        set filled $data_series($w,$series,-filled)
    }
    set fillcolour white
    if { [info exists data_series($w,$series,-fillcolour)] } {
       set fillcolour $data_series($w,$series,-fillcolour)
    }
    set boxwidth 10
    if { [info exists data_series($w,$series,-boxwidth)] } {
       set boxwidth $data_series($w,$series,-boxwidth)
    }
    set medianwidth 2
    if { [info exists data_series($w,$series,-medianwidth)] } {
       set medianwidth $data_series($w,$series,-medianwidth)
    }
    set whiskerwidth 1
    if { [info exists data_series($w,$series,-whiskerwidth)] } {
       set whiskerwidth $data_series($w,$series,-whiskerwidth)
    }

    if { $type == "h" } {
        #
        # Horizontal boxplot:
        #
        foreach {pxcrd1 pycrd2} [coordsToPixel $w $quartile1 $ycrd] {break}
        foreach {pxcrd2 pycrd2} [coordsToPixel $w $quartile2 $ycrd] {break}
        foreach {pxcrd3 pycrd2} [coordsToPixel $w $quartile3 $ycrd] {break}
        if {$whisker ne "none"} {
            foreach {pxcrdm pycrd1} [coordsToPixel $w $minimum $ycrd] {break}
            foreach {pxcrdM pycrd2} [coordsToPixel $w $maximum $ycrd] {break}
            set pycrd0h [expr {$pycrd1-$boxwidth/4}]
            set pycrd2h [expr {$pycrd1+$boxwidth/4}]
        } else {
            foreach {- pycrd1} [coordsToPixel $w 0 $ycrd] {break}
        }
        set pycrd0  [expr {$pycrd1-$boxwidth/2}]
        set pycrd2  [expr {$pycrd1+$boxwidth/2}]

        if {$whisker ne "none"} {
            #
            # Left whisker:
            #
            $w create line      $pxcrdm $pycrd1 $pxcrd1 $pycrd1 \
                                 -fill $colour -tag [list data data_$series] -width $whiskerwidth
            $w create line      $pxcrdm $pycrd0h $pxcrdm $pycrd2h \
                                 -fill $colour -tag [list data data_$series] -width $whiskerwidth
            # right whisker:
            #
            # Right whisker:
            #
            $w create line      $pxcrd3 $pycrd1 $pxcrdM $pycrd1 \
                                 -fill $colour -tag [list data data_$series] -width $whiskerwidth
            $w create line      $pxcrdM $pycrd0h $pxcrdM $pycrd2h \
                                 -fill $colour -tag [list data data_$series] -width $whiskerwidth
        }
        #
        # Box:
        #
        $w create rectangle $pxcrd1 $pycrd0 $pxcrd3 $pycrd2 \
            -outline $colour -fill $fillcolour -tag [list data data_$series]
        #
        # Median:
        #
        $w create line      $pxcrd2 $pycrd0 $pxcrd2 $pycrd2 -width $medianwidth \
                             -fill $mediancolour -tag [list data data_$series]

        if {$whisker eq "IQR"} {
            foreach value $data {
                if { $value < $outlower || $value > $outupper } {
                    foreach {px py} [coordsToPixel $w $value $ycrd] {break}
                    $w create text $px $py -text "*" -anchor c \
                                 -fill $colour -tag [list data data_$series]
                    continue
                }
                if { $value < $lower || $value > $upper } {
                    foreach {px py} [coordsToPixel $w $value $ycrd] {break}
                    $w create oval [expr {$px-2}] [expr {$py-2}] \
                                   [expr {$px+2}] [expr {$py+2}] \
                                 -fill $colour -tag [list data data_$series]
                    continue
                }
            }
        }
    } else {
        #
        # Vertical boxplot:
        #
        foreach {pxcrd2 pycrd1} [coordsToPixel $w $xcrd $quartile1] {break}
        foreach {pxcrd2 pycrd2} [coordsToPixel $w $xcrd $quartile2] {break}
        foreach {pxcrd2 pycrd3} [coordsToPixel $w $xcrd $quartile3] {break}
        if {$whisker ne "none"} {
            foreach {pxcrd1 pycrdm} [coordsToPixel $w $xcrd $minimum] {break}
            foreach {pxcrd2 pycrdM} [coordsToPixel $w $xcrd $maximum] {break}
            set pxcrd0h [expr {$pxcrd1-$boxwidth/4}]
            set pxcrd2h [expr {$pxcrd1+$boxwidth/4}]
        } else {
            foreach {pxcrd1 -} [coordsToPixel $w $xcrd 0] {break}
        }
        set pxcrd0  [expr {$pxcrd1-$boxwidth/2}]
        set pxcrd2  [expr {$pxcrd1+$boxwidth/2}]

        if {$whisker ne "none"} {
            #
            # Lower whisker:
            #
            $w create line      $pxcrd1 $pycrdm $pxcrd1 $pycrd1 \
                                 -fill $colour -tag [list data data_$series] -width $whiskerwidth
            $w create line      $pxcrd0h $pycrdm $pxcrd2h $pycrdm \
                                 -fill $colour -tag [list data data_$series] -width $whiskerwidth
            # upper whisker:
            #
            # Upper whisker:
            #
            $w create line      $pxcrd1 $pycrd3 $pxcrd1 $pycrdM \
                                 -fill $colour -tag [list data data_$series] -width $whiskerwidth
            $w create line      $pxcrd0h $pycrdM $pxcrd2h $pycrdM \
                                 -fill $colour -tag [list data data_$series] -width $whiskerwidth
        }
        #
        # Box:
        #
        $w create rectangle $pxcrd0 $pycrd1 $pxcrd2 $pycrd3 \
            -outline $colour -fill $fillcolour -tag [list data data_$series]
        #
        # Median:
        #
        $w create line      $pxcrd0 $pycrd2 $pxcrd2 $pycrd2 -width $medianwidth \
                             -fill $mediancolour -tag [list data data_$series]

        if {$whisker eq "IQR"} {
            foreach value $data {
                if { $value < $outlower || $value > $outupper } {
                    foreach {px py} [coordsToPixel $w $xcrd $value] {break}
                    $w create text $px $py -text "*" \
                                 -fill $colour -tag [list data data_$series]
                    continue
                }
                if { $value < $lower || $value > $upper } {
                    foreach {px py} [coordsToPixel $w $xcrd $value] {break}
                    $w create oval [expr {$px-3}] [expr {$py-3}] \
                                   [expr {$px+3}] [expr {$py+3}] \
                                 -fill $colour -tag [list data data_$series]
                    continue
                }
            }
        }
    }

    $w lower data
}

# DrawBoxData --
#    Draw the data in a boxplot
#    where either the x-axis or the y-axis consists of labels
# Arguments:
#    w           Name of the canvas
#    series      Data series
#    label       Label on the x- or y-axis to put the box on
#    values      List of values to plot the box and whiskers for
# Result:
#    None
# Side effects:
#    New data drawn in canvas
#
proc ::Plotchart::DrawBoxData { w series label values } {
    variable config
    variable scaling
    variable settings

    set index [lsearch $config($w,axisnames) $label]
    if { $index == -1 } {
        return "Label $label not found on axis"
    }

    set coord [expr {$index + 1}]

    if { $settings($w,orientation) eq "vertical" } {
        DrawBoxWhiskers $w $series $coord $values
    } else {
        DrawBoxWhiskers $w $series $values $coord
    }
}

# DrawPie --
#    Draw the pie
# Arguments:
#    w           Name of the canvas
#    data        Data series (pairs of label-value)
# Result:
#    None
# Side effects:
#    Pie filled
#
proc ::Plotchart::DrawPie { w data } {
   variable data_series
   variable scaling
   variable config

   set pxmin $scaling($w,pxmin)
   set pymin $scaling($w,pymin)
   set pxmax $scaling($w,pxmax)
   set pymax $scaling($w,pymax)

   set colours $scaling(${w},colours)

   if {[llength ${data}] == 2} {
       # use canvas create oval as arc does not fill with colour for a full circle
       set colour [lindex ${colours} 0]
       ${w} create oval ${pxmin} ${pymin} ${pxmax} ${pymax} -fill ${colour} \
         -width $config($w,slice,outlinewidth) -outline $config($w,slice,outline)
       # text looks nicer at 45 degree
       set rad [expr {45.0 * 3.1415926 / 180.0}]
       set xtext [expr {(${pxmin}+${pxmax}+cos(${rad})*(${pxmax}-${pxmin}+20))/2}]
       set ytext [expr {(${pymin}+${pymax}-sin(${rad})*(${pymax}-${pymin}+20))/2}]
       foreach {label value} ${data} {
           break
       }
       if { $config($w,labels,shownumbers) } {
           if { $config($w,labels,format) ne "" } {
               set label [format $config($w,labels,formatright) $value $label]
           } else {
               set label [format $config($w,labels,format) $label $value]
           }
       }
       ${w} create text ${xtext} ${ytext} -text ${label} -anchor w -font $config($w,labels,font)
       set scaling($w,angles) {0 360}
   } else {
       #
       # Determine the scale for the values
       # (so we can draw the correct angles)
       #

       set newdata  {}
       set sum 0.0
       foreach {label value} $data {
           lappend newdata [list $value $label]
          set sum [expr {$sum + $value}]
       }
       set factor [expr {360.0/$sum}]

       set data $newdata
       if { $config($w,labels,sorted) } {
           set data [lsort -index 0 -real $newdata]
       }

       #
       # Draw the line piece
       #
       set angle_init $config($w,slice,startangle)
       set op $config($w,slice,direction)

       set sum     0.0
       set idx     0
       set segment 0

       array unset scaling ${w},angles
       array unset scaling ${w},extent
       set colours [CycleColours ${colours} [expr {[llength ${data}] / 2}]]

       foreach sublist $data {
          foreach {value label} $sublist {break}
          set colour [lindex $colours $idx]
          incr idx

          if { $value == "" } {
              break
          }

          set angle_bgn [expr $angle_init $op ($sum * $factor)]
          set angle_ext $op[expr {$value * $factor}]
          lappend scaling(${w},angles) [expr {int(${angle_bgn})}]
          lappend scaling(${w},extent) [expr {int(${angle_ext})}]

          $w create arc  $pxmin $pymin $pxmax $pymax \
                         -start $angle_bgn -extent $angle_ext \
                         -fill $colour -style pieslice -tag [list data segment_$segment] \
                         -width $config($w,slice,outlinewidth) -outline $config($w,slice,outline)

          set rad   [expr {($angle_bgn+0.5*$angle_ext)*3.1415926/180.0}]
          # hack for label positioning 'out' or 'in':
          if {$config($w,labels,placement) eq "out"} {
            set xtext [expr {($pxmin+$pxmax+cos($rad)*($pxmax-$pxmin+20))/2}]
            set ytext [expr {($pymin+$pymax-sin($rad)*($pymax-$pymin+20))/2}]
            if { $xtext > ($pxmin+$pxmax)/2 } {
               set dir w
            } else {
               set dir e
            }
          } elseif {$config($w,labels,placement) eq "in"} {
            set dir c
            set centerx [expr {$pxmax - ($pxmax-$pxmin)/2.0}]
            set centery [expr {$pymax - ($pymax-$pymin)/2.0}]
            # 33% from the center to the radius
            set xtext [expr {$centerx + cos($rad)*($pxmax-$pxmin)*0.33}]
            set ytext [expr {$centery - sin($rad)*($pymax-$pymin)*0.33}]
          }

          if { $config($w,labels,shownumbers) } {
              if { $dir eq "w" && $config($w,labels,formatright) ne "" } {
                  set label [format $config($w,labels,formatright) $value $label]
              } else {
                  set label [format $config($w,labels,format) $label $value]
              }
          }

          $w create text $xtext $ytext -text $label -anchor $dir -tag segment_$segment \
            -font $config($w,labels,font) -fill $config($w,labels,textcolor)

          $w bind segment_$segment <ButtonPress-1> [list ::Plotchart::PieExplodeSegment $w $segment 1]

          set sum [expr {$sum + $value}]
          incr segment
       }
   }
}

# DrawSpiralPie --
#    Draw the spiral pie
# Arguments:
#    w           Name of the canvas
#    data        Data series (pairs of label-value)
# Result:
#    None
# Side effects:
#    Pie filled
#
proc ::Plotchart::DrawSpiralPie { w data } {
   variable data_series
   variable scaling
   variable config

   set pxmin $scaling($w,pxmin)
   set pymin $scaling($w,pymin)
   set pxmax $scaling($w,pxmax)
   set pymax $scaling($w,pymax)

   set colours $scaling(${w},colours)

   if {[llength ${data}] == 2} {
       # use canvas create oval as arc does not fill with colour for a full circle
       set colour [lindex ${colours} 0]
       ${w} create oval ${pxmin} ${pymin} ${pxmax} ${pymax} -fill ${colour} \
         -width $config($w,slice,outlinewidth) -outline $config($w,slice,outline)
       # text looks nicer at 45 degree
       set rad [expr {45.0 * 3.1415926 / 180.0}]
       set xtext [expr {(${pxmin}+${pxmax}+cos(${rad})*(${pxmax}-${pxmin}+20))/2}]
       set ytext [expr {(${pymin}+${pymax}-sin(${rad})*(${pymax}-${pymin}+20))/2}]
       foreach {label value} ${data} {
           break
       }
       if { $config($w,labels,shownumbers) } {
           if { $config($w,labels,format) ne "" } {
               set label [format $config($w,labels,formatright) $value $label]
           } else {
               set label [format $config($w,labels,format) $label $value]
           }
       }

       ${w} create text ${xtext} ${ytext} -text ${label} -anchor w -font $config($w,labels,font)
       set scaling($w,angles) {0 360}
   } else {
       #
       # Determine the scale for the values
       # (so we can draw the correct radii)
       #
       set maxvalue [lindex $data 1]
       set newdata  {}
       foreach {label value} $data {
           lappend newdata [list $value $label]
           if { $maxvalue < $value } {
               set maxvalue $value
           }
       }
       set data $newdata
       if { $config($w,labels,sorted) } {
           set data [lsort -index 0 -real $newdata]
       }

       set factor [expr {1.0/sqrt($maxvalue)}]
       set dangle [expr {360.0/[llength $data]}]

       #
       # Draw the line piece
       #
       set angle_init $config($w,slice,startangle)
       set op         $config($w,slice,direction)

       set sum     0.0
       set idx     0
       set segment 0

       array unset scaling ${w},angles
       array unset scaling ${w},extent
       set colours [CycleColours ${colours} [llength ${data}]]

       foreach sublist $data {
          foreach {value label} $sublist {break}
          set colour [lindex $colours $idx]
          incr idx

          if { $value == "" } {
              break
          }

          set angle_bgn [expr $angle_init $op $sum]
          set angle_ext [expr $op $dangle]
          lappend scaling(${w},angles) [expr {int(${angle_bgn})}]
          lappend scaling(${w},extent) [expr {int(${angle_ext})}]

          set slicexmin [expr {0.5 * ($pxmax + $pxmin - sqrt($value) * $factor * ($pxmax-$pxmin))}]
          set slicexmax [expr {0.5 * ($pxmax + $pxmin + sqrt($value) * $factor * ($pxmax-$pxmin))}]
          set sliceymin [expr {0.5 * ($pymax + $pymin - sqrt($value) * $factor * ($pymax-$pymin))}]
          set sliceymax [expr {0.5 * ($pymax + $pymin + sqrt($value) * $factor * ($pymax-$pymin))}]

          $w create arc  $slicexmin $sliceymin $slicexmax $sliceymax \
                         -start $angle_bgn -extent $angle_ext \
                         -fill $colour -style pieslice -tag [list data segment_$segment] \
                         -width $config($w,slice,outlinewidth) -outline $config($w,slice,outline)

          set rad   [expr {($angle_bgn+0.5*$angle_ext)*3.1415926/180.0}]
          # hack for label positioning 'out' or 'in':
          if {$config($w,labels,placement) eq "out"} {
            set xtext [expr {($slicexmin+$slicexmax+cos($rad)*($slicexmax-$slicexmin+20))/2}]
            set ytext [expr {($sliceymin+$sliceymax-sin($rad)*($sliceymax-$sliceymin+20))/2}]
            if { $xtext > ($slicexmin+$sliceymax)/2 } {
               set dir w
            } else {
               set dir e
            }
          } elseif {$config($w,labels,placement) eq "in"} {
            set dir c
            set centerx [expr {$slicexmax - ($slicexmax-$slicexmin)/2.0}]
            set centery [expr {$sliceymax - ($sliceymax-$sliceymin)/2.0}]
            # 33% from the center to the radius
            set xtext [expr {$centerx + cos($rad)*($slicexmax-$slicexmin)*0.33}]
            set ytext [expr {$centery - sin($rad)*($sliceymax-$sliceymin)*0.33}]
          }

          if { $config($w,labels,shownumbers) } {
              if { $dir eq "w" && $config($w,labels,formatright) ne "" } {
                  set label [format $config($w,labels,formatright) $value $label]
              } else {
                  set label [format $config($w,labels,format) $label $value]
              }
          }

          $w create text $xtext $ytext -text $label -anchor $dir -tag segment_$segment \
            -font $config($w,labels,font) -fill $config($w,labels,textcolor)

          $w bind segment_$segment <ButtonPress-1> [list ::Plotchart::PieExplodeSegment $w $segment 1]

          set sum [expr {$sum + $dangle}]
          incr segment
       }
   }
}

# DrawPolarData --
#    Draw data given in polar coordinates
# Arguments:
#    w           Name of the canvas
#    series      Data series
#    rad         Next radius
#    phi         Next angle (in degrees)
# Result:
#    None
# Side effects:
#    Data drawn in canvas
#
proc ::Plotchart::DrawPolarData { w series rad phi } {
   variable torad
   set xcrd [expr {$rad*cos($phi*$torad)}]
   set ycrd [expr {$rad*sin($phi*$torad)}]

   DrawData $w $series $xcrd $ycrd
}

# DrawVertBarData --
#    Draw the vertical bars
# Arguments:
#    w           Name of the canvas
#    series      Data series
#    ydata       Series of y data
#    colour      The colour to use (optional)
#    dir         Direction if graded colours are used (see DrawGradientBackground)
#    brightness  Brighten (bright) or darken (dark) the colours
# Result:
#    None
# Side effects:
#    Data bars drawn in canvas
#
proc ::Plotchart::DrawVertBarData { w series ydata {colour black} {dir {}} {brightness bright}} {
   variable data_series
   variable scaling
   variable legend
   variable settings
   variable config

   #
   # Draw the bars
   #
   set x $scaling($w,xbase)

   #
   # set the colours
   #
   if {[llength ${colour}]} {
       set colours ${colour}
   } elseif {[info exists scaling(${w},colours)]} {
       set colours $scaling(${w},colours)
   } else {
       set colours {}
   }
   set colours [CycleColours ${colours} [llength ${ydata}]]

   #
   # Legend information
   #
   set legendcol [lindex $colours 0]
   set data_series($w,$series,-colour) $legendcol
   set data_series($w,$series,-type)   rectangle
   if { [info exists legend($w,canvas)] } {
       set legendw $legend($w,canvas)
       $legendw itemconfigure $series -fill $legendcol
   }

   set newbase {}

   set idx 0
   foreach yvalue $ydata ybase $scaling($w,ybase) {
      set colour [lindex ${colours} ${idx}]
      incr idx

      if { $yvalue == "" } {
          set yvalue 0.0
      }

      set xnext [expr {$x+$scaling($w,barwidth)}]
      set y     [expr {$yvalue+$ybase}]
      foreach {px1 py1} [coordsToPixel $w $x     $ybase] {break}
      foreach {px2 py2} [coordsToPixel $w $xnext $y    ] {break}

      if { $dir == {} } {
          $w create rectangle $px1 $py1 $px2 $py2 \
                         -fill $colour -outline $config($w,bar,outline) -tag [list data $w data_$series]
      } else {
          if { $brightness == "dark" } {
              set intensity black
          } else {
              set intensity white
          }
          DrawGradientBackground $w $colour $dir $intensity [list $px1 $py1 $px2 $py2]
      }

      if { $settings($w,showvalues) } {
          set pxtext [expr {($px1+$px2)/2.0}]
          set pytext [expr {$py2-5}]
          set text   [format $settings($w,valueformat) $yvalue]
          if { $settings($w,valuefont) == "" } {
              $w create text $pxtext $pytext -text $text -anchor s \
                         -fill $settings($w,valuecolour) -tag [list data $w data_$series]
          } else {
              $w create text $pxtext $pytext -text $text -anchor s \
                         -fill $settings($w,valuecolour) -tag [list data $w data_$series] \
                         -font $settings($w,valuefont)
          }
      }

      $w lower [list data && $w]

      set x [expr {$x+1.0}]

      lappend newbase $y
   }

   #
   # Prepare for the next series
   #
   if { $scaling($w,stacked) } {
      set scaling($w,ybase) $newbase
   }

   set scaling($w,xbase) [expr {$scaling($w,xbase)+$scaling($w,xshift)}]
}

# DrawHorizBarData --
#    Draw the horizontal bars
# Arguments:
#    w           Name of the canvas
#    series      Data series
#    xdata       Series of x data
#    colour      The colour to use (optional)
#    dir         Direction if graded colours are used (see DrawGradientBackground)
#    brightness  Brighten (bright) or darken (dark) the colours
# Result:
#    None
# Side effects:
#    Data bars drawn in canvas
#
proc ::Plotchart::DrawHorizBarData { w series xdata {colour black} {dir {}} {brightness bright}} {
   variable data_series
   variable scaling
   variable legend
   variable settings
   variable config

   #
   # Draw the bars
   #
   set y $scaling($w,ybase)

   #
   # set the colours
   #
   if {[llength ${colour}]} {
       set colours ${colour}
   } elseif {[info exists scaling(${w},colours)]} {
       set colours $scaling(${w},colours)
   } else {
       set colours {}
   }
   set colours [CycleColours ${colours} [llength ${xdata}]]

   #
   # Legend information
   #
   set legendcol [lindex $colours 0]
   set data_series($w,$series,-colour) $legendcol
   if { [info exists legend($w,canvas)] } {
       set legendw $legend($w,canvas)
       $legendw itemconfigure $series -fill $legendcol
   }

   set newbase {}

   set idx 0
   foreach xvalue $xdata xbase $scaling($w,xbase) {
      set colour [lindex ${colours} ${idx}]
      incr idx

      if { $xvalue == "" } {
          set xvalue 0.0
      }

      set ynext [expr {$y+$scaling($w,barwidth)}]
      set x     [expr {$xvalue+$xbase}]
      foreach {px1 py1} [coordsToPixel $w $xbase $y    ] {break}
      foreach {px2 py2} [coordsToPixel $w $x     $ynext] {break}

      if { $dir == {} } {
          $w create rectangle $px1 $py1 $px2 $py2 \
                         -fill $colour -outline $config($w,bar,outline) -tag [list data $w data_$series]
      } else {
          if { $brightness == "dark" } {
              set intensity black
          } else {
              set intensity white
          }
          DrawGradientBackground $w $colour $dir $intensity [list $px1 $py1 $px2 $py2]
      }

      if { $settings($w,showvalues) } {
          set pytext [expr {($py1+$py2)/2.0}]
          set pxtext [expr {$px2+5}]
          set text   [format $settings($w,valueformat) $xvalue]
          if { $settings($w,valuefont) == "" } {
              $w create text $pxtext $pytext -text $text -anchor w \
                         -fill $settings($w,valuecolour) -tag [list data $w data_$series]
          } else {
              $w create text $pxtext $pytext -text $text -anchor w \
                         -fill $settings($w,valuecolour) -tag [list data $w data_$series] \
                         -font $settings($w,valuefont)
          }
      }

      $w lower [list data && $w]

      set y [expr {$y+1.0}]

      lappend newbase $x
   }

   #
   # Prepare for the next series
   #
   if { $scaling($w,stacked) } {
      set scaling($w,xbase) $newbase
   }

   set scaling($w,ybase) [expr {$scaling($w,ybase)+$scaling($w,yshift)}]
}

# DrawHistogramData --
#    Draw the vertical bars (or lines or symbols) for a histogram
# Arguments:
#    w           Name of the canvas
#    series      Data series
#    xcrd        X coordinate (for the righthand side of the bar)
#    ycrd        Y coordinate
# Result:
#    None
# Side effects:
#    Data bars drawn in canvas
#
proc ::Plotchart::DrawHistogramData { w series xcrd ycrd } {
   variable data_series
   variable scaling

   #
   # Check for missing values (only y-value can be missing!)
   #
   if { $ycrd == "" } {
       set data_series($w,$series,x) $xcrd
       return
   }

   #
   # Draw the bar/line
   #
   set colour "black"
   if { [info exists data_series($w,$series,-colour)] } {
      set colour $data_series($w,$series,-colour)
   }
   set fillcolour "black"
   if { [info exists data_series($w,$series,-fillcolour)] } {
      set fillcolour $data_series($w,$series,-fillcolour)
   }
   set width 1
   if { [info exists data_series($w,$series,-width)] } {
      set width $data_series($w,$series,-width)
   }
   set style "filled"
   if { [info exists data_series($w,$series,-style)] } {
      set style $data_series($w,$series,-style)
   }
   if { $style == "symbol" } {
       set symbol "plus"
       if { [info exists data_series($w,$series,-symbol)] } {
           set symbol $data_series($w,$series,-symbol)
       }
   }

   foreach {pxcrd pycrd} [coordsToPixel $w $xcrd $ycrd] {break}

   if { [info exists data_series($w,$series,x)] } {
      set xold       $data_series($w,$series,x)
      set pystair    $data_series($w,$series,pystair)
   } else {
      set xold       $scaling($w,xmin)
      set pystair    $scaling($w,pymax)
   }
   set yold $scaling($w,ymin)
   foreach {pxold pyold} [coordsToPixel $w $xold $yold] {break}

   switch -- $style {
       "filled" {
           $w create rectangle $pxold $pyold $pxcrd $pycrd \
                -fill $fillcolour -outline {} -tag [list data $w data_$series]
           $w create line $pxold $pystair $pxold $pycrd $pxcrd $pycrd \
                -fill $colour -width $width -tag [list data $w data_$series]
       }
       "stair" {
           $w create line $pxold $pystair $pxold $pycrd $pxcrd $pycrd \
                -fill $colour -width $width -tag [list data $w data_$series]
       }
       "spike" {
           $w create line $pxcrd $pyold $pxcrd $pycrd \
                -fill $colour -width $width -tag [list data $w data_$series]
       }
       "plateau" {
           $w create line $pxold $pycrd $pxold $pycrd $pxcrd $pycrd \
                -fill $colour -width $width -tag [list data $w data_$series]
       }
       "symbol" {
           DrawSymbolPixel $w $series $pxcrd $pycrd $symbol $colour [list data $w data_$series]
       }
   }

   $w lower [list data && $w]

   set data_series($w,$series,x)       $xcrd
   set data_series($w,$series,pystair) $pycrd

   #
   # Store the data for use in bindlast subcommand
   #
   set data_series($w,$series,px1)     $pxold
   set data_series($w,$series,py1)     $pyold
   set data_series($w,$series,px2)     $pxcrd
   set data_series($w,$series,py2)     $pycrd

   if { $style == "symbol" } {
       set data_series($w,$series,px1)     $pxcrd
       set data_series($w,$series,py1)     $pycrd
   }
}

# DrawHistogramCumulative --
#    Draw the vertical bars for a histogram - accumulate the data
# Arguments:
#    w           Name of the canvas
#    series      Data series
#    xcrd        X coordinate (for the righthand side of the bar)
#    ycrd        Y coordinate
# Result:
#    None
# Side effects:
#    Data bars drawn in canvas
#
proc ::Plotchart::DrawHistogramCumulative { w series xcrd ycrd } {
   variable data_series
   variable scaling

   #
   # Check for missing values (only y-value can be missing!)
   #
   if { $ycrd == "" } {
       set data_series($w,$series,x) $xcrd
       return
   }

   #
   # Prepare the data
   #
   if { [info exists data_series($w,$series,y)] } {
      set ycrd [expr {$data_series($w,$series,y) + $ycrd}]
   }

   DrawHistogramData $w $series $xcrd $ycrd

   set data_series($w,$series,y) $ycrd
}

# DrawTimePeriod --
#    Draw a period
# Arguments:
#    w           Name of the canvas
#    text        Text to identify the "period" item
#    time_begin  Start time
#    time_end    Stop time
#    colour      The colour to use (optional)
# Result:
#    None
# Side effects:
#    Data bars drawn in canvas
#
proc ::Plotchart::DrawTimePeriod { w text time_begin time_end {colour black}} {
   variable data_series
   variable scaling

   #
   # Draw the text first
   #
   set ytext [expr {$scaling($w,current)+0.5*$scaling($w,dy)}]
   foreach {x y} [coordsToPixel $w $scaling($w,xmin) $ytext] {break}

   $w create text 5 $y -text $text -anchor w \
       -tags [list vertscroll above item_[expr {int($scaling($w,current))}]]

   #
   # Draw the bar to indicate the period
   #
   set xmin  [clock scan $time_begin]
   set xmax  [clock scan $time_end]
   set ybott [expr {$scaling($w,current)+$scaling($w,dy)}]

   foreach {x1 y1} [coordsToPixel $w $xmin $scaling($w,current)] {break}
   foreach {x2 y2} [coordsToPixel $w $xmax $ybott              ] {break}

   $w create rectangle $x1 $y1 $x2 $y2 -fill $colour \
       -tags [list $w vertscroll horizscroll below item_[expr {int($scaling($w,current))}]]

   ReorderChartItems $w

   set scaling($w,current) [expr {$scaling($w,current)-1.0}]

   RescaleChart $w
}

# DrawAdditionalPeriod --
#    Draw an additional period on the same level (no text)
# Arguments:
#    w           Name of the canvas
#    time_begin  Start time
#    time_end    Stop time
#    colour      The colour to use (optional)
# Result:
#    None
# Side effects:
#    Data bars drawn in canvas
#
proc ::Plotchart::DrawAdditionalPeriod { w time_begin time_end {colour black}} {
   variable data_series
   variable scaling

   set scaling($w,current) [expr {$scaling($w,current)+1.0}]

   #
   # Draw the bar to indicate the period
   #
   set xmin  [clock scan $time_begin]
   set xmax  [clock scan $time_end]
   set ybott [expr {$scaling($w,current)+$scaling($w,dy)}]

   foreach {x1 y1} [coordsToPixel $w $xmin $scaling($w,current)] {break}
   foreach {x2 y2} [coordsToPixel $w $xmax $ybott              ] {break}

   $w create rectangle $x1 $y1 $x2 $y2 -fill $colour \
       -tags [list $w vertscroll horizscroll below item_[expr {int($scaling($w,current))}]]

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
proc ::Plotchart::DrawTimeVertLine { w text time {colour black}} {
   variable data_series
   variable scaling

   #
   # Draw the text first
   #
   set xtime [clock scan $time]
   #set ytext [expr {$scaling($w,ymax)-0.5*$scaling($w,dy)}]
   set ytext $scaling($w,ymax)
   foreach {x y} [coordsToPixel $w $xtime $ytext] {break}
   set y [expr {$y-5}]

   $w create text $x $y -text $text -anchor sw -tags [list $w horizscroll timeline]

   #
   # Draw the line
   #
   foreach {x1 y1} [coordsToPixel $w $xtime $scaling($w,ymin)] {break}
   foreach {x2 y2} [coordsToPixel $w $xtime $scaling($w,ymax)] {break}

   $w create line $x1 $y1 $x2 $y2 -fill $colour -tags [list $w horizscroll timeline tline]

   $w raise topmask
}

# DrawTimeMilestone --
#    Draw a "milestone"
# Arguments:
#    w           Name of the canvas
#    text        Text to identify the line
#    time        Time for which the milestone is drawn
#    colour      Optionally the colour
# Result:
#    None
# Side effects:
#    Triangle drawn in canvas
#
proc ::Plotchart::DrawTimeMilestone { w text time {colour black}} {
   variable data_series
   variable scaling

   #
   # Draw the text first
   #
   set ytext [expr {$scaling($w,current)+0.5*$scaling($w,dy)}]
   foreach {x y} [coordsToPixel $w $scaling($w,xmin) $ytext] {break}

   $w create text 5 $y -text $text -anchor w \
       -tags [list vertscroll above item_[expr {int($scaling($w,current))}]]

   #
   # Draw an upside-down triangle to indicate the time
   #
   set xcentre [clock scan $time]
   set ytop    $scaling($w,current)
   set ybott   [expr {$scaling($w,current)+0.8*$scaling($w,dy)}]

   foreach {x1 y1} [coordsToPixel $w $xcentre $ybott] {break}
   foreach {x2 y2} [coordsToPixel $w $xcentre $ytop]  {break}

   set x2 [expr {$x1-0.4*($y1-$y2)}]
   set x3 [expr {$x1+0.4*($y1-$y2)}]
   set y3 $y2

   $w create polygon $x1 $y1 $x2 $y2 $x3 $y3 -fill $colour \
       -tags [list $w vertscroll horizscroll below item_[expr {int($scaling($w,current))}]]

   ReorderChartItems $w

   set scaling($w,current) [expr {$scaling($w,current)-1.0}]

   RescaleChart $w
}

# DrawAdditionalMilestone --
#    Draw an additional "milestone"
# Arguments:
#    w           Name of the canvas
#    time        Time for which the milestone is drawn
#    colour      Optionally the colour
# Result:
#    None
# Side effects:
#    Triangle drawn in canvas
#
proc ::Plotchart::DrawAdditionalMilestone { w time {colour black}} {
   variable data_series
   variable scaling

   set scaling($w,current) [expr {$scaling($w,current)+1.0}]

   #
   # Draw an upside-down triangle to indicate the time
   #
   set xcentre [clock scan $time]
   set ytop    $scaling($w,current)
   set ybott   [expr {$scaling($w,current)+0.8*$scaling($w,dy)}]

   foreach {x1 y1} [coordsToPixel $w $xcentre $ybott] {break}
   foreach {x2 y2} [coordsToPixel $w $xcentre $ytop]  {break}

   set x2 [expr {$x1-0.4*($y1-$y2)}]
   set x3 [expr {$x1+0.4*($y1-$y2)}]
   set y3 $y2

   $w create polygon $x1 $y1 $x2 $y2 $x3 $y3 -fill $colour \
       -tags [list $w vertscroll horizscroll below item_[expr {int($scaling($w,current))}]]

   ReorderChartItems $w

   set scaling($w,current) [expr {$scaling($w,current)-1.0}]

   RescaleChart $w
}

# ScaleItems --
#    Scale all items by a given factor
# Arguments:
#    w           Name of the canvas
#    xcentre     X-coordinate of centre
#    ycentre     Y-coordinate of centre
#    factor      The factor to scale them by
# Result:
#    None
# Side effects:
#    All items are scaled by the given factor and the
#    world coordinates are adjusted.
#
proc ::Plotchart::ScaleItems { w xcentre ycentre factor } {
   variable scaling

   $w scale all $xcentre $ycentre $factor $factor

   foreach {xc yc} [pixelToCoords $w $xcentre $ycentre] {break}

   set rfact               [expr {1.0/$factor}]
   set scaling($w,xfactor) [expr {$scaling($w,xfactor)*$factor}]
   set scaling($w,yfactor) [expr {$scaling($w,yfactor)*$factor}]
   set scaling($w,xmin)    [expr {(1.0-$rfact)*$xc+$rfact*$scaling($w,xmin)}]
   set scaling($w,xmax)    [expr {(1.0-$rfact)*$xc+$rfact*$scaling($w,xmax)}]
   set scaling($w,ymin)    [expr {(1.0-$rfact)*$yc+$rfact*$scaling($w,ymin)}]
   set scaling($w,ymax)    [expr {(1.0-$rfact)*$yc+$rfact*$scaling($w,ymax)}]
}

# MoveItems --
#    Move all items by a given vector
# Arguments:
#    w           Name of the canvas
#    xmove       X-coordinate of move vector
#    ymove       Y-coordinate of move vector
# Result:
#    None
# Side effects:
#    All items are moved by the given vector and the
#    world coordinates are adjusted.
#
proc ::Plotchart::MoveItems { w xmove ymove } {
   variable scaling

   $w move all $xmove $ymove

   set dx                  [expr {$scaling($w,xfactor)*$xmove}]
   set dy                  [expr {$scaling($w,yfactor)*$ymove}]
   set scaling($w,xmin)    [expr {$scaling($w,xmin)+$dx}]
   set scaling($w,xmax)    [expr {$scaling($w,xmax)+$dx}]
   set scaling($w,ymin)    [expr {$scaling($w,ymin)+$dy}]
   set scaling($w,ymax)    [expr {$scaling($w,ymax)+$dy}]
}

# DrawIsometricData --
#    Draw the data in an isometric plot
# Arguments:
#    w           Name of the canvas
#    type        Type of data
#    args        Coordinates and so on
# Result:
#    None
# Side effects:
#    New data drawn in canvas
#
proc ::Plotchart::DrawIsometricData { w type args } {
   variable data_series

   #
   # What type of data?
   #
   if { $type == "rectangle" } {
      foreach {x1 y1 x2 y2 colour} [concat $args "black"] {break}
      foreach {px1 py1} [coordsToPixel $w $x1 $y1] {break}
      foreach {px2 py2} [coordsToPixel $w $x2 $y2] {break}
      $w create rectangle $px1 $py1 $px2 $py2 \
                     -outline $colour -tag [list $w data]
      $w lower data
   }

   if { $type == "filled-rectangle" } {
      foreach {x1 y1 x2 y2 colour} [concat $args "black"] {break}
      foreach {px1 py1} [coordsToPixel $w $x1 $y1] {break}
      foreach {px2 py2} [coordsToPixel $w $x2 $y2] {break}
      $w create rectangle $px1 $py1 $px2 $py2 \
                     -outline $colour -fill $colour -tag [list $w data]
      $w lower [list data && $w]
   }

   if { $type == "filled-circle" } {
      foreach {x1 y1 rad colour} [concat $args "black"] {break}
      set x2 [expr {$x1+$rad}]
      set y2 [expr {$y1+$rad}]
      set x1 [expr {$x1-$rad}]
      set y1 [expr {$y1-$rad}]
      foreach {px1 py1} [coordsToPixel $w $x1 $y1] {break}
      foreach {px2 py2} [coordsToPixel $w $x2 $y2] {break}
      $w create oval $px1 $py1 $px2 $py2 \
                     -outline $colour -fill $colour -tag [list $w data]
      $w lower [list data && $w]
   }

   if { $type == "circle" } {
      foreach {x1 y1 rad colour} [concat $args "black"] {break}
      set x2 [expr {$x1+$rad}]
      set y2 [expr {$y1+$rad}]
      set x1 [expr {$x1-$rad}]
      set y1 [expr {$y1-$rad}]
      foreach {px1 py1} [coordsToPixel $w $x1 $y1] {break}
      foreach {px2 py2} [coordsToPixel $w $x2 $y2] {break}
      $w create oval $px1 $py1 $px2 $py2 \
                     -outline $colour -tag [list $w data]
      $w lower [list data && $w]
   }

}

# BackgroundColour --
#    Set the background colour or other aspects of the background
# Arguments:
#    w           Name of the canvas
#    part        Which part: axes or plot
#    colour      Colour to use (or if part is "image", name of the image)
#    dir         Direction of increasing whiteness (optional, for "gradient"
#    brightness  Brighten (bright) or darken (dark) the colours
#
# Result:
#    None
# Side effect:
#    Colour of the relevant part is changed
#
proc ::Plotchart::BackgroundColour { w part colour {dir {}} {brighten bright}} {
    if { $part == "axes" } {
        $w configure -highlightthickness 0
        $w itemconfigure mask -fill $colour -outline $colour
    }
    if { $part == "plot" } {
        $w configure -highlightthickness 0
        $w configure -background $colour
    }
    if { $part == "gradient" } {
          if { $brighten == "dark" } {
              set intensity black
          } else {
              set intensity white
          }
        DrawGradientBackground $w $colour $dir $intensity
    }
    if { $part == "image" } {
        DrawImageBackground $w $colour
    }
}

# DrawRadialSpokes --
#    Draw the spokes of the radial chart
# Arguments:
#    w           Name of the canvas
#    names       Names of the spokes
# Result:
#    None
# Side effects:
#    Radial chart filled in
#
proc ::Plotchart::DrawRadialSpokes { w names } {
   variable settings
   variable scaling

   set pxmin $scaling($w,pxmin)
   set pymin $scaling($w,pymin)
   set pxmax $scaling($w,pxmax)
   set pymax $scaling($w,pymax)

   $w create oval $pxmin $pymin $pxmax $pymax -outline black

   set dangle [expr {2.0 * 3.1415926 / [llength $names]}]
   set angle  0.0
   set xcentr [expr {($pxmin+$pxmax)/2.0}]
   set ycentr [expr {($pymin+$pymax)/2.0}]

   foreach name $names {
       set xtext  [expr {$xcentr+cos($angle)*($pxmax-$pxmin+20)/2}]
       set ytext  [expr {$ycentr-sin($angle)*($pymax-$pymin+20)/2}]
       set xspoke [expr {$xcentr+cos($angle)*($pxmax-$pxmin)/2}]
       set yspoke [expr {$ycentr-sin($angle)*($pymax-$pymin)/2}]

       if { cos($angle) >= 0.0 } {
           set anchor w
       } else {
           set anchor e
       }

       if { abs($xspoke-$xcentr) < 2 } {
           set xspoke $xcentr
       }
       if { abs($yspoke-$ycentr) < 2 } {
           set yspoke $ycentr
       }

       $w create text $xtext $ytext -text $name -anchor $anchor
       $w create line $xcentr $ycentr $xspoke $yspoke -fill black

       set angle [expr {$angle+$dangle}]
   }
}

# DrawRadial --
#    Draw the data for the radial chart
# Arguments:
#    w           Name of the canvas
#    values      Values for each spoke
#    colour      Colour of the line
#    thickness   Thickness of the line (optional)
# Result:
#    None
# Side effects:
#    New line drawn
#
proc ::Plotchart::DrawRadial { w values colour {thickness 1} } {
   variable data_series
   variable settings
   variable scaling

   if { [llength $values] != $settings($w,number) } {
       return -code error "Incorrect number of data given - should be $settings($w,number)"
   }

   set pxmin $scaling($w,pxmin)
   set pymin $scaling($w,pymin)
   set pxmax $scaling($w,pxmax)
   set pymax $scaling($w,pymax)

   set dangle [expr {2.0 * 3.1415926 / [llength $values]}]
   set angle  0.0
   set xcentr [expr {($pxmin+$pxmax)/2.0}]
   set ycentr [expr {($pymin+$pymax)/2.0}]

   set coords {}

   if { ! [info exists data_series($w,base)] } {
       set data_series($w,base) {}
       foreach value $values {
           lappend data_series($w,base) 0.0
       }
   }

   set newbase {}
   foreach value $values base $data_series($w,base) {
       if { $settings($w,style) != "lines" } {
           set value [expr {$value+$base}]
       }
       set factor [expr {$value/$settings($w,scale)}]
       set xspoke [expr {$xcentr+$factor*cos($angle)*($pxmax-$pxmin)/2}]
       set yspoke [expr {$ycentr-$factor*sin($angle)*($pymax-$pymin)/2}]

       if { abs($xspoke-$xcentr) < 2 } {
           set xspoke $xcentr
       }
       if { abs($yspoke-$ycentr) < 2 } {
           set yspoke $ycentr
       }

       lappend coords $xspoke $yspoke
       lappend newbase $value
       set angle [expr {$angle+$dangle}]
   }

   set data_series($w,base) $newbase

   if { $settings($w,style) == "filled" } {
       set fillcolour $colour
   } else {
       set fillcolour ""
   }

   set id [$w create polygon $coords -outline $colour -width $thickness -fill $fillcolour -tags [list data $w]]
   $w lower $id
}

# DrawTrendLine --
#    Draw a trend line based on the given data in an XY-plot
# Arguments:
#    w           Name of the canvas
#    series      Data series
#    xcrd        Next x coordinate
#    ycrd        Next y coordinate
# Result:
#    None
# Side effects:
#    New/updated trend line drawn in canvas
#
proc ::Plotchart::DrawTrendLine { w series xcrd ycrd } {
    variable data_series
    variable scaling

    #
    # Check for missing values
    #
    if { $xcrd == "" || $ycrd == "" } {
        return
    }

    #
    # Compute the coefficients of the line
    #
    if { [info exists data_series($w,$series,xsum)] } {
        set nsum  [expr {$data_series($w,$series,nsum)  + 1.0}]
        set xsum  [expr {$data_series($w,$series,xsum)  + $xcrd}]
        set x2sum [expr {$data_series($w,$series,x2sum) + $xcrd*$xcrd}]
        set ysum  [expr {$data_series($w,$series,ysum)  + $ycrd}]
        set xysum [expr {$data_series($w,$series,xysum) + $ycrd*$xcrd}]
    } else {
        set nsum  [expr {1.0}]
        set xsum  [expr {$xcrd}]
        set x2sum [expr {$xcrd*$xcrd}]
        set ysum  [expr {$ycrd}]
        set xysum [expr {$ycrd*$xcrd}]
    }

    if { $nsum*$x2sum != $xsum*$xsum } {
        set a [expr {($nsum*$xysum-$xsum*$ysum)/($nsum*$x2sum - $xsum*$xsum)}]
    } else {
        set a 0.0
    }
    set b [expr {($ysum-$a*$xsum)/$nsum}]

    set xmin $scaling($w,xmin)
    set xmax $scaling($w,xmax)

    foreach {pxmin pymin} [coordsToPixel $w $xmin [expr {$a*$xmin+$b}]] {break}
    foreach {pxmax pymax} [coordsToPixel $w $xmax [expr {$a*$xmax+$b}]] {break}

    #
    # Draw the actual line
    #
    set colour "black"
    if { [info exists data_series($w,$series,-colour)] } {
        set colour $data_series($w,$series,-colour)
    }

    if { [info exists data_series($w,$series,trend)] } {
        $w coords $data_series($w,$series,trend) $pxmin $pymin $pxmax $pymax
    } else {
        set data_series($w,$series,trend) \
            [$w create line $pxmin $pymin $pxmax $pymax -fill $colour -tag [list data $w data_$series]]
    }

    $w lower [list data && $w]

    set data_series($w,$series,nsum)  $nsum
    set data_series($w,$series,xsum)  $xsum
    set data_series($w,$series,x2sum) $x2sum
    set data_series($w,$series,ysum)  $ysum
    set data_series($w,$series,xysum) $xysum
}

# VectorConfigure --
#    Set configuration options for vectors
# Arguments:
#    w           Name of the canvas
#    series      Data series (identifier for vectors)
#    args        Pairs of configuration options:
#                -scale|-colour|-centred|-type {cartesian|polar|nautical}
# Result:
#    None
# Side effects:
#    Configuration options are stored
#
proc ::Plotchart::VectorConfigure { w series args } {
    variable data_series
    variable scaling

    foreach {option value} $args {
        switch -- $option {
            "-scale" {
                if { $value > 0.0 } {
                    set scaling($w,$series,vectorscale) $value
                } else {
                    return -code error "Scale factor must be positive"
                }
            }
            "-colour" - "-color" {
                set data_series($w,$series,vectorcolour) $value
            }
            "-centered" - "-centred" {
                set data_series($w,$series,vectorcentred) $value
            }
            "-type" {
                if { [lsearch {cartesian polar nautical} $value] >= 0 } {
                    set data_series($w,$series,vectortype) $value
                } else {
                    return -code error "Unknown vector components option: $value"
                }
            }
            default {
                return -code error "Unknown vector option: $option ($value)"
            }
        }
    }
}

# DrawVector --
#    Draw a vector at the given coordinates with the given components
# Arguments:
#    w           Name of the canvas
#    series      Data series (identifier for the vectors)
#    xcrd        X coordinate of start or centre
#    ycrd        Y coordinate of start or centre
#    ucmp        X component or length
#    vcmp        Y component or angle
# Result:
#    None
# Side effects:
#    New arrow drawn in canvas
#
proc ::Plotchart::DrawVector { w series xcrd ycrd ucmp vcmp } {
    variable data_series
    variable scaling

    #
    # Check for missing values
    #
    if { $xcrd == "" || $ycrd == "" } {
        return
    }
    #
    # Check for missing values
    #
    if { $ucmp == "" || $vcmp == "" } {
        return
    }

    #
    # Get the options
    #
    set scalef  1.0
    set colour  black
    set centred 0
    set type    cartesian
    if { [info exists scaling($w,$series,vectorscale)] } {
        set scalef $scaling($w,$series,vectorscale)
    }
    if { [info exists data_series($w,$series,vectorcolour)] } {
        set colour $data_series($w,$series,vectorcolour)
    }
    if { [info exists data_series($w,$series,vectorcentred)] } {
        set centred $data_series($w,$series,vectorcentred)
    }
    if { [info exists data_series($w,$series,vectortype)] } {
        set type $data_series($w,$series,vectortype)
    }

    #
    # Compute the coordinates of beginning and end of the arrow
    #
    switch -- $type {
        "polar" {
            set x1 [expr {$ucmp * cos( 3.1415926 * $vcmp / 180.0 ) }]
            set y1 [expr {$ucmp * sin( 3.1415926 * $vcmp / 180.0 ) }]
            set ucmp $x1
            set vcmp $y1
        }
        "nautical" {
            set x1 [expr {$ucmp * sin( 3.1415926 * $vcmp / 180.0 ) }]
            set y1 [expr {$ucmp * cos( 3.1415926 * $vcmp / 180.0 ) }]
            set ucmp $x1
            set vcmp $y1
        }
    }

    set u1 [expr {$scalef * $ucmp}]
    set v1 [expr {$scalef * $vcmp}]

    foreach {x1 y1} [coordsToPixel $w $xcrd $ycrd] {break}

    if { $centred } {
        set x1 [expr {$x1 - 0.5 * $u1}]
        set y1 [expr {$y1 + 0.5 * $v1}]
    }

    set x2 [expr {$x1 + $u1}]
    set y2 [expr {$y1 - $v1}]

    #
    # Draw the arrow
    #
    $w create line $x1 $y1 $x2 $y2 -fill $colour -tag [list data $w data_$series] -arrow last
    $w lower data
}

# DotConfigure --
#    Set configuration options for dots
# Arguments:
#    w           Name of the canvas
#    series      Data series (identifier for dots)
#    args        Pairs of configuration options:
#                -radius|-colour|-classes {value colour ...}|-outline|-scalebyvalue|
#                -scale
# Result:
#    None
# Side effects:
#    Configuration options are stored
#
proc ::Plotchart::DotConfigure { w series args } {
    variable data_series
    variable scaling

    foreach {option value} $args {
        switch -- $option {
            "-scale" {
                if { $value > 0.0 } {
                    set scaling($w,$series,dotscale) $value
                } else {
                    return -code error "Scale factor must be positive"
                }
            }
            "-colour" - "-color" {
                set data_series($w,$series,dotcolour) $value
            }
            "-radius" {
                set data_series($w,$series,dotradius) $value
            }
            "-scalebyvalue" {
                set data_series($w,$series,dotscalebyvalue) $value
            }
            "-outline" {
                set data_series($w,$series,dotoutline) $value
            }
            "-classes" {
                set data_series($w,$series,dotclasses) $value
            }
            "-3deffect" {
                set data_series($w,$series,dot3deffect) $value
            }
            default {
                return -code error "Unknown dot option: $option ($value)"
            }
        }
    }
}

# DrawDot --
#    Draw a dot at the given coordinates, size and colour based on the given value
# Arguments:
#    w           Name of the canvas
#    series      Data series (identifier for the vectors)
#    xcrd        X coordinate of start or centre
#    ycrd        Y coordinate of start or centre
#    value       Value to be used
# Result:
#    None
# Side effects:
#    New oval drawn in canvas
#
proc ::Plotchart::DrawDot { w series xcrd ycrd value } {
    variable data_series
    variable scaling

    #
    # Check for missing values
    #
    if { $xcrd == "" || $ycrd == "" || $value == "" } {
        return
    }

    #
    # Get the options
    #
    set scalef   1.0
    set colour   black
    set usevalue 1
    set outline  black
    set radius   3
    set classes  {}
    set use3deffect off
    if { [info exists scaling($w,$series,dotscale)] } {
        set scalef $scaling($w,$series,dotscale)
    }
    if { [info exists data_series($w,$series,dotcolour)] } {
        set colour $data_series($w,$series,dotcolour)
    }
    if { [info exists data_series($w,$series,dotoutline)] } {
        set outline {}
        if { $data_series($w,$series,dotoutline) } {
            set outline black
        }
    }
    if { [info exists data_series($w,$series,dotradius)] } {
        set radius $data_series($w,$series,dotradius)
    }
    if { [info exists data_series($w,$series,dotclasses)] } {
        set classes $data_series($w,$series,dotclasses)
    }
    if { [info exists data_series($w,$series,dotscalebyvalue)] } {
        set usevalue $data_series($w,$series,dotscalebyvalue)
    }
    if { [info exists data_series($w,$series,dot3deffect)] } {
        set use3deffect $data_series($w,$series,dot3deffect)
    }

    #
    # Compute the radius and the colour
    #
    if { $usevalue } {
        set radius [expr {$scalef * $value}]
    }
    if { $classes != {} } {
        foreach {limit col} $classes {
            if { $value < $limit } {
                set colour $col
                break
            }
        }
    }

    foreach {x y} [coordsToPixel $w $xcrd $ycrd] {break}

    set x1 [expr {$x - $radius}]
    set y1 [expr {$y - $radius}]
    set x2 [expr {$x + $radius}]
    set y2 [expr {$y + $radius}]

    #
    # Draw the oval
    #
    $w create oval $x1 $y1 $x2 $y2 -fill $colour -tag [list data $w data_$series] -outline $outline

    #
    # 3D effect
    #
    if { $use3deffect } {

        set xcentre [expr {$x - 0.6 * $radius}]
        set ycentre [expr {$y - 0.6 * $radius}]

        set factor    1.0
        set newradius $radius
        while { $newradius > 2 } {

            set factor    [expr {$factor * 0.8}]
            set newradius [expr {$radius * $factor}]
            set newcolour [BrightenColour $colour white [expr {1.0-$factor**2}]]

            set newdot [$w create oval $x1 $y1 $x2 $y2 -fill $newcolour -outline {} \
                            -tag [list data $w data_$series]]
            $w scale $newdot $xcentre $ycentre $factor $factor
        }
    }

    set data_series($w,$series,x) $xcrd
    set data_series($w,$series,y) $ycrd

    $w lower [list data && $w]
}

# DrawRchart --
#    Draw data together with two horizontal lines representing the
#    expected range
# Arguments:
#    w           Name of the canvas
#    series      Data series
#    xcrd        X coordinate of the data point
#    ycrd        Y coordinate of the data point
# Result:
#    None
# Side effects:
#    New data point drawn, lines updated
#
proc ::Plotchart::DrawRchart { w series xcrd ycrd } {
    variable data_series
    variable scaling

    #
    # Check for missing values
    #
    if { $xcrd == "" || $ycrd == "" } {
        return
    }

    #
    # In any case, draw the data point
    #
    DrawData $w $series $xcrd $ycrd

    #
    # Compute the expected range
    #
    if { ! [info exists data_series($w,$series,rchart)] } {
        set data_series($w,$series,rchart) $ycrd
    } else {
        lappend data_series($w,$series,rchart) $ycrd

        if { [llength $data_series($w,$series,rchart)] < 2 } {
            return
        }

        set filtered $data_series($w,$series,rchart)
        set outside  1
        while { $outside } {
            set data     $filtered
            foreach {ymin ymax} [RchartValues $data] {break}
            set filtered {}
            set outside  0
            foreach y $data {
                if { $y < $ymin || $y > $ymax } {
                    set outside 1
                } else {
                    lappend filtered $y
                }
            }
        }

        #
        # Draw the limit lines
        #
        if { [info exists data_series($w,$series,rchartlimits)] } {
            eval $w delete $data_series($w,$series,rchartlimits)
        }

        set colour "black"
        if { [info exists data_series($w,$series,-colour)] } {
            set colour $data_series($w,$series,-colour)
        }

        set xmin $scaling($w,xmin)
        set xmax $scaling($w,xmax)

        foreach {pxmin pymin} [coordsToPixel $w $xmin $ymin] {break}
        foreach {pxmax pymax} [coordsToPixel $w $xmax $ymax] {break}


        set data_series($w,$series,rchartlimits) [list \
            [$w create line $pxmin $pymin $pxmax $pymin -fill $colour -tag [list data $w data_$series]] \
            [$w create line $pxmin $pymax $pxmax $pymax -fill $colour -tag [list data $w data_$series]] \
        ]
    }
}

# RchartValues --
#    Compute the expected range for a series of data
# Arguments:
#    data        Data to be examined
# Result:
#    Expected minimum and maximum
#
proc ::Plotchart::RchartValues { data } {
    set sum   0.0
    set sum2  0.0
    set ndata [llength $data]

    if { $ndata <= 1 } {
        return [list $data $data]
    }

    foreach v $data {
        set sum   [expr {$sum  + $v}]
        set sum2  [expr {$sum2 + $v*$v}]
    }

    if { $ndata < 2 } {
       return [list $v $v]
    }

    set variance [expr {($sum2 - $sum*$sum/double($ndata))/($ndata-1.0)}]
    if { $variance < 0.0 } {
        set variance 0.0
    }

    set vmean [expr {$sum/$ndata}]
    set stdev [expr {sqrt($variance)}]
    set vmin  [expr {$vmean - 3.0 * $stdev}]
    set vmax  [expr {$vmean + 3.0 * $stdev}]

    return [list $vmin $vmax]
}

# ReorderChartItems --
#    Rearrange the drawing order of time and Gantt chart items
# Arguments:
#    w           Canvas widget containing them
# Result:
#    None
#
proc ::Plotchart::ReorderChartItems { w } {

    $w lower above
    $w lower vertmask
    $w lower tline
    $w lower below
    $w lower lowest

}

# RescaleChart --
#    Reset the scaling of the scrollbar(s) for time and Gantt charts
# Arguments:
#    w           Canvas widget containing them
# Result:
#    None
# Note:
#    To be called after scaling($w,current) has been updated
#    or a new time line has been added
#
proc ::Plotchart::RescaleChart { w } {
    variable scaling

    if { [info exists scaling($w,vscroll)] } {
        if { $scaling($w,current) >= 0.0 } {
            set scaling($w,theight) $scaling($w,ymax)
            $scaling($w,vscroll) set 0.0 1.0
        } else {
            set scaling($w,theight) [expr {$scaling($w,ymax)-$scaling($w,current)}]
            $scaling($w,vscroll) set $scaling($w,curpos) \
                [expr {$scaling($w,curpos) + $scaling($w,ymax)/$scaling($w,theight)}]
        }
    }

    if { [info exists scaling($w,hscroll)] } {
        foreach {xmin dummy xmax} [$w bbox $w horizscroll] {break}
        set scaling($w,twidth) [expr {$xmax-$xmin}]
        if { $scaling($w,twidth) < $scaling($w,pxmax)-$scaling($w,pxmin) } {
            $scaling($w,hscroll) set 0.0 1.0
        } else {
            $scaling($w,hscroll) set $scaling($w,curhpos) \
                [expr {$scaling($w,curhpos) + \
                         ($scaling($w,pxmax)-$scaling($w,pxmin)) \
                         /double($scaling($w,twidth))}]
        }
    }
}

# ConnectVertScrollbar --
#    Connect a vertical scroll bar to the chart
# Arguments:
#    w           Canvas widget containing them
#    scrollbar   Scroll bar in question
# Result:
#    None
#
proc ::Plotchart::ConnectVertScrollbar { w scrollbar } {
    variable scaling

    $scrollbar configure -command [list ::Plotchart::VertScrollChart $w]
    bind $w <4> [list ::Plotchart::VertScrollChart $w scroll  -1 units]
    bind $w <5> [list ::Plotchart::VertScrollChart $w scroll   1 units]
    bind $w <MouseWheel> [list ::Plotchart::VertScrollChart $w scroll %D wheel]
    set scaling($w,vscroll) $scrollbar

    RescaleChart $w
}

# ConnectHorizScrollbar --
#    Connect a horizontal scroll bar to the chart
# Arguments:
#    w           Canvas widget containing them
#    scrollbar   Scroll bar in question
# Result:
#    None
#
proc ::Plotchart::ConnectHorizScrollbar { w scrollbar } {
    variable scaling

    $scrollbar configure -command [list ::Plotchart::HorizScrollChart $w]
    set scaling($w,hscroll) $scrollbar

    RescaleChart $w
}

# VertScrollChart --
#    Scroll a chart using the vertical scroll bar
# Arguments:
#    w           Canvas widget containing them
#    operation   Operation to respond to
#    number      Number representing the size of the displacement
#    unit        Unit of displacement
# Result:
#    None
#
proc ::Plotchart::!VertScrollChart { w operation number {unit {}}} {
    variable scaling

    set pixheight [expr {$scaling($w,pymax)-$scaling($w,pymin)}]
    set height    [expr {$pixheight*$scaling($w,theight)/$scaling($w,ymax)}]

    switch -- $operation {
        "moveto" {
            set dy                 [expr {$height*($scaling($w,curpos)-$number)}]
            set scaling($w,curpos) $number
        }
        "scroll" {
            if { $unit == "units" } {
                set dy     [expr {-$number*$height/$scaling($w,theight)}]
                set newpos [expr {$scaling($w,curpos) + $number/$scaling($w,theight)}]
            } else {
                set dy     [expr {-$number*$pixheight}]
                set newpos [expr {$scaling($w,curpos) + $number*$scaling($w,ymax)/$scaling($w,theight)}]
            }

            # TODO: guard against scrolling too far
            #if { $newpos < 0.0 } {
            #    set newpos 0.0
            #    set dy     [expr {$...}]
            #}
            #
            #if { $newpos > 1.0 } {
            #    set newpos 1.0
            #    set dy     [expr {$...}]
            #}
            set scaling($w,curpos) $newpos
        }
    }

    #
    # TODO: limit the position between 0 and 1
    #

    $w move vertscroll 0 $dy

    RescaleChart $w
}
proc ::Plotchart::VertScrollChart { w operation number {unit {}}} {
    variable scaling

    # Get the height of the scrolling region and the current position of the slider
    set height [expr {$scaling($w,pymax)-$scaling($w,pymin)}]
    foreach {ts bs} [$scaling($w,vscroll) get] {break}

    if { $unit == "wheel" } {
        set operation "scroll"
        set unit      "units"
        set number    [expr {$number>0? 1 : -1}]
    }

    switch -- $operation {
        "moveto" {
            # No scrolling if we are already at the top or bottom
            if { $number < 0.0 } {
                set number 0.0
            }
            if { $number+($bs-$ts) > 1.0 } {
                set number [expr {1.0-($bs-$ts)}]
            }
            set dy     [expr {$height*($scaling($w,curpos)-$number)/($bs-$ts)}]
            set scaling($w,curpos) $number
            $w move vertscroll 0 $dy
        }
        "scroll" {
            # Handle "units" and "pages" the same

            # No scrolling if we are at the top or bottom
            if {$number == -1 && $ts == 0.0} {
                return
            }

            if {$number == 1 && $bs == 1.0} {
                return
            }

            # Scroll 1 unit in coordinate space, converted to pixel space
            foreach {x1 y1} [coordsToPixel $w 0 0.0] {break}
            foreach {x2 y2} [coordsToPixel $w 0 1.0] {break}

            # This is the amount to scroll based on the current height
            set amt [expr {$number*($y2-$y1)/$height}]

            # Handle boundary conditions, don't want to scroll too far off
            # the top or bottom.
            if {$number == 1 && $bs-$amt > 1.0} {
                set amt [expr {$bs-1.0}]
            } elseif {$number == -1 && $ts-$amt < 0.0} {
                set amt $ts
            }

            # Set the scrolling parameters and scroll
            set dy  [expr {$height*($scaling($w,curpos)-($ts-$amt))/($bs-$ts)}]
            set scaling($w,curpos) [expr {$ts-$amt}]
            $w move vertscroll 0 $dy
        }
    }

    RescaleChart $w
}

# HorizScrollChart --
#    Scroll a chart using the horizontal scroll bar
# Arguments:
#    w           Canvas widget containing them
#    operation   Operation to respond to
#    number      Number representing the size of the displacement
#    unit        Unit of displacement
# Result:
#    None
#
proc ::Plotchart::HorizScrollChart { w operation number {unit {}}} {
    variable scaling

    # Get the width of the scrolling region and the current position of the slider
    set width [expr {double($scaling($w,pxmax)-$scaling($w,pxmin))}]
    foreach {ts bs} [$scaling($w,hscroll) get] {break}

    switch -- $operation {
        "moveto" {
            # No scrolling if we are already at the top or bottom
            if { $number < 0.0 } {
                set number 0.0
            }
            if { $number+($bs-$ts) > 1.0 } {
                set number [expr {1.0-($bs-$ts)}]
            }
            set dx     [expr {$width*($scaling($w,curhpos)-$number)/($bs-$ts)}]
            set scaling($w,curhpos) $number
            $w move horizscroll $dx 0
        }
        "scroll" {
            # Handle "units" and "pages" the same

            # No scrolling if we are at the top or bottom
            if {$number == -1 && $ts == 0.0} {
                return
            }

            if {$number == 1 && $bs == 1.0} {
                return
            }

            # Scroll 1 unit in coordinate space, converted to pixel space
            set dx [expr {0.1*($scaling($w,xmax)-$scaling($w,xmin))}]
            foreach {x1 y1} [coordsToPixel $w 0   0.0] {break}
            foreach {x2 y2} [coordsToPixel $w $dx 0.0] {break}

            # This is the amount to scroll based on the current width
            set amt [expr {$number*($x2-$x1)/$width}]

            # Handle boundary conditions, don't want to scroll too far off
            # the left or the right
            if {$number == 1 && $bs-$amt > 1.0} {
                set amt [expr {$bs-1.0}]
            } elseif {$number == -1 && $ts-$amt < 0.0} {
                set amt $ts
            }

            # Set the scrolling parameters and scroll
            set dx  [expr {$width*($scaling($w,curhpos)-($ts-$amt))/($bs-$ts)}]
            set scaling($w,curhpos) [expr {$ts-$amt}]
            $w move horizscroll $dx 0
        }
    }

    RescaleChart $w
}

# DrawWindRoseData --
#    Draw the data for each sector
# Arguments:
#    w           Name of the canvas
#    data        List of "sectors" data
#    colour      Colour to use
# Result:
#    None
# Side effects:
#    Data added to the wind rose
#
proc ::Plotchart::DrawWindRoseData { w data colour } {

    variable data_series

    set start_angle  $data_series($w,start_angle)
    set increment    $data_series($w,increment_angle)
    set width_sector $data_series($w,d_angle)

    set new_cumulative {}

    foreach value $data cumulative_radius $data_series($w,cumulative_radius) {
        set radius [expr {$value + $cumulative_radius}]

        foreach {xright ytop}    [polarToPixel $w [expr {$radius*sqrt(2.0)}]  45.0] {break}
        foreach {xleft  ybottom} [polarToPixel $w [expr {$radius*sqrt(2.0)}] 225.0] {break}

        $w create arc $xleft $ytop $xright $ybottom -style pie -fill $colour \
            -tag [list $w data_$data_series($w,count_data)] -start $start_angle -extent $width_sector

        lappend new_cumulative $radius

        set start_angle [expr {$start_angle - $increment}]
    }

    $w lower [list data_$data_series($w,count_data) && $w]

    set data_series($w,cumulative_radius) $new_cumulative
    incr data_series($w,count_data)
}

# DrawYband --
#    Draw a vertical grey band in a plot
# Arguments:
#    w           Name of the canvas
#    xmin        Lower bound of the band
#    xmax        Upper bound of the band
# Result:
#    None
# Side effects:
#    Horizontal band drawn in canvas
#
proc ::Plotchart::DrawYband { w xmin xmax } {
    variable scaling


    foreach {xp1 yp1} [coordsToPixel $w $xmin $scaling($w,ymin)] {break}
    foreach {xp2 yp2} [coordsToPixel $w $xmax $scaling($w,ymax)] {break}

    $w create rectangle $xp1 $yp1 $xp2 $yp2 -fill grey70 -outline grey70 -tag [list band $w]

    $w lower [list band && $w] ;# TODO: also in "plot" method
}

# DrawXband --
#    Draw a horizontal grey band in a plot
# Arguments:
#    w           Name of the canvas
#    ymin        Lower bound of the band
#    ymax        Upper bound of the band
# Result:
#    None
# Side effects:
#    Horizontal band drawn in canvas
#
proc ::Plotchart::DrawXband { w ymin ymax } {
    variable scaling


    foreach {xp1 yp1} [coordsToPixel $w $scaling($w,xmin) $ymin] {break}
    foreach {xp2 yp2} [coordsToPixel $w $scaling($w,xmax) $ymax] {break}

    $w create rectangle $xp1 $yp1 $xp2 $yp2 -fill grey70 -outline grey70 -tag [list band $w]

    $w lower [list band $w] ;# TODO: also in "plot" method
}

# DrawLabelDot --
#    Draw a label and a symbol (dot) in a plot
# Arguments:
#    w           Name of the canvas
#    x           X coordinate of the dot
#    y           Y coordinate of the dot
#    text        Text to be shown
#    orient      (Optional) orientation of the text wrt the dot
#                (w, e, n, s)
#
# Result:
#    None
# Side effects:
#    Label and dot drawn in canvas
# Note:
#    The routine uses the data series name "labeldot" to derive
#    the properties
#
proc ::Plotchart::DrawLabelDot { w x y text {orient w} } {
    variable scaling

    foreach {xp yp} [coordsToPixel $w $x $y] {break}

    switch -- [string tolower $orient] {
        "w" {
            set xp [expr {$xp - 5}]
            set anchor e
        }
        "e" {
            set xp [expr {$xp + 10}]
            set anchor w
        }
        "s" {
            set yp [expr {$yp + 5}]
            set anchor n
        }
        "n" {
            set yp [expr {$yp - 5}]
            set anchor s
        }
        default {
            set xp [expr {$xp - 5}]
            set anchor w
        }
    }

    $w create text $xp $yp -text $text -fill grey -tag [list data $w] -anchor $anchor
    DrawData $w labeldot $x $y
}

# DrawLabelDotPolar --
#    Draw a label and a symbol (dot) in a polar plot
# Arguments:
#    w           Name of the canvas
#    rad         Radial coordinate of the dot
#    angle       Tangential coordinate of the dot
#    text        Text to be shown
#    orient      (Optional) orientation of the text wrt the dot
#                (w, e, n, s)
#
# Result:
#    None
# Side effects:
#    Label and dot drawn in canvas
# Note:
#    The routine uses the data series name "labeldot" to derive
#    the properties
#
proc ::Plotchart::DrawLabelDotPolar { w rad angle text {orient w} } {
    variable torad

    set xcrd [expr {$rad*cos($angle*$torad)}]
    set ycrd [expr {$rad*sin($angle*$torad)}]

    DrawLabelDot $w $xcrd $ycrd $text $orient
}

# ConfigBar --
#    Configuration options for vertical and horizontal barcharts
# Arguments:
#    w           Name of the canvas
#    args        List of arguments
# Result:
#    None
# Side effects:
#    Items that are already visible will NOT be changed to the new look
#
proc ::Plotchart::ConfigBar { w args } {
    variable settings

    foreach {option value} $args {
        set option [string range $option 1 end]
        if { [lsearch {showvalues valuefont valuecolour valuecolor valueformat} \
                $option] >= 0} {
            if { $option == "valuecolor" } {
                set option "valuecolour"
            }
            set settings($w,$option) $value
        } else {
            return -code error "Unknown barchart option: -$option"
        }
    }
}

# DrawFunction --
#    Draw a function f(x) in an XY-plot
# Arguments:
#    w           Name of the canvas
#    series      Data series (for the colour)
#    xargs       List of arguments to the (anonymous) function
#    function    Function expression
#    args        All parameters in the expression
#                (and possibly the option -samples x)
# Result:
#    None
# Side effects:
#    New data drawn in canvas
#
# Note:
#    This method requires Tcl 8.5
#
# TODO:
#    Check for numerical problems!
#
proc ::Plotchart::DrawFunction { w series xargs function args } {
   variable data_series
   variable scaling

   #
   # Check the number of arguments
   #
   if { [llength $xargs]     != [llength $args] + 1 &&
        [llength $xargs] + 2 != [llength $args] + 1 } {
       return -code error "plotfunc: number of (extra) arguments does not match the list of variables"
   }

   #
   # Determine the number of samples
   #
   set number 50
   if { [llength $xargs] + 2 == [llength $args] + 1 } {
       if { [lindex $args end-1] != "-samples" } {
           return -code error "plotfunc: unknown option - [lindex $args end-1]"
       }
       if { ! [string is integer [lindex $args end]] } {
           return -code error "plotfunc: number of samples must be an integer - is instead \"[lindex $args end]\""
       }
       set number [lindex $args end]
       set args   [lrange $args 0 end-2]
   }

   #
   # Get the caller's namespace
   #
   set namespace [uplevel 2 {namespace current}]

   #
   # The actual drawing
   #
   set colour black
   if { [info exists data_series($w,$series,-colour)] } {
      set colour $data_series($w,$series,-colour)
   }

   set width 1
   if { [info exists data_series($w,$series,-width)] } {
      set width $data_series($w,$series,-width)
   }

   set xmin   $scaling($w,xmin)
   set dx     [expr {($scaling($w,xmax) - $xmin) / ($number - 1.0)}]

   set coords {}
   set lambda [string map [list XARGS $xargs FUNCTION $function NS $namespace] {{XARGS} {expr {FUNCTION}} NS}]

   for { set i 0 } { $i < $number } { incr i } {
       set x [expr {$xmin + $dx*$i}]

       if { [catch {
           set y [apply $lambda $x {*}$args]

           foreach {pxcrd pycrd} [coordsToPixel $w $x $y] {break}

           lappend coords $pxcrd $pycrd
       } msg] } {
           if { [llength $coords] > 2 } {
               $w create line $coords -fill $colour -smooth 1 -width $width -tag [list data $w data_$series]
               set coords {}
           }
       }

   }
   if { [llength $coords] > 2 } {
       $w create line $coords -fill $colour -smooth 1 -width $width -tag [list data $w data_$series]
   }

   $w lower [list data && $w]
}

# ClearPlot --
#     Clear the current canvas and associated data
#     in order to be able to draw another plot
#     and re-using the same canvas
#
# Arguments:
#     w        Name of the canvas
#
# Results:
#     None
#
# Side effects:
#   all objects on the canvas will be deleted
#   and all associated data removed
#
proc ::Plotchart::ClearPlot {w} {
    variable data_series
    variable scaling

    foreach s [array names data_series "*$w,*"] {
        unset data_series($s)
    }
    foreach s [array names scaling "*$w,*"] {
        unset scaling($s)
    }
    #$w delete $w
}

# NewPlotInCanvas --
#     Determine the name for the new plot
#
# Arguments:
#     c  Name of the canvas
#
# Results:
#     Unique name for the plot
#
proc ::Plotchart::NewPlotInCanvas {c} {
    variable scaling

    if { ! [info exists scaling($c,plots)] } {
        set scaling($c,plots) 0
    } else {
        incr scaling($c,plots)
    }

    return [format "%02d%s" $scaling($c,plots) $c]
}

# DrawDataList --
#    Draw the data contained in two lists in an XY-plot
# Arguments:
#    w           Name of the canvas
#    series      Data series
#    xlist       List of x coordinates
#    ylist       List of y coordinates
#    every       Draw a symbol every N data
# Result:
#    None
# Side effects:
#    New data drawn in canvas
#
proc ::Plotchart::DrawDataList { w series xlist ylist {every {}} } {
    variable data_series
    variable scaling

    if { $every == {} } {
        set every [expr {int(sqrt([llength $xlist]))}]
        if { [llength $xlist] < 10 } {
            set every 1
        }
    }

    #
    # Determine the properties
    #
    set colour "black"
    if { [info exists data_series($w,$series,-colour)] } {
       set colour $data_series($w,$series,-colour)
    }

    set type "line"
    if { [info exists data_series($w,$series,-type)] } {
       set type $data_series($w,$series,-type)
    }
    set filled "no"
    if { [info exists data_series($w,$series,-filled)] } {
       set filled $data_series($w,$series,-filled)
    }
    set fillcolour white
    if { [info exists data_series($w,$series,-fillcolour)] } {
       set fillcolour $data_series($w,$series,-fillcolour)
    }
    set width 1
    if { [info exists data_series($w,$series,-width)] } {
       set width $data_series($w,$series,-width)
    }

    #
    # Draw all data
    # For the moment: no continuation!
    #
    if { [info exists data_series($w,$series,x)] } {
        set xold    $data_series($w,$series,x)
        set yold    $data_series($w,$series,y)

        set pcoords [coordsToPixel $w $xold $yold]

    } else {
        set xold    {}
        set yold    {}
        set pcoords {}
    }

    foreach xcrd $xlist ycrd $ylist {
        #
        # Check for missing values
        #
        if { $xcrd == "" || $ycrd == "" } {
            if { $pcoords != {} } {
                if { $type == "line" || $type == "both" } {
                    $w create line $pcoords \
                             -fill $colour -width $width -tag [list data $w data_$series]
                }
            }
            set pcoords {}
            continue
        } else {

            foreach {pxcrd pycrd} [coordsToPixel $w $xcrd $ycrd] {break}
            lappend pcoords $pxcrd $pycrd
        }
    }
    set data_series($w,$series,x) $xcrd
    set data_series($w,$series,y) $ycrd

    if { $pcoords != {} } {
        if { $type == "line" || $type == "both" } {
            $w create line $pcoords \
                     -fill $colour -width $width -tag [list data $w data_$series]
        }
    }

    if { $type == "symbol" || $type == "both" } {
        set symbol "dot"
        if { [info exists data_series($w,$series,-symbol)] } {
           set symbol $data_series($w,$series,-symbol)
        }
        for {set i 0} {$i < [llength $xlist]} {incr i $every} {
            set xcrd [lindex $xlist $i]
            set ycrd [lindex $ylist $i]

            if { $xcrd != {} && $ycrd != {} } {
                foreach {pxcrd pycrd} [coordsToPixel $w $xcrd $ycrd] {break}

                DrawSymbolPixel $w $series $pxcrd $pycrd $symbol $colour [list data $w data_$series]
            }
        }
    }

    $w lower [list data && $w]
}

# DrawTernaryLine --
#    Draw a line given by a list of data points in a ternary diagram
# Arguments:
#    w           Name of the canvas
#    series      Data series
#    coords      List of X,Y,Z coordinates
# Result:
#    None
# Side effects:
#    New line drawn in canvas
#
proc ::Plotchart::DrawTernaryLine { w series coords } {
   variable data_series
   variable scaling

   set pcoords {}
   foreach {xcrd ycrd zcrd} $coords {
       foreach {pxcrd pycrd} [coordsToPixel $w $xcrd $ycrd $zcrd] {break}
       lappend pcoords $pxcrd $pycrd
   }

   set colour "black"
   if { [info exists data_series($w,$series,-colour)] } {
      set colour $data_series($w,$series,-colour)
   }
   set smooth 0
   if { [info exists data_series($w,$series,-smooth)] } {
      set smooth $data_series($w,$series,-smooth)
   }
   set width 1
   if { [info exists data_series($w,$series,-width)] } {
      set colour $data_series($w,$series,-width)
   }

   $w create line $pcoords -fill $colour -smooth $smooth -width $width -tags [list data data_$series]

   $w lower data
}

# DrawTernaryFill --
#    Draw a filled polygon given by a list of data points in a ternary diagram
# Arguments:
#    w           Name of the canvas
#    series      Data series
#    coords      List of X,Y,Z coordinates
# Result:
#    None
# Side effects:
#    New polygon drawn in canvas
#
proc ::Plotchart::DrawTernaryFill { w series coords } {
   variable data_series
   variable scaling

   set pcoords {}
   foreach {xcrd ycrd zcrd} $coords {
       foreach {pxcrd pycrd} [coordsToPixel $w $xcrd $ycrd $zcrd] {break}
       lappend pcoords $pxcrd $pycrd
   }

   set colour "black"
   if { [info exists data_series($w,$series,-colour)] } {
      set colour $data_series($w,$series,-colour)
   }
   set smooth 0
   if { [info exists data_series($w,$series,-smooth)] } {
      set smooth $data_series($w,$series,-smooth)
   }
   set width 1
   if { [info exists data_series($w,$series,-width)] } {
      set colour $data_series($w,$series,-width)
   }

   $w create polygon $pcoords -outline $colour -fill $colour -smooth $smooth -width $width \
       -tags [list data data_$series]

   $w lower data
}

# RenderText --
#    Draw the specified text into a plot using special rendering tags
# Arguments:
#    w           Name of the canvas
#    x           canvas x coordinate
#    y           canvas y coordinate
#    args        the text to render and additional text formatting information as option value pairs
# Result:
#    None
# Side effects:
#    Text String drawn in canvas
#
proc ::Plotchart::RenderText { w x y args } {
   variable render
   set render(poshoriz) $x
   set render(posvert) $y
   set render(items) [list]
   set render(superFont) {}
   set render(subFont) {}

   array set options {-font {} -text {} -fill {} -anchor c -tags {}}
   # specified options:
   array set options $args
   # options to actually use:
   array set newOptions $args
   array unset newOptions -text
   # use this -anchor for now, correct later:
   set newOptions(-anchor) sw

   # do the rendering:
   foreach {text tag} $options(-text) {
       lassign [RenderSpecs $tag $options(-font)] xp1 yp1 xp2 yp2 advance newFont
       set newOptions(-font) $newFont
       RenderTextDo $w $text $xp1 $yp1 $xp2 $yp2 $advance [array get newOptions]
   }

   # fix the -anchor for the whole string:
   set bbox [$w bbox {*}$render(items)]
   lassign $bbox bx1 by1 bx2 by2
   lassign {0 0} dx dy
   # dy:
   switch $options(-anchor) {
       n - nw - ne {
          set dy [expr {$by2 - $by1}]
       }
       w - e - c {
          set dy [expr {($by2 - $by1)/2.0}]
       }
   }
   # dx:
   switch $options(-anchor) {
       c - n - s {
          set dx [expr {($bx1-$bx2)/2.0}]
       }
       ne - e - se {
          set dx [expr {$bx1-$bx2}]
       }
   }
   foreach item $render(items) {$w move $item $dx $dy}
}

# renderSpecs --
#    Read a render tag and determine the position of the
#    associated text string
#
# Arguments:
#    tag    tag to get specifications for
#    font   font requested by the user
#
# Result:
#    List of specs with relative positions, advancing information, and the font to use
#
proc ::Plotchart::RenderSpecs {tag font} {
   variable render
   set advance 1
   set xp1     0 ;# how much to add to x coord before drawing
   set yp1     0 ;# how much to add to y coord before drawing
   set xp2     0 ;# how much to add to x coord afer drawing
   set yp2     0 ;# how much to add to y coord after drawing

   switch -- $tag {
       "_" { # Subscript
           if {$render(subFont) eq ""} {
               set render(subFont) [font create {*}[font configure $font]]
               set fontsize [font configure $font -size]
               set fontsize [expr {round($fontsize * 3.0/5.0)}]
               font configure $render(subFont) -size $fontsize
           } else {
               set fontsize [$render(subFont) configure -size]
           }
           set tmpFont $render(subFont)
           set yp1 [expr {round($fontsize/3.0)}]
           set yp2 [expr {-1 * $yp1}]
           set xp1 [expr {round($fontsize/-5.0)}]
           set xp2 [expr {round($fontsize/-5.0)}]
           set advance 1
        }
       "^" { # Superscript
             if {$render(subFont) eq ""} {
                 set render(superFont) [font create {*}[font configure $font]]
                 set fontsize [font configure $font -size]
                 set fontsize [expr {round($fontsize * 3.0/5.0)}]
                 font configure $render(superFont) -size $fontsize
             } else {
                 set fontsize [$render(superFont) configure -size]
             }
             set tmpFont $render(superFont)
             set yp1 [expr {round($fontsize/-1.5)}]
             set yp2 [expr {-1 * $yp1}]
             set xp1 [expr {round($fontsize/-5.0)}]
             set xp2 [expr {round($fontsize/-5.0)}]
             set advance 1
           }
       default {
           set tmpFont $font
       }
   }
   return [list $xp1 $yp1 $xp2 $yp2 $advance $tmpFont]
}

# doRender --
#    Render the given string according to the additional
#    rendering information
#
# Arguments:
#    canvas       Canvas in which to draw
#    string       text to be rendered
#    xp1          X-offset relative to current position before drawing
#    yp1          Y-offset relative to current position before drawing
#    xp2          X-offset after drawing
#    yp2          Y-offset after drawing
#    advance      whether we should advance to the next x position
#    fontOptions  list of pairs with formatting info for the font to use
#
# Result:
#    None
#
# Side effect:
#    The token is drawn on the canvas
#
proc ::Plotchart::RenderTextDo {canvas string xp1 yp1 xp2 yp2 advance fontOptions} {
   variable render

   # new coords where to start drawing text:
   set xpos [expr {$render(poshoriz)+$xp1}]
   set ypos [expr {$render(posvert)+$yp1}]

   set item [$canvas create text $xpos $ypos -text $string {*}$fontOptions]
   lappend render(items) $item
   set bbox [$canvas bbox $item]
   set width [expr {[lindex $bbox 2]-[lindex $bbox 0]}]
   set xpos [expr {$xpos+$width+$xp2}]
   set ypos [expr {$ypos+$yp2}]

   if {$advance} {
      set render(poshoriz) $xpos
      set render(posvert) $ypos
   }
}

# DeleteData --
#     Delete the data elements and the associated resources
#
# Arguments:
#     w          Name of the canvas (actually the plot)
#
# Result:
#     None
# Side effects:
#     The data elements in the canvas are removed and the
#     last known data points are removed from the resources.
#     However, the rest (legend, options for data series) is not.
#     This is deliberate: you may simply want to refresh the
#     data.
#
proc ::Plotchart::DeleteData {w} {
    variable data_series
    variable scaling

    foreach elem [array names data_series $w,*,x] {
         unset -nocomplain data_series($elem)
    }

    $w delete data
}
