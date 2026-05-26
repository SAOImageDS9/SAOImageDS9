#!/usr/bin/env tclsh
##############################################################################
#
#  Created By    : Dr. Detlef Groth
#  Created       : Thu Aug 12 12:00:00 2021
#  Last Modified : <210930.0539>
#
#  Description	
#
#  Notes
#
#  History
#	
##############################################################################
#
#  Copyright (c) 2021 Dr. Detlef Groth.
# 
##############################################################################
#' ---
#' documentclass: scrartcl
#' title: dgw::txmixins __PKGVERSION__
#' author: Detlef Groth, Schwielowsee, Germany
#' ---
#' 
#' ## NAME
#'
#' **dgw::txmixins** - implementations of extensions for the *text* 
#'         widget which can be added dynamically using chaining of commands 
#'         at widget creation or using the *dgw::txmixin* command after widget 
#'         creation.
#'
#' ## <a name='toc'></a>TABLE OF CONTENTS
#' 
#'  - [SYNOPSIS](#synopsis)
#'  - [DESCRIPTION](#description)
#'  - [WIDGET COMMANDS](#commands)
#'     - [dgw::txmixin](#txmixin) - method to add one mixin widgetadaptor to text widget after widget creation
#'     - [dgw::txlipsum](#txlipsum) - method to generate simple lipsum text
#'  - [WIDGET ADAPTORS](#adapters)
#'     - [dgw::txautorep](#txautorep) - adapter to generate short abbreviations snippets invoked after closing parenthesis
#'     - [dgw::txblocksel](#txblocksel) - adaptor rectangular text selection in the text widget
#'     - [dgw::txfileproc](#txfileproc) - adaptor which implements the typical file commands for the text widget, fileOpen, fileSave etc.
#'     - [dgw::txfold](#txfold) - adaptor for a folding text editor
#'     - [dgw::txhighlight](#txhighlight) - adaptor for text widget supporting syntax highlighting
#'     - [dgw::txindent](#txindent) - adaptor to keep indentation of previous line
#'     - [dgw::txpopup](#txpopup) - adaptor for typical right click popup implementation
#'     - [dgw::txrotext](#txrotext) - adaptor for a read only text widget
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
#' package require dgw::txmixins
#' ::dgw::txmixin pathName widgetAdaptor ?options?
#' ::dgw::txfold [tk::text pathName ?options?] ?options?
#' set txt [tk::text pathName ?options?]
#' dgw::txmixin $txt dgw::txfold ?options?
#' ```
#'
#' ## <a name='description'>DESCRIPTION</a>
#' 
#' The package **dgw::txmixins** implements several *snit::widgetadaptor*s which 
#' extend the standard *tk::text* widget with different functionalities.
#' Different adaptors can be chained together to add the required functionalities. 
#' Furthermore at any later time point using the *dgw::txmixin* command other adaptors can be installed on the widget.
#'
#' ## <a name='commands'>WIDGET COMMANDS</a>
#'
package require Tk
package require snit

namespace eval ::dgw {
    variable vlipsum
    set vlipsum "    Lorem ipsum dolor sit amet, consectetur adipiscing elit,
 sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.
 Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi 
 ut aliquip ex ea commodo consequat. 
 Duis aute irure dolor in reprehenderit in voluptate velit esse cillum 
 dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat 
 non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.\n
"
    catch {
        font create headerfont -family Monaco -size 16
    }
    catch {
        font create headerfont -family Consolas -size 16
    }
} 
package provide dgw::txmixins 0.2.0

# dgw::txmixin docu { 
#'
#' <a name="txmixin">**dgw::txmixin**</a> *pathName mixinWidget ?-option value ...?*
#' 
#' Adds the properties and methods of a snit::widgetadaptor specified with *mixinWidget* 
#' to the exising widget created before with the given *pathName* and configures the widget 
#' using the given *options*. 
#' 
#' Example:
#'
#' > ```
#' # demo: mixin
#' # standard text widget
#' set text [tk::text .txt]
#' pack $text -side top -fill both -expand true
#' dgw::txmixin $text dgw::txfold
#' # fill the widget
#' $text insert end "\n## Hint\n\nPress F2 or F3 and see what happend!"
#' for {set i 1} {$i < 4} {incr i} { 
#'     $text insert end "## Header $i\n\n"
#'     $text insert end [dgw::lispum 3]
#' }
#' > ```
#' 
# }

proc ::dgw::txmixin {pathName mixinWidget args} {
    return [$mixinWidget $pathName {*}$args]
}


# dgw::txlipsum docu {
#' 
#' <a name="txlipsum">**dgw::txlipsum**</a> *dgw::txlipsum n*
#' 
#' Returns *n* paragraphs of simple lipsum text.
#' 
#' Example:
#' 
#' > ```
#' # demo: txlipsum
#' tk::text .txt
#' .txt insert end "[dgw::txlipsum 5]"
#' .txt configure -borderwidth 10 -relief flat 
#' pack .txt -side top -fill both -expand yes -padx 5 -pady 5
#' > ```
#'
# } 

proc ::dgw::txlipsum {n} {
    variable vlipsum
    return [string repeat $vlipsum $n]
}

#' ## <a name='adapters'>WIDGET ADAPTERS</a>
#'

# dgw::txautorep docu { 
#' 
#' <a name="txautorep">**dgw::txautorep**</a> *[tk::text pathName] ?-option value ...?*
#' 
#' Creates and configures the *dgw::txautorep*  widget using the Tk window id _pathName_ and 
#' the given *options*. All options are delegated to the standard text widget. 
#' Based on code in the Wiki page https://wiki.tcl-lang.org/page/autoreplace started by Richard Suchenwirth in 2008.
#'
#' The following option is available:
#'
#' > - *-automap* *list*  - list of abbreviations and their replacement, the abbreviations must end with a closing 
#'     parenthesis such as [list DG) {Detlef Groth}].
#' 
#' Example:
#' 
#' > ```
#' # demo: txautorep
#' dgw::txautorep [tk::text .txt] -automap [list (TM) \u2122 (C) \
#'      \u00A9 (R) \u00AE (K) \u2654 D) {D Groth} \
#'      (DG) {Detlef Groth, University of Potsdam}]
#' .txt insert end "type a few abbreviations like (TM), (C), (R) or (K) ..."
#' pack .txt -side top -fill both -expand yes
#' > ```
#'
#' TODO: Take abbreviations from file
#' 
#' 
# } 

::snit::widgetadaptor ::dgw::txautorep {
    delegate option * to hull 
    delegate method * to hull
    option -automap [list (DG) {Detlef Groth\nUniversity of Potsdam}]
    constructor {args} {
        installhull $win
        $self configurelist $args ;#(
        bind $win <KeyRelease-)> [mymethod autochange]
    }
     method autochange {} {
        set w $win
        foreach {abbrev value} $options(-automap) {
            set n [string length $abbrev]
            if {[$w get "insert-$n chars" insert] eq $abbrev} {
                $w delete "insert-$n chars" insert
                $w insert insert $value
                break
            }
        }
    }
}

# dgw::txblocksel docu { 
#' 
#' <a name="txblocksel">**dgw::txblocksel**</a> *[tk::text pathName] ?-option value ...?*
#' 
#' Creates and configures the *dgw::txblocksel*  widget using the Tk window id _pathName_ and 
#'   the given *options*. The text widget supports the block selection of text using 
#'   The Control-key together with left mouse down and movement for selecting the text.
#' 
#' So the steps are:
#' 
#'  * Control-ButtonPress-1 to activate block selection
#'  * Control-Button1-Motion to modify (increase/decrease) the selection
#'  * Control-x to cut selection, Control-c to copy selection to clipboard
#' 
#' The widget adaptor code is just an adaption from the Wiki code written by Martin Eder here:
#' [Simple Block Selection for Text Widget](https://wiki.tcl-lang.org/page/Simple+Block+Selection+for+Text+Widget).
#' 
#' The widget adaptor currently has no options and public methods which should be used. 
#' The code is however a good example on how to port namespace based widget code into
#' a snit widgetadaptor using snit procedures only.
#' 
#' Example:
#' 
#' > ```
#' # demo: txblocksel
#' dgw::txblocksel [tk::text .txt -undo true]
#' .txt insert end "\nHint:\n\n* Press Ctrl-Button-1 and then, by holding move the mouse\n"
#' .txt insert end "to the bottom right.\n* For copy and paste use Control-c and Control-v."
#' .txt tag configure hint -foreground #1166ff
#' .txt tag add hint 1.0 6.end
#' .txt insert end "\n\nBlock selection!\n\n"
#' foreach col [list A B C] { 
#'    .txt insert end "# Header $col\n\nSome text\n\n"
#'    .txt insert end [dgw::txlipsum 2]
#'    .txt insert end "\n\n"
#' }
#' .txt configure -borderwidth 10 -relief flat 
#' pack .txt -side top -fill both -expand yes -padx 5 -pady 5
#' > ```
#'
# https://wiki.tcl-lang.org/page/Simple+Block+Selection+for+Text+Widget
# }

snit::widgetadaptor  dgw::txblocksel {
    delegate option * to hull
    delegate method * to hull
    variable spos
    constructor {args} {
        installhull $win
        $self configurelist $args
        bind Text <Control-ButtonPress-1> [list [myproc mouse_down] %W %x %y]
        bind Text <Control-Button1-Motion> [list [myproc block_sel] %W %x %y]
        bind Text <Control-Key-x> [list [myproc copy_blocksel] .txt 1]
        bind Text <Control-Key-c> [list [myproc copy_blocksel] .txt 0]
    }
    proc block_sel {wid x y} {
        $wid tag remove sel 0.0 end
        set fpos [split [$wid index "@$x,$y"] "."]
        for {set sl [lindex $::spos 0]} {$sl <= [lindex $fpos 0]} {incr sl} {
            $wid tag add sel "$sl.[lindex $::spos 1]" "$sl.[lindex $fpos 1]"
        }
    }
    proc mouse_down {wid x y} {
        $wid mark set insert "@$x,$y"
        $wid tag remove sel 0.0 end
        set ::spos [split [$wid index insert] "."]
    }
    proc copy_blocksel {txt {cutit 0}} {
        set starttag [$txt index end]
        set mseltxt ""
        
        while {[set curmtag [$txt tag prevrange sel $starttag]] != ""} {
            set msta [lindex $curmtag 0]
            set msto [lindex $curmtag 1]
            set mseltxt "[$txt get $msta $msto]\n$mseltxt"
            if {$cutit == 1} {$txt delete $msta $msto}
            set starttag [lindex $curmtag 0]
        }
        if {$mseltxt != ""} {
            clipboard clear
            clipboard append -- $mseltxt
        }
    }
    
}

# dgw::txfileproc docu { 
#' <a name="txfileproc">**dgw::txfileproc**</a> *[tk::text pathName] ?-option value ...?*
#' 
#' Creates and configures the *dgw::txfileproc*  widget using the Tk window id _pathName_ and 
#'   the given *options*. The text widget supports the typical file actions, so fileNew, fileOpen, fileSave, fileSaveAs and fileExit with checks 
#'   for file modifications. It comes with a set of default bindings which can be disabled quite easily, see below for an example.
#'
#' The following options are available:
#'
#' > - *-openkey* *sequence* - the key sequence to open the file open dialog, can be inactivated by supplying an empty string, default: *Control-o*
#'   - *-savekey* *sequence* - the key sequence to save the current file or the file save as dialog if there is currently no file opened, can be inactivated by supplying an empty string, default: *Control-s*
#'   - *-newkey*  *sequence* - the key sequence to create an empty new file with checking for modified text, can be inactivated by supplying an empty string, default: *Control-n*
#'   - *-quitkey* *sequence* - the key sequence to close the application with checking for modified text, can be inactivated by supplying an empty string, default: "Control-q"
#'   - *-filecallback* *proc* - a callback to be executed if a file action like fileSave etc is performed, the Tcl procedure must take two arguments, first the action, second the filename, see below for an example, default: empty string, so no callback.
#'   - *-filetypes* *list* - the filetypes to be used for the file dialogs, defaults to Text (\*.txt), Tcl  (\*.tcl, \*.tm), Markdown (\*.md, \*.rmd) and any (\*.\*) files.
#'   - *-initdir* *directory* - the initial starting dir for the first file dialog, subsequent file dialogs will use the directory for the last opened files.
#' 
#' The following public methods are available:
#' 
#' > - *getFile* - get the currently loaded file, if no file is loaded yet returns \*new\*
#'   - *fileNew* - creates a new empty file named \*new\*
#'   - *fileSave* - saves the currently opened file, if it is a new file, fileSaveAs will be called
#'   - *fileSaveAs* - calls the file save dialog to save the current text in a new file
#'   - *fileOpen ?filename?* - will open the given filename or if no filename is given opens the file dialog to select a file.
#'   - *fileExit* - checks for text modifications and will then quit the application
#'   - *fileRecent* - returns the last recent opened files with the last file as first element
#' 
#' The following events are implemented by this widget adaptor:
#' 
#' > - <<FileChanged\>\> if a new file is opened or the save-as option is called.
#'   - <<FileSaved\>\> if the current file is saved
#' 
#' Example:
#' 
#' > ```
#' # demo: txfileproc
#' dgw::txfileproc [tk::text .txt -undo true] -openkey "" ;# disable Control-o rebind it below
#' .txt insert end "\nHint\n\nPress ctrl-o, control-n, control-s\n and see the"
#' .txt insert end "standard file dialogs!\n\n"
#' foreach col [list A B C] { 
#'    .txt insert  end "# Header $col\n\nSome text\n\n"
#'    .txt insert end [dgw::txlipsum 2]
#'    .txt insert end "\n\n"
#' }
#' .txt configure -borderwidth 10 -relief flat 
#' .txt configure -filecallback callback
#' pack .txt -side top -fill both -expand yes -padx 5 -pady 5
#' pack [label .label -text ""] -side top -fill x -expand false -padx 5 -pady 5
#' bind .txt <Enter> { focus -force .txt }
#' bind .txt <Control-k><Control-x> [list .txt fileExit]
#' bind .txt <Control-k><Control-o> [list .txt fileOpen]
#' dgw::txmixin .txt dgw::txpopup ;# right click popup
#' proc callback {type filename} {
#'    .label configure -text "Done: $type with [file tail $filename]"
#'    puts [.txt fileRecent]
#' }
#' proc eventMessage {w} {
#'    puts "currentFile [$w getFile]"
#' }
#' bind .txt <<FileChanged>> [list eventMessage %W]
#'
#' > ```
#'
# }

snit::widgetadaptor dgw::txfileproc {
    delegate option * to hull 
    delegate method * to hull
    option -openkey Control-o
    option -newkey Control-n
    option -savekey Control-s
    option -quitkey Control-q    
    option -filetypes {
        {{Text Files}      {.txt} }
        {{Tcl Files}       {.tcl .tm} }        
        {{Markdown Files}  {.md .Rmd} }
        {{All Files}       *      }
    }
    option -initdir ""
    variable lastfile "*new*"
    variable lastdir "."
    variable info ""
    variable lastfiles [list]
    option -filecallback ""
    constructor {args} {
        installhull $win
        $self configurelist $args
        #bind $win  <$options(-openkey)> break
        if {$options(-newkey) ne ""} {
            bind $win  <$options(-newkey)> "[mymethod fileNew] ; break "
        }
        if {$options(-savekey) ne ""} {
            bind $win  <$options(-savekey)> "[mymethod fileSave]; break "
        }
        if {$options(-openkey) ne ""} {
            bind $win  <$options(-openkey)> "[mymethod fileOpen];  break"
        }
        if {$options(-quitkey) ne ""} {
            bind $win  <$options(-quitkey)> "[mymethod fileExit];  break"
        }
        if {$options(-initdir) ne ""} {
            set lastdir $options(-initdir)
        }
    }
    method getFile {} {
        return $lastfile
    }
    method fileNew {} {
        if {[$win edit modified]} {
            set answer [tk_messageBox -title "File modified!" -message "Do you want to save changes?" -type yesnocancel -icon question]
            switch -- $answer  {
                yes  {
                    $self fileSave
                }
                cancel { return }
            }
        } 
        $win delete 1.0 end       
        set lastfile "*new*"
        if {$options(-filecallback) ne ""} {
            eval $options(-filecallback) new $lastfile
        }
        event generate $win <<FileChanged>>
        return "*new*"
    }
    method fileOpen {{filename ""}} {
        if {[$win edit modified]} {
            set answer [tk_messageBox -title "File modified!" -message "Do you want to save changes?" -type yesnocancel -icon question]
            switch -- $answer  {
                yes  {
                    $self fileSave
                }
                cancel { return }
            }
        } 
        if {$filename eq ""} {
            set filename [tk_getOpenFile -filetypes $options(-filetypes) -initialdir $lastdir]
            
        }
        if {$filename ne ""} {
            if [catch {open $filename r} infh] {
                tk_messageBox -title "Info!" -icon info -message "Cannot open $filename: $infh" -type ok
            } else {
                $win delete 1.0 end
                while {[gets $infh line] >= 0} {
                    $win insert end "$line\n"
                }
                close $infh
                set lastfile $filename
                set lastdir [file dirname $filename]
                $win edit modified false
                if {$options(-filecallback) ne ""} {
                    eval $options(-filecallback) open $lastfile
                }
                $self PushFile
                event generate $win <<FileChanged>>
            }
        }
        return $filename
    }
    method fileSave {} {
        if {$lastfile eq "*new*"} {
            unset -nocomplain savefile
            set file [tk_getSaveFile -filetypes $options(-filetypes) \
                      -initialdir $lastdir]
        } else {
            set file $lastfile
        }
        if {$file != ""} {
            set out [open $file w 0600]
            puts $out [$win get 1.0 end]
            close $out
            set lastfile $file
            set lastdir [file dirname $lastfile]
            $win edit modified false
            if {$options(-filecallback) ne ""} {
                eval $options(-filecallback) save $lastfile
            }
            $self PushFile
            event generate $win <<FileSaved>> 
        }
        return $file
    }
    method fileSaveAs {} {
        unset -nocomplain savefile
        set filename [tk_getSaveFile -filetypes $options(-filetypes) -initialdir $lastdir]
        if {$filename != ""} {
            set out [open $filename w 0600]
            puts $out [$text get 1.0 end]
            close $out
            set lastfile $filename
            set lastdir [file dirname $file]
            $win edit modified false
            if {$options(-filecallback) ne ""} {
                eval $options(-filecallback) saveas $lastfile
            }
            $self PushFile
            event generate $win <<FileChanged>>
            event generate $win <<FileSaved>>
        }
        return $filename
    }
    method fileExit {} {
        if {[$win edit modified]} {
            set answer [tk_messageBox -title "File modified!" -message "Do you want to save changes?" -type yesnocancel -icon question]
            switch -- $answer  {
                yes  {
                    $self fileSave
                }
                cancel { return }
            }
        } 
        exit 0
    }
    method fileRecent {} {
        set t {}
        foreach i $lastfiles {if {[lsearch -exact $t $i]==-1} {lappend t $i}}
        set lastfiles $t
        return $t
    }
    method PushFile {} {
        set lastfiles [linsert $lastfiles 0 $lastfile]
    }

}
#' 
#' <a name="txfold">**dgw::txfold**</a> *[tk::text pathName] ?-option value ...?*
#' 
#' Creates and configures the *dgw::txfold*  widget using the Tk window id _pathName_ and 
#'   the given *options*. The widgets supports text folding based on linestart regular expressions usually which allows fast navigation of larger
#'   documents by hiding and showing larger chunks of text within the folding marks.
#'
#' The following options are available:
#'
#' > - *-foldkey* *sequence*  - the key sequence fold or unfold regions where the insert cursor is within, default: F2
#'   - *-foldallkey* *sequence* - the key sequence to fold/unfold the complete text, default: F3
#'   - *-foldstart* *regex* - the start folding marker, default is Markdown header folding using the '#' at the beginning, default: "^#"
#'   - *-foldend* *regex* - the end fold marker, where the folding ends, if the end marker is the same as the start marker folding is ended in the line before the end line, otherwise on the end line, default: "^#"
#' 
#' The following widget tags are created and can be modified at runtime:
#' 
#' > - *fold* - the folding line which remains visible, usually the background should be configured only, default is `#ffbbaa` a light salmon like color
#'   - *folded* - the hidden (-elide true) part which is invisible, usually not required to change it, as it is hidden
#' 
#' Example:
#' 
#' > ```
#' # demo: txfold
#' dgw::txfold [tk::text .txt]
#' foreach col [list A B C] { 
#'    .txt insert  end "# Header $col\n\nSome text\n\n"
#' }
#' .txt insert end "Place the cursor on the header lines and press F2\n"
#' .txt insert end "or press F3 to fold or unfold the complete text.\n"
#' .txt tag configure fold -background #cceeff
#' .txt configure -borderwidth 10 -relief flat
#' pack .txt -side top -fill both -expand yes
#' # next line would fold by double click (although I like F2 more ...)
#' # .txt configure -foldkey Double-1 
#' bind .txt <Enter> { focus -force .txt }
#' > ```
#' 
#' TODO: add Tcl fold example

# widget adaptor which does a folding text
snit::widgetadaptor ::dgw::txfold {
    delegate option * to hull 
    delegate method * to hull
    option -foldkey F2
    option -foldall F3
    option -foldstart "^#"
    option -foldend "^#"
    # problem:
    # can't avoid delegating insert as if it is 
    # overwritten parent insert can't be called
    # solved by adding trace executation
    # might slow down the widget
    constructor {args} {
        installhull $win
        $self configurelist $args
        set fold $options(-foldkey)
        set foldall $options(-foldall)
        bind $win <$fold> [mymethod FoldCurrent]
        bind $win <$foldall> [mymethod FoldAll]        
        $win tag configure fold -background #ffbbaa
        $win tag configure folded -elide true 

    }
    method FoldAll {} {
        set text $win
        set rng [$text tag ranges fold]
        if {[llength $rng] ==0} {
            set store [$text index insert]            
            set current [$text index insert]
            set lastrng [list]
            set start 1.0
            set start [$text search -regexp -forward $options(-foldstart) 1.0]
            set start [$text index "$start + 1 line"]
            tk::TextSetCursor $text $start
            set x 1
            while {true} {
                $self FoldCurrent
                set rng [$text tag ranges folded]
                if {[llength $lastrng] == [llength $rng]} {
                    break
                }
                set current1 [lindex $rng end]
                if {$options(-foldstart) eq $options(-foldend)} {
                    set current2 [$text index "$current1 - 1 line"]
                } else {
                    set current2 [$text index "$current1"]
                }
                set current2 [$text search -regexp -forward $options(-foldstart) $current2 end]
                if {$current2 eq ""} break
                tk::TextSetCursor $text $current2
                set lastrng $rng
            }
            tk::TextSetCursor $text $store
        } else {
            $text tag remove fold 1.0 end
            $text tag remove folded 1.0 end
            $text see insert
        }
    }
    onconfigure -foldkey value {
        if {$value ne ""} {
            set fold $options(-foldkey)
            bind $win <$fold> {}
            bind $win <$value> [mymethod FoldCurrent]
            set options(-foldkey) $value
        } 
        return $options(-foldkey)
    }
    onconfigure -foldall value {
        if {$value ne ""} {
            set fold $options(-foldall)
            bind $win <$fold> {}
            bind $win <$value> [mymethod FoldAll]
            set options(-foldall) $value
        } 
        return $options(-foldall)
    }

    method FoldCurrent {} {
        set text $win
        set folds [$self getFolds]
        puts $folds
        set current [$text index insert]
        if {[lsearch [$text tag names $current] fold] > -1} {
            $text tag remove fold "$current linestart" "$current lineend + 1 char"
            $text tag remove folded "$current lineend + 1 char" "[lindex $folds 1] lineend"
        } else {
            if {[llength $folds] > 0} {
                $text tag add fold "[lindex $folds 0] linestart" "[lindex $folds 0] lineend + 1char"
                $text tag add folded "[lindex $folds 0] lineend + 1 char" "[lindex $folds 1]"
                if {[$text compare "$current linestart" != "[lindex $folds 0] linestart"]} {
                    tk::TextSetCursor $text "[lindex $folds 0] linestart"
                }
            }
        }
        return
    }
    method isInFold {} {
        set text $win
        set current [$text index insert]
        set foldOpen [$text search -all -elide -regexp -forward $options(-foldstart) 1.0 end]
        set foldEnd  [$text search -all -elide -regexp -forward $options(-foldend) 1.0 end]
        set ret [list]
        for {set i 0} {$i < [llength $foldOpen]} {incr i 1} {
            if {[$text compare [lindex $foldOpen $i] <= $current]} {
                if {[$text compare $current <= [lindex $foldEnd $i]]} {
                    set ret [list [lindex $foldOpen $i] [$text index "[lindex $foldEnd $i] + 1 line"]]
                    break
                }
            }
        }
        return $ret
    }
    method getFolds {} {
        set text $win
        set current [$text index insert]
        set foldendb [$text search -elide -regexp -backward $options(-foldend) $current 1.0]
        set foldstart [$text search -elide -regexp -backward $options(-foldstart) "$current + 1 char" 1.0]

        if {$options(-foldstart) eq $options(-foldend)} {
            set foldende [$text search -elide -regexp -forward $options(-foldend) "$current + 1 char" end]
        } else {
            set foldende [$text search -elide -regexp -forward $options(-foldend) "$current" end]
        }
        #puts "foldendb: $foldendb"
        #puts "foldende: $foldende"        
        #puts "foldstart: $foldstart"
        #puts "current: $current"
        if {$options(-foldstart) eq $options(-foldend)} {
            if {$foldstart ne "" & $foldende eq ""} {
                return [list $foldstart end]
            } else {
                return [list [$text index "$foldstart linestart"] [$text index "$foldende linestart"]]
            }
        } else {
 
            return [$self isInFold]
 
        }
    }
}
#' 
#' <a name="txhighlight">**dgw::txhighlight**</a> *[tk::text pathName] ?-option value ...?*
#' 
#' Creates and configures the *dgw::txhighlight*  widget using the Tk window id _pathName_ and 
#'   the given *options*. The widgets supports text highlighting for different file
#'   types by providing tag names and regular expressions.
#'
#' The following options are available:
#'
#' > - *-highlightcommand*  *proc* - a possible command to be used for hilighting, default: empty string, i.e. none
#'   - *-highlights* *list* - a nested list with highlights first element file type, second tag, third regular expression
#' 
#' The following widget tags are created and can be used for highlighting and can be as well
#' as well configured by the user to change the appearance
#' 
#' > - *header, comment, highlight, keyword, operator, string, package, class, method, proc*
#' 
#' Example:
#' 

#' ```
#' # demo: txhighlight
#' package require dgw::txmixins
#' text .top -borderwidth 5 -relief flat -font "Helvetica 14"
#' dgw::txmixin .top dgw::txhighlight
#' .top configure   -highlights {{md header ^#.+}    
#'                  {md comment ^>.+} 
#'                  {md keyword _{1,2}[^_]+_{1,2}}  
#'                  {md string {"[^"]+"}}}
#' pack .top -side top -fill both -expand true ;#"  
#' # TODO: txfileproc .top configure -filetypes {{Markdown Files}  {.md}}
#'
#' # configure for Markdown highlight
#' .top configure   -highlights {{md header ^#.+}    
#'                  {md comment ^>.+} 
#'                  {md keyword _{1,2}[^_]+_{1,2}}  
#'                  {md string {"[^"]+"}}}
#' .top configure -mode md
#' # create sample Markdown text and insert it
#' .top insert end "# Header example\n"
#' .top insert end "_keyword_ example\n"
#' .top insert end "Some not highlighted text\n"
#' .top insert end "> some markdown quote text\n"
#' .top insert end "## Subheader\n"
#' .top insert end "Some more standard text with two \"strings\" which are \"inside!\"" 
#' .top insert end "\n\n## Tcl\n\nTcl be with you!\n\n## EOF\n\nThe End\n"
#' .top insert 3.0 "\nSome text\nSome more text"
#' update
#' after 2000
#' update
#' after 2000
#' # switch to SQL highlight which is embedded per default
#' .top delete 1.0 end
#' .top configure -mode sql
#' .top insert end "select * from temp limit 10;\n -- a comment in SQL\n drop table temp;\n"
#' ```
#' 

snit::widgetadaptor dgw::txhighlight {
    delegate option * to hull
    delegate method * to hull
    option -highlightcommand ""
    option -highlights [list {tcl highlight "^(itcl|oo|snit)::\[a-zA-Z0-9 \]+"} \
                            {tcl highlight "^ *(method|constructor|typeconstructor|destructor|typedestructor|proc) *\[a-zA-Z0-9 \]+"} \
                            {tcl package "^ *(package|source).+"} \
                            {tcl comment "^ *#.*"} \
                            {tcl comment " ;#.+"} \
                            {txt package "^!+.+"} \
                            {txt comment "^ *.+\$"} \
                            {sql string  {".+?"}} \
                            {sql highlight {\m(asc|all|attach|begin|between|by|commit|create|database|desc|detach|distinct|drop|except|exists|filter|from|full|glob|group|having|if|in|index|inner|insert|intersect|into|is|isnull|join|like|limit|match|natural|not|notnull|on|or|order|order|outer|pragma|primary|range|regexp|right|select|table|temp|transaction|trigger|union|unique|update|using|view|where|with|without)\M}} \
                            {sql comment "^ *--.+\$"} \
                            ] 
    option -mode ""
    variable lastfile ""
    variable lastmode ""
    variable modified false
    variable tags [list header comment highlight string package class method proc operator]
    variable id -1
    variable textw
    constructor {args} {
        installhull $win
        set textw $win
        $self configurelist $args
        $textw tag configure header -underline 1 -foreground "dark blue"
        $textw tag configure highlight -foreground blue
        $textw tag configure keyword -foreground blue
        $textw tag configure operator -foreground blue        
        $textw tag configure string -foreground magenta
        $textw tag configure package -foreground "#aa6633"        
        $textw tag configure class -foreground "#33cc99"        
        $textw tag configure method -foreground "#33aa88"        
        $textw tag configure proc -foreground "#33aa88"        
        $textw tag configure comment -underline 0 -foreground "#999999"
        bind $win <KeyPress> [mymethod Keypress %K]
        #trace add execution $textw enter [mymethod textenter]        
        trace add execution $textw leave [mymethod textleave]
    }
    method textleave {args} {
        if {[lindex $args 0 1] eq "insert"} {
            #puts "current: [[lindex $args 0 0] index end]"
            if {$id == -1} {
                set id 0
                after 1000 [mymethod updateHighlight]
            }   
        }
    }   
    method updateHighlight {} {
        if {$options(-mode) ne ""} {
            $self doHilights $options(-mode)
            update
        }   
        set id -1
    }   
    #method textleave {args} {
    #    if {[lindex $args 0 1] eq "insert"} {
    #        puts "$args"
    #    }
    #
    #}
    #    method insert {args} {
    #            $textw insert {*}$args
    #            $self GuiTextChanged 
    #    }
    #    method delete {args} {
    #        $textw delete {*}$args
    #        $self GuiTextChanged
    #    }
    onconfigure -highlights value {
        set m [lindex [lindex $value 0] 0]
        #puts $m 
        # remove old highlight for this file type $m
        set idx [lsearch -index 0 -all -not $options(-highlights) $m]
        set options(-highlights) [lmap a $idx { lindex $options(-highlights) $a } ]
        # add new highlights
        foreach val $value {
            lappend options(-highlights) $val
        }   
    }
    method addHilights {value} {
        foreach val $value {
            lappend options(-highlights) $val
        }   
    }
    method ForText {w args} {

        # initialize search command; we may add to it, depending on the
        # arguments passed in...
        set searchCommand [list $w search -count count]
        
        # Poor man's switch detection
        set i 0
        while {[string match {-*} [set arg [lindex $args $i]]]} {
            
            if {[string match $arg* -regexp]} {
                lappend searchCommand -regexp
                incr i
            } elseif {[string match $arg* -elide]} {
                lappend searchCommand  -elide
                incr i
            } elseif {[string match $arg* -nocase]} {
                lappend searchCommand  -nocase
                incr i
            } elseif {[string match $arg* -exact]} {
                lappend searchCommand  -exact
                incr i
            } elseif {[string compare $arg --] == 0} {
                incr i
                break
            } else {
                return -code error "bad switch \"$arg\": must be\
                --, -elide, -exact, -nocase or -regexp"
            }
        }
        
        # parse remaining arguments, and finish building search command
        foreach {pattern start end script} [lrange $args $i end] {break}
        lappend searchCommand $pattern matchEnd searchLimit
        
        # make sure these are of the canonical form
        set start [$w index $start]
        set end [$w index $end]
        
        # place marks in the text to keep track of where we've been
        # and where we're going
        $w mark set matchStart $start
        $w mark set matchEnd $start
        $w mark set searchLimit $end
        
        # default gravity is right, but we're setting it here just to
        # be pedantic. It's critical that matchStart and matchEnd have
        # left and right gravity, respectively, so that any text inserted
        # by the caller duing the search won't normally (*) cause an infinite
        # loop. 
        # (*) If the script inserts text after the matchEnd mark, and the
        # text that was added matches the pattern, madness will ensue.
        $w mark gravity searchLimit right
        $w mark gravity matchStart left
        $w mark gravity matchEnd right
        
        # finally, the part that does useful work. Keep running the search
        # command until we don't find anything else. Each time we find 
        # something, adjust the marks and execute the script
        while {1} {
            set cmd $searchCommand
            set index [eval $searchCommand]
            if {[string length $index] == 0} break
            
            $w mark set matchStart $index
            $w mark set matchEnd  [$w index "$index + $count c"]
            
            uplevel $script
        }
    }
    method Keypress {key} {
        if {$key eq "Return" || $key eq "space" || ![regexp {[a-zA-Z0-9]} $key]} {
            if {$lastmode ne ""} {
                $self doHilights $lastmode
            } else {
                $self doHilights ""
            }
        }
    }
    method doHilights {{mode tcl}} {
        if {$options(-highlightcommand) ne ""} {
            $options(-highlightcommand) $text
            return
        }
        if {$lastfile ne ""} {
            set mode [string tolower [string range [file extension $lastfile] 1 end]]
        } 
        set lastmode $mode
        set text $textw
        foreach tag [$text tag names] {
            if {[lsearch $tags $tag] != -1} {
                $text tag remove $tag 1.0 end
            }
        }
        foreach tps $options(-highlights) {
            foreach {tp tag regex} $tps {
                if {$tp eq $mode} {
                    $self ForText $text -regexp -nocase $regex 1.0 end {
                          $text tag add $tag matchStart matchEnd
                    }
                }
            }
        }
    }
    method isModified {} {
        return [$text edit modified]
    }
    

}

# dgw::txindent docu {
#'  
#' <a name="txindent">**dgw::txindent**</a> *[tk::text pathName] ?-option value ...?*
#' 
#' Creates and configures the *dgw::txindent*  widget using the Tk window id _pathName_ and 
#' the given *options*. All options are delegated to the standard text widget. 
#' The widget indents every new line based on the initial indention of the previous line.
#' Based on code in the Wiki page [https://wiki.tcl-lang.org/page/auto-indent](https://wiki.tcl-lang.org/page/auto-indent) started by Richard Suchenwirth.
#'
#' Example:
#' 
#' > ```
#' # demo: txindent
#' dgw::txindent [tk::text .txt]
#' foreach col [list A B C] { 
#'    .txt insert  end "# Header $col\n\nSome text\n\n"
#' }
#' .txt insert end "  * item 1\n  * item 2 (press return here)"
#' pack .txt -side top -fill both -expand yes
#' > ```
# }

::snit::widgetadaptor ::dgw::txindent {
    delegate option * to hull 
    delegate method * to hull
    constructor {args} {
        installhull $win
        $self configurelist $args
        bind $win <Return> "[mymethod indent]; break"
    }
    
    method indent {{extra "    "}} {
        set w $win
        set lineno [expr {int([$w index insert])}]
        set line [$w get $lineno.0 $lineno.end]
        regexp {^(\s*)} $line -> prefix
        if {[string index $line end] eq "\{"} {
            tk::TextInsert $w "\n$prefix$extra"
        } elseif {[string index $line end] eq "\}"} {
            if {[regexp {^\s+\}} $line]} {
                $w delete insert-[expr [string length $extra]+1]c insert-1c
                tk::TextInsert $w "\n[string range $prefix 0 end-[string length $extra]]"
            } else {
                tk::TextInsert $w "\n$prefix"
            }
        } else {
            tk::TextInsert $w "\n$prefix"
        }
    }
}

# dgw::txpopup docu {
#' 
#' <a name="txpopup">**dgw::txpopup**</a> *[tk::text pathName] ?-option value ...?*
#' 
#' Creates and configures the *dgw::txpopup*  widget using the Tk window id _pathName_ and 
#'   the given *options*. The text widget supports the typical right click popup operations
#'   for the text widget like undo/redo, copy, paste, delete etc.
#'   It comes with a set of default bindings which can be disabled quite easily, 
#'   see below for an example.
#'
#' The following options are available:
#'
#' > - *-redokey* *sequence* - the key sequence to redo an operation, default: *Control-y*
#'   - *-popupkey* *sequence* - the key sequence to open the popup, usually right mouse click, so default: *Button-3*
#'   - *-toolcommand*  *procname* - the name of a procedure which is called when the tool command is exectued, default emtpy string, none
#' 
#' The following public method is available:
#' 
#' > - *menu* - show the popup menu, usually the right mouse click, but the user can create additional popup keys.
#' 
#' Example:
#' 
#' > ```
#' # demo: txpopup
#' dgw::txpopup [tk::text .txt -undo true]
#' .txt insert end "\nHint\n\nPress right mouse click\n and see the"
#' .txt insert end "popup menu with context dependent active or inactive entries!\n\n"
#' foreach col [list A B C] { 
#'    .txt insert  end "# Header $col\n\nSome text\n\n"
#'    .txt insert end [dgw::txlipsum 2]
#'    .txt insert end "\n\n"
#' }
#' dgw::txmixin .txt dgw::txblocksel ;# just another mixin
#' .txt configure -borderwidth 10 -relief flat 
#' pack .txt -side top -fill both -expand yes -padx 5 -pady 5
#' bind .txt <Enter> { focus -force .txt }
#' > ```
#'
# }
snit::widgetadaptor dgw::txpopup {
    delegate option * to hull
    delegate method * to hull
    option -toolcommand ""
    constructor {args} {
        installhull $win
        $self configurelist $args
        bind $win <Button-3>   [mymethod Menu]
        bind $win <Control-y>   [mymethod TextRedo]

    }
    method Menu {} {
        catch {destroy .editormenu}
        menu .editormenu -tearoff 0
        set state disabled
        if {[$win cget -undo]} {
            if {[$win edit canundo]} {
                set state active
            }
            .editormenu add command -label "Undo" -underline 0 -state $state \
                  -command [list $self TextUndo] -accelerator Ctrl+z 
            set state disabled
            if {[$win edit canredo]} {
                set state active
            }
            
            .editormenu add command -label "Redo" -underline 0 -state $state \
                  -command [list $self TextRedo] -accelerator Ctrl+y
            .editormenu add separator
        }
        set sel [$win tag ranges sel]
        set state active
        if {$sel eq ""} {
            set state disabled
        }
        .editormenu add command -label "Cut" -underline 2 -state $state \
              -command [list tk_textCut $win] -accelerator Ctrl+x
        
        .editormenu add command -label "Copy" -underline 0 -state $state \
              -command [list tk_textCopy $win] -accelerator Ctrl+c
        .editormenu add command -label "Paste" -underline 0 \
              -command [list tk_textPaste $win] -accelerator Ctrl+v
        .editormenu add command -label "Delete" -underline 2 -state $state \
              -command [list $self DeleteText $win] -accelerator Del
        .editormenu add separator
        .editormenu add command -label "Select All" -underline 7 \
              -command [list $win tag add sel 1.0 end] -accelerator Ctrl+/
        if {$options(-toolcommand) ne ""} {
            .editormenu add separator
            $self AddTool ;#[list -toolcommand $options(-toolcommand) -accelerator $options(-accelerator) -label $options(-toollabel)]
        }
        tk_popup .editormenu [winfo pointerx .] [winfo pointery .]
    }
    method TextRedo { } {
        catch {
            $win edit redo
        }
    }
    method TextUndo { } {
        catch {
            $win edit undo
        }
    }
    method DeleteText {w} {
        set cuttexts [selection own]
        if {$cuttexts != "" } {
            catch {
                $cuttexts delete sel.first sel.last
                selection clear
            }
        }
    }
    method AddTool {} {
        puts not-yet
    }



}

# dgw::txrotext docu {
#' 
#' <a name="txrotext">**dgw::txrotext**</a> *[tk::text pathName] ?-option value ...?*
#' 
#' Creates and configures the *dgw::txrotext*  widget using the Tk window id _pathName_ and 
#' the given *options*. All options are delegated to the standard text widget. 
#' This creates a readonly text widget.
#' Based on code from the snitfaq by  William H. Duquette.
#' 
#' Methods: instead of *insert* and *delete* you have to use the methods *ins* and *del*
#'
#' Example:
#' 
#' > ```
#' # demo: txrotext
#' dgw::txrotext [tk::text .txt]
#' foreach col [list A B C] { 
#'    .txt ins  end "# Header $col\n\nSome text\n\n"
#' }
#' pack .txt -side top -fill both -expand yes
#' > ```
# }

::snit::widgetadaptor ::dgw::txrotext {
    delegate option * to hull 
    delegate method * to hull
    constructor {args} {
        installhull $win
        $self configure -insertwidth 0
        $self configurelist $args
    }

    # Disable the text widget's insert and delete methods, to
    # make this readonly.
    method insert {args} {}
    method delete {args} {}

    # Enable ins and del as synonyms, so the program can insert and
    # delete.
    delegate method ins to hull as insert
    delegate method del to hull as delete
}


# More ideas:
# https://wiki.tcl-lang.org/page/File+watch
# https://wiki.tcl-lang.org/page/Simple+Block+Selection+for+Text+Widget
# https://wiki.tcl-lang.org/page/block%2Dselect
# https://wiki.tcl-lang.org/page/Simple+Text+Widget+Sort
# https://wiki.tcl-lang.org/page/A+little+logic+notation+editor
# https://wiki.tcl-lang.org/page/Text+Drag+%2DDrag+and+Drop+for+Text+Widget+Selections
# https://wiki.tcl-lang.org/page/text+line+coloring
# https://wiki.tcl-lang.org/page/Displaying+tables
# https://wiki.tcl-lang.org/page/Time%2Dstamp
# https://wiki.tcl-lang.org/page/Balloon+Help%2C+Generalised
# https://wiki.tcl-lang.org/page/Super+and+Subscripts+in+a+text+widget
namespace eval dgw {
    namespace export txmixin txfold txrotext txindent
}

if {[info exists argv0] && $argv0 eq [info script] && [regexp {txmixins} $argv0]} {
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
            puts "running [lindex $argv 1]"
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
        puts "Copyright (c) 2021  Dr. Detlef Groth, E-mail: detlef(at)dgroth(dot)de\n"
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
}

#' ## <a name='example'>EXAMPLE</a>
#'
#' In the examples below we create a foldable text widget which can fold Markdown headers.
#' Just press the button F2 and F3 to fold or unfold regions or the complete text.
#' Thereafter a demonstration on how to use the *dgw::txmixin* command which simplifies the addition of 
#' new behaviors to our *tk::text* in a stepwise manner. 
#' The latter approach is as well nice to extend existing widgets in a more controlled manner 
#' avoiding restarts of applications during developing the widget.
#' 
#' ```
#' package require dgw::txmixins
#' # standard text widget
#' set f [ttk::frame .f]
#' set text [tk::text .f.txt -borderwidth 5 -relief flat]
#' pack $text -side left -fill both -expand true 
#' dgw::txmixin $text dgw::txfold
#' # fill the widget
#' for {set i 0} {$i < 5} {incr i} { 
#'     $text insert end "## Header $i\n\n"
#'     for {set j 0} {$j < 2} {incr j} {
#'       $text insert end "Lorem ipsum dolor sit amet, consetetur sadipscing elitr,\n"
#'       $text insert end "sed diam nonumy eirmod tempor invidunt ut labore et dolore magna aliquyam erat,\n" 
#'       $text insert end "sed diam voluptua. \nAt vero eos et accusam et justo duo dolores et ea rebum.\n"
#'       $text insert end "Stet clita kasd gubergren, no sea takimata sanctus est Lorem ipsum dolor sit amet.\n\n" 
#'     }
#' }
#' set tcltxt [tk::text .f.tcl -borderwidth 5 -relief flat]
#' dgw::txmixin $tcltxt dgw::txfold -foldstart "^\[A-Za-z\].+\{" -foldend "^\}"
#' $tcltxt tag configure fold -background #aaccff
#' $tcltxt insert end "package require Tk\nproc test {} {\n    puts Hi\n}\n\nsnit::widget wid {\n\n}\n"
#' pack $tcltxt -side left -fill both -expand true
#' pack $f -side top -fill both -expand yes
#' set f2 [ttk::frame .f2]
#' dgw::txrotext [tk::text $f2.rotxt]
#' foreach col [list A B C] { 
#'    $f2.rotxt ins  end "# Header $col\n\nSome text\n\n"
#' }
#' pack $f2.rotxt -side left -fill both -expand yes
#' dgw::txindent [tk::text $f2.intxt]
#' dgw::txmixin $f2.intxt dgw::txfold
#' $f2.intxt insert end "# Header 1\n\n* item\n    * subitem 1\n    * subitem2"
#' $f2.intxt insert end "# Header 2\n\n* item\n    * subitem 1\n    * subitem2"
#' $f2.intxt insert 5.0 "\n" ;  $f2.intxt tag add line 5.0 6.0 ; 
#' $f2.intxt tag configure line -background black -font "Arial 1" 
#' pack $f2.intxt -side left -fill both -expand yes
#' pack $f2 -side top -fill both -expand yes
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
#' Example code for this package in the *EXAMPLE* section can  be executed, 
#' if you have the complete dgw package installed, by running this file using 
#' the following command line:
#'
#' ```
#' $ wish __BASENAME__.tcl --demo
#' ```
#' 
#' Specific code examples outside of the EXAMPLE section can be executed using 
#' the string after the *demo:* prefix string in the code block for the individual code adaptors such as:
#' 
#' 
#' ```
#' $ wish __BASENAME__.tcl --demo txfold
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
#' - [tk::text widget manual](https://www.tcl.tk/man/tcl8.6/TkCmd/ttk_treeview.htm) standard manual page for the ttk::treeview widget
#'
#'  
#' ## <a name='changes'>CHANGES</a>
#'
#' * 2021-08-12 - version 0.1 initial starting the widget.
#' * 2021-08-19 
#'     * completing docu
#'     * finalize txfold
#'     * adding txrotext, txindent, txautorep
#' * 2021-09-29 - version 0.2.0
#'     * txfileproc - file procedures, fileOpen, fileNew, ... fileExit
#'     * txpopup - right click popup
#'     * txblocksel - block selection 
#'     * txlipsum - lispum code generator
#'     * txhighlight - syntax highlighter
#'
#' ## <a name='todo'>TODO</a>
#' 
#' * Syntax hilighter (done)
#' * switch folding by switching file
#' * File watch: https://wiki.tcl-lang.org/page/File+watch (done)
#' * Block selection: https://wiki.tcl-lang.org/page/Simple+Block+Selection+for+Text+Widget (done)
#' * Text sorting: https://wiki.tcl-lang.org/page/Simple+Text+Widget+Sort
#' * Logic notation https://wiki.tcl-lang.org/page/A+little+logic+notation+editor
#' * Drag and drop of text: https://wiki.tcl-lang.org/page/Text+Drag+%2DDrag+and+Drop+for+Text+Widget+Selections
#' * text line coloring https://wiki.tcl-lang.org/page/text+line+coloring
#' * table display https://wiki.tcl-lang.org/page/Displaying+tables
#' * time stamp https://wiki.tcl-lang.org/page/Time%2Dstamp
#' * balloon help https://wiki.tcl-lang.org/page/Balloon+Help%2C+Generalised
#' * sub and superscripts https://wiki.tcl-lang.org/page/Super+and+Subscripts+in+a+text+widget
#'
#' ## <a name='authors'>AUTHORS</a>
#'
#' The **__PKGNAME__** widget adaptors were written by Detlef Groth, Schwielowsee, Germany based on code mentioned at the specific adaptor documentation.
#'
#' ## <a name='copyright'>Copyright</a>
#' 
#'
#' Copyright (c) 2021  Dr. Detlef Groth, E-mail: detlef(at)dgroth(dot)de
#'
# LICENSE START
#
#' #include "license.md"
#
# LICENSE END
