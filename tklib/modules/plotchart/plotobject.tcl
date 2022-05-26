# plotobject.tcl --
#     Routine to plot arbitrary canvas items into plots
#

namespace eval ::Plotchart {
    #
    # Settings and variable for the DrawObject method
    #
    # Possible standard canvas item types
    #
    variable canvasObject
    set canvasObject(StandardTypes) {arc line oval polygon rectangle text bitmap image window}

    #
    # Additional custom item types
    #
    set canvasObject(CustomTypes) {circle dot cross}

    #
    # All item types together
    #
    set canvasObject(AllTypes) [list]
    foreach cElement $canvasObject(StandardTypes) {
        lappend canvasObject(AllTypes) $cElement
    }
    foreach cElement $canvasObject(CustomTypes) {
        lappend canvasObject(AllTypes)  $cElement
    }
    foreach {itemType ignoredOptions mappedOptions defaultValues} {
        arc
        {-symbol -type -filled -boxwidth -whisker -whiskerwidth -mediancolour -medianwidth}
        {-color -outline -colour -outline -fillcolor -fill}
        {}

        line
        {-symbol -type -filled -fillcolour -boxwidth -whisker -whiskerwidth -mediancolour -medianwidth}
        {-color -fill -colour -fill}
        {}

        oval
        {-symbol -type -filled -boxwidth -whisker -whiskerwidth -mediancolour -medianwidth}
        {-color -outline -colour -outline -fillcolor -fill}
        {}

        polygon
        {-symbol -type -filled -boxwidth -whisker -whiskerwidth -mediancolour -medianwidth}
        {-color -outline -colour -outline -fillcolor -fill}
        {}

        rectangle
        {-symbol -type -filled -boxwidth -whisker -whiskerwidth -mediancolour -medianwidth}
        {-color -outline -colour -outline -fillcolor -fill}
        {}

        text
        {-symbol -type -filled -fillcolour -boxwidth -width -whisker -whiskerwidth -mediancolour -medianwidth}
        {-colour -fill -color -fill}
        {}

        bitmap
        {-color -colour -symbol -type -filled -fillcolour -boxwidth -width -whisker -whiskerwidth -mediancolour -medianwidth}
        {}
        {}

        image
        {-color -colour -symbol -type -filled -fillcolour -boxwidth -width -whisker -whiskerwidth -mediancolour -medianwidth}
        {}
        {}

        window
        {-color -colour -symbol -type -filled -fillcolour -boxwidth -width -whisker -whiskerwidth -mediancolour -medianwidth}
        {}
        {}

        circle
        {-symbol -type -filled -boxwidth -whisker -whiskerwidth -mediancolour -medianwidth}
        {-colour -color -fillcolour -fillcolor -width -diameter}
        {-fillcolor {} -color black -diameter 10 -width 1}

        dot
        {-symbol -type -filled -boxwidth -whisker -whiskerwidth -mediancolour -medianwidth}
        {-colour -color -fillcolor -color -width -diameter}
        {-diameter 1 -color black}

        cross
        {-symbol -type -filled -boxwidth -whisker -whiskerwidth -mediancolour -medianwidth}
        {-colour -color -fillcolor -color}
        {-diameter 10 -color black -width 1 -capstyle butt}
    } {
        #
        # These options from the series are ignored in the corresponding canvas item:
        #
        set canvasObject($itemType,ignored) $ignoredOptions

        #
        # These are a mapping from series/object option names to canvas item type names:
        #
        set canvasObject($itemType,mapping) $mappedOptions

        #
        # This is a list of object options and their default values:
        #
        set canvasObject($itemType,defaults) $defaultValues
    }
}


# DrawObject --
#     Draw some canvas item onto the chart using chart coordinates
#
# Arguments:
#     w              Name of the canvas
#     item           Type of item
#     series         Name of the plotting series, used for default drawing options
#     args           List holding coordinates as the first elements of args (only numerical values)
#                    and additional configuration option value pairs thereafter
#                    (no numerical options; according to the canvas item)
#
# Result:
#     Id of the newly created canvas item
#
# Note: The special construct of 'args' makes it possible to
#       specify the coords as one list or as single arguments
#       just like the canvas items do
#
proc ::Plotchart::DrawObject {w item series args} {
    variable data_series
    variable canvasObject
    variable config

    #
    # check for existent object types
    #
    if {[lsearch -exact $canvasObject(AllTypes) $item] < 0} {
            return -code error "no such canvas object: $item"
    }

    #
    # Split coords from args
    #
    if {[llength [lindex $args 0]] > 1} {
        #
        # Coordinates specified as one list:
        #
        set coords [lindex $args 0]
        set arguments [lrange $args 1 end]
    } else {
        #
        # Coordinates specified as single args -> find first non-numerical arg:
        # (the following is not strictly correct, but will do the job in this case)
        #
        set startIndex [lsearch -regexp -not $args {^[-+]?\.?[0-9]+}]
        switch $startIndex  {
            0 {return -code error "no coordinates given for $item object"}
            -1 {
                set arguments {}
                set coords $args
            }
            default {
                set arguments [lrange $args $startIndex end]
                incr startIndex -1
                set coords [lrange $args 0 $startIndex]
            }
        }
    }

    #
    # Transform coodinates into pixels:
    #
    if {[info exists config($w,object,transposecoordinates)] && $config($w,object,transposecoordinates)} {
        #
        # Transposed coordinates
        #
        foreach {y x} $coords {
            foreach {pxcrd pycrd} [::Plotchart::coordsToPixel $w $x $y] {break}
            lappend pcoords $pxcrd $pycrd
        }
    } else {
        foreach {x y} $coords {
            foreach {pxcrd pycrd} [::Plotchart::coordsToPixel $w $x $y] {break}
            lappend pcoords $pxcrd $pycrd
        }
    }

    #
    # Initialize with default options (only applicable to custom canvas objects)
    #
    if {[lsearch -exact $canvasObject(CustomTypes) $item] >= 0} {
        array set options $canvasObject($item,defaults)
    }

    #
    # Inherit options from the specified series
    #
    foreach key [array names data_series $w,$series,*] {
        set opt [lindex [split $key ,] end]

        #
        # Ignore non-options in data_series:
        #
        if {[string index $opt 0] ne "-"} {
            continue
        }

        #
        # Ignore non-existant canvas item option:
        #
        if {[lsearch -exact $canvasObject($item,ignored) $opt] >= 0} {
            continue
        }

        #
        # Map option to the corresponding canvas item type option:
        #
        set opt [string map $canvasObject($item,mapping) $opt]

        #
        # Finally save the option:
        #
        set options($opt) $data_series($key)
    }

    #
    # Load user specied options (merging with existing options)
    # and again map to the corresponding canvas item type options
    #
    foreach {userOpt userVal} $arguments {
            set userOpt [string map $canvasObject($item,mapping) $userOpt]
            set options($userOpt) $userVal
    }

    #
    # Create the item
    #
    if {[lsearch -exact $canvasObject(StandardTypes) $item] >= 0} {
        set id [$w create $item $pcoords]

        #
        # configure the item accordingly:
        #
        foreach {option value} [array get options] {
            $w itemconfigure $id $option $value
        }
    } else {
        set diff [expr {$options(-diameter)/2.0}]
        foreach {pxcrd pycrd} $pcoords {break}
        set pxcrd1 [expr {$pxcrd - $diff}]
        set pycrd1 [expr {$pycrd + $diff}]
        set pxcrd2 [expr {$pxcrd + $diff}]
        set pycrd2 [expr {$pycrd - $diff}]
        switch $item {
            circle {
                set id [$w create oval $pxcrd1 $pycrd1 $pxcrd2 $pycrd2 \
                        -fill $options(-fillcolor) -outline $options(-color) -width $options(-width)]
            }
            dot {
                set id [$w create oval $pxcrd1 $pycrd1 $pxcrd2 $pycrd2 -fill $options(-color) -outline {}]
            }
            cross {
                set id [$w create line $pxcrd1 $pycrd $pxcrd2 $pycrd \
                        -fill $options(-color) -width $options(-width) -capstyle $options(-capstyle)]
                set tag canvCross_$id
                $w itemconfigure $id -tags $tag
                $w create line $pxcrd $pycrd1 $pxcrd $pycrd2 \
                        -fill $options(-color) -width $options(-width) -tags $tag -capstyle $options(-capstyle)
                set id $tag
            }
        }
    }
    # add the tag 'object'
    $w addtag object withtag $id
    # return the canvas item id or tag, so the user can further manupulate it:
    return $id
}
