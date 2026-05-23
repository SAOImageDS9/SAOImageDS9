#!/usr/bin/env tclsh
##############################################################################
#
#  Created By    : Dr. Detlef Groth
#  Created       : Sun Apr 5 17:37:39 2020
#  Last Modified : <201221.0758>
#
#  Description	
#
#  Notes
#
#  History
#	
##############################################################################
#
#  Copyright (c) 2020 Dr. Detlef Groth.
# 
##############################################################################
#' ---
#' documentclass: scrartcl
#' title: dgw::tvmixins __PKGVERSION__
#' author: Detlef Groth, Schwielowsee, Germany
#' ---
#' 
#' ## NAME
#'
#' **dgw::tvmixins** - implementations of extensions for the *ttk::treeview* 
#'         widget which can be added dynamically using chaining of commands 
#'         at widget creation or using the *dgw::mixin* command after widget 
#'         creation.
#'
#' ## <a name='toc'></a>TABLE OF CONTENTS
#' 
#'  - [SYNOPSIS](#synopsis)
#'  - [DESCRIPTION](#description)
#'  - [WIDGET COMMANDS](#commands)
#'     - [dgw::mixin](#mixin)
#'     - [dgw::tvband](#tvband)
#'     - [dgw::tvedit](#tvedit)
#'     - [dgw::tvfilebrowser](#tvfilebrowser)
#'     - [dgw::tvksearch](#tvksearch)
#'     - [dgw::tvsortable](#tvsortable)
#'     - [dgw::tvtooltip](#tvtooltip)
#'     - [dgw::tvtree](#tvtree)
#'  - [EXAMPLE](#example)
#'  - [INSTALLATION](#install)
#'  - [DEMO](#demo)
#'  - [DOCUMENTATION](#docu)
#'  - [SEE ALSO](#see)
#'  - [CHANGES](#changes)
#'  - [TODO](#todo)
#'  - [AUTHORS](#authors)
#'  - [COPYRIGHT](#copyright)
#'  - [LICENSE](#license)
#'  
#' ## <a name='synopsis'>SYNOPSIS</a>
#' 
#' ```
#' package require Tk
#' package require snit
#' package require dgw::tvmixins
#' ::dgw::mixin pathName widgetAdaptor ?options?
#' ::dgw::tvband [ttk::treeview pathName ?options?] ?options?
#' ::dgw::tvedit [ttk::treeview pathName ?options?] ?options?
#' ::dgw::tvfilebrowser [ttk::treeview pathName ?options?] ?options?
#' ::dgw::tvksearch [ttk::treeview pathName ?options?] ?options?
#' ::dgw::tvsortable [ttk::treeview pathName ?options?] ?options?
#' ::dgw::tvtooltip [ttk::treeview pathName ?options?] ?options?
#' ::dgw::tvtree [ttk::treeview pathName ?options?] ?options?
#' ::dgw::tvfilebrowser [dgw::tvband [dgw::tvsortable [dgw::tvsearch \
#'      [ttk::treeview pathName ?options?] ?options?] ?options?] ?options?]
#' set tv [ttk::treeview pathName ?options?]
#' dgw::mixin $tv dgw::tvband ?options?
#' ```
#'
#' ## <a name='description'>DESCRIPTION</a>
#' 
#' The package **dgw::tvmixins** implements several *snit::widgetadaptor*s which 
#' extend the standard *ttk::treeview* widget with different functionalities.
#' Different adaptors can be chained together to add the required functionalities. 
#' Furthermore at any later time point using the *dgw::mixin* command other adaptors can be installed on the widget.
#'
#' ## <a name='commands'>WIDGET COMMANDS</a>
#'
package require Tk
package require snit

namespace eval ::dgw {} 
package provide dgw::tvmixins 0.3

#'
#' <a name="mixin">**dgw::mixin**</a> *pathName mixinWidget ?-option value ...?*
#' 
#' Adds the properties and methods of a snit::widgetadaptor specified with *mixinWidget* 
#' to the exising widget created before with the given *pathName* and configures the widget 
#' using the given *options*. 
#' 
#' Example:
#'
#' > ```
#' # demo: mixin
#' # standard treeview widget
#' set tv [ttk::treeview .tv -columns "A B C" -show headings]
#' $tv heading A -text A
#' $tv heading B -text B
#' $tv heading C -text C
#' pack $tv -side top -fill both -expand true
#' # add  sorting after object creation using the mixin command
#' dgw::mixin $tv dgw::tvsortable
#' # fill the widget
#' for {set i 0} {$i < 20} {incr i} { 
#'     $tv insert {} end -values [list [expr {rand()*4}] \
#'         [expr {rand()*10}] [expr {rand()*20}]] 
#' }
#' # add another widget adaptor
#' dgw::mixin $tv dgw::tvband
#' # configure the new options of this adaptor at a later point
#' $tv configure  -bandcolors [list white ivory]
#' > ```

proc ::dgw::mixin {pathName mixinWidget args} {
    return [$mixinWidget $pathName {*}$args]
}

#' 
#' <a name="tvband">**dgw::tvband**</a> *[ttk::treeview pathName] ?-option value ...?*
#' 
#' Creates and configures the *dgw::tvband*  widget using the Tk window id _pathName_ and the given *options*. 
#' Please note that this adaptor might have performace issues and that the 
#' *ttk::treeview* widget of Tk 8.7 
#' probably will have a configure option *-striped* and *-stripedbackgroundcolor* which can replace this adaptor.
#'
#' The following option is available:
#'
#' > - *-bandcolors* *list*  - list of the two colors to be displayed alternatively.
#' 
#' Example:
#' 
#' > ```
#' # demo: tvband
#' dgw::tvband [ttk::treeview .fb -columns [list A B C] -show headings]
#' foreach col [list A B C] { .fb heading $col -text $col }
#' for {set i 0} {$i < 20} {incr i 1} {
#'    .fb insert {} end -values [list  [expr {int(rand()*100)}] \
#'                   [expr {int(rand()*1000)}] [expr {int(rand()*1000)}]]
#' }
#' pack .fb -side top -fill both -expand yes
#' > ```

# widget adaptor which does a banding of the ttk::treeview 
# widget automatically after each insert command
snit::widgetadaptor ::dgw::tvband {
    delegate option * to hull 
    delegate method * to hull
    option -bandcolors [list #FFFFFF #DDEEFF]
    # problem:
    # can't avoid delegating insert as if it is 
    # overwritten parent insert can't be called
    # solved by adding trace executation
    # might slow down the widget
    constructor {args} {
        installhull $win
        $self configurelist $args
        $win tag configure band0 -background [lindex $options(-bandcolors) 0]
        $win tag configure band1 -background [lindex $options(-bandcolors) 1]
        trace add execution $win leave [mymethod wintrace]
        # new line
        bind $win <<SortEnd>> [mymethod band]
        $self band
        #bind $win <<Dummy>> { puts Dummy }
    }
    # new method
    method band {} {
        set i 0
        foreach item [$win children {}] {
            set t [expr { [incr i] % 2 }]
            $win tag remove band0 $item 
            $win tag remove band1 $item
            $win tag add band$t $item
        }
    }
    onconfigure -bandcolors value {
        set options(-bandcolors) $value
        $win tag configure band0 -background [lindex $options(-bandcolors) 0]
        $win tag configure band1 -background [lindex $options(-bandcolors) 1]
        
    }
    method wintrace {args} {
        set path [lindex [lindex $args 0] 0]
        set meth [lindex [lindex $args 0] 1]
        if {$meth eq "insert"} {
            set parent [lindex [lindex $args 0] 2]
            set index [lindex [lindex $args 0] 3]
            set item [lindex [$path children $parent] $index]
            if {$index eq "end"} {
                set i [llength [$path children $parent]]
            } else {
                set i $index
            }
            set t [expr { $i % 2 }]
            $path tag remove band0 $item 
            $path tag remove band1 $item
            $path tag add band$t $item
        }
    }
}

#'
#' <a name="tvedit">**dgw::tvedit**</a> *[ttk::treeview pathName] ?-option value ...?*
#' 
#' Creates and configures the *dgw::tvedit*  widget using the Tk window id _pathName_ and the given *options*. 
#' This widget adaptor allows to do in place edits of the text within the ttk::treeview widget. The code is largly based on the wiki code in [Inplace edit in ttk::treeview](https://wiki.tcl-lang.org/page/Inplace+edit+in+ttk%3A%3Atreeview). Note: Currently only tabular, non hierarchical *ttk::treeview* widget's can be edited.
#'
#' The following options are available:
#'
#' > - *-edittypes* *list*  - list of key values pairs where the key is the colummn name and 
#'       the values are pssible data types or lists of available values. The following data types are available
#'   1. *bool* provides a boolean value selection of true and false using a check box
#'   1. *int* a integer range of values must be given as: *int [list start end]*
#'   1. *list* list of possible values must be given with the values such as: *list [list A B C D E]*
#'   1. the default if no type is provided for a column name is a text entry with free text edition available
#' 
#' > - *-editdefault* *type* the default edit is a entry text field, if you set this to an empty string only columns listed in the *-edittypes* options can be edited.
#' 
#' > - *-editendcmd* *commandName* the command to be executed after the value was changed. 
#'     The widget path, the data type, the row id, the old and the new value are added as command arguments. This method can be used to validate the input as well and to perform some actions after the entry was edited.
#' 
#' The widget provides the follwing events:
#' 
#' >  - <<*TreeviewEditEnd*\>> which is fired if a entry in the *ttk::treeview* widget
#'     is changed.  The following event symbols are available: *%d* a list of the row index and the column name which was changed, *%W* (widget).
#' 
#' Bindings:
#' 
#' > - *<KeyPress-F2>* - edit current row entries
#' - *<KeyPress-Escape>* - cancel edits
#' - *<KeyPress-Return>* - save edit and end current edits
#' - *<KeyPress-Tab>* - switch to the next edit field
#' - *<KeyPress-Shift-Tab>* - switch to the previous edit field
#' 
#' Example:
#' 
#' > ```
#' # demo: tvedit
#' proc editDone {args} {
#'       puts "done: $args"
#' }
#' pack [dgw::tvedit [ttk::treeview .tv -columns {bool int list} -show {headings} \
#'    -selectmode extended -yscrollcommand {.sb set}] \
#'    -edittypes [list bool bool int [list int 0 100]] \
#'    -editdefault "" -editendcmd editDone] -fill both -expand true -side left
#' pack [ttk::scrollbar .sb -orient v -command ".tv yview"] -fill y -side left
#' .tv insert {} end -values {true 15 {Letter B}}
#' .tv insert {} end -values {true 35 {Letter D}}
#' for {set i 0} {$i<20} {incr i} {
#'      .tv insert {} end -values [list true $i {Letter B}]
#' }
#' dgw::mixin .tv dgw::tvband
#' > ```

snit::widgetadaptor ::dgw::tvedit {
    delegate option * to hull
    delegate method * to hull
    option -edittypes [list]
    option -editdefault entry
    option -editendcmd ""
    variable edittypes
    variable curfocus
    constructor {args} {
        installhull $win
        $self configurelist $args
        # intercept all the events changing focus
        #bind $win <<TreeviewSelect>> +[mymethod checkFocus %W]
        bind $win <KeyPress-F2> +[mymethod checkFocus %W %x %y]
        #bind $win <KeyRelease> +[mymethod  checkFocus %W]
        bind $win <ButtonPress-4> +[list after idle [mymethod updateWnds %W]]
        bind $win <ButtonPress-5> +[list after idle [mymethod updateWnds %W]]
        bind $win <MouseWheel> +[list after idle [mymethod updateWnds %W]]
        bind $win <B1-Motion> +[list if {$ttk::treeview::State(pressMode)=="resize"} { [mymethod updateWnds %W] }]
        bind $win <Configure> +[list after idle [mymethod updateWnds %W]]
        bind all <KeyPress-Return> +[mymethod _clear $win %d]
        #bind all <KeyPress-Escape> +[mymethod _clear $win %d]
        bind $win <<TreeviewInplaceEdit>> [mymethod InplaceEdit %d %v] 
        array set edittypes $options(-edittypes)
    }
    method InplaceEdit {d v} {
        if {[$win children [lindex $d 1]]==""} {
            set col [lindex $d 0] 
            if {$col eq "#0"} {
                $win _inplaceEntry $win {*}$d 
            } elseif {[info exists edittypes($col)]} {
                if {$edittypes($col) eq "bool"} {
                    $win _inplaceCheckbutton $win {*}$d true false
                } elseif {[lindex $edittypes($col) 0] eq "int"} {
                    $win _inplaceSpinbox $win {*}$d [lindex $edittypes($col) 1] [lindex $edittypes($col) 2] 1
                } elseif {[lindex $edittypes($col) 0] eq "list"} {
                    $win _inplaceList $win {*}$d [lrange $edittypes($col) 1 end]
                } else {
                    $win _inplaceEntry $win {*}$d
                }
            } else {
                if {$options(-editdefault) eq "entry"} {
                    $win _inplaceEntry $win {*}$d
                }
            }
        } elseif {[lindex $d 0]=="list"} {
            # did not work yet
            $win _inplaceEntryButton $win {*}$d [list set %$v "tree: $win, column,item=$d"]
        }
    }
    # check, if focus has changed
    method checkFocus {w {X {}} {Y {}} } {
        if {![info exists curfocus($w)]} {
            set changed 1
        } elseif {$curfocus($w)!=[$w focus]} {
            $self _clear $w $curfocus($w)
            set changed 1
        } else {
            set changed 0
        }
        set newfocus [$w focus]
        if {$changed} {
            if {$newfocus!=""} {
                $self _focus $w $newfocus
                if {$X!=""} {
                    set col [$w identify column $X $Y]
                    if {$col!=""} {
                        if {$col!="#0"} {
                            set col [$w column $col -id]
                        }  
                    }  
                    catch {focus $w.$col}
                }  
            }        
            set curfocus($w) $newfocus
            $self updateWnds $w 
        }
    }
    # update inplace edit widgets positions
    method updateWnds {w} {
        if {![info exists curfocus($w)]} { return }
        set item $curfocus($w)
        if {$item==""} { return }
        foreach col [concat [$w cget -columns] #0] {
            set wnd $w.$col
            if {[winfo exists $wnd]} {
                set bbox [$w bbox $item $col]
                if {$bbox==""} { 
                    place forget $wnd
                } else {
                    place $wnd -x [lindex $bbox 0] -y [lindex $bbox 1] -width [lindex $bbox 2] -height [lindex $bbox 3]
                }
            }
        }
    }
    # remove all inplace edit widgets
    method _clear {w {item ""}} {
        foreach col [concat [$w cget -columns] #0] {
            set wnd $w.$col
            if {[winfo exists $wnd]} { 
                destroy $wnd
            }
        }
    }
    # called when focus item has changed
    method _focus {w item} {
        set cols [$w cget -displaycolumns]
        if {$cols=="#all"} { 
            set cols [concat #0 [$w cget -columns]]
        }
        foreach col $cols {
            event generate $w <<TreeviewInplaceEdit>> -data [list $col $item]
            if {[winfo exists $w.$col]} {
                bind $w.$col <Key-Tab> {focus [tk_focusNext %W]}
                bind $w.$col <Shift-Key-Tab> {focus [tk_focusPrev %W]}
            }
        }
    }
    # helper functions for inplace edit
    method _get_value {w column item} {
        if {$column=="#0"} {
            return [$w item $item -text]
        } else {
            return [$w set $item $column]
        }
    }
    method _set_value {w column item value} {
        if {$column=="#0"} {
            $w item $item -text $value
        } else {
            $w set $item $column $value
        }
    }
    method _cancel_value {w column item} {
        set value [$self _get_value $w $column $item]
        set curfocus($w,$column) $value
        $self _clear $w
        focus -force $w
    }

    method _update_value {w column item} {
        set value [$self _get_value $w $column $item]
        set newvalue $curfocus($w,$column)
        if {$value!=$newvalue} {
           $self  _set_value $w $column $item $newvalue
       }
       if {$options(-editendcmd) ne ""} {
           $options(-editendcmd) $w $column $item $value $newvalue
       }
       focus -force $w
       event generate $w <<TreeviewEditEnd>> -data [list $item $column]
    }
    # these functions create widgets for in-place edit, use them in your in-place edit handler
    method _inplaceEntry {w column item} {
        set wnd $w.$column 
        ttk::entry $wnd -textvariable [myvar ::curfocus($w,$column)] -width 3
        set curfocus($w,$column) [$self _get_value $w $column $item]
        bind $wnd <Destroy> [mymethod _update_value $w $column $item]
        bind $wnd <KeyPress-Escape> [mymethod _cancel_value $w $column $item]
    }
    method _inplaceEntryButton {w column item script} {
        set wnd $w.$column
        ttk::frame $wnd
        pack [ttk::entry $wnd.e -width 3 -textvariable [myvar curfocus($w,$column)]] -side left -fill x -expand true
        pack [ttk::button $wnd.b -style Toolbutton -text "..." -command [string map [list %v [myvar curfocus($w,$column)]] $script]] -side left -fill x 
        set curfocus($w,$column) [$self _get_value $w $column $item]
        bind $wnd <Destroy> [mymethod _update_value $w $column $item]
        bind $wnd <KeyPress-Escape> [mymethod _cancel_value $w $column $item]
    }
    method _inplaceCheckbutton {w column item {onvalue 1} {offvalue 0} } {
        set wnd $w.$column 
        ttk::checkbutton $wnd -variable [myvar ::curfocus($w,$column)] -onvalue $onvalue -offvalue $offvalue
        set curfocus($w,$column) [$self _get_value $w $column $item]
        bind $wnd <Destroy> [mymethod _update_value $w $column $item]
        bind $wnd <KeyPress-Escape> [mymethod _cancel_value $w $column $item]
    }
    method _inplaceList {w column item values} {
        set wnd $w.$column 
        ttk::combobox $wnd -textvariable [myvar curfocus($w,$column)] -values $values -state readonly 
        set curfocus($w,$column) [$self _get_value $w $column $item]
        bind $wnd <Destroy> [mymethod _update_value $w $column $item]
        bind $wnd <KeyPress-Escape> [mymethod _cancel_value $w $column $item]
    }
    method _inplaceSpinbox {w column item min max step} {
        set wnd $w.$column 
        spinbox $wnd -textvariable [myvar curfocus($w,$column)] -from $min -to $max -increment $step
        set curfocus($w,$column) [$self _get_value $w $column $item]
        bind $wnd <Destroy> [mymethod _update_value $w $column $item]
        bind $wnd <KeyPress-Escape> [mymethod _cancel_value $w $column $item]
    }
}

#'
#' <a name="tvfilebrowser">**dgw::tvfilebrowser**</a> *[ttk::treeview pathName] ?-option value ...?*
#' 
#' Creates and configures the *dgw::tvfilebrowser*  widget using the Tk window id _pathName_ and the given *options*. 
#'
#' The following option is available:
#'
#' > - *-directory dirName* - starting directory for the filebrowser, default current directory.
#'   - *-browsecmd cmdName* - command to be executed if the users double clicks on a row item or presses the Return key. The widgets *pathName* and the actual row index are appended to the *cmdName* as arguments, default to empty string.
#'   - *-fileimage imgName* - image to be displayed as filename image left of the filename, default is standard file icon.
#'   - *-filepattern pattern* - the filter for the files to be displayed in the widget, default to ".+" i.e. all files
#' 
#' The following method(s) is(are) available:
#' 
#' > - *browseDir dirName* - the directory to be loaded into the *dgw::tvfilebrowser* widget.
#' 
#' Example:
#'
#' > ``` 
#' # demo: tvfilebrowser
#' dgw::tvfilebrowser [dgw::tvsortable [dgw::tvksearch [dgw::tvband \
#'          [ttk::treeview .fb]]] \
#'         -sorttypes [list Name directory Size real Modified dictionary]]
#' pack .fb -side top -fill both -expand yes
#' > ```

# a file browser widget as widget adaptor
# could be may be better be a snit::widget
# as it is already quite specialized
# however writing it as a adaptor allows nesting
# so banding widget adaptor can go intern
# this is required as in the constructor already 
# browseDir is called
snit::widgetadaptor ::dgw::tvfilebrowser {
    option -filepattern ".+"
    option -directory "."
    option -browsecmd ""
    option -fileimage fileImg
    delegate option * to hull 
    delegate method * to hull except browseDir
    variable LastKeyTime 
    variable LastKey ""
    constructor {args} {
        ttk::style configure Treeview.Item -padding {1 1 1 1}
        installhull $win ;# using ttk::treeview
        $win configure -columns [list Name Size Modified] -show [list tree headings]
        $win heading Name -text Name -anchor w
        $win heading Size -text Size -anchor center
        $win heading Modified -text Modified -anchor w
        $win column Name -width 60 
        $win column Size -width 40
        $win column Size -width 40
        $win column #0 -width 35 -anchor w -stretch false
        bind $win <Double-1> [mymethod fbOnClick %W %x %y]
        bind $win <Return> [mymethod fbReturn %W]
        bind $win <Key-BackSpace> [mymethod browseDir ..]
        $win tag configure hilight -foreground blue
        $self configurelist $args
        set LastKeyTime [clock seconds]
        $self browseDir $options(-directory)
    }   
    typeconstructor {
        image create photo movie -data {
            R0lGODlhEAAQAIIAAPwCBARCRAQCBASChATCxATCBASCBAAAACH5BAEAAAAA
            LAAAAAAQABAAAANHCLrc/izISauYI5NduvlXMIjEQBSnUYCYxnmsSJrouhqh
            6J4wLo0mWuqWy5heN58seBrGdEdeMgQsNW0ggXbL7Qog4HDDnwAAIf5oQ3Jl
            YXRlZCBieSBCTVBUb0dJRiBQcm8gdmVyc2lvbiAyLjUNCqkgRGV2ZWxDb3Ig
            MTk5NywxOTk4LiBBbGwgcmlnaHRzIHJlc2VydmVkLg0KaHR0cDovL3d3dy5k
            ZXZlbGNvci5jb20AOw==
        }
        image create photo fileImg -data {
            R0lGODlhEAAOAPcAAAAAADVJYzZKZJOit5WkuZalupqpvpyrwJ6uw6OyyKSzyae2zKm5z6u70a6+
            1K+/1bLC2LrF1L3K4cTP5MnT5svV59HZ6tPb69Xd7Njf7drh7tzj79/l8OHn8ePp8ubr9Ont9evv
            9u7x9/Dz+PL1+fX3+vf4+/n6/Pv8/fz9/v7+/v///wAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA
            AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA
            AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA
            AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA
            AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA
            AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA
            AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA
            AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA
            AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA
            AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA
            AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA
            AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAACH5BAEAAP8ALAAAAAAQAA4A
            AAh7AP/9g0CwoAMGCgQqFAhhhcOHKw4IWCjwAcSHBCJMXNjgosMBAkIuXOBxBYoBIBcm8KiiBIgB
            ARYi8HhCRAeYCw1cTEHigwacCgtcNBGCwwWgAgdARDHCQ4YKSP8pddgSxAYLE6JOXVGzAwYKErSi
            HEs2aoCzaNOeFRgQADs=}
        image create photo clsdFolderImg -data {
            R0lGODlhEAAOAPcAAAAAAJycAM7OY//OnP//nP//zvf39wAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA
            AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA
            AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA
            AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA
            AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA
            AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA
            AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA
            AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA
            AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA
            AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA
            AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA
            AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA
            AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA
            AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAACH5BAEAAP8ALAAAAAAQAA4A
            AAhjAP8JHEiw4MAACBECMHjQQIECBAgEWGgwgICLGAUkTCgwwMOPIB8SELDQY8STKAkMIPnPZEqV
            MFm6fDlApUyIKGvqHFkSZ06YK3ue3KkzaMsCRIEOMGoxo1OMFAFInUqV6r+AADs=}
        image create bitmap arrowBlank -data {
            #define arrowBlank_width 7
            #define arrowBlank_height 4
            static char arrowBlank_bits[] = {
                0x00, 0x00, 0x00, 0x00
            };
        }   

    }
    method fbReturn {w} {
        set row [$win selection]
        $win tag remove hilight
        $win tag add hilight $row 
        set fname [lindex [$win item $row -values] 0]
        if {[file isdirectory $fname]} {
            $self browseDir $fname
        }  else {
            if {$options(-browsecmd) ne ""} {
                $options(-browsecmd) $fname
            }
        }
    }
    method fbOnClick {w x y} {
        set row [$win identify item $x $y]
        $win tag remove hilight
        $win tag add hilight $row 
        set fname [lindex [$win item $row -values] 0]
        if {[file isdirectory $fname]} {
            $self browseDir $fname
        }  else {
            if {$options(-browsecmd) ne ""} {
                $options(-browsecmd) $fname
            }
        }
    }
    onconfigure -directory value {
        $self browseDir $value
        set options(-directory) $value
    }
    method browseDir {{dir "."}} {
        if {[llength [$win children {}]] > 0} {
            $win delete [$win children {}]
        }
        if {$dir ne "."} {
            cd $dir
            set options(-directory) [pwd]
        }
        $win insert {} end -values [list ".."  " " [clock format [file mtime ..] -format "%Y-%m-%d %H:%M"]] -image clsdFolderImg
        foreach dir [lsort -dictionary [glob -types d -nocomplain [file join $options(-directory) *]]] {
            $win insert {} end -values [list [file tail $dir]  " " \
                                        [clock format [file mtime [file tail $dir]] -format "%Y-%m-%d %H:%M"]] -image clsdFolderImg
        }
        
        foreach file [lsort -dictionary [glob -types f -nocomplain [file join $options(-directory) *]]] {
            if {[regexp $options(-filepattern) $file]} {
                $win insert {} end -values [list [file tail $file] \
                                            [format "%3.2fMb" [expr {([file size $file] /1024.0)/1024.0}]] \
                                             [clock format [file mtime [file tail $file]] -format "%Y-%m-%d %H:%M"]] \
                      -image $options(-fileimage)
            }
        }
        $win focus [lindex [$win children {}] 0]
        $win selection set  [lindex [$win children {}] 0]
        focus -force $win
        foreach header [$win cget -columns] {
            $win heading $header -image arrowBlank
        }
    }

}

#'
#' <a name="tvksearch">**dgw::tvksearch**</a> *[ttk::treeview pathName] ?-option value ...?*
#' 
#' Creates and configures the *dgw::tvksearch*  widget using the Tk window id _pathName_ and the given *options*. 
#' With this widget you can use the Home and End keys for navigation and further letter
#' typing starts searching in the first column shifting focus and display to the current matching entry.
#'
#' There are currently no options or methods available for this widget.
#'
#' Example:
#' 
#' > ```
#' # demo: tvksearch
#' dgw::tvfilebrowser [dgw::tvksearch [ttk::treeview .fb]]
#' pack .fb -side top -fill both -expand yes
#' > ```

# widget adaptor which allows forward searching in a ttk::treeview 
# using the starting letters matchinf entries in column 1
# with typing beginning letters 
# further has bindings of Home and End key
snit::widgetadaptor ::dgw::tvksearch {
    delegate option * to hull 
    delegate method * to hull
    variable LastKeyTime ""
    variable LastKey ""
    constructor {args} {
        installhull $win
        bind $win <Key-Home>   [mymethod setSelection 0]
        bind $win <Key-End>   [mymethod setSelection end]
        bind $win <Any-Key> [mymethod ListMatch %A]
        set LastKeyTime [clock seconds]
        $self configurelist $args
                
    }
    method setSelection {index} {
        $self focus [lindex [$self children {}] $index]
        $self selection set  [lindex [$self children {}] $index]
        focus -force $win
        $self see [lindex [$self selection] 0]
    }
    method  ListMatch {key} {
        if [regexp {[-A-Za-z0-9]} $key] {
            set ActualTime [clock seconds]
            if {[expr {$ActualTime-$LastKeyTime}] < 3} {
                set ActualKey "$LastKey$key"
            } else {
                set ActualKey $key
            }

            set n 0
            foreach i [$win children {}] {
                set name [lindex [$win item $i -value] 0]
                if [string match $ActualKey* $name] {
                    $win selection remove [$win selection]
                    $win focus $i 
                    $win selection set  $i
                    focus -force $win
                    $win see $i
                    set LastKeyTime [clock seconds]
                    set LastKey $ActualKey
                    break
                } else {
                    incr n
                }
            }
        } 
            
    }
}



#'
#' <a name="tvsortable">**dgw::tvsortable**</a> *[ttk::treeview pathName] ?-option value ...?*
#' 
#' Creates and configures the *dgw::tvsortable*  widget using the Tk window id _pathName_ and the given *options*. 
#'
#' The following option is available:
#'
#' > - *-sorttypes* the options for the *lsort* command for each of the columns, 
#'     such as dictionary, ascii, real etc. Default: autocheck for dictionary or real. 
#'     The values are given as a list of key-value pairs where the key is 
#'     the column name. In addition to the standard *lsort* options as well 
#'     the option *directory* can be given if the widget contains results of a 
#'     directory listening with filenames and directory names. 
#'     In this case the directories are always sorted above the filenames.
#' 
#' The following methods are available:
#'
#' > - *sortBy* *colId decreasing* - sort widget by column with the given *colId* and in decreasing order if true or *increasing* if false.
#'   - *reSort* redo the last sorting again, useful if the data in the widget where changed either interactively for instance using the *tvedit* adaptor or programmatically.
#' 
#' The widget further provides the following event:
#' 
#' - <<*SortEnd*\>> - with the following symbols *%W* (widget path) and *%d* (column id)
#' 
#' Example:
#' 
#' > ```
#' # demo: tvsortable
#' dgw::tvsortable [dgw::tvband [ttk::treeview .fb -columns [list A B C] \
#'        -show headings]] -sorttypes [list A real B real C integer]
#' foreach col [list A B C] { .fb heading $col -text $col }
#' for {set i 0} {$i < 20} {incr i 1} {
#'    .fb insert {} end -values [list  [expr {int(rand()*100)}] \
#'                   [expr {int(rand()*1000)}] [expr {int(rand()*1000)}]]
#' }
#' pack .fb -side top -fill both -expand yes
#' > ```
#
snit::widgetadaptor ::dgw::tvsortable {
    delegate option * to hull except -sorttypes
    delegate method * to hull
    # -filename column-id to always sort directories before columns
    option -sorttypes [list]
    variable sortOpt
    variable lastCol ""
    variable lastDir ""

    constructor {args} {
        installhull $win
        $self configurelist $args
        array set sortOpt $options(-sorttypes)
        set headers [$win cget -columns]
        set x 0
        foreach col $headers {
            $win heading $col -image arrowBlank \
                  -command [mymethod sortBy $col 0] 
        }

    }
    typeconstructor {
        image create photo arrow(1) -data {
            R0lGODlhEAAQAIIAAAT+BPwCBAQCBAQC/FxaXAAAAAAAAAAAACH5BAEAAAAA
            LAAAAAAQABAAAAM5CBDM+uKp8KiMsmaAs82dtnGeCHnNp4TjNQ4jq8CbDNOr
            oIe3ROyEx2A4vOgkOBzgFxQ6Xa0owJ8AACH+aENyZWF0ZWQgYnkgQk1QVG9H
            SUYgUHJvIHZlcnNpb24gMi41DQqpIERldmVsQ29yIDE5OTcsMTk5OC4gQWxs
            IHJpZ2h0cyByZXNlcnZlZC4NCmh0dHA6Ly93d3cuZGV2ZWxjb3IuY29tADs=
        }
        image create photo arrow(0) -data {
            R0lGODlhEAAQAIIAAAT+BAQC/AQCBPwCBFxaXAAAAAAAAAAAACH5BAEAAAAA
            LAAAAAAQABAAAAM4CAqxLm61CGBs81FMrQxgpnhKJlaXFJHUGg0w7DrDUmvt
            PQo8qyuEHoHW6hEVv+DQFvuhWtCFPwEAIf5oQ3JlYXRlZCBieSBCTVBUb0dJ
            RiBQcm8gdmVyc2lvbiAyLjUNCqkgRGV2ZWxDb3IgMTk5NywxOTk4LiBBbGwg
            cmlnaHRzIHJlc2VydmVkLg0KaHR0cDovL3d3dy5kZXZlbGNvci5jb20AOw==
        }

        image create bitmap arrow(2) -data {
            #define arrowUp_width 7
            #define arrowUp_height 4
            static char arrowUp_bits[] = {
                0x08, 0x1c, 0x3e, 0x7f
            };
        }
        image create bitmap arrow(3) -data {
            #define arrowDown_width 7
            #define arrowDown_height 4
            static char arrowDown_bits[] = {
                0x7f, 0x3e, 0x1c, 0x08
            };
        }
        image create bitmap arrowBlank -data {
            #define arrowBlank_width 7
            #define arrowBlank_height 4
            static char arrowBlank_bits[] = {
                0x00, 0x00, 0x00, 0x00
            };
        }   
    }
    # not working yet
    method sortBy {col direction} {
        set lastCol $col
        set lastDir $direction
        #set mtimer [Timer %AUTO%]
        set ncol [lsearch -exact [$win cget -columns] $col]
        if {![info exists sortOpt($col)]} {
            set fchild [lindex [$win children ""] 0]
            set fvalues [$win item $fchild -values]
            set i 0
            foreach heading [$win cget -columns] {
                if {[$win heading $heading -text] eq "$col"} {
                    set val [lindex $fvalues $i]
                    break
                }
                incr i
            }
            if {[string is double $val]} {
                set stype real
            } else {
                set stype dictionary
            }
        } else {
            set stype $sortOpt($col)
        }
        set dir [expr {$direction ? "-decreasing" : "-increasing"}]
        if {[lsearch [array get sortOpt] directory] > -1} {
            set hasDir true
            foreach key [array names sortOpt] {
                if {$sortOpt($key) eq "directory"} {
                    set cname $key
                    set i 0
                    foreach heading [$win cget -columns] {
                        if {[$win heading $heading -text] eq "$cname"} {
                            set didx $i
                            break
                        }
                        incr i
                    }
                    break
                }
            }
        } else {
            set hasDir false
        }
        
        set l [list]
        foreach child [$win children {}] {
            set val [lindex [$win item $child -values] $ncol]
            if {$stype eq "directory"} {
                # ensure that ..  is always on top
                # and thereafter sorted directories
                # and only then sorted files
                if {$val eq ".." && $direction} {
                    set val "Z$val"
                } elseif {$val eq ".."} {
                    set val "A$val"
                } elseif {[file isdirectory $val] && $direction} {
                    set val "O$val"
                } elseif {[file isdirectory $val]} {
                    set val "D$val"
                } else {
                    set val "F$val"
                }
                lappend l [list $val $child]
            } elseif {$hasDir} {
                set val [lindex [$win item $child -values] $ncol]
                set fname [lindex [$win item $child -values] $didx]
                if {$fname eq ".."} {
                    set letter A
                } elseif {[file isdirectory $fname]} {
                    set letter D
                } else {
                    set letter F
                }
                lappend l [list $val $child $letter]
            } else {
                lappend l [list $val $child]
            }
        }
        if {$hasDir && ($stype eq "real" || $stype eq "integer")} {
            set l  [lmap x $l { list [regsub -all {[^0-9\.]} [lindex $x 0] "0"] [lindex $x 1] [lindex $x 2] }]
        } elseif {$stype eq "real" && $stype eq "integer"} {
            set l  [lmap x $l { list [regsub -all {[^0-9]} [lindex $x 0] ""] [lindex $x 1] }]
        }
        #set idx [lsort -$stype -indices -index 0 $dir $l]
        if {$stype eq "directory"} {
            set l [lsort -dictionary -index 0 $dir $l]
        } elseif {$hasDir} {
            #puts $l
            set l [lsort -dictionary -index 2 -increasing [lsort -$stype -index 0 $dir $l]]
            #puts $l
        } else {
            set l [lsort -$stype -index 0 $dir $l]
        }
        for {set i 0} {$i < [llength $l]} {incr i 1} {
            set item [lindex [lindex $l $i] 1]
            $win move $item {} $i
        }
        set idx -1
        foreach ccol [$win cget -columns] {
            incr idx
            set img arrowBlank
            if {$ccol == $col} {
                set img arrow($direction)
            }
            $win heading $idx -image $img
        }
        set cmd [mymethod sortBy $col [expr {!$direction}]]
        $win heading $col -command $cmd
        # new event
        event generate $win <<SortEnd>> -data $col
    }
    method reSort {} {
        if {$lastCol ne ""} {
            $self sortBy $lastCol $lastDir
        }
    }


}

#'
#' <a name="tvtooltip">**dgw::tvtooltip**</a> *[ttk::treeview pathName] ?-option value ...?*
#' 
#' Creates and configures the *dgw::tvtooltip*  widget using the Tk window id _pathName_ and the given *options*. 
#'
#' There are currently no options available.
#' 
#' The widget provides the following events:
#' 
#' - <<RowEnter\>> with the following symbols: %d the row index, and the standards %W (widget), %x (widgetX), %y (widgetY), %X (rootx), %Y (rootY)
#' - <<RowLeave\>> with the following symbols: %d the row index, and the standards %W (widget), %x (widgetX), %y (widgetY), %X (rootx), %Y (rootY)
#'
#' Example:
#' 
#' > ```
#' # demo: tvtooltip
#' set fb [dgw::tvtooltip [dgw::tvfilebrowser [ttk::treeview .fp2] \
#'          -directory . -fileimage movie \
#'          -filepattern {\.(3gp|mp4|avi|mkv|mp3|ogg)$}]]
#' pack $fb -side top -fill both -expand yes
#' pack [::ttk::label .msg -font "Times 12 bold" -textvariable ::msg -width 20 \
#'       -background salmon -borderwidth 2 -relief ridge] \
#'       -side top -fill x -expand false -ipadx 5 -ipady 4
#' bind $fb <<RowEnter>> { set ::msg "  Entering row %d"}
#' bind $fb <<RowLeave>> { set ::msg "  Leaving row %d"}
#' > ```
#' 

# https://wiki.tcl-lang.org/page/TreeView+Tooltips
snit::widgetadaptor ::dgw::tvtooltip {
    delegate option * to hull
    delegate method * to hull
    variable LAST 
    variable AFTERS 
    constructor {args} {
        installhull $win
        $self configurelist $args
        array set LAST [list $win ""]
        array set AFTERS [list $win ""]
        bind $win <Motion> [mymethod OnMotion %W %x %y %X %Y]
    }
    method OnMotion {W x y rootX rootY} {
        set id [$W identify row $x $y]
        set lastId $LAST($W)
        set LAST($W) $id
        if {$id ne $lastId} {
            after cancel $AFTERS($W)
            if {$lastId ne ""} {
                event generate $W <<RowLeave>> \
                      -data $lastId -x $x -y $y -rootx $rootX -rooty $rootY
            }
            if {$id ne ""} {
                set AFTERS($W) \
                      [after 300 event generate $W <<RowEnter>> \
                       -data $id -x $x -y $y -rootx $rootX -rooty $rootY]
            }
        }
    }
}

#'
#' <a name="tvtree">**dgw::tvtree**</a> *[ttk::treeview pathName] ?-option value ...?*
#' 
#' Creates and configures the *dgw::tvtree*  widget using the Tk window id _pathName_ and the given *options*. 
#'
#' There is(are) currently the following option(s) available:
#' 
#' - *-icon* - the icon type, which can be currently either book or folder. To provide your own icons you must create two image icons \<name\>open16 and \<name\>close16. Support for icons of size 22 will be added later.
#' 
#' The widget provides the following event:
#' 
#' - <<InsertItem\>> which is fired if a item is inserted into the *tvtree* widget, there are the following event symbols available: _%d_ the row index, and the standard _%W_ (widget pathname).
#'
#' Example:
#' 
#' > ```
#' # demo: tvtree
#' set tree [dgw::tvtree [ttk::treeview .tree \
#'      -height 15 -show tree -selectmode browse] \
#'      -icon folder]
#' foreach txt {first second third} {
#'    set id [$tree insert {} end -text " $txt item" -open 1]
#'    for {set i [expr {1+int(rand()*5)}]} {$i > 0} {incr i -1} {
#'        set child [$tree insert $id 0 -text " child $i"]
#'        for {set j [expr {int(rand()*3)}]} {$j > 0} {incr j -1} {
#'           $tree insert $child 0 -text " grandchild $i"
#'        }
#'    }
#' }
#' pack $tree -side top -fill both -expand true
#' > ```
#' 

snit::widgetadaptor ::dgw::tvtree {
    delegate option * to hull
    delegate method * to hull
    option -icon book
    constructor {args} {
        installhull $win
        $self configurelist $args
        trace add execution $win leave [mymethod wintrace]
        bind $win <<TreeviewOpen>> [mymethod TreeviewUpdateImages true]
        bind $win <<TreeviewClose>> [mymethod TreeviewUpdateImages false]
        bind $win <<InsertItem>> [mymethod InsertItem %d]
    }
    typeconstructor {
        image create photo bookclose16 -data {
            R0lGODlhEAAQAIQAAPwCBAQCBDyKhDSChGSinFSWlEySjCx+fHSqrGSipESO
            jCR6dKTGxISytIy6vFSalBxydAQeHHyurAxubARmZCR+fBx2dDyKjPz+/MzK
            zLTS1IyOjAAAAAAAAAAAAAAAACH5BAEAAAAALAAAAAAQABAAAAVkICCOZGmK
            QXCWqTCoa0oUxnDAZIrsSaEMCxwgwGggHI3E47eA4AKRogQxcy0mFFhgEW3M
            CoOKBZsdUrhFxSUMyT7P3bAlhcnk4BoHvb4RBuABGHwpJn+BGX1CLAGJKzmK
            jpF+IQAh/mhDcmVhdGVkIGJ5IEJNUFRvR0lGIFBybyB2ZXJzaW9uIDIuNQ0K
            qSBEZXZlbENvciAxOTk3LDE5OTguIEFsbCByaWdodHMgcmVzZXJ2ZWQuDQpo
            dHRwOi8vd3d3LmRldmVsY29yLmNvbQA7
        }
        image create photo bookopen16 -data {
            R0lGODlhEAAQAIUAAPwCBAQCBExCNGSenHRmVCwqJPTq1GxeTHRqXPz+/Dwy
            JPTq3Ny+lOzexPzy5HRuVFSWlNzClPTexIR2ZOzevPz29AxqbPz6/IR+ZDyK
            jPTy5IyCZPz27ESOjJySfDSGhPTm1PTizJSKdDSChNzWxMS2nIR6ZKyijNzO
            rOzWtIx+bLSifNTGrMy6lIx+ZCRWRAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA
            AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAACH5BAEAAAAALAAAAAAQABAAAAae
            QEAAQCwWBYJiYEAoGAFIw0E5QCScAIVikUgQqNargtFwdB9KSDhxiEjMiUlg
            HlB3E48IpdKdLCxzEAQJFxUTblwJGH9zGQgVGhUbbhxdG4wBHQQaCwaTb10e
            mB8EBiAhInp8CSKYIw8kDRSfDiUmJ4xCIxMoKSoRJRMrJyy5uhMtLisTLCQk
            C8bHGBMj1daARgEjLyN03kPZc09FfkEAIf5oQ3JlYXRlZCBieSBCTVBUb0dJ
            RiBQcm8gdmVyc2lvbiAyLjUNCqkgRGV2ZWxDb3IgMTk5NywxOTk4LiBBbGwg
            cmlnaHRzIHJlc2VydmVkLg0KaHR0cDovL3d3dy5kZXZlbGNvci5jb20AOw==
        }
        image create photo folderclose16 -data {
            R0lGODlhEAAQAIMAAPwCBNSeBJxmBPz+nMzOZPz+zPzSBPz2nPzqnAAAAAAA
            AAAAAAAAAAAAAAAAAAAAACH5BAEAAAAALAAAAAAQABAAAARFEMhJ6wwYC3uH
            98FmBURpElkmBUXrvsVgbOxw3F8+A+zt/7ddDwgUFohFWgGB9BmZzcMTASUK
            DdisNisSeL9gMGdMJvsjACH+aENyZWF0ZWQgYnkgQk1QVG9HSUYgUHJvIHZl
            cnNpb24gMi41DQqpIERldmVsQ29yIDE5OTcsMTk5OC4gQWxsIHJpZ2h0cyBy
            ZXNlcnZlZC4NCmh0dHA6Ly93d3cuZGV2ZWxjb3IuY29tADs=
        }
        image create photo folderopen16 -data {
            R0lGODlhEAAQAIMAAPwCBJxmBPz+nNSeBPz6nPz2nPzqnPzunPzynPzmnPzi
            nAAAAAAAAAAAAAAAAAAAACH5BAEAAAAALAAAAAAQABAAAAROEMhJKw0Y2yt6
            DxswEJ43nOc0FGTpgiLbup+I3nc9GMdRsK6BALTjIWQlISzAOxwLwWUi0XvO
            BjBAINE8zoaTgIJr/LWy2oxaHWq7Lf4IACH+aENyZWF0ZWQgYnkgQk1QVG9H
            SUYgUHJvIHZlcnNpb24gMi41DQqpIERldmVsQ29yIDE5OTcsMTk5OC4gQWxs
            IHJpZ2h0cyByZXNlcnZlZC4NCmh0dHA6Ly93d3cuZGV2ZWxjb3IuY29tADs=
        }

        image create photo file16 -data {
            R0lGODlhEAAQAIUAAPwCBFxaXNze3Ly2rJyanPz+/Ozq7GxqbPz6/GxubNTK
            xDQyNIyKhHRydERCROTi3PT29Pz29Pzy7PTq3My2pPzu5PTi1NS+rPTq5PTe
            zMyynPTm1Pz69OzWvMyqjPTu5PTm3OzOtOzGrMSehNTCtNS+tAAAAAAAAAAA
            AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA
            AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAACH5BAEAAAAALAAAAAAQABAAAAZ/
            QAAgQCwWhUhhQMBkDgKEQFIpKFgLhgMiOl1eC4iEYrtIer+MxsFRRgYe3wLk
            MWC0qXE5/T6sfiMSExR8Z1YRFRMWF4RwYIcYFhkahH6AGBuRk2YCCBwSFZgd
            HR6UgB8gkR0hpJsSGCAZoiEiI4QKtyQlFBQeHrVmC8HCw21+QQAh/mhDcmVh
            dGVkIGJ5IEJNUFRvR0lGIFBybyB2ZXJzaW9uIDIuNQ0KqSBEZXZlbENvciAx
            OTk3LDE5OTguIEFsbCByaWdodHMgcmVzZXJ2ZWQuDQpodHRwOi8vd3d3LmRl
            dmVsY29yLmNvbQA7
        }
        image create photo bookclose22 -data {
            R0lGODlhFgAWAIUAAPwCBAQCBDyGhCyCfFSWlESOjDyKjDSGhCx+fGSinGSe
            nFyanEySjHSqpHSqrGympEySlBx2dISytHyyrCR6dKTGxHyurHSurHyytGSi
            pCR6fARmZFSalEyWlBRubAxubBRydDyKhDSChLSytPz+/MzKzIyOjAAAAAAA
            AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA
            AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAACH5BAEAAAAALAAAAAAWABYAAAbF
            QIBwSCwaj8ikMhBQIpmCQdM5ZBIKhgNiugwkFAsCI7pNMhuOxkNBgBgEiAi3
            GkBLJpJHYgEpaClyREwVFhcSEhgOGQoMfgMaERtcARQBFRMYExZ6HB0FUYAe
            kkIBHxqWFmlrC1haESAfG6MBGx+VFRgKYH0hInGRklO0ppYXCwwMWQiQHkwj
            grWnFRdYZHIBJCTP0LaWGAcDW9jZ2nMAw9IWTOQkJSZMRsOV49nu8E+19Pbm
            R7TY+1TovONH5V7Ag0QMBAEAIf5oQ3JlYXRlZCBieSBCTVBUb0dJRiBQcm8g
            dmVyc2lvbiAyLjUNCqkgRGV2ZWxDb3IgMTk5NywxOTk4LiBBbGwgcmlnaHRz
            IHJlc2VydmVkLg0KaHR0cDovL3d3dy5kZXZlbGNvci5jb20AOw==
        }
        image create photo bookopen22 -data {
            R0lGODlhFgAWAIYAAAQCBAQ2NPwCBHSurIS2tBx2dBweHPz+/Ozm1GxiTGyq
            pPz6/Pz69GSqpOzaxPzy5HxuVLSmlOTazPz27PT29NzClPTexHxuXLSmjAxq
            bFSinPTy9KyehNy+lPTy5Pz29HxyXNzWxKSahOzexPzy7IR2ZOTWtESenPTy
            7KSWfIyCbKyijAQGBDyalPTu3KSSdDSOjJyOdCSGhPzu3OzizJSGdPTq1PTq
            3JySdMy6lAyKhOzWtOzi1OTOrJyKbMS2nJySfMS+rAwCBNzOrNTCpNzKpJSG
            ZKyafLSifLyylIx+ZHx6ZDSChAQuLAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA
            AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA
            AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA
            AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAACH5BAEAAAIA
            LAAAAAAWABYAAAf/gAABAoSFhoeHAAMAiI2IAAQFjI6EAAaJkQeTjwAICYkK
            BQcLm5WdBwyfhgChB66bp64HCQC1lQ2irqQCAA4PowsLEBESE4wAuLIHFAAV
            Fr+uDBcYxRm1GrmuGxwdFh4Mrh8gGCET1gDYyhsiFSMkDAsMDCUYJhvnJ9kH
            KCnODwwfPlBQsULCPRYAWogK9sHFiwoOPEyQh0JFPXO1YBSYwBEFghjdHkwQ
            OYGgwQwIZRR44GHGDBogabhAsYEEihrUMAIoUMCEDRs3HODIYQHFA6MPcJA7
            KICFjgw7eIzo4cOfiwc/gKwIUm2SkKdDdlDt4AABDaU/iIRwwbTSUyJFOow4
            S3Hkx9oNDDZgXPU0h1wcSIgEGUw4ibVET5WoWMKksePHpdxmyKADAEIWly9H
            JtQkQJMmlAgZCAQAIf5oQ3JlYXRlZCBieSBCTVBUb0dJRiBQcm8gdmVyc2lv
            biAyLjUNCqkgRGV2ZWxDb3IgMTk5NywxOTk4LiBBbGwgcmlnaHRzIHJlc2Vy
            dmVkLg0KaHR0cDovL3d3dy5kZXZlbGNvci5jb20AOw==
        }
        image create photo filenew22 -data {
            R0lGODlhFgAWAIUAAPwCBExOTERCRDw6PCwuLBwaHAwODAQCBOze1NTW1OTi
            5Nze3MTGxLS2tJyanPz+/Ozu7OTi3BQSFCwqLDw+PDQyNFRSVPTu7MzKxLyy
            rIR+fCQmJPz6/NTOxPz69Pzy7PTu5Pz29Pzu5PTq5PTm1My6pBQWFPTq3PTm
            3NS+rAwKDPTi1PTezOzWxMy2pPz27PTazOzSvMyynOzaxOzOtPTaxOzKrMyq
            jOzGpMymhPTizOTCpNzSzNTGvMymjMSihCH5BAEAAAAALAAAAAAWABYAAAbo
            QIBwSCwaiYGAYEAgFAqGg/Q4DCASCsTiymgcHAcqQLB4mM+QiIQBppLPcMjk
            wQ4bB2X4maKgt4sVCHpnFhQTElNFE3mDDxcYGRp2RBuMgxwIHX9EBZZwHh8g
            CBmTQ52NISEiIyQlpUImng8hHyInKAgprwAqgnC0IKwrLLpGB4wctLYkwy0u
            uwd9Z8AnJywsLcVFx2YcL7UnJCwwLTEy0GXJoSgrCCwzNDTnxgjeH9UrKzXw
            NDY36LRGhEOwLx4NHDmgJbh3QoeOgv127EhojEeHDj16pEhRQoZHHzl+QJNC
            sqTJSXaCAAAh/mhDcmVhdGVkIGJ5IEJNUFRvR0lGIFBybyB2ZXJzaW9uIDIu
            NQ0KqSBEZXZlbENvciAxOTk3LDE5OTguIEFsbCByaWdodHMgcmVzZXJ2ZWQu
            DQpodHRwOi8vd3d3LmRldmVsY29yLmNvbQA7
        }
    }

    method wintrace {args} {
        set path [lindex [lindex $args 0] 0]
        set meth [lindex [lindex $args 0] 1]
        if {$meth eq "insert"} {
            set parent [lindex [lindex $args 0] 2]
            set index [lindex [lindex $args 0] 3]
            set item [lindex [$path children $parent] $index]
            event generate $win <<InsertItem>> -data $item
        }
    }
    method InsertItem {item} {
        set parent [$win parent $item]
        $win item $item -image file16
        if {$parent eq {}} {
            $win item $item -image file16
        } else {
            if {[$win item $parent -open]} {
                $win item $parent -image $options(-icon)open16
            } else {
                $win item $parent -image $options(-icon)close16
            }
        }
    }

    method TreeviewUpdateImages {open} {
        # event fires before 
        # the children are indeed displayed or hided
        set item [$win focus]
        if {$open} {
            if {[llength [$win children $item]] > 0} {
                $win item $item -image $options(-icon)open16
            }
        } else {
            if {[llength [$win children $item]] > 0} {
                $win item $item -image $options(-icon)close16
            }
        }
    }
}

namespace eval dgw {
    namespace export mixin tvband tvedit tvfilebrowser tvksearch \
          tvsortable tvtooltip tvtree
}

if {[info exists argv0] && $argv0 eq [info script] && [regexp {tvmixins} $argv0]} {
    # dgwutils is only required for doucmentation and script execution
    package require dgw::dgwutils
    set dpath dgw
    set pfile [file rootname [file tail [info script]]]
    if {[llength $argv] == 1 && [lindex $argv 0] eq "--version"} {    
        puts [dgw::getVersion [info script]]
        destroy .
    } elseif {[llength $argv] >= 1 && [lindex $argv 0] eq "--demo"} {    
        if {[llength $argv] == 1} {
            dgw::runExample [info script] true 
        } else {
            dgw::runExample [info script] true [lindex $argv 1]
        }
    } elseif {[llength $argv] == 1 && [lindex $argv 0] eq "--code"} {
        puts [dgw::runExample [info script] false]
        #destroy .
    } elseif {[llength $argv] == 1 && [lindex $argv 0] eq "--example"} {
        puts [dgw::runExample [info script] false]
        destroy .
    } elseif {[llength $argv] == 1 && [lindex $argv 0] eq "--test"} {
        package require tcltest
        set argv [list] 
        tcltest::test dummy-1.1 {
            Calling my proc should always return a list of at least length 3
        } -body {
            set result 1
        } -result {1}
        tcltest::cleanupTests
        destroy .
    } elseif {[llength $argv] == 1 && ([lindex $argv 0] eq "--license" || [lindex $argv 0] eq "--man" || [lindex $argv 0] eq "--html" || [lindex $argv 0] eq "--markdown")} {
        dgw::manual [lindex $argv 0] [info script]
    } elseif {[llength $argv] == 1 && [lindex $argv 0] eq "--install"} {
        dgw::install [info script]
    } else {
        destroy .
        puts "\n    -------------------------------------"
        puts "     The ${dpath}::$pfile package for Tcl"
        puts "    -------------------------------------\n"
        puts "Copyright (c) 2020  Dr. Detlef Groth, E-mail: detlef(at)dgroth(dot)de\n"
        puts "License: MIT - License see manual page"
        puts "\nThe ${dpath}::$pfile package provides a text editor widget with syntax hilighting facilities and and toolbar"
        puts ""
        puts "Usage: [info nameofexe] [info script] option\n"
        puts "    Valid options are:\n"
        puts "        --help    : printing out this help page"
        puts "        --demo    : runs a small demo application."
        puts "        --code    : shows the demo code."
        puts "        --test    : running some test code"
        puts "        --license : printing the license to the terminal"
        puts "        --install : install ${dpath}::$pfile as Tcl module"        
        puts "        --man     : printing the man page in pandoc markdown to the terminal"
        puts "        --markdown: printing the man page in simple markdown to the terminal"
        puts "        --html    : printing the man page in html code to the terminal"
        puts "                    if the Markdown package from tcllib is available"
        puts ""
    }
    return
    proc fbrowse {path args} {
        set fb [dgw::tvtooltip [dgw::tvksearch [dgw::tvfilebrowser [dgw::tvband [ttk::treeview $path]] {*}$args]]]
        return $fb
    }
    # Example code
    
    set fb [dgw::tvsortable [dgw::tvksearch [dgw::tvfilebrowser [dgw::tvband [ttk::treeview .fp]] -directory . -fileimage fileImg]] -sorttypes [list Name directory Size dictionary  Modified dictionary]]
    pack $fb -side top -fill both -expand yes
    #set fb2 [dgw::tvfilebrowser [ttk::treeview .fp2] -directory . -fileimage movie -filepattern {\.(3gp|mp4|avi|mkv|mp3|ogg)$}]
    set fb2 [fbrowse .fp2]
    #pack $fb2 -side top -fill both -expand yes
    #pack [::ttk::label .msg -font "Times 12 bold" -textvariable ::msg -width 20 \
    #      -background salmon -borderwidth 2 -relief ridge] -side top -fill x -expand false -ipadx 5 -ipady 4
    bind $fb2 <<RowEnter>> { set ::msg "  Entering row %d"}
    bind $fb2 <<RowLeave>> { set ::msg "  Leaving row %d"}
    set headers {Year Games AB Runs Code}
    set data {
        {1939 149 565 131 A1}
        {1940 144 561 134 B2}
        {1941 143 456 135 Z2}
        {1942 150 522 141 K3}
        {1946 150 514 142 D4}
        {1947 156 528 125 AA}
        {1948 137 509 124 BB}
        {1949 155 566 150 CB}
        {1950 89  334 82  D3}
        {1951 148 531 109 K4}
        {1952 6   10  2   XY}
        {1953 37  91  17  P1}
        {1954 117 386 93  L3}
        {1955 98  320 77  ZZ}
        {1956 136 400 71  XX}
        {1957 132 420 96  K5}
        {1958 129 411 81  C6}
        {1959 103 272 32  A7}
        {1960 113 310 56  HJ}
    }
    pack [dgw::tvsortable \
          [dgw::tvband \
           [ttk::treeview .tv3 -columns $headers -show headings]] \
          -sorttypes [list Code dictionary]] -side top -fill both -expand yes
    foreach col $headers {
        .tv3 heading $col -text $col
        .tv3 column $col -width 100

    }
    foreach row $data {
        .tv3 insert {} end -values $row
    }
}

#' ## <a name='example'>EXAMPLE</a>
#'
#' In the examples below we create first a filebrowser widget using all the widget 
#' adaptors for demonstration purposes. Therafter comes a tooltip demonstration, a tree demonstration and 
#' finally a demonstration on how to use the *dgw::mixin* command which simplifies the addition of 
#' new behaviors to our *ttk::treewidget* in a stepwise manner. The latter approach is as well nice to extend existing widgets in a more controlled manner avoiding restarts of applications during developing the widget.
#' 
#' ```
#' # wrapper function 
#' proc fbrowse {path args} {
#'      set fb [dgw::tvtooltip [dgw::tvsortable [dgw::tvksearch \
#'         [dgw::tvfilebrowser [dgw::tvband \
#'         [ttk::treeview $path]] {*}$args]] \
#'          -sorttypes [list Name directory Size real Modified dictionary]]]
#'      return $fb
#' }
#' set pw [ttk::panedwindow .pw -orient horizontal]
#' set f0 [ttk::frame $pw.f]
#' set f1 [ttk::frame $f0.f]
#' set fb [fbrowse $f1.fb]
#' pack $fb -side left -fill both -expand yes
#' pack [ttk::scrollbar $f1.yscroll -command [list $fb yview]] \
#'       -side left -fill y -expand false
#' $fb configure -yscrollcommand [list $f1.yscroll set]
#' pack $f1 -side top -fill both -expand true
#' # demo tvtooltip
#' pack [::ttk::label $f0.msg -font "Times 12 bold" -textvariable ::msg -width 20 \
#'      -background salmon -borderwidth 2 -relief ridge] \
#'      -side top -fill x -expand false -ipadx 5 -ipady 4
#' bind $fb <<RowEnter>> { set ::msg "  Entering row %d"}
#' bind $fb <<RowLeave>> { set ::msg "  Leaving row %d"}
#' 
#' $pw add $f0

#' set tree [dgw::tvtree [ttk::treeview $pw.tree -height 15 -show tree -selectmode browse] -icon folder]
#' foreach txt {first second third} {
#'    set id [$tree insert {} end -text " $txt item" -open 1]
#'    for {set i [expr {1+int(rand()*5)}]} {$i > 0} {incr i -1} {
#'        set child [$tree insert $id 0 -text " child $i"]
#'        for {set j [expr {int(rand()*3)}]} {$j > 0} {incr j -1} {
#'           $tree insert $child 0 -text " grandchild $i"
#'        }
#'    }
#' }
#' $pw add $tree
#' # another example using mixin syntax
#' set tv [ttk::treeview $pw.tv -columns "A B C" -show headings]
#' dgw::mixin $tv dgw::tvsortable
#' 
#' $tv heading A -text A
#' $tv heading B -text B
#' $tv heading C -text C
#' $pw add $tv
#' for {set i 0} {$i < 20} {incr i} { 
#'     $tv insert {} end -values [list [expr {rand()*4}] \
#'         [expr {rand()*10}] [expr {rand()*20}]] 
#' }
#' dgw::mixin $tv dgw::tvband
#' $tv configure  -bandcolors [list white ivory]
#' pack $pw -side top -fill both -expand true
#' ```
#'
#' ## <a name='install'>INSTALLATION</a>
#'
#' Installation is easy you can install and use the **__PKGNAME__** package if you have a working install of:
#'
#' - the snit package  which can be found in [tcllib - https://core.tcl-lang.org/tcllib](https://core.tcl-lang.org/tcllib)
#' 
#' For installation you copy the complete *dgw* folder into a path 
#' of your *auto_path* list of Tcl or you append the *auto_path* list with the parent dir of the *dgw* directory.
#' Alternatively you can install the package as a Tcl module by creating a file dgw/__BASENAME__-__PKGVERSION__.tm in your Tcl module path. 
#' 
#' Only if you you like to extract the HTML documentation and run the examples, 
#' you need the complete dgw package and for the HTML generation the tcllib Markdown package.
#' 
#' ## <a name='demo'>DEMO</a>
#'
#' Example code for this package in the *EXAMPLE* section can  be executed by running this file using the following command line:
#'
#' ```
#' $ wish __BASENAME__.tcl --demo
#' ```
#' 
#' Specific code examples outside of the EXAMPLE section can be executed using the string after the *demo:* prefix string in the code block for the individual code adaptors such as:
#' 
#' 
#' ```
#' $ wish __BASENAME__.tcl --demo tvband
#' ```
#'
#' The example code used for the demo in the EXAMPLE section can be seen in the terminal by using the following command line:
#'
#' ```
#' $ tclsh __BASENAME__.tcl --code
#' ```
#' #include "documentation.md"
#' 
#' ## <a name='see'>SEE ALSO</a>
#'
#' - [dgw package homepage](https://chiselapp.com/user/dgroth/repository/tclcode/index) - various useful widgets
#' - [ttk::treeview widget manual](https://www.tcl.tk/man/tcl8.6/TkCmd/ttk_treeview.htm) standard manual page for the ttk::treeview widget
#'
#'  
#' ## <a name='changes'>CHANGES</a>
#'
#' * 2020-04-10 - version 0.2 released with adaptors: *tvband*, *tvfilebrowser*, *tvksearch*, *tvsortable*, *tvtooltip*
#' * 2020-04-14 - version 0.3 released with adaptor *tvtree*, *tvedit' and command *dgw::mixin*
#'
#' ## <a name='todo'>TODO</a>
#' 
#' * tests
#' * github url
#'
#' ## <a name='authors'>AUTHORS</a>
#'
#' The **__PKGNAME__** widget was written by Detlef Groth, Schwielowsee, Germany.
#'
#' ## <a name='copyright'>Copyright</a>
#'
#' Copyright (c) 2020  Dr. Detlef Groth, E-mail: detlef(at)dgroth(dot)de
#'
# LICENSE START
#
#' #include "license.md"
#
# LICENSE END
