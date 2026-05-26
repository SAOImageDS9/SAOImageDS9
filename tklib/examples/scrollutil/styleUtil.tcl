#==============================================================================
# Patches a few ttk widget styles and defines the style Small.Toolbutton.
#
# Copyright (c) 2019-2024  Csaba Nemethi (E-mail: csaba.nemethi@t-online.de)
#==============================================================================

package require scrollutil_tile

#
# To set the "-autohidescrollbars" or "-setfocus" option of all scrollarea
# widgets in all demo scripts to true, uncomment the corresponding line below:
#
# option add *Scrollarea.autoHideScrollbars 1
# option add *Scrollarea.setFocus           1

#
# Patch the clam theme's styles TButton, TMenubutton,
# Heading, TCheckbutton, and TRadiobutton
#
package require themepatch
themepatch::patch clam

foreach theme {alt clam classic default} {
    ttk::style theme settings $theme {
	#
	# TSpinbox
	#
	ttk::style map TSpinbox -fieldbackground {readonly white}

	#
	# Make sure the combobox will show whether it has the focus
	#
	ttk::style map TCombobox \
	    -fieldbackground [list {readonly focus} #4a6984] \
	    -foreground      [list {readonly focus} #ffffff]

	#
	# Small.Toolbutton
	#
	ttk::style configure Small.Toolbutton -padding 1
	ttk::style map Small.Toolbutton -relief [list disabled flat \
	    selected sunken pressed sunken active raised focus raised]
    }
}
unset theme

switch [tk windowingsystem] {
    aqua {
	ttk::style theme settings aqua {
	    #
	    # Work around some appearance issues related to the "aqua" theme
	    #
	    if {[catch {winfo rgb . systemTextBackgroundColor}] == 0 &&
		[catch {winfo rgb . systemTextColor}] == 0} {
		foreach style {TEntry TSpinbox} {
		    ttk::style configure $style \
			-background systemTextBackgroundColor \
			-foreground systemTextColor
		}
		unset style
	    }

	    #
	    # Small.Toolbutton
	    #
	    ttk::style configure Small.Toolbutton -padding 0
	}
    }

    x11 {
	font configure TkHeadingFont -weight normal	    ;# default: bold

	option add *selectBorderWidth		0
	option add *selectBackground		#4a6984	    ;# default: #c3c3c3
	option add *selectForeground		#ffffff	    ;# default: #000000
	option add *inactiveSelectBackground	#9e9a91	    ;# default: #c3c3c3

	ttk::setTheme clam
	ttk::style map TScrollbar -arrowcolor [list disabled #999999]
    }
}

namespace eval styleutil {
    #
    # Returns the current tile theme.
    #
    proc getCurrentTheme {} {
	if {[catch {ttk::style theme use} result] == 0} {
	    return $result
	} else {
	    return $::ttk::currentTheme
	}
    }

    #
    # Creates a toolbutton widget which appears raised when it has the focus.
    #
    proc createToolbutton {w args} {
	eval ttk::button $w -style Small.Toolbutton $args

	if {[lsearch -exact {vista xpnative} [getCurrentTheme]] >= 0} {
	    bindtags $w [linsert [bindtags $w] 1 Toolbtn]
	}

	return $w
    }
}

#
# "Toolbtn" bindings for the themes "vista" and "xpnative"
#
bind Toolbtn <FocusIn>		{ %W state  active }
bind Toolbtn <FocusOut>		{ %W state !active }
bind Toolbtn <Leave>		{ %W instate focus break }
bind Toolbtn <Button1-Leave>	{ %W state !pressed }
