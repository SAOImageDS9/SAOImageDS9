#==============================================================================
# Patches a few ttk widget styles and defines the style Small.Toolbutton.
#
# Copyright (c) 2019-2020  Csaba Nemethi (E-mail: csaba.nemethi@t-online.de)
#==============================================================================

#
# On X11 use a slightly patched variant of the "clam" theme
#
if {[tk windowingsystem] eq "x11"} {
    ttk::setTheme clam

    option add *selectBackground	  #4a6984	;# default: #c3c3c3
    option add *selectForeground	  #ffffff	;# default: #000000
    option add *inactiveSelectBackground  #9e9a91	;# default: #c3c3c3

    ttk::style configure TButton -padding 3 -width -9	;# default: 5, -11
    ttk::style configure Heading -padding 1		;# default: 3

    if {[catch {rename tablelist::clamTheme tablelist::_clamTheme}] == 0} {
	proc tablelist::clamTheme {} {
	    tablelist::_clamTheme

	    variable themeDefaults
	    set themeDefaults(-labelpady) 1		;# default: 3
	}
    }
}

#
# TCombobox
#
# Make sure the combobox will show whether it has the focus
#
if {[lsearch -exact {alt clam default} $ttk::currentTheme] >= 0} {
    ttk::style map TCombobox \
	-fieldbackground [list {readonly focus} #4a6984] \
	-foreground      [list {readonly focus} #ffffff]

    option add *TCombobox*Listbox.selectBackground  #4a6984
    option add *TCombobox*Listbox.selectForeground  #ffffff
}

#
# TSpinbox
#
ttk::style map TSpinbox -fieldbackground {readonly white}

#
# Small.Toolbutton
#
switch $ttk::currentTheme {
    aqua     { ttk::style configure Small.Toolbutton -padding 0 }

    vista -
    xpnative {}

    default  {
	ttk::style configure Small.Toolbutton -padding 1
	ttk::style map Small.Toolbutton -relief [list disabled flat \
	    selected sunken pressed sunken active raised focus raised]
    }
}

#
# createToolbutton
#
# Creates a toolbutton widget which appears raised when it has the focus.
#
proc createToolbutton {w args} {
    eval ttk::button $w -style Small.Toolbutton $args

    if {[lsearch -exact {vista xpnative} $ttk::currentTheme] >= 0} {
	bindtags $w [linsert [bindtags $w] 1 Toolbtn]
    }

    return $w
}

#
# "Toolbtn" bindings for the themes "vista" and "xpnative"
#
bind Toolbtn <FocusIn>		{ %W state  active }
bind Toolbtn <FocusOut>		{ %W state !active }
bind Toolbtn <Leave>		{ %W instate focus break }
bind Toolbtn <Button1-Leave>	{ %W state !pressed }
