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

# dgw::txmixins 0.2.0
    
### Detlef Groth, Schwielowsee, Germany
    
### 2021-10-24


## NAME

**dgw::txmixins** - implementations of extensions for the *text* 
        widget which can be added dynamically using chaining of commands 
        at widget creation or using the *dgw::txmixin* command after widget 
        creation.

## <a name='toc'></a>TABLE OF CONTENTS

 - [SYNOPSIS](#synopsis)
 - [DESCRIPTION](#description)
 - [WIDGET COMMANDS](#commands)
    - [dgw::txmixin](#txmixin) - method to add one mixin widgetadaptor to text widget after widget creation
    - [dgw::txlipsum](#txlipsum) - method to generate simple lipsum text
 - [WIDGET ADAPTORS](#adapters)
    - [dgw::txautorep](#txautorep) - adapter to generate short abbreviations snippets invoked after closing parenthesis
    - [dgw::txblocksel](#txblocksel) - adaptor rectangular text selection in the text widget
    - [dgw::txfileproc](#txfileproc) - adaptor which implements the typical file commands for the text widget, fileOpen, fileSave etc.
    - [dgw::txfold](#txfold) - adaptor for a folding text editor
    - [dgw::txhighlight](#txhighlight) - adaptor for text widget supporting syntax highlighting
    - [dgw::txindent](#txindent) - adaptor to keep indentation of previous line
    - [dgw::txpopup](#txpopup) - adaptor for typical right click popup implementation
    - [dgw::txrotext](#txrotext) - adaptor for a read only text widget
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
    package require dgw::txmixins
    ::dgw::txmixin pathName widgetAdaptor ?options?
    ::dgw::txfold [tk::text pathName ?options?] ?options?
    set txt [tk::text pathName ?options?]
    dgw::txmixin $txt dgw::txfold ?options?


## <a name='description'>DESCRIPTION</a>

The package **dgw::txmixins** implements several *snit::widgetadaptor*s which 
extend the standard *tk::text* widget with different functionalities.
Different adaptors can be chained together to add the required functionalities. 
Furthermore at any later time point using the *dgw::txmixin* command other adaptors can be installed on the widget.

## <a name='commands'>WIDGET COMMANDS</a>


<a name="txmixin">**dgw::txmixin**</a> *pathName mixinWidget ?-option value ...?*

Adds the properties and methods of a snit::widgetadaptor specified with *mixinWidget* 
to the exising widget created before with the given *pathName* and configures the widget 
using the given *options*. 

Example:

> ```
# demo: mixin
# standard text widget
set text [tk::text .txt]
pack $text -side top -fill both -expand true
dgw::txmixin $text dgw::txfold
# fill the widget
$text insert end "\n## Hint\n\nPress F2 or F3 and see what happend!"
for {set i 1} {$i < 4} {incr i} { 
    $text insert end "## Header $i\n\n"
    $text insert end [dgw::lispum 3]
}
> ```


<a name="txlipsum">**dgw::txlipsum**</a> *dgw::txlipsum n*

Returns *n* paragraphs of simple lipsum text.

Example:

> ```
# demo: txlipsum
tk::text .txt
.txt insert end "[dgw::txlipsum 5]"
.txt configure -borderwidth 10 -relief flat 
pack .txt -side top -fill both -expand yes -padx 5 -pady 5
> ```

## <a name='adapters'>WIDGET ADAPTERS</a>


<a name="txautorep">**dgw::txautorep**</a> *[tk::text pathName] ?-option value ...?*

Creates and configures the *dgw::txautorep*  widget using the Tk window id _pathName_ and 
the given *options*. All options are delegated to the standard text widget. 
Based on code in the Wiki page https://wiki.tcl-lang.org/page/autoreplace started by Richard Suchenwirth in 2008.

The following option is available:

> - *-automap* *list*  - list of abbreviations and their replacement, the abbreviations must end with a closing 
    parenthesis such as [list DG) {Detlef Groth}].

Example:

> ```
# demo: txautorep
dgw::txautorep [tk::text .txt] -automap [list (TM) \u2122 (C) \
     \u00A9 (R) \u00AE (K) \u2654 D) {D Groth} \
     (DG) {Detlef Groth, University of Potsdam}]
.txt insert end "type a few abbreviations like (TM), (C), (R) or (K) ..."
pack .txt -side top -fill both -expand yes
> ```

TODO: Take abbreviations from file



<a name="txblocksel">**dgw::txblocksel**</a> *[tk::text pathName] ?-option value ...?*

Creates and configures the *dgw::txblocksel*  widget using the Tk window id _pathName_ and 
  the given *options*. The text widget supports the block selection of text using 
  The Control-key together with left mouse down and movement for selecting the text.

So the steps are:

 * Control-ButtonPress-1 to activate block selection
 * Control-Button1-Motion to modify (increase/decrease) the selection
 * Control-x to cut selection, Control-c to copy selection to clipboard

The widget adaptor code is just an adaption from the Wiki code written by Martin Eder here:
[Simple Block Selection for Text Widget](https://wiki.tcl-lang.org/page/Simple+Block+Selection+for+Text+Widget).

The widget adaptor currently has no options and public methods which should be used. 
The code is however a good example on how to port namespace based widget code into
a snit widgetadaptor using snit procedures only.

Example:

> ```
# demo: txblocksel
dgw::txblocksel [tk::text .txt -undo true]
.txt insert end "\nHint:\n\n* Press Ctrl-Button-1 and then, by holding move the mouse\n"
.txt insert end "to the bottom right.\n* For copy and paste use Control-c and Control-v."
.txt tag configure hint -foreground #1166ff
.txt tag add hint 1.0 6.end
.txt insert end "\n\nBlock selection!\n\n"
foreach col [list A B C] { 
   .txt insert end "# Header $col\n\nSome text\n\n"
   .txt insert end [dgw::txlipsum 2]
   .txt insert end "\n\n"
}
.txt configure -borderwidth 10 -relief flat 
pack .txt -side top -fill both -expand yes -padx 5 -pady 5
> ```

<a name="txfileproc">**dgw::txfileproc**</a> *[tk::text pathName] ?-option value ...?*

Creates and configures the *dgw::txfileproc*  widget using the Tk window id _pathName_ and 
  the given *options*. The text widget supports the typical file actions, so fileNew, fileOpen, fileSave, fileSaveAs and fileExit with checks 
  for file modifications. It comes with a set of default bindings which can be disabled quite easily, see below for an example.

The following options are available:

> - *-openkey* *sequence* - the key sequence to open the file open dialog, can be inactivated by supplying an empty string, default: *Control-o*
  - *-savekey* *sequence* - the key sequence to save the current file or the file save as dialog if there is currently no file opened, can be inactivated by supplying an empty string, default: *Control-s*
  - *-newkey*  *sequence* - the key sequence to create an empty new file with checking for modified text, can be inactivated by supplying an empty string, default: *Control-n*
  - *-quitkey* *sequence* - the key sequence to close the application with checking for modified text, can be inactivated by supplying an empty string, default: "Control-q"
  - *-filecallback* *proc* - a callback to be executed if a file action like fileSave etc is performed, the Tcl procedure must take two arguments, first the action, second the filename, see below for an example, default: empty string, so no callback.
  - *-filetypes* *list* - the filetypes to be used for the file dialogs, defaults to Text (\*.txt), Tcl  (\*.tcl, \*.tm), Markdown (\*.md, \*.rmd) and any (\*.\*) files.
  - *-initdir* *directory* - the initial starting dir for the first file dialog, subsequent file dialogs will use the directory for the last opened files.

The following public methods are available:

> - *getFile* - get the currently loaded file, if no file is loaded yet returns \*new\*
  - *fileNew* - creates a new empty file named \*new\*
  - *fileSave* - saves the currently opened file, if it is a new file, fileSaveAs will be called
  - *fileSaveAs* - calls the file save dialog to save the current text in a new file
  - *fileOpen ?filename?* - will open the given filename or if no filename is given opens the file dialog to select a file.
  - *fileExit* - checks for text modifications and will then quit the application
  - *fileRecent* - returns the last recent opened files with the last file as first element

The following events are implemented by this widget adaptor:

> - <<FileChanged\>\> if a new file is opened or the save-as option is called.
  - <<FileSaved\>\> if the current file is saved

Example:

> ```
# demo: txfileproc
dgw::txfileproc [tk::text .txt -undo true] -openkey "" ;# disable Control-o rebind it below
.txt insert end "\nHint\n\nPress ctrl-o, control-n, control-s\n and see the"
.txt insert end "standard file dialogs!\n\n"
foreach col [list A B C] { 
   .txt insert  end "# Header $col\n\nSome text\n\n"
   .txt insert end [dgw::txlipsum 2]
   .txt insert end "\n\n"
}
.txt configure -borderwidth 10 -relief flat 
.txt configure -filecallback callback
pack .txt -side top -fill both -expand yes -padx 5 -pady 5
pack [label .label -text ""] -side top -fill x -expand false -padx 5 -pady 5
bind .txt <Enter> { focus -force .txt }
bind .txt <Control-k><Control-x> [list .txt fileExit]
bind .txt <Control-k><Control-o> [list .txt fileOpen]
dgw::txmixin .txt dgw::txpopup ;# right click popup
proc callback {type filename} {
   .label configure -text "Done: $type with [file tail $filename]"
   puts [.txt fileRecent]
}
proc eventMessage {w} {
   puts "currentFile [$w getFile]"
}
bind .txt <<FileChanged>> [list eventMessage %W]

> ```


<a name="txfold">**dgw::txfold**</a> *[tk::text pathName] ?-option value ...?*

Creates and configures the *dgw::txfold*  widget using the Tk window id _pathName_ and 
  the given *options*. The widgets supports text folding based on linestart regular expressions usually which allows fast navigation of larger
  documents by hiding and showing larger chunks of text within the folding marks.

The following options are available:

> - *-foldkey* *sequence*  - the key sequence fold or unfold regions where the insert cursor is within, default: F2
  - *-foldallkey* *sequence* - the key sequence to fold/unfold the complete text, default: F3
  - *-foldstart* *regex* - the start folding marker, default is Markdown header folding using the '#' at the beginning, default: "^#"
  - *-foldend* *regex* - the end fold marker, where the folding ends, if the end marker is the same as the start marker folding is ended in the line before the end line, otherwise on the end line, default: "^#"

The following widget tags are created and can be modified at runtime:

> - *fold* - the folding line which remains visible, usually the background should be configured only, default is `#ffbbaa` a light salmon like color
  - *folded* - the hidden (-elide true) part which is invisible, usually not required to change it, as it is hidden

Example:

> ```
# demo: txfold
dgw::txfold [tk::text .txt]
foreach col [list A B C] { 
   .txt insert  end "# Header $col\n\nSome text\n\n"
}
.txt insert end "Place the cursor on the header lines and press F2\n"
.txt insert end "or press F3 to fold or unfold the complete text.\n"
.txt tag configure fold -background #cceeff
.txt configure -borderwidth 10 -relief flat
pack .txt -side top -fill both -expand yes
# next line would fold by double click (although I like F2 more ...)
# .txt configure -foldkey Double-1 
bind .txt <Enter> { focus -force .txt }
> ```

TODO: add Tcl fold example

<a name="txhighlight">**dgw::txhighlight**</a> *[tk::text pathName] ?-option value ...?*

Creates and configures the *dgw::txhighlight*  widget using the Tk window id _pathName_ and 
  the given *options*. The widgets supports text highlighting for different file
  types by providing tag names and regular expressions.

The following options are available:

> - *-highlightcommand*  *proc* - a possible command to be used for hilighting, default: empty string, i.e. none
  - *-highlights* *list* - a nested list with highlights first element file type, second tag, third regular expression

The following widget tags are created and can be used for highlighting and can be as well
as well configured by the user to change the appearance

> - *header, comment, highlight, keyword, operator, string, package, class, method, proc*

Example:


    # demo: txhighlight
    package require dgw::txmixins
    text .top -borderwidth 5 -relief flat -font "Helvetica 14"
    dgw::txmixin .top dgw::txhighlight
    .top configure   -highlights {{md header ^#.+}    
                     {md comment ^>.+} 
                     {md keyword _{1,2}[^_]+_{1,2}}  
                     {md string {"[^"]+"}}}
    pack .top -side top -fill both -expand true ;#"  
    # TODO: txfileproc .top configure -filetypes {{Markdown Files}  {.md}}
    
    # configure for Markdown highlight
    .top configure   -highlights {{md header ^#.+}    
                     {md comment ^>.+} 
                     {md keyword _{1,2}[^_]+_{1,2}}  
                     {md string {"[^"]+"}}}
    .top configure -mode md
    # create sample Markdown text and insert it
    .top insert end "# Header example\n"
    .top insert end "_keyword_ example\n"
    .top insert end "Some not highlighted text\n"
    .top insert end "> some markdown quote text\n"
    .top insert end "## Subheader\n"
    .top insert end "Some more standard text with two \"strings\" which are \"inside!\"" 
    .top insert end "\n\n## Tcl\n\nTcl be with you!\n\n## EOF\n\nThe End\n"
    .top insert 3.0 "\nSome text\nSome more text"
    update
    after 2000
    update
    after 2000
    # switch to SQL highlight which is embedded per default
    .top delete 1.0 end
    .top configure -mode sql
    .top insert end "select * from temp limit 10;\n -- a comment in SQL\n drop table temp;\n"


 
<a name="txindent">**dgw::txindent**</a> *[tk::text pathName] ?-option value ...?*

Creates and configures the *dgw::txindent*  widget using the Tk window id _pathName_ and 
the given *options*. All options are delegated to the standard text widget. 
The widget indents every new line based on the initial indention of the previous line.
Based on code in the Wiki page [https://wiki.tcl-lang.org/page/auto-indent](https://wiki.tcl-lang.org/page/auto-indent) started by Richard Suchenwirth.

Example:

> ```
# demo: txindent
dgw::txindent [tk::text .txt]
foreach col [list A B C] { 
   .txt insert  end "# Header $col\n\nSome text\n\n"
}
.txt insert end "  * item 1\n  * item 2 (press return here)"
pack .txt -side top -fill both -expand yes
> ```

<a name="txpopup">**dgw::txpopup**</a> *[tk::text pathName] ?-option value ...?*

Creates and configures the *dgw::txpopup*  widget using the Tk window id _pathName_ and 
  the given *options*. The text widget supports the typical right click popup operations
  for the text widget like undo/redo, copy, paste, delete etc.
  It comes with a set of default bindings which can be disabled quite easily, 
  see below for an example.

The following options are available:

> - *-redokey* *sequence* - the key sequence to redo an operation, default: *Control-y*
  - *-popupkey* *sequence* - the key sequence to open the popup, usually right mouse click, so default: *Button-3*
  - *-toolcommand*  *procname* - the name of a procedure which is called when the tool command is exectued, default emtpy string, none

The following public method is available:

> - *menu* - show the popup menu, usually the right mouse click, but the user can create additional popup keys.

Example:

> ```
# demo: txpopup
dgw::txpopup [tk::text .txt -undo true]
.txt insert end "\nHint\n\nPress right mouse click\n and see the"
.txt insert end "popup menu with context dependent active or inactive entries!\n\n"
foreach col [list A B C] { 
   .txt insert  end "# Header $col\n\nSome text\n\n"
   .txt insert end [dgw::txlipsum 2]
   .txt insert end "\n\n"
}
dgw::txmixin .txt dgw::txblocksel ;# just another mixin
.txt configure -borderwidth 10 -relief flat 
pack .txt -side top -fill both -expand yes -padx 5 -pady 5
bind .txt <Enter> { focus -force .txt }
> ```


<a name="txrotext">**dgw::txrotext**</a> *[tk::text pathName] ?-option value ...?*

Creates and configures the *dgw::txrotext*  widget using the Tk window id _pathName_ and 
the given *options*. All options are delegated to the standard text widget. 
This creates a readonly text widget.
Based on code from the snitfaq by  William H. Duquette.

Methods: instead of *insert* and *delete* you have to use the methods *ins* and *del*

Example:

> ```
# demo: txrotext
dgw::txrotext [tk::text .txt]
foreach col [list A B C] { 
   .txt ins  end "# Header $col\n\nSome text\n\n"
}
pack .txt -side top -fill both -expand yes
> ```
## <a name='example'>EXAMPLE</a>

In the examples below we create a foldable text widget which can fold Markdown headers.
Just press the button F2 and F3 to fold or unfold regions or the complete text.
Thereafter a demonstration on how to use the *dgw::txmixin* command which simplifies the addition of 
new behaviors to our *tk::text* in a stepwise manner. 
The latter approach is as well nice to extend existing widgets in a more controlled manner 
avoiding restarts of applications during developing the widget.


    package require dgw::txmixins
    # standard text widget
    set f [ttk::frame .f]
    set text [tk::text .f.txt -borderwidth 5 -relief flat]
    pack $text -side left -fill both -expand true 
    dgw::txmixin $text dgw::txfold
    # fill the widget
    for {set i 0} {$i < 5} {incr i} { 
        $text insert end "## Header $i\n\n"
        for {set j 0} {$j < 2} {incr j} {
          $text insert end "Lorem ipsum dolor sit amet, consetetur sadipscing elitr,\n"
          $text insert end "sed diam nonumy eirmod tempor invidunt ut labore et dolore magna aliquyam erat,\n" 
          $text insert end "sed diam voluptua. \nAt vero eos et accusam et justo duo dolores et ea rebum.\n"
          $text insert end "Stet clita kasd gubergren, no sea takimata sanctus est Lorem ipsum dolor sit amet.\n\n" 
        }
    }
    set tcltxt [tk::text .f.tcl -borderwidth 5 -relief flat]
    dgw::txmixin $tcltxt dgw::txfold -foldstart "^\[A-Za-z\].+\{" -foldend "^\}"
    $tcltxt tag configure fold -background #aaccff
    $tcltxt insert end "package require Tk\nproc test {} {\n    puts Hi\n}\n\nsnit::widget wid {\n\n}\n"
    pack $tcltxt -side left -fill both -expand true
    pack $f -side top -fill both -expand yes
    set f2 [ttk::frame .f2]
    dgw::txrotext [tk::text $f2.rotxt]
    foreach col [list A B C] { 
       $f2.rotxt ins  end "# Header $col\n\nSome text\n\n"
    }
    pack $f2.rotxt -side left -fill both -expand yes
    dgw::txindent [tk::text $f2.intxt]
    dgw::txmixin $f2.intxt dgw::txfold
    $f2.intxt insert end "# Header 1\n\n* item\n    * subitem 1\n    * subitem2"
    $f2.intxt insert end "# Header 2\n\n* item\n    * subitem 1\n    * subitem2"
    $f2.intxt insert 5.0 "\n" ;  $f2.intxt tag add line 5.0 6.0 ; 
    $f2.intxt tag configure line -background black -font "Arial 1" 
    pack $f2.intxt -side left -fill both -expand yes
    pack $f2 -side top -fill both -expand yes


## <a name='install'>INSTALLATION</a>

Installation is easy you can install and use the **dgw::txmixins** package if you have a working install of:

- the snit package  which can be found in [tcllib - https://core.tcl-lang.org/tcllib](https://core.tcl-lang.org/tcllib)

For installation you copy the complete *dgw* folder into a path 
of your *auto_path* list of Tcl or you append the *auto_path* list with the parent dir of the *dgw* directory.
Alternatively you can install the package as a Tcl module by creating a file dgw/txmixins-0.2.0.tm in your Tcl module path. 

Only if you you like to extract the HTML documentation and run the examples, 
you need the complete dgw package and for the HTML generation the tcllib Markdown package.

## <a name='demo'>DEMO</a>

Example code for this package in the *EXAMPLE* section can  be executed, 
if you have the complete dgw package installed, by running this file using 
the following command line:


    $ wish txmixins.tcl --demo


Specific code examples outside of the EXAMPLE section can be executed using 
the string after the *demo:* prefix string in the code block for the individual code adaptors such as:



    $ wish txmixins.tcl --demo txfold


The example code used for the demo in the EXAMPLE section can be seen in the terminal by using the following command line:


    $ tclsh txmixins.tcl --code

## <a name='docu'>DOCUMENTATION</a>

The script contains embedded the documentation in Markdown format. If you have
the complete dgw package installed you can extract the Markdown documentation.
For this you should use the following command line:


    $ tclsh txmixins.tcl --markdown


This will extract the embedded manual pages in standard Markdown format. You can as well use this markdown output directly to create html pages for the documentation by using the *--html* flag.


    $ tclsh txmixins.tcl --html


If the tcllib Markdown package is installed, this will directly create a HTML page `txmixins.html` 
which contains the formatted documentation. 

Github-Markdown can be extracted by using the *--man* switch:


    $ tclsh txmixins.tcl --man


The output of this command can be used to feed a Markdown processor for conversion into a 
html, docx or pdf document. If you have pandoc installed for instance, you could execute the following commands:


    tclsh ../txmixins.tcl --man > txmixins.md
    pandoc -i txmixins.md -s -o txmixins.html
    pandoc -i txmixins.md -s -o txmixins.tex
    pdflatex txmixins.tex


## <a name='see'>SEE ALSO</a>

- [dgw package homepage](https://chiselapp.com/user/dgroth/repository/tclcode/index) - various useful widgets
- [tk::text widget manual](https://www.tcl.tk/man/tcl8.6/TkCmd/ttk_treeview.htm) standard manual page for the ttk::treeview widget

 
## <a name='changes'>CHANGES</a>

* 2021-08-12 - version 0.1 initial starting the widget.
* 2021-08-19 
    * completing docu
    * finalize txfold
    * adding txrotext, txindent, txautorep
* 2021-09-29 - version 0.2.0
    * txfileproc - file procedures, fileOpen, fileNew, ... fileExit
    * txpopup - right click popup
    * txblocksel - block selection 
    * txlipsum - lispum code generator
    * txhighlight - syntax highlighter

## <a name='todo'>TODO</a>

* Syntax hilighter (done)
* switch folding by switching file
* File watch: https://wiki.tcl-lang.org/page/File+watch (done)
* Block selection: https://wiki.tcl-lang.org/page/Simple+Block+Selection+for+Text+Widget (done)
* Text sorting: https://wiki.tcl-lang.org/page/Simple+Text+Widget+Sort
* Logic notation https://wiki.tcl-lang.org/page/A+little+logic+notation+editor
* Drag and drop of text: https://wiki.tcl-lang.org/page/Text+Drag+%2DDrag+and+Drop+for+Text+Widget+Selections
* text line coloring https://wiki.tcl-lang.org/page/text+line+coloring
* table display https://wiki.tcl-lang.org/page/Displaying+tables
* time stamp https://wiki.tcl-lang.org/page/Time%2Dstamp
* balloon help https://wiki.tcl-lang.org/page/Balloon+Help%2C+Generalised
* sub and superscripts https://wiki.tcl-lang.org/page/Super+and+Subscripts+in+a+text+widget

## <a name='authors'>AUTHORS</a>

The **dgw::txmixins** widget adaptors were written by Detlef Groth, Schwielowsee, Germany based on code mentioned at the specific adaptor documentation.

## <a name='copyright'>Copyright</a>


Copyright (c) 2021  Dr. Detlef Groth, E-mail: detlef(at)dgroth(dot)de

## <a name='license'>LICENSE</a>

dgw::txmixins package, version 0.2.0.

Copyright (c) 2019-2021  Dr. Detlef Groth, E-mail: detlef(at)dgroth(dot)de

This library is free software; you can use, modify, and redistribute it
for any purpose, provided that existing copyright notices are retained
in all copies and that this notice is included verbatim in any
distributions.

This software is distributed WITHOUT ANY WARRANTY; without even the
implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.



