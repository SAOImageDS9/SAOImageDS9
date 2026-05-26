
[//000000001]: # (controlwidget \- controlwidget)
[//000000002]: # (Generated from file 'controlwidget\.man' by tcllib/doctools with format 'markdown')
[//000000003]: # (Copyright &copy; 2010 Ron Fox <rfox@\.\.\.>)
[//000000004]: # (Copyright &copy; 2010 Gerhard Reithofer <\.\.\.@\.\.\.>)
[//000000005]: # (Copyright &copy; 2010 Marco Maggi <\.\.\.@\.\.\.>)
[//000000006]: # (Copyright &copy; 2010 Arjen Markus <arjenmarkus@users\.sourceforge\.net>)
[//000000007]: # (controlwidget\(n\) 0\.1 tklib "controlwidget")

<hr> [ <a href="../../../../toc.md">Main Table Of Contents</a> &#124; <a
href="../../../toc.md">Table Of Contents</a> &#124; <a
href="../../../../index.md">Keyword Index</a> &#124; <a
href="../../../../toc0.md">Categories</a> &#124; <a
href="../../../../toc1.md">Modules</a> &#124; <a
href="../../../../toc2.md">Applications</a> ] <hr>

# NAME

controlwidget \- Collection of widgets for displaying and controlling numerical
values

# <a name='toc'></a>Table Of Contents

  - [Table Of Contents](#toc)

  - [Synopsis](#synopsis)

  - [Description](#section1)

  - [TYPES OF WIDGETS](#section2)

  - [COMMANDS](#section3)

  - [ACKNOWLEDGMENTS](#section4)

  - [Bugs, Ideas, Feedback](#section5)

  - [Keywords](#keywords)

  - [Copyright](#copyright)

# <a name='synopsis'></a>SYNOPSIS

package require Tcl ?8\.5?  
package require Tk ?8\.5?  
package require snit ?2\.0?  
package require controlwidget ?0\.1?  

[__::controlwidget::meter__ *w* *args*](#1)  
[__::controlwidget::slider__ *w* *args*](#2)  
[__::controlwidget::equalizerBar__ *w* *args*](#3)  
[__::controlwidget::thermometer__ *w* *args*](#4)  
[__::controlwidget::voltmeter__ *w* *args*](#5)  
[__::controlwidget::tachometer__ *w* *args*](#6)  
[__::controlwidget::rdial__ *w* *args*](#7)  
[__$widget__ get](#8)  
[__$widget__ set *value*](#9)  
[__::controlwidget::led__ *w* *args*](#10)  
[__::controlwidget::radioMatrix__ *w* *args*](#11)  
[__$led__ on](#12)  
[__$led__ off](#13)  
[__$led__ setstate *state*](#14)  
[__$matrix__ get](#15)  
[__$matrix__ set *index*](#16)  

# <a name='description'></a>DESCRIPTION

The controlwidget package focuses on the display and interactive control of
numerical values\. It mimicks several of the meters and controls found in
laboratory settings but also daily life: volt meters, equalizers and tachometers
to name a few\. They can be seen as alternatives for the *scale widget*\.

*Note:* The package has not sofar been tested extensively, and that may result
in an unexpected appearance if you use sizes that are different than the
defaults\. Also not all options for the coloring of the various parts and fonts
and so on have been tested, so that may be another source of bugs\.

A last note: some parts have not been included in any option, most notably the
colors of parts that require lighter and darker shades to cooperate\.

# <a name='section2'></a>TYPES OF WIDGETS

The package distinguishes several typed of widgets:

  - Vertical meters: the value of the variable is translated into a vertical
    position, like with the coloured bars you find on your stereo installation\.

  - Angle displays: the value of the variable is related to the angle of a
    needle, like with tachometers\.

  - Interactive widgets: most widgets allow you to change the value of the
    variable by pressing the mouse button on the needle and shifting it up and
    down or left and right\.

  - Non\-interactive widgets: some widgets, like the thermometer widget, do not
    allow such interaction\.

  - Logical or choice widgets: some widgets display the values as either on/off
    \(or true/false\) or as one of a set of discrete choices\.

All widgets have in common, however, that you can connect them to a variable and
that changing the variable changes the display\. Forthermore, all widgets have
the set and get methods to interact with the value that the widget displays
\(whether that is stored in a global variable or not\)\.

They also have in common that their appearance and behaviour is determined by
one or more options that you can set at creation time and often later on as
well\. The widgets are all based on the *snit* package, so that the methods
__configure__ and __cget__ are available to set and get these options\.

# <a name='section3'></a>COMMANDS

Currently the package contains these widgets of the *vertical meter* type:

  - <a name='1'></a>__::controlwidget::meter__ *w* *args*

    Create a vertical meter consisting of an axis and a moveable arrow\.

      * widget *w* \(in\)

        Name of the widget to be created\.

      * arguments *args* \(in\)

        List of key\-value pairs, controlling the appearance and behaviour of the
        widget:

          + __variable__ name

            Name of the variable to be associated with the meter

          + __background__ color

            Background color for the widget

          + __height__ pixels

            Height of the widget

          + __width__ pixels

            Width of the widget

          + __arrowthickness__ pixels

            Thickness of the displayed arrow in pixels

          + __arrowcolor__ color

            Color of the displayed arrow

          + __readonly__ boolean

            Whether the arrow can be moved interactively or not

  - <a name='2'></a>__::controlwidget::slider__ *w* *args*

    Create a widget containing one or more vertical sliders and an axis\. You can
    shift the slider handles interactively via the mouse\.

      * widget *w* \(in\)

        Name of the widget to be created\.

      * arguments *args* \(in\)

        List of key\-value pairs, controlling the appearance and behaviour of the
        widget:

          + __variable__ name

            Name of the \(list\) variable to be associated with the widget

          + __number__ integer

            Number of sliders in the widget

          + __background__ color

            Background color for the widget

          + __height__ pixels

            Height of the widget

          + __width__ pixels

            Width of the widget

          + __sliderthickness__ pixels

            Thickness of the slider handles

          + __sliderwidth__ color

            Width of the slider handles

          + __troughwidth__ color

            Width of the troughs holding the sliders

  - <a name='3'></a>__::controlwidget::equalizerBar__ *w* *args*

    Create a widget containing one or more vertical bars resembling those found
    on hifi graphical equalizers\. Note that it is a read\-only widget\.

      * widget *w* \(in\)

        Name of the widget to be created\.

      * arguments *args* \(in\)

        List of key\-value pairs, controlling the appearance and behaviour of the
        widget:

          + __variable__ name

            Name of the \(list\) variable to be associated with the widget

          + __number__ integer

            Number of bars in the widget

          + __background__ color

            Background color for the widget

          + __height__ pixels

            Height of the widget

          + __width__ pixels

            Width of the widget

          + __barwidth__ pixels

            Width of the bars

          + __segments__ integer

            Number of segments the bars are divided in

          + __safecolor__ color

            Color for values lower than the warning level

          + __warningcolor__ color

            Color for values greater than the warning level

          + __warninglevel__ double

            Threshold value, determines at what level the color changes

  - <a name='4'></a>__::controlwidget::thermometer__ *w* *args*

    Create a thermometer widget \(read\-only\)

      * widget *w* \(in\)

        Name of the widget to be created\.

      * arguments *args* \(in\)

        List of key\-value pairs, controlling the appearance and behaviour of the
        widget:

          + __variable__ name

            Name of the \(list\) variable to be associated with the widget

          + __background__ color

            Background color for the widget

          + __height__ pixels

            Height of the widget

          + __width__ pixels

            Width of the widget

          + __linethickness__ pixels

            Thickness of the line representing the "temperature"

          + __linecolor__ color

            Color of the line

These widgets all use a vertical axis and have the following options in common
for configuring the axis:

  - __axisformat__ string

    Format string for formatting the numbers along the axis

  - __axisfont__ string

    Name of the font to be used for the numbers

  - __axiscolor__ color

    Color of the axis \(including the numbers\)

  - __from__ color

    Lower value for the axis

  - __to__ color

    Upper value for the axis

  - __majorticks__ integer

    Number of major tickmarks to draw \(each is labelled\)

  - __minorticks__ integer

    Number of minor tickmarks to draw between two major tickmarks

  - __log__ boolean

    Use a logarithmic axis \(true\) or a linear axis \(false\)

The package contains the following widget based on angle displays:

  - <a name='5'></a>__::controlwidget::voltmeter__ *w* *args*

    Create a voltmeter\-like widget\.

      * widget *w* \(in\)

        Name of the widget to be created\.

      * arguments *args* \(in\)

        List of key\-value pairs, controlling the appearance and behaviour of the
        widget:

          + __variable__ name

            Name of the variable to be associated with the meter

          + __value__ value

            Value for the meter \(if not associated with a variable\)

          + __min__ value

            The minimum value for data in the display

          + __max__ value

            The maximum value for data in the display

          + __labels__ list

            The labels to be shown along the scale\. \(These are simply considered
            texts, so no relation with the minimum and maximum perse\)

          + __title__ string

            String to be shown below the dial

          + __width__ pixels

            The width of the widget

          + __height__ pixels

            The height of the widget

          + __borderwidth__ pixels

            The width of the border surrounding the entire widget

          + __relief__ string

            The relief of the border surrounding the entire widget

          + __highlightthickness__ pixels

            The width of the border to indicate the widget has keyboard focus

          + __labelfont__ fontname

            Font of the labels to the scale

          + __titlefont__ fontname

            Font of the title below the dial

          + __dialcolor__ color

            Color of the dial holding the needle

          + __needlecolor__ color

            Color of the needle

          + __scalecolor__ color

            Color of the scale \(arc and tickmarks\)

          + __labelcolor__ color

            Color of the labels to the scale

          + __titlecolor__ color

            Color of the title below the dial

  - <a name='6'></a>__::controlwidget::tachometer__ *w* *args*

    Create a tachometer\-like widget\.

      * widget *w* \(in\)

        Name of the widget to be created\.

      * arguments *args* \(in\)

        List of key\-value pairs, controlling the appearance and behaviour of the
        widget\. In addition to the ones given for the voltmeter widget:

          + __variable__ name

            Name of the variable to be associated with the meter

          + __value__ value

            Value for the meter \(if not associated with a variable\)

          + __dangerlevel__ value

            Level above which values are indicated with a different color

          + __dangercolor__ color

            Color for the values above the "danger level"

          + __dangerwidth__ pixels

            Width for the colored band indicating the "danger level"

          + __pincolor__ color

            Color for the needle and the pin

  - <a name='7'></a>__::controlwidget::rdial__ *w* *args*

    Create a rotating dial\. You can drag the dial to change the value\. With the
    shift button depressed the value changes slowly, with the control button
    depressed it changes fast\. Similarly, you can control the dial via the mouse
    wheel, with the shift and control button working in the same way as with the
    mouse pointer\. *Note:* The shift and control buttons currently have no
    effect on Windows\.

      * widget *w* \(in\)

        Name of the widget to be created\.

      * arguments *args* \(in\)

        List of key\-value pairs, controlling the appearance and behaviour of the
        widget:

          + __variable__ name

            Name of the variable to be associated with the dial

          + __value__ value

            Value for the dial \(if not associated with a variable\)

          + __orient__ string

            Whether a horizontal disk/dial is required \("horizontal"\) or a
            vertical one \("vertical"\)

          + __step__ value

            Initial step for incrementing or decrementing the value

          + __bindwheel__ value

            Step size for controlling the dial's value via the mouse wheel

          + __slow__ value

            Factor on the step size for incrementing or decrementing the value
            slowly

          + __fast__ value

            Factor on the step size for incrementing or decrementing the value
            fast

          + __scale__ value

            Scale value to be applied to the actual value

          + __callback__ command

            Command to be called when the value changes

          + __width__ pixels

            The width of the widget

          + __height__ pixels

            The height of the widget

          + __background__ color

            The background color of the widget \(coloring of the disk/dial\)

          + __foreground__ color

            The foreground color of the widget \(the marker lines\)

All these widgets have the following methods:

  - <a name='8'></a>__$widget__ get

    Return the current value or values shown in the widget

  - <a name='9'></a>__$widget__ set *value*

    Reset the value or values shown in the widget\. If the widget is associated
    with a variable, that variable is set as well\.

      * value *double/list*

        New value or values for the widget

Two further widgets are available, meant to display logical values:

  - <a name='10'></a>__::controlwidget::led__ *w* *args*

    Create a LED\-like widget\.

      * widget *w* \(in\)

        Name of the widget to be created\.

      * arguments *args* \(in\)

        List of key\-value pairs, controlling the appearance and behaviour of the
        widget\. In addition to the ones given for the voltmeter widget:

          + __variable__ name

            Name of the variable to be associated with the LED

          + __size__ pixels

            Diameter of the LED widget

          + __on__ color

            Color to use for the "on" state

          + __off__ color

            Color to use for the "off" state

  - <a name='11'></a>__::controlwidget::radioMatrix__ *w* *args*

    Create a matrix of radio buttons that behaves as a single widget\.

      * widget *w* \(in\)

        Name of the widget to be created\.

      * arguments *args* \(in\)

        List of key\-value pairs, controlling the appearance and behaviour of the
        widget\. In addition to the ones given for the voltmeter widget:

          + __variable__ name

            Name of the variable to be associated with the matrix

          + __orient__ string

            The way the radio buttons are to be arranged \(horizontal or vertical
            first\)

          + __rows__ integer

            Number of rows in the matrix

          + __columns__ integer

            Number of columns in the matrix

          + __command__ list

            Command associated with the radio buttons\. Invoked when the active
            radio button changes\.

The LED widget has the following public methods:

  - <a name='12'></a>__$led__ on

    Set the state to "on"

  - <a name='13'></a>__$led__ off

    Set the state to "off"

  - <a name='14'></a>__$led__ setstate *state*

    Set the state according to the value of "state"

      * state *boolean* \(in\)

        New state for the LED widget

The radioMatrix widget has two public methods:

  - <a name='15'></a>__$matrix__ get

    Return the index of the currently selected radio button

  - <a name='16'></a>__$matrix__ set *index*

    Select the radio button with index "index"

      * index *integer*

        Index of the radio button to be set

# <a name='section4'></a>ACKNOWLEDGMENTS

The code for most of these widgets first appeared on the Wiki\. In many cases,
Arjen Markus merely refactored the code a bit and "snitified" some of them\. The
original code was developed by the following people:

  - Vertical meter, LED display, radio matrix: Ron Fox

  - Rotating dials: Gerhard Reithofer

  - Voltmeter and tachometer: Marco Maggi

  - Code for moving the needle: ?

# <a name='section5'></a>Bugs, Ideas, Feedback

This document, and the package it describes, will undoubtedly contain bugs and
other problems\. Please report such in the category *controlwidget* of the
[Tklib Trackers](http://core\.tcl\.tk/tklib/reportlist)\. Please also report
any ideas for enhancements you may have for either package and/or documentation\.

# <a name='keywords'></a>KEYWORDS

[controlling](\.\./\.\./\.\./\.\./index\.md\#controlling),
[displaying](\.\./\.\./\.\./\.\./index\.md\#displaying), [numerical
values](\.\./\.\./\.\./\.\./index\.md\#numerical\_values), [scale
widget](\.\./\.\./\.\./\.\./index\.md\#scale\_widget)

# <a name='copyright'></a>COPYRIGHT

Copyright &copy; 2010 Ron Fox <rfox@\.\.\.>  
Copyright &copy; 2010 Gerhard Reithofer <\.\.\.@\.\.\.>  
Copyright &copy; 2010 Marco Maggi <\.\.\.@\.\.\.>  
Copyright &copy; 2010 Arjen Markus <arjenmarkus@users\.sourceforge\.net>
