Overview
========

    5  new packages                in 5  modules
    11 changed packages            in 9  modules
    2  internally changed packages in 1  modules
    47 unchanged packages          in 19 modules
    79 packages, total             in 31 modules, total

New in tklib 0.7
================

    Module                Package               New Version   Comments
    --------------------- --------------------- ------------- ----------
    canvas                canvas::gradient      0.2
    notifywindow          notifywindow          1.0
    persistentSelection   persistentSelection   1.0b1
    scrollutil            scrollutil::common    1.5
    widgetPlus            widgetPlus            1.0b2
    --------------------- --------------------- ------------- ----------

Changes from tklib 0.6 to 0.7
=============================

                                         tklib 0.6     tklib 0.7
    Module          Package              Old Version   New Version   Comments
    --------------- -------------------- ------------- ------------- ----------------
    controlwidget   rdial                0.3           0.7           D EF EX
    crosshair       crosshair            1.1           1.2           B EF EX
    datefield       datefield            0.2           0.3           D EF
    mentry          mentry::common       3.6           3.10          B D EF I
    plotchart       Plotchart            2.1.0         2.4.1         B D EF I
    --------------- -------------------- ------------- ------------- ----------------
    tablelist       tablelist::common    5.7                         API B D EF I P
                    tablelist::common                  6.8           API B D EF I P
    --------------- -------------------- ------------- ------------- ----------------
    tooltip         tooltip              1.4.4         1.4.6         B D EF
    --------------- -------------------- ------------- ------------- ----------------
    wcb             Wcb                  3.4           3.6           B D EF I P
                    wcb                  3.4           3.6           B D EF I P
    --------------- -------------------- ------------- ------------- ----------------
    widgetl         widget::listentry    0.1.1         0.1.2         D I
                    widget::listsimple   0.1.1         0.1.2         D I
    --------------- -------------------- ------------- ------------- ----------------

Invisible changes (documentation, testsuites)
=============================================

                                    tklib 0.6     tklib 0.7
    Module          Package         Old Version   New Version   Comments
    --------------- --------------- ------------- ------------- ----------
    controlwidget   controlwidget   0.1           0.1           D
                    meter           1.0           1.0           EX
    --------------- --------------- ------------- ------------- ----------

Unchanged
=========

    autoscroll, bindDown, canvas::drag, canvas::edit::points,
    canvas::edit::polyline, canvas::edit::quadrilateral,
    canvas::highlight, canvas::mvg, canvas::snap, canvas::sqmap,
    canvas::tag, canvas::track::lines, canvas::zoom, chatwidget,
    ctext, cursor, diagram, diagram::application,
    diagram::attribute, diagram::basic, diagram::core,
    diagram::direction, diagram::element, diagram::navigation,
    diagram::point, getstring, history, ico, ipentry, khim, led,
    menubar, menubar::debug, menubar::node, menubar::tree, plotanim,
    radioMatrix, style, style::as, style::lobster, swaplist,
    tachometer, tipstack, tkpiechart, voltmeter, widget::validator,
    xyplot

Legend  Change  Details Comments
        ------  ------- ---------
        Major   API:    ** incompatible ** API changes.

        Minor   EF :    Extended functionality, API.
                I  :    Major rewrite, but no API change

        Patch   B  :    Bug fixes.
                EX :    New examples.
                P  :    Performance enhancement.

        None    T  :    Testsuite changes.
                D  :    Documentation updates.
    
