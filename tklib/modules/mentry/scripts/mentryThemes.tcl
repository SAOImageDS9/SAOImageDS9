#==============================================================================
# Contains procedures that populate the array themeDefaults with theme-specific
# values of some mentry configuration options.
#
# Structure of the module:
#   - Public procedure related to tile themes
#   - Private procedures related to tile themes
#   - Private procedures related to global KDE configuration options
#
# Copyright (c) 2006-2024  Csaba Nemethi (E-mail: csaba.nemethi@t-online.de)
#==============================================================================

#
# Public procedure related to tile themes
# =======================================
#

#------------------------------------------------------------------------------
# mentry::setThemeDefaults
#
# Populates the array themeDefaults with theme-specific default values of some
# mentry configuration options and updates the array configSpecs.
#------------------------------------------------------------------------------
proc mentry::setThemeDefaults {} {
    #
    # For several themes, some of the following most frequent
    # values will be overridden by theme-specific ones:
    #
    variable themeDefaults
    array set themeDefaults [list \
	-background		white \
	-disabledbackground	"" \
	-foreground		black \
	-foreground,background	black \
	-font			TkTextFont \
    ]

    if {[info exists themeDefaults(-readonlybackground)]} {
	unset themeDefaults(-readonlybackground)
    }

    set currentTheme [::mwutil::currentTheme]
    variable isAwTheme \
	[llength [info commands ::ttk::theme::${currentTheme}::setTextColors]]
    if {$isAwTheme} {
	awTheme $currentTheme
    } elseif {[catch {${currentTheme}Theme}] != 0} {
	#
	# Fall back to the "default" theme (which is the root of all
	# themes) and then override the options set by the current one
	#
	defaultTheme
	array set themeDefaults [styleConfig .]

	if {[set bg [styleConfig TEntry -fieldbackground]] eq ""} {
	    set bg [styleConfig . -fieldbackground]
	}
	if {$bg ne ""} {
	    set themeDefaults(-background) $bg
	}

	if {[set fg [styleConfig TEntry -foreground]] eq ""} {
	    set fg [styleConfig . -foreground]
	}
	if {$fg ne ""} {
	    set themeDefaults(-foreground) $fg
	}
	set themeDefaults(-foreground,background) $themeDefaults(-foreground)

	set disabledBg ""
	array set arr [style map TEntry -fieldbackground]
	if {[info exists arr(disabled)]} {
	    set disabledBg $arr(disabled)
	} else {
	    array set arr [style map . -fieldbackground]
	    if {[info exists arr(disabled)]} {
		set disabledBg $arr(disabled)
	    }
	}
	set themeDefaults(-disabledbackground) $disabledBg	;# may be ""

	set disabledFg ""
	unset arr
	array set arr [style map TEntry -foreground]
	if {[info exists arr(disabled)]} {
	    set disabledFg $arr(disabled)
	} else {
	    array set arr [style map . -foreground]
	    if {[info exists arr(disabled)]} {
		set disabledFg $arr(disabled)
	    }
	}
	if {$disabledFg ne ""} {
	    set themeDefaults(-disabledforeground) $disabledFg
	}

	set themeDefaults(-borderwidth) 2			;# just a guess
	set themeDefaults(-labelpady)   {2 2}			;# just a guess
    }

    if {![info exists themeDefaults(-readonlybackground)]} {
	set themeDefaults(-readonlybackground) \
	    $themeDefaults(-disabledbackground)
    }

    variable configSpecs
    foreach opt {-background -foreground -font} {
	if {[llength $configSpecs($opt)] < 4} {
	    lappend configSpecs($opt) $themeDefaults($opt)
	} else {
	    lset configSpecs($opt) 3 $themeDefaults($opt)
	}
    }
}

#
# Private procedures related to tile themes
# =========================================
#

#------------------------------------------------------------------------------
# mentry::awTheme
#------------------------------------------------------------------------------
proc mentry::awTheme theme {
    switch $theme {
	awarc - arc -
	awbreeze - breeze -
	awbreezedark			{ set bdWidth 3; set labelPadY {3 3} }
	awblack - black -
	awclearlooks - clearlooks -
	awdark -
	awlight -
	awtemplate -
	awwinxpblue - winxpblue -
	default				{ set bdWidth 2; set labelPadY {2 2} }
    }

    variable themeDefaults
    array set themeDefaults [list \
	-background		[styleConfig . -fieldbackground] \
	-disabledbackground	[lindex [style map TEntry -fieldbackground] 1] \
	-foreground		[styleConfig TEntry -foreground] \
	-foreground,background	[styleConfig TEntry -foreground] \
	-disabledforeground	[lindex [style map TEntry -foreground] 1] \
	-selectbackground	[styleConfig . -selectbackground] \
	-selectforeground	[styleConfig . -selectforeground] \
	-selectborderwidth	[styleConfig . -selectborderwidth] \
	-borderwidth		$bdWidth \
	-labelpady		$labelPadY \
    ]
}

#------------------------------------------------------------------------------
# mentry::altTheme
#------------------------------------------------------------------------------
proc mentry::altTheme {} {
    variable themeDefaults
    array set themeDefaults [list \
	-disabledbackground	#d9d9d9 \
	-disabledforeground	#a3a3a3 \
	-selectbackground	#4a6984 \
	-selectforeground	#ffffff \
	-selectborderwidth	0 \
	-borderwidth		2 \
	-labelpady		{2 2} \
    ]
}

#------------------------------------------------------------------------------
# mentry::aquaTheme
#------------------------------------------------------------------------------
proc mentry::aquaTheme {} {
    variable newAquaSupport
    variable themeDefaults
    if {$newAquaSupport} {
	variable extendedAquaSupport
	if {[tk::unsupported::MacWindowStyle isdark .]} {
	    set background [expr {$extendedAquaSupport ? "#3a3a3a" : "#4b4b4b"}]
	} else {
	    set background #ffffff
	}

	if {$extendedAquaSupport} {
	    ##nagelfar ignore
	    scan $::tcl_platform(osVersion) "%d" majorOSVersion
	    set labelPadY [expr {$majorOSVersion >= 18 ? {4 7} : {4 5}}]
	} else {
	    set labelPadY {4 7}
	}

	array set themeDefaults [list \
	    -background			$background \
	    -foreground			systemTextColor \
	    -foreground,background	systemTextColor \
	    -disabledforeground		systemDisabledControlTextColor \
	    -selectbackground		systemSelectedTextBackgroundColor \
	    -selectforeground		systemSelectedTextColor \
	    -selectborderwidth		0 \
	    -borderwidth		4 \
	    -labelpady			$labelPadY \
	]
    } else {
	array set themeDefaults [list \
	    -background			systemWindowBody \
	    -foreground			systemModelessDialogActiveText \
	    -foreground,background	systemModelessDialogInactiveText \
	    -disabledforeground		systemModelessDialogInactiveText \
	    -selectbackground		systemHighlight \
	    -selectforeground		systemModelessDialogActiveText \
	    -selectborderwidth		0 \
	    -borderwidth		4 \
	    -labelpady			{4 4} \
	]
    }
}

#------------------------------------------------------------------------------
# mentry::AquativoTheme
#------------------------------------------------------------------------------
proc mentry::AquativoTheme {} {
    variable themeDefaults
    array set themeDefaults [list \
	-disabledforeground	black \
	-selectbackground	#000000 \
	-selectforeground	#ffffff \
	-selectborderwidth	0 \
	-borderwidth		2 \
	-labelpady		{2 2} \
    ]
}

#------------------------------------------------------------------------------
# mentry::aquativoTheme
#------------------------------------------------------------------------------
proc mentry::aquativoTheme {} {
    variable themeDefaults
    array set themeDefaults [list \
	-disabledforeground	#565248 \
	-selectbackground	#000000 \
	-selectforeground	#ffffff \
	-selectborderwidth	0 \
	-borderwidth		2 \
	-labelpady		{2 2} \
    ]
}

#------------------------------------------------------------------------------
# mentry::ArcTheme
#------------------------------------------------------------------------------
proc mentry::ArcTheme {} {
    variable themeDefaults
    array set themeDefaults [list \
	-disabledbackground	#fbfcfc \
	-foreground		#5c616c \
	-foreground,background	#5c616c \
	-disabledforeground	#a9acb2 \
	-selectbackground	#5294e2 \
	-selectforeground	#ffffff \
	-selectborderwidth	0 \
	-borderwidth		3 \
	-labelpady		{3 3} \
    ]
}

#------------------------------------------------------------------------------
# mentry::blueTheme
#------------------------------------------------------------------------------
proc mentry::blueTheme {} {
    variable themeDefaults
    array set themeDefaults [list \
	-background		#e6f3ff \
	-disabledforeground	#666666 \
	-selectbackground	#ffff33 \
	-selectforeground	#000000 \
	-selectborderwidth	1 \
	-borderwidth		2 \
	-labelpady		{2 2} \
    ]
}

#------------------------------------------------------------------------------
# mentry::blackTheme
#------------------------------------------------------------------------------
proc mentry::blackTheme {} {
    variable themeDefaults
    array set themeDefaults [list \
	-background		#ffffff \
	-disabledforeground	#a9a9a9 \
	-selectbackground	#4a6984 \
	-selectforeground	#ffffff \
	-selectborderwidth	0 \
	-borderwidth		2 \
	-labelpady		{2 2} \
    ]
}

#------------------------------------------------------------------------------
# mentry::BreezeTheme, mentry::breezeTheme
#------------------------------------------------------------------------------
proc mentry::BreezeTheme {} {
    variable themeDefaults
    array set themeDefaults [list \
	-background		#fcfcfc \
	-readonlybackground	#fcfcfc \
	-disabledbackground	#eff0f1 \
	-disabledforeground	#bbcbbe \
	-selectbackground	#3daee9 \
	-selectforeground	#ffffff \
	-selectborderwidth	0 \
	-borderwidth		2 \
	-labelpady		{2 2} \
    ]
}
proc mentry::breezeTheme {} {
    BreezeTheme
}

#------------------------------------------------------------------------------
# mentry::breeze-darkTheme
#------------------------------------------------------------------------------
proc mentry::breeze-darkTheme {} {
    variable themeDefaults
    array set themeDefaults [list \
	-background		#2f3336 \
	-readonlybackground	#2f3336 \
	-disabledbackground	#31363b \
	-disabledforeground	#7f8c8d \
	-selectbackground	#3daee9 \
	-selectforeground	#ffffff \
	-selectborderwidth	0 \
	-borderwidth		2 \
	-labelpady		{2 2} \
    ]
}

#------------------------------------------------------------------------------
# mentry::clamTheme
#------------------------------------------------------------------------------
proc mentry::clamTheme {} {
    variable themeDefaults
    array set themeDefaults [list \
	-disabledforeground	#999999 \
	-selectbackground	#4a6984 \
	-selectforeground	#ffffff \
	-selectborderwidth	0 \
	-borderwidth		2 \
	-labelpady		{2 2} \
    ]
}

#------------------------------------------------------------------------------
# mentry::classicTheme
#------------------------------------------------------------------------------
proc mentry::classicTheme {} {
    variable themeDefaults
    array set themeDefaults [list \
	-disabledbackground	#d9d9d9 \
	-disabledforeground	#a3a3a3 \
	-selectbackground	#c3c3c3 \
	-selectforeground	#000000 \
    ]

    set val [styleConfig . -selectborderwidth]
    set themeDefaults(-selectborderwidth) [expr {$val eq "" ? 0 : $val}]

    if {[styleConfig . -borderwidth] == 1} {
	set themeDefaults(-borderwidth) 2
	set themeDefaults(-labelpady)	{2 2}
    } else {
	set themeDefaults(-borderwidth)	3
	set themeDefaults(-labelpady)	{3 3}
    }
}

#------------------------------------------------------------------------------
# mentry::clearlooksTheme
#------------------------------------------------------------------------------
proc mentry::clearlooksTheme {} {
    variable themeDefaults
    array set themeDefaults [list \
	-readonlybackground	#efebe7 \
	-disabledforeground	#b5b3ac \
	-selectbackground	#7c99ad \
	-selectforeground	#ffffff \
	-selectborderwidth	0 \
	-borderwidth		2 \
	-labelpady		{2 2} \
    ]
}

#------------------------------------------------------------------------------
# mentry::defaultTheme
#------------------------------------------------------------------------------
proc mentry::defaultTheme {} {
    variable themeDefaults
    array set themeDefaults [list \
	-disabledbackground	#d9d9d9 \
	-disabledforeground	#a3a3a3 \
	-selectbackground	#4a6984 \
	-selectforeground	#ffffff \
    ]

    set val [styleConfig . -selectborderwidth]
    set themeDefaults(-selectborderwidth) [expr {$val eq "" ? 0 : $val}]

    if {[styleConfig TEntry -focuswidth] eq ""} {
	set themeDefaults(-borderwidth)       1
	set themeDefaults(-labelpady)         {1 1}
    } else {
	set themeDefaults(-borderwidth)       2
	set themeDefaults(-labelpady)         {2 2}
    }
}

#------------------------------------------------------------------------------
# mentry::keramikTheme
#------------------------------------------------------------------------------
proc mentry::keramikTheme {} {
    variable themeDefaults
    array set themeDefaults [list \
	-disabledforeground	#aaaaaa \
	-selectbackground	#0a5f89 \
	-selectforeground	#ffffff \
	-selectborderwidth	0 \
	-borderwidth		2 \
	-labelpady		{2 2} \
    ]
}

#------------------------------------------------------------------------------
# mentry::keramik_altTheme
#------------------------------------------------------------------------------
proc mentry::keramik_altTheme {} {
    variable themeDefaults
    array set themeDefaults [list \
	-disabledforeground	#aaaaaa \
	-selectbackground	#0a5f89 \
	-selectforeground	#ffffff \
	-selectborderwidth	0 \
	-borderwidth		2 \
	-labelpady		{2 2} \
    ]
}

#------------------------------------------------------------------------------
# mentry::krocTheme
#------------------------------------------------------------------------------
proc mentry::krocTheme {} {
    variable themeDefaults
    array set themeDefaults [list \
	-disabledforeground	#b2b2b2 \
	-selectbackground	#000000 \
	-selectforeground	#ffffff \
	-selectborderwidth	1 \
	-borderwidth		2 \
	-labelpady		{2 2} \
    ]
}

#------------------------------------------------------------------------------
# mentry::plastikTheme
#------------------------------------------------------------------------------
proc mentry::plastikTheme {} {
    variable themeDefaults
    array set themeDefaults [list \
	-disabledforeground	#aaaaaa \
	-selectbackground	#657a9e \
	-selectforeground	#ffffff \
	-selectborderwidth	0 \
	-borderwidth		2 \
	-labelpady		{2 2} \
    ]
}

#------------------------------------------------------------------------------
# mentry::srivTheme
#------------------------------------------------------------------------------
proc mentry::srivTheme {} {
    variable themeDefaults
    array set themeDefaults [list \
	-background		#e6f3ff \
	-disabledforeground	#666666 \
	-selectbackground	#ffff33 \
	-selectforeground	#000000 \
	-selectborderwidth	1 \
	-borderwidth		1 \
	-labelpady		{1 1} \
    ]
}

#------------------------------------------------------------------------------
# mentry::srivlgTheme
#------------------------------------------------------------------------------
proc mentry::srivlgTheme {} {
    variable themeDefaults
    array set themeDefaults [list \
	-background		#e6f3ff \
	-disabledforeground	#666666 \
	-selectbackground	#ffff33 \
	-selectforeground	#000000 \
	-selectborderwidth	1 \
	-borderwidth		3 \
	-labelpady		{3 3} \
    ]
}

#------------------------------------------------------------------------------
# mentry::stepTheme
#------------------------------------------------------------------------------
proc mentry::stepTheme {} {
    variable themeDefaults
    array set themeDefaults [list \
	-disabledforeground	#808080 \
	-selectbackground	#fdcd00 \
	-selectforeground	#ffffff \
	-selectborderwidth	0 \
	-borderwidth		2 \
	-labelpady		{2 2} \
    ]
}

#------------------------------------------------------------------------------
# mentry::sun-valley-lightTheme
#------------------------------------------------------------------------------
proc mentry::sun-valley-lightTheme {} {
    variable themeDefaults
    array set themeDefaults [list \
	-background		#fdfdfd \
	-readonlybackground	#fdfdfd \
	-disabledbackground	#fafafa \
	-disabledforeground	#a0a0a0 \
	-selectbackground	#2f60d8 \
	-selectforeground	#ffffff \
	-font			SunValleyBodyFont \
	-selectborderwidth	0 \
	-borderwidth		2 \
	-labelpady		{2 2} \
    ]
}

#------------------------------------------------------------------------------
# mentry::sun-valley-darkTheme
#------------------------------------------------------------------------------
proc mentry::sun-valley-darkTheme {} {
    variable themeDefaults
    array set themeDefaults [list \
	-background		#292929 \
	-readonlybackground	#292929 \
	-disabledbackground	#262626 \
	-disabledforeground	#595959 \
	-selectbackground	#2f60d8 \
	-selectforeground	#ffffff \
	-font			SunValleyBodyFont \
	-selectborderwidth	0 \
	-borderwidth		2 \
	-labelpady		{2 2} \
    ]
}

#------------------------------------------------------------------------------
# mentry::tileqtTheme
#------------------------------------------------------------------------------
proc mentry::tileqtTheme {} {
    set mentryBg    [tileqt_currentThemeColour -base]
    set mentryDisBg [tileqt_currentThemeColour -disabled -base]
    set mentryFg    [tileqt_currentThemeColour -text]
    set mentryDisFg [tileqt_currentThemeColour -disabled -text]
    set selectBg    [tileqt_currentThemeColour -highlight]
    set selectFg    [tileqt_currentThemeColour -highlightedText]

    variable themeDefaults
    array set themeDefaults [list \
	-background		$mentryBg \
	-disabledbackground	$mentryDisBg \
	-foreground		$mentryFg \
	-foreground,background	$mentryFg \
	-disabledforeground	$mentryDisFg \
	-selectbackground	$selectBg \
	-selectforeground	$selectFg \
	-selectborderwidth	0 \
	-borderwidth		3 \
	-labelpady		{3 3} \
    ]
}

#------------------------------------------------------------------------------
# mentry::vistaTheme
#------------------------------------------------------------------------------
proc mentry::vistaTheme {} {
    variable themeDefaults
    array set themeDefaults [list \
	-background		SystemWindow \
	-disabledbackground	SystemButtonFace \
	-foreground		SystemWindowText \
	-foreground,background	SystemWindowText \
	-disabledforeground	SystemDisabledText \
	-selectbackground	SystemHighlight \
	-selectforeground	SystemHighlightText \
	-selectborderwidth	0 \
	-borderwidth		2 \
	-labelpady		{2 2} \
    ]
}

#------------------------------------------------------------------------------
# mentry::winnativeTheme
#------------------------------------------------------------------------------
proc mentry::winnativeTheme {} {
    variable themeDefaults
    array set themeDefaults [list \
	-background		SystemWindow \
	-disabledbackground	SystemButtonFace \
	-foreground		SystemWindowText \
	-foreground,background	SystemWindowText \
	-disabledforeground	SystemDisabledText \
	-selectbackground	SystemHighlight \
	-selectforeground	SystemHighlightText \
	-selectborderwidth	0 \
	-borderwidth		2 \
	-labelpady		{2 2} \
    ]
}

#------------------------------------------------------------------------------
# mentry::winxpblueTheme
#------------------------------------------------------------------------------
proc mentry::winxpblueTheme {} {
    variable themeDefaults
    array set themeDefaults [list \
	-disabledforeground	#565248 \
	-selectbackground	#4a6984 \
	-selectforeground	#ffffff \
	-selectborderwidth	0 \
	-borderwidth		2 \
	-labelpady		{2 2} \
    ]
}

#------------------------------------------------------------------------------
# mentry::xpnativeTheme
#------------------------------------------------------------------------------
proc mentry::xpnativeTheme {} {
    variable themeDefaults
    array set themeDefaults [list \
	-background		SystemWindow \
	-disabledbackground	SystemButtonFace \
	-foreground		SystemWindowText \
	-foreground,background	SystemWindowText \
	-disabledforeground	SystemDisabledText \
	-selectbackground	SystemHighlight \
	-selectforeground	SystemHighlightText \
	-selectborderwidth	0 \
	-borderwidth		2 \
	-labelpady		{2 4} \
    ]
}

#
# Private procedures related to global KDE configuration options
# ==============================================================
#

#------------------------------------------------------------------------------
# mentry::getKdeConfigVal
#
# Returns the value of the global KDE configuration option identified by the
# given group (section) and key.
#------------------------------------------------------------------------------
proc mentry::getKdeConfigVal {group key} {
    variable kdeDirList

    if {![info exists kdeDirList]} {
	makeKdeDirList
    }

    #
    # Search for the entry corresponding to the given group and key in
    # the file "share/config/kdeglobals" within the KDE directories
    #
    foreach dir $kdeDirList {
	set fileName [file join $dir "share/config/kdeglobals"]
	if {[set val [readKdeConfigVal $fileName $group $key]] ne ""} {
	    return $val
	}
    }
    return ""
}

#------------------------------------------------------------------------------
# mentry::makeKdeDirList
#
# Builds the list of the directories to be considered when searching for global
# KDE configuration options.
#------------------------------------------------------------------------------
proc mentry::makeKdeDirList {} {
    variable kdeDirList {}

    if {[info exists ::env(KDE_SESSION_VERSION)]} {
	set ver $::env(KDE_SESSION_VERSION)
    } else {
	set ver ""
    }

    if {[info exists ::env(USER)] && $::env(USER) eq "root"} {
	set name "KDEROOTHOME"
    } else {
	set name "KDEHOME"
    }
    if {[info exists ::env($name)] && $::env($name) ne ""} {
	set localKdeDir [file normalize $::env($name)]
    } elseif {[info exists ::env(HOME)] && $::env(HOME) ne ""} {
	set localKdeDir [file normalize [file join $::env(HOME) ".kde$ver"]]
    }
    if {[info exists localKdeDir] && $localKdeDir ne "-"} {
	lappend kdeDirList $localKdeDir
    }

    if {[info exists ::env(KDEDIRS)] && $::env(KDEDIRS) ne ""} {
	foreach dir [split $::env(KDEDIRS) ":"] {
	    if {$dir ne ""} {
		lappend kdeDirList $dir
	    }
	}
    } elseif {[info exists ::env(KDEDIR)] && $::env(KDEDIR) ne ""} {
	lappend kdeDirList $::env(KDEDIR)
    }

    set prefix [exec kde$ver-config --expandvars --prefix]
    lappend kdeDirList $prefix

    set execPrefix [exec kde$ver-config --expandvars --exec-prefix]
    if {$execPrefix ne $prefix} {
	lappend kdeDirList $execPrefix
    }
}

#------------------------------------------------------------------------------
# mentry::readKdeConfigVal
#
# Reads the value of the global KDE configuration option identified by the
# given group (section) and key from the specified file.  Note that the
# procedure performs a case-sensitive search and only works as expected for
# "simple" group and key names.
#------------------------------------------------------------------------------
proc mentry::readKdeConfigVal {fileName group key} {
    if {[catch {open $fileName r} chan] != 0} {
	return ""
    }

    #
    # Search for the specified group
    #
    set groupFound 0
    while {[gets $chan line] >= 0} {
	set line [string trim $line]
	if {$line eq "\[$group\]"} {
	    set groupFound 1
	    break
	}
    }
    if {!$groupFound} {
	close $chan
	return ""
    }

    #
    # Search for the specified key within the group
    #
    set pattern "^$key\\s*=\\s*(.+)$"
    set keyFound 0
    while {[gets $chan line] >= 0} {
	set line [string trim $line]
	if {[string range $line 0 0] eq "\["} {
	    break
	}

	if {[regexp $pattern $line dummy val]} {
	    set keyFound 1
	    break
	}
    }

    close $chan
    return [expr {$keyFound ? $val : ""}]
}
