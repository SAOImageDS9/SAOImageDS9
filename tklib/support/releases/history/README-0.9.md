Overview
========

||||||
|---:|:---|:---|---:|:---|
|22|changed packages|in|16|modules|
|29|internally changed packages|in|2|modules|
|65|unchanged packages|in|24|modules|
|123|packages, total|in|35|modules, total|

Legend
======

|Change|Details|Comments|
|:---|:---|:---|
|Major|API|__incompatible__ API changes|
|Minor|EF|Extended functionality, API|
||I|Major rewrite, but no API change|
|Patch|B|Bug fixes|
||EX|New examples|
||P|Performance enhancement|
|None|T|Testsuite changes|
||D|Documentation updates|

Changes from Tklib 0.8 to 0.9
=============================

|Module|Package|From 0.8|To 0.9|Comments|
|:---|:---|:---|:---|:---|
|controlwidget|tachometer|0.1|0.2|I|
||voltmeter|0.1|0.2|I|
||||||
|history|history|0.2|0.3|I|
||||||
|ico|ico|0.3.4|0.3.5|I|
||ico|1.1.2|1.1.3|I|
||||||
|ipentry|ipentry|0.3.1|0.3.2|I|
|khim|khim|1.0.2|1.0.3|I|
|mentry|mentry::common|4.2|4.3.1|B I|
|menubar|menubar|0.5|0.5.1|I|
|ntext|ntext|1.0b6|1.0|I|
|plotchart|Plotchart|2.6.2|2.7.0|I|
|scrollutil|scrollutil::common|2.2|2.4|B D I|
|shtmlview|shtmlview::shtmlview|1.1.1|1.1.2|B D I|
|tablelist|tablelist::common|7.2|7.4.1|B D I|
|tkpiechart|tkpiechart|6.6|6.6.1|I|
||||||
|tooltip|tooltip|1.8.2||B D I|
||tooltip||2.0.1|B D I|
||||||
|wcb|Wcb|4.0|4.1.1|B D I|
||wcb|4.0|4.1.1|B D I|
|widget|widget|3.1|3.2|I|
||widget::calendar|1.0.1|1.0.2|D I|
||widget::dateentry|0.97|0.98|B I|
||widget::ruler|1.1|1.2|I|
||widget::screenruler|1.2|1.3|I|
||||||

Invisible changes (documentation, testsuites)
=============================================

|Module|Package|From 0.8|To 0.9|Comments|
|:---|:---|:---|:---|:---|
|map|map::area::display|0.1|0.1|D|
||map::area::file|0.1|0.1|D|
||map::area::map-display|0.1|0.1|D|
||map::area::store::fs|0.1|0.1|D|
||map::area::store::memory|0.1|0.1|D|
||map::area::table-display|0.1|0.1|D|
||map::box::display|0.1|0.1|D|
||map::box::entry|0.1|0.1|D|
||map::box::file|0.1|0.1|D|
||map::box::map-display|0.1|0.1|D|
||map::box::store::fs|0.1|0.1|D|
||map::box::store::memory|0.1|0.1|D|
||map::box::table-display|0.1|0.1|D|
||map::display|0.1|0.1|D|
||map::mark|0.1|0.1|D|
||map::point::file|0.1|0.1|D|
||map::point::map-display|0.1|0.1|D|
||map::point::store::fs|0.1|0.1|D|
||map::point::store::memory|0.1|0.1|D|
||map::point::table-display|0.1|0.1|D|
||map::provider::osm|0.1|0.1|D|
||map::track::display|0.1|0.1|D|
||map::track::entry|0.1|0.1|D|
||map::track::file|0.1|0.1|D|
||map::track::map-display|0.1|0.1|D|
||map::track::store::fs|0.1|0.1|D|
||map::track::store::memory|0.1|0.1|D|
||map::track::table-display|0.1|0.1|D|
|menubar|menubar::debug|0.5|0.5|I|
||||||

Unchanged
=========

    autoscroll, bindDown, canvas::drag, canvas::edit::circle,
    canvas::edit::points, canvas::edit::polyline,
    canvas::edit::quadrilateral, canvas::edit::rectangle,
    canvas::gradient, canvas::highlight, canvas::mvg, canvas::pdf,
    canvas::snap, canvas::sqmap, canvas::tag, canvas::track::lines,
    canvas::zoom, chatwidget, controlwidget, crosshair, ctext,
    cursor, datefield, dgw::tvmixins, dgw::txmixins, diagram,
    diagram::application, diagram::attribute, diagram::basic,
    diagram::core, diagram::direction, diagram::element,
    diagram::navigation, diagram::point, getstring, led,
    menubar::node, menubar::tree, meter, notifywindow,
    persistentSelection, plotanim, radioMatrix, rdial,
    shtmlview::doctools, shtmlview::mkdoc, style, style::as,
    style::lobster, swaplist, tipstack, widget::arrowbutton,
    widget::dialog, widget::listentry, widget::listsimple,
    widget::menuentry, widget::panelframe, widget::scrolledtext,
    widget::scrolledwindow, widget::statusbar, widget::superframe,
    widget::toolbar, widget::validator, widgetPlus, xyplot
