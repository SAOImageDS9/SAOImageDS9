
[//000000001]: # (Plotchart \- Plotchart)
[//000000002]: # (Generated from file 'plotchart\.man' by tcllib/doctools with format 'markdown')
[//000000003]: # (Copyright &copy; 2022 Arjen Markus <arjenmarkus@users\.sourceforge\.net>)
[//000000004]: # (Plotchart\(n\) 2\.6\.2 tklib "Plotchart")

<hr> [ <a href="../../../../toc.md">Main Table Of Contents</a> &#124; <a
href="../../../toc.md">Table Of Contents</a> &#124; <a
href="../../../../index.md">Keyword Index</a> &#124; <a
href="../../../../toc0.md">Categories</a> &#124; <a
href="../../../../toc1.md">Modules</a> &#124; <a
href="../../../../toc2.md">Applications</a> ] <hr>

# NAME

Plotchart \- Simple plotting and charting package

# <a name='toc'></a>Table Of Contents

  - [Table Of Contents](#toc)

  - [Synopsis](#synopsis)

  - [Description](#section1)

  - [PLOT CREATION COMMANDS](#section2)

  - [PLOT METHODS](#section3)

  - [COORDINATE TRANSFORMATIONS](#section4)

  - [MISSING VALUES](#section5)

  - [OTHER OUTPUT FORMATS](#section6)

  - [SPECIAL EFFECTS](#section7)

  - [ROOM FOR IMPROVEMENT](#section8)

  - [RESIZING](#section9)

  - [ZOOMING IN](#section10)

  - [CONFIGURATION OPTIONS AND OTHER COMMANDS](#section11)

  - [SCROLLING FOR TIMECHARTS AND GANTT CHARTS](#section12)

  - [SPECIALISED PLOTS](#section13)

  - [ADDING SPECIFIC PLOT METHODS](#section14)

  - [TABLE CHARTS](#section15)

  - [CONTROL DISPLAYS](#section16)

  - [USING DATE/TIME LABELS](#section17)

  - [ARRANGING MULTIPLE PLOTS IN A CANVAS](#section18)

  - [INTERACTIVE USE](#section19)

  - [NOTES ON TAGS](#section20)

  - [TODO \- SOME PRIVATE NOTES](#section21)

  - [Bugs, Ideas, Feedback](#section22)

  - [Copyright](#copyright)

# <a name='synopsis'></a>SYNOPSIS

package require Tcl ?8\.5?  
package require Tk ?8\.5?  
package require Plotchart ?2\.6\.2?  

[__::Plotchart::createXYPlot__ *w* *xaxis* *yaxis* *args*](#1)  
[__::Plotchart::createStripchart__ *w* *xaxis* *yaxis* *args*](#2)  
[__::Plotchart::createTXPlot__ *w* *timeaxis* *xaxis* *args*](#3)  
[__::Plotchart::createXLogYPlot__ *w* *xaxis* *yaxis* *args*](#4)  
[__::Plotchart::createLogXYPlot__ *w* *xaxis* *yaxis* *args*](#5)  
[__::Plotchart::createLogXLogYPlot__ *w* *xaxis* *yaxis* *args*](#6)  
[__::Plotchart::createPolarPlot__ *w* *radius\_data* *args*](#7)  
[__::Plotchart::createWindrose__ *w* *radius\_data* *sectors*](#8)  
[__::Plotchart::createIsometricPlot__ *w* *xaxis* *yaxis* *stepsize*](#9)  
[__::Plotchart::createHistogram__ *w* *xaxis* *yaxis* *args*](#10)  
[__::Plotchart::create3DPlot__ *w* *xaxis* *yaxis* *zaxis* *args*](#11)  
[__::Plotchart::create3DRibbonPlot__ *w* *yaxis* *zaxis*](#12)  
[__::Plotchart::createPiechart__ *w*](#13)  
[__::Plotchart::createSpiralPie__ *w*](#14)  
[__::Plotchart::createRadialchart__ *w* *names* *scale* *style*](#15)  
[__::Plotchart::createBarchart__ *w* *xlabels* *yaxis* *noseries* *args*](#16)  
[__::Plotchart::createHorizontalBarchart__ *w* *xaxis* *ylabel* *noseries*](#17)  
[__::Plotchart::create3DBarchart__ *w* *yaxis* *nobars*](#18)  
[__::Plotchart::create3DRibbonChart__ *w* *names* *yaxis* *zaxis*](#19)  
[__::Plotchart::createBoxplot__ *w* *xdata* *ydata* *orientation*](#20)  
[__::Plotchart::createTimechart__ *w* *time\_begin* *time\_end* *args*](#21)  
[__::Plotchart::createGanttchart__ *w* *time\_begin* *time\_end* *args*](#22)  
[__::Plotchart::createRightAxis__ *w\_or\_plot* *yaxis*](#23)  
[__::Plotchart::createTableChart__ *w* *columns* ?widths?](#24)  
[__::Plotchart::createTernaryDiagram__ *w* *args*](#25)  
[__::Plotchart::createNormalPlot__ *w* *xscale* *args*](#26)  
[__::Plotchart::createStatusTimeline__ *w* *xaxis* *ylabel* *args*](#27)  
[__::Plotchart::createDendrogram__ *w* *args*](#28)  
[__$anyplot__ title *text* *position*](#29)  
[__$anyplot__ subtitle *text*](#30)  
[__$anyplot__ canvas](#31)  
[__$anyplot__ saveplot *filename* *args*](#32)  
[__$anyplot__ xtext *text*](#33)  
[__$anyplot__ ytext *text*](#34)  
[__$anyplot__ vtext *text*](#35)  
[__$anyplot__ xsubtext *text*](#36)  
[__$anyplot__ ysubtext *text*](#37)  
[__$anyplot__ vsubtext *text*](#38)  
[__$anyplot__ xconfig __\-option__ *value* \.\.\.](#39)  
[__$anyplot__ yconfig __\-option__ *value* \.\.\.](#40)  
[__$anyplot__ background *part* *colour\_or\_image* *dir* ?brightness?](#41)  
[__$anyplot__ xticklines *colour* ?dash?](#42)  
[__$anyplot__ yticklines *colour* ?dash?](#43)  
[__$anyplot__ legend *series* *text* ?spacing?](#44)  
[__$anyplot__ removefromlegend *series*](#45)  
[__$anyplot__ legendconfig __\-option__ *value* \.\.\.](#46)  
[__$anyplot__ balloon *x* *y* *text* *dir*](#47)  
[__$anyplot__ balloonconfig *args*](#48)  
[__$anyplot__ plaintext *x* *y* *text* *dir*](#49)  
[__$anyplot__ plaintextconfig *args*](#50)  
[__$anyplot__ object *itemtype* *series* *args*](#51)  
[__$anyplot__ deletedata](#52)  
[__$xyplot__ plot *series* *xcrd* *ycrd*](#53)  
[__$normalplot__ plot *series* *mean* *stdev* *data*](#54)  
[__$normalplot__ diagonal](#55)  
[__$xyplot__ plotlist *series* *xlist* *ylist* *every*](#56)  
[__$xyplot__ region *series* *xlist* *ylist*](#57)  
[__$xyplot__ minmax *series* *xcrd* *ymin* *ymax*](#58)  
[__$histogram__ plotcumulative *series* *xcrd* *ycrd*](#59)  
[__$xyplot__ trend *series* *xcrd* *ycrd*](#60)  
[__$xyplot__ rchart *series* *xcrd* *ycrd*](#61)  
[__$xyplot__ interval *series* *xcrd* *ymin* *ymax* ?ycentr?](#62)  
[__$xyplot__ box\-and\-whiskers *series* *xcrd* *ycrd*](#63)  
[__$xyplot__ violin *series* *xcrd* *ycrd*](#64)  
[__$xyplot__ vector *series* *xcrd* *ycrd* *ucmp* *vcmp*](#65)  
[__$xyplot__ vectorconfig *series* __\-option__ *value* \.\.\.](#66)  
[__$xyplot__ dot *series* *xcrd* *ycrd* *value*](#67)  
[__$xyplot__ dotconfig *series* __\-option__ *value* \.\.\.](#68)  
[__$xyplot__ contourlines *xcrd* *ycrd* *values* ?classes?](#69)  
[__$xyplot__ contourlinesfunctionvalues *xvec* *yvec* *valuesmat* ?classes?](#70)  
[__$xyplot__ contourfill *xcrd* *ycrd* *values* ?classes?](#71)  
[__$xyplot__ contourbox *xcrd* *ycrd* *values* ?classes?](#72)  
[__$xyplot__ colorMap *colours*](#73)  
[__$xyplot__ legendisolines *values* *classes*](#74)  
[__$xyplot__ legendshades *values* *classes*](#75)  
[__$xyplot__ grid *xcrd* *ycrd*](#76)  
[__$xyplot__ xband *ymin* *ymax*](#77)  
[__$xyplot__ yband *xmin* *xmax*](#78)  
[__$xyplot__ labeldot *x* *y* *text* *orient*](#79)  
[__$polarplot__ plot *series* *radius* *angle*](#80)  
[__$windrose__ plot *data* *colour*](#81)  
[__$plot3d__ plotfunc *function*](#82)  
[__$plot3d__ plotfuncont *function* *contours*](#83)  
[__$plot3d__ gridsize *nxcells* *nycells*](#84)  
[__$plot3d__ plotdata *data*](#85)  
[__$plot3d__ interpolatedata *data* *contours*](#86)  
[__$plot3d__ colour *fill* *border*](#87)  
[__$plot3d__ ribbon *yzpairs*](#88)  
[__$plot3d__ plot *yzpairs*](#89)  
[__$xyplot__ dataconfig *series* __\-option__ *value* \.\.\.](#90)  
[__$pie__ plot *data*](#91)  
[__$pie__ colours *colour1* *colour2* \.\.\.](#92)  
[__$pie__ explode *segment*](#93)  
[__$radial__ plot *data* *colour* *thickness*](#94)  
[__$pie__ colours *colour1* *colour2* \.\.\.](#95)  
[__$barchart__ plot *series* *ydata* *colour* ?dir? ?brightness?](#96)  
[__$barchart__ config __\-option__ *value* \.\.\.](#97)  
[__$barchart__ plot *series* *xdata* *colour* ?dir? ?brightness?](#98)  
[__$barchart__ config __\-option__ *value* \.\.\.](#99)  
[__$barchart__ plot *label* *yvalue* *colour*](#100)  
[__$barchart__ config __\-option__ *value* \.\.\.](#101)  
[__$ribbon__ line *xypairs* *colour*](#102)  
[__$ribbon__ area *xypairs* *colour*](#103)  
[__$boxplot__ plot *series* *label* *values*](#104)  
[__$boxplot__ violin *series* *label* *values*](#105)  
[__$timechart__ period *text* *time\_begin* *time\_end* *colour*](#106)  
[__$timechart__ addperiod *time\_begin* *time\_end* *colour*](#107)  
[__$timechart__ milestone *text* *time* *colour*](#108)  
[__$timechart__ addmilestone *time* *colour*](#109)  
[__$timechart__ vertline *text* *time* *colour*](#110)  
[__$timechart__ hscroll *scrollbar*](#111)  
[__$timechart__ vscroll *scrollbar*](#112)  
[__$ganttchart__ task *text* *time\_begin* *time\_end* *completed*](#113)  
[__$ganttchart__ milestone *text* *time* *colour*](#114)  
[__$ganttchart__ vertline *text* *time*](#115)  
[__$ganttchart__ connect *from* *to*](#116)  
[__$ganttchart__ summary *text* *args*](#117)  
[__$ganttchart__ color *keyword* *newcolor*](#118)  
[__$ganttchart__ font *keyword* *newfont*](#119)  
[__$ganttchart__ hscroll *scrollbar*](#120)  
[__$ganttchart__ vscroll *scrollbar*](#121)  
[__$isoplot__ plot rectangle *x1* *y1* *x2* *y2* *colour*](#122)  
[__$isoplot__ plot filled\-rectangle *x1* *y1* *x2* *y2* *colour*](#123)  
[__$isoplot__ plot circle *xc* *yc* *radius* *colour*](#124)  
[__$isoplot__ plot filled\-circle *xc* *yc* *radius* *colour*](#125)  
[__$table__ row *items*](#126)  
[__$table__ separator](#127)  
[__$table__ formatcommand *procname*](#128)  
[__$table__ cellconfigure *args*](#129)  
[__$ternary__ plot *series* *xcrd* *ycrd* *zcrd* *text* *dir*](#130)  
[__$ternary__ line *series* *coords*](#131)  
[__$ternary__ fill *series* *coords*](#132)  
[__$ternary__ text *xtext* *ytext* *ztext*](#133)  
[__$ternary__ ticklines *colour*](#134)  
[__$timeline__ plot *series* *item* *start* *stop* *color*](#135)  
[__$timeline__ vertline *text* *time* *args*](#136)  
[__$dendrogram__ plot *series* *data*](#137)  
[__::Plotchart::viewPort__ *w* *pxmin* *pymin* *pxmax* *pymax*](#138)  
[__::Plotchart::worldCoordinates__ *w* *xmin* *ymin* *xmax* *ymax*](#139)  
[__::Plotchart::world3DCoordinates__ *w* *xmin* *ymin* *zmin* *xmax* *ymax* *zmax*](#140)  
[__::Plotchart::coordsToPixel__ *w* *x* *y*](#141)  
[__::Plotchart::coords3DToPixel__ *w* *x* *y* *z*](#142)  
[__::Plotchart::polarCoordinates__ *w* *radmax*](#143)  
[__::Plotchart::polarToPixel__ *w* *rad* *phi*](#144)  
[__::Plotchart::pixelToCoords__ *w* *x* *y*](#145)  
[__::Plotchart::pixelToIndex__ *w* *x* *y*](#146)  
[__::Plotchart::determineScale__ *xmin* *xmax* *inverted*](#147)  
[__::Plotchart::determineScaleFromList__ *values* *inverted*](#148)  
[__::Plotchart::plotconfig__ *charttype* *component* *property* *value*](#149)  
[__::Plotchart::plotstyle__ *subcmd* *style* *args*](#150)  
[__::Plotchart::eraseplot__ *anyplot*](#151)  
[__::Plotchart::createTargetDiagram__ *w* *limits* *scale*](#152)  
[__$target__ plot *series* *xvalues* *yvalues*](#153)  
[__::Plotchart::createPerformanceProfile__ *w* *max*](#154)  
[__$performance__ plot *series\_and\_data\_pairs*](#155)  
[__::Plotchart::createTaylorDiagram__ *w* *radius\_data* *args*](#156)  
[__$taylor__ plot *series* *stdev* *corr*](#157)  
[__::Plotchart::createHeatmap__ *w* *rowlabels* *columnlabels* *args*](#158)  
[__$heatmap__ plot row *label* *data*](#159)  
[__$heatmap__ plot column *label* *data*](#160)  
[__$heatmap__ plot cell *rowlabel* *columnlabel* *value*](#161)  
[__$heatmap__ scale values *min* *max*](#162)  
[__$heatmap__ scale colours *mincolour* *maxcolour*](#163)  
[__::Plotchart::createCircleplot__ *w* *labels* *args*](#164)  
[__$circleplot__ connect *label1* *label2* *colour* *width*](#165)  
[__$circleplot__ modify *label* *args*](#166)  
[__::Plotchart::plotmethod__ *charttype* *methodname* *plotproc*](#167)  
[__::Plotchart::plotpack__ *w* *dir* *args*](#168)  
[__$anyplot__ bindplot *event* *command* *args*](#169)  
[__$anyplot__ bindlast *series* *event* *command*](#170)  

# <a name='description'></a>DESCRIPTION

Plotchart is a Tcl\-only package that focuses on the easy creation of xy\-plots,
barcharts and other common types of graphical presentations\. The emphasis is on
ease of use, rather than flexibility\. The procedures that create a plot use the
entire canvas window, making the layout of the plot completely automatic\.

This results in the creation of an xy\-plot in, say, ten lines of code:

    package require Plotchart

    canvas .c -background white -width 400 -height 200
    pack   .c -fill both

    #
    # Create the plot with its x- and y-axes
    #
    set s [::Plotchart::createXYPlot .c {0.0 100.0 10.0} {0.0 100.0 20.0}]

    foreach {x y} {0.0 32.0 10.0 50.0 25.0 60.0 78.0 11.0 } {
        $s plot series1 $x $y
    }

    $s title "Data series"

A drawback of the package might be that it does not do any data management\. So
if the canvas that holds the plot is to be resized, the whole plot must be
redrawn\. The advantage, though, is that it offers a number of plot and chart
types:

  - XY\-plots like the one shown above with any number of data series\.

  - Stripcharts, a kind of XY\-plots where the horizontal axis is adjusted
    automatically\. The result is a kind of sliding window on the data series\.

  - Polar plots, where the coordinates are polar instead of cartesian\.

  - Histograms, for plotting statistical information\.

  - Barcharts, piecharts, Gantt charts, time charts\.

  - Isometric plots, where the scale of the coordinates in the two directions is
    always the same, i\.e\. a circle in world coordinates appears as a circle on
    the screen\.

    You can zoom in and out, as well as pan with these plots \(*Note:* this
    works best if no axes are drawn, the zooming and panning routines do not
    distinguish the axes\), using the mouse buttons with the control key and the
    arrow keys with the control key\.

  - Piecharts, with automatic scaling to indicate the proportions\.

  - Barcharts, with either vertical or horizontal bars, stacked bars or bars
    side by side\.

  - Timecharts, where bars indicate a time period and milestones or other
    important moments in time are represented by triangles\.

  - 3D plots \(both for displaying surfaces and 3D bars\)

With version 1\.5 a new command has been introduced: plotconfig, which can be
used to configure the plot options for particular types of plots and charts \(cf\.
[CONFIGURATION OPTIONS AND OTHER COMMANDS](#section11)\) With version 1\.8\.3
several new features were introduced, which allow more interactivity \(cf\.
[INTERACTIVE USE](#section19)\) With version 2\.0 it has become possible to
put several plots or charts in one canvas\.

# <a name='section2'></a>PLOT CREATION COMMANDS

You create the plot or chart with one single command and then fill the plot with
data:

  - <a name='1'></a>__::Plotchart::createXYPlot__ *w* *xaxis* *yaxis* *args*

    Create a new xy\-plot \(configuration type: xyplot\)\.

      * widget *w* \(in\)

        Name of the *existing* canvas widget to hold the plot\.

      * list *xaxis* \(in\)

        A 3\-element list containing minimum, maximum and stepsize for the
        x\-axis, in this order\. For an inverted axis, where the maximum appears
        on the left\-hand side, use: maximum, minimum and a *negative*
        stepsize\.

      * list *yaxis* \(in\)

        A 3\-element list containing minimum, maximum and stepsize for the
        y\-axis, in this order\. For an inverted axis, where the maximum appears
        at the bottom, use: maximum, minimum and a *negative* stepsize\.

      * list *args* \(in\)

        Zero or more options that influence the appearance of the plot:

          + *\-xlabels \{labels\}:* Custom labels for the x\-axis\. If the labels
            are numeric, they are positioned according to the given scale,
            otherwise they are positioned with equal distance, based on the
            number of labels\. Note: this only works if the stepsize of the xaxis
            argument is the empty string\.

          + *\-ylabels \{labels\}:* Similarly, custom labels for the y\-axis\.

          + *\-box \{measures\}:* See [ARRANGING MULTIPLE PLOTS IN A
            CANVAS](#section18)

          + *\-axesbox \{measures\}:* See [ARRANGING MULTIPLE PLOTS IN A
            CANVAS](#section18)

          + *\-timeformat format:* See [USING DATE/TIME
            LABELS](#section17)

          + *\-gmt 0/1:* See [USING DATE/TIME LABELS](#section17)

          + *\-axestozero:* Draw the axes at the origin \(1\), or at the sides of
            the plot area \(0, default\)\. This option is implemented for XY plots
            only\.

          + *\-isometric:* Rescale the axes, so that a square in the
            coordinates appears as a square on the screen \(1\), or use the given
            extremes \(0, default\)\. This option is implemented for XY plots only\.

  - <a name='2'></a>__::Plotchart::createStripchart__ *w* *xaxis* *yaxis* *args*

    Create a new strip chart \(configuration type: stripchart\)\. The only
    difference to a regular XY plot is that the x\-axis will be automatically
    adjusted when the x\-coordinate of a new point exceeds the maximum\.

      * widget *w* \(in\)

        Name of the *existing* canvas widget to hold the plot\.

      * list *xaxis* \(in\)

        A 3\-element list containing minimum, maximum and stepsize for the
        x\-axis, in this order\. Note that an inverted x\-axis is *not* supported
        for this type of plot\.

      * list *yaxis* \(in\)

        A 3\-element list containing minimum, maximum and stepsize for the
        y\-axis, in this order\. For an inverted axis, where the maximum appears
        at the bottom, use: maximum, minimum and a *negative* stepsize\.

      * list *args* \(in\)

        Zero or more options \- see the XY\-plot for more information\.

  - <a name='3'></a>__::Plotchart::createTXPlot__ *w* *timeaxis* *xaxis* *args*

    Create a new time\-x\-plot \(configuration type: txplot\)\. The horizontal axis
    represents the date/time of the data and the vertical axis the values
    themselves\.

      * widget *w* \(in\)

        Name of the *existing* canvas widget to hold the plot\.

      * list *timeaxis* \(in\)

        A 3\-element list containing the minimum and maximum date/time to be
        shown and the stepsize \(*in days*\) for the time\-axis, in this order\.
        Note that an inverted time\-axis is *not* supported\.

      * list *xaxis* \(in\)

        A 3\-element list containing minimum, maximum and stepsize for the
        vertical axis, in this order\. For an inverted axis, where the maximum
        appears at the bottom, use: maximum, minimum and a *negative*
        stepsize\.

      * list *args* \(in\)

        Zero or more options \- see the XY\-plot for more information\.

  - <a name='4'></a>__::Plotchart::createXLogYPlot__ *w* *xaxis* *yaxis* *args*

    Create a new xy\-plot where the y\-axis has a logarithmic scale \(configuration
    type: xlogyplot\)\.

    The data should be given as for a linear scale, as the logarithmic
    transformation is taken of internally\.

      * widget *w* \(in\)

        Name of the *existing* canvas widget to hold the plot\.

      * list *xaxis* \(in\)

        A 3\-element list containing minimum, maximum and stepsize for the
        x\-axis, in this order\. For an inverted axis, where the maximum appears
        on the left\-hand side, use: maximum, minimum and a *negative*
        stepsize\.

      * list *yaxis* \(in\)

        A 2\-element list containing minimum and maximum for the y\-axis, in this
        order\. Note that an inverted logarithmic axis is *not* supported\.

      * list *args* \(in\)

        Zero or more options \- see the XY\-plot for more information\.

  - <a name='5'></a>__::Plotchart::createLogXYPlot__ *w* *xaxis* *yaxis* *args*

    Create a new xy\-plot where the x\-axis has a logarithmic scale \(configuration
    type: logxyplot\)\.

    The data should be given as for a linear scale, as the logarithmic
    transformation is taken of internally\.

      * widget *w* \(in\)

        Name of the *existing* canvas widget to hold the plot\.

      * list *xaxis* \(in\)

        A 2\-element list containing minimum and maximum for the x\-axis, in this
        order\. Note that an inverted logarithmic axis is *not* supported\.

      * list *yaxis* \(in\)

        A 3\-element list containing minimum, maximum and stepsize for the
        y\-axis, in this order\. For an inverted axis, where the maximum appears
        on the left\-hand side, use: maximum, minimum and a *negative*
        stepsize\.

      * list *args* \(in\)

        Zero or more options \- see the XY\-plot for more information\.

  - <a name='6'></a>__::Plotchart::createLogXLogYPlot__ *w* *xaxis* *yaxis* *args*

    Create a new xy\-plot where both the x\-axis and the y\-axis have a logarithmic
    scale \(configuration type: logxlogyplot\)\.

    The data should be given as for a linear scale, as the logarithmic
    transformation is taken of internally\.

      * widget *w* \(in\)

        Name of the *existing* canvas widget to hold the plot\.

      * list *xaxis* \(in\)

        A 2\-element list containing minimum and maximum for the x\-axis, in this
        order\. Note that an inverted logarithmic axis is *not* supported\.

      * list *yaxis* \(in\)

        A 2\-element list containing minimum and maximum for the y\-axis, in this
        order\. Note that an inverted logarithmic axis is *not* supported\.

      * list *args* \(in\)

        Zero or more options \- see the XY\-plot for more information\.

  - <a name='7'></a>__::Plotchart::createPolarPlot__ *w* *radius\_data* *args*

    Create a new polar plot \(configuration type: polarplot\)\.

      * widget *w* \(in\)

        Name of the *existing* canvas widget to hold the plot\.

      * list *radius\_data* \(in\)

        A 2\-element list containing maximum radius and stepsize for the radial
        axis, in this order\.

      * list *args* \(in\)

        Zero or more options \- see the XY\-plot for more information\.

  - <a name='8'></a>__::Plotchart::createWindrose__ *w* *radius\_data* *sectors*

    Create a new windrose diagram\. The diagram will consist of concentric
    circles as defined by the *radius\_data* argument and a number of sectors
    \(given by the *sectors* argument\)\. The sectors are drawn in the "nautical"
    convention, that is: the first is located at the positive y\-axis, the second
    is to the right and so on in a clockwise direction\.

      * widget *w* \(in\)

        Name of the *existing* canvas widget to hold the diagram

      * list *radius\_data* \(in\)

        A 2\-element list, the first element is the maximum radius, the second is
        the step to be used for the circles\.

      * int *sectors*

        Number of sectors to use \(defaults to 16\)\.

  - <a name='9'></a>__::Plotchart::createIsometricPlot__ *w* *xaxis* *yaxis* *stepsize*

    Create a new isometric plot, where the vertical and the horizontal
    coordinates are scaled so that a circle will truly appear as a circle
    \(configuration type: isometric\)\.

      * widget *w* \(in\)

        Name of the *existing* canvas widget to hold the plot\.

      * list *xaxis* \(in\)

        A 2\-element list containing minimum, and maximum for the x\-axis, in this
        order\.

      * list *yaxis* \(in\)

        A 2\-element list containing minimum, and maximum for the y\-axis, in this
        order\.

      * float&#124;__noaxes__ *stepsize* \(in\)

        Either the stepsize used by both axes or the keyword __noaxes__ to
        signal the plot that it should use the full area of the widget, to not
        draw any of the axes\.

  - <a name='10'></a>__::Plotchart::createHistogram__ *w* *xaxis* *yaxis* *args*

    Create a new histogram \(configuration type: histogram\)\.

      * widget *w* \(in\)

        Name of the *existing* canvas widget to hold the plot\.

      * list *xaxis* \(in\)

        A 3\-element list containing minimum, maximum and stepsize for the
        x\-axis, in this order\.

      * list *yaxis* \(in\)

        A 3\-element list containing minimum, maximum and stepsize for the
        y\-axis, in this order\.

      * list *args* \(in\)

        Zero or more options \- see the XY\-plot for more information\.

  - <a name='11'></a>__::Plotchart::create3DPlot__ *w* *xaxis* *yaxis* *zaxis* *args*

    Create a new 3D plot\.

      * widget *w* \(in\)

        Name of the *existing* canvas widget to hold the plot\.

      * list *xaxis* \(in\)

        A 3\-element list containing minimum, maximum and stepsize for the
        x\-axis, in this order\.

      * list *yaxis* \(in\)

        A 3\-element list containing minimum, maximum and stepsize for the
        y\-axis, in this order\.

      * list *zaxis* \(in\)

        A 3\-element list containing minimum, maximum and stepsize for the
        z\-axis, in this order\.

      * list *args* \(in\)

        Optional list of options \(keyword\-value pairs\)\. Currently supported:
        \-xlabels to set the labels for the x\-axis\.

  - <a name='12'></a>__::Plotchart::create3DRibbonPlot__ *w* *yaxis* *zaxis*

    Create a new 3D ribbon plot\. It is a simplification of the full 3D plot and
    allows for the drawing of a ribbon only \(the x\-axis is dropped\)\.

      * widget *w* \(in\)

        Name of the *existing* canvas widget to hold the plot\.

      * list *yaxis* \(in\)

        A 3\-element list containing minimum, maximum and stepsize for the
        y\-axis, in this order\.

      * list *zaxis* \(in\)

        A 3\-element list containing minimum, maximum and stepsize for the
        z\-axis, in this order\.

  - <a name='13'></a>__::Plotchart::createPiechart__ *w*

    Create a new piechart \(configuration type: piechart\)\.

      * widget *w* \(in\)

        Name of the *existing* canvas widget to hold the plot\.

  - <a name='14'></a>__::Plotchart::createSpiralPie__ *w*

    Create a new "spiral pie" \(configuration type: spiralpie\), a variation on
    the ordinary piechart\. The value is used to scale the radius, rather than
    the angle\. By default the data are sorted\.

      * widget *w* \(in\)

        Name of the *existing* canvas widget to hold the plot\.

  - <a name='15'></a>__::Plotchart::createRadialchart__ *w* *names* *scale* *style*

    Create a new radial chart \(the data are drawn as a line connecting the
    spokes of the diagram\) \(configuration type: radialchart\)\.

      * widget *w* \(in\)

        Name of the *existing* canvas widget to hold the plot\.

      * list *names* \(in\)

        Names for the spokes\.

      * float *scale* \(in\)

        Scale value to determine the position of the data along the spokes\.

      * string *style* \(in\)

        Style of the chart \(optional\)\. One of:

          + *lines* \- the default: draw the data as independent polylines\.

          + *cumulative* \- draw the data as polylines where the data are
            accumulated\.

          + *filled* \- draw the data as filled polygons where the data are
            accumulated

  - <a name='16'></a>__::Plotchart::createBarchart__ *w* *xlabels* *yaxis* *noseries* *args*

    Create a new barchart with vertical bars \(configuration type: vertbars\)\. The
    horizontal axis will display the labels contained in the argument
    *xlabels*\. The number of series given by *noseries* determines both the
    width of the bars, and the way the series will be drawn\.

    If the keyword __stacked__ was specified the series will be drawn
    stacked on top of each other\. Otherwise each series that is drawn will be
    drawn shifted to the right\.

    The number of series determines the width of the bars, so that there is
    space of that number of bars\. If you use a floating\-point number, like 2\.2,
    instead of an integer, like 2, a small gap between the sets of bars will be
    drawn \- the width depends on the fractional part\.

      * widget *w* \(in\)

        Name of the *existing* canvas widget to hold the plot\.

      * list *xlabels* \(in\)

        List of labels for the x\-axis\. Its length also determines the number of
        bars that will be plotted per series\.

      * list *yaxis* \(in\)

        A 3\-element list containing minimum, maximum and stepsize for the
        y\-axis, in this order\.

      * int&#124;__stacked__ *noseries* \(in\)

        The number of data series that will be plotted\. This has to be an
        integer number greater than zero \(if __stacked__ is not used\)\.

      * string *args* \(in\)

        One or more key\-value pairs defining the options\. Specific to barcharts:
        __\-xlabelangle__ value, the angle under which the labels should be
        drawn\. This defaults to 0 \- horizontal text\. This option is especially
        useful if you have fairly long labels\.

  - <a name='17'></a>__::Plotchart::createHorizontalBarchart__ *w* *xaxis* *ylabel* *noseries*

    Create a new barchart with horizontal bars \(configuration type: horizbars\)\.
    The vertical axis will display the labels contained in the argument
    *ylabels*\. The number of series given by *noseries* determines both the
    width of the bars, and the way the series will be drawn\.

    If the keyword __stacked__ was specified the series will be drawn
    stacked from left to right\. Otherwise each series that is drawn will be
    drawn shifted upward\.

      * widget *w* \(in\)

        Name of the *existing* canvas widget to hold the plot\.

      * list *xaxis* \(in\)

        A 3\-element list containing minimum, maximum and stepsize for the
        x\-axis, in this order\.

      * list *ylabels* \(in\)

        List of labels for the y\-axis\. Its length also determines the number of
        bars that will be plotted per series\.

      * int&#124;__stacked__ *noseries* \(in\)

        The number of data series that will be plotted\. This has to be an
        integer number greater than zero \(if __stacked__ is not used\)\.

  - <a name='18'></a>__::Plotchart::create3DBarchart__ *w* *yaxis* *nobars*

    Create a new barchart with 3D vertical bars \(configuration type: 3dbars\)\.
    The horizontal axis will display the labels per bar\. The number of bars
    given by *nobars* determines the position and the width of the bars\. The
    colours can be varied per bar\. \(This type of chart was inspired by the Wiki
    page on 3D bars by Richard Suchenwirth\.\)

      * widget *w* \(in\)

        Name of the *existing* canvas widget to hold the plot\.

      * list *yaxis* \(in\)

        A 3\-element list containing minimum, maximum and stepsize for the
        y\-axis, in this order\.

      * int *nobars* \(in\)

        The number of bars that will be plotted\.

  - <a name='19'></a>__::Plotchart::create3DRibbonChart__ *w* *names* *yaxis* *zaxis*

    Create a new "ribbon chart" \(configuration type: 3dribbon\)\. This is a chart
    where the data series are represented as ribbons in a three\-dimensional axis
    system\. Along the x\-axis \(which is "into" the screen\) the names are plotted,
    each representing a single series\. The first plot command draws the furthest
    series, the second draws the series in front of that and so on\.

      * widget *w* \(in\)

        Name of the *existing* canvas widget to hold the plot\.

      * widget *w* \(in\)

        Names of the series, plotted as labels along the x\-axis

      * list *yaxis* \(in\)

        A 3\-element list containing minimum, maximum and stepsize for the y\-axis
        \(drawn horizontally\!\), in this order\.

      * list *zaxis* \(in\)

        A 3\-element list containing minimum, maximum and stepsize for the z\-axis
        \(drawn vertically\), in this order\.

      * int *nobars* \(in\)

        The number of bars that will be plotted\.

  - <a name='20'></a>__::Plotchart::createBoxplot__ *w* *xdata* *ydata* *orientation*

    Create a new boxplot with horizontal or vertical boxes \(box\-and\-whiskers\)
    \(configuration type: boxplot\)\. Depending on the orientation the x\- or y\-axis
    is drawn with labels\. The boxes are drawn based on the raw data \(see the
    plot subcommand for this type of plot\)\.

      * widget *w* \(in\)

        Name of the *existing* canvas widget to hold the plot\.

      * list *xdata* \(in\)

        This is either a 3\-element list containing minimum, maximum and stepsize
        for the x\-axis, in this order \(when orientation is horizontal\), or a
        list of labels for the x\-axis \(when orientation is vertical\)\. The length
        of the label list also determines the number of boxes that can be
        plotted\. The labels are also used in the plot subcommand\.

      * list *ydata* \(in\)

        This is either a 3\-element list containing minimum, maximum and stepsize
        for the y\-axis, in this order \(when orientation is vertical\), or a list
        of labels for the y\-axis \(when orientation is horizontal\)\. The length of
        the label list also determines the number of boxes that can be plotted\.
        The labels are also used in the plot subcommand\.

      * string *orientation* \(in\)

        If given, "horizontal" or "vertical" determines the orientation of the
        boxes\. This optional value \(default: horizontal\) also determines the
        interpretation of the xdata and ydata arguments\.

  - <a name='21'></a>__::Plotchart::createTimechart__ *w* *time\_begin* *time\_end* *args*

    Create a new timechart \(configuration type: timechart\)\. The time axis \(=
    x\-axis\) goes from *time\_begin* to *time\_end*, and the vertical spacing
    is determined by the number of items to plot\.

      * widget *w* \(in\)

        Name of the *existing* canvas widget to hold the plot\.

      * string *time\_begin* \(in\)

        The start time given in a form that is recognised by the __clock
        scan__ command \(e\.g\. "1 january 2004"\)\.

      * string *time\_end* \(in\)

        The end time given in a form that is recognised by the __clock
        scan__ command \(e\.g\. "1 january 2004"\)\.

      * arguments *args* \(in\)

        The remaining arguments can be:

          + The expected/maximum number of items\. This determines the vertical
            spacing\. \(If given, it must be the first argument after "time\_end"

          + The keyword \-barheight and the number of pixels per bar\. This is an
            alternative method to determine the vertical spacing\.

          + The keyword \-ylabelwidth and the number of pixels to reserve for the
            labels at the y\-axis\.

  - <a name='22'></a>__::Plotchart::createGanttchart__ *w* *time\_begin* *time\_end* *args*

    Create a new Gantt chart \(configuration type: ganttchart\)\. The time axis \(=
    x\-axis\) goes from *time\_begin* to *time\_end*, and the vertical spacing
    is determined by the number of items to plot\. Via the specific commands you
    can then add tasks and connections between the tasks\.

      * widget *w* \(in\)

        Name of the *existing* canvas widget to hold the plot\.

      * string *time\_begin* \(in\)

        The start time given in a form that is recognised by the __clock
        scan__ command \(e\.g\. "1 january 2004"\)\.

      * string *time\_end* \(in\)

        The end time given in a form that is recognised by the __clock
        scan__ command \(e\.g\. "1 january 2004"\)\.

      * arguments *args* \(in\)

        The remaining arguments can be:

          + The expected/maximum number of items\. This determines the vertical
            spacing\. \(If given this way, it must be the first argument after
            "time\_end"\)

          + The expected/maximum width of the descriptive text \(roughly in
            characters, for the actual space reserved for the text, it is
            assumed that a character is about ten pixels wide\)\. Defaults to 20\.
            \(If given this way, it must be the second argument after
            "time\_end"\)\.

          + The keyword \-barheight and the number of pixels per bar\. This is an
            alternative method to determine the vertical spacing\.

          + The keyword \-ylabelwidth and the number of pixels to reserve for the
            labels at the y\-axis\.

  - <a name='23'></a>__::Plotchart::createRightAxis__ *w\_or\_plot* *yaxis*

    Create a plot command that will use a right axis instead of the left axis
    \(configuration type: inherited from the existing plot\)\. The canvas widget
    must already contain an ordinary plot, as the horizontal axis and other
    properties are reused\. Preferably use the plot command, as with multiple
    plots in a canvas \(also when redefining an existing plot\!\), the wrong
    geometry might be used\.

    To plot data using the right axis, use this new command, to plot data using
    the *left* axis, use the original plot command\.

      * widget *w\_or\_plot* \(in\)

        Name of the *existing* canvas widget to hold the plot or preferably
        the plot command for the plot with the left axis\.

      * list *yaxis* \(in\)

        A 3\-element list containing minimum, maximum and stepsize for the
        y\-axis, in this order\.

  - <a name='24'></a>__::Plotchart::createTableChart__ *w* *columns* ?widths?

    Create a command to draw a table\. You can use a variety of commands to draw
    the actual rows of the table, but the number of columns is fixed\. \(See
    [TABLE CHARTS](#section15) for an example\)

      * widget *w* \(in\)

        Name of the canvas widget to hold the table\.

      * list *columns* \(in\)

        The headers of the columns in the table\. The number of elements
        determines the number of columns\.

      * list *widths* \(in\)

        If given, either a single value, the width in pixels for all columns or
        for each column the width of that column\. If not given, the table is
        spread out over the width of the canvas \(minus the margins\)\.

  - <a name='25'></a>__::Plotchart::createTernaryDiagram__ *w* *args*

    Create a command to draw a ternary diagram \(configuration type: ternary\)\.
    You can draw individual \(labelled\) data points in the diagram, lines and
    filled polygons\.

      * widget *w* \(in\)

        Name of the canvas widget to hold the ternary diagram\.

      * list *args* \(in\)

        Zero or more option\-value pairs to influence the position and the
        appearance of the diagram\. In addition to the positioning options \(\-box
        and \-axesbox\) the diagram supports: *\-fractions yes/no*, to display
        numbers 0 to 1 instead of 0 to 100% and *\-steps number* to influence
        the number of labels along the three sides\.

  - <a name='26'></a>__::Plotchart::createNormalPlot__ *w* *xscale* *args*

    Create a command to draw a normal plot \- useful to investigate whether a
    data set is normally distributed or not\. In that case the data will fall on
    or near the diagonal\. As such, it is a specialised plotting procedure\.

    The details of the plotting procedure have been adopted from the *qqnorm*
    in the "R" *stats* package and described on Wikipedia\.

    As the implementation of this plot type relies on the *math::statistics*
    package, it is only available if that package can be loaded\.

      * widget *w* \(in\)

        Name of the canvas widget to hold the normal plot\.

      * list *xscale* \(in\)

        A 3\-element list containing minimum, maximum and stepsize for the x\-axis
        in this order\. The scaling of the y\-axis is determined from that\.
        *Important:* the scale is to be given in terms of the normalised data,
        that is: 0 represents the mean of the data, 1 one standard deviation
        away from the mean etc\.

      * list *args* \(in\)

        Zero or more option\-value pairs to influence the position and the
        appearance of the plot \- see the XY\-plot for more details\.

  - <a name='27'></a>__::Plotchart::createStatusTimeline__ *w* *xaxis* *ylabel* *args*

    Create a command to draw a so\-called status timeline\. Its layout is similar
    to a horizontal barchart, but the bars are drawn in different colours, each
    representing the status of the item as it varies over time \(the horizontal
    axis\)\.

      * widget *w* \(in\)

        Name of the canvas widget to hold the ternary diagram\.

      * list *xaxis* \(in\)

        A 3\-element list containing minimum, maximum and stepsize for the
        x\-axis, in this order\.

      * list *ylabels* \(in\)

        List of labels for the y\-axis\. Its length also determines the number of
        bars that will be plotted per series\.

      * list *args* \(in\)

        Zero or more option\-value pairs to influence the position and the
        appearance of the diagram\. In addition to the positioning options \(\-box
        and \-axesbox\) the diagram supports: *\-xaxis yes/no*, to turn
        displaying the numeric labels on or off\.

  - <a name='28'></a>__::Plotchart::createDendrogram__ *w* *args*

    Create a dendrogram to plot hierarchically organised data\. The labels that
    identify the endpoints of the hierarchy can all be drawn on the same level
    or where their branch ends\. This is controlled by the option "\-extend"\.

    The data are organised as nested lists, like:

    \$dendrogram plot data { {"Label1"  "Label2"} {F {A B} {C {D E}}} }

    Sublists with more than one element are considered a branching and are drawn
    in that way\. Sublists with only one element are considered a leaf and are
    drawn as text\. Because a string with two or more words can not be
    distinguished from a list with two or more elements, a provision is made for
    this situation: if the first element is "LEAF", then the list is considered
    to consist of leafs only and all elements \(even if they are actually nested
    lists themselves are drawn as text:

    \$dendrogram plot data { {LEAF "Label 1"  "Label 2"} {F {A B} {C {D E}}} }

      * widget *w* \(in\)

        Name of the canvas widget to hold the dendrogram\.

      * list *args* \(in\)

        Zero or more option\-value pairs:

          + The option "\-direction" takes one of the following values:
            left\-right, right\-left, top\-bottom, bottom\-top, with "top\-bottom" as
            the default\. The tree will be drawn according to this option, the
            labels appear either horizontally or vertically at the end of the
            tree\.

          + The option "\-extend" with value 1 \(default\) or 0 \(no extension\) to
            indicate that the labels should all appear at the same level\.

# <a name='section3'></a>PLOT METHODS

Each of the creation commands explained in the last section returns the name of
a new object command that can be used to manipulate the plot or chart\. The
subcommands available to a chart command depend on the type of the chart\.

General subcommands for all types of charts\. \\$anyplot is the command returned
by the creation command:

  - <a name='29'></a>__$anyplot__ title *text* *position*

    Specify the title of the whole chart\.

      * string *text* \(in\)

        The text of the title to be drawn\.

      * string *position* \(in\)

        The position of the title\. The default position is "center", but you can
        alternatively use "left" or "right"\. You can use multiple titles with
        different positions\.

  - <a name='30'></a>__$anyplot__ subtitle *text*

    Specify the subtitle of the whole chart\.

      * string *text* \(in\)

        The text of the subtitle to be drawn\.

  - <a name='31'></a>__$anyplot__ canvas

    Return the name of the canvas \(or the alias if you use more than one plot
    within a canvas\)\. Use this value for the coordinate transformations\.

  - <a name='32'></a>__$anyplot__ saveplot *filename* *args*

    Draws the plot into a file, using PostScript\.

      * string *filename* \(in\)

        Contain the path name of the file to write the plot to\.

      * list *args* \(in\)

        If the standard PostScript output is used, the option \-plotregion can be
        specifed to save the whole plot \(value: bbox\) regardless of what is
        visible in the window\. The default \(value: window\) is to only plot the
        visible part of the plot\.

        Optionally you can specify the option \-format "some picture format" to
        store the plot in a different file than a PostScript file\. This,
        however, relies on the Img package to do the actual job\.

        *Note:* Because the window holding the plot must be fully visible
        before Img can successfully grab it, it is raised first\. On some
        systems, for instance Linux with KDE, raising a window is not done
        automatically, but instead you need to click on the window in the task
        bar\. Similar things happen on Windows XP\.

        There seems to be something wrong under some circumstances, so instead
        of waiting for the visibility of the window, the procedure simply waits
        two seconds\. It is not ideal, but it seems to work better\.

  - <a name='33'></a>__$anyplot__ xtext *text*

    Specify the title of the \(horizontal\) x\-axis, for those plots that have a
    straight x\-axis\.

      * string *text* \(in\)

        The text of the x\-axis label to be drawn\.

  - <a name='34'></a>__$anyplot__ ytext *text*

    Specify the title of the \(horizontal\) y\-axis, for those plots that have a
    straight y\-axis\.

      * string *text* \(in\)

        The text of the y\-axis label to be drawn\.

  - <a name='35'></a>__$anyplot__ vtext *text*

    Draw a *vertical* label to the y\-axis\. Note: this requires Tk 8\.6 or
    later, for older versions it does nothing\.

      * string *text* \(in\)

        Text to drawn to the y\-axis

  - <a name='36'></a>__$anyplot__ xsubtext *text*

    Specify the subtext of the \(horizontal\) x\-axis, for those plots that have a
    straight x\-axis\. This text is drawn below the primary text\.

    Since this involves positioning the primary text and setting margins, you
    need to set the option "usesubtext" for the bottom axis via the plotstyle
    command\. The relevant options are: usesubtext, subtextcolor and subtextfont\.

      * string *text* \(in\)

        The secondary text of the x\-axis label to be drawn\.

  - <a name='37'></a>__$anyplot__ ysubtext *text*

    Specify the subtext of the \(vertical\) y\-axis, for those plots that have a
    straight y\-axis\. This text is drawn below the primary text, for both axes on
    the left and the right\.

    Since this involves positioning the primary text and setting margins, you
    need to set the option "usesubtext" for the left or right axis via the
    plotstyle command\. The relevant options are: usesubtext, subtextcolor and
    subtextfont\.

      * string *text* \(in\)

        The secondary text of the y\-axis label to be drawn\.

  - <a name='38'></a>__$anyplot__ vsubtext *text*

    Specify the subtext of the \(vertical\) y\-axis, for those plots that have a
    straight y\-axis\. This text is drawn to the *right* of the primary text,
    for both axes on the left and the right\.

    Since this involves positioning the primary text and setting margins, you
    need to set the option "usesubtext" for the left or right axis via the
    plotstyle command\. The relevant options are: usevsubtext, vsubtextcolor and
    vsubtextfont\. \(Note the "v" to distinguish this option from the text at the
    top of a vertical axis that is drawn via *$anyplot ytext* or *$anyplot
    ysubtext*\.\)

      * string *text* \(in\)

        The secondary \(vertical\) text of the y\-axis label to be drawn\.

  - <a name='39'></a>__$anyplot__ xconfig __\-option__ *value* \.\.\.

    Set one or more configuration parameters for the x\-axis\. The following
    options are supported:

      * __format__ fmt

        The format for the numbers along the axis\.

      * __ticklength__ length

        The length of the tickmarks \(in pixels\)\.

      * __ticklines__ boolean

        Whether to draw ticklines \(__true__\) or not \(__false__\)\.

      * __scale__ scale\_data

        New scale data for the axis, i\.e\. a 3\-element list containing minimum,
        maximum and stepsize for the axis, in this order\.

        *Beware:* Setting this option will clear all data from the plot\.

  - <a name='40'></a>__$anyplot__ yconfig __\-option__ *value* \.\.\.

    Set one or more configuration parameters for the y\-axis\. This method accepts
    the same options and values as the method __xconfig__\.

  - <a name='41'></a>__$anyplot__ background *part* *colour\_or\_image* *dir* ?brightness?

    Set the background of a part of the plot

      * string *part*

        Which part of the plot: "axes" for the axes area and "plot" for the
        inner part\. The interpretation depends on the type of plot\. Two further
        possibilities are:

          + *image*, in which case a predefined image is loaded into the
            background of the plot\.

          + *gradient*, in which case the background is coloured in different
            shades of the given colour\. The "dir" argument specifies the
            direction in which the colour gets whiter\.

      * string *colour\_or\_image*

        Colour for that part or the name of the image if "part" is "image"

      * string *dir*

        The direction of the gradient\. One of: top\-down, bottom\-up, left\-right
        or right\-left\.

      * string *brightness*

        Indicates whether the colour should become brighter \(bright\) or darker
        \(dark\)\. Defaults to bright

  - <a name='42'></a>__$anyplot__ xticklines *colour* ?dash?

    Draw vertical ticklines at each tick location

      * string *colour*

        Colour of the lines\. Specifying an empty colour \(""\) removes them again\.
        Defaults to "black"

      * string *dash*

        Optional argument to specify the dash pattern for the lines\. Defaults to
        "lines" Possible values: lines, dots1, dots2, dots3, dots4, dots5\. The
        actual effect depends on the platform\.

  - <a name='43'></a>__$anyplot__ yticklines *colour* ?dash?

    Draw horizontal ticklines at each tick location

      * string *colour*

        Colour of the lines\. Specifying an empty colour \(""\) removes them again
        Defaults to "black"

      * string *dash*

        Optional argument to specify the dash pattern for the lines\. Defaults to
        "lines" Possible values: lines, dots1, dots2, dots3, dots4, dots5\. The
        actual effect depends on the platform\.

  - <a name='44'></a>__$anyplot__ legend *series* *text* ?spacing?

    Add an entry to the legend\. The series determines which graphical symbol is
    to be used\. \(As a side effect the legend is actually drawn\.\)

      * string *series*

        Name of the data series\. This determines the colour of the line and the
        symbol \(if any\) that will be drawn\.

      * string *text*

        Text to be drawn next to the line/symbol\.

      * integer *spacing*

        Optional argument to specify the vertical spacing between the entries
        \(in pixels\)\. \(Note that this spacing will be reused later\.\)

  - <a name='45'></a>__$anyplot__ removefromlegend *series*

    Remove an entry for a series from the legend and redraw it\.

      * string *series*

        Name of the data series to be removed\.

  - <a name='46'></a>__$anyplot__ legendconfig __\-option__ *value* \.\.\.

    Set one or more options for the legend\. The legend is drawn as a rectangle
    with text and graphics inside\.

      * __background__ colour

        Set the colour of the background \(the default colour is white\)\. Set to
        the empty string for a transparant legend\.

      * __border__ colour

        Set the colour of the border \(the default colour is black\)\. Set to the
        empty string if you do not want a border\.

      * __canvas__ c

        Draw the legend in a different canvas widget\. This gives you the freedom
        to position the legend outside the actual plot\.

      * __font__ font

        Set the font used to draw the text next to the symbol\.

      * __legendtype__ type

        Override the type of the legend, that is pre\-defined for the current
        type of plot\. May be one of: rectangle or line\.

      * __position__ corner

        Set the position of the legend\. May be one of: top\-left, top\-right,
        bottom\-left or bottom\-right\. \(Default value is top\-right\.\)

      * __spacing__ pixels

        Set the vertical spacing between entries in the legend \(in pixels\)\.
        bottom\-left or bottom\-right\. \(Default value is 10 pixels\.\)

      * __order__ string

        Determine the ordering of the legend entries \- "normal" means the order
        in which the entries are defined, "reverse" exactly the opposite\.
        \(Default: normal\)

  - <a name='47'></a>__$anyplot__ balloon *x* *y* *text* *dir*

    Add balloon text to the plot \(except for 3D plots\)\. The arrow will point to
    the given x\- and y\-coordinates\. For xy\-graphs and such, the coordinates are
    directly related to the axes; for vertical barcharts the x\-coordinate is
    measured as the number of bars minus 1 and similar for horizontal barcharts\.

      * float *x*

        X\-coordinate of the point that the arrow of the balloon will point to\.

      * float *y*

        Y\-coordinate of the point that the arrow of the balloon will point to\.

      * string *text*

        Text to be drawn in the balloon\.

      * string *dir*

        Direction of the arrow, one of: north, north\-east, east, south\-east,
        south, south\-west, west or north\-west\.

  - <a name='48'></a>__$anyplot__ balloonconfig *args*

    Configure the balloon text for the plot\. The new settings will be used for
    the next balloon text\.

      * __font__ fontname

        Font to be used for the text

      * __justify__ left&#124;center&#124;right

        Way to justify multiline text

      * __textcolour__ colour

        Colour for the text \(synonym: textcolor\)

      * __background__ colour

        Background colour for the balloon

      * __outline__ colour

        Colour of the outline of the balloon

      * __margin__ value

        Margin around the text \(in pixels\)

      * __rimwidth__ value

        Width of the outline of the balloon \(in pixels\)

      * __arrowsize__ value

        Length factor for the arrow \(in pixels\)

  - <a name='49'></a>__$anyplot__ plaintext *x* *y* *text* *dir*

    Add plain text to the plot \(except for 3D plots\)\. The text is positioned at
    the given x\- and y\-coordinates\. For xy\-graphs and such, the coordinates are
    directly related to the axes; for vertical barcharts the x\-coordinate is
    measured as the number of bars minus 1 and similar for horizontal barcharts\.

      * float *x*

        X\-coordinate of the text position

      * float *y*

        Y\-coordinate of the text position

      * string *text*

        Text to be drawn\.

      * string *dir*

        Anchor for the text, one of: north, north\-east, east, south\-east, south,
        south\-west, west or north\-west\.

  - <a name='50'></a>__$anyplot__ plaintextconfig *args*

    Configure the plain text annotation for the plot\. The new settings will be
    used for the next plain text\.

      * __font__ fontname

        Font to be used for the text

      * __justify__ left&#124;center&#124;right

        Way to justify multiline text

      * __textcolour__ colour

        Colour for the text \(synonym: textcolor\)

  - <a name='51'></a>__$anyplot__ object *itemtype* *series* *args*

    Draw a canvas item in the plot where the coordinates are scaled using the
    coordinate system of the plot\. In addition to the standard canvas types, it
    also supports circles, dots and crosses\.

    *Note:* Currently implemented for xy\-plots, \(vertical and horizontal\)
    barcharts, and piecharts\.

    *Note:* To add an entry in the legend for the object, you can use the
    *dataconfig* subcommand with a type "rectangle"\. This will cause a
    rectangle to be shown\.

      * string *itemtype* \(in\)

        Name of a standard canvas item or "circle", "dot" or "cross"

      * string *series* \(in\)

        The data series it belongs to, used for setting the default drawing
        options

      * list *args* \(in\)

        List of coordinates and drawing options

  - <a name='52'></a>__$anyplot__ deletedata

    Remove the lines, symbols and other graphical object associated with the
    actual data from the plot\.

    *Note:* Currently implemented for xy\-plots only

    *Note:* The existing options for data series and the legend entry are kept
    as they were\.

    *Note:* Currently there are side effects if the canvas contains more than
    one plot\.

*Note:* The commands __xconfig__ and __yconfig__ are currently
implemented only for XY\-plots and only the option __\-format__ has any
effect\.

For *xy plots*, *stripcharts*, *histograms* and *time\-x\-plots*:

  - <a name='53'></a>__$xyplot__ plot *series* *xcrd* *ycrd*

    Add a data point to the plot\.

      * string *series* \(in\)

        Name of the data series the new point belongs to\.

      * float *xcrd* \(in\)

        X\-coordinate of the new point\. \(For time\-x plots this must be valid
        date/time that can be read with the *clock scan* command\)\.

      * float *ycrd* \(in\)

        Y\-coordinate of the new point\.

For *normal plots*:

  - <a name='54'></a>__$normalplot__ plot *series* *mean* *stdev* *data*

    Plot the data set using the given mean and stanard deviation\.

    As you give the mean and standard deviation separately, the plot can be used
    for several data series or for adding to an existing data series\.

      * string *series* \(in\)

        Name of the data series \- used to determine the appearance

      * float *mean* \(in\)

        Assumed mean of the data set\.

      * float *stdev* \(in\)

        Assumed standard deviation of the data set\.

      * list *data* \(in\)

        List of the data comprising the data set

  - <a name='55'></a>__$normalplot__ diagonal

    Draw a diagonal line, indicating the ideal normally distributed data set\.

For *xy, x\-log y, log\-x\-y, log\-x\-log\-y plots* there is the additional command
*plotlist*, which is useful for plotting a large amount of data:

  - <a name='56'></a>__$xyplot__ plotlist *series* *xlist* *ylist* *every*

    Draw a series of data as a whole\. If symbols are asked for, draw them only
    for every Nth data point\.

      * string *series* \(in\)

        Name of the data series the new line belongs to\.

      * float *xlist* \(in\)

        List of X\-coordinates for the data series\.

      * float *ycrd* \(in\)

        List of Y\-coordinates for the data series\.

      * int *every* \(in\)

        Optional argument stating how often a symbol \(if any\) should be drawn\.
        If left out, use a simple heuristic: N = sqrt\(number of data points\)\.

Other commands for *xy, x\-log y, log\-x\-y, log\-x\-log\-y plots* are *region*
and *minmax* to draw filled polygons:

  - <a name='57'></a>__$xyplot__ region *series* *xlist* *ylist*

    Draw a filled polygon \(region\)\. The configuration of the series influences
    the polygon as follows: *\-fillcolour* is used to fill the polygon,
    *\-colour* is used for the boundary \(set it to \{\} if no boundary is
    required and *\-width* determines the width of the boundary\.

      * string *series* \(in\)

        Name of the data series the new region belongs to\.

      * float *xlist* \(in\)

        List of X\-coordinates for the region\.

      * float *ycrd* \(in\)

        List of Y\-coordinates for the region\.

  - <a name='58'></a>__$xyplot__ minmax *series* *xcrd* *ymin* *ymax*

    Draw a filled strip representing a minimum and a maximum\. The configuration
    of the series influences the polygon as follows: *\-fillcolour* is used to
    fill the polygon, *\-colour* is used for the boundary \(set it to \{\} if no
    boundary is required and *\-width* determines the width of the boundary\.

    The arguments *ymin* and *ymax* may be empty to get an extra vertex in
    the strip\. If both are empty, a new strip is started\. For best results, the
    x\-coordinate should be specified in ascending order\.

      * string *series* \(in\)

        Name of the data series the new min/max strip belongs to\.

      * float *xcrd* \(in\)

        X\-coordinate for the strip\.

      * float *ymin* \(in\)

        The minimum y\-coordinate for the strip\.

      * float *ymax* \(in\)

        The maximum y\-coordinate for the strip\.

*Note on histograms:*

For histograms the x\-coordinate that is given is interpreted to be the
x\-coordinate of the *right* side of the bar \(or line segment\)\. The first bar
starts at the y\-axis on the left\. To completely fill the range of the x\-axis,
you should draw a bar at the maximum x\-coordinate\.

For histograms you can also use the __plotcumulative__ command:

  - <a name='59'></a>__$histogram__ plotcumulative *series* *xcrd* *ycrd*

The arguments mean exactly the same as for the __plot__ command, but the
data are accumulated to the previous values\.

For *xy plots*:

  - <a name='60'></a>__$xyplot__ trend *series* *xcrd* *ycrd*

    Draw or update a trend line using the data given sofar\.

      * string *series* \(in\)

        Name of the data series the trend line belongs to\.

      * float *xcrd* \(in\)

        X\-coordinate of the new data point

      * float *ycrd* \(in\)

        Y\-coordinate of the new data point

  - <a name='61'></a>__$xyplot__ rchart *series* *xcrd* *ycrd*

    Draw data in the same way as the plot method, but with two lines added that
    indicate the expected range \(\+/\- 3\*standard deviation\) of the data\.

      * string *series* \(in\)

        Name of the data series the data point belongs to\.

      * float *xcrd* \(in\)

        X\-coordinate of the new data point

      * float *ycrd* \(in\)

        Y\-coordinate of the new data point

  - <a name='62'></a>__$xyplot__ interval *series* *xcrd* *ymin* *ymax* ?ycentr?

    Add a vertical error interval to the plot\. The interval is drawn from ymin
    to ymax\. If the ycentr argument is given, a symbol is drawn at that
    position\.

      * string *series* \(in\)

        Name of the data series the interval belongs to\.

      * float *xcrd* \(in\)

        X\-coordinate of the interval

      * float *ymin* \(in\)

        Minimum y\-coordinate of the interval\.

      * float *ymax* \(in\)

        Maximum y\-coordinate of the interval\.

      * float *ycentr* \(in\)

        Y\-coordinate to draw the symbol at \(optional\)

  - <a name='63'></a>__$xyplot__ box\-and\-whiskers *series* *xcrd* *ycrd*

    Draw a box and whiskers in the plot\. If the argument *xcrd* is a list of
    several values and the argument *ycrd* is a single value, a horizontal box
    is drawn with the quartiles determined from the list of values contained in
    *xcrd*\.

    If, instead, the argument *ycrd* contains a list of several values and the
    argument *xcrd* a single value, then a vertical box is drawn and the
    quartiles are determined from *ycrd*\. \(There must be exactly one list of
    several values\. Otherwise an error is reported\.\)

    The option \-boxwidth to the dataconfig command determines the width \(or
    height\) of the box \(default: 10 pixels\)\.

    The option \-whiskers to the dataconfig command determines whether the
    whiskers are drawn to the extreme values \(value: extremes\), to 1\.5 times the
    interquartile range \(value: IQR or iqr\), or not at all \(value: none\)\. If the
    value is 'IQR' \(uppercase\), then also extreme values will be shown \(from 1\.5
    to 3 times the IQR as dots, above 3 times IQR as stars\)\. If the value is
    'iqr' \(lowercase\) no extreme values will be shown \(default value: IQR\)\.

    The option \-whiskerwidth to the dataconfig command determines the thickness
    of the line that draws the whiskers \(default: 1 pixel\)\.

    The option \-mediancolour to the dataconfig command determines the colour of
    the line used to draw the median within the box \(default: same as \-colour\)\.

    The option \-medianwidth to the dataconfig command determines the thickness
    of the line that draws the median within the box \(default: 1 pixel\)\.

      * string *series* \(in\)

        Name of the data series the box\-and\-whiskers belongs to\.

      * float *xcrd* \(in\)

        X\-coordinate of the box or a list of values\.

      * float *ymin* \(in\)

        Y\-coordinate of the box or a list of values\.

    The box ends at the 1st and 3rd quartile, while the whiskers by default are
    plotted to span 1\.5 IQR \(interquartile range\) from the 1st and 3rd quartile\.

  - <a name='64'></a>__$xyplot__ violin *series* *xcrd* *ycrd*

    Draw a violin plot based on the given data set\. It is an alternative to the
    box and whiskers presentation\. Just as with the box\-and\-whiskers subcommand,
    if the argument *xcrd* is a list of several values and the argument
    *ycrd* is a single value, a horizontal "violin" is drawn\.

    If, instead, the argument *ycrd* contains a list of several values and the
    argument *xcrd* a single value, then a vertical "violin" is drawn\.

    The option \-violinwidth to the dataconfig command determines the width \(or
    height\) of the violin \(default: 50 pixels\)\.

    The option \-colour \(\-color\) determines the outline colour and the option
    \-fillcolour \(\-fillcolor\) determines the colour by which the violin is filled
    \(defaults: black and not filled\)\.

      * string *series* \(in\)

        Name of the data series to use\.

      * float *xcrd* \(in\)

        X\-coordinate of the violin or a list of values\.

      * float *ymin* \(in\)

        Y\-coordinate of the violin or a list of values\.

  - <a name='65'></a>__$xyplot__ vector *series* *xcrd* *ycrd* *ucmp* *vcmp*

    Draw a vector in the plot\. The vector can be given as either cartesian
    coordinates or as length/angle, where the angle is in degrees and is
    interpreted according to the mathematical convention or the nautical\. \(See
    the vectorconfig subcommand\)

      * string *series* \(in\)

        Name of the series the vector belongs to\. Determines the appearance and
        interpretation\.

      * float *xcrd* \(in\)

        X\-coordinate of the point where the arrow appears

      * float *ycrd* \(in\)

        Y\-coordinate of the point where the arrow appears

      * float *ucmp* \(in\)

        X\-component or the length of the vector

      * float *ycentr* \(in\)

        Y\-component or the angle of the vector

  - <a name='66'></a>__$xyplot__ vectorconfig *series* __\-option__ *value* \.\.\.

    \] Set the vector drawing options for a particular series

      * string *series* \(in\)

        Name of the series the vector belongs to\.

    The options can be one of the following:

      * __colour__

        The colour of the arrow \(default: black; synonym: color\)

      * __scale__ value

        The scale factor used to convert the length of the arrow into a number
        of pixels \(default: 1\.0\)

      * __centred__ onoff

        Logical value indicating that the xy\-coordinates are to be used as the
        start of the arrow or as the centre \(default: 0; synonym: centered\)

      * __type__ keyword

        Interpretation of the vector components\. Can be "cartesian" \(default\),
        in which case the x\- and y\-components are expected, "polar" \(the angle 0
        coincides with the positive x\-axis, 90 coincides with the positive
        y\-axis\) or "nautical" \(0 is "north" and 90 is "east"\)\.

  - <a name='67'></a>__$xyplot__ dot *series* *xcrd* *ycrd* *value*

    Draw a dot in the plot\. The size and colour is determined by the value and
    by the options set for the series it belongs to\. \(See the dotconfig
    subcommand\)

      * string *series* \(in\)

        Name of the series the dot belongs to\. Determines size and colour

      * float *xcrd* \(in\)

        X\-coordinate of the point where the arrow appears

      * float *ycrd* \(in\)

        Y\-coordinate of the point where the arrow appears

      * float *value* \(in\)

        Value determining size and colour

  - <a name='68'></a>__$xyplot__ dotconfig *series* __\-option__ *value* \.\.\.

    \] Set the dot drawing options for a particular series

      * string *series* \(in\)

        Name of the series the dot belongs to\.

    The options can be one of the following:

      * __colour__

        The colour of the dot if no scaling is used or the value exceeds the
        last limit of the classes\.

      * __scale__ value

        The scale factor used to convert the value into the radius of the dot in
        pixels \(default: 1\.0\)

      * __radius__ value

        The default radius of the dots, used if there is no scaling by value \(in
        pixels; default: 3\)

      * __scalebyvalue__ onoff

        Determines whether the dots all have the same size or a size depending
        on the given value \(default: on\)\.

      * __outline__ onoff

        Draw a black circle around the dot or not \(default: on\)

      * __classes__ list

        Set the limits and the corresponding colours\. For instance:

    $xyplot series1 -classes {0 blue 1 green} -colour red

        will cause a blue dot to be drawn for values smaller than 0, a green dot
        for values larger/equal 0 but lower than 1 and a red dot for values
        larger/equal 1\.

      * __3deffect__ onoff

        Show a highlight in the dots, to mimick a 3D effect \(default: off\)

        If there is no list of classes for the particular series, the dots are
        scaled by the value\.

        You can combine the colouring by value and the scaling by value by
        setting a list of classes and setting the *scalebyvalue* option on\.

  - <a name='69'></a>__$xyplot__ contourlines *xcrd* *ycrd* *values* ?classes?

    Draw contour lines for the values given on the grid\. The grid is defined by
    the xcrd and ycrd arguments\. The xcrd argument \(resp\. ycrd\) is expected to
    be a matrix, implemented as a list of lists which gives the x\-coordinates
    \(resp\. y\-coordinates\) of the grid cell corners\. The function values are
    given at these corners\. The number of rows in xcrd \(resp\. ycrd\) is ny and
    each row contains nx values so that the total number of values in xcrd
    \(resp\. ycrd\) is nx \* ny\. The classes determine which contour lines are
    drawn\. If a value on one of the corners is missing, the contour lines in
    that cell will not be drawn\.

    Entries in the legend are drawn via the *legendisolines* subcommand\.

      * list *xcrd* \(in\)

        List of lists, each value is an x\-coordinate for a grid cell corner

      * list *ycrd* \(in\)

        List of lists, each value is an y\-coordinate for a grid cell corner

      * list *values* \(in\)

        List of lists, each value is the value at a grid cell corner

      * list *classes* \(in\)

        List of class values or a list of lists of two elements \(each inner list
        the class value and the colour to be used\)\. If empty or missing, the
        classes are determined automatically\.

        *Note:* The class values must enclose the whole range of values\.
        *Note:* The xcrd argument is generally made of nypoints identical
        rows, while each row of ycrd is made with one single value\.

  - <a name='70'></a>__$xyplot__ contourlinesfunctionvalues *xvec* *yvec* *valuesmat* ?classes?

    Draw contour lines for the values given on the grid\. The grid is defined by
    the xvec and yvec arguments\. Here, xvec \(resp\. yvec\) is a list of
    x\-coordinates \(resp\. y\-coordinates\)\. The number of values in xvec \(resp\.
    yvec\) is the number of points in the x\-coordinate \(resp\. y\-coordinate\)\. The
    function values are given at these corners\. The classes determine which
    contour lines are drawn\. If a value on one of the corners is missing, the
    contour lines in that cell will not be drawn\.

    Entries in the legend are drawn via the *legendisolines* subcommand\.

      * list *xvec* \(in\)

        List of x\-coordinates in increasing order\.

      * list *yvec* \(in\)

        List y\-coordinates in increasing order\.

      * list *valuesmat* \(in\)

        List of ny lists of nx values, each value is the value at a grid cell
        corner\. The total number of values is valuesmat is nx \* ny\.

      * list *classes* \(in\)

        List of class values or a list of lists of two elements \(each inner list
        the class value and the colour to be used\)\. If empty or missing, the
        classes are determined automatically\.

        *Note:* The class values must enclose the whole range of values\.

  - <a name='71'></a>__$xyplot__ contourfill *xcrd* *ycrd* *values* ?classes?

    Draw filled contours for the values given on the grid\. \(The use of this
    method is identical to the "contourlines" method\)\.

    Entries in the legend are drawn via the *legendshades* subcommand\.

  - <a name='72'></a>__$xyplot__ contourbox *xcrd* *ycrd* *values* ?classes?

    Draw the cells as filled quadrangles\. The colour is determined from the
    average of the values on all four corners\.

    Entries in the legend are drawn via the *legendshades* subcommand\.

  - <a name='73'></a>__$xyplot__ colorMap *colours*

    Set the colours to be used with the contour methods\. The argument is either
    a predefined colourmap \(grey/gray, jet, hot or cool\) or a list of colours\.
    When selecting the colours for actually drawing the contours, the given
    colours will be interpolated \(based on the HLS scheme\)\.

      * list *colours* \(in\)

        List of colour names or colour values or one of the predefined maps:

          + grey or gray: gray colours from dark to light

          + jet: rainbow colours

          + hot: colours from yellow via red to darkred

          + cool: colours from cyan via blue to magenta

  - <a name='74'></a>__$xyplot__ legendisolines *values* *classes*

    Add the contour classes to the legend as coloured lines\. The text indicates
    the values\.

      * list *values* \(in\)

        The list of values as used for the actual drawing\. This argument is used
        only if the list of classes is empty\.

      * list *values* \(in\)

        The list of classes as used for the actual drawing\.

  - <a name='75'></a>__$xyplot__ legendshades *values* *classes*

    Add the contour classes to the legend as coloured rectangles\. The text
    indicates the values\.

      * list *values* \(in\)

        The list of values as used for the actual drawing\. This argument is used
        only if the list of classes is empty\.

      * list *values* \(in\)

        The list of classes as used for the actual drawing\.

  - <a name='76'></a>__$xyplot__ grid *xcrd* *ycrd*

    Draw the grid cells as lines connecting the \(valid\) grid points\.

      * list *xcrd* \(in\)

        List of lists, each value is an x\-coordinate for a grid cell corner

      * list *ycrd* \(in\)

        List of lists, each value is an y\-coordinate for a grid cell corner

  - <a name='77'></a>__$xyplot__ xband *ymin* *ymax*

    Draw a light grey band in the plot, ranging over the full x\-axis\. This can
    be used to indicate a "typical" range for the data\.

      * float *ymin* \(in\)

        Lower bound for the band

      * float *ymax* \(in\)

        Upper bound for the band

  - <a name='78'></a>__$xyplot__ yband *xmin* *xmax*

    Draw a light grey band in the plot, ranging over the full y\-axis\. This can
    be used to indicate a "typical" range for the data\.

      * float *xmin* \(in\)

        Lower bound for the band

      * float *xmax* \(in\)

        Upper bound for the band

  - <a name='79'></a>__$xyplot__ labeldot *x* *y* *text* *orient*

    Draw a label and a symbol in the plot\. The label will appear near the
    symbol\. The label will be drawn in grey, so as not to be too conspicuous\.

    You can configure the appearance of the symbol by using the data series name
    "labeldot": *$w dataconfig labeldot \-colour red \-type symbol \-symbol dot*

      * float *x* \(in\)

        X\-coordinate of the symbol to be drawn

      * float *y* \(in\)

        Y\-coordinate of the symbol to be drawn

      * string *text* \(in\)

        Text for the label

      * string *orient* \(in\)

        Optional orientation \(one of w, e, n, s\) defining the position of the
        label with respect to the symbol\. It defaults to w \(so the label appears
        left of the symbol\)\.

For *polar plots*:

  - <a name='80'></a>__$polarplot__ plot *series* *radius* *angle*

    Add a data point to the polar plot\.

      * string *series* \(in\)

        Name of the data series the new point belongs to\.

      * float *radius* \(in\)

        Radial coordinate of the new point\.

      * float *angle* \(in\)

        Angular coordinate of the new point \(in degrees\)\.

For *wind rose diagrams*:

  - <a name='81'></a>__$windrose__ plot *data* *colour*

    Draw the data contained in the *data* argument\. The data are added to the
    existing spokes towards the outer circle\.

      * list *data* \(in\)

        List of data \(the length should correspond to the number of sectors\)

      * string *colour*

        Colour in which the new segments will be drawn

For *3D plots*:

  - <a name='82'></a>__$plot3d__ plotfunc *function*

    Plot a function defined over two variables __x__ and __y__\. The
    resolution is determined by the set grid sizes \(see the method
    __gridsize__ for more information\)\.

      * string *function* \(in\)

        Name of the procedure that calculates the z\-value for the given x and y
        coordinates\. The procedure has to accept two float arguments \(x is first
        argument, y is second\) and return a floating\-point value\.

  - <a name='83'></a>__$plot3d__ plotfuncont *function* *contours*

    Plot a function defined over two variables __x__ and __y__ using the
    contour levels in __contours__ to colour the surface\. The resolution is
    determined by the set grid sizes \(see the method __gridsize__ for more
    information\)\.

      * string *function* \(in\)

        Name of the procedure that calculates the z\-value for the given x and y
        coordinates\. The procedure has to accept two float arguments \(x is first
        argument, y is second\) and return a floating\-point value\.

      * list *contours* \(in\)

        List of values in ascending order that represent the contour levels \(the
        boundaries between the colours in the contour map\)\.

  - <a name='84'></a>__$plot3d__ gridsize *nxcells* *nycells*

    Set the grid size in the two directions\. Together they determine how many
    polygons will be drawn for a function plot\.

      * int *nxcells* \(in\)

        Number of grid cells in x direction\. Has to be an integer number greater
        than zero\.

      * int *nycells* \(in\)

        Number of grid cells in y direction\. Has to be an integer number greater
        than zero\.

  - <a name='85'></a>__$plot3d__ plotdata *data*

    Plot a matrix of data\.

      * list *data* \(in\)

        The data to be plotted\. The data has to be provided as a nested list
        with 2 levels\. The outer list contains rows, drawn in y\-direction, and
        each row is a list whose elements are drawn in x\-direction, for the
        columns\. Example:

    set data {
    {1.0 2.0 3.0}
    {4.0 5.0 6.0}
    }

  - <a name='86'></a>__$plot3d__ interpolatedata *data* *contours*

    Plot the data using bilinear interpolation with the contour levels in
    __contours__ to colour the surface\. The resolution is determined by the
    set grid sizes \(see the method __gridsize__ for more information\)\.

      * list *data* \(in\)

        The data to be plotted, just as for the plotdata subcommand\.

      * list *contours* \(in\)

        List of values in ascending order that represent the contour levels \(the
        boundaries between the colours in the contour map\)\.

  - <a name='87'></a>__$plot3d__ colour *fill* *border*

    Configure the colour to use for polygon borders and inner area\. *Note:*
    The "color" subcommand is a synonym\.

      * color *fill* \(in\)

        The colour to use for filling the polygons\.

      * color *border* \(in\)

        The colour to use for the border of the polygons\.

  - <a name='88'></a>__$plot3d__ ribbon *yzpairs*

    Plot a ribbon based on the pairs of yz\-coordinates\. The colours for the
    ribbon itself and the edge are taken from the colours option\.

      * list *yzpairs* \(in\)

        List of pairs of yz\-coordinates

For 3D ribbon plots:

  - <a name='89'></a>__$plot3d__ plot *yzpairs*

    Plot a ribbon based on the pairs of yz\-coordinates\. The colours for the
    ribbon itself and the edge are taken from the colours option\.

      * list *yzpairs* \(in\)

        List of pairs of yz\-coordinates

For *xy plots*, *stripcharts*, *histograms*, *polar plots* and *ternary
diagrams*:

  - <a name='90'></a>__$xyplot__ dataconfig *series* __\-option__ *value* \.\.\.

    Set the value for one or more options regarding the drawing of data of a
    specific series\.

      * string *series* \(in\)

        Name of the data series whose configuration we are changing\.

    The following options are allowed:

      * __colour__ c

      * __color__ c

        The colour to be used when drawing the data series\.

      * __type__ enum

        The drawing mode chosen for the series\. This can be one of __line__,
        __symbol__, or __both__\.

      * __symbol__ enum

        What kind of symbol to draw\. The value of this option is ignored when
        the drawing mode __line__ was chosen\. This can be one of
        __plus__, __cross__, __circle__, __up__ \(triangle
        pointing up\), __down__ \(triangle pointing down\), __dot__ \(filled
        circle\), __upfilled__ or __downfilled__ \(filled triangles\)\.

      * __radius__ integer

        The size of the radius of the symbol\. The total width of the symbol will
        be 2 times the radius size\. The default radius is 4\.

      * __width__ integer

        The width of the line \(if drawn\) or the width of the polygon outline \(if
        \-filled\)\.

      * __filled__ enum

        Whether to fill the area above or below the data line or not\. Can be one
        of: __no__, __up__ or __down__ \([SPECIAL
        EFFECTS](#section7)\)

      * __fillcolour__ colour

        Colour to use when filling the area associated with the data line\.

      * __style__ enum

        The style to be used for histograms:

          + __filled__: Fill the area under the data points with bars
            \(default\)

          + __spike__: Draw vertical lines from the y\-axis \(lower boundary\)
            to the data point

          + __symbol__: Draw a symbol at the data point

          + __plateau__: Draw a horizontal line at the height of the data
            point

          + __stair__: Draw a continuous stair\-like line connecting the data
            points

      * __smooth__ boolean

        \(Used with ternary diagrams\) Whether to draw the lines and filled
        polygons with the smooth option on \(rounded corners\) or not\.

For *piecharts* and *spiral pies*:

  - <a name='91'></a>__$pie__ plot *data*

    Fill a piechart\.

      * list *data* \(in\)

        A list of pairs \(labels and values\)\. The values determine the relative
        size of the circle segments\. The labels are drawn beside the circle\.

  - <a name='92'></a>__$pie__ colours *colour1* *colour2* \.\.\.

    Set the colours to be used\.

      * color *colour1* \(in\)

        The first colour\.

      * color *colour2* \(in\)

        The second colour, and so on\.

  - <a name='93'></a>__$pie__ explode *segment*

    Explode a segment \(that is: move one segment out of the circle\)\. If the
    segment is indicated as "auto", then you can click on a segment\. This will
    be exploded instead of any previously exploded segment\.

      * int *segment*

        The segment to be exploded or "auto" if you want to do this
        interactively\.

For *radial charts*:

  - <a name='94'></a>__$radial__ plot *data* *colour* *thickness*

    Draw a new line in the radial chart

      * list *data* \(in\)

        A list of data \(one for each spoke\)\. The values determine the distance
        from the centre of the line connecting the spokes\.

      * color *colour* \(in\)

        The colour for the line\.

      * int *thickness* \(in\)

        An optional argument for the thickness of the line\.

  - <a name='95'></a>__$pie__ colours *colour1* *colour2* \.\.\.

    Set the colours to be used\.

      * color *colour1* \(in\)

        The first colour\.

      * color *colour2* \(in\)

        The second colour, and so on\.

For *vertical barcharts*:

  - <a name='96'></a>__$barchart__ plot *series* *ydata* *colour* ?dir? ?brightness?

    Add a data series to a barchart\. The bars are tagged with a tag
    "data\_\\$series" to identify them\.

      * string *series* \(in\)

        Name of the series the values belong to\.

      * list *ydata* \(in\)

        A list of values, one for each x\-axis label\.

      * color *colour* \(in\)

        The colour of the bars\.

      * string *dir* \(in\)

        If given, "top\-down" or "bottom\-up", to indicate the direction in which
        the colour changes\. \(If not given, a uniform colour is used\)\.

      * string *brightness* \(in\)

        If given, "bright" or "dark" \(defaulting to "bright"\)\. The colour will
        change to respectively white or black, depending on the direction\.

  - <a name='97'></a>__$barchart__ config __\-option__ *value* \.\.\.

    Set options for drawing the bars\.

      * __showvalues__ boolean

        Whether to show the values or not \(above the bars\)

      * __valuefont__ newfont

        Name of the font to use for the values

      * __valuecolour__ colour

        Colour for the values

      * __valueformat__ format

        Format string to use for formatting the values

For *horizontal barcharts*:

  - <a name='98'></a>__$barchart__ plot *series* *xdata* *colour* ?dir? ?brightness?

    Add a data series to a barchart\. The bars are tagged with a tag
    "data\_\\$series" to identify them\.

      * string *series* \(in\)

        Name of the series the values belong to\.

      * list *xdata* \(in\)

        A list of values, one for each y\-axis label\.

      * color *colour* \(in\)

        The colour of the bars\.

      * string *dir* \(in\)

        If given, "left\-right" or "right\-left", to indicate the direction in
        which the colour changes\. \(If not given, a uniform colour is used\)\.

      * string *brightness* \(in\)

        If given, "bright" or "dark" \(defaulting to "bright"\)\. The colour will
        change to respectively white or black, depending on the direction\.

  - <a name='99'></a>__$barchart__ config __\-option__ *value* \.\.\.

    Set options for drawing the bars\.

      * __showvalues__ boolean

        Whether to show the values or not \(to the right of the bars\)

      * __valuefont__ newfont

        Name of the font to use for the values

      * __valuecolour__ colour

        Colour for the values

      * __valueformat__ format

        Format string to use for formatting the values

For *3D barcharts*:

  - <a name='100'></a>__$barchart__ plot *label* *yvalue* *colour*

    Add the next bar to the barchart\.

      * string *label* \(in\)

        The label to be shown below the column\.

      * float *yvalue* \(in\)

        The value that determines the height of the column

      * color *colour* \(in\)

        The colour of the column\.

  - <a name='101'></a>__$barchart__ config __\-option__ *value* \.\.\.

    Set one or more configuration parameters\. The following options are
    supported:

      * __usebackground__ boolean

        Whether to draw walls to the left and to the back of the columns or not

      * __useticklines__ boolean

        Whether to draw ticklines on the walls or not

      * __showvalues__ boolean

        Whether to show the values or not

      * __labelfont__ newfont

        Name of the font to use for labels

      * __labelcolour__ colour

        Colour for the labels

      * __valuefont__ newfont

        Name of the font to use for the values

      * __valuecolour__ colour

        Colour for the values

For *3D ribbon charts*:

  - <a name='102'></a>__$ribbon__ line *xypairs* *colour*

    Plot the given xy\-pairs as a ribbon in the chart

      * list *xypairs* \(in\)

        The pairs of x/y values to be drawn \(the series is drawn as a whole\)

      * color *colour* \(in\)

        The colour of the ribbon\.

  - <a name='103'></a>__$ribbon__ area *xypairs* *colour*

    Plot the given xy\-pairs as a ribbon with a filled area in front\. The effect
    is that of a box with the data as its upper surface\.

      * list *xypairs* \(in\)

        The pairs of x/y values to be drawn \(the series is drawn as a whole\)

      * color *colour* \(in\)

        The colour of the ribbon/area\.

For *boxplots*:

  - <a name='104'></a>__$boxplot__ plot *series* *label* *values*

    Add a box\-and\-whisker to the plot\. The dataconfig command can be used to
    customize the box\-and\-whisker \(see the box\-and\-whiskers command for the
    xyplot for details\)\.

      * string *series* \(in\)

        Name of the data series the box belongs to

      * string *label* \(in\)

        The label along the x\- or y\-axis to which the data belong

      * list *values* \(in\)

        List of raw values, the extent of the box and the whiskers will be
        determined from this list\.

  - <a name='105'></a>__$boxplot__ violin *series* *label* *values*

    Add a "violin" to the plot\. The dataconfig command can be used to customize
    the appearance \(see the violin command for the xyplot for details\)\.

      * string *series* \(in\)

        Name of the data series to be used for settings

      * string *label* \(in\)

        The label along the x\- or y\-axis to which the data belong

      * list *values* \(in\)

        List of raw values, the extent of the box and the whiskers will be
        determined from this list\.

For *timecharts*:

  - <a name='106'></a>__$timechart__ period *text* *time\_begin* *time\_end* *colour*

    Add a time period to the chart\.

      * string *text* \(in\)

        The text describing the period\.

      * string *time\_begin* \(in\)

        Start time of the period\.

      * string *time\_end* \(in\)

        Stop time of the period\.

      * color *colour* \(in\)

        The colour of the bar \(defaults to black\)\.

  - <a name='107'></a>__$timechart__ addperiod *time\_begin* *time\_end* *colour*

    Add a new period to the current row in the chart\. This allows you to
    highlight several periods in the same row\. No new text is drawn\.

      * string *time\_begin* \(in\)

        Start time of the period\.

      * string *time\_end* \(in\)

        Stop time of the period\.

      * color *colour* \(in\)

        The colour of the bar \(defaults to black\)\.

  - <a name='108'></a>__$timechart__ milestone *text* *time* *colour*

    Add a *milestone* \(represented as an point\-down triangle\) to the chart\.

      * string *text* \(in\)

        The text describing the milestone\.

      * string *time* \(in\)

        Time at which the milestone must be positioned\.

      * color *colour* \(in\)

        The colour of the triangle \(defaults to black\)\.

  - <a name='109'></a>__$timechart__ addmilestone *time* *colour*

    Add another *milestone* to the current row in the chart\.

      * string *time* \(in\)

        Time at which the milestone must be positioned\.

      * color *colour* \(in\)

        The colour of the triangle \(defaults to black\)\.

  - <a name='110'></a>__$timechart__ vertline *text* *time* *colour*

    Add a vertical line \(to indicate the start of the month for instance\) to the
    chart in the specified colour\.

      * string *text* \(in\)

        The text appearing at the top \(an abbreviation of the date/time for
        instance\)\.

      * string *time* \(in\)

        Time at which the line must be positioned\.

      * color *colour* \(in\)

        The colour of the line to be drawn \(defaults to black\)

  - <a name='111'></a>__$timechart__ hscroll *scrollbar*

    Connect a horizontal scrollbar to the chart\. See also the section on
    scrolling\.

      * widget *scrollbar* \(in\)

        The horizontal scrollbar that is to be connected to the chart

  - <a name='112'></a>__$timechart__ vscroll *scrollbar*

    Connect a vertical scrollbar to the chart\. See also the section on
    scrolling\.

      * widget *scrollbar* \(in\)

        The vertical scrollbar that is to be connected to the chart

For *Gantt charts*:

  - <a name='113'></a>__$ganttchart__ task *text* *time\_begin* *time\_end* *completed*

    Add a task with its period and level of completion to the chart\. Returns a
    list of canvas items that can be used for further manipulations, like
    connecting two tasks\.

      * string *text* \(in\)

        The text describing the task\.

      * string *time\_begin* \(in\)

        Start time of the task\.

      * string *time\_end* \(in\)

        Stop time of the task\.

      * float *completed* \(in\)

        The percentage of the task that is completed\.

  - <a name='114'></a>__$ganttchart__ milestone *text* *time* *colour*

    Add a *milestone* \(represented as an point\-down triangle\) to the chart\.

      * string *text* \(in\)

        The text describing the milestone\.

      * string *time* \(in\)

        Time at which the milestone must be positioned\.

      * color *colour* \(in\)

        The colour of the triangle \(defaults to black\)\.

  - <a name='115'></a>__$ganttchart__ vertline *text* *time*

    Add a vertical line \(to indicate the start of the month for instance\) to the
    chart\.

      * string *text* \(in\)

        The text appearing at the top \(an abbreviation of the date/time for
        instance\)\.

      * string *time* \(in\)

        Time at which the line must be positioned\.

  - <a name='116'></a>__$ganttchart__ connect *from* *to*

    Add an arrow that connects the *from* task with the *to* task\.

      * list *from* \(in\)

        The list of items returned by the "task" command that represents the
        task from which the arrow starts\.

      * string *text* \(in\)

        The text summarising the tasks

      * list *args* \(in\)

        One or more tasks \(the lists returned by the "task" command\)\. They are
        shifted down to make room for the summary\.

      * list *to* \(in\)

        The list of items returned by the "task" command that represents the
        task at which the arrow ends\.

  - <a name='117'></a>__$ganttchart__ summary *text* *args*

    Add a summary item that spans all the tasks listed\. The graphical
    representation is a thick bar running from the leftmost task to the
    rightmost\.

    Use this command before connecting the tasks, as the arrow would not be
    shifted down\!

      * string *text* \(in\)

        The text summarising the tasks

      * list *args* \(in\)

        One or more tasks \(the lists returned by the "task" command\)\. They are
        shifted down to make room for the summary\.

  - <a name='118'></a>__$ganttchart__ color *keyword* *newcolor*

    Set the colour of a part of the Gantt chart\. These colours hold for all
    items of that type\.

      * string *keyword* \(in\)

        The keyword indicates which part of the Gantt chart to change:

          + description \- the colour of the descriptive text

          + completed \- the colour of the filled bar representing the completed
            part of a task

          + left \- the colour for the part that is not yet completed

          + odd \- the background colour for the odd entries

          + even \- the background colour for the even entries

          + summary \- the colour for the summary text

          + summarybar \- the colour for the bar for a summary

      * string *newcolor* \(in\)

        The new colour for the chosen items\.

  - <a name='119'></a>__$ganttchart__ font *keyword* *newfont*

    Set the font of a part of the Gantt chart\. These fonts hold for all items of
    that type\.

      * string *keyword* \(in\)

        The keyword indicates which part of the Gantt chart to change:

          + description \- the font used for descriptive text

          + summary \- the font used for summaries

          + scale \- the font used for the time scale

      * string *newfont* \(in\)

        The new font for the chosen items\.

  - <a name='120'></a>__$ganttchart__ hscroll *scrollbar*

    Connect a horizontal scrollbar to the chart\. See also the section on
    scrolling\.

      * widget *scrollbar* \(in\)

        The horizontal scrollbar that is to be connected to the chart

  - <a name='121'></a>__$ganttchart__ vscroll *scrollbar*

    Connect a vertical scrollbar to the chart\. See also the section on
    scrolling\.

      * widget *scrollbar* \(in\)

        The vertical scrollbar that is to be connected to the chart

For *isometric plots* \(to be extended\):

  - <a name='122'></a>__$isoplot__ plot rectangle *x1* *y1* *x2* *y2* *colour*

    Plot the outlines of a rectangle\.

      * float *x1* \(in\)

        Minimum x coordinate of the rectangle to be drawn\.

      * float *y1* \(in\)

        Minimum y coordinate of the rectangle\.

      * float *x2* \(in\)

        Maximum x coordinate of the rectangle to be drawn\.

      * float *y2* \(in\)

        Maximum y coordinate of the rectangle\.

      * color *colour* \(in\)

        The colour of the rectangle\.

  - <a name='123'></a>__$isoplot__ plot filled\-rectangle *x1* *y1* *x2* *y2* *colour*

    Plot a rectangle filled with the given colour\.

      * float *x1* \(in\)

        Minimum x coordinate of the rectangle to be drawn\.

      * float *y1* \(in\)

        Minimum y coordinate of the rectangle\.

      * float *x2* \(in\)

        Maximum x coordinate of the rectangle to be drawn\.

      * float *y2* \(in\)

        Maximum y coordinate of the rectangle\.

      * color *colour* \(in\)

        The colour of the rectangle\.

  - <a name='124'></a>__$isoplot__ plot circle *xc* *yc* *radius* *colour*

    Plot the outline of a circle\.

      * float *xc* \(in\)

        X coordinate of the circle's centre\.

      * float *yc* \(in\)

        Y coordinate of the circle's centre\.

      * color *colour* \(in\)

        The colour of the circle\.

  - <a name='125'></a>__$isoplot__ plot filled\-circle *xc* *yc* *radius* *colour*

    Plot a circle filled with the given colour\.

      * float *xc* \(in\)

        X coordinate of the circle's centre\.

      * float *yc* \(in\)

        Y coordinate of the circle's centre\.

      * color *colour* \(in\)

        The colour of the circle\.

For *tables* you can use the following subcommands:

  - <a name='126'></a>__$table__ row *items*

    Draw a single row of items\. The appearance of the items can be controlled
    explicitly via the format command\.

      * list *items* \(in\)

        List of text items to be drawn, one per column

  - <a name='127'></a>__$table__ separator

    Draw a horizontal line to separate two rows

  - <a name='128'></a>__$table__ formatcommand *procname*

    Set the procedure that controls the formatting of items\. By default items
    are simply drawn as centered text\.

      * string *procname* \(in\)

        Name of the procedure to be used\. Its signature is:

    proc procname {table widget row column value} {...}

        Use the cellconfigure subcommand to set the attributes per cell\.

  - <a name='129'></a>__$table__ cellconfigure *args*

    Set the attributes for the next cell\(s\) to be drawn\.

      * list *args* \(in\)

        Key\-value pairs: \-background sets the background colour of the cells,
        \-cell sets the foreground colour, \-font sets the text font, \-anchor sets
        the position of the text within the cell and \-justify controls the
        layout of multiline text\.

For *ternary diagrams* you can use the following subcommands:

  - <a name='130'></a>__$ternary__ plot *series* *xcrd* *ycrd* *zcrd* *text* *dir*

    Draw a single data point with a label\. The three coordinates are scaled so
    that a unique point in the triangle results\. A label is drawn next to it\.

      * string *series* \(in\)

        Name of the data series the point belongs to \(used to determine colour
        and symbol\)

      * float *xcrd* \(in\)

        X\-coordinate of the data point \(refers to the lower\-left corner\)\.

      * float *ycrd* \(in\)

        Y\-coordinate of the data point \(refers to the lower\-right corner\)\.

      * float *zcrd* \(in\)

        Z\-coordinate of the data point \(refers to the top corner\)\.

      * string *text* \(in\)

        Label describing the data point\.

      * string *dir* \(in\)

        Optional string indicating the direction in which to plot the label \(e,
        n, etc\.\)

  - <a name='131'></a>__$ternary__ line *series* *coords*

    Draw a continuous line based on the given coordinates \(triplets\)\.

      * string *series* \(in\)

        Name of the data series the line belongs to \(used to determine colour
        and smoothness\)

      * list *coords* \(in\)

        The coordinates of the points that determine the line \(note that a point
        is defined by three coordinates\)\.

  - <a name='132'></a>__$ternary__ fill *series* *coords*

    Draw a filled polygon based on the given coordinates \(triplets\)\.

      * string *series* \(in\)

        Name of the data series the polygon belongs to \(used to determine colour
        and smoothness\)

      * list *coords* \(in\)

        The coordinates of the points that determine the polygon \(note that a
        point is defined by three coordinates\)\.

  - <a name='133'></a>__$ternary__ text *xtext* *ytext* *ztext*

    Draw text at the three corners of the diagram to identify the components\.

      * string *xtext* \(in\)

        Text to be plotted at the lower\-left corner

      * string *ytext* \(in\)

        Text to be plotted at the lower\-right corner

      * string *ztext* \(in\)

        Text to be plotted at the top corner

  - <a name='134'></a>__$ternary__ ticklines *colour*

    Draw ticklines to facilitate reading off the diagram\.

      * string *colour* \(in\)

        Optional argument used as the colour of the ticklines\. Defaults to grey\.

For *status timeline plots* you can use the following subcommands:

  - <a name='135'></a>__$timeline__ plot *series* *item* *start* *stop* *color*

    Draw a bar in the given colour from *start* to *stop* for the item
    *item*\. The item is a convenient label \- there is no relation to the
    labels along the axis\. The items are drawn from bottom to top\.

      * string *item* \(in\)

        Name to identify the bar\. See remark above\.

      * float *start* \(in\)

        X\-coordinate \(or time\) at which the bar starts

      * float *stop* \(in\)

        X\-coordinate \(or time\) at which the bar stops

      * string *color* \(in\)

        Colour to use for the bar\. Defaults to black\.

  - <a name='136'></a>__$timeline__ vertline *text* *time* *args*

    Draw a vertical line to indicate a significant moment\.

      * string *text* \(in\)

        Text to identify the moment\.

      * float *time* \(in\)

        X\-coordinate \(or time\) at which the line is to be drawn

      * list *args* \(in\)

        Individual optional arguments that will be passed to the *create line*
        subcommand of the underlying canvas\. This way you can set the colour or
        the line width of the vertical line\.

For *dendrograms* there is one specific subcommand:

  - <a name='137'></a>__$dendrogram__ plot *series* *data*

    Draw a dendrogram according to the options given or implied when the
    dendrogram command was created\. The "series" name allows you to select the
    colour of the branches \(\-colour/\-color\) as well as the colour and font of
    the labels \(\-labelcolour/\-labelcolor and \-labelfont\)\.

      * string *series* \(in\)

        Name of the set of options to draw the dendrogram with\.

      * list *data* \(in\)

        Nested list, describing the tree structure\. See the *createDendrogram*
        command\.

# <a name='section4'></a>COORDINATE TRANSFORMATIONS

Besides the commands that deal with the plots and charts directly, there are a
number of commands that can be used to convert world coordinates to pixels and
vice versa\. These include:

  - <a name='138'></a>__::Plotchart::viewPort__ *w* *pxmin* *pymin* *pxmax* *pymax*

    Set the viewport for window *w*\. Should be used in cooperation with
    __::Plotchart::worldCoordinates__\.

      * widget *w* \(in\)

        Name of the window \(canvas widget\) in question\.

      * float *pxmin* \(in\)

        Left\-most pixel coordinate\.

      * float *pymin* \(in\)

        Top\-most pixel coordinate \(remember: the vertical pixel coordinate
        starts with 0 at the top\!\)\.

      * float *pxmax* \(in\)

        Right\-most pixel coordinate\.

      * float *pymax* \(in\)

        Bottom\-most pixel coordinate\.

  - <a name='139'></a>__::Plotchart::worldCoordinates__ *w* *xmin* *ymin* *xmax* *ymax*

    Set the extreme world coordinates for window *w*\. The world coordinates
    need not be in ascending order \(i\.e\. xmin can be larger than xmax, so that a
    reversal of the x\-axis is achieved\)\.

      * widget *w* \(in\)

        Name of the window \(canvas widget\) in question\.

      * float *xmin* \(in\)

        X\-coordinate to be mapped to left side of viewport\.

      * float *ymin* \(in\)

        Y\-coordinate to be mapped to bottom of viewport\.

      * float *xmax* \(in\)

        X\-coordinate to be mapped to right side of viewport\.

      * float *ymax* \(in\)

        Y\-coordinate to be mapped to top side of viewport\.

  - <a name='140'></a>__::Plotchart::world3DCoordinates__ *w* *xmin* *ymin* *zmin* *xmax* *ymax* *zmax*

    Set the extreme three\-dimensional world coordinates for window *w*\. The
    world coordinates need not be in ascending order \(i\.e\. xmin can be larger
    than xmax, so that a reversal of the x\-axis is achieved\)\.

      * widget *w* \(in\)

        Name of the window \(canvas widget\) in question\.

      * float *xmin* \(in\)

        X\-coordinate to be mapped to front side of the 3D viewport\.

      * float *ymin* \(in\)

        Y\-coordinate to be mapped to left side of the viewport\.

      * float *zmin* \(in\)

        Z\-coordinate to be mapped to bottom of viewport\.

      * float *xmax* \(in\)

        X\-coordinate to be mapped to back side of viewport\.

      * float *ymax* \(in\)

        Y\-coordinate to be mapped to right side of viewport\.

      * float *zmax* \(in\)

        Z\-coordinate to be mapped to top side of viewport\.

  - <a name='141'></a>__::Plotchart::coordsToPixel__ *w* *x* *y*

    Return a list of pixel coordinates valid for the given window\.

      * widget *w* \(in\)

        Name of the canvas alias \(as returned by \[\\$anyplot canvas\]\) in
        question\.

      * float *x* \(in\)

        X\-coordinate to be mapped\.

      * float *y* \(in\)

        Y\-coordinate to be mapped\.

  - <a name='142'></a>__::Plotchart::coords3DToPixel__ *w* *x* *y* *z*

    Return a list of pixel coordinates valid for the given window\.

      * widget *w* \(in\)

        Name of the canvas alias \(as returned by \[\\$anyplot canvas\]\) in
        question\.

      * float *x* \(in\)

        X\-coordinate to be mapped\.

      * float *y* \(in\)

        Y\-coordinate to be mapped\.

      * float *y* \(in\)

        Z\-coordinate to be mapped\.

  - <a name='143'></a>__::Plotchart::polarCoordinates__ *w* *radmax*

    Set the extreme polar coordinates for window *w*\. The angle always runs
    from 0 to 360 degrees and the radius starts at 0\. Hence you only need to
    give the maximum radius\. *Note:* If the viewport is not square, this
    procedure will not adjust the extremes, so that would result in an
    elliptical plot\. The creation routine for a polar plot always determines a
    square viewport\.

      * widget *w* \(in\)

        Name of the canvas alias \(as returned by \[\\$anyplot canvas\]\) in
        question\.

      * float *radmax* \(in\)

        Maximum radius\.

  - <a name='144'></a>__::Plotchart::polarToPixel__ *w* *rad* *phi*

    Wrapper for a call to __::Plotchart::coordsToPixel__\. *Note:* This
    procedure has been deprecated \- you should use the procedure
    __::Plotchart::coordsToPixel__ instead\.

      * widget *w* \(in\)

        Name of the canvas alias \(as returned by \[\\$anyplot canvas\]\) in
        question\.

      * float *rad* \(in\)

        Radius of the point\.

      * float *phi* \(in\)

        Angle to the positive x\-axis\.

  - <a name='145'></a>__::Plotchart::pixelToCoords__ *w* *x* *y*

    Return a list of world coordinates valid for the given window\.

      * widget *w* \(in\)

        Name of the canvas alias \(as returned by \[\\$anyplot canvas\]\) in
        question\.

      * float *x* \(in\)

        X\-pixel to be mapped\.

      * float *y* \(in\)

        Y\-pixel to be mapped\.

  - <a name='146'></a>__::Plotchart::pixelToIndex__ *w* *x* *y*

    Return the index of the pie segment containing the pixel coordinates \(x,y\)

      * widget *w* \(in\)

        Name of the canvas alias \(as returned by \[\\$anyplot canvas\]\) in
        question, holding a piechart\.

      * float *x* \(in\)

        X\-pixel to be mapped\.

      * float *y* \(in\)

        Y\-pixel to be mapped\.

Furthermore there is a routine to determine "pretty" numbers for use with an
axis:

  - <a name='147'></a>__::Plotchart::determineScale__ *xmin* *xmax* *inverted*

    Determine "pretty" numbers from the given range and return a list containing
    the minimum, maximum and stepsize that can be used for a \(linear\) axis\.

      * float *xmin* \(in\)

        Rough minimum value for the scaling

      * float *xmax* \(in\)

        Rough maximum value for the scaling\.

      * boolean *inverted* \(in\)

        Optional argument: if 1, then the returned list produces an inverted
        axis\. Defaults to 0 \(the axis will be from minimum to maximum\)

  - <a name='148'></a>__::Plotchart::determineScaleFromList__ *values* *inverted*

    Determine "pretty" numbers from the given list of values and return a list
    containing the minimum, maximum and stepsize that can be used for a \(linear\)
    axis\.

      * float *values* \(in\)

        List of values that will be examined\. May contain missing values \(empty
        strings\)

      * boolean *inverted* \(in\)

        Optional argument: if 1, then the returned list produces an inverted
        axis\. Defaults to 0 \(the axis will be from minimum to maximum\)

# <a name='section5'></a>MISSING VALUES

Often data that need to be plotted contain gaps \- in a series of measurement
data, they can occur because the equipment failed, a sample was not collected
correctly or for many other reasons\. The *Plotchart* handles these gaps by
assuming that one or both coordinates of such data points are an empty string:

    #
    # Create the plot with its x- and y-axes
    #
    set s [::Plotchart::createXYPlot .c {0.0 100.0 10.0} {0.0 100.0 20.0}]

    foreach {x y} {0.0 32.0 10.0 {} 25.0 60.0 78.0 11.0 } {
        $s plot series1 $x $y
    }

The effect varies according to the type of plot:

  - For xy\-plots, radial plots and strip charts the missing data point causes a
    gap in the line through the points\.

  - For barchats, missing values are treated as if a value of zero was given\.

  - For time charts and Gantt charts missing values cause errors \- there is no
    use for them there\.

# <a name='section6'></a>OTHER OUTPUT FORMATS

Besides output to the canvas on screen, the module is capable, via __canvas
postscript__, of producing PostScript files\. One may wonder whether it is
possible to extend this set of output formats and the answer is "yes"\. This
section tries to sum up the aspects of using this module for another sort of
output\.

One way you can create output files in a different format, is by examining the
contents of the canvas after everything has been drawn and render that contents
in the right form\. This is probably the easiest way, as it involves nothing more
than the re\-creation of all the elements in the plot that are already there\.

The drawback of that method is that you need to have a display, which is not
always the case if you run a CGI server or something like that\.

An alternative is to emulate the canvas command\. For this to work, you need to
know which canvas subcommands are used and what for\. Obviously, the *create*
subcommand is used to create the lines, texts and other items\. But also the
*raise* and *lower* subcommands are used, because with these the module can
influence the drawing order \- important to simulate a clipping rectangle around
the axes\. \(The routine DrawMask is responsible for this \- if the output format
supports proper clipping areas, then a redefinition of this routine might just
solve this\)\.

Furthermore, the module uses the *cget* subcommand to find out the sizes of
the canvas\. A more mundane aspect of this is that the module currently assumes
that the text is 14 pixels high and that 80 pixels in width suffice for the
axis' labels\. No "hook" is provided to customise this\.

In summary:

  - Emulate the *create* subcommand to create all the items in the correct
    format

  - Emulate the *cget* subcommand for the options \-width and \-height to allow
    the correct calculation of the rectangle's position and size

  - Solve the problem of *raising* and *lowering* the items so that they are
    properly clipped, for instance by redefining the routine DrawMask\.

  - Take care of the currently fixed text size properties

# <a name='section7'></a>SPECIAL EFFECTS

As an example of some special effects you can achieve, here is the code for a
plot where the area below the data line varies in colour:

    canvas .c  -background white -width 400 -height 200
    pack .c -fill both

    set s [::Plotchart::createXYPlot .c {0.0 100.0 10.0} {0.0 100.0 20.0}]

    $s background gradient green top-down

    $s dataconfig series1 -filled up -fillcolour white

    $s plot series1  0.0 20.0
    $s plot series1 10.0 20.0
    $s plot series1 30.0 50.0
    $s plot series1 35.0 45.0
    $s plot series1 45.0 25.0
    $s plot series1 75.0 55.0
    $s plot series1 100.0 55.0

    $s plaintext 30.0 60.0 "Peak" south

The trick is to fill the background with a colour that changes from green at the
top to white at the bottom\. Then the area above the data line is filled with a
white polygon\. Thus the green shading varies with the height of the line\.

# <a name='section8'></a>ROOM FOR IMPROVEMENT

In this version there are a lot of things that still need to be implemented:

  - More robust handling of incorrect calls \(right now the procedures may fail
    when called incorrectly\):

      * The axis drawing routines can not handle inverse axes right now\.

      * If the user provides an invalid date/time string, the routines simply
        throw an error\.

# <a name='section9'></a>RESIZING

__Plotchart__ has not been designed to create plots and charts that keep
track of the data that are put in\. This means that if an application needs to
allow the user to resize the window holding the plot or chart, it must take care
to redraw the complete plot\.

The code below is a simple example of how to do that:

    package require Plotchart

    grid [canvas .c -background white] -sticky news
    grid columnconfigure . 0 -weight 1
    grid rowconfigure . 0 -weight 1

    bind .c <Configure> {doResize}

    proc doPlot {} {
        #
        # Clean up the contents (see also the note below!)
        #
        .c delete all

        #
        # (Re)draw the bar chart
        #
        set p [::Plotchart::createBarchart .c {x y z} {0 100 10} 3]
        $p plot R {10 30 40} red
        $p plot G {30 40 60} green
    }

    proc doResize {} {
        global redo

        #
        # To avoid redrawing the plot many times during resizing,
        # cancel the callback, until the last one is left.
        #
        if { [info exists redo] } {
            after cancel $redo
        }

        set redo [after 50 doPlot]
    }

*Please note:* The code above will work fine for barcharts and many other
types of plots, but as __Plotchart__ keeps some private information for xy
plots, more is needed in these cases\. This actually requires a command
"destroyPlot" to take care of such details\. A next version of __Plotchart__
may have that\.

Alternatively, you can use the __xyplot__ package which is built on top of
Plotchart\. This package supports zooming in and zooming out, as well as resizing
the plot as a whole\. Here is a small demonstration program:

    # xyplot_demo.tcl --
    #     Demonstration of the xyplot package
    #

    package require xyplot

    set xydata1 {}
    set xydata2 {}
    set xydata3 {}
    set xydata4 {}
    for { set i 0 } { $i < 1024 } { incr i } {
        lappend xydata1 [expr {$i-1000}] [expr {$i * sin($i/4096.0*3.1415*2) * (sin($i/256.0*3.1415*2))}]
        lappend xydata2 [expr {$i-1000}] [expr {$i * sin($i/4096.0*3.1415*2) * (sin($i/256.0*3.1415*2) + 0.25 * sin($i/256.0*3.1415*6))}]
        lappend xydata3 [expr {$i-1000}] [expr {$i * sin($i/4096.0*3.1415*2) * (sin($i/256.0*3.1415*2) + 0.25 * sin($i/256.0*3.1415*6) + 0.0625 * sin($i/256.0*3.1415*10))}]
        lappend xydata4 [expr {$i-1000}] [expr {$i * sin($i/4096.0*3.1415*2) * (sin($i/256.0*3.1415*2) + 0.25 * sin($i/256.0*3.1415*6) + 0.0625 * sin($i/256.0*3.1415*10) + 0.015625 * sin($i/256.0*3.1415*14))}]
    }

    set xyp [xyplot .xyp -xformat "%5.0f" -yformat "%5.0f" -title "XY plot testing" -background gray90]
    pack $xyp -fill both -expand true

    set s1 [$xyp add_data sf1 $xydata1 -legend "Serie 1 data" -color red]
    set s2 [$xyp add_data sf2 $xydata2 -legend "Serie 2 data" -color green]
    set s3 [$xyp add_data sf3 $xydata3 -legend "Serie 3 data" -color blue]
    set s4 [$xyp add_data sf4 $xydata4 -legend "Serie 4 data" -color orange]

    set xyp2 [xyplot .xyp2 -xticks 8 -yticks 4 -yformat %.2f -xformat %.0f]
    pack $xyp2 -fill both -expand true

    set s1 [$xyp2 add_data sf1 $xydata1]
    set s2 [$xyp2 add_data sf2 $xydata2]
    set s3 [$xyp2 add_data sf3 $xydata3]
    set s4 [$xyp2 add_data sf4 $xydata4]

Zooming in is done by selecting a rectangle with the left mouse button pressed\.
Zooming out is done by pressing the right mouse button\. If you resize the
window, the canvases inside are resized too\. If you zoom in, you can scroll the
plot via the scrollbars that are automatically attached\.

# <a name='section10'></a>ZOOMING IN

As the Plotchart package does not keep track of the data itself, rescaling an
existing plot \- for instance when zooming in \- would have to be done by
redefining the plot and redrawing the data\. However, the canvas widget offers a
way out by scaling and moving items, so that zooming in becomes a bit simpler\.

Whether zooming is indeed useful, depends on the type of plot\. Currently it is
defined for XY\-plots only\. The method is called "rescale" and simply redraws the
axes and scales and moves the data items so that they conform to the new axes\.
The drawback is that any symbols are scaled by the same amount\. The rescale
method works best for plots that only have lines, not symbols\.

The method works very simply:

    $p rescale {newxmin newxmax newxstep} {newymin newymax newystep}

# <a name='section11'></a>CONFIGURATION OPTIONS AND OTHER COMMANDS

The commands __plotconfig__ and __plotstyle__ can be used to set all
manner of options\. The command __eraseplot__ can be used to completely erase
a plot or chart\. The syntax of these commands is:

  - <a name='149'></a>__::Plotchart::plotconfig__ *charttype* *component* *property* *value*

    Set a new value for the property of a component in a particular chart or
    plot type or query its current value\. Changed properties only have effect
    for the consecutive plots, not for the ones already created\. Each argument
    is optional\.

    *Note:* The __plotstyle__ command offers a more flexible way to
    control the configuration options\.

      * string *charttype* \(in\)

        The type of chart or plot \(see the configuration type that is mentioned
        for each create command\)\. If not given or empty, a list of chart types
        is returned\. If it is given, the properties for that particular type are
        used\.

      * string *component* \(in\)

        The component of the plot/chart: leftaxis, rightaxis, background, margin
        and so on\. If not given or empty, a list of components is returned\. If
        it is given, the properties for that particular component will be set
        for that particular type of chart\.

      * string *property* \(in\)

        The property of the component of the plot/chart: textcolor, thickness of
        the axis line, etc\. If not given or empty, a list of properties is
        returned\. If it is given, that particular property for that particular
        component will be set for that particular type of chart\.

      * string *value* \(in\)

        The new value for the property\. If empty, the current value is returned\.
        If the value is "default", the default value will be restored\.

        Note, that in some cases an empty value is useful\. Use "none" in this
        case \- it can be useful for colours and for formats\.

  - <a name='150'></a>__::Plotchart::plotstyle__ *subcmd* *style* *args*

    Manipulate the *style* in which subsequent plots will be drawn\. The
    default style is "default", but you can define and load any number of other
    styles\.

      * string *subcmd* \(in\)

        The subcommand to be executed:

          + *configure* \- this subcommand allows you to set the options per
            chart type\. It takes the same options as the __plotconfig__
            command\.

          + *current* \- return the current style

          + *load* \- make the given style the active style for subsequent
            plots and charts

          + *names* \- return the list of currently defined styles

      * string *style* \(in\)

        The name of the plot style to manipulate

      * list *args* \(in\)

        The new options for the style\. Each option is described by: chart type,
        component of the chart, property of the component and the new value for
        the property \- see the __plotconfig__ command for details\.

Below is a detailed list of the components and properties:

  - Axes come in a wide variety:

      * leftaxis, rightaxis, topaxis, bottomaxis for the plots with a
        rectangular shape\.

      * xaxis, yaxis and zaxis are used for the 3D plots

      * axis, this represents the radial and tangential axes of a polar plot

    All axes have the following properties:

      * color \- the colour of the line and the tickmarks

      * thickness \- the width of the line of the axis itself, not the tickmarks

      * ticklength \- the length of the tickmarks in pixels\. A positive value is
        outward, a negative value is inward\.

      * font \- the font for the labels and the text at the axis

      * format \- the format for rendering the \(numerical\) labels\. For the time
        axis it is the format for a date and time\.

      * textcolor \- the colour for the labels and the text\.

      * labeloffset \- space \(in pixels\) between the tickmark and the actual
        label

      * minorticks \- number of minor tickmarks between the major tickmarks

      * shownumbers \- show the numbers/labels or not\.

      * showaxle \- show the axis line or not\.

  - The *margin* is important for the layout\. Currently only the rectangular
    plots allow the margins to be set: left, right, top and bottom\. The values
    are in pixels\.

  - The *text* component is meant for any text appearing via the plaintext
    subcommand\. The properties are: textcolor, font and anchor \(positioning of
    the text relative to the given coordinates\)\.

  - The *background* has two properties: outercolor, the colour outside of the
    actual plot, and innercolor, the colour inside the plot\. \(Note: only
    "outercolor" has now been implemented\)\.

  - The *mask* has one property only: draw\. If set to 1, the default, white
    rectangles are drawn to mimick the effects of clipping \- excess data are
    made invisible this way\. Otherwise these rectangles are not drawn\. This is
    useful to control the layout more tightly, for instance with multiple plots
    in one canvas\.

  - The *title* component has the same properties as the *text* component
    \(but it is independent of that component\)\. It also has a *background*
    property: If not set \(or set to the empty string\) this is the same as the
    outercolor property of the *background* component, otherwise it is a
    separate colour\.

  - The *legend* has three properties: background, border and position\. See
    the legend subcommand for the meaning\.

  - The *bar* components is used for all barchart\-like plots and has three
    properties: *barwidth* \(relative width of the bars in relation to the
    items along the axis\), *innermargin* \(the relative width of the gaps
    between bars or groups of bars\) and the *outline* colour\.

  - The *labels* component is used to describe the appearance of the labels of
    piecharts and "spiral" piecharts\. The properties are:

      * textcolor \- colour of the label text

      * font \- font to be used for the label text

      * placement \- *out* of the circle or *in* the circle

      * sorted \- the data are sorted in ascending order first

      * shownumbers \- the labels are combined with the numbers according to the
        format

      * format \- the format to be used \(defaults to: "%s \(%g\)"\) if the numbers
        are to shown\. The format command gets the label first, then the number\)

      * formatright \- if given, the format to be used for labels and numbers
        appearing to the right of the pie\. The format command gets the number
        first, then the label\. \(Defaults to ""\)

  - The *slice* component has properties to control the appearance of the
    sections in the pie diagram:

      * outline \- the colour of the line around the slices \(default: black\)

      * outlinewidth \- width of the line around the slices \(default: 1 pixel\)

      * startangle \- the angle w\.r\.t\. positive x\-axis where the first slice
        starts

      * direction \- the direction in which to draw the slices \(default: \+, that
        is clockwise\)

  - The table charts use the general components *title* and *margin* and
    further more the specific components *header*, *oddrow*, *evenrow*,
    *cell* and *frame*:

      * *header*, *oddrow* and *evenrow* have the properties:
        *background*, *font*, *color*, *height* and *anchor* with
        obvious meanings\.

      * The *cell* component defines in addition *leftspace*, *rightspace*
        and *topspace* for fine\-grained control of the spacing inside the
        cell\. These are not set via the *cellconfigure* subcommand however\.

      * Finally the *frame* component uses *color*, *outerwidth* \(for the
        width of the line surrounding the whole table\) and *innerwidth* \(for
        the width of lines separating columns and rows\)\.

  - The target diagram and the Taylor diagram use the *limits* components in
    addition to the various general components\. The limits component has one
    property: the color of the circles and circle segments\.

    For the Taylor diagram you can specify the color of the reference circles
    via the *reference* component\.

  - <a name='151'></a>__::Plotchart::eraseplot__ *anyplot*

    Erase the plot/chart with all resources connected to it\.

      * string *anyplot* \(in\)

        The plot/chart command\. All canvas items associated with this command
        and all internal resources will be removed, including the plot/chart
        command itself\.

See the examples in plotdemos7\.tcl for its use\.

# <a name='section12'></a>SCROLLING FOR TIMECHARTS AND GANTT CHARTS

For two types of plots automatic scrolling management has been implemented:
timecharts and Gantt charts\. The subcommands *hscroll* and *vscroll*
associate \(existing\) scrollbars to the plot, in much the same way as for text
and canvas widgets\.

Once the association is made, the scrollbars are automatically updated if:

  - You add an item with a period wider than the current one\.

  - You add a vertical line for a time beyond the current bounds\.

  - You add an extra item beyond the number that was used to create the chart\.

For instance:

    package require Plotchart

    canvas .c -width 400 -height 200
    scrollbar .y -orient vertical
    scrollbar .x -orient horizontal

    grid .c .y -sticky news
    grid .x    -sticky news

    source plotchart.tcl

    set s [::Plotchart::createTimechart .c "1 january 2004"  "31 december 2004" 4]

    $s period "Spring" "1 march 2004" "1 june 2004" green
    $s period "Summer" "1 june 2004" "1 september 2004" yellow
    $s vertline "1 jan" "1 january 2004"
    $s vertline "1 apr" "1 april 2004"
    $s vertline "1 jul" "1 july 2004"
    $s vertline "1 oct" "1 october 2004"
    $s vertline "1 jan" "1 january 2005"
    $s vertline "1 apr" "1 april 2005"
    $s vertline "1 jul" "1 july 2005"
    $s milestone "Longest day" "21 july 2004"
    $s milestone "Longest day 2" "21 july 2004"
    $s milestone "Longest day 3" "21 july 2004"
    $s milestone "Longest day 4" "21 july 2004"
    $s milestone "Longest day 5" "21 july 2004"
    $s milestone "Longest day 6" "21 july 2004"
    $s title "Seasons (northern hemisphere)"

    $s vscroll .y
    $s hscroll .x

The original extent of the chart is from 1 january 2004 to 31 december 2004\. But
because of the addition of vertical lines in 2005 and more items than was
specified at the creation of the chart, both the horizontal and the vertical
scrollbar will be enabled\.

# <a name='section13'></a>SPECIALISED PLOTS

Most of the plot and chart types described above have a fairly general use and
you simply prepares the data to be plotted yourself\. This section describes
several plot types that are more specialised, in the sense that they have
specific purposes and you pass raw data that are then processed in the plotting
routines\.

Currently there are the following types:

  - Target diagrams are used to assess the capacity of numerical models to
    reproduce measurement data\. They are described in detail in:

    Jason K. Joliff et al.
        Summary diagrams for coupled hydrodynamic-ecosystem model skill assessment
        Journal of Marine Systems 76 (2009) 64-82
        DOI: 10.1016/j.jmarsys.2008.05.014

  - Performance profiles are used for comparing the performance of numerical
    methods or implementations thereof with each other\. For more information:

    Desmond Higham and Nicholas Higham
        Matlab Guide
        SIAM, 2005, Philadephia

  - Taylor diagrams are another graphical representation of how numerical models
    reproduce measurement data\. A detailed description appears in
    [https://en\.wikipedia\.org/wiki/Taylor\_diagram](https://en\.wikipedia\.org/wiki/Taylor\_diagram)

Most of the general methods for XY\-plots work for these plots as well, but their
creation and the methods to plot the data are very specific\.

  - <a name='152'></a>__::Plotchart::createTargetDiagram__ *w* *limits* *scale*

    Create a new target diagram with circles indicating specific limits\. The
    x\-axis represents the unbiased "root\-mean\-square difference" \(typically
    varying between \-1 and 1\) and the y\-axis represents the normalised bias\.

    Data points closer to the origin represent better results than data points
    further away\.

      * widget *w* \(in\)

        Name of the *existing* canvas widget to hold the plot\.

      * list *limits* \(in\)

        List of radii for the circles that represent the limits \(for instance:
        0\.5 and 0\.7\)

      * double *scale* \(in\)

        Scale for the axes \- defaults to 1, but if the model results are a poor
        fit, then that may be too small a value\. Both axes are scaled in the
        same way\.

  - <a name='153'></a>__$target__ plot *series* *xvalues* *yvalues*

    The plot method takes two series of data of the same length, the first one
    representing the model results, the second one represent the measurements
    or, more general, the data that need to be reproduced\.

      * string *series* \(in\)

        Name of the series \(it will be plotted as a symbol that is configured
        via the *$target dataconfig* command \(see the XY\-plot equivalent for
        an explanation\)

      * list *xvalues* \(in\)

        List of model results \(missing values are represented as empty strings\)

      * list *yvalues* \(in\)

        List of measured values \(missing values are represented as empty
        strings; only if both the x and the y values are given, is the pair used
        in the computations\)

  - <a name='154'></a>__::Plotchart::createPerformanceProfile__ *w* *max*

    Create a diagram to show the performance of various numerical methods \(or
    solvers\)\. The idea is to first run these methods on a set of problems and
    measure their performance\. The smaller the number the better\. Then these
    methods are compared via a so\-called performance profile: the data are
    scaled and ordered, such that the best method ends up highest\.

    Because of the nature of the plot all data must be given at once\.

      * widget *w* \(in\)

        Name of the *existing* canvas widget to hold the plot\.

      * float *max* \(in\)

        Maximum value for the x\-axis \(the x\-axis is the scaled performance of
        the series\)\.

  - <a name='155'></a>__$performance__ plot *series\_and\_data\_pairs*

    Plot the data for each given method\. The data are identified by the series
    name and the appearance is controlled via prior dataconfig subcommand\.

      * list *series\_and\_data\_pairs* \(in\)

        List of series names and data\. All data must be given at once\.

  - <a name='156'></a>__::Plotchart::createTaylorDiagram__ *w* *radius\_data* *args*

    Create a new Taylor diagram \(one quadrant\) with circles indicating the
    distance to the reference point\.

    The data points are given as the standard deviation and the correlation to
    the reference\.

      * widget *w* \(in\)

        Name of the *existing* canvas widget to hold the plot\.

      * list *radius\_data* \(in\)

        A list of the maximum radius for the standard deviation and the step
        size\. Quarter circles are drawn with the axis labels\.

    Currently one option is supported:

      * __reference__ value

        Reference value for the data points to be compared with\. It appears as a
        dot at the x\-axis\. Along with this dot circle segments are drawn at the
        same spacing as the axis labels to indicate the distance of the data
        points from the reference\.

  - <a name='157'></a>__$taylor__ plot *series* *stdev* *corr*

    The plot method takes the standard deviation and the correlation to the
    reference as input and draws a symbol as a representation\. The standard
    deviation serves as the distance from the origin and the correlation
    determines the angle\.

      * string *series* \(in\)

        Name of the series \(it will be plotted as a symbol that is configured
        via the *$target dataconfig* command \(see the XY\-plot equivalent for
        an explanation\)

      * float *stdev* \(in\)

        Standard deviation of the data point

      * list *corr* \(in\)

        Correlation coefficient with the reference dataset

  - <a name='158'></a>__::Plotchart::createHeatmap__ *w* *rowlabels* *columnlabels* *args*

    Create a heatmap, i\.e\. a tableau of rectangles whose colours depend on some
    data\. The row and column labels are used as identifiers when filling in the
    data\. The number of them determines the size of the tableau\.

    The data are passed by row, by column or per individual cell\.

      * widget *w* \(in\)

        Name of the *existing* canvas widget to hold the heatmap\.

      * list *rowlabels* \(in\)

        List of labels to display at each row\. The labels also serve as
        identifiers\.

      * list *columnlabels* \(in\)

        List of labels to display at each column\. The labels also serve as
        identifiers\.

      * list *args* \(in\)

        Zero or more arguments to influence the size of the heatmap\. See XY plot
        for more information\.

  - <a name='159'></a>__$heatmap__ plot row *label* *data*

    Use the given data to fill the rectangles belonging to the row "label"\.

      * string *label* \(in\)

        String indicating which row to use\.

      * list *data* \(in\)

        List of numerical data to be used for the colouring of the rectangles\.

  - <a name='160'></a>__$heatmap__ plot column *label* *data*

    Use the given data to fill the rectangles belonging to the column "label"\.

      * string *label* \(in\)

        String indicating which column to use\.

      * list *data* \(in\)

        List of numerical data to be used for the colouring of the rectangles\.

  - <a name='161'></a>__$heatmap__ plot cell *rowlabel* *columnlabel* *value*

    Use the given value to fill the rectangle belonging to the cell with the
    given row and column labels\.

      * string *rowlabel* \(in\)

        String indicating which row to use\.

      * string *columnlabel* \(in\)

        String indicating which column to use\.

      * float *value* \(in\)

        Value to be used for the colouring of the cell\.

  - <a name='162'></a>__$heatmap__ scale values *min* *max*

    Set the range for the values \- they are mapped to a colour via linear
    interpolation\.

      * float *min* \(in\)

        Minimum value to be used\.

      * float *max* \(in\)

        Maximum value to be used\.

  - <a name='163'></a>__$heatmap__ scale colours *mincolour* *maxcolour*

    Set the colours to be used for the minimum and the maximum values\. The
    actual colour is determined via linear interpolation of the RGB values\.

      * string *mincolour* \(in\)

        Colour to be used at the minimum value\.

      * string *maxcolour* \(in\)

        Colour to be used at the maximum value\.

  - <a name='164'></a>__::Plotchart::createCircleplot__ *w* *labels* *args*

    Create a circle plot, i\.e\. a circle with labels that can be connected by
    coloured arcs\. Typical use: present the relationship between the items on
    the circle in a graphical way\.

    The connections can be drawn pair by pair\.

      * widget *w* \(in\)

        Name of the *existing* canvas widget to hold the circle plot\.

      * list *rowlabels* \(in\)

        List of labels to display along the circle\. Each label is accompanied by
        a filled dot\.

      * list *args* \(in\)

        Zero or more arguments to influence the size of the circle plot\. See XY
        plot for more information\.

  - <a name='165'></a>__$circleplot__ connect *label1* *label2* *colour* *width*

    Connect the two labels via a coloured arc of given width \(the arc is
    actually a parabola\)\.

      * string *label1* \(in\)

        String indicating the first label to connect\.

      * string *label2* \(in\)

        String indicating the second label to connect\.

      * string *colour* \(in\)

        Colour to use for the connected arc\.

      * string *width* \(in\)

        Width for the connected arc\.

  - <a name='166'></a>__$circleplot__ modify *label* *args*

    Modify the appearance of the label and the accompanying dot\.

      * string *label* \(in\)

        String indicating which label to modify\.

      * list *args* \(in\)

        List of key\-value pairs:

          + *\-textcolour colour* \- colour of the text to be used \(alternative:
            "\-textcolor"\)

          + *\-font font* \- font for the text

          + *\-dotcolour colour* \- colour for the dot \(alternative:
            "\-dotcolor"\)

# <a name='section14'></a>ADDING SPECIFIC PLOT METHODS

The command *plotmethod* can be used to add new methods for a particular plot
or chart type\. It is intended to help you develop specialised graphical
displays\.

  - <a name='167'></a>__::Plotchart::plotmethod__ *charttype* *methodname* *plotproc*

    Adds a new method for the given plot or chart type\. The method is
    implemented by the command or procedure given in the plotproc argument\. The
    procedure will be called with two extra arguments, the name of the created
    plot and the canvas widget that contains \(see the example below\)\.

      * string *charttype* \(in\)

        The type of plot or chart that the new method should be added to\.

      * string *methodname* \(in\)

        Name of the method to be used\.

      * string *plotproc* \(in\)

        Name of the command or procedure that implements the method\.

Here is a trivial example of how to use this:

    #
    # The custom method "doodle" always adds the text "DOODLE"
    # to the plot
    #
    proc doodle {p w x y} {
        $p plaintext $x $y "DOODLE"
    }
    ::Plotchart::plotmethod xyplot doodle doodle

    #
    # Use it
    pack [canvas .c]

    set p [::Plotchart::createXYPlot .c {0 100 10} {0 20 5}]

    $p doodle 40 10

# <a name='section15'></a>TABLE CHARTS

To show what you can do with table charts, here is a simple example that plots a
number of random data\. The colours depend on the range that the data belong to\.
For this the procedure *setColor* is used\.

    package require Plotchart

    pack [canvas .c -bg white -height 300] -fill both -expand yes

    ::Plotchart::plotconfig table frame outerwidth 3
    ::Plotchart::plotconfig table frame color red

    set t [::Plotchart::createTableChart .c {"Column 1" "Column 2" "Column 3"} 80]


    proc setColor {table widget row col value} {
        $table cellconfigure -background white -color black
        if { $value < 2.0 } {
            $table cellconfigure -background red -color white
        }
        if { $value > 6.0 } {
            $table cellconfigure -background green
        }

        return [format "%6.3f" $value]
    }

    # Command must already exist ...
    $t formatcommand setColor

    $t title "Demonstration of table charts"
    $t separator

    for {set i 0} {$i < 9} {incr i} {
        set row {}

        for {set j 0} {$j < 3} {incr j} {
            lappend row [expr {10.0 * rand()}]
        }

        if { $i == 3 } {
            $t separator
        }

        $t row $row
    }

# <a name='section16'></a>CONTROL DISPLAYS

TODO

# <a name='section17'></a>USING DATE/TIME LABELS

The options \-timeformat and \-gmt are used to control the display of date/time
labels along the x\-axis for those plot types for which it makes sense\. These
options were implemented to take care of date/time labels for stripcharts, as
you can also use custom labels \(the option \-xlabels\) if the axis is "static"\.
Since this is not the case for stripcharts, this was not an option \(Tcllib/Tklib
bug 3613718\)\. You can also specify the \-locale option to get a localised
date/time label\. The example below illustrates how to use the \-timeformat
option\. The \-gmt option merely suppresses the handling of daylight saving time
by the \[clock format\] command\.

    package require Plotchart

    pack [canvas .c -width 500 -bg white]

    #
    # Note that we need to present the x values as clock seconds
    #
    set start [clock scan  "0:00"]
    set stop  [clock scan "10:00"]
    set s [Plotchart::createStripchart .c [list $start $stop 7200] {0 10 1} -timeformat "%H:%M"]

    # With a locale like "de":
    #set s [Plotchart::createStripchart .c [list $start $stop 7200] {0 10 1} -timeformat "%H:%M" -locale de]

    foreach {x y} {0 0 2 5 5 2 9 9 12 10} {
        set x [expr {$start + 3600 * $x}] ;# Convert hour to clock seconds
        $s plot a $x $y
    }

The *plot* subcommand simply interprets the x and y data as straightforward
numbers, so that you need to do the conversion from date/time to "clock seconds"
yourself\.

# <a name='section18'></a>ARRANGING MULTIPLE PLOTS IN A CANVAS

The command *plotpack* allows you to copy the contents of a plot into another
canvas widget\. This canvas widget does not act as a composite plot, but it can
be saved as a PostScript file for instance: Note: the command simply takes a
snapshot of the plots/charts as they are at that moment\.

  - <a name='168'></a>__::Plotchart::plotpack__ *w* *dir* *args*

    Copy the contents of the plots/charts into another widget, in a manner
    similar to the *pack* geometry manager\.

      * widget *w* \(in\)

        The name of the canvas widget to copy the plots/charts into

      * string *dir* \(in\)

        The direction of the arrangement \- top, left, bottom or right

      * list *args* \(in\)

        List of plots/charts to be copied\.

For example:

    set p1 [createXYPlot ...]
    set p2 [createBarchart ...]

    ... fill the plots ...

    toplevel .t
    pack [canvas .t.c2 -width ...]

    #
    # Copy the two plots above each other in the new canvas
    #
    plotpack .t.c2 top $p1 $p2

A different method is to use the *\-box* and *\-axesbox* options when creating
the plot\. These control the area in the canvas where the plot or chart will be
drawn\.

The *\-box* option takes as its value a list of four numbers:

  - X\-coordinate of the upper\-left corner of the area that will contain the plot
    or chart \(simply a canvas coordinate\)

  - Y\-coordinate of the upper\-left corner

  - Width of the area

  - Height of the area

Specifying the width and height makes it easier to reposition the area with
respect to other plots\.

The *\-axesbox* option is meant to make aligning the axes of a plot with those
of other plots easier\. The option takes a list of six arguments:

  - Identification of the plot with respect to which it should be positioned
    \(the command returned by the creation command\)\.

  - The anchor position that should be used \(n, nw, \.\.\.\)

  - X\-coordinate of the upper\-left corner of the area that will contain the plot
    or chart\. This coordinates is taken relative to the *anchor position*

  - Y\-coordinate of the upper\-left corner

  - Width of the axis area

  - Height of the axis area

With this option the area the axes occupy is first determined and the complete
area is derived from the margins\.

For example:

    set p2 [::Plotchart::createXYPlot .c {0 10 1} {-5 5 2.5} -axesbox [list $p1 ne 0 0 200 200]]

will create a second plot whose left axis coincides with the right axis of plot
"\\$p1" and the top of the axis is at the same heigt as well \- because the axes
are positioned at a point 0 pixels to the left and 0 pixels below the north\-east
corner\.

# <a name='section19'></a>INTERACTIVE USE

*Plotchart* has several features for interactive use \(cf\. [NOTES ON
TAGS](#section20)\):

  - The legend can be moved around by pressing mouse button 1 in the legend's
    box and keeping it down\.

  - You can use the *bindplot* and *bindlast* commands to define actions
    that are to be taken when the user clicks on an element of the plot or
    chart\. \(see below, see also the sample code in plotdemos12\.tcl\)

  - *Piecharts* can show an "exploded" segment that you can select with mouse
    button 1\.

If you require different forms of interaction, not covered by *Plotchart*
itself, you can use the tags on the various canvas elements to define other
bindings\.

The *bindplot* and *bindlast* are defined as follows:

  - <a name='169'></a>__$anyplot__ bindplot *event* *command* *args*

    Register a command that will be run whenever the given event occurs in the
    plot\.

      * string *event*

        The event that you want to bind the command to

      * string *command*

        Name of the command/procedure that you want to run\. The following
        arguments are prefixed: the x\- and y\-coordinates of the point in the
        plot \(the world coordinates\!\), so that the procedure has the signature:

    cmd $xworld $yworld $string1 $string2 $string3

        assuming the argument "command" is: \{cmd A B C\}

  - <a name='170'></a>__$anyplot__ bindlast *series* *event* *command*

    Register a command that will be run when the event occurs within the
    neighbourhood of the last point added to the given series\. \(You can use
    directly after inserting a data point\. All such commands will remain
    active\)\.

      * string *event*

        The event that you want to bind the command to

      * list *command*

        Name of the command/procedure that you want to run\. The following
        arguments are prefixed: the x\- and y\-coordinates of the point in the
        plot \(the world coordinates\!\), so that the procedure has the signature:

    cmd $xworld $yworld $string1 $string2 $string3

        assuming the argument "command" is: \{cmd A B C\}

Here is an example \- show the values of the data points in an annotation \(from
the sample code in plotdemos12\.tcl\):

    #
    # Procedure for showing an annotation
    #
    proc showAnnotation {xcoord ycoord plot w} {

        $plot balloon $xcoord $ycoord "Data point: [format "%.3f, %.3f" $xcoord $ycoord]" north

        after 2000 [list removeAnnotation $w]
    }

    #
    # Procedure for erase an annotation
    #
    proc removeAnnotation {w} {

        # Use the tags to remove all annotations
        $w delete BalloonText
        $w delete BalloonFrame
    }

    #
    # Create a simple plot and a label
    #
    pack [canvas .c -bg white] [label .l -textvariable coords]

    set p [::Plotchart::createXYPlot .c {0 1000 200} {0 10 1}]

    $p dataconfig series1 -type both -symbol cross

    foreach x {1 2 5 10 20 50 100 200 500 1000} {
        $p plot series1 $x [expr {log($x)}]

        #
        # Show the annotation for each data point
        #
        $p bindlast series1 <Enter> [list showAnnotation $p %W]
    }

# <a name='section20'></a>NOTES ON TAGS

The implementation of *Plotchart* relies heavily on the canvas's ability to
identify graphical objects by tags and to change the drawing order of the
objects\. This section documents the tags that are used\.

\(*Note:* the tags are not always used consistently \- see the notes appearing
with the various tags\. This section describes the current state\.\)

*General graphical objects:*

  - *mask* \- Used to manipulate the opaque rectangles that ensure data outside
    the viewport are not shown\.

  - *topmask, horizmask, vertmask* \- specialised tags, used for scrollable
    plots\.

  - *title* \- Used for title strings\.

  - *BalloonText, BalloonFrame* \- Used to manipulate balloon text\.

  - *PlainText* \- Used to manipulate ordinary text without any decoration\.

  - *background* \- Tag used for gradient and image backgrounds \(and for
    gradient\-filled bars\)\.

  - *xaxis, yaxis* \- Tags used for all objects related to horizontal or
    vertical axes\. \(also: both for numerical axes and axes with labels as in
    barcharts\)\. Note, however, that the *text* along the axes has no
    particular tag\.

  - *raxis* \- Tag used for all objects related to a *right* axis\.

  - *taxis* \- Tag used for all objects related to a *time* axis\.

  - *axis3d* \- Tag used for 3D axes

  - *xtickline, ytickline* \- Tags used for ticklines\.

  - *legend, legengb, legendobj* \- Tags used for the legend\. The latter is
    used to manipulate the legend as a whole\.

  - *legend\_series* \- Tag used to control the appearance of the legend entry
    \("series" should be replaced by the series name\)\.

  - *object* \- used as standard tag for all objects drawn with the
    __::Plotchart::drawobject__ procedure\. Tags given at object creation
    time are added to this tag\.

*XY\-plots \(all types of axes\):*

  - *data* \- The general tag to identify graphical objects associated with
    data\. *data\_seriesname* \- The tag specific to a data series \("seriesname"
    should be replaced\)\. *band* \- The horizontal or vertical band drawn with
    the xband otr yband subcommands have this tag by the actual name\)\. *xtext*
    \- The text labelling the xaxis\. *ytext* \- The text labelling hte yaxis
    horizontically\. *vtext* \- The text labelling the yaxis vertically\.

Items such as labelled dots only have the "data" tag\.

*Piecharts and spiral pies:*

  - *segment\_segmentnumber* \- The tag identifying the segment, the string
    "segmentnumber" should be replaced by the actual number\. This tag is used to
    explode the segments\.

*Barcharts:*

Barcharts use the same tags as xy\-plots \(but for gradient\-filled bars the
data\_seriesname is not used\)\.

*Histograms and isometric plots:*

Currently the only tag used is "data"\.

*Time\-charts:*

As these plots are scrollable, several tags are used specific to the scrolling:
vertscroll, horizscroll, below, lowest, above, timeline, tline\. Each item also
has a tag of the form "item\_number", where "number" is to be replaced by the
actual sequence number of the item\.

*Gantt charts:*

In addition to the tags described for the time\-charts, the following tags are
used: description, completed, summary and summarybar\.

*Radial charts and polar plots:*

Currently the radial lines indicating the grid have no tags\. The graphical
objects associated with data only have the "data" tag\.

*Windroses:*

Only the tag *data\_number* is currently used \("number" should be replaced by
the sequence number of the data, starting at 0\.

*Contour and isoline plots:*

No tags are used\.

*3D plots and 3D ribbon plots:*

Tags are used for the axes and for the data objects:

  - *data* \- The general tag to identify graphical objects associated with
    data\. *line* \- The tag used for lines created with the plotline
    subcommand\.

*Charts decorated with 3D effects:*

The following tags are used to identify various types of graphical objects:
platform, background, d, u, ticklines\.

The text associated with the bars has no tags\. The ribbon lines and areas have
no tags either\.

*Tables:*

Tags used are: frame, cellbg and celltext

*Special plot types \(target diagrams, Taylor diagrams:*

Tags used are: limits, limit\_labels, reference *In addition:* To implement
multiple plots and charts in a single canvas, all items also get as a tag the
plot/chart they belong to\. This enables Plotchart to manipulate only those
items\.

# <a name='section21'></a>TODO \- SOME PRIVATE NOTES

I have the following wishlist:

  - Isometric plots \- allow new items to be implemented easily\.

  - A general 3D viewer \- emphasis on geometry, not a ray\-tracer\.

  - Several improvements for boxplots:

      * Height of the box scales with the logarithm of the number of points

      * Marker line to indicate a "current" value

      * Box drawn from quantiles

<

# <a name='section22'></a>Bugs, Ideas, Feedback

This document, and the package it describes, will undoubtedly contain bugs and
other problems\. Please report such in the category *plotchart* of the [Tklib
Trackers](http://core\.tcl\.tk/tklib/reportlist)\. Please also report any ideas
for enhancements you may have for either package and/or documentation\. <

# <a name='copyright'></a>COPYRIGHT

Copyright &copy; 2022 Arjen Markus <arjenmarkus@users\.sourceforge\.net>
