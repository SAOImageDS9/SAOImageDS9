# ntext.tcl --
# derived from text.tcl
#
# This file defines the Ntext bindings for Tk text widgets and provides
# procedures that help in implementing the bindings.
#
# Copyright (c) 1992-1994 The Regents of the University of California.
# Copyright (c) 1994-1997 Sun Microsystems, Inc.
# Copyright (c) 1998 by Scriptics Corporation.
# Copyright (c) 2015-2017 Gregor Cramer
# Copyright (c) 2005-2018 additions by Keith Nash.
#
# See the file "license.terms" for information on usage and redistribution
# of this file, and for a DISCLAIMER OF ALL WARRANTIES.
#

##### START OF CODE THAT IS MODIFIED from the following versions of text.tcl:
#
# tag 8-6-8
#   2017-09-22 artifact [24e611b8] part of check-in [16815561] & [ba5ef805]
# branch core-8-6-branch
#   2017-09-22 artifact [24e611b8] part of check-in [8cc5e98d] & [ba5ef805]
# branch core-8-5-branch
#   2015-10-04 artifact [6af61544] part of check-in [ffd695c5] & [55133bde]
# trunk
#   2017-10-07 artifact [642cbaf3] part of check-in [06baa487] & [429e2357]
# branch revised_text
#   2018-01-15 artifact [a76837e9] part of check-in [74f86687]
#
# Not yet adapted to Androwish.


##########################################################################
# TODO: (from revised_text's text.tcl)
# Currently we cannot use identifier "begin" for very first index, because
# it has still lowest precedence, and this may clash if the application is
# using this identifier for marks. In a later version of this file all
# occurences of "1.0" should be replaced with "begin", as soon as "begin"
# has highest precedence.
##########################################################################
# TODO: (revised_text with Ntext)
# - Ntext tries to be compatible with all versions of Tk from 8.5 onwards.
# - Therefore Ntext sometimes keeps "unrevised text" code when this has
#   been replaced with a simpler equivalent in revised_text's text.tcl.
# - In other places Ntext uses [catch] to test for revised_text before
#   using its facilities.
# - Ntext does not use some revised_text code - these (and some other)
#   places can be discovered by searching for "revised_text".
# - Any Ntext code that breaks revised_text facilities (e.g. "watch") is
#   considered a bug.  Please report such bugs using the tklib tracker.
##########################################################################

#-------------------------------------------------------------------------
# Elements of ::tk::Priv that are used in this file:
#
# afterId -		If non-null, it means that auto-scanning is underway
#			and it gives the "after" id for the next auto-scan
#			command to be executed.
# char -		Character position on the line;  kept in order
#			to allow moving up or down past short lines while
#			still remembering the desired position.
# mouseMoved -		Non-zero means the mouse has moved a significant
#			amount since the button went down (so, for example,
#			start dragging out a selection).
# prevPos -		Used when moving up or down lines via the keyboard.
#			Keeps track of the previous insert position, so
#			we can distinguish a series of ups and downs, all
#			in a row, from a new up or down.
# selectMode -		The style of selection currently underway:
#			char, word, or line.
# x, y -		Last known mouse coordinates for scanning
#			and auto-scanning.
#-------------------------------------------------------------------------


# ------------------------------------------------------------------------------
# ntext no longer uses private commands ::tk::* from tk8.x/text.tcl.  Any
# necessary commands are defined below in the ::ntext namespace, even if the
# corresponding ::tk::* command from tk8.x/text.tcl is identical.  This makes
# ntext less likely to break in future if tk8.x/text.tcl is modified.
#
# ntext still uses the private array ::tk::Priv (shared with text.tcl etc) and
# the private command ::tk::GetSelection (from tk.tcl).  There is a small risk
# of breakage if one of these private items is altered in Tk.
# ------------------------------------------------------------------------------

# ------------------------------------------------------------------------------
#   <<Selection>> events
# ------------------------------------------------------------------------------
# - The text widget generates a <<Selection>> event when the "selection" method
#   changes the selected text.
# - For Tk earlier than 8.6.9, the text widget does not generate this event when
#   the selection range is changed by an "insert" or "delete" method.
# - When using "insert" or "delete" methods with these earlier versions of Tk,
#   it is the responsibility of the programmer to generate <<Selection>> events
#   if they are needed.  This bug was fixed in Tk 8.6.9.
# - The Ntext bindings mostly handle these cases appropriately (usually by using
#   the "tag" method to remove the selection, thereby generating a <<Selection>>
#   event).
# - In a few cases, a binding that calls an "insert" or "delete" method changes
#   the selection without causing the widget to generate a <<Selection>> event.
#   In these cases an "event generate" command has been added to the script.
# - The bindings affected are: <Delete>, <<PasteSelection>>, <<NtextCut>>.
# - The variable $::ntext::GenerateSelect records whether the version of Tk
#   requires these bindings to generate <<Selection>> events.
# ------------------------------------------------------------------------------

package require Tcl 8.5
package require Tk  8.5

# ------------------------------------------------------------------------------
# Define the set of common virtual events.
# ------------------------------------------------------------------------------
# These events are the ones from tk8.6/tk.tcl that are relevant to text widget
# bindings, renamed with the "Ntext" prefix, and modified as noted in comments.
#
# On macOS/Aqua:
# - the Control key is modifier "Control"
# - the Alt     key is modifier "Option"
# For discussion of Modifier Keys, see http://wiki.tcl.tk/28331
# ------------------------------------------------------------------------------


switch -exact -- [tk windowingsystem] {
    "x11" {
	# With the exception of points (1) to (3) below, the events <<Ntext*>>
	# are defined the same way as <<*>> in tk.tcl.
	event add <<NtextCut>>			<Control-Key-x> <Key-F20> <Control-Lock-Key-X>
	event add <<NtextCopy>>			<Control-Key-c> <Key-F16> <Control-Lock-Key-C>
	event add <<NtextPaste>>		<Control-Key-v> <Key-F18> <Control-Lock-Key-V>

	# (1) Use tk.tcl events for these:
	# event add <<PasteSelection>>
	# event add <<Undo>>
	# event add <<Redo>>
	# event add <<ContextMenu>>

	event add <<NtextSelectAll>>		<Control-Key-slash>
	event add <<NtextSelectNone>>		<Control-Key-backslash>
	event add <<NtextNextChar>>		<Right>
	event add <<NtextSelectNextChar>>	<Shift-Right>
	event add <<NtextPrevChar>>		<Left>
	event add <<NtextSelectPrevChar>>	<Shift-Left>
	event add <<NtextNextWord>>		<Control-Right>
	event add <<NtextSelectNextWord>>	<Control-Shift-Right>
	event add <<NtextPrevWord>>		<Control-Left>
	event add <<NtextSelectPrevWord>>	<Control-Shift-Left>
	event add <<NtextLineStart>>		<Home>
	event add <<NtextSelectLineStart>>	<Shift-Home>
	event add <<NtextLineEnd>>		<End>
	event add <<NtextSelectLineEnd>>	<Shift-End>
	event add <<NtextPrevLine>>		<Up>
	event add <<NtextNextLine>>		<Down>
	event add <<NtextSelectPrevLine>>	<Shift-Up>
	event add <<NtextSelectNextLine>>	<Shift-Down>
	event add <<NtextPrevPara>>		<Control-Up>
	event add <<NtextNextPara>>		<Control-Down>
	event add <<NtextSelectPrevPara>>	<Control-Shift-Up>
	event add <<NtextSelectNextPara>>	<Control-Shift-Down>

	# (2) Use tk.tcl events for these:
	# event add <<PrevWindow>>
	# event add <<ToggleSelection>>
	# (3) Define Emacs bindings in ::ntext::EmacsBindings the same way as in
	#     tk.tcl.
    }
    "win32" {
	# With the exception of points (1) to (4) below, the events <<Ntext*>>
	# are defined the same way as <<*>> in tk.tcl.

	event add <<NtextCut>>		<Control-Key-x> <Shift-Key-Delete> <Control-Lock-Key-X>
	event add <<NtextCopy>>		<Control-Key-c> <Control-Key-Insert> <Control-Lock-Key-C>
	event add <<NtextPaste>>	<Control-Key-v> <Shift-Key-Insert> <Control-Lock-Key-V>

	# (1) Use tk.tcl events for these:
	# event add <<PasteSelection>>
	# event add <<Undo>>
	# event add <<Redo>>
	# event add <<ContextMenu>>

	# (2) Tk 8.6 also adds <Control-Key-a> <Control-Lock-Key-A> to
	# <<SelectAll>>, adding this usage to win32 for the first time,
	# and removing all the "Emacs-like bindings" from win32 in order to
	# avoid conflict.
	# event add <<NtextSelectAll>>		<Control-Key-a> <Control-Lock-Key-A>
	event add <<NtextSelectAll>>		<Control-Key-slash>
	event add <<NtextSelectNone>>		<Control-Key-backslash>
	event add <<NtextNextChar>>		<Right>
	event add <<NtextSelectNextChar>>	<Shift-Right>
	event add <<NtextPrevChar>>		<Left>
	event add <<NtextSelectPrevChar>>	<Shift-Left>
	event add <<NtextNextWord>>		<Control-Right>
	event add <<NtextSelectNextWord>>	<Control-Shift-Right>
	event add <<NtextPrevWord>>		<Control-Left>
	event add <<NtextSelectPrevWord>>	<Control-Shift-Left>
	event add <<NtextLineStart>>		<Home>
	event add <<NtextSelectLineStart>>	<Shift-Home>
	event add <<NtextLineEnd>>		<End>
	event add <<NtextSelectLineEnd>>	<Shift-End>
	event add <<NtextPrevLine>>		<Up>
	event add <<NtextNextLine>>		<Down>
	event add <<NtextSelectPrevLine>>	<Shift-Up>
	event add <<NtextSelectNextLine>>	<Shift-Down>
	event add <<NtextPrevPara>>		<Control-Up>
	event add <<NtextNextPara>>		<Control-Down>
	event add <<NtextSelectPrevPara>>	<Control-Shift-Up>
	event add <<NtextSelectNextPara>>	<Control-Shift-Down>
	# (3) Use tk.tcl events for these:
	# event add <<ToggleSelection>>
	# (4) Define Emacs bindings in ::ntext::EmacsBindings the same way as in
	#     tk.tcl, but make them optional not omitted.
    }
    "aqua" {
	# With the exception of points (1) to (5) below, the events <<Ntext*>>
	# are defined the same way as <<*>> in tk.tcl.

	event add <<NtextCut>>   <Command-Key-x> <Key-F2> <Command-Lock-Key-X>
	event add <<NtextCopy>>  <Command-Key-c> <Key-F3> <Command-Lock-Key-C>
	event add <<NtextPaste>> <Command-Key-v> <Key-F4> <Command-Lock-Key-V>

	# <Shift-Key-Delete>, <Control-Key-Insert>, <Shift-Key-Insert> are not
	# standard bindings for Cut/Copy/Paste on macOS/Aqua - even with "Help"
	# in place of the non-existent "Insert" key.
	#
	# Official bindings
	# See http://support.apple.com/kb/HT1343
	# The traditional Tk <Control-Key-slash>, <Control-Key-backslash> will
	# no longer work on macOS/Aqua.

	# (1) Use the tk.tcl events for these:
	# event add <<PasteSelection>>
	# event add <<Clear>>
	# event add <<ContextMenu>>
	# event add <<Undo>>
	# event add <<Redo>>

	# (2) Allow the "Lock" modifier in the first two events (not done in tk.tcl).
	# (3) Define Emacs bindings in ::ntext::EmacsBindings the same way as in
	#     tk.tcl, but make them optional not mandatory.
	# For aqua the optional Emacs bindings are compatible with these "a"
	# commands because the Emacs bindings do not use the "Command" modifier.
	event add <<NtextSelectAll>>		<Command-Key-a> <Command-Lock-Key-A>
	event add <<NtextSelectNone>>		<Option-Command-Key-a> <Option-Command-Lock-Key-A>
	event add <<NtextNextChar>> 		<Right>
	event add <<NtextSelectNextChar>>	<Shift-Right>
	event add <<NtextPrevChar>> 		<Left>
	event add <<NtextSelectPrevChar>>	<Shift-Left>
	event add <<NtextNextWord>> 		<Option-Right>
	event add <<NtextSelectNextWord>>	<Shift-Option-Right>
	event add <<NtextPrevWord>> 		<Option-Left>
	event add <<NtextSelectPrevWord>>	<Shift-Option-Left>
	event add <<NtextLineStart>>		<Command-Left>
	event add <<NtextSelectLineStart>>	<Shift-Command-Left>
	event add <<NtextLineEnd>>	    	<Command-Right>
	event add <<NtextSelectLineEnd>>	<Shift-Command-Right>
	event add <<NtextPrevLine>> 		<Up>
	event add <<NtextSelectPrevLine>>	<Shift-Up>
	event add <<NtextNextLine>> 		<Down>
	event add <<NtextSelectNextLine>>	<Shift-Down>

	# (4) Omit these bindings which tk.tcl describes as "Not official, but
	#     logical extensions of above. Also derived from bindings present
	#     in MS Word on [macOS]."
	#
	# - Ntext does not define these virtual events on macOS/Aqua.
	# - Keyboard navigation works differently on macOS/Aqua from other
	#   platforms ("Option-Down" operations on macOS/Aqua move the insert
	#   mark to the next paragraph end, but on other platforms
	#   <<NtextNextPara>> moves the mark to the next paragraph start).
	# - It is unhelpful use the same virtual-event name to implement
	#   different behavior on different platforms.
	# - On the macOS/Aqua platform, we implement bindings to raw events, and
	#   leave these virtual events undefined.
	# - The boolean ::ntext::classicParagraphs allows the developer to
	#   choose either standard macOS/Aqua behavior (value 0, the default),
	#   or the same behavior as other platforms (value 1).
	#
	# event add <<NtextPrevPara>>		<Option-Up>
	# event add <<NtextNextPara>>		<Option-Down>
	# event add <<NtextSelectPrevPara>>	<Shift-Option-Up>
	# event add <<NtextSelectNextPara>>	<Shift-Option-Down>

	#     Unwanted bindings on Aqua:
	# (5) In tk.tcl these are listed as "Official bindings"; however,
	#     macOS/Aqua applications typically do not behave this way.
	#
	# We implement the macOS/Aqua-specific behavior using raw events, not
	# virtual events.
	# event add <<NtextLineStart>>		<Home>
	# event add <<NtextSelectLineStart>>	<Shift-Home>
	# event add <<NtextLineEnd>>		<End>
	# event add <<NtextSelectLineEnd>>	<Shift-End>
    }
}

# ------------------------------------------------------------------------------
# Clipboard events and tk_strictMotif
# ------------------------------------------------------------------------------
#    event add <<Cut>>   <Shift-Key-Delete>
#    event add <<Copy>>  <Control-Key-Insert>
#    event add <<Paste>> <Shift-Key-Insert>
# 8.5 does this only for win32, and it is unaffected by tk_strictMotif --
#      cf. 8.5.11, core-8.5-branch at 2013-01-14
# 8.6 adds and removes these events for X11 using a trace on tk_strictMotif --
# the trace exists only for X11; 8.6 adds events for win32 irrespective of
# the value of tk_strictMotif
#
# We want the extra bindings for X11 on 8.5, so it is most sensible to create
# NtextCut etc.
# ------------------------------------------------------------------------------

# In tk.tcl, the "Emacs bindings" are added here, for the aqua case only -
# they are not included for win32, and in x11 they are optional, applied with a
# trace.
# In ntext the Emacs bindings are optional for all windowingsystems.

# ------------------------------------------------------------------------------
# "Emacs-like bindings"
# ------------------------------------------------------------------------------
# These "Emacs-like bindings" (to characters "abefnp") are used in the Text
# binding tag.  In tk.tcl in Tk 8.6 they were removed for the win32
# windowingsystem, and they were added to the definitions of the virtual events
# <<NtextNextChar>> etc for the other windowing systems.
# Later versions of tk.tcl also removed the Emacs bindings
# from the virtual-event definitions for x11, and for that windowingsystem only
# they used a write trace on ::tk_strictMotif to add or remove the bindings by
# calling the command ::tk::EventMotifBindings.  I.e. the Emacs bindings are
# always on for aqua, always off for win32, and optional for x11.
#
# Ntext makes all these events optional, including for win32.  The events are
# managed by a write trace on the variables ::ntext::classicExtras and
# ::tk_strictMotif which calls the command ::ntext::EmacsBindings.
#
# The loss of the "Emacs-like bindings" from Text for win32 allows the use of
# <Control-a> for <<NtextSelectAll>>; however this usage is also common in X11
# applications, and illustrates why the "Emacs-like bindings" are often a bad
# idea: they often conflict with bindings used by win32/x11 applications,
# e.g. <Control-n> for "New Document", <Control-p> for "Print".
#
# In Ntext the "Emacs-like bindings" are switched off by default.
#
# Binding to virtual events instead of real events give a small saving in
# repeated code, but at the expense of tracing variables to maintain
# the effects of ::tk_strictMotif and ::ntext::classicExtras.
#
# event add <<NtextNextChar>>		<Control-Key-f> <Control-Lock-Key-F>
# event add <<NtextSelectNextChar>>	<Control-Key-F> <Control-Lock-Key-f>
# event add <<NtextPrevChar>>		<Control-Key-b> <Control-Lock-Key-B>
# event add <<NtextSelectPrevChar>>	<Control-Key-B> <Control-Lock-Key-b>
# event add <<NtextLineStart>>		<Control-Key-a> <Control-Lock-Key-A>
# event add <<NtextSelectLineStart>>	<Control-Key-A> <Control-Lock-Key-a>
# event add <<NtextLineEnd>>		<Control-Key-e> <Control-Lock-Key-E>
# event add <<NtextSelectLineEnd>>	<Control-Key-E> <Control-Lock-Key-e>
# event add <<NtextPrevLine>>		<Control-Key-p> <Control-Lock-Key-P>
# event add <<NtextSelectPrevLine>>	<Control-Key-P> <Control-Lock-Key-p>
# event add <<NtextNextLine>>		<Control-Key-n> <Control-Lock-Key-N>
# event add <<NtextSelectNextLine>>	<Control-Key-N> <Control-Lock-Key-n>
# (For Aqua, the real events may also have a "Shift" modifier.)
#
# Other "Emacs-like bindings" (to characters "dkot") are not associated with
# virtual events and are defined in the code below.
# ------------------------------------------------------------------------------


#-------------------------------------------------------------------------
# The code below creates the Ntext class bindings for text widgets.
#-------------------------------------------------------------------------

# Mouse bindings: use ::ntext::Bcount to deal with out-of-order multiple
# clicks. This permits the bindings to be simplified

bind Ntext <1> {
    set ::ntext::Bcount 1
    ntext::TextButton1 %W %x %y
    %W tag remove sel 1.0 end
}
bind Ntext <B1-Motion> {
    set tk::Priv(x) %x
    set tk::Priv(y) %y
    ntext::TextSelectTo %W %x %y
}
# Inside the if:
#   The previous Button-1 event was not a single-click, but a double, triple,
#   or quadruple.
#   We can simplify the bindings if we ensure that a double-click is
#   *always* preceded by a single-click.
#   So in this case run the same code as <1> before doing <Double-1>
bind Ntext <Double-1> {
    if {$::ntext::Bcount != 1} {
	set ::ntext::Bcount 1
	ntext::TextButton1 %W %x %y
	%W tag remove sel 1.0 end
    }
    set ::ntext::Bcount 2
    set tk::Priv(selectMode) word
    ntext::TextSelectTo %W %x %y
    catch {%W mark set insert sel.last}
    catch {%W mark set [ntext::TextAnchor %W] sel.first}
    catch {%W mark gravity [ntext::TextAnchor %W] right}
}
# ignore an out-of-order triple click.  This has no adverse consequences.
bind Ntext <Triple-1> {
    if {$::ntext::Bcount != 2} {
	continue
    }
    set ::ntext::Bcount 3
    set tk::Priv(selectMode) line
    ntext::TextSelectTo %W %x %y
    catch {%W mark set insert sel.last}
    catch {%W mark set [ntext::TextAnchor %W] sel.first}
    catch {%W mark gravity [ntext::TextAnchor %W] right}
}
# don't care if a quadruple click is out-of-order (i.e. follows a quadruple
# click, not a triple click).
bind Ntext <Quadruple-1> {
    set ::ntext::Bcount 4
}
bind Ntext <Shift-1> {
    set ::ntext::Bcount 1
    if {(!$::ntext::classicMouseSelect) && ([%W tag ranges sel] eq "")} {
	# Move the selection anchor mark to the old insert mark.
	# The anchor mark's gravity will be set by TextSelectTo.
	%W mark set [ntext::TextAnchor %W] insert
    }
    if {$::ntext::classicAnchor} {
	ntext::TextResetAnchor %W @%x,%y
	# if sel exists, sets anchor to end furthest from x,y
	# changes anchor only, not insert
    }
    set tk::Priv(selectMode) char
    ntext::TextSelectTo %W %x %y
}
# Inside the outer if:
#   The previous Button-1 event was not a single-click, but a double, triple,
#   or quadruple.
#   We can simplify the bindings if we ensure that a double-click is
#   *always* preceded by a single-click.
#   So in this case run the same code as <Shift-1> before doing <Double-Shift-1>
bind Ntext <Double-Shift-1>	{
    if {$::ntext::Bcount != 1} {
	set ::ntext::Bcount 1
	if {(!$::ntext::classicMouseSelect) && ([%W tag ranges sel] eq "")} {
	    # Move the selection anchor mark to the old insert mark.
	    # The anchor mark's gravity will be set by TextSelectTo.
	    %W mark set [ntext::TextAnchor %W] insert
	}
	if {$::ntext::classicAnchor} {
	    ntext::TextResetAnchor %W @%x,%y
	    # if sel exists, sets anchor to end furthest from x,y
	    # changes anchor only, not insert
	}
	set tk::Priv(selectMode) char
	ntext::TextSelectTo %W %x %y
    }
    set ::ntext::Bcount 2
    set tk::Priv(selectMode) word
    ntext::TextSelectTo %W %x %y 1
}
# ignore an out-of-order triple click.  This has no adverse consequences.
bind Ntext <Triple-Shift-1>	{
    if {$::ntext::Bcount != 2} {
	continue
    }
    set ::ntext::Bcount 3
    set tk::Priv(selectMode) line
    ntext::TextSelectTo %W %x %y
}
# don't care if a quadruple click is out-of-order (i.e. follows a quadruple
# click, not a triple click).
bind Ntext <Quadruple-Shift-1> {
    set ::ntext::Bcount 4
}
bind Ntext <B1-Leave> {
    set tk::Priv(x) %x
    set tk::Priv(y) %y
    ntext::TextAutoScan %W
}
bind Ntext <B1-Enter> {
    tk::CancelRepeat
}
bind Ntext <ButtonRelease-1> {
    tk::CancelRepeat
}
bind Ntext <Control-1> {
    %W mark set insert @%x,%y
    # An operation that moves the insert mark without making it
    # one end of the selection must insert an autoseparator
    if {[%W cget -autoseparators]} {
	%W edit separator
    }
}
# stop an accidental double click triggering <Double-Button-1>
bind Ntext <Double-Control-1> { # nothing }
# stop an accidental movement triggering <B1-Motion>
bind Ntext <Control-B1-Motion> { # nothing }
# revised_text uses displaychars not displayindices in <<PrevChar>>,
# <<NextChar>> <<SelectPrevChar>> <<SelectNextChar>>.  Ntext keeps
# displayindices so cursor navigation does not ignore embedded windows/images.
bind Ntext <<NtextPrevChar>> {
    ntext::AdjustInsert %W left
    ntext::TextSetCursor %W insert-1displayindices
}

bind Ntext <<NtextNextChar>> {
    ntext::AdjustInsert %W right
    ntext::TextSetCursor %W insert+1displayindices
}
bind Ntext <<NtextPrevLine>> {
    ntext::AdjustInsert %W left
    ntext::TextSetCursor %W [ntext::TextUpDownLine %W -1]
}
bind Ntext <<NtextNextLine>> {
    ntext::AdjustInsert %W right
    ntext::TextSetCursor %W [ntext::TextUpDownLine %W 1]
}
bind Ntext <<NtextSelectPrevChar>> {
    ntext::TextKeySelect %W [%W index {insert - 1displayindices}]
}
bind Ntext <<NtextSelectNextChar>> {
    ntext::TextKeySelect %W [%W index {insert + 1displayindices}]
}
bind Ntext <<NtextSelectPrevLine>> {
    ntext::TextKeySelect %W [ntext::TextUpDownLine %W -1 yes]
}
bind Ntext <<NtextSelectNextLine>> {
    ntext::TextKeySelect %W [ntext::TextUpDownLine %W 1 yes]
}
bind Ntext <<NtextPrevWord>> {
    ntext::AdjustInsert %W left
    ntext::TextSetCursor %W \
	    [ntext::TextPrevPos %W insert ntext::new_startOfPreviousWord]
}
bind Ntext <<NtextNextWord>> {
    ntext::AdjustInsert %W right
    ntext::TextSetCursor %W [ntext::TextNextWord %W insert]
}
bind Ntext <<NtextPrevPara>> {
    ntext::AdjustInsert %W left
    ntext::TextSetCursor %W [ntext::TextPrevPara %W insert]
}
bind Ntext <<NtextNextPara>> {
    ntext::AdjustInsert %W right
    ntext::TextSetCursor %W [ntext::TextNextPara %W insert]
}
bind Ntext <<NtextSelectPrevWord>> {
    ntext::TextKeySelect %W \
	    [ntext::TextPrevPos %W insert ntext::new_startOfPreviousWord]
}
bind Ntext <<NtextSelectNextWord>> {
    ntext::TextKeySelect %W [ntext::TextNextWord %W insert]
}
bind Ntext <<NtextSelectPrevPara>> {
    ntext::TextKeySelect %W [ntext::TextPrevPara %W insert]
}
bind Ntext <<NtextSelectNextPara>> {
    ntext::TextKeySelect %W [ntext::TextNextPara %W insert]
}
bind Ntext <Prior> {
    ntext::AdjustInsert %W left
    ntext::TextSetCursor %W [ntext::TextScrollPages %W -1 preScroll]
}
bind Ntext <Shift-Prior> {
    ntext::TextKeySelect %W [ntext::TextScrollPages %W -1 preScroll]
}
bind Ntext <Next> {
    ntext::AdjustInsert %W right
    ntext::TextSetCursor %W [ntext::TextScrollPages %W 1 preScroll]
}
bind Ntext <Shift-Next> {
    ntext::TextKeySelect %W [ntext::TextScrollPages %W 1 preScroll]
}
bind Ntext <Control-Prior> {
    %W xview scroll -1 page
}
bind Ntext <Control-Next> {
    %W xview scroll 1 page
}

bind Ntext <<NtextLineStart>> {
    ntext::AdjustInsert %W left
    ntext::TextSetCursor %W  [::ntext::HomeIndex %W insert]
}
bind Ntext <<NtextSelectLineStart>> {
    ntext::TextKeySelect %W [::ntext::HomeIndex %W insert]
}
bind Ntext <<NtextLineEnd>> {
    ntext::AdjustInsert %W right
    ntext::TextSetCursor %W  [::ntext::EndIndex %W insert]
}
bind Ntext <<NtextSelectLineEnd>> {
    ntext::TextKeySelect %W [::ntext::EndIndex %W insert]
}
bind Ntext <Control-Home> {
    #ntext::AdjustInsert %W left
    ntext::TextSetCursor %W 1.0
}
bind Ntext <Control-Shift-Home> {
    ntext::TextKeySelect %W 1.0
}
bind Ntext <Control-End> {
    #ntext::AdjustInsert %W right
    ntext::TextSetCursor %W {end - 1 indices}
}
bind Ntext <Control-Shift-End> {
    ntext::TextKeySelect %W {end - 1 indices}
}

bind Ntext <Tab> {
    if {[%W cget -state] eq "normal"} {
	ntext::TextInsert %W \t
	focus %W
	break
    }
}
bind Ntext <Shift-Tab> {
    # Needed only to keep <Tab> binding from triggering; doesn't
    # have to actually do anything.
    break
}
bind Ntext <Control-Tab> {
    focus [tk_focusNext %W]
}
bind Ntext <Control-Shift-Tab> {
    focus [tk_focusPrev %W]
}
bind Ntext <Control-i> {
    if {$::ntext::classicExtras} {
	ntext::TextInsert %W \t
    }
}
bind Ntext <Return> {
    if {[%W cget -state] eq "normal"} {
	ntext::TextInsert %W \n
	if {[%W cget -autoseparators]} {
	    %W edit separator
	}
    }
}
bind Ntext <Delete> {
    if {[%W cget -state] eq "normal"} {
	if {[ntext::TextCursorInSelection %W]} {
	    # When deleting the selection, make this an atomic operation on the Undo
	    # stack, i.e. separate it from other delete operations on either side.
	    if {[%W cget -autoseparators]} {
		%W edit separator
	    } else {
	    }
	    set ::ntext::OldFirst [%W index sel.first]
	    ntext::TextDelete %W sel.first sel.last
	    ntext::AdjustIndentOneLine %W $::ntext::OldFirst
	    if {[%W cget -autoseparators]} {
		%W edit separator
	    } else {
	    }
	    if {$::ntext::GenerateSelect} {
		# The PRIMARY selection has changed but the widget does
		# not generate this event.
		event generate %W <<Selection>>
	    } else {
	    }
	} elseif {[%W compare end != insert+1i]} {
	    %W delete insert
	    ntext::AdjustIndentOneLine %W insert
	}
	%W see insert
    }
}
bind Ntext <BackSpace> {
    if {[%W cget -state] eq "normal"} {
	if {[ntext::TextCursorInSelection %W]} {
	    set ::ntext::OldFirst [%W index sel.first]
	    ntext::TextDelete %W sel.first sel.last
	    ntext::AdjustIndentOneLine %W $::ntext::OldFirst
	} elseif {[%W compare insert != 1.0]} {
	    # ensure that this operation is triggering "watch"
	    %W mark set insert insert-1i
	    %W delete insert
	    ntext::AdjustIndentOneLine %W insert
	}
	%W see insert
    }
}

# This is present in early versions of
# 8.5 and intercepts the <Shift-Backspace> event.
catch {bind Ntext <Terminate_Server> {
    if {[ntext::TextCursorInSelection %W]} {
	set ::ntext::OldFirst [%W index sel.first]
	%W delete sel.first sel.last
	ntext::AdjustIndentOneLine %W $::ntext::OldFirst
    } elseif {[%W compare insert != 1.0]} {
	%W delete insert-1c
	ntext::AdjustIndentOneLine %W insert
    }
    %W see insert
}}

bind Ntext <Control-space> {
    if {$::ntext::classicExtras} {
	%W mark set [ntext::TextAnchor %W] insert
	%W mark gravity [ntext::TextAnchor %W] right
    }
}
bind Ntext <Select> {
    %W mark set [ntext::TextAnchor %W] insert
    %W mark gravity [ntext::TextAnchor %W] right
}
bind Ntext <Control-Shift-space> {
    if {$::ntext::classicExtras} {
	set tk::Priv(selectMode) char
	ntext::TextKeyExtend %W insert
    }
}
bind Ntext <Shift-Select> {
    set tk::Priv(selectMode) char
    ntext::TextKeyExtend %W insert
}
bind Ntext <<NtextSelectAll>> {
    %W tag add sel 1.0 end
}
bind Ntext <<NtextSelectNone>> {
    %W tag remove sel 1.0 end
    # An operation that clears the selection must insert an autoseparator,
    # because the selection operation may have moved the insert mark
    if {[%W cget -autoseparators]} {
	%W edit separator
    }
}
bind Ntext <<NtextCut>> {
    ntext::new_textCut %W
}
bind Ntext <<NtextCopy>> {
    ntext::new_textCopy %W
}
bind Ntext <<NtextPaste>> {
    ntext::new_textPaste %W
}
bind Ntext <<Clear>> {
    if {[%W cget -state] eq "normal"} {
	# Make <<Clear>> an atomic operation on the Undo stack,
	# i.e. separate it from other delete operations on either side
	if {[%W tag nextrange sel 1.0 end] ne ""} {
	    if {[%W cget -autoseparators]} {
		%W edit separator
	    }
	    set ::ntext::OldFirst [%W index sel.first]
	    ntext::TextDelete %W sel.first sel.last
	    ntext::AdjustIndentOneLine %W $::ntext::OldFirst
	    if {[%W cget -autoseparators]} {
		%W edit separator
	    }
	}
    }
}
bind Ntext <<PasteSelection>> {
    if {$tk_strictMotif || ![info exists tk::Priv(mouseMoved)] || !$tk::Priv(mouseMoved)} {
	ntext::TextPasteSelection %W %x %y
    }
}
# Implement Insert/Overwrite modes
bind Ntext <Insert> {
    set ntext::overwrite [expr !$ntext::overwrite]
    ::ntext::DefineCursor %W
}
bind Ntext <KeyPress> {
    ntext::TextInsert %W %A
}

# Ignore all Alt, Meta, and Control keypresses unless explicitly bound.
# Otherwise, if a widget binding for one of these is defined, the
# <KeyPress> class binding will also fire and insert the character,
# which is wrong.

bind Ntext <Alt-KeyPress> {# nothing }
bind Ntext <Meta-KeyPress> {# nothing}
bind Ntext <Control-KeyPress> {# nothing}
# Make Escape clear the selection
bind Ntext <Escape> {
    %W tag remove sel 1.0 end
    if {[%W cget -autoseparators]} {
	%W edit separator
    }
}
bind Ntext <KP_Enter> {# nothing}
if {[tk windowingsystem] eq "aqua"} {
    bind Ntext <Command-KeyPress> {# nothing}
}

# Additional Emacs-like bindings:
# cf. <Delete>, but not fixed for TextCursorInSelection and no see
bind Ntext <Control-d> {
    if {[%W cget -state] eq "normal" && $::ntext::classicExtras && !$tk_strictMotif &&
	    [%W compare end != insert+1i]} {
	%W delete insert
	ntext::AdjustIndentOneLine %W insert
    }
}
bind Ntext <Control-k> {
    if {[%W cget -state] eq "normal" && $::ntext::classicExtras && !$tk_strictMotif &&
	    [%W compare end != insert+1i]} {
	if {[%W compare insert == {insert lineend}]} {
	    %W delete insert
	} else {
	    %W delete insert {insert lineend}
	}
	ntext::AdjustIndentOneLine %W insert
    }
}
bind Ntext <Control-o> {
    if {[%W cget -state] eq "normal" && $::ntext::classicExtras && !$tk_strictMotif} {
	%W insert insert \n
	%W mark set insert insert-1i
	ntext::AdjustIndentOneLine %W "insert + 1 line"
    }
}
bind Ntext <Control-t> {
    if {$::ntext::classicExtras && !$tk_strictMotif} {
	ntext::TextTranspose %W
    }
}
bind Ntext <<Undo>> {
    if {[%W cget -state] eq "normal"} {
	# An Undo operation may remove the separator at the top of the Undo stack.
	# Then the item at the top of the stack gets merged with the subsequent
	# changes.
	# Place separators before and after Undo to prevent this.
	if {[%W cget -autoseparators]} {
	    %W edit separator
	}
	if {![catch { %W edit undo }]} {
	    # Cancel the selection so that Undo does not mess it up.
	    %W tag remove sel 1.0 end
	    # The undo stack does not record tags - so we need to reapply them.
	    ntext::AdjustIndentMultipleLines %W 1.0 end
	}
	if {[%W cget -autoseparators]} {
	    %W edit separator
	}
    }
}
bind Ntext <<Redo>> {
    if {[%W cget -state] eq "normal" && ![catch { %W edit redo }]} {
	# Cancel the selection so that Redo does not mess it up.
	%W tag remove sel 1.0 end
	# The redo stack does not record tags - so we need to reapply them.
	ntext::AdjustIndentMultipleLines %W 1.0 end
    }
}

# Which platforms use the Meta modifier?
# Not macOS/Aqua, PC/Windows or PC/Linux with standard keyboard.
# If you know, please give details at http://wiki.tcl.tk/28331
bind Ntext <Meta-b> {
    if {!$tk_strictMotif} {
	ntext::AdjustInsert %W left
	ntext::TextSetCursor %W \
		[ntext::TextPrevPos %W insert ntext::new_startOfPreviousWord]
    }
}
bind Ntext <Meta-d> {
    if {!$tk_strictMotif && [%W compare end != insert+1i]} {
	%W delete insert [ntext::TextNextWord %W insert]
	ntext::AdjustIndentOneLine %W insert
    }
}
bind Ntext <Meta-f> {
    if {!$tk_strictMotif} {
	ntext::AdjustInsert %W right
	ntext::TextSetCursor %W [ntext::TextNextWord %W insert]
    }
}
bind Ntext <Meta-less> {
    if {!$tk_strictMotif} {
	#ntext::AdjustInsert %W left
	ntext::TextSetCursor %W 1.0
    }
}
bind Ntext <Meta-greater> {
    if {!$tk_strictMotif} {
	#ntext::AdjustInsert %W right
	ntext::TextSetCursor %W end-1i
    }
}
bind Ntext <Meta-BackSpace> {
    if {[%W cget -state] eq "normal" && !$tk_strictMotif} {
	ntext::TextDelete %W [ntext::TextPrevPos %W insert ntext::new_startOfPreviousWord] insert
    }
    ntext::AdjustIndentOneLine %W insert
}
bind Ntext <Meta-Delete> {
    if {[%W cget -state] eq "normal" && !$tk_strictMotif} {
	ntext::TextDelete %W [ntext::TextPrevPos %W insert ntext::new_startOfPreviousWord] insert
    }
    ntext::AdjustIndentOneLine %W insert
}

# Non-macOS/Aqua bindings:

if {[tk windowingsystem] eq "aqua"} {
    # There is no insert/overwrite switch.  The widget is always in insert mode.
} else {
    # The <Insert> key is the insert/overwrite switch.
    # The cursor color indicates the insert/overwrite state.
    # Make sure it is in sync with the all-widgets value of ::ntext::overwrite.
    bind Ntext <FocusIn> {
	::ntext::DefineCursor %W
    }
}


# macOS/Aqua only bindings:
#
# The following virtual events are not defined on the macOS/Aqua platform:
#   <<NtextPrevPara>>
#   <<NtextNextPara>>
#   <<NtextSelectPrevPara>>
#   <<NtextSelectNextPara>>
# Ntext uses the raw events <Option-Up>, <Option-Down>, <Shift-Option-Up>,
# <Shift-Option-Down> instead.
#
# In contrast, tk.tcl, text.tcl, and the Text binding tag use virtual events.
# For discussion, see the virtual event definitions above.

if {[tk windowingsystem] eq "aqua"} {
# Some of the bindings above for non-virtual events must be replaced.
# Other macOS/Aqua-specific bindings must be added.


# (0) Non-Printing Keypresses

# On Aqua versions where non-printing keypresses emit a character, those events
# use the Mod4 modifier.  The binding below prevents binding to <KeyPress>, but
# not to a more specific binding, if it exists.  E.g. <KeyPress-F5> etc are
# deemed more specific.

catch {bind Ntext <Mod4-KeyPress> {# nothing}}

# (1) Prior/Next with/without Modifier Keys.

# In non-Aqua, <Prior>, <Next> and modifications with Shift move the insert
# mark - they behave like <Up>/<<NtextPrevLine>>, <Down>/<<NtextNextLine>>
# but with a larger increment.  With the Control modifier, scrolling is
# horizontal and does NOT move the insert mark.

# In Aqua, <Prior>, <Next> DO NOT move the insert mark; The Control modifier
# DOES move the insert mark, and the Shift modifier DOES move the insert mark
# AND also extends the selection.
#
# In Tk, if <Control-Shift-Prior> is undefined it does same as <Control-Prior>,
# not the same as <Shift-Prior>.
# This behavior agrees with other macOS/Aqua applications, and it leaves
# macOS/Aqua (unlike other windowing systems) with no keyboard bindings for
# horizontal scrolling.

bind Ntext <Control-Prior> {
    ntext::AdjustInsert %W left
    ntext::TextSetCursor %W [ntext::TextScrollPages %W -1 preScroll]
}
bind Ntext <Shift-Prior> {
    ntext::TextKeySelect %W [ntext::TextScrollPages %W -1 preScroll]
}
bind Ntext <Control-Next> {
    ntext::AdjustInsert %W right
    ntext::TextSetCursor %W [ntext::TextScrollPages %W 1 preScroll]
}
bind Ntext <Shift-Next> {
    ntext::TextKeySelect %W [ntext::TextScrollPages %W 1 preScroll]
}
bind Ntext <Prior> {
    %W yview scroll -1 page
}
bind Ntext <Next> {
    %W yview scroll 1 page
}

# Extra Bindings:
# Option-Prior, Option-Next do the same as Control-Prior, Control-Next;
# the Shift modifier has no effect.
bind Ntext <Option-Prior> {
    ntext::AdjustInsert %W left
    ntext::TextSetCursor %W [ntext::TextScrollPages %W -1 preScroll]
}
bind Ntext <Option-Next> {
    ntext::AdjustInsert %W right
    ntext::TextSetCursor %W [ntext::TextScrollPages %W 1 preScroll]
}

# Stop these firing as <Prior>, <Next>:
bind Ntext <Command-Prior> {# nothing}
bind Ntext <Command-Next>  {# nothing}


# (2) Home/End with/without Modifier Keys.
# This usage is conventional macOS/Aqua behavior; note that tk.tcl makes
# these events do <<?Select?Line(Start|End)>> like on other platforms.

bind Ntext <Home> {
    %W see 1.0
}
bind Ntext <End> {
    %W see {end - 1 indices}
}
bind Ntext <Shift-Home> {
    ntext::TextKeySelect %W 1.0
}
bind Ntext <Shift-End> {
    ntext::TextKeySelect %W {end - 1 indices}
}

# Stop these firing as <Home>:
bind Ntext <Control-Home>       {# nothing}
bind Ntext <Control-Shift-Home> {# nothing}
bind Ntext <Command-Home>       {# nothing}
bind Ntext <Option-Home>        {# nothing}


# Stop these firing as <End>:
bind Ntext <Control-End>       {# nothing}
bind Ntext <Control-Shift-End> {# nothing}
bind Ntext <Command-End>       {# nothing}
bind Ntext <Option-End>        {# nothing}


###
# <Up>, <Down>, <Shift-Up>, <Shift-Down> (move by 1 line)
# Wrapped as <<NtextPrevLine>>, <<NtextNextLine>>, <<NtextSelectPrevLine>>,
# <<NtextSelectNextLine>>.
# Same for all platforms, no changes needed for macOS/Aqua.
###


# (3) Command-Up, Command-Down, with/without Shift Modifier.

# <Command-Up>, <Command-Down>, <Command-Shift-Up>, <Command-Shift-Down> are
# implemented below, and are the macOS/Aqua equivalents of
# <Control-Home>, <Control-Shift-Home>, <Control-End>, <Control-Shift-End>
# respectively.  We could define some events -
# <<NtextTop>>, <<NtextSelectTop>>, <<NtextBottom>>, <<NtextSelectBottom>>

bind Ntext <Command-Up> {
    #ntext::AdjustInsert %W left
    ntext::TextSetCursor %W 1.0
}
bind Ntext <Command-Shift-Up> {
    ntext::TextKeySelect %W 1.0
}
bind Ntext <Command-Down> {
    #ntext::AdjustInsert %W right
    ntext::TextSetCursor %W {end - 1 indices}
}
bind Ntext <Command-Shift-Down> {
    ntext::TextKeySelect %W {end - 1 indices}
}


# (4) Control-(Left|Right|Up|Down), with/without Shift Modifier.
#
# In recent versions of macOS/Aqua, these keyboard events are intercepted by the
# windowing system, and are not delivered to the application.
#
# These null bindings ensure that these events are not interpreted as
# <(Up|Down|Left|Right)> on older versions of macOS/Aqua that do not
# intercept these events.

bind Ntext <Control-Left>  {# nothing}
bind Ntext <Control-Right> {# nothing}
bind Ntext <Control-Up>    {# nothing}
bind Ntext <Control-Down>  {# nothing}


# (5) Option-Up, Option-Down, with/without Shift Modifier
# These Option (Alt key) bindings are not provided on other platforms.
# The outcome depends on the value of classicParagraphs.

# if {$::ntext::classicParagraphs}
# Do what non-macOS/Aqua Tk applications do (for Control-Up etc): navigate between
# paragraph starts, with movement of the insert mark.  The start of a paragraph
# is the first non-blank character after a blank line.
#
# This behavior differs from that of other Aqua applications.

# if {!$::ntext::classicParagraphs}
# Do what other macOS/Aqua applications do: logical line navigation, with
# movement of the insert mark.
#
# - Option-Up goes to the previous {start of a logical line}.
# - Option-Down goes to the next {end of a logical line}.
# - Shift-Option-(Up|Down) allow selection.

bind Ntext <Option-Up> {
    if {$::ntext::classicParagraphs} {
	# Like Tk Text on Aqua.
	ntext::AdjustInsert %W left
	ntext::TextSetCursor %W [ntext::TextPrevPara %W insert]
    } else {
	# Like Aqua's TextEdit
	ntext::AdjustInsert %W left
	ntext::TextSetCursor %W [::ntext::MacHomeIndex %W insert]
    }
}
bind Ntext <Option-Down> {
    if {$::ntext::classicParagraphs} {
	# Like Tk Text on Aqua.
	ntext::AdjustInsert %W right
	ntext::TextSetCursor %W [ntext::TextNextPara %W insert]
    } else {
	# Like Aqua's TextEdit
	ntext::AdjustInsert %W right
	ntext::TextSetCursor %W [::ntext::MacEndIndex %W insert]
    }
}
bind Ntext <Shift-Option-Up> {
    if {$::ntext::classicParagraphs} {
	# Like Tk Text on Aqua.
	ntext::TextKeySelect %W [ntext::TextPrevPara %W insert]
    } else {
	# Like Aqua's TextEdit
	ntext::TextKeySelect %W [::ntext::MacHomeIndex %W insert]
    }
}
bind Ntext <Shift-Option-Down> {
    if {$::ntext::classicParagraphs} {
	# Like Tk Text on Aqua.
	ntext::TextKeySelect %W [ntext::TextNextPara %W insert]
    } else {
	# Like Aqua's TextEdit
	ntext::TextKeySelect %W [::ntext::MacEndIndex %W insert]
    }
}


# (6) Control-v - a macOS/Aqua-only binding to scroll down a page.
#
# macOS/Aqua TextEdit and Xcode move the insert mark as well as scrolling.
# Do the same here, using ntext::TextScrollPages. In contrast, Text's
# tk::TextScrollPages only scrolls, and does not move the insert mark.
# Does the same as macOS/Aqua's <Control-Next>.
#
# N.B. There seems to be no counterpart binding for scrolling up.  Don't Mac
# users need to scroll up as well as down? Feedback from Mac users please.
#
# Remove this binding.

#bind Ntext <Control-v> {
###    tk::TextScrollPages %W 1
##    %W yview scroll 1 pages
#    ntext::AdjustInsert %W right
#    ntext::TextSetCursor %W [ntext::TextScrollPages %W +1 preScroll]
#}

# bind Ntext <Control-Shift-v> {# nothing}

# End of macOS/Aqua-only bindings
}

# A few additional bindings of my own.
# cf. <BackSpace>, but not fixed for TextCursorInSelection
bind Ntext <Control-h> {
    if {    ([%W cget -state] eq "normal")
	 && $::ntext::classicExtras
	 && (!$tk_strictMotif)
	 && [%W compare insert != 1.0]
    } {
	# ensure that this operation is triggering "watch"
	%W mark set insert insert-1i
	%W delete insert
	%W see insert
	ntext::AdjustIndentOneLine %W insert
    }
}

if {[tk windowingsystem] eq "aqua"} {
    bind Ntext <3> {
	if {!$tk_strictMotif} {
	    ntext::TextScanMark %W %x %y
	}
    }
    bind Ntext <B3-Motion> {
	if {!$tk_strictMotif} {
	    ntext::TextScanDrag %W %x %y
	}
    }
} else {
    bind Ntext <2> {
	if {!$tk_strictMotif} {
	    ntext::TextScanMark %W %x %y
	}
    }
    bind Ntext <B2-Motion> {
	if {!$tk_strictMotif} {
	    ntext::TextScanDrag %W %x %y
	}
    }
}
set ::tk::Priv(prevPos) {}

# The MouseWheel events:

# We must be careful not to round -ve values of %D down to zero.

if {[tk windowingsystem] eq "aqua"} {
    bind Ntext <MouseWheel> {
	%W yview scroll [expr {-15 * (%D)}] pixels
    }
    bind Ntext <Option-MouseWheel> {
	%W yview scroll [expr {-150 * (%D)}] pixels
    }
    bind Ntext <Shift-MouseWheel> {
	%W xview scroll [expr {-15 * (%D)}] pixels
    }
    bind Ntext <Shift-Option-MouseWheel> {
	%W xview scroll [expr {-150 * (%D)}] pixels
    }
} else {
    # We must make sure that positive and negative movements are rounded
    # equally to integers, avoiding the problem that
    #     (int)1/3 = 0,
    # but
    #     (int)-1/3 = -1
    # The following code ensure equal +/- behaviour.
    bind Ntext <MouseWheel> {
	%W yview scroll [expr {%D >= 0 ? -%D/3 : (2-%D)/3}] pixels
    }
    bind Ntext <Shift-MouseWheel> {
	%W xview scroll [expr {%D >= 0 ? -%D/3 : (2-%D)/3}] pixels
    }
}

if {"x11" eq [tk windowingsystem]} {
    # Support for mousewheels on Linux/Unix commonly comes through mapping
    # the wheel to the extended buttons.  If you have a mousewheel, find
    # Linux configuration info at:
    #	http://linuxreviews.org/howtos/xfree/mouse/
    bind Ntext <4> {
	if {!$tk_strictMotif} {
	    %W yview scroll -50 pixels
	}
    }
    bind Ntext <5> {
	if {!$tk_strictMotif} {
	    %W yview scroll +50 pixels
	}
    }
    bind Ntext <Shift-4> {
	if {!$tk_strictMotif} {
	    %W xview scroll -50 pixels
	}
    }
    bind Ntext <Shift-5> {
	if {!$tk_strictMotif} {
	    %W xview scroll +50 pixels
	}
    }
}

bind Ntext <Configure> {
    ::ntext::AdjustIndentMultipleLines %W 1.0 end
}

bind Ntext <Destroy> {
    unset -nocomplain ::ntext::OldSelectMode(%W)
    unset -nocomplain ::ntext::OldInsertBackground(%W)
}


##### End of bindings. Now define the namespace and its variables.

namespace eval ::ntext {

    namespace export createMatchPatterns initializeMatchPatterns
    namespace export new_endOfWord new_textCopy new_textCut new_textPaste
    namespace export new_startOfNextWord new_startOfPreviousWord
    namespace export new_wordBreakAfter new_wordBreakBefore wrapIndent

    # Variables that control the behaviour of certain bindings and may be
    # changed by the user's script
    # Set to 1 for "classic Text" style (the Tk defaults), 0 for "Ntext" style

    # Whether Shift-Button-1 has a variable or fixed anchor
    variable classicAnchor      0

    # Whether to activate certain traditional "extra" bindings
    variable classicExtras      0

    # Whether Shift-Button-1 ignores changes made by the keyboard to the insert
    # mark
    variable classicMouseSelect 0

    # Type of word-boundary search
    variable classicWordBreak   0

    # Whether to use -lmargin2 to align the wrapped display lines with their
    # own first display line
    variable classicWrap        1

    # Advanced use (see man page): align to this character on the first display
    # line
    variable newWrapRegexp   {[^[:space:]]}

    # Variable that sets overwrite/insert mode: may be changed by the user's
    # script but is normally controlled by a binding to <KeyPress-Insert>
    variable overwrite          0

    # Debugging aid for developers: sets the background color for each logical
    # line according to the magnitude of its hanging (-lmargin2) indent.
    variable lm2IndentDebug     0

    # Color to use for the hanging (-lmargin2) indent itself.
    # Set to {} for no color.
    variable indentColor        #d9d9d9

    # Whether to use the -blockcursor when in "overwrite" mode (the alternative
    # is a change of color).  Defaults to YES iff 8.5.12 or over.  For earlier
    # versions a bug made the -blockcursor fill the whole of a newline.
    variable useBlockCursor     [expr {[package vsatisfies [package require Tk] 8.5.12-]}]

    # When a keystroke cancels a selection, is the position of the insert mark
    # preserved, or does it jump to the "appropriate" end of the selection?
    if {[tk windowingsystem] eq "aqua"} {
	variable classicSelection   0
    } else {
	variable classicSelection   1
    }

    # Whether or not the macOS/Aqua bindings <?Shift-?Option-(Up|Down)> should use
    # classic Tk paragraphs rather than trying to emulate those of other macOS/Aqua
    # applications:
    variable classicParagraphs      0

    # Variables that will hold regexp's for word boundary detection

    variable tcl_match_wordBreakAfter
    variable tcl_match_wordBreakBefore
    variable tcl_match_endOfWord
    variable tcl_match_startOfNextWord
    variable tcl_match_startOfPreviousWord

    # These variables are for internal use by ntext only. They should not be
    # modified by the user's script.
    variable GenerateSelect [expr {![package vsatisfies [package require Tk] 8.6.9-]}]
    variable Bcount         0
    variable OldFirst       {}
    # arrays:
    variable OldSelectMode
    variable OldInsertBackground

    if {[tk windowingsystem] eq "aqua"} {
	variable EmacsEvents {
	    <<NtextNextChar>>		<Control-Key-f>       <Control-Lock-Key-F>
	    <<NtextSelectNextChar>> 	<Control-Shift-Key-F> <Control-Shift-Lock-Key-F>
	    <<NtextPrevChar>>		<Control-Key-b>       <Control-Lock-Key-B>
	    <<NtextSelectPrevChar>> 	<Control-Shift-Key-B> <Control-Shift-Lock-Key-B>
	    <<NtextLineStart>>		<Control-Key-a>       <Control-Lock-Key-A>
	    <<NtextSelectLineStart>>	<Control-Shift-Key-A> <Control-Shift-Lock-Key-A>
	    <<NtextLineEnd>>		<Control-Key-e>       <Control-Lock-Key-E>
	    <<NtextSelectLineEnd>>  	<Control-Shift-Key-E> <Control-Shift-Lock-Key-E>
	    <<NtextPrevLine>>		<Control-Key-p>       <Control-Lock-Key-P>
	    <<NtextSelectPrevLine>> 	<Control-Shift-Key-P> <Control-Shift-Lock-Key-P>
	    <<NtextNextLine>>		<Control-Key-n>       <Control-Lock-Key-N>
	    <<NtextSelectNextLine>> 	<Control-Shift-Key-N> <Control-Shift-Lock-Key-N>
	}
    } else {
	variable EmacsEvents {
	    <<NtextNextChar>>		<Control-Key-f> <Control-Lock-Key-F>
	    <<NtextSelectNextChar>> 	<Control-Key-F> <Control-Lock-Key-f>
	    <<NtextPrevChar>>		<Control-Key-b> <Control-Lock-Key-B>
	    <<NtextSelectPrevChar>> 	<Control-Key-B> <Control-Lock-Key-b>
	    <<NtextLineStart>>		<Control-Key-a> <Control-Lock-Key-A>
	    <<NtextSelectLineStart>>	<Control-Key-A> <Control-Lock-Key-a>
	    <<NtextLineEnd>>		<Control-Key-e> <Control-Lock-Key-E>
	    <<NtextSelectLineEnd>>  	<Control-Key-E> <Control-Lock-Key-e>
	    <<NtextPrevLine>>		<Control-Key-p> <Control-Lock-Key-P>
	    <<NtextSelectPrevLine>> 	<Control-Key-P> <Control-Lock-Key-p>
	    <<NtextNextLine>>		<Control-Key-n> <Control-Lock-Key-N>
	    <<NtextSelectNextLine>> 	<Control-Key-N> <Control-Lock-Key-n>
	}
    }

    trace add variable ::ntext::classicExtras write ::ntext::EmacsBindings
    trace add variable ::tk_strictMotif       write ::ntext::EmacsBindings
}


##### End of namespace definition.  Now define the procs.

# ::ntext::EmacsBindings --
# Command bound to traces on variables ::ntext::classicExtras and
# ::tk_strictMotif, to add or remove the "Emacs bindings" whenever the values
# of these variables change.

proc ::ntext::EmacsBindings {argVarName var2 action} {
    variable EmacsEvents
    variable classicExtras

    if {$::ntext::classicExtras && !$::tk_strictMotif} {
	set op add
    } else {
	set op delete
    }

    foreach {virtual real1 real2} $EmacsEvents {
	event $op $virtual $real1 $real2
    }

    if {[tk windowingsystem] eq "x11"} {
	if {!$::tk_strictMotif} {
	    set op2 add
	} else {
	    set op2 delete
	}

	event $op2 <<NtextCut>> <Control-Key-w> <Control-Lock-Key-W> <Shift-Key-Delete>
	event $op2 <<NtextCopy>> <Meta-Key-w> <Meta-Lock-Key-W> <Control-Key-Insert>
	event $op2 <<NtextPaste>> <Control-Key-y> <Control-Lock-Key-Y> <Shift-Key-Insert>
    }

    return
}

# Trigger the trace, to call ::ntext::EmacsBindings for the first time.
set ::tk_strictMotif $::tk_strictMotif



# ::tk::TextCursorPos --
# Given x and y coordinates, this procedure computes the "cursor"
# position, and returns the index of the character at this position.
#
# Arguments:
# w -		The text window.
# x -		X-coordinate within the window.
# y -		Y-coordinate within the window.

proc ::ntext::TextCursorPos {w x y} {
    if {[$w cget -blockcursor]} {
	# If we have a block cursor, then use the actual x-position
	# for cursor position.
	return [$w index @$x,$y]
    }
    return [TextClosestGap $w $x $y]
}

# ::tk::TextClosestGap --
# Given x and y coordinates, this procedure finds the closest boundary
# between characters to the given coordinates and returns the index
# of the character just after the boundary.
#
# Arguments:
# w -		The text window.
# x -		X-coordinate within the window.
# y -		Y-coordinate within the window.

# ::ntext::TextClosestGap --
# modified to fix the jump-to-next-line issue.

proc ::ntext::TextClosestGap {w x y} {
    set pos [$w index @$x,$y]
    set bbox [$w bbox $pos]
    if {[llength $bbox] == 0} {
	return $pos
    }
    if {($x - [lindex $bbox 0]) < ([lindex $bbox 2]/2)} {
	return $pos
    }

    # Never return a position that will place the cursor on the next display
    # line. This used to happen if $x is closer to the end of the display line
    # than to its last character.
    if {[$w cget -wrap] eq "word"} {
	set lineType displaylines
    } else {
	set lineType lines
    }
    if {[$w count -$lineType $pos "$pos + 1i"] != 0} {
	return $pos
    } else {
    }

    $w index "$pos + 1i"
}

# ::tk::TextButton1 --
# This procedure is invoked to handle button-1 presses in text
# widgets.  It moves the insertion cursor, sets the selection anchor,
# and claims the input focus.
#
# Arguments:
# w -		The text window in which the button was pressed.
# x -		The x-coordinate of the button press.
# y -		The x-coordinate of the button press.

# ::ntext::TextButton1 --
# Modified to call TextAnchor not tk::TextAnchor.

proc ::ntext::TextButton1 {w x y} {
    variable ::tk::Priv

    # Catch the very special case with dead peers.
    if {[catch {$w isdead} result] || !$result} {
	set Priv(selectMode) char
	set Priv(mouseMoved) 0
	set Priv(pressX) $x

	# "Wrong line" position adjustment -
	# revised_text does it here, ntext does it in TextClosestGap.
	$w mark set insert [TextCursorPos $w $x $y]

	set anchorname [TextAnchor $w]
	$w mark set $anchorname insert
#	# revised_text adjusts $anchorname (if -blockcursor) using
#	# TextClosestGap.  ntext does not do this.
#	if {[$w cget -blockcursor]} {
#	    $w mark set $anchorname [TextClosestGap $w $x $y]
#	} else {
#	    # this is already the closest gap
#	    $w mark set $anchorname insert
#	}

	# Set the anchor mark's gravity depending on the click position
	# relative to the gap.
	set bbox [$w bbox $anchorname]
	set gravity [expr {$x > [lindex $bbox 0] ? "right" : "left"}]
	$w mark gravity $anchorname $gravity

	if {[$w cget -autoseparators]} {
	    $w edit separator
	}
    }

    # Allow focus in any case on Windows, because that will let the
    # selection be displayed even for state disabled text widgets.
    if {[tk windowingsystem] eq "win32" || [$w cget -state] eq "normal"} {
	focus $w
    }
    return
}


# If text.tcl is sufficiently recent to have ::tk::Priv(textanchoruid), the
# code below forces it to be initialized.
# The revised_text text.tcl is even more recent, and does not use
# ::tk::Priv(textanchoruid).  In that case, this initialization is harmless.
catch {::tk::TextAnchor}

if {[info exists ::tk::Priv(textanchoruid)]} {
    # Variable has been initialized and possibly incremented by text.tcl.
    # Don't change its value.
} else {
    set ::tk::Priv(textanchoruid) 0
    # text.tcl may increment this variable but will not re-initialize it.
}


# ::ntext::TextAnchor --
# Modified to use ::tk::Priv despite change of namespace.

proc ::ntext::TextAnchor {w} {
    variable ::tk::Priv
    if {![info exists Priv(textanchor,$w)]} {
	if {[catch {$w mark generate} result]} {
	    # This is the "unrevised" text widget.
	    set Priv(textanchor,$w) tk::anchor[incr Priv(textanchoruid)]
	} else {
	    # This is the revised_text text widget.
	    # This gives us a private mark, not visible with
	    # "mark names|next|previous|..".
	    set Priv(textanchor,$w) $result
	    # The Tk library still has a big weakness: it's not possible to
	    # bind variables to a widget, so we use a private command for this
	    # binding; this means that the variable will be unset automatically
	    # when the widget will be destroyed. This is the only proper way to
	    # handle unique identifiers.
	    $w tk_bindvar ::tk::Priv(textanchor,$w)
	}
    }
    return $Priv(textanchor,$w)
}

# ::ntext::RepelAnchor --
# Command to move the anchor to the end of the "recorded selection" that
# is furthest from $idx.

proc ::ntext::RepelAnchor {w idx} {
    set anchorname [TextAnchor $w]

    set distFirst [$w count -displaychars ntext::left::$anchorname $idx]
    set distLast  [$w count -displaychars ntext::right::$anchorname  $idx]
    if {abs($distFirst) < abs($distLast)} {
	$w mark set     $anchorname [$w index ntext::right::$anchorname]
	$w mark gravity $anchorname left
    } else {
	$w mark set     $anchorname [$w index ntext::left::$anchorname]
	$w mark gravity $anchorname right
    }
    return
}

# ::ntext::WordBounds --
# Command abstracted from ::ntext::TextSelectTo because it is now called twice.
# Extend first/last to word boundaries, but do not allow a "word" to straddle
# a display line boundary (or, in -wrap char mode, a logical line boundary).

proc ::ntext::WordBounds {w lineType first last} {
    # Now find word boundaries
    set first1 [$w index "$first + 1i"]
    set last1  [$w index "$last - 1i"]
    if {[$w count -$lineType $first $first1] != 0} {
	set first1 [$w index $first]
    } else {
    }
    if {[$w count -$lineType $last $last1] != 0} {
	set last1 [$w index $last]
    } else {
    }
    set first2 [TextPrevPos $w "$first1" ntext::new_wordBreakBefore]
    set last2  [TextNextPos $w "$last1"  ntext::new_wordBreakAfter]
    # Don't allow a "word" to straddle a display line boundary (or,
    # in -wrap char mode, a logical line boundary).
    # WARNING This is not the right result if -wrap word has been
    # forced into -wrap char because a word is too long - but it is hard to
    # produce sensible results in this case.
    if {[$w count -$lineType $first2 $first] != 0} {
	set first [$w index "$first display linestart"]
    } else {
	set first $first2
    }
    if {[$w count -$lineType $last2 $last] != 0} {
	set last [$w index "$last display lineend"]
    } else {
	set last $last2
    }
    return [list $first $last]
}

# ::tk::TextSelectTo --
# This procedure is invoked to extend the selection, typically when
# dragging it with the mouse*.  Depending on the selection mode (character,
# word, line) it selects in different-sized units.  This procedure
# ignores mouse motions initially until the mouse has moved from
# one character to another or until there have been multiple clicks.
#
# Note that the 'anchor' is implemented programmatically using
# a text widget mark, and uses a name that will be unique for each
# text widget (even when there are multiple peers).  Currently the
# anchor is considered private to Tk, hence the name 'tk::anchor$i' in text,
# while in revised_text the name is [$w mark generate] and the anchor is not
# listed in [$w mark names].
#
# Arguments:
# w -		The text window in which the button was pressed.
# x -		Mouse x position.
# y - 		Mouse y position.
# extend -	Unused

# * Such mouse drag operations are <B1-Motion>, <B1-Leave> (TextSelectTo
#   called via TextAutoScan).
#   TextSelectTo is also called by the bindings to <Double-1>, <Triple-1>,
#   <Shift-1>, <Double-Shift-1>, <Triple-Shift-1>.
#
# The command changes the selection and the insert mark.

# ::ntext::TextSelectTo --
# This extensively modified command also sets the anchor mark (unlike
# tk::TextSelectTo which does not set the anchor mark unless it is undefined).
#
# Modifications:
# - prevent word selection from crossing a line end.
# - improve repeated selection by word and line - to stop
#   expansion/contraction of the selection at the "wrong" end, in operations
#   that are intended to alter the selection ar the cursor end.
# - set the anchor and insert marks for each call.
#
# - The command sets the insert mark to the end of the selection that is closest
#   to the mouse position $cur.  It sets the anchor to the other end of the
#   selection.
# - The gravity of the anchor is set so it is facing the selection.
# - Internally the command sometimes uses its own anchor marks,
#   ntext::left::$anchorname and ntext::right::$anchorname.  These delimit a
#   "recorded selection".  When the user performs a sequence of pointer
#   operations on the selection, using selectMode "word" or "line", the
#   "recorded selection" (the first selection of the sequence) is used to
#   constrain the end of the selection that is furthest from the pointer.
# - These marks are set and used only by TextSelectTo and by RepelAnchor (which
#   is called only from TextSelectTo).
# - The command also uses the array ::ntext::OldSelectMode to record state.
#   The Ntext binding to <Destroy> garbage-collects the array.
# - When changing the selection, rearrange operations so that the selection is
#   never full, then empty, then full.

proc ::ntext::TextSelectTo {w x y {extend 0}} {
    variable ::tk::Priv
    variable OldSelectMode
    if {![catch {$w isdead} result] && $result} {
	# revised_text
	# Catch the very special case with dead peers.
	return
    }

    set anchorname [TextAnchor $w]
    set cur [TextCursorPos $w $x $y]
    if {[catch {$w index $anchorname}]} {
	$w mark set $anchorname $cur
	# Right gravity is set by default.
	# Could set gravity as in TextButton1, but the value in this case is
	# not important.
    }

    if {[$w compare $cur != $anchorname] || (abs($Priv(pressX) - $x) >= 3)} {
	set Priv(mouseMoved) 1
    }

    set selectionExists [expr {[$w tag ranges sel] ne ""}]
    if {[catch {$w index ntext::left::$anchorname}]} {
	$w mark set ntext::left::$anchorname $cur
	# Right gravity is set by default.
	# The gravity value is irrelevant.
    }
    if {[catch {$w index ntext::right::$anchorname}]} {
	$w mark set ntext::right::$anchorname $cur
	# Right gravity is set by default.
	# The gravity value is irrelevant.
    }
    if {(![info exists OldSelectMode($w)]) || (!$selectionExists)} {
	set OldSelectMode($w) char
    }

    if {(!$selectionExists) || ($OldSelectMode($w) eq "char")} {
	$w mark set ntext::left::$anchorname  $anchorname
	$w mark set ntext::right::$anchorname $anchorname
    }

    switch -- $Priv(selectMode) {
	char {
	    if {$selectionExists && $OldSelectMode($w) ne "char"} {
		# Move the anchor to the end of the "recorded selection"
		# that is furthest from $cur.  (If oldSelectMode is char, keep
		# the existing anchor.)
		RepelAnchor $w $cur
	    } else {
		$w mark set ntext::left::$anchorname  $anchorname
		$w mark set ntext::right::$anchorname $anchorname
	    }

	    if {[$w compare $cur < $anchorname]} {
		set first $cur
		set last  [$w index $anchorname]
	    } else {
		set first [$w index $anchorname]
		set last  $cur
	    }
	}
	word {
	    set start [$w index @$x,$y]
	    set isEmbedded [expr {[string length [$w get $start]] == 0}]
	    if {0 && $isEmbedded} {
		# This is a revised_text feature, disabled here.  It is useful
		# with <Double-1> on an embedded item; but less helpful when
		# <Double-Shift-1> is used to extend a selection.
		# Don't extend the range if we have an embedded item at this
		# position.
		set first $start
		set last "$first+1i"
	    } else {
		# Set initial range based only on the anchor (1 char min width -
		# MOD - unless this straddles a display line end)
		if {[$w cget -wrap] eq "word"} {
		    set lineType displaylines
		} else {
		    set lineType lines
		}
		# The gravity of the "selection anchor" mark.
		# - The anchor's gravity is explicitly used only here.
		# - In text.tcl the anchor mark's gravity is set by
		#   ::tk::TextButton1 depending on the click position relative
		#   to the gap.
		# - In ntext.tcl, the anchor mark's gravity is also set in other
		#   places, to prevent inappropriate growth of the selection
		#   when the value is tested here.  When the anchor is at an end
		#   of the selection, its gravity always faces the selected
		#   text.
		# - The gravity of the insert mark, and of the ntext::*
		#   "recorded selection" marks, are never explicitly used, and
		#   their values are always "right".
		if {[$w mark gravity $anchorname] eq "right"} {
		    set first $anchorname
		    set last "$anchorname + 1i"
		    if {[$w count -$lineType $first $last] != 0} {
			    set last $first
		    } else {
		    }
		} else {
		    set first "$anchorname - 1i"
		    set last $anchorname
		    if {[$w count -$lineType $first $last] != 0} {
			set first $last
		    } else {
		    }
		}
		if {    [$w compare $last == $first]
		     && [$w compare $cur  == $first]
		} {
		    # Use $first and $last as above; further extension will
		    # straddle a display line. Better to have no selection than
		    # a bad one.
		    set StoreAnchors 1
		} else {
		    set first0 $first
		    set last0  $last
		    if {$selectionExists && $OldSelectMode($w) eq "char"} {
			# Do WordBounds calc but without cur.  This computes the
			# ntext::* anchor marks.  This code is necessary if the
			# user has used character selection to extend the
			# selection, and then come here by using word selection.
			# Compute ntext::* anchor marks on the transition from
			# "char" to "word" selection.
			lassign [WordBounds $w $lineType $first $last] first last
			# The new selection will be a single word.
			$w mark set ntext::left::$anchorname $first
			$w mark set ntext::right::$anchorname $last
			set OldSelectMode($w) word
			set StoreAnchors 0
		    } else {
			set StoreAnchors 1
		    }

		    # Now do the conventional/text.tcl WordBounds calc with cur.
		    set first $first0
		    set last  $last0
		    set extend 0
		    # Extend range (if necessary) to include the current point.
		    if {[$w compare $cur < $first]} {
			set first $cur
			if {    ($OldSelectMode($w) eq "line")
			     && [$w compare $last == "$last linestart"]
			} {
			    # This kludge stops the selection growing by one
			    # word in the wrong direction.
			    set last "$last-1c"
			    set extend 1
			} else {
			}
		    } elseif {[$w compare $cur > $last]} {
			set last $cur
		    }

		    lassign [WordBounds $w $lineType $first $last] first last
		    if {$extend} {
			set last [$w index $last+1c]
		    } else {
		    }
		}
		if {    (!$selectionExists)
		     && ($OldSelectMode($w) eq "char")
		     && $StoreAnchors
		} {
		    # Compute ntext::* anchor marks on the transition from
		    # "char" to "word" selection.
		    # The new selection will be a single word.
		    $w mark set ntext::left::$anchorname $first
		    $w mark set ntext::right::$anchorname $last
		    set OldSelectMode($w) word
		}
	    }
	}
	line {
	    if {$selectionExists && $OldSelectMode($w) eq "line"} {
		# Use saved values.  Take care to avoid "creep" by one line
		# per call due to "lineend+1c".
		set first "ntext::left::$anchorname"
		set last "ntext::right::$anchorname"
	    } else {
		# Compute ntext::* anchor marks if OldSelectMode is not "line"
		# or (unlikely) if there is no existing selection.
		# The "recorded selection" is based only on the anchor.
		set first "$anchorname linestart"
		set last "$anchorname lineend+1c"
		$w mark set ntext::left::$anchorname $first
		$w mark set ntext::right::$anchorname $last
		set OldSelectMode($w) line
	    }

	    # Extend range (if necessary) based on the current point
	    if {[$w compare $cur < $first]} {
		set first "$cur linestart"
	    } elseif {[$w compare $cur > $last]} {
		set last "$cur lineend+1i"
	    }
	    set first [$w index $first]
	    set last [$w index $last]
	}
    }
    if {$Priv(mouseMoved) || ($Priv(selectMode) ne "char")} {
	# Set the insert mark and anchor to the ends of the selection.
	# The insert mark is the end that is closest to the mouse position $cur.
	set distFirst [$w count -displaychars $first $cur]
	set distLast  [$w count -displaychars $last  $cur]
	if {abs($distFirst) < abs($distLast)} {
	    set newInsert $first
	    set newAnchor $last
	    set newGrav   left
	} else {
	    set newInsert $last
	    set newAnchor $first
	    set newGrav   right
	}
#	$w mark set insert $cur
	$w mark set insert $newInsert
	$w mark set $anchorname $newAnchor
	$w mark gravity $anchorname $newGrav

	# Rearrange operations so that selection is never full-empty-full.
#	$w tag remove sel 1.0 end
	$w tag remove sel 1.0 $first
	$w tag add sel $first $last
	$w tag remove sel $last end

	update idletasks
    }
    return
}

# ::tk::TextKeyExtend --
# This procedure handles extending the selection from the keyboard,
# where the point to extend to is really the boundary between two
# characters rather than a particular character.
#
# Arguments:
# w -		The text window.
# index -	The point to which the selection is to be extended.

# Called only by bindings to <Control-Shift-space> and <Shift-Select>.
# Extends the selection from the anchor to the index (the actual argument is
# the insert mark).
#
# Changes the selection.  Does not set the anchor mark unless
# it is undefined. Does not set the insert mark.

# ::ntext::TextKeyExtend --
# - Call TextAnchor not tk::TextAnchor.
# - Set the gravity of the anchor.
# - When changing the selection, rearrange operations so that the selection is
#   never full, then empty, then full.

proc ::ntext::TextKeyExtend {w index} {

    set anchorname [TextAnchor $w]
    set cur [$w index $index]
    if {[catch {$w index $anchorname}]} {
	$w mark set $anchorname $cur
	# Right gravity is set by default.
	# revised_text sets left gravity.
	# ntext sets gravity in the code below.
    }

    if {[$w compare $cur < $anchorname]} {
	set first $cur
	set last  $anchorname
	set grav  left
    } else {
	set first $anchorname
	set last  $cur
	set grav  right
    }
    # Rearrange operations so that selection is never full-empty-full.
    # $w tag remove sel 1.0 $first
    $w tag add sel $first $last
    $w tag remove sel 1.0 $first
    $w tag remove sel $last end
    $w mark gravity $anchorname $grav
    return
}

# ::tk::TextPasteSelection --
# This procedure sets the insertion cursor to the mouse position,
# inserts the selection, and sets the focus to the window.
#
# Arguments:
# w -		The text window.
# x, y - 	Position of the mouse.

# ::ntext::TextPasteSelection --
# modified to set oldInsert and call AdjustIndentMultipleLines.

proc ::ntext::TextPasteSelection {w x y} {
    if {[$w cget -state] eq "normal"} {
	# revised_text uses TextCursorPos instead of TextClosestGap.
	$w mark set insert [TextClosestGap $w $x $y]
	TextInsertSelection $w PRIMARY
	focus $w
    }
    return
}

# ::tk::TextAutoScan --
# This procedure is invoked when the mouse leaves a text window
# with button 1 down.  It scrolls the window up, down, left, or right,
# depending on where the mouse is (this information was saved in
# ::tk::Priv(x) and ::tk::Priv(y)), and reschedules itself as an "after"
# command so that the window continues to scroll until the mouse
# moves back into the window or the mouse button is released.
#
# Arguments:
# w -		The text window.

# ::ntext::TextAutoScan --
# Modified so it calls itself and not ::tk::TextAutoScan.

proc ::ntext::TextAutoScan {w} {
    variable ::tk::Priv
    if {![winfo exists $w]} {
	return
    }
    if {$Priv(y) >= [winfo height $w]} {
	$w yview scroll [expr {1 + $Priv(y) - [winfo height $w]}] pixels
    } elseif {$Priv(y) < 0} {
	$w yview scroll [expr {-1 + $Priv(y)}] pixels
    } elseif {$Priv(x) >= [winfo width $w]} {
	$w xview scroll 2 units
    } elseif {$Priv(x) < 0} {
	$w xview scroll -2 units
    } else {
	return
    }
    TextSelectTo $w $Priv(x) $Priv(y)
    set Priv(afterId) [after 50 [list ::ntext::TextAutoScan $w]]
}

# ::tk::TextSetCursor
# Move the insertion cursor to a given position in a text.  Also
# clears the selection, if there is one in the text, and makes sure
# that the insertion cursor is visible.  Also, don't let the insertion
# cursor appear on the dummy last line of the text.
#
# Arguments:
# w -		The text window.
# pos -		The desired new position for the cursor in the window.

proc ::ntext::TextSetCursor {w pos} {
    if {[$w compare $pos == end]} {
	set pos {end - 1i}
    }
    $w mark set insert $pos
    $w tag remove sel 1.0 end
    $w see insert
    if {[$w cget -autoseparators]} {
	$w edit separator
    }
}

# ::tk::TextKeySelect --
# This procedure is invoked when stroking out selections using the
# keyboard.  It moves the cursor to a new position, then extends
# the selection to that position.
#
# Arguments:
# w -		The text window.
# new -		A new position for the insertion cursor (the cursor hasn't
#		actually been moved to this position yet).

# ::ntext::TextKeySelect --
# - Call TextAnchor not tk::TextAnchor.
# - Set the gravity of the anchor.
# - When changing the selection, rearrange operations so that the selection is
#   never full, then empty, then full.

proc ::ntext::TextKeySelect {w new} {
    if {![catch {$w isdead} result] && $result} {
	# revised_text
	# Catch the very special case with dead peers.
	return
    }
    set anchorname [TextAnchor $w]
    if {[llength [$w tag nextrange sel 1.0 end]] == 0} {
	if {[$w compare $new < insert]} {
	    $w tag add sel $new insert
	    $w mark set $anchorname insert
	    $w mark gravity $anchorname left
	} else {
	    $w tag add sel insert $new
	    $w mark set $anchorname insert
	    $w mark gravity $anchorname right
	}
    } else {
	if {[catch {$w index $anchorname}]} {
	    $w mark set $anchorname insert
	}
	if {[$w compare $new < $anchorname]} {
	    set first $new
	    set last  $anchorname
	    set grav  left
	} else {
	    set first $anchorname
	    set last  $new
	    set grav  right
	}
	# Rearrange operations so that selection is never full-empty-full.
	$w tag add sel $first $last
	$w tag remove sel 1.0 $first
	$w tag remove sel $last end
	$w mark gravity $anchorname $grav
    }
    $w mark set insert $new
    $w see insert
    update idletasks
}

# ::tk::TextResetAnchor --
# Set the selection anchor to whichever end is farthest from the
# index argument.  One special trick: if the selection has two or
# fewer characters, just leave the anchor where it is.  In this
# case it doesn't matter which point gets chosen for the anchor,
# and for the things like Shift-Left and Shift-Right this produces
# better behavior when the cursor moves back and forth across the
# anchor.
#
# Arguments:
# w -		The text widget.
# index -	Position at which mouse button was pressed, which determines
#		which end of selection should be used as anchor point.

# Called by <Shift-1>, <Double-Shift-1> iff ($::ntext::classicAnchor).

# ::ntext::TextResetAnchor --
# - Call TextAnchor not tk::TextAnchor.
# - Set the gravity of the anchor.

proc ::ntext::TextResetAnchor {w index} {
    if {[llength [$w tag ranges sel]] == 0} {
	# Don't move the anchor if there is no selection now; this
	# makes the widget behave "correctly" when the user clicks
	# once, then shift-clicks somewhere -- ie, the area between
	# the two clicks will be selected. [Bug: 5929].
	return
    }
    set anchorname [TextAnchor $w]
    set a [$w index $index]
    set b [$w index sel.first]
    set c [$w index sel.last]
    if {[$w compare $a < $b]} {
	$w mark set $anchorname sel.last
	$w mark gravity $anchorname left
	return
    }
    if {[$w compare $a > $c]} {
	$w mark set $anchorname sel.first
	$w mark gravity $anchorname right
	return
    }
    scan $a "%d.%d" lineA chA
    scan $b "%d.%d" lineB chB
    scan $c "%d.%d" lineC chC
    if {$lineB < $lineC + 2} {
	set total [string length [$w get $b $c]]
	if {$total <= 2} {
	    return
	}
	if {[string length [$w get $b $a]] < ($total/2)} {
	    $w mark set $anchorname sel.last
	    $w mark gravity $anchorname left
	} else {
	    $w mark set $anchorname sel.first
	    $w mark gravity $anchorname right
	}
	return
    }
    if {$lineA - $lineB < $lineC - $lineA} {
	$w mark set $anchorname sel.last
	$w mark gravity $anchorname left
    } else {
	$w mark set $anchorname sel.first
	$w mark gravity $anchorname right
    }
}

# ::tk::TextCursorInSelection --
# Check whether the selection exists and contains the insertion cursor. Note
# that it assumes that the selection is contiguous.
#
# Arguments:
# w -		The text widget whose selection is to be checked

proc ::ntext::TextCursorInSelection {w} {
    expr {    [llength [$w tag ranges sel]]
	   && [$w compare sel.first <= insert]
	   && [$w compare sel.last >= insert]
    }
}

# ::tk::TextInsert --
# Insert a string into a text at the point of the insertion cursor.
# If there is a selection in the text, and it covers the point of the
# insertion cursor, then delete the selection before inserting.
#
# Arguments:
# w -		The text window in which to insert the string
# s -		The string to insert (usually just a single character)

# ::ntext::TextInsert --
# - implement Insert/Overwrite
# - call AdjustIndentOneLine

proc ::ntext::TextInsert {w s} {
    if {[string length $s] == 0 || [$w cget -state] ne "normal"} {
	return
    }
    set compound 0
    if {[TextCursorInSelection $w]} {
	set compound [$w cget -autoseparators]
	if {$compound} {
	    $w configure -autoseparators 0
	    $w edit separator
	} else {
	}
	# revised_text - ensure that this operation is triggering "watch"
	$w mark set insert sel.first
	$w delete sel.first sel.last
    } elseif {$::ntext::overwrite && ($s ne "\n") && ($s ne "\t") &&
		([$w get insert] ne "\n")} {
	set compound [$w cget -autoseparators]
	if {$compound} {
	    $w configure -autoseparators 0
	    $w edit separator
	    # When undoing an overwrite, the insert mark is left
	    # in the "wrong" place - after and not before the change.
	    # Some non-Tk editors do this too.
	} else {
	}
	$w delete insert
    }
    $w insert insert $s
    AdjustIndentOneLine $w insert
    $w see insert
    if {$compound} {
	$w edit separator
	$w configure -autoseparators 1
    }
}

# ::tk::TextUpDownLine --
# Returns the index of the character one display line above or below the
# insertion cursor.  There are two tricky things here.  First, we want to
# maintain the original x position across repeated operations, even though
# some lines that will get passed through don't have enough characters to
# cover the original column.  Second, don't try to scroll past the
# beginning or end of the text if we don't select.
#
# Arguments:
# w -		The text window in which the cursor is to move.
# n -		The number of display lines to move: -1 for up one line,
#		+1 for down one line.
# sel		Boolean value whether we are selecting text.

proc ::ntext::TextUpDownLine {w n {sel no}} {
    variable ::tk::Priv

    set i [$w index insert]
    if {$Priv(prevPos) ne $i} {
	set Priv(textPosOrig) $i
    }
    set lines [$w count -displaylines $Priv(textPosOrig) $i]
    set new [$w index "$Priv(textPosOrig) + [expr {$lines + $n}] displaylines"]
    if {(!$sel) && ([$w compare $new == end] || [$w compare $new == "insert display linestart"])} {
	set new $i
    }
    set Priv(prevPos) $new
    return $new
}

# ::tk::TextPrevPara --
# Returns the index of the beginning of the paragraph just before a given
# position in the text (the beginning of a paragraph is the first non-blank
# character after a blank line).
#
# Arguments:
# w -		The text window in which the cursor is to move.
# pos -		Position at which to start search.

proc ::ntext::TextPrevPara {w pos} {
    set pos [$w index "$pos linestart"]
    while {1} {
	set newPos [$w index "$pos - 1 line"]
	if {([$w get $newPos] eq "\n" && ([$w get $pos] ne "\n")) || [$w compare $pos == 1.0]} {
	    if {[regexp -indices -- {^[ \t]+(.)} [$w get $pos "$pos lineend"] -> index]} {
		set pos [$w index "$pos + [lindex $index 0] chars"]
	    }
	    if {[$w compare $pos != insert] || [$w compare [$w index "$pos linestart"] == 1.0]} {
		return $pos
	    }
	}
	set pos $newPos
    }
}

# ::tk::TextNextPara --
# Returns the index of the beginning of the paragraph just after a given
# position in the text (the beginning of a paragraph is the first non-blank
# character after a blank line).
#
# Arguments:
# w -		The text window in which the cursor is to move.
# start -	Position at which to start search.

proc ::ntext::TextNextPara {w start} {
    set pos [$w index "$start linestart + 1 line"]
    while {[$w get $pos] ne "\n"} {
	if {[$w compare $pos == end]} {
	    return [$w index "end - 1i"]
	}
	set pos [$w index "$pos + 1 line"]
    }
    while {[$w get $pos] eq "\n"} {
	set pos [$w index "$pos + 1 line"]
	if {[$w compare $pos == end]} {
	    return [$w index "end - 1i"]
	}
    }
    if {[regexp -indices -- {^[ \t]+(.)} [$w get $pos "$pos lineend"] -> index]} {
	return [$w index "$pos + [lindex $index 0] chars"]
    }
    return $pos
}

# ::tk::TextScrollPages --
# This is a utility procedure used in bindings for moving up and down
# pages and possibly extending the selection along the way.  It scrolls
# the view in the widget by the number of pages, and it returns the
# index of the character that is at the same position in the new view
# as the insertion cursor used to be in the old view. (Or, if the insert
# cursor was not in view, it returns a weird index from somewhere in the
# first display line).
#
# Arguments:
# w -		The text window in which the cursor is to move.
# count -	Number of pages forward to scroll;  may be negative
#		to scroll backwards.

# ::ntext::TextScrollPages --
# - This command is called like ::tk::TextScrollPages, but it is completely
#   rewritten, and behaves differently.
# - It has an additional optional argument, "help".
#
# ::tk::TextScrollPages scrolls the widget, and returns an index (a new value
# for the insert mark); if the mark was on-screen before the scroll,
# ::tk::TextScrollPages tries to return an index that keeps it in the same
# screen position.
#
# ::ntext::TextScrollPages takes a slightly different approach:
# like ::tk::TextScrollPages, it returns an index (a new value for the insert
# mark), and lets the calling code decide whether to move the mark.
# Unlike ::tk::TextScrollPages (which calls "$w yview", but not "$w see"), when
# called with two arguments ::ntext::TextScrollPages does no
# scrolling - it relies on the calling code to do the scrolling, which in
# practice is usually when it tries to 'see' the returned index value.
#
# ::ntext::TextScrollPages has the following useful features:
#  - When the slack is less than one page, it "moves" the insert mark as far
#    as possible.
#  - When there is no slack, it "moves" the insert mark to the start/end of
#    the widget.
#  - It uses ::ntext::TextUpDownLine to remember the initial x-value.
#
# When called with three arguments, 3rd argument = "preScroll", then, if the
# new position of the insert mark is off-screen, ::ntext::TextScrollPages
# will scroll the widget (using "see", not "yview"), to try to make the calling
# code's "see" move the
# returned index value to the middle, not the edge, of the widget.  This
# feature is most useful in widgets with only a few visible lines, where it
# prevents successive calls from moving the insert mark between the middle and
# the edge of the widget.

proc ::ntext::TextScrollPages {w count {help ""}} {
    set spareLines 1 ;# adjustable

    # Cf. revised_text - when scrolling is already at its limit or within a
    # fractional display line of it, behave as if spareLines is 0, i.e. jump
    # to the limit.
    if {$count > 0} {
	if {[llength [$w dlineinfo end-1c]]} {
	    # Last display line of last line is partially or fully visible.
            set localSpareLines 0
        } else {
            set localSpareLines $spareLines
	}
    } else {
	if {[llength [$w dlineinfo 1.0]]} {
	    # First display line of first line is partially or fully visible.
            set localSpareLines 0
        } else {
            set localSpareLines $spareLines
	}
    }

    set oldInsert [$w index insert]
    set count [expr {int($count)}]
    if {$count == 0} {
	return $oldInsert
    }
    set visibleLines [$w count -displaylines @0,0 @0,20000]
    if {$visibleLines > $localSpareLines} {
	set pageLines [expr {$visibleLines - $localSpareLines}]
    } else {
	set pageLines 1
    }
    set newInsert  [TextUpDownLine $w [expr {$pageLines * $count}]]
    if {[$w compare $oldInsert != $newInsert]} {
	set newPos $newInsert
    } elseif {$count < 0} {
	set newPos 1.0
    } else {
	set newPos [$w index "end -1 char"]
    }
    if {($help eq "preScroll") && ([$w bbox $newPos] eq "")} {
	# If $newPos is offscreen, try to put it in the middle
	if {   [$w count -displaylines 1.0 $newPos]
	     > [$w count -displaylines $newPos end]
	} {
	    $w see 1.0
	} else {
	    $w see end
	}
	$w see $newPos
    }


    # From revised_text - to permit scrolling in this corner case.
    if {[$w compare insert == $newPos]} {
	# This may happen if a character is spanning the entire view,
	# ensure that at least one line will change.
	set newPos [$w index "[expr {$count > 0 ? "insert +1" : "insert -1"}] displayline"]
    }

    return $newPos
}

# ::tk::TextTranspose --
# This procedure implements the "transpose" function for text widgets.
# It tranposes the characters on either side of the insertion cursor,
# unless the cursor is at the end of the line.  In this case it
# transposes the two characters to the left of the cursor.  In either
# case, the cursor ends up to the right of the transposed characters.
#
# Arguments:
# w -		Text window in which to transpose.

# ::ntext::TextTranspose --
# - calls AdjustIndentOneLine.
# - renames local variable autosep to oldSeparator, as in other procs

proc ::ntext::TextTranspose w {
    if {[$w cget -state] ne "normal" || [$w compare insert == 1.0]} {
	return
    }

    set pos insert
    if {[$w compare insert != "insert lineend"]} {
	append pos +1i
    }
    set pos [$w index $pos]

    # ensure this is seen as an atomic op to undo
    set oldSeparator [$w cget -autoseparators]
    if {$oldSeparator} {
	$w configure -autoseparators 0
	$w edit separator
    }

    # for revised_text, ensure that this operation is triggering "watch"
    set insPos [$w index insert]
    $w mark set insert ${pos}-2c
    set new [$w get insert+1i][$w get insert]
    $w delete insert $pos
    $w insert insert $new
    $w mark set insert $insPos

    if {[$w compare insert == "insert linestart"]} {
	AdjustIndentOneLine $w "insert - 1 line"
    }
    AdjustIndentOneLine $w insert

    $w see insert

    if {$oldSeparator} {
	$w edit separator
	$w configure -autoseparators 1
    }
    return
}

# ::tk_textCopy --
# This procedure copies the selection from a text widget into the
# clipboard.
#
# Arguments:
# w -		Name of a text widget.

proc ::ntext::new_textCopy w {
    if {![catch {set data [$w get sel.first sel.last]}]} {
	clipboard clear -displayof $w
	clipboard append -displayof $w $data
    }
}

# ::tk_textCut --
# This procedure copies the selection from a text widget into the
# clipboard, then deletes the selection (if it exists in the given
# widget).
#
# Arguments:
# w -		Name of a text widget.

# ::ntext::new_textCut --
# - set LocalOldFirst and call AdjustIndentOneLine.
# - configure autoseparators 0|1 (might not be necessary)
# - LocalOldFirst is never off by one: the final newline of the widget cannot
#   be deleted.

proc ::ntext::new_textCut w {
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

	    set LocalOldFirst [$w index sel.first]
	    TextDelete $w sel.first sel.last
	    AdjustIndentOneLine $w $LocalOldFirst
	
	    if {$oldSeparator} {
		$w edit separator
		$w configure -autoseparators 1
	    }

	    if {$::ntext::GenerateSelect} {
		# The PRIMARY selection has changed but the widget does
		# not generate this event.
		event generate $w <<Selection>>
	    }
	}
    }
    return
}

# ::tk_textPaste --
# This procedure pastes the contents of the clipboard to the insertion
# point in a text widget.
#
# Arguments:
# w -		Name of a text widget.

# ::ntext::new_textPaste --
# - set oldInsert, LocalOldFirst and ntextIndentMark, and call
#   AdjustIndentMultipleLines
# - behave the same way for X11 as for other windowing systems
# - overwrite the selection (if it exists), even if the insert mark is elsewhere

proc ::ntext::new_textPaste w {
    if {[$w cget -state] eq "normal"} {
	::ntext::TextInsertSelection $w CLIPBOARD
    }
    return
}

# ::tk::TextNextWord --
# Returns the index of the next word position after a given position in the
# text.  The next word is platform dependent and may be either the next
# end-of-word position or the next start-of-word position after the next
# end-of-word position.
#
# Arguments:
# w -		The text window in which the cursor is to move.
# start -	Position at which to start search.

# ::ntext::TextNextWord --
# - use a platform-independent definition: always goes to the start of the next
#   word.

proc ::ntext::TextNextWord {w start} {
    TextNextPos $w $start ntext::new_startOfNextWord
}

# ::tk::TextNextPos --
# Returns the index of the next position after the given starting
# position in the text as computed by a specified function.
#
# Arguments:
# w -		The text window in which the cursor is to move.
# start -	Position at which to start search.
# op -		Function to use to find next position.

proc ::ntext::TextNextPos {w start op} {
    set text ""
    set cur $start
    while {[$w compare $cur < end]} {
	set end [$w index "$cur lineend + 1i"]
	append text [$w get -displaychars $cur $end]
	set pos [$op $text 0]
	if {$pos >= 0} {
	    return [$w index "$start + $pos display chars"]
	}
	set cur $end
    }
    return end
}

# ::tk::TextPrevPos --
# Returns the index of the previous position before the given starting
# position in the text as computed by a specified function.
#
# Arguments:
# w -		The text window in which the cursor is to move.
# start -	Position at which to start search.
# op -		Function to use to find next position.

proc ::ntext::TextPrevPos {w start op} {
    set succ ""
    set cur $start
    while {[$w compare $cur > 1.0]} {
	set text ""
	append text [$w get -displaychars "$cur linestart - 1i" $cur] $succ
	set pos [$op $text end]
	if {$pos >= 0} {
	    return [$w index "$cur linestart - 1i + $pos display chars"]
	}
	set cur [$w index "$cur linestart - 1i"]
	set succ $text
    }
    return 1.0
}

# ::tk::TextScanMark --
#
# Marks the start of a possible scan drag operation
#
# Arguments:
# w -	The text window from which the text to get
# x -	x location on screen
# y -	y location on screen

proc ::ntext::TextScanMark {w x y} {
    variable ::tk::Priv
    $w scan mark $x $y
    set Priv(x) $x
    set Priv(y) $y
    set Priv(mouseMoved) 0
}

# ::tk::TextScanDrag --
#
# Marks the start of a possible scan drag operation
#
# Arguments:
# w -	The text window from which the text to get
# x -	x location on screen
# y -	y location on screen

proc ::ntext::TextScanDrag {w x y} {
    variable ::tk::Priv
    # Make sure these exist, as some weird situations can trigger the
    # motion binding without the initial press.  [Bug #220269]
    if {![info exists Priv(x)]} {
	set Priv(x) $x
    }
    if {![info exists Priv(y)]} {
	set Priv(y) $y
    }
    if {($x != $Priv(x)) || ($y != $Priv(y))} {
	set Priv(mouseMoved) 1
    }
    if {[info exists Priv(mouseMoved)] && $Priv(mouseMoved)} {
	$w scan dragto $x $y
    }
}

# ::tk::TextDelete --
#
# Delete the characters in given range.
# Ensure that "watch" will be triggered, and consider
# that "insert" may be involved in the given range.
# This implementation avoids unnecessary mappings of indices.

proc ::ntext::TextDelete {w start end} {
    if {[catch {set testPos [$w mark generate]}]} {
	# This is the "unrevised" text widget.
	$w delete $start $end
    } else {
	# This is the revised_text text widget.
	# Remember old positions, use temporary marks ('mark generate'),
	# take into account that $end may refer "insert" mark.
	$w mark set [set insPos [$w mark generate]] insert
	$w mark set [set endPos [$w mark generate]] $end
	$w mark set insert $start
	$w delete insert $endPos
	$w mark set insert $insPos
	$w mark unset $insPos
	$w mark unset $endPos
	$w mark unset $testPos
    }
    return
}

# ::tk::TextInsertSelection --
# This procedure inserts the selection.
#
# Arguments:
# w -		The text window.
# selection	atom name of the selection (usually CLIPBOARD or PRIMARY)

# Extracted from ::ntext::new_textPaste and ::ntext::TextPasteSelection, and
# corresponds to revised_text's tk::TextInsertSelection.

proc ::ntext::TextInsertSelection {w selection} {
    if {[catch {::tk::GetSelection $w $selection} sel]} {
	return
    }
    set oldInsert [$w index insert]
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

    if {    ($selection eq "CLIPBOARD")
	 && ([tk windowingsystem] ne "x11TheOldFashionedWay")
	 && ([$w tag nextrange sel 1.0 end] ne "")
    } {
	set LocalOldFirst [$w index sel.first]
	$w mark set ntextIndentMark sel.last
	# right gravity mark, survives deletion

	TextDelete $w sel.first sel.last
	$w insert $LocalOldFirst $sel
	AdjustIndentMultipleLines $w $LocalOldFirst ntextIndentMark
    } else {
	$w insert insert $sel
	AdjustIndentMultipleLines $w $oldInsert insert
    }
    if {$oldSeparator} {
	$w edit separator
	$w configure -autoseparators 1
    }

    # The PRIMARY selection has changed but the widget does
    # not generate this event.
    if {    ($selection eq "PRIMARY")
	 && [TextCursorInSelection $w]
	 && $::ntext::GenerateSelect
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
	 && $::ntext::GenerateSelect
	 && (    ([$w tag nextrange sel 1.0 end] eq "")
              || ([list [$w index sel.first] [$w index sel.last]] ne $oldSel)
            )
    } {
	event generate $w <<Selection>>
    }

    return
}


# revised_text text.tcl has new commands in the global namespace:
#     ::tk_textInsert
#     ::tk_textReplace
#     ::tk_textRebindMouseWheel
#     ::tk_mergeRange
# These commands are loaded from text.tcl and are self-contained: they are not
# used by any bindings or commands in text.tcl, and do not call any other
# commands in text.tcl.  Therefore ntext does not need to provide replacements.


##### END OF CODE THAT IS MODIFIED from the file text.tcl.
##### THE CODE ABOVE ALSO USES THE PROCS DEFINED BELOW.

##### Further procs for bindings:

# Two new functions, HomeIndex and EndIndex, that can be used for "smart" Home
# and End operations

# ::ntext::HomeIndex --
#
# Return the index to jump to (from $index) as "Smart Home"
# Some corner cases (e.g. lots of leading whitespace, wrapped around)
# probably have a better solution; but there's no consensus on how a
# text editor should behave in such cases.
#
# Arguments:
# w -    		Name of a text widget.
# index -		an index in the widget

proc ::ntext::HomeIndex {w index} {
    set index   [$w index $index]

    set lls     [$w index "$index linestart"]
    set dls     [$w index "$index display linestart"]
    set llnext  [$w index "$lls + 1 line"]

    # Set firstNonSpace to the index of the first non-space character on the
    # logical line.
    set firstNonSpace [$w search -regexp --    {[^[:space:]]}    $lls $llnext]

    # Ensure that $firstNonSpace is a valid index:
    if {$firstNonSpace eq {}} {
	# No regexp match: no non-whitespace characters on the line.
	set firstNonSpace $lls
    }

    # If there is leading whitespace on more than one display line, then in the
    # comments below, the "first display line" is defined to mean all display
    # lines up to and including the first non-whitespace character.

    if {[$w count -displaylines $index $firstNonSpace] >= 0} {
	# $index is on the first display line.
	if {$index eq $firstNonSpace} {
	    # $index is at the first non-whitespace of the first display line.
	    set home $lls
	} else {
	    # $index is on the first display line, but not at the first
	    # non-whitespace.
	    set home $firstNonSpace
	}
    } else {
	if {$dls eq $index} {
	    # $index is at the start of a display line other than the first.
	    set home $firstNonSpace
	} else {
	    # $index is not on the first display line, and we're not at our
	    # display line's start.
	    set home $dls
	}
    }

    return $home
}

# ::ntext::EndIndex --
#
# Return the index to jump to (from $index) as "Smart End"
#
# Arguments:
# w -    		Name of a text widget.
# index -		an index in the widget

proc ::ntext::EndIndex {w index} {
    set index    [$w index $index]

    set lls      [$w index "$index linestart"]
    set dle      [$w index "$index display lineend"]
    set lle      [$w index "$index lineend"]
    set llnext   [$w index "$lls + 1 line"]

    set lastNonSpace \
	    [$w search -regexp --   {[^[:space:]][[:space:]]*$}   $lls $llnext]

    # Set firstTrailing to the position of the first trailing whitespace
    # character.
    if {$lastNonSpace eq {}} {
	# No regexp match: no non-whitespace characters on the line, or
	# no trailing whitespace.
	set firstTrailing $lle
    } else {
	set firstTrailing [$w index "$lastNonSpace + 1 indices"]
    }

    # If there is trailing whitespace on more than one display line, then in the
    # comments below, "last display line" is redefined to mean all display lines
    # from the first trailing whitespace character to the logical line end.
    if {[$w count -displaylines $index $firstTrailing] <= 0} {
	# We're on the last display line
	if {$index eq $lle} {
	    # $index is at the logical line end.
	    set end $firstTrailing
	} else {
	    # $index is on the last display line, but not at the logical line
	    # end.
	    set end $lle
	}
    } else {
	if {$dle eq $index} {
	    # $index is at the end of a display line other than the last.
	    set end $lle
	} else {
	    # $index is not on the last display line, and is not at its display
	    # line's end.
	    set end $dle
	}
    }

    return $end
}

# ::ntext::DefineCursor --
# Set the cursor depending on insert/overwrite mode and
# ::ntext::useBlockCursor.

proc ::ntext::DefineCursor {w} {
    variable overwrite
    variable useBlockCursor
    variable OldInsertBackground

    if {$useBlockCursor} {
	$w configure -blockcursor $overwrite
    } else {
	if {$overwrite} {
	    set OldInsertBackground($w) [$w cget -insertbackground]
	    $w configure -insertbackground red
	} elseif {[info exists OldInsertBackground($w)]} {
	    $w configure -insertbackground $OldInsertBackground($w)
	} else {
	    # Somehow the old value was not recorded.  Improvise.
	    $w configure -insertbackground [$w cget -fg]
	}
    }
    return
}


# Extra procs for macOS/Aqua:

# ::ntext::MacHomeIndex --
#
# Return the index to which the insert mark should be moved by an
# <Option-Up> event in Aqua.
#
# Arguments:
# w -    		Name of a text widget.
# index -		an index in the widget

proc ::ntext::MacHomeIndex {w index} {
    set index   [$w index $index]
    set lls     [$w index "$index linestart"]

    if {$lls eq $index} {
	# We're at the start of a logical line: return the start of the previous
	# logical line:
	return [$w index "$lls -1 indices linestart"]
    } else {
	# Return the logical line start:
	return $lls
    }
}

# ::ntext::MacEndIndex --
#
# Return the index to which the insert mark should be moved by an
# <Option-Down> event in Aqua.
#
# Arguments:
# w -    		Name of a text widget.
# index -		an index in the widget

proc ::ntext::MacEndIndex {w index} {
    set index    [$w index $index]
    set lle      [$w index "$index lineend"]

    if {$lle eq $index} {
	# We're at the end of a logical line: return the end of the next logical
	# line:
	return [$w index "$lle +1 indices lineend"]
    } else {
	# Return the logical line end:
	return $lle
    }
}

# ::ntext::AdjustInsert --
#
# If there is a selection, and ::ntext::classicSelection has not been set,
# move the insert mark to the left or right boundary of the selection
# according to the argument dir.  Used only in Aqua.
#
# Arguments:
# w   -    Name of a text widget.
# dir -    The string "left" or "right", representing the direction
#          of navigation.

proc ::ntext::AdjustInsert {w dir} {
    set ranges [$w tag ranges sel]
    if {$::ntext::classicSelection} {
	# Nothing to do
    } elseif {$ranges eq {}} {
	# Nothing to do
    } elseif {$dir eq "left"} {
	$w mark set insert [lindex $ranges 0]
    } elseif {$dir eq "right"} {
	$w mark set insert [lindex $ranges end]
    } else {
	return -code error {Argument "dir" should be "left" or "right".}
    }
    return
}


##### START OF CODE FOR WORD BOUNDARY DETECTION

# We define ::ntext counterparts for the functions in lib/tcl8.5/word.tcl
# such as ::tcl_wordBreakAfter
# See man page for discussion of the variables ::tcl_wordchars
# and ::tcl_nonwordchars defined in word.tcl

# This code block defines the seven namespace procs
#   createMatchPatterns
#   initializeMatchPatterns
#   new_wordBreakAfter
#   new_wordBreakBefore
#   new_endOfWord
#   new_startOfNextWord
#   new_startOfPreviousWord


# ::ntext::createMatchPatterns --
#
# This procedure defines the regexp patterns that are used in text
# searches, and saves them in namespace variables ::ntext::tcl_match_*
#
# Each argument should be a regexp expression defining a class of
# characters (usually a bracket expression, a class-shorthand escape,
# or a single character); the third argument may be omitted, or supplied
# as the empty string, in which case it is unused.
#
# The arguments are analogous to lib/tcl8.5/word.tcl's global variables
# tcl_wordchars and tcl_nonwordchars, but are not exposed as global or
# namespace variables: instead, the regexp patterns that are used for
# the searches are exposed as namespace variables.
#
# Usually this procedure is called by ::ntext::initializeMatchPatterns
# with machine-generated arguments.
#
# Arguments:
# new_nonwordchars -		regexp expression for non-word characters
#                   		(e.g. whitespace)
# new_word1chars -		regexp expression for first set of word
#                 		characters (e.g. alphanumerics)
# new_word2chars -		(optional) regexp expression for second set
#                 		of word characters (e.g. punctuation)

proc ::ntext::createMatchPatterns {new_nonwordchars new_word1chars \
	{new_word2chars {}}} {

    variable tcl_match_wordBreakAfter
    variable tcl_match_wordBreakBefore
    variable tcl_match_endOfWord
    variable tcl_match_startOfNextWord
    variable tcl_match_startOfPreviousWord

    if {$new_word2chars eq {}} {
	# With one "non-word" character class, and one "word" class, generate
	# the same regexp patterns as Tcl's default search functions:
	# The shorthand is based on ntext's default definitions for the
	# function arguments:
	# "s" $new_nonwordchars (space)
	# "w" $new_word1chars   (word)
	# "p" $new_word2chars   (punctuation)
	set wordBreakAfter      "ws|sw"
	set wordBreakBefore     "^.*($wordBreakAfter)"
	set endOfWord           "s*w+s"
	set startOfNextWord     "w*s+w"
	set startOfPreviousWord "s*(w+)s*\$"
    } else {
	# Generalise to one "non-word" character class, and two "word" classes
	set wordBreakAfter      "ps|pw|sp|sw|wp|ws"
	set wordBreakBefore     "^.*($wordBreakAfter)"
	set endOfWord           "s*w+s|s*w+p|s*p+s|s*p+w"
	set startOfNextWord     "w*s+w|p*s+w|p+w|w*s+p|p*s+p|w+p"
	set startOfPreviousWord "s*(w+)s*\$|p*(w+)s*\$|w*(p+)s*\$|s*(p+)s*\$"
	# all tested, the first two with Double-1
	# in the last three, note that whitespace is not considered a "word"
	# - in endOfWord, note that leading space is acceptable, but not leading
	#   anything else
	# - in startOfNextWord, note that leading characters are acceptable only
	#   before a space
	# - in startOfPreviousWord, note that trailing space is acceptable, but
	# - not trailing anything else
	# With these rules, generalisation to more classes of characters is
	# straightforward.
    }

    foreach pattern {wordBreakAfter wordBreakBefore endOfWord \
	    startOfNextWord startOfPreviousWord} {
	# Define the search pattern
	set tcl_match_$pattern [string map [list w $new_word1chars p \
		$new_word2chars s $new_nonwordchars] [set $pattern]]
    }
    return
}

# ::ntext::initializeMatchPatterns --
#
# This procedure calls createMatchPatterns with arguments appropriate for
# the values of ::ntext::classicWordBreak and ::tcl_platform(platform).

proc ::ntext::initializeMatchPatterns {} {
    variable classicWordBreak
    if {!$classicWordBreak} {
	# ntext style: two classes of word character
	set punct {]`|.,:;/~!%&*_+='~[{}^"?()}     ;#" keep \ as a word char
	set space {[:space:]}
	set tcl_punctchars "\[${punct}-\]"
	set tcl_spacechars "\[${space}\]"
	set tcl_word1chars "\[^${punct}${space}-\]"
    } elseif {[tk windowingsystem] eq "win32"} {
	# Windows style - any but a unicode space char
	set tcl_word1chars "\\S"
	set tcl_spacechars "\\s"
	set tcl_punctchars {}
    } else {
	# Motif style - any unicode word char (number, letter, or underscore)
	set tcl_word1chars "\\w"
	set tcl_spacechars "\\W"
	set tcl_punctchars {}
    }

    createMatchPatterns $tcl_spacechars $tcl_word1chars $tcl_punctchars
    return
}


# Now procs derived from those in lib/tcl8.5/word.tcl, Tcl 8.5a5
# = ActiveTcl 8.5beta6

# tcl_wordBreakAfter --
#
# This procedure returns the index of the first word boundary
# after the starting point in the given string, or -1 if there
# are no more boundaries in the given string.  The index returned refers
# to the first character of the pair that comprises a boundary.
#
# Arguments:
# str -		String to search.
# start -	Index into string specifying starting point.

# ::ntext::new_wordBreakAfter is copied from ::tcl_wordBreakAfter with
# modifications: new word-boundary detection rules

proc ::ntext::new_wordBreakAfter {str start} {
    variable tcl_match_wordBreakAfter
    set str [string range $str $start end]
    if {[regexp -indices $tcl_match_wordBreakAfter $str result]} {
	return [expr {[lindex $result 1] + $start}]
    }
    return -1
}

# tcl_wordBreakBefore --
#
# This procedure returns the index of the first word boundary
# before the starting point in the given string, or -1 if there
# are no more boundaries in the given string.  The index returned
# refers to the second character of the pair that comprises a boundary.
#
# Arguments:
# str -		String to search.
# start -	Index into string specifying starting point.

# ::ntext::new_wordBreakBefore is copied from ::tcl_wordBreakBefore with
# modifications: new word-boundary detection rules

proc ::ntext::new_wordBreakBefore {str start} {
    variable tcl_match_wordBreakBefore
    if {$start eq "end"} {
	set start [string length $str]
    }
    if {[regexp -indices $tcl_match_wordBreakBefore \
	    [string range $str 0 $start] result]} {
	return [lindex $result 1]
    }
    return -1
}

# tcl_endOfWord --
#
# This procedure returns the index of the first end-of-word location
# after a starting index in the given string.  An end-of-word location
# is defined to be the first whitespace character following the first
# non-whitespace character after the starting point.  Returns -1 if
# there are no more words after the starting point.
#
# Arguments:
# str -		String to search.
# start -	Index into string specifying starting point.

# ::ntext::new_endOfWord is copied from ::tcl_endOfWord with
# modifications:
# new word-boundary detection rules

proc ::ntext::new_endOfWord {str start} {
    variable tcl_match_endOfWord
    if {[regexp -indices $tcl_match_endOfWord \
	    [string range $str $start end] result]} {
	return [expr {[lindex $result 1] + $start}]
    }
    return -1
}

# tcl_startOfNextWord --
#
# This procedure returns the index of the first start-of-word location
# after a starting index in the given string.  A start-of-word
# location is defined to be a non-whitespace character following a
# whitespace character.  Returns -1 if there are no more start-of-word
# locations after the starting point.
#
# Arguments:
# str -		String to search.
# start -	Index into string specifying starting point.

# ::ntext::new_startOfNextWord is copied from ::tcl_startOfNextWord with
# modifications: new word-boundary detection rules

proc ::ntext::new_startOfNextWord {str start} {
    variable tcl_match_startOfNextWord
    if {[regexp -indices $tcl_match_startOfNextWord \
	    [string range $str $start end] result]} {
	return [expr {[lindex $result 1] + $start}]
    }
    return -1
}

# tcl_startOfPreviousWord --
#
# This procedure returns the index of the first start-of-word location
# before a starting index in the given string.
#
# Arguments:
# str -		String to search.
# start -	Index into string specifying starting point.

# ::ntext::new_startOfPreviousWord is copied from ::tcl_startOfPreviousWord
# with modifications: new word-boundary detection rules

proc ::ntext::new_startOfPreviousWord {str start} {
    variable tcl_match_startOfPreviousWord
    if {$start eq "end"} {
	set start [string length $str]
    }
    if {[regexp -indices \
	    $tcl_match_startOfPreviousWord \
	    [string range $str 0 [expr {$start - 1}]] result words(1) \
	    words(2) words(3) words(4) words(5) words(6) words(7) words(8) \
	    words(9) words(10) words(11) words(12) words(13) words(14) \
	    words(15) words(16)]} {
	set result -1
	foreach name [array names words] {
	    set val [lindex $words($name) 0]
	    if {$val != -1} {
		set result $val
		break
	    }
	}
	return $result
    }
    return -1
}

##### END OF CODE FOR WORD BOUNDARY DETECTION

##### START OF CODE TO HANDLE (OPTIONAL) INDENTATION USING -lmargin2

# ::ntext::wrapIndent --
#
# Procedure to adjust the hanging indent of a text widget.
# If indentation is active, i.e. if
# ::ntext::classicWrap == 0 and the widget has "-wrap word",
# the logical lines specified by the arguments will be indented so that for
# each logical line, the start of every wrapped display line is aligned with
# the first display line.
# If indentation is inactive, the procedure removes any existing indentation.
#
# This procedure is the only indentation procedure that should be called
# by user scripts.  It uses -lmargin2 to adjust the hanging indent of lines
# in a text widget.
#
# Call with one argument to adjust the indentation of the entire widget;
# with two arguments, to adjust the indentation of a single logical line;
# with three arguments, to adjust the indentation of a range of logical lines.
#
# Arguments:
# textWidget -		text widget to be indented
# index1 -		(optional) index in the first logical line to be
#         		indented
# index2 -		(optional) index in the last logical line to be indented

proc ::ntext::wrapIndent {textWidget args} {
    variable classicWrap
    if {([$textWidget cget -wrap] eq "word") && !$classicWrap} {
	if {[llength $args] == 0} {
	    AdjustIndentMultipleLines $textWidget 1.0 end
	} elseif {[llength $args] == 1} {
	    AdjustIndentOneLine $textWidget [lindex $args 0]
	} else {
	    AdjustIndentMultipleLines $textWidget \
		    [lindex $args 0] [lindex $args 1]
	}
    } else {
	if {[llength $args] == 0} {
	    RemoveIndentMultipleLines $textWidget 1.0 end
	} elseif {[llength $args] == 1} {
	    RemoveIndentOneLine $textWidget [lindex $args 0]
	} else {
	    RemoveIndentMultipleLines $textWidget \
		    [lindex $args 0] [lindex $args 1]
	}
    }
    return
}

# ::ntext::AdjustIndentMultipleLines --
#
# Procedure to adjust the hanging indent of multiple logical lines
# of a text widget - but only if indentation is active,
# i.e. if ::ntext::classicWrap == 0 and the widget has "-wrap word";
# otherwise the procedure does nothing.
#
# User scripts should call ::ntext::wrapIndent instead.
#
# Arguments:
# textWidget -		text widget to be indented
# index1 -		index in the first logical line to be indented
# index2 -		index in the last logical line to be indented

proc ::ntext::AdjustIndentMultipleLines {textWidget index1 index2} {
    # Ensure that each line has precisely one tag whose name begins
    # "ntextAlignLM2Indent=", and that this tag covers the whole line; set
    # its -lmargin2 value so that for each line, the start of every wrapped
    # display line is aligned with the first display line.
    variable classicWrap
    if {([$textWidget cget -wrap] eq "word") && !$classicWrap} {
	if {[$textWidget count -lines $index1 $index2] < 0} {
	    set index3 $index1
	    set index1 $index2
	    set index2 $index3
	}
	set index1 [$textWidget index "$index1 linestart"]
	set index2 [$textWidget index "$index2 linestart"]
	for     {set index $index1} \
		{$index <= $index2 && [$textWidget compare $index != end]} \
		{set index [$textWidget index "$index + 1 line"]} {
	    AdjustIndentOneLine $textWidget $index
	    set oldIndex $index
	}
    } else {
	# indentation not active
    }
    return
}

# ::ntext::AdjustIndentOneLine --
#
# Procedure to adjust the hanging indent of a single logical line
# of a text widget - but only if indentation is active,
# i.e. if ::ntext::classicWrap == 0 and the widget has "-wrap word";
# otherwise the procedure does nothing.
#
# User scripts should call ::ntext::wrapIndent instead.
#
# Arguments:
# textWidget -		text widget to be indented
# index -		index in the logical line to be indented

proc ::ntext::AdjustIndentOneLine {textWidget index} {
    # Ensure that the line has precisely one tag whose name begins
    # "ntextAlignLM2Indent=", and that this tag covers the whole line; set
    # its -lmargin2 value so that the start of every wrapped display line
    # is aligned with the first display line.
    variable classicWrap
    if {([$textWidget cget -wrap] eq "word") && !$classicWrap} {
	RemoveIndentOneLine $textWidget $index
	set pix [HowMuchIndent $textWidget $index]
	AddIndent $textWidget $index $pix
    } else {
	# indentation not active
    }
    return
}

# ::ntext::AddIndent --
#
# Procedure to set the hanging indent of a single logical line
# of a text widget.  The line must not already have indentation.
#
# User scripts should call ::ntext::wrapIndent instead.
#
# Arguments:
# textWidget -		text widget to be indented
# index -		index in the logical line to be indented
# pix -  		number of pixels of indentation

proc ::ntext::AddIndent {textWidget index pix} {
    # Add a tag with properties "-lmargin2 $pix" to the entire logical line
    variable lm2IndentDebug
    variable indentColor
    set lineStart     [$textWidget index "$index linestart"]
    set nextLineStart [$textWidget index "$lineStart + 1 line"]
    set tagName ntextAlignLM2Indent=${pix}
    $textWidget tag add $tagName $lineStart $nextLineStart
    $textWidget tag configure $tagName -lmargin2 ${pix}
    # Older versions of Tk do not support -lmargincolor.
    catch {$textWidget tag configure $tagName -lmargincolor $indentColor}
    if {$lm2IndentDebug} {
	$textWidget tag configure $tagName -background [IntToColor $pix 100]
    }
    $textWidget tag lower $tagName
    return $tagName
}

# ::ntext::HowMuchIndent --
#
# Procedure to measure and return the number of pixels of hanging
# indent required by a single logical line of a text widget;
# i.e. how many pixels of -lmargin2 indentation does the logical line
# need, for alignment with its own first display line?
#
# User scripts should call ::ntext::wrapIndent instead.
#
# N.B. This procedure cannot be used before the widget is drawn: it uses
# display lines, which the widget calculates only when it is drawn.
#
# Arguments:
# textWidget -		text widget to be examined
# index -		index in the logical line to be examined

proc ::ntext::HowMuchIndent {textWidget index} {
    variable newWrapRegexp
    set lineStart [$textWidget index "$index linestart"]
    set secondDispLineStart [$textWidget index "$lineStart + 1 display line"]
    # checked that this gives the start of the next display line in
    # the *updated* display
    set indentTo  [$textWidget search -regexp -count matchLen -- \
	    $newWrapRegexp $lineStart $secondDispLineStart]
    if {$indentTo eq {}} {
	set pix 0
    } else {
	set indentTo [$textWidget index "$indentTo + $matchLen chars - 1 char"]
	set pix [$textWidget count -xpixels $lineStart $indentTo]
	# -update doesn't work yet for -xpixels: so this line appears to
	# assume a fixed-width font: yet it gets the correct result (with or
	# without -update) when a tab is inserted.
    }
    return $pix
}

# ::ntext::RemoveIndentOneLine --
#
# Procedure to remove the hanging indent of a single logical line
# of a text widget.  It does this regardless of whether indentation
# is active, i.e. regardless of the value of ::ntext::classicWrap
#
# User scripts should call ::ntext::wrapIndent instead.
#
# Arguments:
# textWidget -		text widget to be dedented
# index -		index in the logical line to be dedented

proc ::ntext::RemoveIndentOneLine {textWidget index} {
    # Remove -lmargin2 indentation, by removing each tag in the
    # line whose name begins "ntextAlignLM2Indent="

    set lineStart     [$textWidget index "$index linestart"]
    set nextLineStart [$textWidget index "$lineStart + 1 line"]

    set tagNames [$textWidget tag names $lineStart]

    foreach {dum1 tag dum2} [$textWidget dump -tag $lineStart $nextLineStart] {
	lappend tagNames $tag
    }

    # tagNames now holds all tags on this logical line
    # Remove the ones that ntext has previously used to set -lmargin2
    # These tags' names all begin with the same string.

    foreach tag $tagNames {
	if {[string range $tag 0 19] eq "ntextAlignLM2Indent="} {
	    $textWidget tag remove $tag $lineStart $nextLineStart
	}
    }
    return
}

# ::ntext::RemoveIndentMultipleLines --
#
# Procedure to remove the hanging indent of multiple logical lines
# of a text widget.  It does this regardless of whether indentation
# is active, i.e. regardless of the value of ::ntext::classicWrap
#
# User scripts should call ::ntext::wrapIndent instead.
#
# Arguments:
# textWidget -		text widget to be dedented
# index1 -		index in the first logical line to be dedented
# index2 -		index in the last logical line to be dedented

proc ::ntext::RemoveIndentMultipleLines {textWidget index1 index2} {
    # Remove -lmargin2 indentation, by removing each tag in these
    # lines whose name begins "ntextAlignLM2Indent="

    if {[$textWidget count -lines $index1 $index2] < 0} {
	set index3 $index1
	set index1 $index2
	set index2 $index3
    } else {
    }
    if {    ([$textWidget compare $index1 == 1.0]) &&
	    ([$textWidget compare $index2 == end])} {
	# shortcut if whole widget needs processing

	# Remove -lmargin2 indentation, by removing each tag in the
	# widget whose name begins "ntextAlignLM2Indent="

	set tagNames [$textWidget tag names]

	# tagNames now holds all tags in the widget
	# Remove the ones that ntext has previously used to set -lmargin2
	# These tags' names all begin with the same string.

	foreach tag $tagNames {
	    if {[string range $tag 0 19] eq  "ntextAlignLM2Indent="} {
		$textWidget tag remove $tag 1.0 end
	    }
	}
    } else {
	# go through the widget line-by-line
	set index1 [$textWidget index "$index1 linestart"]
	set index2 [$textWidget index "$index2 linestart"]
	for     {set index $index1} \
		{$index <= $index2 && [$textWidget compare $index != end]} \
		{set index [$textWidget index "$index + 1 line"]} {
	    RemoveIndentOneLine $textWidget $index
	    set oldIndex $index
	}
    }
    return
}

# ::ntext::IntToColor --
#
# Return a color in 24-bit hexadecimal format (e.g. "#FF8080") whose
# value is a periodic function of the number $pix, with period $range.
# Nothing too dark: each of R, G and B is in the range 156 to 255.
# Return value is white if $pix == 0
#
# Arguments:
# pix -  		real or integer number
# range -		real or integer number, non-zero

proc ::ntext::IntToColor {pix range} {
    set val [expr {int(99.9 - $pix * 100.0 / $range) % 100 + 156}]
    set r $val
    set g $val
    set b 255
    set color [format "#%02x%02x%02x" $r $g $b]
    return $color
}

# ::ntext::syncIndentColor --
#
# Synchronize text widget indent coloring with indentColor.
# Call only if indentColor is changed after widgets with text have been
# defined.
#
# Arguments:
# w -   		Tk window path of a text widget

proc ::ntext::syncIndentColor {w} {
    variable indentColor
    foreach tag [$w tag names] {
	if {[string match ntextAlignLM2Indent=* $tag]} {
	    catch {$w tag configure $tag -lmargincolor $indentColor}
	}
    }
    return
}

##### END OF CODE TO HANDLE (OPTIONAL) INDENTATION USING -lmargin2

##### End of procs.

# Initialize match patterns for word boundary detection -

::ntext::initializeMatchPatterns

package provide ntext 1.0b3
