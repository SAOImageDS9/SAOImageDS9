# ------------------------------------------------------------------------------
# FILE:
#       persistentSelection.tcl
#
# DESCRIPTION:
#       Module to preserve the PRIMARY selection exported by a widget, after
#       the user has cancelled the selection (so the widget's sel tag is empty).
#
# LICENCE:
#       Copyright (C) 2017-2018 Keith Nash.
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
# 80 columns
# Conventional use of namespace/package names.

package require Tcl 8.5-
package require Tk  8.5-

# ------------------------------------------------------------------------------
#  Module persistentSelection
# ------------------------------------------------------------------------------
# Module to retain a non-empty PRIMARY selection.
# The same persistent store is shared by all windows on the same display.
# A state diagram is provided in an OpenOffice document.
# A manual page exists.
#
# ---------------
# Text widget
# ---------------
# Use with text windows that are bound EITHER to Ntext 1.0b3 or above,
# OR to Text if the command persistentSelection::fixText has been run.
#
# Usage: Bind the persistentSelection::report command to <<Selection>>
# on text widgets, and supply %W as the 2nd argument.  For example:
#
#   package require persistentSelection
#   bind SomeTag <<Selection>> {::persistentSelection::report text %W}
#
# ---------------
# Entry widget
# ---------------
# Use only with entryPlus (package widgetPlus) or another suitable wrapper for
# the entry widget.
# - the Tk entry and ttk::entry widgets do not generate the <<Selection>> events
#   that this module needs.
#
# Usage: Bind the persistentSelection::report command to <<Selection>>
# on entryPlus widgets, and supply %W as the 2nd argument.  For example:
#
#   package require persistentSelection
#   bind SomeTag <<Selection>> {::persistentSelection::report entry %W}
#
# FIXME - not tested for multiple displays.
# The code uses a separate persistent store for each display.
# ------------------------------------------------------------------------------

namespace eval ::persistentSelection {
    variable PreviousSelection
    variable Stores
    variable Active
    variable toplevelCount     0
    variable oldTime           {}
    variable logCount          0

    # If these values are inconvenient, the caller may change them at any
    # time before it uses the selection.
    variable toplevelPrefix    ._for_persistent_selection
    variable textPath          ._hidden_persistent_selection

    namespace export fixText getClassicPrimarySel getPrimarySel report
}


# ------------------------------------------------------------------------------
#  Proc ::persistentSelection::CreateStoreFor
# ------------------------------------------------------------------------------
# Command to create a store for a persistent PRIMARY selection for a display.
#
# Arguments:
# displayOf     Tk window path of any window on the display.
# destroyOld    (boolean) whether or not to destroy the store (if any)
#               previously associated with the display.
#
# Return Value: none
# ------------------------------------------------------------------------------

proc ::persistentSelection::CreateStoreFor {displayOf {destroyOld 0}} {
    variable PreviousSelection
    variable Stores
    variable Active
    variable toplevelCount

    set screenName [winfo screen $displayOf]
    set PreviousSelection($screenName) {}
    set Active($screenName)            0

    if {$screenName eq [winfo screen .]} {
        DefineStore ._hidden_persistent_selection . $destroyOld
    } else {
        # First create and withdraw a toplevel $tl on this display:
        set tl ._for_persistent_selection[incr toplevelCount]
        if {$destroyOld && [info exists Stores($screenName)]} {
            destroy [winfo parent $Stores($screenName)]
        } else {
        }
        toplevel $tl -screen $screenName
        wm withdraw $tl
        DefineStore $tl._hidden_persistent_selection $displayOf
    }
    Show
    return
}


# ------------------------------------------------------------------------------
#  Proc ::persistentSelection::DefineStore
# ------------------------------------------------------------------------------
# Command to change the location of the store in the unlikely case that the
# existing value is not acceptable.
#
# There is no need to map the store, or give it any bindtags.
#
# Arguments:
# w             Tk window path for the window to be created.
# displayOf     Tk window path of any window on the same display.
# destroyOld    (boolean) whether or not to destroy the store (if any)
#               previously associated with the display.
#
# Return Value: none
# ------------------------------------------------------------------------------

proc ::persistentSelection::DefineStore {w {displayOf .} {destroyOld 0}} {
    variable Stores

    set screenName [winfo screen $displayOf]

    if {![info exists Stores($screenName)]} {
        set Stores($screenName) UNDEFINED
    }

    if {$destroyOld} {
        destroy $Stores($screenName)
    }

    set Stores($screenName) $w
    text      $Stores($screenName) -bg yellow -fg red
    bindtags  $Stores($screenName) {}
    return
}


# ------------------------------------------------------------------------------
#  Proc ::persistentSelection::GetEntrySelection
# ------------------------------------------------------------------------------
# Command to get the selection from an entry or ttk::entry widget
#
# Analogous to text widget's "$w get sel.first sel.last" - will return with
# error status if the selection does not exixt.
#
# Arguments:
# w             Tk window path of an entry or ttk::entry window
#
# Return Value: the selected text in $w, or error if none
# ------------------------------------------------------------------------------

proc ::persistentSelection::GetEntrySelection {w} {
    set contents  [$w get]
    set start     [$w index sel.first]
    set end       [$w index sel.last]
    string range $contents $start $end-1
    # N.B. Implicit Return
}


# ------------------------------------------------------------------------------
#  Proc ::persistentSelection::report
# ------------------------------------------------------------------------------
# Command to retain a non-empty PRIMARY selection.
# The same persistent store is shared by all windows w on the same display.
#
# Usage: Bind this command to <<Selection>> on text or entryPlus widgets, and
# supply %W as the 2nd argument.
# ------------------------------------------------------------------------------
# Nothing happens if bound to <<Selection>> on entry, ttk::entry, because these
# widgets do not support the <<Selection>> event.
#
# Called (in Kerlin) from KWE/quilt.tcl where it is bound to <<Selection>> in a
# revision to binding tag Ntext.
# ------------------------------------------------------------------------------


# ------------------------------------------------------------------------------
# When does the event <<Selection>> fire on text widget $w?
# When persistentSelection is in use, the events can be:
# ------------------------------------------------------------------------------
#
# =====    ================    ===================    ===========
# Label    Tag sel has been    Selection ownership    Response is
#           changed in $w          has moved
# =====    ================    ===================    ===========
#  (1)      from non-empty      no change ($w)          Y1
#           to   non-empty
#
#  (2)      from non-empty      no change ($w)          N2
#           to       empty
#
#  (3)      from     empty      no change (not $w)      Y2
#           to   non-empty
#
#  (4a)     from non-empty      from $w to other        AE
#           to       empty      (in this interp)
#
#  (4b)     from non-empty      from $w to other        N1
#           to       empty      (not in this interp)
#
#  (5)        no change         to $w                   Y1
#
#  (6)        no change         from $w to the          AE
#                               persistent store
# =====    ================    ===================    ===========

# "Response" is recorded in logs, and is defined by the branch taken in
# proc report.

# AE - no response because "Another Event is is active"
# Events (4a) and (4b) each report changes similar to those of events
# (2) and (6) combined.
# In (4a) and (4b), ownership of selection has moved from $w, AND as a result
# the sel tag has been changed in $w from non-empty to empty.

# Notes:
# When persistentSelection is in use, $w never has non-transient ownership of
# the selection when its sel tag is empty, and so does not own the selection in
# event (3).

proc ::persistentSelection::report {type w} {
    variable PreviousSelection
    variable Stores
    variable Active
    variable logCount

    if {![$w cget -exportselection]} {
        return
    }

    set screenName [winfo screen $w]

    if {![info exists Stores($screenName)]} {
        CreateStoreFor $w
    }

    # If $w has a selection, set selDat to its value; otherwise set selDat to {}
    set selDat {}
    if {$type eq "text"} {
        catch {set selDat [$w get sel.first sel.last]}
    } elseif {$type eq "entry"} {
        catch {set selDat [GetEntrySelection $w]}
    } else {
    }

    set selOwner [selection own -displayof $w]

    set i [incr logCount]
    Log "$i Start <<Selection>> $w with sel {$selDat} and owner {$selOwner}"

    if {$Active($screenName)} {
        # In 8.5, <<Selection>> events are not handled one at a time; all the
        # superposed events are unwanted.
        Log "$i AE another event is active, ignore event on $w"
    } elseif {$::tk_version ne {8.5-} && $selOwner eq $Stores($screenName)} {
        # In 8.6+, <<Selection>> events are handled one at a time; the unwanted
        # events are distinguished here ...
        Log "$i XX PS owns the selection, ignore event on $w"
    } elseif {$::tk_version ne {8.5} && $selOwner ne $w} {
        # ... and here.
        Log "$i YY $w does not own the selection, ignore event on $w"
    } else {
        set Active($screenName) 1
        # FIXME report errors
        catch {
            if {$selDat ne {}} {
                # Window $w has a selection.
                if {$selOwner eq $w} {
                    Log "$i Y1 $w -- {$selDat} -- {$selOwner}"
                    # Do not execute "selection own" - $w already owns the
                    # selection, and executing "selection own" again makes $w
                    # lose (and therefore clear) and then regain the selection.
                } else {
                    Log "$i Y2 $w -- {$selDat} -- {$selOwner}"
                    # This clears the selection in the window that has lost
                    # ownership. Any -command defined here in "selection own" is
                    # never executed.
                    selection own $w
                }
                set PreviousSelection($screenName) $selDat

            # Now cases with empty $selDat
            } elseif {$selOwner eq {}} {
                # The selection is owned by another process/interpreter.
                Log "$i N1 $w -- {$selDat} -- {$selOwner}"
                Log "$i Do not set hidden store"
                set PreviousSelection($screenName) {}
            } else {
                # The selection is still owned by this process/interpreter.

                # These operations move ownership of the selection to the
                # persistent store for this display, where it stays until
                # another selection is made on this display, in any process.
                Log "$i N2 $w -- {$selDat} -- {$selOwner}"
                Log "$i Set hidden store to $PreviousSelection($screenName)"
                Log "$i $Stores($screenName) gained PRIMARY Selection\
                        from $selOwner"

                $Stores($screenName) delete 1.0 end
                $Stores($screenName) insert end $PreviousSelection($screenName)
                $Stores($screenName) tag add sel 1.0 end-1c
                selection own -command [list ::persistentSelection::Clear \
                        $Stores($screenName)] $Stores($screenName)
                set PreviousSelection($screenName) {}

                Show
            }
        }
        set Active($screenName) 0
    }

    Log "$i End   <<Selection>> $w"
    return
}


# ------------------------------------------------------------------------------
#  Proc ::persistentSelection::getClassicPrimarySel
# ------------------------------------------------------------------------------
# Command to return the classic (non-persistent) form of the PRIMARY selection.
# No error if selection does not exist.
#
# Arguments:
# w           - (optional) Tk window path - used only for -displayof
# withOthers  - (optional, boolean, default false) whether to return the
#               selection if it is owned by another process/interpreter.
#
# Return Value: the PRIMARY selection on the display of $w, or {} if none
# ------------------------------------------------------------------------------
# Now (with revised getPrimarySel) allows out-of-process PRIMARY selection; the
# default is not to do so.
#
# Called (in Kerlin) by KWE/worksheet.tcl in the "Search" operation - to show
# selected text in the search box.
# ------------------------------------------------------------------------------

proc ::persistentSelection::getClassicPrimarySel {{w .} {withOthers 0}} {
    variable Stores
    set screenName [winfo screen $w]

    if {![info exists Stores($screenName)]} {
        CreateStoreFor $w
    }

    lappend forbidden $Stores($screenName)
    if {!$withOthers} {
        lappend forbidden {}
    }

    if {[selection own -displayof $w] in $forbidden} {
        return {}
    } else {
        return [getPrimarySel $w]
    }
    # N.B. Multiple Return.
}


# ------------------------------------------------------------------------------
#  Proc ::persistentSelection::getPrimarySel
# ------------------------------------------------------------------------------
# Command to return the PRIMARY selection.
# No error if selection does not exist.
#
# The Tk command is perfectly valid (and its equivalent is called here), but it
# is designed to raise an error if the selection does not exist.  This command
# catches the error and returns the empty string.
#
# Arguments:
# displayOf   - (optional) Tk window path - used only for -displayof
#
# Return Value: the PRIMARY selection on the display of $displayOf,
#               or {} if none
# ------------------------------------------------------------------------------
# Previously returned a value only if the selection was owned by this
# interpreter - found by testing ([selection own -displayof $displayOf] ne {}).
#
# Called (in Kerlin) from panels::textbox typemethod RawInsertAfter; if the
# result is non-empty, a new textbox will be created and a <<PasteSelection>>
# event will be generated there.
# ------------------------------------------------------------------------------

proc ::persistentSelection::getPrimarySel {{displayOf .}} {
    if {(![catch {GetSelection $displayOf PRIMARY} selectedText])
    } {
        # Selection has been copied into selectedText
    } else {
        set selectedText {}
    }
    return $selectedText
}


# ------------------------------------------------------------------------------
#  Proc ::persistentSelection::Clear
# ------------------------------------------------------------------------------
# Command executed when the persistent store $storeValue loses ownership of the
# PRIMARY selection.  Deletes the selection in the persistent store.
#
# Movement of ownership is lazy: it will not happen when another window has
# focus, it waits until a selection is made.
#
# Arguments:
# storeValue  - Tk window path of the persistent store
#
# Return Value: none
# ------------------------------------------------------------------------------

proc ::persistentSelection::Clear {storeValue} {
    set selOwner [selection own -displayof $storeValue]
    $storeValue delete 1.0 end

    Log "xx $storeValue lost PRIMARY Selection to $selOwner"
    Log "xx Set hidden store to {}"
    Show

    return
}


# ------------------------------------------------------------------------------
#  Proc ::persistentSelection::GetSelection
# ------------------------------------------------------------------------------
# This private Tk command ::tk::GetSelection is copied to avoid breakage if Tk
# evolves.
# It is copied without changes except its namespace, and removal from the error
# return of arguments -errorcode {TK SELECTION NONE}
#
# ::tk::GetSelection --
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
# ------------------------------------------------------------------------------

if {[tk windowingsystem] ne "win32"} {
    proc ::persistentSelection::GetSelection {w {sel PRIMARY}} {
	if {[catch {
	    selection get -displayof $w -selection $sel -type UTF8_STRING
	} txt] && [catch {
	    selection get -displayof $w -selection $sel
	} txt]} then {
	    return -code error \
		"could not find default selection"
	} else {
	    return $txt
	}
    }
} else {
    proc ::persistentSelection::GetSelection {w {sel PRIMARY}} {
	if {[catch {
	    selection get -displayof $w -selection $sel
	} txt]} then {
	    return -code error \
		"could not find default selection"
	} else {
	    return $txt
	}
    }
}


# ------------------------------------------------------------------------------
#  Proc ::persistentSelection::Log
# ------------------------------------------------------------------------------
# Command for use in debugging, to log events handled by this module.
#
# If required, this dummy command should be replaced with one that does
# something - see e.g. ::persistentSelection::LogExample
#
# Arguments:
# msg         - text to be reported
#
# Return Value: none
# ------------------------------------------------------------------------------

proc ::persistentSelection::Log msg {
}

# ------------------------------------------------------------------------------
#  Proc ::persistentSelection::Show
# ------------------------------------------------------------------------------
# Command for use in debugging, to display the contents of the persistent
# storage.
#
# If required, this dummy command should be replaced with one that does
# something - see e.g. ::persistentSelection::ShowExample
#
# Arguments:    none
# Return Value: none
# ------------------------------------------------------------------------------

proc ::persistentSelection::Show {} {
}


# ------------------------------------------------------------------------------
#  Proc ::persistentSelection::fixText
# ------------------------------------------------------------------------------
# Command to replace the command ::tk::TextSelectTo with one that is compatible
# with persistentStorage.
#
# First checks that the command is loaded, then examines the end of the
# procedure body and replaces it if possible.  If it is not possible, it
# replaces the entire procedure body with a suitable one.
#
# Arguments:    none
# Return Value: none
# ------------------------------------------------------------------------------

proc ::persistentSelection::fixText {} {
#indent-4

# --------------------------------------------------
# (0) Ensure text.tcl has been sourced.
# --------------------------------------------------

catch ::tk::TextSelectTo

# --------------------------------------------------
# (1) Fix Bindings: add extra <<Selection>> events,
#     omitted by the widget, to Tk versions < 8.6.9.
# --------------------------------------------------

if {![package vsatisfies [package require Tk] 8.6.9-]} {
#indent-4

bind Text <Delete> {
    if {[%W cget -state] eq "normal"} {
	if {[tk::TextCursorInSelection %W]} {
	    # When deleting the selection, make this an atomic operation on the Undo
	    # stack, i.e. separate it from other delete operations on either side.
	    if {[%W cget -autoseparators]} {
		%W edit separator
	    } else {
	    }
	    %W delete sel.first sel.last
	    if {[%W cget -autoseparators]} {
		%W edit separator
	    } else {
	    }
	    # The PRIMARY selection has changed but the widget does
	    # not generate this event.
	    event generate %W <<Selection>>
	} elseif {[%W compare end != insert+1i]} {
	    %W delete insert
	}
	%W see insert
    }
}

bind Text <<PasteSelection>> {
    if {$tk_strictMotif || ![info exists tk::Priv(mouseMoved)]
	    || !$tk::Priv(mouseMoved)} {
	tk::TextPasteSelection %W %x %y
    }
}

# Add this command for early Tk that do not have it.
proc ::tk::TextCursorInSelection {w} {
    expr {
	[llength [$w tag ranges sel]]
	&& [$w compare sel.first <= insert]
	&& [$w compare sel.last >= insert]
    }
}

proc ::tk::TextPasteSelection {w x y} {
    if {[$w cget -state] eq "normal"} {
	$w mark set insert [TextClosestGap $w $x $y]
	TextInsertSelection $w PRIMARY
	focus $w
    }
    return
}

proc ::tk_textCut w {
    if {![catch {set data [$w get sel.first sel.last]}]} {
	clipboard clear -displayof $w
	clipboard append -displayof $w $data

	if {([$w cget -state] eq "normal")} {
	    # make <<Cut>> an atomic operation on the Undo stack,
	    # i.e. separate it from other delete operations on either side
	    # (For older Tk? Check.) disable -autoseparators for the operation.
	    set oldSeparator [$w cget -autoseparators]
	    if {$oldSeparator} {
		$w configure -autoseparators 0
		$w edit separator
	    }

	    $w delete sel.first sel.last

	    if {$oldSeparator} {
		$w edit separator
		$w configure -autoseparators 1
	    }

	    # The PRIMARY selection has changed but the widget does
	    # not generate this event.
	    event generate $w <<Selection>>
	}
    }
    return
}

proc ::tk_textPaste w {
    if {[$w cget -state] eq "normal"} {
	::tk::TextInsertSelection $w CLIPBOARD
    }
    return
}

proc ::tk::TextInsertSelection {w selection} {
    if {[catch {::tk::GetSelection $w $selection} sel]} {
	return
    }
    set oldSeparator [$w cget -autoseparators]
    if {$oldSeparator} {
	$w configure -autoseparators 0
	$w edit separator
    }

    if {([$w tag nextrange sel 1.0 end] ne "")} {
        set oldSel [list [$w index sel.first] [$w index sel.last]]
    } else {
        set oldSel {}
    }

    set pos insert
    if {    ($selection eq "CLIPBOARD")
	 && ([tk windowingsystem] ne "x11")
	 && ([$w tag nextrange sel 1.0 end] ne "")
    } {
        set pos [$w index sel.first]
	$w delete sel.first sel.last
    }
    $w insert $pos $sel
    if {$oldSeparator} {
	$w edit separator
	$w configure -autoseparators 1
    }

    # The PRIMARY selection has changed but the widget does
    # not generate this event.
    if {    ($selection eq "PRIMARY")
	 && [TextCursorInSelection $w]
    } {
	event generate $w <<Selection>>
    }

    # The PRIMARY selection has changed but the widget does
    # not generate this event.
    # The operation doesn't change the value without changing the range,
    # so it is enough to consider the range.
    # The operation does not mark a selection if none existed before.
    if {    ($selection eq "CLIPBOARD")
	 && ($oldSel ne {})
	 && (    ([$w tag nextrange sel 1.0 end] eq "")
              || ([list [$w index sel.first] [$w index sel.last]] ne $oldSel)
            )
    } {
	event generate $w <<Selection>>
    }

    return
}

#indent+4
}


# --------------------------------------------------
# (2) Rewrite Proc ::tk::TextSelectTo.
# --------------------------------------------------

if {![package vsatisfies [package require Tk] 8.6.6-]} {
#indent-4


set replace {if {$Priv(mouseMoved) || ($Priv(selectMode) ne "char")} {
	$w mark set insert $cur
	$w tag remove sel 1.0 $first
	$w tag add sel $first $last
	$w tag remove sel $last end
	update idletasks
    }}

set needle {if {$Priv(mouseMoved) || ($Priv(selectMode) ne "char")} {
	$w tag remove sel 0.0 end
	$w mark set insert $cur
	$w tag add sel $first $last
	$w tag remove sel $last end
	update idletasks
    }}

set haystack [info body ::tk::TextSelectTo]

set srch [string last $needle $haystack]

if {$srch != -1} {
    # There's a match.  Now check it is followed only by whitespace,
    # and preceded by whitespace that includes a newline.
    set last [expr {$srch + [string length $needle] - 1}]
    set ndle [string range $haystack $srch $last]
    set post [string trim [string range $haystack $last+1 end]]
    set pre  [string range $haystack 0 $srch-1]
    set pres [string trimright $pre]
    set diff [string range $pre [string length $pres] end]
    if {[string trim $diff] eq {} && [string first \n $diff] != -1} {
        # All conditions met.  Redefine the function.
        set newBody $pre$replace\n\n
        proc ::tk::TextSelectTo {w x y {extend 0}} $newBody
        return
    }
}

# We're still here.  So define a standard proc (from Tk 8.6.8 with the
# code at the end replaced), and forgo any changes made to the proc it
# is replacing.

proc ::tk::TextSelectTo {w x y {extend 0}} {
    variable ::tk::Priv

    set anchorname [tk::TextAnchor $w]
    set cur [TextClosestGap $w $x $y]
    if {[catch {$w index $anchorname}]} {
	$w mark set $anchorname $cur
    }
    set anchor [$w index $anchorname]
    if {[$w compare $cur != $anchor] || (abs($Priv(pressX) - $x) >= 3)} {
	set Priv(mouseMoved) 1
    }
    switch -- $Priv(selectMode) {
	char {
	    if {[$w compare $cur < $anchorname]} {
		set first $cur
		set last $anchorname
	    } else {
		set first $anchorname
		set last $cur
	    }
	}
	word {
	    # Set initial range based only on the anchor (1 char min width)
	    if {[$w mark gravity $anchorname] eq "right"} {
		set first $anchorname
		set last "$anchorname + 1c"
	    } else {
		set first "$anchorname - 1c"
		set last $anchorname
	    }
	    # Extend range (if necessary) based on the current point
	    if {[$w compare $cur < $first]} {
		set first $cur
	    } elseif {[$w compare $cur > $last]} {
		set last $cur
	    }

	    # Now find word boundaries
	    set first [TextPrevPos $w "$first + 1c" tcl_wordBreakBefore]
	    set last [TextNextPos $w "$last - 1c" tcl_wordBreakAfter]
	}
	line {
	    # Set initial range based only on the anchor
	    set first "$anchorname linestart"
	    set last "$anchorname lineend"

	    # Extend range (if necessary) based on the current point
	    if {[$w compare $cur < $first]} {
		set first "$cur linestart"
	    } elseif {[$w compare $cur > $last]} {
		set last "$cur lineend"
	    }
	    set first [$w index $first]
	    set last [$w index "$last + 1c"]
	}
    }
#    if {$Priv(mouseMoved) || ($Priv(selectMode) ne "char")} {
#	$w tag remove sel 0.0 end
#	$w mark set insert $cur
#	$w tag add sel $first $last
#	$w tag remove sel $last end
#	update idletasks
#    }
    if {$Priv(mouseMoved) || ($Priv(selectMode) ne "char")} {
	$w mark set insert $cur
	$w tag remove sel 1.0 $first
	$w tag add sel $first $last
	$w tag remove sel $last end
	update idletasks
    }
}

#indent+4
}

return

#indent+4
}


# These commands are not called by anything, but are examples that the developer
# can call from ::persistentSelection::Log, ::persistentSelection::Show
# for debugging purposes.

# ------------------------------------------------------------------------------
#  Proc ::persistentSelection::LogExample
# ------------------------------------------------------------------------------
# Example logging command.  See ::persistentSelection::Log for specs.
#
# If debugging is required, define ::persistentSelection::Log to wrap a command
# like this one.  This example requires a text widget $w.
# ------------------------------------------------------------------------------

proc ::persistentSelection::LogExample {w level msg} {
    variable oldTime
    set pattern {^([0-9]*) Start( <<Selection>> .*$)}
    if {$level > 0} {
        set newTime [clock milliseconds]
        if {$oldTime eq {}} {
            set oldTime $newTime
        }

        if {$newTime - $oldTime > 200} {
            $w insert end \n
        }

        $w insert end $msg
        $w insert end \n
        $w see end-1c

        set oldTime $newTime
    } elseif {[regexp -- $pattern $msg all part1 part2]} {
        $w insert end $part1$part2
        $w insert end \n
        $w see end-1c
    }
    return
}


# ------------------------------------------------------------------------------
#  Proc ::persistentSelection::ShowExample
# ------------------------------------------------------------------------------
# Example command to show the contents of the persistent storage.
# See ::persistentSelection::Show for specs.
#
# If debugging is required, define ::persistentSelection::Show to wrap a command
# like this one.  This example requires a label widget $w.
# ------------------------------------------------------------------------------

proc ::persistentSelection::ShowExample {w} {
    variable Stores
    set msg {}
    foreach path [lsort [array names Stores]] {
        append msg "Persistent Store for display {$path} holds"
        append msg " {[$Stores($path) get 1.0 end-1c]}\n"
    }
    set msg [string range $msg 0 end-1]
    if {$msg eq {}} {
        set msg {Persistent Store is empty}
    }
    $w configure -text $msg
    return
}


# Older versions of Tk need this to be set in the file.
package provide persistentSelection 1.0b1
