[dgw](dgw.html) - 
[basegui](basegui.html) - 
[combobox](combobox.html) - 
[drawcanvas](drawcanvas.html) - 
[hyperhelp](hyperhelp.html) - 
[sbuttonbar](sbuttonbar.html) - 
[seditor](seditor.html) - 
[sfilebrowser](sfilebrowser.html) - 
[sfinddialog](sfinddialog.html) - 
[sqlview](sqlview.html) - 
[statusbar](statusbar.html) - 
[tablelist](tablelist.html) - 
[tlistbox](tlistbox.html) - 
[tvmixins](tvmixins.html) - 
[txmixins](txmixins.html) 

# dgw::tvmixins 0.3
    
### Detlef Groth, Schwielowsee, Germany
    
### 2021-08-21


## NAME

**dgw::tvmixins** - implementations of extensions for the *ttk::treeview* 
        widget which can be added dynamically using chaining of commands 
        at widget creation or using the *dgw::mixin* command after widget 
        creation.

## <a name='toc'></a>TABLE OF CONTENTS

 - [SYNOPSIS](#synopsis)
 - [DESCRIPTION](#description)
 - [WIDGET COMMANDS](#commands)
    - [dgw::mixin](#mixin)
    - [dgw::tvband](#tvband)
    - [dgw::tvedit](#tvedit)
    - [dgw::tvfilebrowser](#tvfilebrowser)
    - [dgw::tvksearch](#tvksearch)
    - [dgw::tvsortable](#tvsortable)
    - [dgw::tvtooltip](#tvtooltip)
    - [dgw::tvtree](#tvtree)
 - [EXAMPLE](#example)
 - [INSTALLATION](#install)
 - [DEMO](#demo)
 - [DOCUMENTATION](#docu)
 - [SEE ALSO](#see)
 - [CHANGES](#changes)
 - [TODO](#todo)
 - [AUTHORS](#authors)
 - [COPYRIGHT](#copyright)
 - [LICENSE](#license)
 
## <a name='synopsis'>SYNOPSIS</a>


    package require Tk
    package require snit
    package require dgw::tvmixins
    ::dgw::mixin pathName widgetAdaptor ?options?
    ::dgw::tvband [ttk::treeview pathName ?options?] ?options?
    ::dgw::tvedit [ttk::treeview pathName ?options?] ?options?
    ::dgw::tvfilebrowser [ttk::treeview pathName ?options?] ?options?
    ::dgw::tvksearch [ttk::treeview pathName ?options?] ?options?
    ::dgw::tvsortable [ttk::treeview pathName ?options?] ?options?
    ::dgw::tvtooltip [ttk::treeview pathName ?options?] ?options?
    ::dgw::tvtree [ttk::treeview pathName ?options?] ?options?
    ::dgw::tvfilebrowser [dgw::tvband [dgw::tvsortable [dgw::tvsearch \
         [ttk::treeview pathName ?options?] ?options?] ?options?] ?options?]
    set tv [ttk::treeview pathName ?options?]
    dgw::mixin $tv dgw::tvband ?options?


## <a name='description'>DESCRIPTION</a>

The package **dgw::tvmixins** implements several *snit::widgetadaptor*s which 
extend the standard *ttk::treeview* widget with different functionalities.
Different adaptors can be chained together to add the required functionalities. 
Furthermore at any later time point using the *dgw::mixin* command other adaptors can be installed on the widget.

## <a name='commands'>WIDGET COMMANDS</a>


<a name="mixin">**dgw::mixin**</a> *pathName mixinWidget ?-option value ...?*

Adds the properties and methods of a snit::widgetadaptor specified with *mixinWidget* 
to the exising widget created before with the given *pathName* and configures the widget 
using the given *options*. 

Example:

> ```
# demo: mixin
# standard treeview widget
set tv [ttk::treeview .tv -columns "A B C" -show headings]
$tv heading A -text A
$tv heading B -text B
$tv heading C -text C
pack $tv -side top -fill both -expand true
# add  sorting after object creation using the mixin command
dgw::mixin $tv dgw::tvsortable
# fill the widget
for {set i 0} {$i < 20} {incr i} { 
    $tv insert {} end -values [list [expr {rand()*4}] \
        [expr {rand()*10}] [expr {rand()*20}]] 
}
# add another widget adaptor
dgw::mixin $tv dgw::tvband
# configure the new options of this adaptor at a later point
$tv configure  -bandcolors [list white ivory]
> ```

<a name="tvband">**dgw::tvband**</a> *[ttk::treeview pathName] ?-option value ...?*

Creates and configures the *dgw::tvband*  widget using the Tk window id _pathName_ and the given *options*. 
Please note that this adaptor might have performace issues and that the 
*ttk::treeview* widget of Tk 8.7 
probably will have a configure option *-striped* and *-stripedbackgroundcolor* which can replace this adaptor.

The following option is available:

> - *-bandcolors* *list*  - list of the two colors to be displayed alternatively.

Example:

> ```
# demo: tvband
dgw::tvband [ttk::treeview .fb -columns [list A B C] -show headings]
foreach col [list A B C] { .fb heading $col -text $col }
for {set i 0} {$i < 20} {incr i 1} {
   .fb insert {} end -values [list  [expr {int(rand()*100)}] \
                  [expr {int(rand()*1000)}] [expr {int(rand()*1000)}]]
}
pack .fb -side top -fill both -expand yes
> ```

<a name="tvedit">**dgw::tvedit**</a> *[ttk::treeview pathName] ?-option value ...?*

Creates and configures the *dgw::tvedit*  widget using the Tk window id _pathName_ and the given *options*. 
This widget adaptor allows to do in place edits of the text within the ttk::treeview widget. The code is largly based on the wiki code in [Inplace edit in ttk::treeview](https://wiki.tcl-lang.org/page/Inplace+edit+in+ttk%3A%3Atreeview). Note: Currently only tabular, non hierarchical *ttk::treeview* widget's can be edited.

The following options are available:

> - *-edittypes* *list*  - list of key values pairs where the key is the colummn name and 
      the values are pssible data types or lists of available values. The following data types are available
  1. *bool* provides a boolean value selection of true and false using a check box
  1. *int* a integer range of values must be given as: *int [list start end]*
  1. *list* list of possible values must be given with the values such as: *list [list A B C D E]*
  1. the default if no type is provided for a column name is a text entry with free text edition available

> - *-editdefault* *type* the default edit is a entry text field, if you set this to an empty string only columns listed in the *-edittypes* options can be edited.

> - *-editendcmd* *commandName* the command to be executed after the value was changed. 
    The widget path, the data type, the row id, the old and the new value are added as command arguments. This method can be used to validate the input as well and to perform some actions after the entry was edited.

The widget provides the follwing events:

>  - <<*TreeviewEditEnd*\>> which is fired if a entry in the *ttk::treeview* widget
    is changed.  The following event symbols are available: *%d* a list of the row index and the column name which was changed, *%W* (widget).

Bindings:

> - *<KeyPress-F2>* - edit current row entries
- *<KeyPress-Escape>* - cancel edits
- *<KeyPress-Return>* - save edit and end current edits
- *<KeyPress-Tab>* - switch to the next edit field
- *<KeyPress-Shift-Tab>* - switch to the previous edit field

Example:

> ```
# demo: tvedit
proc editDone {args} {
      puts "done: $args"
}
pack [dgw::tvedit [ttk::treeview .tv -columns {bool int list} -show {headings} \
   -selectmode extended -yscrollcommand {.sb set}] \
   -edittypes [list bool bool int [list int 0 100]] \
   -editdefault "" -editendcmd editDone] -fill both -expand true -side left
pack [ttk::scrollbar .sb -orient v -command ".tv yview"] -fill y -side left
.tv insert {} end -values {true 15 {Letter B}}
.tv insert {} end -values {true 35 {Letter D}}
for {set i 0} {$i<20} {incr i} {
     .tv insert {} end -values [list true $i {Letter B}]
}
dgw::mixin .tv dgw::tvband
> ```

<a name="tvfilebrowser">**dgw::tvfilebrowser**</a> *[ttk::treeview pathName] ?-option value ...?*

Creates and configures the *dgw::tvfilebrowser*  widget using the Tk window id _pathName_ and the given *options*. 

The following option is available:

> - *-directory dirName* - starting directory for the filebrowser, default current directory.
  - *-browsecmd cmdName* - command to be executed if the users double clicks on a row item or presses the Return key. The widgets *pathName* and the actual row index are appended to the *cmdName* as arguments, default to empty string.
  - *-fileimage imgName* - image to be displayed as filename image left of the filename, default is standard file icon.
  - *-filepattern pattern* - the filter for the files to be displayed in the widget, default to ".+" i.e. all files

The following method(s) is(are) available:

> - *browseDir dirName* - the directory to be loaded into the *dgw::tvfilebrowser* widget.

Example:

> ``` 
# demo: tvfilebrowser
dgw::tvfilebrowser [dgw::tvsortable [dgw::tvksearch [dgw::tvband \
         [ttk::treeview .fb]]] \
        -sorttypes [list Name directory Size real Modified dictionary]]
pack .fb -side top -fill both -expand yes
> ```

<a name="tvksearch">**dgw::tvksearch**</a> *[ttk::treeview pathName] ?-option value ...?*

Creates and configures the *dgw::tvksearch*  widget using the Tk window id _pathName_ and the given *options*. 
With this widget you can use the Home and End keys for navigation and further letter
typing starts searching in the first column shifting focus and display to the current matching entry.

There are currently no options or methods available for this widget.

Example:

> ```
# demo: tvksearch
dgw::tvfilebrowser [dgw::tvksearch [ttk::treeview .fb]]
pack .fb -side top -fill both -expand yes
> ```

<a name="tvsortable">**dgw::tvsortable**</a> *[ttk::treeview pathName] ?-option value ...?*

Creates and configures the *dgw::tvsortable*  widget using the Tk window id _pathName_ and the given *options*. 

The following option is available:

> - *-sorttypes* the options for the *lsort* command for each of the columns, 
    such as dictionary, ascii, real etc. Default: autocheck for dictionary or real. 
    The values are given as a list of key-value pairs where the key is 
    the column name. In addition to the standard *lsort* options as well 
    the option *directory* can be given if the widget contains results of a 
    directory listening with filenames and directory names. 
    In this case the directories are always sorted above the filenames.

The following methods are available:

> - *sortBy* *colId decreasing* - sort widget by column with the given *colId* and in decreasing order if true or *increasing* if false.
  - *reSort* redo the last sorting again, useful if the data in the widget where changed either interactively for instance using the *tvedit* adaptor or programmatically.

The widget further provides the following event:

- <<*SortEnd*\>> - with the following symbols *%W* (widget path) and *%d* (column id)

Example:

> ```
# demo: tvsortable
dgw::tvsortable [dgw::tvband [ttk::treeview .fb -columns [list A B C] \
       -show headings]] -sorttypes [list A real B real C integer]
foreach col [list A B C] { .fb heading $col -text $col }
for {set i 0} {$i < 20} {incr i 1} {
   .fb insert {} end -values [list  [expr {int(rand()*100)}] \
                  [expr {int(rand()*1000)}] [expr {int(rand()*1000)}]]
}
pack .fb -side top -fill both -expand yes
> ```

<a name="tvtooltip">**dgw::tvtooltip**</a> *[ttk::treeview pathName] ?-option value ...?*

Creates and configures the *dgw::tvtooltip*  widget using the Tk window id _pathName_ and the given *options*. 

There are currently no options available.

The widget provides the following events:

- <<RowEnter\>> with the following symbols: %d the row index, and the standards %W (widget), %x (widgetX), %y (widgetY), %X (rootx), %Y (rootY)
- <<RowLeave\>> with the following symbols: %d the row index, and the standards %W (widget), %x (widgetX), %y (widgetY), %X (rootx), %Y (rootY)

Example:

> ```
# demo: tvtooltip
set fb [dgw::tvtooltip [dgw::tvfilebrowser [ttk::treeview .fp2] \
         -directory . -fileimage movie \
         -filepattern {\.(3gp|mp4|avi|mkv|mp3|ogg)$}]]
pack $fb -side top -fill both -expand yes
pack [::ttk::label .msg -font "Times 12 bold" -textvariable ::msg -width 20 \
      -background salmon -borderwidth 2 -relief ridge] \
      -side top -fill x -expand false -ipadx 5 -ipady 4
bind $fb <<RowEnter>> { set ::msg "  Entering row %d"}
bind $fb <<RowLeave>> { set ::msg "  Leaving row %d"}
> ```


<a name="tvtree">**dgw::tvtree**</a> *[ttk::treeview pathName] ?-option value ...?*

Creates and configures the *dgw::tvtree*  widget using the Tk window id _pathName_ and the given *options*. 

There is(are) currently the following option(s) available:

- *-icon* - the icon type, which can be currently either book or folder. To provide your own icons you must create two image icons \<name\>open16 and \<name\>close16. Support for icons of size 22 will be added later.

The widget provides the following event:

- <<InsertItem\>> which is fired if a item is inserted into the *tvtree* widget, there are the following event symbols available: _%d_ the row index, and the standard _%W_ (widget pathname).

Example:

> ```
# demo: tvtree
set tree [dgw::tvtree [ttk::treeview .tree \
     -height 15 -show tree -selectmode browse] \
     -icon folder]
foreach txt {first second third} {
   set id [$tree insert {} end -text " $txt item" -open 1]
   for {set i [expr {1+int(rand()*5)}]} {$i > 0} {incr i -1} {
       set child [$tree insert $id 0 -text " child $i"]
       for {set j [expr {int(rand()*3)}]} {$j > 0} {incr j -1} {
          $tree insert $child 0 -text " grandchild $i"
       }
   }
}
pack $tree -side top -fill both -expand true
> ```

## <a name='example'>EXAMPLE</a>

In the examples below we create first a filebrowser widget using all the widget 
adaptors for demonstration purposes. Therafter comes a tooltip demonstration, a tree demonstration and 
finally a demonstration on how to use the *dgw::mixin* command which simplifies the addition of 
new behaviors to our *ttk::treewidget* in a stepwise manner. The latter approach is as well nice to extend existing widgets in a more controlled manner avoiding restarts of applications during developing the widget.


    # wrapper function 
    proc fbrowse {path args} {
         set fb [dgw::tvtooltip [dgw::tvsortable [dgw::tvksearch \
            [dgw::tvfilebrowser [dgw::tvband \
            [ttk::treeview $path]] {*}$args]] \
             -sorttypes [list Name directory Size real Modified dictionary]]]
         return $fb
    }
    set pw [ttk::panedwindow .pw -orient horizontal]
    set f0 [ttk::frame $pw.f]
    set f1 [ttk::frame $f0.f]
    set fb [fbrowse $f1.fb]
    pack $fb -side left -fill both -expand yes
    pack [ttk::scrollbar $f1.yscroll -command [list $fb yview]] \
          -side left -fill y -expand false
    $fb configure -yscrollcommand [list $f1.yscroll set]
    pack $f1 -side top -fill both -expand true
    # demo tvtooltip
    pack [::ttk::label $f0.msg -font "Times 12 bold" -textvariable ::msg -width 20 \
         -background salmon -borderwidth 2 -relief ridge] \
         -side top -fill x -expand false -ipadx 5 -ipady 4
    bind $fb <<RowEnter>> { set ::msg "  Entering row %d"}
    bind $fb <<RowLeave>> { set ::msg "  Leaving row %d"}
    
    $pw add $f0
    set tree [dgw::tvtree [ttk::treeview $pw.tree -height 15 -show tree -selectmode browse] -icon folder]
    foreach txt {first second third} {
       set id [$tree insert {} end -text " $txt item" -open 1]
       for {set i [expr {1+int(rand()*5)}]} {$i > 0} {incr i -1} {
           set child [$tree insert $id 0 -text " child $i"]
           for {set j [expr {int(rand()*3)}]} {$j > 0} {incr j -1} {
              $tree insert $child 0 -text " grandchild $i"
           }
       }
    }
    $pw add $tree
    # another example using mixin syntax
    set tv [ttk::treeview $pw.tv -columns "A B C" -show headings]
    dgw::mixin $tv dgw::tvsortable
    
    $tv heading A -text A
    $tv heading B -text B
    $tv heading C -text C
    $pw add $tv
    for {set i 0} {$i < 20} {incr i} { 
        $tv insert {} end -values [list [expr {rand()*4}] \
            [expr {rand()*10}] [expr {rand()*20}]] 
    }
    dgw::mixin $tv dgw::tvband
    $tv configure  -bandcolors [list white ivory]
    pack $pw -side top -fill both -expand true


## <a name='install'>INSTALLATION</a>

Installation is easy you can install and use the **dgw::tvmixins** package if you have a working install of:

- the snit package  which can be found in [tcllib - https://core.tcl-lang.org/tcllib](https://core.tcl-lang.org/tcllib)

For installation you copy the complete *dgw* folder into a path 
of your *auto_path* list of Tcl or you append the *auto_path* list with the parent dir of the *dgw* directory.
Alternatively you can install the package as a Tcl module by creating a file dgw/tvmixins-0.3.tm in your Tcl module path. 

Only if you you like to extract the HTML documentation and run the examples, 
you need the complete dgw package and for the HTML generation the tcllib Markdown package.

## <a name='demo'>DEMO</a>

Example code for this package in the *EXAMPLE* section can  be executed by running this file using the following command line:


    $ wish tvmixins.tcl --demo


Specific code examples outside of the EXAMPLE section can be executed using the string after the *demo:* prefix string in the code block for the individual code adaptors such as:



    $ wish tvmixins.tcl --demo tvband


The example code used for the demo in the EXAMPLE section can be seen in the terminal by using the following command line:


    $ tclsh tvmixins.tcl --code

## <a name='docu'>DOCUMENTATION</a>

The script contains embedded the documentation in Markdown format. To extract the documentation you should use the following command line:


    $ tclsh tvmixins.tcl --markdown


This will extract the embedded manual pages in standard Markdown format. You can as well use this markdown output directly to create html pages for the documentation by using the *--html* flag.


    $ tclsh tvmixins.tcl --html


If the tcllib Markdown package is installed, this will directly create a HTML page `tvmixins.html` 
which contains the formatted documentation. 

Github-Markdown can be extracted by using the *--man* switch:


    $ tclsh tvmixins.tcl --man


The output of this command can be used to feed a Markdown processor for conversion into a 
html, docx or pdf document. If you have pandoc installed for instance, you could execute the following commands:


    tclsh ../tvmixins.tcl --man > tvmixins.md
    pandoc -i tvmixins.md -s -o tvmixins.html
    pandoc -i tvmixins.md -s -o tvmixins.tex
    pdflatex tvmixins.tex


## <a name='see'>SEE ALSO</a>

- [dgw package homepage](https://chiselapp.com/user/dgroth/repository/tclcode/index) - various useful widgets
- [ttk::treeview widget manual](https://www.tcl.tk/man/tcl8.6/TkCmd/ttk_treeview.htm) standard manual page for the ttk::treeview widget

 
## <a name='changes'>CHANGES</a>

* 2020-04-10 - version 0.2 released with adaptors: *tvband*, *tvfilebrowser*, *tvksearch*, *tvsortable*, *tvtooltip*
* 2020-04-14 - version 0.3 released with adaptor *tvtree*, *tvedit' and command *dgw::mixin*

## <a name='todo'>TODO</a>

* tests
* github url

## <a name='authors'>AUTHORS</a>

The **dgw::tvmixins** widget was written by Detlef Groth, Schwielowsee, Germany.

## <a name='copyright'>Copyright</a>

Copyright (c) 2020  Dr. Detlef Groth, E-mail: detlef(at)dgroth(dot)de

## <a name='license'>LICENSE</a>

dgw::tvmixins package, version 0.3.

Copyright (c) 2019-2021  Dr. Detlef Groth, E-mail: detlef(at)dgroth(dot)de

This library is free software; you can use, modify, and redistribute it
for any purpose, provided that existing copyright notices are retained
in all copies and that this notice is included verbatim in any
distributions.

This software is distributed WITHOUT ANY WARRANTY; without even the
implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.



