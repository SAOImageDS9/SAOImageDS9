# plotconfig.tcl --
#     Facilities for configuring the various procedures of Plotchart
#


# plotstyle --
#     Plotting style mechanism (this proc needs to be first in this file, since
#                               the namespace eval uses this proc)
#
# Arguments:
#     cmd         subcommand to the plotstyle command
#                 Can be configure|current|load|merge|names ('merge' not implemented yet)
#     stylename   symbolic name of the style (defaults to 'default')
#     args        additional optional arguments (only used in 'configure' subcommand)
#
# Result:
#     The name of the current style (for subcommand 'current'),
#     a list of available styles (for subcommand 'names'),
#     else the empty string
#
# Side effects:
#     Styles are created, loaded, or modified
#
proc ::Plotchart::plotstyle {cmd {stylename default} args} {
    variable style
    variable config
    switch $cmd {
        configure {
            #
            # 'plotstyle configure stylename type component property value ?type component property value ...?'
            #
            # register the 'default' style:
            set newStyle false
            if { [lsearch -exact $config(styles) $stylename] < 0 } {
                # this is a new style -> register it:
                lappend config(styles) $stylename
                set newStyle true
            }
            foreach {type component property value} $args {
                set style($stylename,$type,$component,$property) $value
                if { $newStyle } {
                    # also save the item as default, so it can be restored via plotconfig:
                    set style($stylename,$type,$component,$property,default) $value
                }
            }
            if { $config(currentstyle) eq $stylename } {
                # load the modified style items:
                foreach {type component property value} $args {
                    set config($type,$component,$property) $value
                }
            }
        }
        current {
            #
            # 'plotstyle current'
            #
            return $config(currentstyle)
        }
        load {
            #
            # 'plotstyle load stylename'
            #
            if { [lsearch -exact $config(styles) $stylename] < 0 } {
                return -code error "no such plotting style '$stylename'"
            }
            foreach {item value} [array get style $stylename,*] {
                set item [string map [list $stylename, {}] $item]
                set config($item) $value
            }
            set config(currentstyle) $stylename
        }
        merge {
            #
            # 'plotstyle merge stylename otherstylename pattern ?otherstylename pattern ...?'
            #

        }
        names {
            #
            # 'plotstyle names'
            #
            return $config(styles)
        }
    }
}

namespace eval ::Plotchart {
    variable config

    # FontMetrics --
    #     Determine the font metrics
    #
    # Arguments:
    #     w               Canvas to be used
    #     font            (Optional) font to be used instead of the default
    #     add_line_space  (Optional) add linespacing or not
    #
    # Result:
    #     List of character width and height
    #
    proc FontMetrics {w {font {}} {add_line_space 0}} {
            if { $font != {} } {
               set item        [$w create text 0 0 -font $font -text "M"]
            } else {
               set item        [$w create text 0 0 -text "M"]
            }
        set bbox        [$w bbox $item]
        set char_width  [expr {[lindex $bbox 2] - [lindex $bbox 0]}]
        set char_height [expr {[lindex $bbox 3] - [lindex $bbox 1]}]
        if { $char_width  <  8 } { set char_width   8 }
        if { $char_height < 14 } { set char_height 14 }
        $w delete $item

            if {$add_line_space} {
               set $char_height [expr $char_height + [font metrics $font -linespace]]
            }
        return [list $char_width $char_height]
    }

    #
    # List of styles
    #
    set config(styles) [list]

    #
    # The currently selected style
    #
    set config(currentstyle) {}

    #
    # Define implemented chart types
    #
    set config(charttypes) {
        xyplot xlogyplot logxyplot logxlogyplot
        piechart spiralpie polarplot
        histogram horizbars vertbars ganttchart
        timechart stripchart isometric 3dplot 3dbars
        radialchart txplot 3dribbon boxplot windrose
        targetdiagram performance table ternary distnormal
    }

    # define implemented components for each chart type:
    foreach {type components} {
        xyplot        {title subtitle margin text legend leftaxis rightaxis bottomaxis background mask}
        xlogyplot     {title subtitle margin text legend leftaxis rightaxis bottomaxis background mask}
        logxyplot     {title subtitle margin text legend leftaxis rightaxis bottomaxis background mask}
        logxlogyplot  {title subtitle margin text legend leftaxis rightaxis bottomaxis background mask}
        piechart      {title subtitle margin text legend                               background      labels slice}
        spiralpie     {title subtitle margin text legend                               background      labels slice}
        polarplot     {title subtitle margin text legend axis                          background}
        histogram     {title subtitle margin text legend leftaxis rightaxis bottomaxis background mask}
        horizbars     {title subtitle margin text legend leftaxis rightaxis bottomaxis background mask bar object}
        vertbars      {title subtitle margin text legend leftaxis rightaxis bottomaxis background mask bar}
        ganttchart    {title subtitle margin text legend axis     leftaxis  rightaxis  bottomaxis background}
        timechart     {title subtitle margin text legend leftaxis rightaxis bottomaxis background}
        stripchart    {title subtitle margin text legend leftaxis rightaxis bottomaxis background mask}
        isometric     {title subtitle margin text legend leftaxis rightaxis bottomaxis background mask}
        3dplot        {title subtitle margin text legend xaxis yaxis zaxis             background}
        3dbars        {title subtitle margin text legend leftaxis rightaxis bottomaxis background}
        radialchart   {title subtitle margin text legend leftaxis rightaxis bottomaxis background}
        txplot        {title subtitle margin text legend leftaxis rightaxis bottomaxis background mask}
        3dribbon      {title subtitle margin text legend leftaxis rightaxis bottomaxis background}
        boxplot       {title subtitle margin text legend leftaxis rightaxis bottomaxis background mask bar}
        windrose      {title subtitle margin text legend axis                          background}
        targetdiagram {title subtitle margin text legend leftaxis rightaxis bottomaxis background mask limits}
        performance   {title subtitle margin text legend leftaxis rightaxis bottomaxis background mask limits}
        table         {title subtitle margin background header oddrow evenrow cell frame leftaxis rightaxis bottomaxis}
        ternary       {title subtitle margin text legend axis leftaxis rightaxis bottomaxis background mask}
        distnormal    {title subtitle margin text legend leftaxis rightaxis bottomaxis background mask}
    } {
        set config($type,components) $components
    }

    # Note on the table components: The axes are dummy components!

    # define implemented properties for each component:
    # (the '-' means that the component inherits the properties of the previous component on the list)
    foreach {component properties} {
        leftaxis   {color thickness font format ticklength textcolor labeloffset minorticks shownumbers showaxle render vtextoffset subtextcolor subtextfont vsubtextfont vsubtextcolor usesubtext usevsubtext}
        rightaxis  -
        axis       {color thickness font format ticklength textcolor labeloffset minorticks shownumbers showaxle render justify subtextcolor subtextfont usesubtext}
        topaxis    -
        bottomaxis -
        xaxis      -
        yaxis      -
        zaxis      -
        margin     {left right top bottom}
        title      {textcolor font anchor background}
        subtitle   {textcolor font anchor background}
        text        -
        labels     {textcolor font placement sorted shownumbers format formatright}
        background {outercolor innercolor}
        legend     {background border position}
        limits     {color}
        bar        {barwidth innermargin outline}
        mask       {draw}
        header     {background font color height anchor}
        oddrow     {background font color height anchor}
        evenrow    {background font color height anchor}
        cell       {background font color anchor leftspace rightspace topspace}
        frame      {color outerwidth innerwidth}
        slice      {outlinewidth outline startangle direction}
        object     {transposecoordinates}
    } {
        if { $properties eq "-" } {
            set properties $lastProperties
        }
        set config($component,properties) $properties
        set lastProperties $properties
    }

    # get some font properties:
    canvas .invisibleCanvas
    set invisibleLabel [.invisibleCanvas create text 0 0 -text "M"]

    foreach {char_width char_height} [FontMetrics .invisibleCanvas] {break}
    set config(font,char_width)  $char_width
    set config(font,char_height) $char_height

    # values for the 'default' style:
    set _color         "black"
    set _font          [.invisibleCanvas itemcget $invisibleLabel -font]
    set _subtextfont   $_font
    set _subtextcolor  $_color
    set _vsubtextfont  $_font
    set _vsubtextcolor $_color
    set _usesubtext    0
    set _usevsubtext   0
    set _thickness     1
    set _format        ""
    set _ticklength    3
    set _minorticks    0
    set _textcolor     "black"
    set _anchor        n
    set _labeloffset   2
    set _left          [expr {$char_width  * 8}]
    set _right         [expr {$char_width  * 4}]
    set _top           [expr {$char_height * 2}]
    set _bottom        [expr {$char_height * 2 + 2}]
    set _bgcolor       "white"
    set _outercolor    "white"
    set _innercolor    "white"  ;# Not implemented yet: "$w lower data" gets in the way
    set _background    "white"
    set _border        "black"
    set _position      "top-right"
    set _barwidth      0.8
    set _innermargin   0.2
    set _outline       black
    set _outlinewidth  1
    set _vtextoffset   2
    set _draw          1
    set _shownumbers   1
    set _showaxle      1
    set _leftspace     5
    set _rightspace    5
    set _topspace      5
    set _height        [expr {$char_height + 2*$_topspace}]
    set _anchor        center
    set _outerwidth    2
    set _innerwidth    1
    set _startangle    0
    set _direction     +
    set _placement     out    ;# piechart label placement: 'out' or 'in'
    set _render        simple ;# rendering of text: 'simple' or 'text'
    set _sorted        0      ;# piechart and spiral pie
   #set _shownumbers   0      ;# piechart and spiral pie      - conflict with axes - see below
   #set _format        "%s (%g)"  ;# piechart and spiral pie
    set _formatright   ""         ;# piechart and spiral pie
    set _transposecoordinates 0 ;# horizontal barchart
    set _justify       "left"


    destroy .invisibleCanvas

    #
    # Define the 'default' style
    #
    foreach type $config(charttypes) {
        foreach component $config($type,components) {
            foreach property $config($component,properties) {
                plotstyle configure "default" $type $component $property [set _$property]
            }
        }
        #
        # Default colour for title bar: same as outercolour
        #
        plotstyle configure "default" $type title background ""
    }
    #
    # Specific defaults
    #
    plotstyle configure "default" targetdiagram limits color "gray"
    plotstyle configure "default" table margin left 30 right 30
    plotstyle configure "default" piechart  labels shownumbers 0
    plotstyle configure "default" piechart  labels format      "%s (%g)"
    plotstyle configure "default" spiralpie labels shownumbers 0
    plotstyle configure "default" spiralpie labels format      "%s (%g)"
    plotstyle configure "default" polarplot axis   color       "gray"

    #
    # load the style
    #
    plotstyle load default
}

# plotconfig --
#     Set or query general configuration options of Plotchart
#
# Arguments:
#     charttype         Type of plot or chart or empty (optional)
#     component         Component of the type of plot or chart or empty (optional)
#     property          Property of the component or empty (optional)
#     value             New value of the property if given (optional)
#                       (if "default", default is restored)
#
# Result:
#     No arguments: list of supported chart types
#     Only chart type given: list of components for that type
#     Chart type and component given: list of properties for that component
#     Chart type, component and property given: current value
#     If a new value is given, nothing
#
# Note:
#     The command contains a lot of functionality, but its structure is
#     fairly simple. No property has an empty string as a sensible value.
#
proc ::Plotchart::plotconfig {{charttype {}} {component {}} {property {}} args} {
    variable config
    variable style

    if { $charttype == {} } {
        return $config(charttypes)
    } else {
        if { [lsearch $config(charttypes) $charttype] < 0 } {
            return -code error "Unknown chart type - $charttype"
        }
    }

    if { $component == {} } {
        return $config($charttype,components)
    } else {
        if { [lsearch $config($charttype,components) $component] < 0 } {
            return -code error "Unknown component '$component' for this chart type - $charttype"
        }
    }

    if { $property == {} } {
        return $config($component,properties)
    } else {
        if { [lsearch $config($component,properties) $property] < 0 } {
            return -code error "Unknown property '$property' for this component '$component' (chart: $charttype)"
        }
    }

    if { $args eq {} } {
        return $config($charttype,$component,$property)
    } else {
        set args [linsert $args 0 $property]
        foreach {property value} $args {
            if { $value == "default" } {
                set config($charttype,$component,$property) \
                $style($config(currentstyle),$charttype,$component,$property)
            } else {
                if { $value == "none" } {
                    set value ""
                }
                set config($charttype,$component,$property) $value
            }
        }
    }
}

# CopyConfig --
#     Copy the configuration options to a particular plot/chart
#
# Arguments:
#     charttype         Type of plot or chart
#     chart             Widget of the actual chart
#
# Result:
#     None
#
# Side effects:
#     The configuration options are available for the particular plot or
#     chart and can be modified specifically for that plot or chart.
#
proc ::Plotchart::CopyConfig {charttype chart} {
    variable config

    foreach {prop value} [array get config $charttype,*] {
        set chprop [string map [list $charttype, $chart,] $prop]
        set config($chprop) $value
    }
}

# plotmethod --
#     Register a new plotting method
#
# Arguments:
#     charttype         Type of plot or chart
#     methodname        Name of the method
#     plotproc          Plotting procedure that implements the method
#
# Result:
#     None
#
# Side effects:
#     Registers the plotting procedure under the method name,
#     so that for that type of plot/chart you can now use:
#
#         $p methodname ...
#
#     and the plotting procedure is invoked.
#
#     The plotting procedure must have the following interface:
#
#         proc plotproc {plot widget ...} {...}
#
#     The first argument is the identification of the plot
#     (the $p in the above example), the second is the name
#     of the widget. This way you can use canvas subcommands
#     via $widget and Plotchart's existing commands via $plot.
#
proc ::Plotchart::plotmethod {charttype methodname plotproc} {

    variable methodProc

    set fullname [uplevel 1 [list namespace which $plotproc]]

    if { $fullname != "" } {
        set methodProc($charttype,$methodname) [list $fullname $charttype]
    } else {
        return -code error "No such command or procedure: $plotproc"
    }
}
