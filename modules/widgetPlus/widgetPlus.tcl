# ------------------------------------------------------------------------------
# FILE:
#       widgetPlus-*.dmw, widgetPlus-*.tm
#
# DESCRIPTION:
#       Module to provide enhancements to entry, spinbox, ttk::entry,
#       ttk::spinbox, and ttk::combobox widgets, with Undo/Redo, <<Selection>>,
#       -inactiveselectbackground and improved bindings.
#
# LICENCE:
#       Copyright (C) 2015-2018 Keith Nash.
#       This file is part of Tklib and may be used subject to the terms in
#       file license.terms; please note in particular the terms repeated here:
#
#     IN NO EVENT SHALL THE AUTHORS OR DISTRIBUTORS BE LIABLE TO ANY PARTY
#     FOR DIRECT, INDIRECT, SPECIAL, INCIDENTAL, OR CONSEQUENTIAL DAMAGES
#     ARISING OUT OF THE USE OF THIS SOFTWARE, ITS DOCUMENTATION, OR ANY
#     DERIVATIVES THEREOF, EVEN IF THE AUTHORS HAVE BEEN ADVISED OF THE
#     POSSIBILITY OF SUCH DAMAGE.
#
#     THE AUTHORS AND DISTRIBUTORS SPECIFICALLY DISCLAIM ANY WARRANTIES,
#     INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY,
#     FITNESS FOR A PARTICULAR PURPOSE, AND NON-INFRINGEMENT.  THIS SOFTWARE
#     IS PROVIDED ON AN "AS IS" BASIS, AND THE AUTHORS AND DISTRIBUTORS HAVE
#     NO OBLIGATION TO PROVIDE MAINTENANCE, SUPPORT, UPDATES, ENHANCEMENTS, OR
#     MODIFICATIONS.
#
# ------------------------------------------------------------------------------
# One line exceeds 80 columns, for clarity.
# Conventional use of namespace/package names.
# Defines bindtags EntryPlus, SpinboxPlus, TEntryPlus, TSpinboxPlus,
# TComboboxPlus, and BwEntryPlus.
# Docs are in "man n widgetPlus".

package require Tcl 8.5-
package require Tk 8.5-
package require snit

namespace eval ::widgetPlus {
    variable BWidgetEnabled 0
    namespace export entryPlus spinboxPlus
    namespace export ttkEntryPlus ttkSpinboxPlus ttkComboboxPlus
}


# ------------------------------------------------------------------------------
#  Commands ::widgetPlus::entryPlus ::widgetPlus::spinboxPlus
#  ::widgetPlus::ttkEntryPlus ::widgetPlus::ttkSpinboxPlus
#  ::widgetPlus::ttkComboboxPlus
# ------------------------------------------------------------------------------
# Commands for objects ::widgetPlus::entryPlus etc.
# These simple wrapper commands allow most of the code to be held in a common
# object, ::widgetPlus::WidgetPlusPrivateCore.
#
# It is a pity not to use snit::widgetadaptor wrappers for
# ::widgetPlus::WidgetPlusPrivateCore, but they do give more obscure error
# messages, chiefly by using "::hull2.e" not ".e" in the message text.  This
# change causes 20 more (harmless) test failures in entryPlus.test.
#
# A downside to these simple wrappers is that, while the Snit typemethod
#    widgetPlus::entryPlus info instances
# works, it is really an alias to
#    widgetPlus::WidgetPlusPrivateCore info instances
# and so it includes "types" such as widgetPlus::spinboxPlus as well as
# widgetPlus::entryPlus.
# ------------------------------------------------------------------------------

proc ::widgetPlus::entryPlus {args} {
    set sub [lindex $args 0]
    set lenny [llength $args]
    if {($sub eq {create}) && ($lenny > 1)} {
        set win  [lindex $args 1]
        set args [lrange $args 2 end]
    } elseif {[string index $sub 0] eq {.}} {
        set win  $sub
        set args [lrange $args 1 end]
    } elseif {$lenny == 0} {
        set    msg {wrong # args: }
        append msg {should be "entryPlus pathName ?-option value ...?"}
        return -code error $msg
    } else {
        # A typemethod.
        return [::widgetPlus::WidgetPlusPrivateCore {*}$args]
    }
    ::widgetPlus::WidgetPlusPrivateCore create $win entry {*}$args
}

proc ::widgetPlus::spinboxPlus {args} {
    set sub [lindex $args 0]
    set lenny [llength $args]
    if {($sub eq {create}) && ($lenny > 1)} {
        set win  [lindex $args 1]
        set args [lrange $args 2 end]
    } elseif {[string index $sub 0] eq {.}} {
        set win  $sub
        set args [lrange $args 1 end]
    } elseif {$lenny == 0} {
        set    msg {wrong # args: }
        append msg {should be "spinboxPlus pathName ?-option value ...?"}
        return -code error $msg
    } else {
        # A typemethod.
        return [::widgetPlus::WidgetPlusPrivateCore {*}$args]
    }
    ::widgetPlus::WidgetPlusPrivateCore create $win spinbox {*}$args
}

proc ::widgetPlus::ttkEntryPlus {args} {
    set sub [lindex $args 0]
    set lenny [llength $args]
    if {($sub eq {create}) && ($lenny > 1)} {
        set win  [lindex $args 1]
        set args [lrange $args 2 end]
    } elseif {[string index $sub 0] eq {.}} {
        set win  $sub
        set args [lrange $args 1 end]
    } elseif {$lenny == 0} {
        set    msg {wrong # args: }
        append msg {should be "ttkEntryPlus pathName ?-option value ...?"}
        return -code error $msg
    } else {
        # A typemethod.
        return [::widgetPlus::WidgetPlusPrivateCore {*}$args]
    }
    ::widgetPlus::WidgetPlusPrivateCore create $win ttk::entry {*}$args
}

proc ::widgetPlus::ttkSpinboxPlus {args} {
    set sub [lindex $args 0]
    set lenny [llength $args]
    if {($sub eq {create}) && ($lenny > 1)} {
        set win  [lindex $args 1]
        set args [lrange $args 2 end]
    } elseif {[string index $sub 0] eq {.}} {
        set win  $sub
        set args [lrange $args 1 end]
    } elseif {$lenny == 0} {
        set    msg {wrong # args: }
        append msg {should be "ttkSpinboxPlus pathName ?-option value ...?"}
        return -code error $msg
    } else {
        # A typemethod.
        return [::widgetPlus::WidgetPlusPrivateCore {*}$args]
    }
    ::widgetPlus::WidgetPlusPrivateCore create $win ttk::spinbox {*}$args
}

proc ::widgetPlus::ttkComboboxPlus {args} {
    set sub [lindex $args 0]
    set lenny [llength $args]
    if {($sub eq {create}) && ($lenny > 1)} {
        set win  [lindex $args 1]
        set args [lrange $args 2 end]
    } elseif {[string index $sub 0] eq {.}} {
        set win  $sub
        set args [lrange $args 1 end]
    } elseif {$lenny == 0} {
        set    msg {wrong # args: }
        append msg {should be "ttkComboboxPlus pathName ?-option value ...?"}
        return -code error $msg
    } else {
        # A typemethod.
        return [::widgetPlus::WidgetPlusPrivateCore {*}$args]
    }
    ::widgetPlus::WidgetPlusPrivateCore create $win ttk::combobox {*}$args
}


# ------------------------------------------------------------------------------
#  Proc ::widgetPlus::replaceBindtag
# ------------------------------------------------------------------------------
# Command to remove a specific bindtag on a window, and replace it with 0 or
# more others.
# ------------------------------------------------------------------------------

proc ::widgetPlus::replaceBindtag {w OldTag args} {
    set pos [lsearch -exact [bindtags $w] $OldTag]
    if {$pos == -1} {
        return 0
    } else {
        bindtags $w [lreplace [bindtags $w] $pos $pos {*}$args]
        return 1
    }
}


# ------------------------------------------------------------------------------
#  Proc ::widgetPlus::copyBindtag
# ------------------------------------------------------------------------------
# Command to copy all the bindings from one bindtag to another.
# ------------------------------------------------------------------------------

proc ::widgetPlus::copyBindtag {from to} {
    foreach binding [bind $from] {
        bind $to $binding [bind $from $binding]
    }
    return
}


# ------------------------------------------------------------------------------
#  Bindtag EntryPlus (replaces bindtag Entry for widget entry)
# ------------------------------------------------------------------------------
# Cf. bindtag Entry defined in Tk file library/entry.tcl.
#
# Copy the bindings at run time from Entry to EntryPlus.  Replace some bindings
# and add new ones.  Define in this file all the commands used by the
# replacement bindings, so that the bindings are resilient against changes in
# Tk file library/entry.tcl.
# ------------------------------------------------------------------------------

# ------------------------------------------------------------------------------
# (1) Copy all bindings from Entry to EntryPlus
# ------------------------------------------------------------------------------

# Ensure entry.tcl has been sourced.
catch ::tk::EntryPaste

::widgetPlus::copyBindtag Entry EntryPlus


# ------------------------------------------------------------------------------
# (2) Replace two bindings copied from bindtag Entry.
# ------------------------------------------------------------------------------

# Give x11 the same behavior as other windowing systems.

bind EntryPlus <<Paste>> {
    catch {
	if {[tk windowingsystem] ne "x11TheOldFashionedWay"} {
	    catch {
		%W delete sel.first sel.last
	    }
	}
	%W insert insert [::widgetPlus::GetSelection %W CLIPBOARD]
	widgetPlus::EntrySeeInsert %W
    }
}

# Remove this antiquated binding (which inserts text from the PRIMARY
# selection, on windowing systems other than win32).

bind EntryPlus <Insert> {# nothing}


# ------------------------------------------------------------------------------
# (2a) Define the commands used by the bindings (2), so they are resilient
#      against any incompatible revisions to library/entry.tcl.
# ------------------------------------------------------------------------------

# ::widgetPlus::EntrySeeInsert -- copy of ::tk::EntrySeeInsert
# Make sure that the insertion cursor is visible in the entry window.
# If not, adjust the view so that it is.
#
# Arguments:
# w -		The entry window.

proc ::widgetPlus::EntrySeeInsert w {
    set c [$w index insert]
    if {($c < [$w index @0]) || ($c > [$w index @[winfo width $w]])} {
	$w xview $c
    }
}

# ::widgetPlus::GetSelection -- copy of ::tk::GetSelection
#   This tries to obtain the default selection.  On Unix, we first try
#   and get a UTF8_STRING, a type supported by modern Unix apps for
#   passing Unicode data safely.  We fall back on the default STRING
#   type otherwise.  On Windows, only the STRING type is necessary.
# Arguments:
#   w	The widget for which the selection will be retrieved.
#	Important for the -displayof property.
#   sel	The source of the selection (PRIMARY or CLIPBOARD)
# Results:
#   Returns the selection, or an error if none could be found
#
if {[tk windowingsystem] ne "win32"} {
    proc ::widgetPlus::GetSelection {w {sel PRIMARY}} {
	if {[catch {
	    selection get -displayof $w -selection $sel -type UTF8_STRING
	} txt] && [catch {
	    selection get -displayof $w -selection $sel
	} txt]} then {
	    return -code error -errorcode {TK SELECTION NONE} \
		"could not find default selection"
	} else {
	    return $txt
	}
    }
} else {
    proc ::widgetPlus::GetSelection {w {sel PRIMARY}} {
	if {[catch {
	    selection get -displayof $w -selection $sel
	} txt]} then {
	    return -code error -errorcode {TK SELECTION NONE} \
		"could not find default selection"
	} else {
	    return $txt
	}
    }
}

# ------------------------------------------------------------------------------
# (3) Add new bindings that depend on widgetPlus commands.
# ------------------------------------------------------------------------------

bind EntryPlus <<Undo>> {
    if {![catch { %W edit undo }]} {
	# Cancel the selection so that Undo does not mess it up.
	%W selection clear
    }
}

bind EntryPlus <<Redo>> {
    if {![catch { %W edit redo }]} {
	# Cancel the selection so that Redo does not mess it up.
	%W selection clear
    }
}

# These bindings let the widgetPlus have option -inactiveselectbackground as
# well as -selectbackground.

bind EntryPlus <FocusIn> {
    %W SelectColorIn
}

bind EntryPlus <FocusOut> {
    %W SelectColorOut
}


# ------------------------------------------------------------------------------
#  Proc ::widgetPlus::EnableBWidget
# ------------------------------------------------------------------------------
# Command to check that BWidget Entry is available, and then copy and modify its
# bindtag BwEntry to BwEntryPlus.
# ------------------------------------------------------------------------------

proc ::widgetPlus::EnableBWidget {} {
    variable BWidgetEnabled

    if {[catch {package present BWidget}]} {
        # Do not load BWidget here - it is clearer if the caller does this.
        return -code error {package BWidget has not been loaded}
    }

    # Ensure bwidget-${ver}/entry.tcl has been sourced.
    catch ::Entry

    EnablePrivateCommand
    set BWidgetEnabled 1

    return
}


# ------------------------------------------------------------------------------
#  Proc ::widgetPlus::EnableSlab
# ------------------------------------------------------------------------------
# Command to check that Slab::Entry is available, and then copy and modify its
# bindtag BwEntry to BwEntryPlus.
#
# Slab and BWidget use identical bindings.  This may change in future.
# ------------------------------------------------------------------------------

proc ::widgetPlus::EnableSlab {} {
    variable BWidgetEnabled

    if {[catch {package present Slab}]} {
        # Do not load Slab here - it is clearer if this is done by the caller.
        return -code error {package Slab has not been loaded}
    }

    # Ensure module Slab::Entry has been sourced.
    catch ::Slab::Entry

    EnablePrivateCommand
    set BWidgetEnabled 1

    return
}


proc ::widgetPlus::EnablePrivateCommand {} {
#indent-4

# ------------------------------------------------------------------------------
#  Bindtag BwEntryPlus (replaces bindtag BwEntry for BWidget's Entry widget)
# ------------------------------------------------------------------------------
# Cf. bindtag BwEntry defined in BWidget file library/entry.tcl.
#
# Copy the bindings at run time from BwEntry to BwEntryPlus.  Replace some
# bindings and add new ones.  Define in this file all the commands used by the
# replacement bindings, so that the bindings are resilient against changes in
# BWidget file bwidget-${ver}/entry.tcl.
# ------------------------------------------------------------------------------

# ------------------------------------------------------------------------------
# (1) Copy all bindings from BwEntry to BwEntryPlus
# ------------------------------------------------------------------------------

::widgetPlus::copyBindtag BwEntry BwEntryPlus


# ------------------------------------------------------------------------------
# (2) Replace two bindings copied from bindtag BwEntry.
# ------------------------------------------------------------------------------

# Give x11 the same behavior as other windowing systems.

bind BwEntryPlus <<Paste>> {
    catch {
	if {[tk windowingsystem] ne "x11TheOldFashionedWay"} {
	    catch {
		%W delete sel.first sel.last
	    }
	}
	%W insert insert [::widgetPlus::GetSelection %W CLIPBOARD]
	widgetPlus::EntrySeeInsert %W
    }
}

# Remove this antiquated binding (which inserts text from the PRIMARY
# selection, on windowing systems other than win32).

bind BwEntryPlus <Insert> {# nothing}


# ------------------------------------------------------------------------------
# (3) Add new bindings that depend on widgetPlus commands.
# ------------------------------------------------------------------------------

bind BwEntryPlus <<Undo>> {
    if {![catch { %W edit undo }]} {
	# Cancel the selection so that Undo does not mess it up.
	%W selection clear
    }
}

bind BwEntryPlus <<Redo>> {
    if {![catch { %W edit redo }]} {
	# Cancel the selection so that Redo does not mess it up.
	%W selection clear
    }
}

# These bindings let the widgetPlus have option -inactiveselectbackground as
# well as -selectbackground.

bind BwEntryPlus <FocusIn> {
    %W SelectColorIn
}

bind BwEntryPlus <FocusOut> {
    %W SelectColorOut
}

return

#indent_4
}


# ------------------------------------------------------------------------------
#  Bindtag SpinboxPlus (replaces bindtag Spinbox for widget spinbox)
# ------------------------------------------------------------------------------
# Cf. bindtag Spinbox defined in Tk file library/spinbox.tcl.
#
# Copy the bindings at run time from Spinbox to SpinboxPlus.  Replace some
# bindings and add new ones.  Define in this file all the commands used by the
# replacement bindings, so that the bindings are resilient against changes in
# Tk files library/entry.tcl and library/spinbox.tcl.
# ------------------------------------------------------------------------------

# ------------------------------------------------------------------------------
# (1) Copy all bindings from Spinbox to SpinboxPlus
# ------------------------------------------------------------------------------

# Ensure entry.tcl and spinbox.tcl have been sourced.
namespace eval ::tk::spinbox {}
catch ::tk::EntryPaste
catch ::tk::spinbox::Paste

::widgetPlus::copyBindtag Spinbox SpinboxPlus


# ------------------------------------------------------------------------------
# (2) Replace two bindings copied from bindtag TEntry.
# ------------------------------------------------------------------------------

bind SpinboxPlus <Insert> {# nothing}

bind SpinboxPlus <<Paste>> {
    catch {
	if {[tk windowingsystem] ne "x11TheOldFashionedWay"} {
	    catch {
		%W delete sel.first sel.last
	    }
	}
	%W insert insert [::widgetPlus::GetSelection %W CLIPBOARD]
	::widgetPlus::EntrySeeInsert %W
    }
}


# ------------------------------------------------------------------------------
# (2a) Define the commands used by the bindings (2), so they are resilient
#      against any incompatible revisions to library/spinbox.tcl.
# ------------------------------------------------------------------------------

# ::widgetPlus::SpinboxPaste -- copy of ::tk::spinbox::Paste
# This procedure sets the insertion cursor to the current mouse position,
# pastes the selection there, and sets the focus to the window.
#
# Arguments:
# w -		The spinbox window.
# x -		X position of the mouse.

proc ::widgetPlus::SpinboxPaste {w x} {
    $w icursor [::widgetPlus::SpinboxClosestGap $w $x]
    catch {$w insert insert [::widgetPlus::GetSelection $w PRIMARY]}
    if {"disabled" eq [$w cget -state]} {
	focus $w
    }
}


# ::widgetPlus::SpinboxClosestGap -- copy of ::tk::spinbox::ClosestGap
# Given x and y coordinates, this procedure finds the closest boundary
# between characters to the given coordinates and returns the index
# of the character just after the boundary.
#
# Arguments:
# w -		The spinbox window.
# x -		X-coordinate within the window.

proc ::widgetPlus::SpinboxClosestGap {w x} {
    set pos [$w index @$x]
    set bbox [$w bbox $pos]
    if {($x - [lindex $bbox 0]) < ([lindex $bbox 2]/2)} {
	return $pos
    }
    incr pos
}


# ------------------------------------------------------------------------------
# (3) Add new bindings that depend on widgetPlus commands.
# ------------------------------------------------------------------------------

bind SpinboxPlus <<Undo>> {
    if {![catch { %W edit undo }]} {
	# Cancel the selection so that Undo does not mess it up.
	%W selection clear
    }
}

bind SpinboxPlus <<Redo>> {
    if {![catch { %W edit redo }]} {
	# Cancel the selection so that Redo does not mess it up.
	%W selection clear
    }
}

# These bindings let the widgetPlus have option -inactiveselectbackground as
# well as -selectbackground.

bind SpinboxPlus <FocusIn> {
    %W SelectColorIn
}

bind SpinboxPlus <FocusOut> {
    %W SelectColorOut
}


# ------------------------------------------------------------------------------
#  Bindtag TEntryPlus (replaces bindtag TEntry for widget ttk::entry)
# ------------------------------------------------------------------------------
# Cf. bindtag TEntry defined in Tk file library/ttk/entry.tcl.
#
# Copy the bindings at run time from TEntry to TEntryPlus.  Replace some
# bindings and add new ones.  Define in this file all the commands used by the
# replacement bindings, so that the bindings are resilient against changes in
# Tk file library/ttk/entry.tcl.
# ------------------------------------------------------------------------------

# ------------------------------------------------------------------------------
# (1) Copy all bindings from TEntry to TEntryPlus
# ------------------------------------------------------------------------------

# File tk.tcl automatically sources ttk/ttk.tcl which sources all ttk files.

::widgetPlus::copyBindtag TEntry TEntryPlus


# ------------------------------------------------------------------------------
# (2) Replace no bindings copied from bindtag TEntry.
# ------------------------------------------------------------------------------


# ------------------------------------------------------------------------------
# (3) Add new bindings that depend on widgetPlus commands.
# ------------------------------------------------------------------------------

bind TEntryPlus <<Undo>> {
    if {![catch { %W edit undo }]} {
	# Cancel the selection so that Undo does not mess it up.
	%W selection clear
    }
}

bind TEntryPlus <<Redo>> {
    if {![catch { %W edit redo }]} {
	# Cancel the selection so that Redo does not mess it up.
	%W selection clear
    }
}


# ------------------------------------------------------------------------------
#  Bindtag TSpinboxPlus (replaces bindtag TSpinbox for widget ttk::spinbox)
# ------------------------------------------------------------------------------
# Cf. bindtag TSpinbox defined in Tk file library/ttk/spinbox.tcl.
#
# Copy the bindings at run time from TSpinbox to TSpinboxPlus.  Replace some
# bindings and add new ones.  Define in this file all the commands used by the
# replacement bindings, so that the bindings are resilient against changes in
# Tk files library/ttk/entry.tcl and library/ttk/spinbox.tcl.
# ------------------------------------------------------------------------------

# ------------------------------------------------------------------------------
# (1) Copy all bindings from TSpinbox to TSpinboxPlus
# ------------------------------------------------------------------------------
# (TSpinbox is itself copied with revisions from TEntry.)

# File tk.tcl automatically sources ttk/ttk.tcl which sources all ttk files.

::widgetPlus::copyBindtag TSpinbox TSpinboxPlus


# ------------------------------------------------------------------------------
# (2) Replace no bindings copied from bindtag TSpinbox.
# ------------------------------------------------------------------------------


# ------------------------------------------------------------------------------
# (3) Add new bindings that depend on widgetPlus commands.
# ------------------------------------------------------------------------------

bind TSpinboxPlus <<Undo>> {
    if {![catch { %W edit undo }]} {
	# Cancel the selection so that Undo does not mess it up.
	%W selection clear
    }
}

bind TSpinboxPlus <<Redo>> {
    if {![catch { %W edit redo }]} {
	# Cancel the selection so that Redo does not mess it up.
	%W selection clear
    }
}


# ------------------------------------------------------------------------------
#  Bindtag TComboboxPlus (replaces bindtag TCombobox for widget ttk::combobox)
# ------------------------------------------------------------------------------
# Cf. bindtag TCombobox defined in Tk file library/ttk/combobox.tcl.
#
# Copy the bindings at run time from TCombobox to TComboboxPlus.  Replace some
# bindings and add new ones.  Define in this file all the commands used by the
# replacement bindings, so that the bindings are resilient against changes in
# Tk files library/ttk/entry.tcl and library/ttk/combobox.tcl.
# ------------------------------------------------------------------------------

# ------------------------------------------------------------------------------
# (1) Copy all bindings from TCombobox to TComboboxPlus
# ------------------------------------------------------------------------------
# (TCombobox is itself copied with revisions from TEntry.)

# File tk.tcl automatically sources ttk/ttk.tcl which sources all ttk files.

::widgetPlus::copyBindtag TCombobox TComboboxPlus


# ------------------------------------------------------------------------------
# (2) Replace no bindings copied from bindtag TCombobox.
# ------------------------------------------------------------------------------


# ------------------------------------------------------------------------------
# (3) Add new bindings that depend on widgetPlus commands.
# ------------------------------------------------------------------------------

bind TComboboxPlus <<Undo>> {
    if {![catch { %W edit undo }]} {
	# Cancel the selection so that Undo does not mess it up.
	%W selection clear
    }
}

bind TComboboxPlus <<Redo>> {
    if {![catch { %W edit redo }]} {
	# Cancel the selection so that Redo does not mess it up.
	%W selection clear
    }
}


# ------------------------------------------------------------------------------
#  Object widgetPlus::color
# ------------------------------------------------------------------------------
# A Snit validation type for a Tk color.
# Use "-strict 0" for cases where the acceptable value is a color or {}.
# ------------------------------------------------------------------------------

snit::type widgetPlus::color {
    option -strict -type snit::boolean -default 1

    typemethod validate {value} {
        if {[catch {winfo rgb . $value} color]} {
            set msg "unknown color name \"$value\""
            return -code error -errorcode INVALID $msg
        }
        return $value
    }

    constructor {args} {
        $self configurelist $args
        return
    }

    method validate {value} {
        if {($value eq {}) && (!$options(-strict))} {
             return {}
        }

        $type validate $value
    }
}


# ------------------------------------------------------------------------------
#  Object ::widgetPlus::WidgetPlusPrivateCore
# ------------------------------------------------------------------------------
# This object forms the core of ::widgetPlus::entryPlus etc.  Its existence
# avoids the quintuplication of most of its code.
# ------------------------------------------------------------------------------

snit::widgetadaptor ::widgetPlus::WidgetPlusPrivateCore {
#indent-4

variable My -array {
     ,list     {{}}
     ,pointer  0
     ,modified 0
     ,trace    {}
     ,oldValue {}
}

option {-undo undo Undo} \
        -default 1 \
        -type snit::boolean \
        -configuremethod SetOption

option {-maxundo maxUndo MaxUndo} \
        -default 0 \
        -type snit::integer

option {-selectbackground selectBackground Foreground} \
        -default #418bd4 \
        -type widgetPlus::color \
        -configuremethod SetOption

option {-inactiveselectbackground inactiveSelectBackground Foreground} \
        -default #c3c3c3 \
        -type {widgetPlus::color -strict 0} \
        -configuremethod SetOption

option {-textvariable textVariable Variable} \
        -default {} \
        -configuremethod SetOption

delegate option * to hull
delegate method * to hull


typevariable Our -array {
    ,classList       {entry ttk::entry spinbox ttk::spinbox ttk::combobox}
    ,themedClassList {ttk::entry ttk::spinbox ttk::combobox}
    ,c2t             {
                          Entry     entry
                          TEntry    ttk::entry
                          Spinbox   spinbox
                          TSpinbox  ttk::spinbox
                          TCombobox ttk::combobox
                     }
}

variable My -array {
    ,type   {}
}


# ------------------------------------------------------------------------------
#  Constructor
# ------------------------------------------------------------------------------
# The command can be run regardless of whether the entry, spinbox, ttk::entry,
# ttk::spinbox, or ttk::combobox widget has already been created.
#
# Note the first argument "kind", which is the name of the widget to be used as
# the hull.  This argument is provided by the wrapper commands
# ::widgetPlus::entryPlus etc, and is not visible to end users.
# ------------------------------------------------------------------------------

constructor {kind args} {
    if {$kind ni $Our(,classList)} {
        set msg "argument \"kind\" must be one of entry,\
                 spinbox, ttk::entry, ttk::spinbox, or ttk::combobox"
        return -code error $msg
    }
    if {$kind eq {entry}} {
        set ia an
    } else {
        set ia a
    }

    set My(,type) $kind

    # When the hull is fed options one at a time, it raises an error if it gets
    # an incompatible combination (e.g. spinbox -from and -to).  To avoid this,
    # organise the arguments here and pass them to the hull in one command.
    set hullOpts $args
    set selfOpts {}
    foreach key {
        -undo
        -maxundo
        -selectbackground
        -inactiveselectbackground
        -textvariable
    } {
        dict unset hullOpts $key
        if {[dict exists $args $key]} {
            dict set selfOpts $key [dict get $args $key]
        }
    }

    if {[winfo exists $win]} {
        # Use an existing widget as the hull, if it is "suitable", i.e.
        # - It must be an entry, spinbox, ttk::entry, ttk::spinbox, or
        #   ttk::combobox widget
        # - Its "type" must agree with that specified by argument "kind"
        # - It must not already be wrapped by widgetPlus::WidgetPlusPrivateCore

        if {![dict exists $Our(,c2t) [winfo class $win]]} {
            set msg "window $win already exists, but it is not $ia $My(,type)"
            return -code error $msg

        } elseif {[dict get $Our(,c2t) [winfo class $win]] ne $My(,type)} {
            set msg "window $win already exists, but it is not $ia $My(,type)"
            return -code error $msg

        } elseif {![catch {$win EntryPlusCanary}]} {
            set msg "window $win already exists, but it is\
                     already wrapped by widgetPlus"
            return -code error $msg

        } else {
            installhull $win
            if {![$self IsThemed]} {
                $self configure -selectbackground [$hull cget -selectbackground]
            }
            $self configure -textvariable [$hull cget -textvariable]
            $hull configure {*}$hullOpts
        }
    } else {
        # Create a new widget for the hull.
        installhull using $My(,type) {*}$hullOpts
    }

    $self configurelist $selfOpts
    # Options -selectbackground, -inactiveselectbackground have no effect
    # if the widget is themed, and they do not propagate to the hull.

    set tag [winfo class $win]
    ::widgetPlus::replaceBindtag $win $tag ${tag}Plus
    if {($tag eq {Entry}) && ($::widgetPlus::BWidgetEnabled)} {
        ::widgetPlus::replaceBindtag $win BwEntry BwEntryPlus
    }

    if {[focus -displayof $win] eq $win} {
        $self SelectColorIn
    } else {
        $self SelectColorOut
    }

    return SET_BY_SNIT
}


# ------------------------------------------------------------------------------
#  Destructor
# ------------------------------------------------------------------------------

destructor {
    set cb [mymethod TextVarTracer]
    set val $options(-textvariable)
    if {$val ne {}} {
        namespace eval :: [list trace remove variable $val {write unset} $cb]
    }
    return
}


# ------------------------------------------------------------------------------
#  Method EntryPlusCanary
# ------------------------------------------------------------------------------
# The existence of this method indicates that this is a
# widgetPlus::WidgetPlusPrivateCore widget.
# It is called by the constructor to test that a
# widgetPlus::WidgetPlusPrivateCore widget does not use another
# widgetPlus::WidgetPlusPrivateCore as its hull.
# ------------------------------------------------------------------------------

method EntryPlusCanary {} {
    return
}


# ------------------------------------------------------------------------------
#  Method SetOption
# ------------------------------------------------------------------------------
# Snit configuremethod for options -selectbackground -inactiveselectbackground.
# ------------------------------------------------------------------------------

method SetOption {opt val} {
    if {$opt ni {-selectbackground -inactiveselectbackground
                 -textvariable -undo}
    } {
        return -code error {argument "opt" must be -selectbackground,\
                -inactiveselectbackground, -textvariable, or -undo}
    }

    set oldVal $options($opt)
    set options($opt) $val

    if 0 {
    } elseif {    ($opt eq {-selectbackground})
               && ([focus -displayof $win] eq $win)
    } {
        $self SelectColorIn

    } elseif {    ($opt eq {-inactiveselectbackground})
               && ([focus -displayof $win] ne $win)
    } {
        $self SelectColorOut

    } elseif {    ($opt eq {-textvariable}) && ($val ne $oldVal)} {
        set cb [mymethod TextVarTracer]
        if {$oldVal ne {}} {
            namespace eval :: [list trace remove variable $oldVal {write unset} $cb]
        } else {
        }

        set ClearOldVal 1
        if {$val ne {}} {
            namespace eval :: [list trace add variable $val {write unset} $cb]

            # If the variable's val is defined, this will fire the trace and
            # will call Push and set My(,oldValue).
            catch {
                set ValueOfVar [namespace eval :: [list set $val]]
                namespace eval :: [list set $val $ValueOfVar]
                set ClearOldVal 0
            }
        } else {
        }

        # Either -textvariable is {}, or the variable has not been set.
        if {$ClearOldVal} {
            $self Push {}
            set My(,oldValue) {}
        } else {
        }

        $hull configure -textvariable $val

    } elseif {($opt eq {-undo}) && ($val ne $oldVal)} {
        # On a change of value, start the undo/redo stack from scratch.
        $self edit reset

    } else {
    }

    return
}


# ------------------------------------------------------------------------------
#  Method TextVarTracer
# ------------------------------------------------------------------------------
# This command is bound to a trace on the -textvariable, and is called whenever
# that variable is set or unset.
# - When -textvariable is not {}, it is the name of a global variable.  A trace
#   on writing or unsetting that variable will monitor all changes to the text
#   displayed in the widget: both changes made when the script modifiies the
#   value of the global variable; and changes made by the "insert" and "delete"
#   methods (and thus, via bindings, by the GUI user), which Tk also applies to
#   the global variable.  There is no need for separate monitoring of changes
#   made by "insert" or "replace".
# - When -textvariable is {}, there is no "textvariable".  Changes made by
#   "insert" or "delete" are monitored by code in those methods.
# ------------------------------------------------------------------------------

method TextVarTracer {name1 name2 op} {
    if {$op eq "write"} {
        set oldVal $My(,oldValue)
        set newVal [namespace eval :: [list set $options(-textvariable)]]
        set My(,oldValue) $newVal
        if {$newVal ne $oldVal} {
            set My(,modified) 1
            $self Push $newVal
        } else {
        }
    } elseif {$op eq "unset"} {
        # The trace is removed when the variable is unset.
        # Re-add the trace.
        set cb [mymethod TextVarTracer]
        set val $options(-textvariable)
        namespace eval :: [list trace add variable $val {write unset} $cb]
        # The entry widget retains the last value of the unset -textvariable.
        # Leave the Undo/Redo stack and My(,oldValue) unchanged.
    }
    return
}


# ------------------------------------------------------------------------------
#  Method SetTextSilently
# ------------------------------------------------------------------------------
# Command to set widget text without invoking the trace on the -textvariable.
# ------------------------------------------------------------------------------

method SetTextSilently {txt} {
    set cb [mymethod TextVarTracer]
    set val $options(-textvariable)

    if {$val ne {}} {
        namespace eval :: [list trace remove variable $val {write unset} $cb]
    }

    $hull delete 0 end
    $hull insert 0 $txt

    if {$val ne {}} {
        namespace eval :: [list trace add variable $val {write unset} $cb]
    }
    return
}


# ------------------------------------------------------------------------------
#  Method IsThemed
# ------------------------------------------------------------------------------
# Command to return a boolean value, true iff the widget is themed (Ttk).
# ------------------------------------------------------------------------------

method IsThemed {} {
    expr {$My(,type) in $Our(,themedClassList)}
}


# ------------------------------------------------------------------------------
#  Method SelectColorIn
# ------------------------------------------------------------------------------
# Command to set the hull's -selectbackground to the widget's -selectbackground.
#
# The command is called:
# 1. when the widget acquires focus
# 2. when the value of -selectbackground is changed while the widget has focus
# 3. at construction if the widget has focus
# ------------------------------------------------------------------------------

method SelectColorIn {} {
    if {![$self IsThemed]} {
        $hull configure -selectbackground [$self cget -selectbackground]
    }
    return
}


# ------------------------------------------------------------------------------
#  Method SelectColorOut
# ------------------------------------------------------------------------------
# Command to set the hull's -selectbackground to the widget's
# -inactiveselectbackground.
#
# The command is called:
# 1. when the widget loses focus
# 2. when the value of -inactiveselectbackground is changed while the widget
#    does not have focus
# 3. at construction if the widget does not have focus
# ------------------------------------------------------------------------------

method SelectColorOut {} {
    if {![$self IsThemed]} {
        set col [$self cget -inactiveselectbackground]
        if {$col eq {}} {
            set col [$self cget -background]
        }
        $hull configure -selectbackground $col
    }
    return
}


# ------------------------------------------------------------------------------
#  Method FullSelection
# ------------------------------------------------------------------------------
# Command to return the selection in the widget, or {} if none exists.
# ------------------------------------------------------------------------------

method FullSelection {} {
    set content {}
    catch {
        set from [$hull index sel.first]
        set to   [$hull index sel.last]
        set content [string range [$hull get] $from $to]
    }
    return $content
}


# ------------------------------------------------------------------------------
#  Method invoke (spinbox only)
# ------------------------------------------------------------------------------
# Command to wrap the hull method and also:
# 1. copy the widget text, if changed, to the Undo/Redo stack.
# 2. generate a <<Selection>> event if the selection is changed.
# ------------------------------------------------------------------------------

method invoke {element} {
    if {$My(,type) ne {spinbox}} {
        $hull invoke {*}$args
        # The line above will cause an error return.  Just make sure ...
        set msg "bad option \"invoke\""
        return -code error $msg
    }


    set oldSel [$self FullSelection]

    set old [$hull get]
    set result [$hull invoke $element]
    if {![info exists hull]} {
        # The widget has been deleted.
        return $result
    }
    set new [$hull get]

    if {($new ne $old) && ($options(-textvariable) eq {})} {
        set My(,modified) 1
        $self Push $new
    }


    set newSel [$self FullSelection]

    if {$oldSel ne $newSel} {
        event generate $win <<Selection>>
    }

    return $result
}


# ------------------------------------------------------------------------------
#  Method current (ttk::combobox only)
# ------------------------------------------------------------------------------
# Command to wrap the hull method and also:
# 1. copy the widget text, if changed, to the Undo/Redo stack.
# 2. generate a <<Selection>> event if the selection is changed.
# ------------------------------------------------------------------------------

method current {args} {
    if {$My(,type) ne {ttk::combobox}} {
        $hull current {*}$args
        # The line above will cause an error return.  Just make sure ...
        set msg "bad option \"current\""
        return -code error $msg
    } elseif {[llength $args] ni {0 1}} {
        set msg "wrong # args: should be \"$win current ?newIndex?\""
        return -code error $msg
    } elseif {[llength $args] == 0} {
        # Just reads the current value.
        return [$hull current]
    }

    set newValue [lindex $args 0]
    # Now write $newValue to the widget.

    set oldSel [$self FullSelection]

    set old [$hull get]
    set result [$hull current $newValue]

    if {![info exists hull]} {
        # The widget has been deleted.
        return $result
    }
    set new [$hull get]

    if {($new ne $old) && ($options(-textvariable) eq {})} {
        set My(,modified) 1
        $self Push $new
    }

    set newSel [$self FullSelection]

    if {$oldSel ne $newSel} {
        event generate $win <<Selection>>
    }

    return $result


}

# ------------------------------------------------------------------------------
#  Method set (spinbox ttk::spinbox, and ttk::combobox only)
# ------------------------------------------------------------------------------
# Command to wrap the hull method and also:
# 1. copy the widget text, if changed, to the Undo/Redo stack.
# 2. generate a <<Selection>> event if the selection is changed.
# ------------------------------------------------------------------------------

method set {args} {
    if {$My(,type) ni {spinbox ttk::spinbox ttk::combobox}} {
        $hull set {*}$args
        # The line above will cause an error return.  Just make sure ...
        set msg "bad option \"set\""
        return -code error $msg

    } elseif {($My(,type) eq {spinbox}) && ([llength $args] ni {0 1})} {
        set msg "wrong # args: should be \"$win set ?string?\""
        return -code error $msg

    } elseif {    ($My(,type) in {ttk::spinbox ttk::combobox})
               && ([llength $args] != 1)
    } {
        set msg "wrong # args: should be \"$win set value\""
        return -code error $msg

    } elseif {[llength $args] == 0} {
        # Just reads the current value.
        return [$hull set]
    }

    set newValue [lindex $args 0]
    # Now write $newValue to the widget.

    set oldSel [$self FullSelection]

    set old [$hull get]
    set result [$hull set $newValue]

    if {![info exists hull]} {
        # The widget has been deleted.
        return $result
    }
    set new [$hull get]

    if {($new ne $old) && ($options(-textvariable) eq {})} {
        set My(,modified) 1
        $self Push $new
    }

    set newSel [$self FullSelection]

    if {$oldSel ne $newSel} {
        event generate $win <<Selection>>
    }

    return $result
}


# ------------------------------------------------------------------------------
#  Method delete
# ------------------------------------------------------------------------------
# Command to wrap the hull method and also:
# 1. copy the widget text, if changed, to the Undo/Redo stack.
# 2. generate a <<Selection>> event if the selection is changed.
# ------------------------------------------------------------------------------

method delete {args} {
    if {[llength $args] ni {1 2}} {
        set msg "wrong # args: should be \"$win delete firstIndex ?lastIndex?\""
        return -code error $msg
    }

    set oldSel [$self FullSelection]

    set old [$hull get]
    set result [$hull delete {*}$args]
    if {![info exists hull]} {
        # The widget has been deleted.
        return $result
    }
    set new [$hull get]
    if {($new ne $old) && ($options(-textvariable) eq {})} {
        set My(,modified) 1
        $self Push $new
    }

    set newSel [$self FullSelection]

    if {$oldSel ne $newSel} {
        event generate $win <<Selection>>
    }

    return $result
}


# ------------------------------------------------------------------------------
#  Method insert
# ------------------------------------------------------------------------------
# Command to wrap the hull method and also:
# 1. copy the widget text, if changed, to the Undo/Redo stack.
# 2. The object must generate a <<Selection>> event if the selection is changed.
# ------------------------------------------------------------------------------

method insert {index text} {
    set oldSel [$self FullSelection]

    set old [$hull get]
    set result [$hull insert $index $text]
    if {![info exists hull]} {
        # The widget has been deleted.
        return $result
    }
    set new [$hull get]
    if {($new ne $old) && ($options(-textvariable) eq {})} {
        set My(,modified) 1
        $self Push $new
    }

    set newSel [$self FullSelection]

    if {$oldSel ne $newSel} {
        event generate $win <<Selection>>
    }

    return $result
}


# ------------------------------------------------------------------------------
#  Method edit
# ------------------------------------------------------------------------------
# Hierarchical submethods are defined below.  Snit correctly returns an error
# for submethods that do not exist, and for bare "$w edit", but the messages are
# not as helpful as they might be.
# ------------------------------------------------------------------------------

# ------------------------------------------------------------------------------
#  Hierarchical Method edit canredo
# ------------------------------------------------------------------------------
# Command returns true iff a redo operation is available.
# ------------------------------------------------------------------------------

method {edit canredo} {} {
    expr {[$win cget -undo] && ($My(,pointer) < [llength $My(,list)] - 1)}
}


# ------------------------------------------------------------------------------
#  Hierarchical Method edit canundo
# ------------------------------------------------------------------------------
# Command returns true iff an undo operation is available.
# ------------------------------------------------------------------------------

method {edit canundo} {} {
    expr {[$win cget -undo] && ($My(,pointer) > 0)}
}


# ------------------------------------------------------------------------------
#  Hierarchical Method edit redo
# ------------------------------------------------------------------------------
# Command to attempt a "redo" operation.  If the pointer is already at the end
# of the Redo stack, the command raises an error.  Otherwise, it increments the
# stack pointer and changes the widget text to the next value from the Redo
# stack.
# ------------------------------------------------------------------------------

method {edit redo} {} {
    if {![$win cget -undo]} {
        return
    }

    $hull selection clear
    if {[$self edit canredo]} {
        incr My(,pointer)
        $self SetTextSilently [$self GetCurrent]
        set My(,modified) 1
    } else {
        return -code error {nothing to redo}
    }
    return
}


# ------------------------------------------------------------------------------
#  Hierarchical Method edit undo
# ------------------------------------------------------------------------------
# Command to attempt an "undo" operation.  If the pointer is already at the end
# of the Undo stack, the command raises an error.  Otherwise, it decrements the
# stack pointer and changes the widget text to the next value from the Undo
# stack.
# ------------------------------------------------------------------------------

method {edit undo} {} {
    if {![$win cget -undo]} {
        return
    }

    $hull selection clear
    if {[$self edit canundo]} {
        incr My(,pointer) -1
        $self SetTextSilently [$self GetCurrent]
        set My(,modified) 1
    } else {
        return -code error {nothing to undo}
    }
    return
}


# ------------------------------------------------------------------------------
#  Hierarchical Method edit modified
# ------------------------------------------------------------------------------
# Accessor command for the "modified" state of the widget.  "Set" semantics.
# ------------------------------------------------------------------------------

method {edit modified} {args} {
    set lenny [llength $args]
    set newValue [lindex $args 0]

    if {$lenny == 0} {
        return $My(,modified)
    } elseif {$lenny > 1} {
        return -code error "usage: $win edit modified ?value?"
    } elseif {[string is boolean -strict $newValue]} {
        # && ($lenny == 1)
        # Store boolean as 0 or 1.
        set My(,modified) [expr {$newValue && $newValue}]
    } else {
        return -code error "boolean value required"
    }
    # N.B. Multiple Return.
}


# ------------------------------------------------------------------------------
#  Hierarchical Method edit separator
# ------------------------------------------------------------------------------
# Does nothing.  Each insert/delete operation has its own implicit separator.
#
# If separators are implemented in future, this command will insert a separator
# on the Undo/Redo stack.
# ------------------------------------------------------------------------------

method {edit separator} {} {
    return
}


# ------------------------------------------------------------------------------
#  Hierarchical Method edit reset
# ------------------------------------------------------------------------------
# Command to reset the Undo/Redo stack.
# ------------------------------------------------------------------------------

method {edit reset} {} {
    if {![$win cget -undo]} {
        return
    }

    set My(,pointer) 0
    set My(,list) [list [$hull get]]
    return
}


# ------------------------------------------------------------------------------
#  Method Push
# ------------------------------------------------------------------------------
# Command to push a new value onto the Undo stack, and remove the Redo stack.
# ------------------------------------------------------------------------------

method Push {new} {
    incr My(,pointer)
    if {$My(,pointer) < [llength $My(,list)]} {
        set My(,list) [lreplace $My(,list) $My(,pointer) end]
    }
    lappend My(,list) $new

    $self ResizeStack
    return
}


# ------------------------------------------------------------------------------
#  Method ResizeStack
# ------------------------------------------------------------------------------
# Command to limit the Undo/Redo stack to the size specified by option -maxundo.
# Called only from Push.  If called from elsewhere, must generalise to the case
# where My(,pointer) is reduced below 0.
# ------------------------------------------------------------------------------

method ResizeStack {} {
    set maxUndo [expr {max(0,[$win cget -maxundo])}]
    set lastDead [expr {$My(,pointer) - $maxUndo - 1}]
    if {($maxUndo > 0) && ($lastDead > -1)} {
        set My(,list)    [lreplace $My(,list) 0 $lastDead]
        set My(,pointer) [expr {$My(,pointer) - $lastDead - 1}]
    }
    return
}


# ------------------------------------------------------------------------------
#  Method GetCurrent
# ------------------------------------------------------------------------------
# The pointer indicates a position in the Undo/Redo stack.
# This command retrieves the value from that position on the Undo/Redo stack,
# without changing either the stack or the pointer.
# ------------------------------------------------------------------------------

method GetCurrent {} {
    return [lindex $My(,list) $My(,pointer)]
}


# ------------------------------------------------------------------------------
#  Method selection
# ------------------------------------------------------------------------------
# Command to wrap the hull method and generate a <<Selection>> event.
# - This event is needed by the persistent selection module persistentSelection.
# - To use the persistentSelection module, the caller must bind a suitable
#   command to the <<Selection>> event on this widget.
#
# - The event is generated for subcommands that can modify the selection,
#   whether or not they actually do so.
# - The hull return value is stored and returned, because subcommand "present"
#   returns a non-empty value.
# ------------------------------------------------------------------------------

method selection {args} {

    # --------------------------------------------------------------------------
    # 0. Process arguments: check correct number, to give an appropriate error
    #    message.
    # --------------------------------------------------------------------------

    set lenny [llength $args]
    set com   [lindex $args 0]
    if {$lenny == 0} {
        set msg "wrong # args: should be \"$win selection option ?index?\""
        return -code error $msg
    } elseif {    ($My(,type) eq "spinbox")
               && ($com ni {adjust clear element from present range to})
    } {
        set msg "bad selection option \"$com\": must be adjust, clear,\
                 element, from, present, range, or to"
        return -code error $msg
    } elseif {    ($My(,type) eq "entry")
               && ($com ni {adjust clear from present range to})
    } {
        set msg "bad selection option \"$com\": must be adjust, clear, from,\
                 present, range, or to"
        return -code error $msg
    } elseif {    ($My(,type) in {ttk::entry ttk::spinbox ttk::combobox})
               && ($com ni {clear present range})
    } {
        set msg "bad selection option \"$com\": must be clear, present,\
                 or range"
        return -code error $msg
    } elseif {($com in {clear present}) && ($lenny != 1)} {
        set msg "wrong # args: should be \"$win selection $com\""
        return -code error $msg
    } elseif {($com in {adjust from to}) && ($lenny != 2)} {
        set msg "wrong # args: should be \"$win selection $com index\""
        return -code error $msg
    } elseif {($com eq {range}) && ($lenny != 3)} {
        set msg "wrong # args: should be \"$win selection $com start end\""
        return -code error $msg
    } elseif {($com eq {element}) && ($lenny != 1) && ($lenny != 2)} {
        set msg "wrong # args: should be \"$win selection $com ?element?\""
        return -code error $msg
    } else {
        # A valid command com with the correct number of arguments.
    }

    # --------------------------------------------------------------------------
    # 1. Process arguments: convert all indices to in-range integers.
    # --------------------------------------------------------------------------
    # Number of arguments, including subcommand:
    #   element        - 0 or 1 args, not an index
    #   clear present  - 1 args
    #   adjust from to - 2 args
    #   range          - 3 args
    # All arguments except the first (the subcommand) are indices - except for
    # subcommand "element".
    # Sanitise them: make each one a numerical value that is
    # neither < 0 nor > length.
    # --------------------------------------------------------------------------

    set lenny [llength $args]
    set newArgs {}
    set i 0
    foreach arg $args {
        set tmp $arg
        if {($i != 0) && ($com ne "element")} {
            set tmp [$hull index $tmp]
        }
        set arg$i $tmp
        lappend newArgs $tmp
        incr i
    }


    # --------------------------------------------------------------------------
    # 2. Rewrite the command to avoid unhelpful cases.
    # --------------------------------------------------------------------------
    # The command "$hull selection range $i $j" clears the persistent selection
    # if indices $i and $j are the same.  E.g. if click at the end of an entry
    # widget and do a slight drag, the persistent selection is lost.
    # Replace this command with "$hull selection clear" which does not do this.
    # - FIXME understand why this happens - is this a bug in persistentSelection
    #   or this module, or a misunderstanding of the entry widget?
    # - FIXME do a similar thing if needed for subcommands "to" and "adjust",
    #   which can clear the widget.
    # --------------------------------------------------------------------------

    if {($arg0 eq {range}) && ($lenny == 3) && ($arg1 == $arg2)} {
        set newArgs clear
    }


    # --------------------------------------------------------------------------
    # 3. Evaluate the hull command.
    # --------------------------------------------------------------------------

    set res [$hull selection {*}$newArgs]


    # --------------------------------------------------------------------------
    # 4. Generate a <<Selection>> event if appropriate.
    # --------------------------------------------------------------------------

    if {[lindex $args 0] in {adjust clear range to}} {
        event generate $win <<Selection>>
    }

    return $res
}


#indent+4
}

package provide widgetPlus 1.0b2
