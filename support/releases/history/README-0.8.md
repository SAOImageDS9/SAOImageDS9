Overview
========

||||||
|---:|:---|:---|---:|:---|
|50|new packages|in|6|modules|
|18|changed packages|in|15|modules|
|40|internally changed packages|in|17|modules|
|7|unchanged packages|in|2|modules|
|122|packages, total|in|35|modules, total|

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

New in Tklib 0.8
================

|Module|Package|New Version|Comments|
|:---|:---|:---|:---|
|canvas|canvas::edit::circle|0.1||
||canvas::edit::rectangle|0.1||
||canvas::pdf|1.0.1||
|||||
|map|map::area::display|0.1||
||map::area::file|0.1||
||map::area::map-display|0.1||
||map::area::store::fs|0.1||
||map::area::store::memory|0.1||
||map::area::table-display|0.1||
||map::box::display|0.1||
||map::box::entry|0.1||
||map::box::file|0.1||
||map::box::map-display|0.1||
||map::box::store::fs|0.1||
||map::box::store::memory|0.1||
||map::box::table-display|0.1||
||map::display|0.1||
||map::mark|0.1||
||map::point::file|0.1||
||map::point::map-display|0.1||
||map::point::store::fs|0.1||
||map::point::store::memory|0.1||
||map::point::table-display|0.1||
||map::provider::osm|0.1||
||map::track::display|0.1||
||map::track::entry|0.1||
||map::track::file|0.1||
||map::track::map-display|0.1||
||map::track::store::fs|0.1||
||map::track::store::memory|0.1||
||map::track::table-display|0.1||
|||||
|shtmlview|shtmlview::doctools|0.1||
||shtmlview::mkdoc|0.1||
||shtmlview::shtmlview|1.1.1||
|||||
|text|dgw::txmixins|0.2.0||
|treeview|dgw::tvmixins|0.3||
|widget|widget|3.1||
||widget::arrowbutton|1.0||
||widget::calendar|1.0.1||
||widget::dateentry|0.97||
||widget::dialog|1.3.1||
||widget::menuentry|1.0.1||
||widget::panelframe|1.1||
||widget::ruler|1.1||
||widget::screenruler|1.2||
||widget::scrolledtext|1.0||
||widget::scrolledwindow|1.2.1||
||widget::statusbar|1.2.1||
||widget::superframe|1.0.1||
||widget::toolbar|1.2.1||
|||||

Changes from Tklib 0.7 to 0.8
=============================

|Module|Package|From 0.7|To 0.8|Comments|
|:---|:---|:---|:---|:---|
|canvas|canvas::edit::points|0.1|0.3|B EF I|
||canvas::edit::polyline|0.1|0.2|B EF I|
||canvas::edit::quadrilateral|0.1|0.2|D EF I|
||||||
|chatwidget|chatwidget|1.1.0|1.1.4|B EF I|
|crosshair|crosshair|1.2|1.2.1|B D I|
|diagrams|diagram::application|1.2|1.3|EF I|
|history|history|0.1|0.2|D EF I|
||||||
|ico|ico|0.3.2|0.3.4|B D I|
||ico|1.1|1.1.2|B D I|
||||||
|ipentry|ipentry|0.3|0.3.1|D I|
|khim|khim|1.0.1|1.0.2|I|
||||||
|mentry|mentry::common|3.10||B D EF|
||mentry::common||4.2|B D EF|
||||||
|notifywindow|notifywindow|1.0|1.0.1|B D I|
|plotchart|Plotchart|2.4.1|2.6.2|B D EF I T|
||||||
|scrollutil|scrollutil::common|1.5||B D EF|
||scrollutil::common||2.2|B D EF|
||||||
|tablelist|tablelist::common|6.8||B D EF|
||tablelist::common||7.2|B D EF|
||||||
|tooltip|tooltip|1.4.6|1.8.2|B D EF I|
|wcb|Wcb|3.6||B D EF|
||Wcb||4.0|B D EF|
||wcb|3.6||B D EF|
||wcb||4.0|B D EF|
||||||

Invisible changes (documentation, testsuites)
=============================================

|Module|Package|From 0.7|To 0.8|Comments|
|:---|:---|:---|:---|:---|
|autoscroll|autoscroll|1.1|1.1|I|
||||||
|canvas|canvas::drag|0.1|0.1|I|
||canvas::gradient|0.2|0.2|D I|
||canvas::highlight|0.1|0.1|D I|
||canvas::mvg|1|1|D I|
||canvas::snap|1.0.1|1.0.1|D I|
||canvas::sqmap|0.3.1|0.3.1|D I|
||canvas::tag|0.1|0.1|D I|
||canvas::track::lines|0.1|0.1|D I|
||canvas::zoom|0.2.1|0.2.1|D I|
||||||
|controlwidget|controlwidget|0.1|0.1|D I|
||rdial|0.7|0.7|I|
||tachometer|0.1|0.1|I|
||voltmeter|0.1|0.1|I|
||||||
|ctext|ctext|3.3|3.3|I|
|cursor|cursor|0.3.1|0.3.1|I|
|datefield|datefield|0.3|0.3|I|
||||||
|diagrams|diagram|1|1|D I|
||diagram::attribute|1|1|I|
||diagram::basic|1.0.1|1.0.1|I|
||diagram::core|1|1|I|
||diagram::direction|1|1|I|
||diagram::element|1|1|I|
||diagram::navigation|1|1|I|
||diagram::point|1|1|I|
||||||
|getstring|getstring|0.1|0.1|D I|
||||||
|menubar|menubar|0.5|0.5|D I|
||menubar::debug|0.5|0.5|I|
||menubar::node|0.5|0.5|I|
||menubar::tree|0.5|0.5|I|
||||||
|persistentSelection|persistentSelection|1.0b1|1.0b1|D I|
||||||
|plotchart|plotanim|0.2|0.2|I|
||xyplot|1.0.1|1.0.1|I|
||||||
|swaplist|swaplist|0.2|0.2|D I|
|tkpiechart|tkpiechart|6.6|6.6|I|
|tooltip|tipstack|1.0.1|1.0.1|D|
||||||
|widgetl|widget::listentry|0.1.2|0.1.2|D I|
||widget::listsimple|0.1.2|0.1.2|D I|
|widgetPlus|widgetPlus|1.0b2|1.0b2|D I T|
|widgetv|widget::validator|0.1|0.1|D I|
||||||

Unchanged
=========

    bindDown, led, meter, radioMatrix, style, style::as,
    style::lobster
