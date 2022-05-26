#!/bin/sh
# the next line restarts using tclsh \
exec tclsh "$0" "$@"

package require Tk

# Copyright (c) 2005-2018 Keith Nash.
#
# See the file "license.terms" for information on usage and redistribution
# of this file, and for a DISCLAIMER OF ALL WARRANTIES.

### This demo explores corner cases in scrolling (with thanks to Gregor Cramer
### and Francois Vogel for revised_text).

### For a short example, see ntextExample.tcl
### To explore the ntext options, try ntextDemoBindings.tcl
### To explore ntext indentation, try ntextDemoIndent.tcl
### To explore vertical scrolling on the Mac, try ntextDemoMacScrolling.tcl

image create photo example -data {
R0lGODlhEAAQALMAAAAAAISEAMbGxv//AP//////////////////////////////////////////
/////yH5BAEAAAIALAAAAAAQABAAAAQ4UMhJq6Ug3wpm7xsHZqBFCsBADGTLrbCqllIaxzSKt3wm
A4GgUPhZAYfDEQuZ9ByZAVqPF6paLxEAOw==
}

# This string defines the text that will be displayed in each widget:
set message1 {    This demo tests scrolling with the scrollbars, keyboard or mousewheel.

    To allow lines to be partially visible, this line will use a different font size.

    Now show an embedded image.

    1. Now some extra words to lengthen the text.

    2. Now some extra words to lengthen the text.}
# End of string for widget text.

set message2 {    This demo has some very tall lines, and tests scrolling with the scrollbars, keyboard or mousewheel.

    To test scrolling with very tall lines, this line will use a huge font size.

    1. Now some extra words to lengthen the text.

    2. Now some extra words to lengthen the text.

    3. Now some extra words to lengthen the text.

    4. Now some extra words to lengthen the text.

    5. Now some extra words to lengthen the text.

    Try any text-widget operation, and test whether ntext is satisfactory.  Ntext is part of Tklib - please report any bugs to:

    http://core.tcl.tk/tklib/reportlist}
# End of string for widget text.

package require ntext 1.0

### Indentation is disabled by default.  Set this variable to 0 to enable it:
set ::ntext::classicWrap        0

#  Activate the traditional "extra" bindings so these can be tested too:
set ::ntext::classicExtras      1

set col #e0dfde
. configure -bg $col

proc textAndScroll {w col ht ft message bt {img {}}} {
    frame $w -bg $col
    pack [scrollbar $w.scroll -command [list $w.txt yview]] -fill y    -side right
    pack [text $w.txt -yscrollcommand [list $w.scroll set]] -fill both -side right -expand 1

    bindtags $w.txt [list $w.txt $bt . all]

    if {$bt eq {Ntext}} {
        set bg white
    } else {
        set bt Text
        set bg #FFFFCC
    }

    $w.txt configure -wrap word -undo 1
    $w.txt configure -width 42 -height $ht -font {{Courier} -15} -bg $bg
    $w.txt insert end "    I use the $bt bindings.\n\n$message"
    $w.txt edit separator

    $w.txt tag add       tall 5.0 6.0
    $w.txt tag configure tall -font $ft

    if {$img ne {}} {
        $w.txt image create $img -image example
    }

    if {$bt eq {Ntext}} {
        ::ntext::wrapIndent $w.txt
    }
    return $w
}

textAndScroll .topright $col 16 {{Courier} -17}  $message1 Ntext 7.21
textAndScroll .topleft  $col 16 {{Courier} -17}  $message1 Text  7.21
textAndScroll .botright $col 10 {{Courier} -170} $message2 Ntext
textAndScroll .botleft  $col 10 {{Courier} -170} $message2 Text
grid .topleft .topright -sticky nsew
grid .botleft .botright -sticky nsew -pady {10 0}
grid columnconfigure . all -weight 1
grid columnconfigure . all -weight 1
grid rowconfigure    . 0   -weight 1

