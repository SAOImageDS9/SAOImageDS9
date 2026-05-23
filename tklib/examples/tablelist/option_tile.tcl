#==============================================================================
# Contains some Tk option database settings.
#
# Copyright (c) 2004-2023  Csaba Nemethi (E-mail: csaba.nemethi@t-online.de)
#==============================================================================

#
# Add some entries to the Tk option database
#
set currentTheme [tablelist::getCurrentTheme]
if {$tablelist::themeDefaults(-stripebackground) eq "" &&
    $currentTheme ne "black" && $currentTheme ne "breeze-dark" &&
    $currentTheme ne "sun-valley-dark"} {
    option add *Tablelist.background		white
    option add *Tablelist.stripeBackground	#f0f0f0
}
if {[tk windowingsystem] eq "x11"} {
    option add *Font		  TkDefaultFont
    option add *selectBackground  $tablelist::themeDefaults(-selectbackground)
    option add *selectForeground  $tablelist::themeDefaults(-selectforeground)
}
option add *selectBorderWidth	  $tablelist::themeDefaults(-selectborderwidth)
option add *Tablelist.setGrid			yes
option add *Tablelist.movableColumns		yes
option add *Tablelist.labelCommand		tablelist::sortByColumn
option add *Tablelist.labelCommand2		tablelist::addToSortColumns
set isAwTheme \
    [llength [info commands ::ttk::theme::${currentTheme}::setTextColors]]
if {$isAwTheme && ![regexp {^(aw)?(arc|breeze.*)$} $currentTheme]} {
    option add *ScrollArea.borderWidth		2
} else {
    option add *ScrollArea.borderWidth		1
}
option add *ScrollArea.relief			sunken
option add *ScrollArea.Tablelist.borderWidth	0
option add *ScrollArea.Text.borderWidth		0
option add *ScrollArea.Text.highlightThickness	0

#
# Work around some appearance issues related to the "aqua" theme
#
if {$currentTheme eq "aqua"} {
    if {[catch {winfo rgb . systemTextBackgroundColor}] == 0 &&
	[catch {winfo rgb . systemTextColor}] == 0} {
	foreach style {TEntry TSpinbox} {
	    ttk::style configure $style -background systemTextBackgroundColor \
		-foreground systemTextColor
	}
    }

    if {[package vcompare $::tk_patchLevel "8.6.10"] < 0} {
	interp alias {} ttk::scrollbar {} ::scrollbar
    }
}
