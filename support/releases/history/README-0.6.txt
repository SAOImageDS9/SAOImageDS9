Overview
========

    38 new packages                in 9  modules
    9  changed packages            in 8  modules
    1  internally changed packages in 1  modules
    13 unchanged packages          in 11 modules
    75 packages, total             in 27 modules, total

New in tklib 0.6
================

    Module          Package                       New Version   Comments
    --------------- ----------------------------- ------------- ----------
    canvas          canvas::drag                  0.1
                    canvas::edit::points          0.1
                    canvas::edit::polyline        0.1
                    canvas::edit::quadrilateral   0.1
                    canvas::highlight             0.1
                    canvas::mvg                   1
                    canvas::snap                  1.0.1
                    canvas::tag                   0.1
                    canvas::track::lines          0.1
    --------------- ----------------------------- ------------- ----------
    controlwidget   bindDown                      1.0
                    controlwidget                 0.1
                    led                           1.0
                    meter                         1.0
                    radioMatrix                   1.0
                    rdial                         0.3
                    tachometer                    0.1
                    voltmeter                     0.1
    --------------- ----------------------------- ------------- ----------
    diagrams        diagram                       1
                    diagram::application          1.2
                    diagram::attribute            1
                    diagram::basic                1.0.1
                    diagram::core                 1
                    diagram::direction            1
                    diagram::element              1
                    diagram::navigation           1
                    diagram::point                1
    --------------- ----------------------------- ------------- ----------
    mentry          mentry::common                3.6
    --------------- ----------------------------- ------------- ----------
    menubar         menubar                       0.5
                    menubar::debug                0.5
                    menubar::node                 0.5
                    menubar::tree                 0.5
    --------------- ----------------------------- ------------- ----------
    plotchart       plotanim                      0.2
                    xyplot                        1.0.1
    --------------- ----------------------------- ------------- ----------
    wcb             Wcb                           3.4
                    wcb                           3.4
    --------------- ----------------------------- ------------- ----------
    widgetl         widget::listentry             0.1.1
                    widget::listsimple            0.1.1
    --------------- ----------------------------- ------------- ----------
    widgetv         widget::validator             0.1
    --------------- ----------------------------- ------------- ----------

Changes from tklib 0.5 to 0.6
=============================

                                    tklib 0.5     tklib 0.6
    Module      Package             Old Version   New Version   Comments
    ----------- ------------------- ------------- ------------- --------------
    canvas      canvas::sqmap       0.2           0.3.1         EF
                canvas::zoom        0.1           0.2.1         B D
    ----------- ------------------- ------------- ------------- --------------
    crosshair   crosshair           1.0.2         1.1           EF
    ctext       ctext               3.2           3.3           EF
    cursor      cursor              0.2           0.3.1         B EF
    ----------- ------------------- ------------- ------------- --------------
    ico         ico                               0.3.2         B EF
                ico                 1.0.3         1.1           B EF
    ----------- ------------------- ------------- ------------- --------------
    plotchart   Plotchart           1.6.1                       API B D EF T
                Plotchart                         2.1.0         API B D EF T
    ----------- ------------------- ------------- ------------- --------------
    style       style::as           1.4           1.4.1         B
    ----------- ------------------- ------------- ------------- --------------
    tablelist   tablelist::common   4.10.1                      B D EF
                tablelist::common                 5.7           B D EF
    ----------- ------------------- ------------- ------------- --------------

Invisible changes (documentation, testsuites)
=============================================

                              tklib 0.5     tklib 0.6
    Module       Package      Old Version   New Version   Comments
    ------------ ------------ ------------- ------------- ----------
    tkpiechart   tkpiechart   6.6           6.6           B
    ------------ ------------ ------------- ------------- ----------

Unchanged
=========

    autoscroll, chatwidget, datefield, getstring, history, ipentry,
    khim, ntext, style, style::lobster, swaplist, tipstack, tooltip

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
    
