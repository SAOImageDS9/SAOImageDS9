#==============================================================================
# Contains scaling-related utility procedures.
#
# Structure of the module:
#   - Namespace initialization
#   - Public utility procedures
#   - Private helper procedures
#
# Copyright (c) 2020-2023  Csaba Nemethi (E-mail: csaba.nemethi@t-online.de)
#==============================================================================

if {[catch {package require Tk 8.4-}]} {
    package require Tk 8.4
}

#
# Namespace initialization
# ========================
#

namespace eval scaleutil {
    #
    # Public variables:
    #
    variable version	1.14.1
    variable library	[file dirname [file normalize [info script]]]

    #
    # Public procedures:
    #
    namespace export	scalingPercentage scale

    #
    # Makes sure that the scaleutil::setTreeviewRowHeight procedure will be
    # invoked whenever the virtual event <<ThemeChanged>> is received (e.g.,
    # because the value of the Treeview style's -font option has changed),
    # or the virtual event <<TkWorldChanged>> with the user_data field (%d)
    # set to "FontChanged" is received.
    #
    proc createBindings {} {
	set tagList [bindtags .]
	if {[lsearch -exact $tagList "ScaleutilMain"] < 0} {
	    bindtags . [linsert $tagList 1 ScaleutilMain]
	    bind ScaleutilMain <<ThemeChanged>> scaleutil::setTreeviewRowHeight
	    bind ScaleutilMain <<TkWorldChanged>> {
		if {"%d" eq "FontChanged"} {
		    scaleutil::setTreeviewRowHeight
		}
	    }
	}
    }
    variable ttkSupported [expr {[llength [info commands ::ttk::style]] > 0}]
    if {$ttkSupported} {
	createBindings
    }
}

package provide scaleutil $scaleutil::version

#
# Public utility procedures
# =========================
#

#------------------------------------------------------------------------------
# scaleutil::scalingPercentage
#
# Returns the display's current scaling percentage (100, 125, 150, 175, or 200).
#------------------------------------------------------------------------------
proc scaleutil::scalingPercentage winSys {
    variable scalingPct
    if {[info exists ::tk::scalingPct]} {		;# Tk 8.7b1/9 or later
	set scalingPct $::tk::scalingPct
    }
    if {[info exists scalingPct]} {
	return [expr {$scalingPct > 200 ? 200 : $scalingPct}]
    }

    variable ttkSupported
    if {$ttkSupported} {
	#
	# Set the default height of the ttk::treeview rows
	#
	setTreeviewRowHeight
    }

    set pct [expr {[tk scaling] * 75}]
    set origPct $pct

    set onX11 [expr {$winSys eq "x11"}]
    set usingSDL [expr {[info exists ::tk::sdltk] && $::tk::sdltk}]

    if {$onX11 && !$usingSDL} {
	#
	# Try to get the window scaling factor (1 or 2), partly
	# based on https://wiki.archlinux.org/title/HiDPI
	#
	set winScalingFactor 1
	set fontScalingFactor 1
	if {[catch {exec ps -e | grep xfce4-session}] == 0} {		;# Xfce
	    if {[catch {exec xfconf-query -c xsettings \
		 -p /Gdk/WindowScalingFactor} result] == 0} {
		set winScalingFactor $result
		if {$winScalingFactor >= 2} {
		    set fontScalingFactor 2
		}
	    }

	    #
	    # The DPI value can be set in the "Fonts" tab of the "Appearance"
	    # dialog or (on Linux Lite 5+) via the "HiDPI Settings" dialog.
	    #
	} elseif {[catch {exec ps -e | grep mate-session}] == 0} {	;# MATE
	    if {[catch {exec gsettings get org.mate.interface \
		 window-scaling-factor} result] == 0} {
		if {$result == 0} {			;# means: "Auto-detect"
		    #
		    # Try to get winScalingFactor from the cursor size
		    #
		    if {[catch {exec xrdb -query | grep Xcursor.size} result]
			== 0 &&
			[catch {exec gsettings get org.mate.peripherals-mouse \
			 cursor-size} defCursorSize] == 0} {
			set cursorSize [lindex $result 1]
			set winScalingFactor \
			    [expr {($cursorSize + $defCursorSize - 1) /
				    $defCursorSize}]
		    }
		} else {
		    set winScalingFactor $result
		}
	    }

	    #
	    # The DPI value can be set via the "Font Rendering Details"
	    # dialog, which can be opened using the "Details..." button
	    # in the "Fonts" tab of the "Appearance Preferences" dialog.
	    #
	} elseif {[catch {exec ps -e | grep gnome-session}] == 0 &&
		  [catch {exec gsettings get \
		   org.gnome.settings-daemon.plugins.xsettings overrides} \
		   result] == 0 &&
		  [set idx \
		   [string first "'Gdk/WindowScalingFactor'" $result]] >= 0} {
	    ##nagelfar ignore
	    scan [string range $result $idx end] "%*s <%d>" winScalingFactor
	}

	#
	# Get the scaling percentage
	#
	if {$winScalingFactor >= 2} {
	    set pct 200
	} elseif {[catch {exec xrdb -query | grep Xft.dpi} result] == 0} {
	    #
	    # Derive the value of pct from that of the font DPI
	    #
	    set dpi [lindex $result 1]
	    set pct [expr {100.0 * $dpi / 96}]
	} elseif {[catch {exec ps -e | grep gnome-session}] == 0 &&
		  ![info exists ::env(WAYLAND_DISPLAY)] &&
		  [catch {exec xrandr | grep " connected"} result] == 0 &&
		  [catch {open $::env(HOME)/.config/monitors.xml} chan] == 0} {
	    #
	    # Update pct by scanning the file ~/.config/monitors.xml
	    #
	    scanMonitorsFile $result $chan pct
	}
    }

    if {$pct == 100} {
	set scalingPct 100
	return 100
    }

    #
    # Scale the default parameters of the panedwindow sash
    #
    option add *Panedwindow.handlePad		[scale 8 $pct] widgetDefault
    option add *Panedwindow.handleSize		[scale 8 $pct] widgetDefault
    if {$::tk_version >= 8.5} {
	option add *Panedwindow.sashPad		0 widgetDefault
	option add *Panedwindow.sashWidth	[scale 3 $pct] widgetDefault
    } else {
	option add *Panedwindow.sashPad		[scale 2 $pct] widgetDefault
	option add *Panedwindow.sashWidth	[scale 2 $pct] widgetDefault
    }

    #
    # Scale the default size of the scale widget and its slider
    #
    option add *Scale.length		$pct widgetDefault
    option add *Scale.sliderLength	[scale 30 $pct] widgetDefault
    option add *Scale.width		[scale 15 $pct] widgetDefault

    if {$onX11} {
	#
	# Conditionally set Tk's scaling factor according to $pct
	#
	if {$pct != $origPct && ![interp issafe]} {
	    variable keepTkScaling
	    if {!([info exists keepTkScaling] && $keepTkScaling)} {
		tk scaling [expr {$pct / 75.0}]
	    }
	}

	#
	# Conditionally correct and then scale the sizes of the standard fonts
	#
	if {$ttkSupported && !$usingSDL} {
	    scaleX11Fonts $fontScalingFactor
	}

	#
	# Scale the default scrollbar width
	#
	if {$::tk_version >= 8.5} {
	    option add *Scrollbar.width	[scale 11 $pct] widgetDefault
	} else {
	    option add *Scrollbar.width [scale 15 $pct] widgetDefault
	}
    }

    if {$ttkSupported} {
	#
	# Scale the default ttk::scale and ttk::progressbar length
	#
	option add *TScale.length	$pct widgetDefault
	option add *TProgressbar.length	$pct widgetDefault

	#
	# Scale a few styles for the built-in themes
	# "alt", "clam", "classic", and "default"
	#
	foreach theme {alt clam classic default} {
	    scaleStyles_$theme $pct
	}

	#
	# Scale a few styles for the built-in Windows themes
	#
	foreach theme {vista winnative xpnative} {
	    if {[lsearch -exact [ttk::style theme names] $theme] >= 0} {
		scaleStyles_$theme $pct
	    }
	}
    }

    #
    # Save the value of pct rounded to the nearest multiple
    # of 25 that is at least 100, in the variable scalingPct
    #
    for {set scalingPct 100} {1} {incr scalingPct 25} {
	if {$pct < $scalingPct + 12.5} {
	    break
	}
    }

    #
    # For the "vista" and "xpnative" themes work around a bug
    # related to the scaling of ttk::checkbutton and ttk::radiobutton
    # widgets in Tk releases no later than 8.6.10 and 8.7a3
    #
    if {$ttkSupported && $scalingPct > 100 &&
	([package vcompare $::tk_patchLevel "8.6.10"] <= 0 ||
	 ($::tk_version == 8.7 &&
	  [package vcompare $::tk_patchLevel "8.7a3"] <= 0))} {
	foreach theme {vista xpnative} {
	    if {[lsearch -exact [ttk::style theme names] $theme] >= 0} {
		patchWinTheme $theme $scalingPct
	    }
	}
    }

    return [expr {$scalingPct > 200 ? 200 : $scalingPct}]
}

#------------------------------------------------------------------------------
# scaleutil::scale
#
# Scales an integer num according to a given scaling percentage pct (which is
# assumed to be a nonnegative, but not necessarily integer, number).
#------------------------------------------------------------------------------
proc scaleutil::scale {num pct} {
    return [expr {round($num * $pct / 100.0)}]
}

#
# Private helper procedures
# =========================
#

#------------------------------------------------------------------------------
# scaleutil::setTreeviewRowHeight
#
# Sets the default height of the ttk::treeview rows.
#------------------------------------------------------------------------------
proc scaleutil::setTreeviewRowHeight {} {
    set font [ttk::style lookup Treeview -font]
    if {$font eq ""} {
	set font TkDefaultFont
    }

    ttk::style configure Treeview -rowheight \
	[expr {[font metrics $font -linespace] + 2}]
}

#------------------------------------------------------------------------------
# scaleutil::scanMonitorsFile
#
# Updates the scaling percentage by scanning the file ~/.config/monitors.xml.
#------------------------------------------------------------------------------
proc scaleutil::scanMonitorsFile {xrandrResult chan pctName} {
    upvar $pctName pct

    #
    # Get the list of connected outputs reported by xrandr
    #
    set outputList {}
    foreach line [split $xrandrResult "\n"] {
	set idx [string first " " $line]
	set output [string range $line 0 [incr idx -1]]
	lappend outputList $output
    }
    set outputList [lsort $outputList]

    #
    # Get the content of the file ~/.config/monitors.xml
    #
    set str [read $chan]
    close $chan

    #
    # Run over the file's "configuration" sections
    #
    set idx 0
    while {[set idx2 [string first "<configuration>" $str $idx]] >= 0} {
	set idx2 [string first ">" $str $idx2]
	set idx [string first "</configuration>" $str $idx2]
	set config [string range $str [incr idx2] [incr idx -1]]

	#
	# Get the list of connectors within this configuration
	#
	set connectorList {}
	foreach {dummy connector} [regexp -all -inline \
		{<connector>([^<]+)</connector>} $config] {
	    lappend connectorList $connector
	}
	set connectorList [lsort $connectorList]

	#
	# If $outputList and $connectorList are identical then set the
	# variable pct to 100, 200, 300, 400, or 500, depending on the
	# max. scaling within this configuration, and exit the loop
	#
	if {$outputList eq $connectorList} {
	    set maxScaling 1.0
	    foreach {dummy scaling} [regexp -all -inline \
		    {<scale>([^<]+)</scale>} $config] {
		if {$scaling > $maxScaling} {
		    set maxScaling $scaling
		}
	    }

	    foreach n {4 3 2 1 0} {
		if {$maxScaling > $n} {
		    set pct [expr {($n + 1) * 100}]
		    break
		}
	    }

	    break
	}
    }
}

#------------------------------------------------------------------------------
# scaleutil::scaleX11Fonts
#
# If needed, corrects the sizes of the standard fonts on X11 by replacing the
# sizes in pixels contained in the library file ttk/fonts.tcl with sizes in
# points, and then multiplies them with $factor.
#------------------------------------------------------------------------------
proc scaleutil::scaleX11Fonts factor {
    set chan [open $::tk_library/ttk/fonts.tcl]
    set str [read $chan]
    close $chan

    set idx [string first "courier" $str]
    set str [string range $str $idx end]

    set idx [string first "size" $str]
    ##nagelfar ignore
    scan [string range $str $idx end] "%*s %d" size
    set points [expr {$size < 0 ? 9 : $size}]		;# -12 -> 9, else 10
    foreach font {TkDefaultFont TkTextFont TkHeadingFont
		  TkIconFont TkMenuFont} {
	font configure $font -size [expr {$factor * $points}]
    }

    set idx [string first "ttsize" $str]
    ##nagelfar ignore
    scan [string range $str $idx end] "%*s %d" size
    set points [expr {$size < 0 ? 8 : $size}]		;# -10 -> 8, else 9
    foreach font {TkTooltipFont TkSmallCaptionFont} {
	font configure $font -size [expr {$factor * $points}]
    }

    set idx [string first "capsize" $str]
    ##nagelfar ignore
    scan [string range $str $idx end] "%*s %d" size
    set points [expr {$size < 0 ? 11 : $size}]		;# -14 -> 11, else 12
    font configure TkCaptionFont -size [expr {$factor * $points}]

    set idx [string first "fixedsize" $str]
    ##nagelfar ignore
    scan [string range $str $idx end] "%*s %d" size
    set points [expr {$size < 0 ? 9 : $size}]		;# -12 -> 9, else 10
    font configure TkFixedFont -size [expr {$factor * $points}]
}

#------------------------------------------------------------------------------
# scaleutil::scaleStyles_alt
#
# Scales a few styles for the "alt" theme.
#------------------------------------------------------------------------------
proc scaleutil::scaleStyles_alt pct {
    ttk::style theme settings alt {
	set scrlbarWidth [scale 14 $pct]
	ttk::style configure TScrollbar \
	    -arrowsize $scrlbarWidth -width $scrlbarWidth

	set thickness [scale 15 $pct]
	ttk::style configure TScale -groovewidth [scale 4 $pct] \
	    -sliderthickness $thickness

	ttk::style configure TProgressbar -barsize [scale 30 $pct] \
	    -thickness $thickness

	ttk::style configure TCombobox -arrowsize $scrlbarWidth

	set l [scale 2 $pct]; set r [scale 10 $pct]
	ttk::style configure TSpinbox -arrowsize [scale 10 $pct] \
	    -padding [list $l 0 $r 0]				;# {2 0 10 0}

	ttk::style configure TButton -padding [scale 1 $pct]
	ttk::style configure Toolbutton -padding [scale 2 $pct]

	ttk::style configure TMenubutton -arrowsize [scale 5 $pct] \
	    -padding [scale 3 $pct]

	set t [scale 2 $pct]; set r [scale 4 $pct]; set b $t
	set indMargin [list 0 $t $r $b]				;# {0 2 4 2}
	foreach style {TCheckbutton TRadiobutton} {
	    ttk::style configure $style -indicatormargin $indMargin \
		-padding [scale 2 $pct]
	}

	set l [scale 2 $pct]; set t $l; set r [scale 1 $pct]
	set margins [list $l $t $r 0]				;# {2 2 1 0}
	ttk::style configure TNotebook -tabmargins $margins
	ttk::style configure TNotebook.Tab \
	    -padding [list [scale 4 $pct] [scale 2 $pct]]
	ttk::style map TNotebook.Tab -expand [list selected $margins]

	#
	# -diameter will be replaced with -size in Tk 9.
	#
	set l [scale 2 $pct]; set t $l; set r [scale 4 $pct]; set b $l
	set indMargins [list $l $t $r $b]			;# {2 2 4 2}
	ttk::style configure Item -diameter [scale 9 $pct] \
	    -size [scale 9 $pct] -indicatormargins $indMargins
	ttk::style configure Treeview -indent [scale 20 $pct]
    }
}

#------------------------------------------------------------------------------
# scaleutil::scaleStyles_clam
#
# Scales a few styles for the "clam" theme.
#------------------------------------------------------------------------------
proc scaleutil::scaleStyles_clam pct {
    ttk::style theme settings clam {
	#
	# -gripcount will be replaced with -gripsize in Tk 9.
	#
	set gripCount [scale 5 $pct]
	set gripSize [scale 10 $pct]
	set scrlbarWidth [scale 14 $pct]
	ttk::style configure TScrollbar -gripcount $gripCount \
	    -gripsize $gripSize -arrowsize $scrlbarWidth -width $scrlbarWidth

	set sliderLen [scale 30 $pct]
	ttk::style configure TScale -gripcount $gripCount -gripsize $gripSize \
	    -arrowsize $scrlbarWidth -sliderlength $sliderLen

	ttk::style configure TProgressbar -sliderlength $sliderLen \
	    -arrowsize $scrlbarWidth

	ttk::style configure TCombobox -arrowsize $scrlbarWidth

	set l [scale 2 $pct]; set r [scale 10 $pct]
	ttk::style configure TSpinbox -arrowsize [scale 10 $pct] \
	    -padding [list $l 0 $r 0]				;# {2 0 10 0}

	ttk::style configure TButton -padding [scale 5 $pct]
	ttk::style configure Toolbutton -padding [scale 2 $pct]

	ttk::style configure TMenubutton -arrowsize [scale 5 $pct] \
	    -arrowpadding [scale 3 $pct] -padding [scale 5 $pct]

	#
	# The -indicatorsize option will be removed in Tk 8.7b1/9.
	#
	set l [scale 1 $pct]; set t $l; set r [scale 4 $pct]; set b $l
	set indMargin [list $l $t $r $b]			;# {1 1 4 1}
	foreach style {TCheckbutton TRadiobutton} {
	    ttk::style configure $style -indicatorsize [scale 10 $pct] \
		-indicatormargin $indMargin -padding [scale 2 $pct]
	}

	set l [scale 6 $pct]; set t [scale 2 $pct]; set r $l; set b $t
	ttk::style configure TNotebook.Tab \
	    -padding [list $l $t $r $b]				;# {6 2 6 2}
	set t [scale 4 $pct]
	ttk::style map TNotebook.Tab \
	    -padding [list selected [list $l $t $r $b]]		;# {6 4 6 2}

	#
	# -gripcount will be replaced with -gripsize in Tk 9.
	#
	ttk::style configure Sash -sashthickness [scale 6 $pct] \
	    -gripcount [scale 10 $pct] -gripsize [scale 20 $pct]

	ttk::style configure Heading -padding [scale 3 $pct]
	set l [scale 2 $pct]; set t $l; set r [scale 4 $pct]; set b $l
	set indMargins [list $l $t $r $b]			;# {2 2 4 2}
	ttk::style configure Item -indicatorsize [scale 12 $pct] \
	    -indicatormargins $indMargins
	ttk::style configure Treeview -indent [scale 20 $pct]

	ttk::style configure TLabelframe \
	    -labelmargins [list 0 0 0 [scale 4 $pct]]		;# {0 0 0 4}
    }
}

#------------------------------------------------------------------------------
# scaleutil::scaleStyles_classic
#
# Scales a few styles for the "classic" theme.
#------------------------------------------------------------------------------
proc scaleutil::scaleStyles_classic pct {
    ttk::style theme settings classic {
	if {[ttk::style lookup . -borderwidth] == 1} {
	    set scrlbarWidth [scale 12 $pct]
	} else {
	    set scrlbarWidth [scale 15 $pct]
	}
	ttk::style configure TScrollbar \
	    -arrowsize $scrlbarWidth -width $scrlbarWidth

	set thickness [scale 15 $pct]
	ttk::style configure TScale -sliderlength [scale 30 $pct] \
	    -sliderthickness $thickness

	ttk::style configure TProgressbar -barsize [scale 30 $pct] \
	    -thickness $thickness

	ttk::style configure TCombobox -arrowsize $scrlbarWidth

	set l [scale 2 $pct]; set r [scale 10 $pct]
	ttk::style configure TSpinbox -arrowsize [scale 10 $pct] \
	    -padding [list $l 0 $r 0]				;# {2 0 10 0}

	ttk::style configure TButton -padding {3m 1m}
	ttk::style configure Toolbutton -padding [scale 2 $pct]

	ttk::style configure TMenubutton \
	    -indicatormargin [list [scale 5 $pct] 0] -padding {3m 1m}

	set t [scale 2 $pct]; set r [scale 4 $pct]; set b $t
	set indMargin [list 0 $t $r $b]				;# {0 2 4 2}
	foreach style {TCheckbutton TRadiobutton} {
	    #
	    # -indicatordiameter will be renamed to -indicatorsize in Tk 9.
	    #
	    ttk::style configure $style -indicatordiameter [scale 12 $pct] \
		-indicatorsize [scale 12 $pct] -indicatormargin $indMargin
	}

	ttk::style configure TNotebook.Tab -padding {3m 1m}

	ttk::style configure Sash \
	    -sashthickness [scale 6 $pct] -sashpad [scale 2 $pct] \
	    -handlesize [scale 8 $pct] -handlepad [scale 8 $pct]

	set l [scale 2 $pct]; set t $l; set r [scale 4 $pct]; set b $l
	set indMargins [list $l $t $r $b]			;# {2 2 4 2}
	ttk::style configure Item -indicatorsize [scale 12 $pct] \
	    -indicatormargins $indMargins
	ttk::style configure Treeview -indent [scale 20 $pct]
    }
}

#------------------------------------------------------------------------------
# scaleutil::scaleStyles_default
#
# Scales a few styles for the "default" theme.
#------------------------------------------------------------------------------
proc scaleutil::scaleStyles_default pct {
    ttk::style theme settings default {
	set scrlbarWidth [scale 12 $pct]
	ttk::style configure TScrollbar \
	    -arrowsize $scrlbarWidth -width $scrlbarWidth

	if {$::tk_version >= 8.7 &&
	    [package vcompare $::tk_patchLevel "8.7a5"] > 0} {
	    set thickness [scale 4 $pct]
	    ttk::style configure TScale -groovewidth $thickness
	} else {
	    set thickness [scale 15 $pct]
	    ttk::style configure TScale -sliderlength [scale 30 $pct] \
		-sliderthickness $thickness
	}

	ttk::style configure TProgressbar -barsize [scale 30 $pct] \
	    -thickness $thickness

	ttk::style configure TCombobox -arrowsize $scrlbarWidth

	set l [scale 2 $pct]; set r [scale 10 $pct]
	ttk::style configure TSpinbox -arrowsize [scale 10 $pct] \
	    -padding [list $l 0 $r 0]				;# {2 0 10 0}

	ttk::style configure TButton -padding [scale 3 $pct]
	ttk::style configure Toolbutton -padding [scale 2 $pct]

	#
	# -indicatormargin will be replaced with
	# -arrowsize and -arrowpadding in Tk 8.7b1/9.
	#
	ttk::style configure TMenubutton \
	    -indicatormargin [list [scale 5 $pct] 0] \
	    -arrowsize [scale 5 $pct] -arrowpadding [scale 3 $pct] \
	    -padding [list [scale 10 $pct] [scale 3 $pct]]

	set t [scale 2 $pct]; set r [scale 4 $pct]; set b $t
	set indMargin [list 0 $t $r $b]				;# {0 2 4 2}
	foreach style {TCheckbutton TRadiobutton} {
	    #
	    # -indicatordiameter will be removed in Tk 8.7b1/9.
	    #
	    ttk::style configure $style -indicatordiameter [scale 10 $pct] \
		-indicatormargin $indMargin -padding [scale 1 $pct]
	}

	ttk::style configure TNotebook.Tab \
	    -padding [list [scale 4 $pct] [scale 2 $pct]]

	set l [scale 2 $pct]; set t $l; set r [scale 4 $pct]; set b $l
	set indMargins [list $l $t $r $b]			;# {2 2 4 2}
	ttk::style configure Item -indicatorsize [scale 12 $pct] \
	    -indicatormargins $indMargins
	ttk::style configure Treeview -indent [scale 20 $pct]
    }
}

#------------------------------------------------------------------------------
# scaleutil::scaleStyles_vista
#
# Scales a few styles for the "vista" theme.
#------------------------------------------------------------------------------
proc scaleutil::scaleStyles_vista pct {
    ttk::style theme settings vista {
	ttk::style configure TCombobox -padding [scale 2 $pct]

	ttk::style configure TButton -padding [scale 1 $pct]
	ttk::style configure Toolbutton -padding [scale 4 $pct]

	ttk::style configure TMenubutton \
	    -padding [list [scale 8 $pct] [scale 4 $pct]]

	foreach style {TCheckbutton TRadiobutton} {
	    ttk::style configure $style -padding [scale 2 $pct]
	}

	set padding [list [scale 4 $pct] 0 0 0]			;# {4 0 0 0}
	ttk::style configure Item -padding $padding
	ttk::style configure Treeview -indent [scale 20 $pct]
    }
}

#------------------------------------------------------------------------------
# scaleutil::scaleStyles_winnative
#
# Scales a few styles for the "winnative" theme.
#------------------------------------------------------------------------------
proc scaleutil::scaleStyles_winnative pct {
    ttk::style theme settings winnative {
	ttk::style configure TScale -groovewidth [scale 4 $pct]

	ttk::style configure TProgressbar -barsize [scale 30 $pct] \
	    -thickness [scale 15 $pct]

	ttk::style configure TCombobox -padding [scale 2 $pct]

	set l [scale 2 $pct]; set r [scale 16 $pct]
	ttk::style configure TSpinbox -padding [list $l 0 $r 0]	;# {2 0 16 0}

	ttk::style configure Toolbutton \
	    -padding [list [scale 8 $pct] [scale 4 $pct]]

	ttk::style configure TMenubutton \
	    -padding [list [scale 8 $pct] [scale 4 $pct]] \
	    -arrowsize [scale 3 $pct]

	set padding [list [scale 2 $pct] [scale 4 $pct]]
	foreach style {TCheckbutton TRadiobutton} {
	    ttk::style configure $style -padding $padding
	}

	ttk::style configure TNotebook.Tab \
	    -padding [list [scale 3 $pct] [scale 1 $pct]]

	#
	# -diameter will be replaced with -size in Tk 9.
	#
	set l [scale 2 $pct]; set t $l; set r [scale 4 $pct]; set b $l
	set indMargins [list $l $t $r $b]			;# {2 2 4 2}
	ttk::style configure Item -diameter [scale 9 $pct] \
	    -size [scale 9 $pct] -indicatormargins $indMargins
	ttk::style configure Treeview -indent [scale 20 $pct]
    }
}

#------------------------------------------------------------------------------
# scaleutil::scaleStyles_xpnative
#
# Scales a few styles for the "vista" and "xpnative" themes.
#------------------------------------------------------------------------------
proc scaleutil::scaleStyles_xpnative pct {
    ttk::style theme settings xpnative {
	ttk::style configure TCombobox -padding [scale 2 $pct]

	set l [scale 2 $pct]; set r [scale 14 $pct]
	ttk::style configure TSpinbox -padding [list $l 0 $r 0]	;# {2 0 14 0}

	ttk::style configure TButton -padding [scale 1 $pct]
	ttk::style configure Toolbutton -padding [scale 4 $pct]

	ttk::style configure TMenubutton \
	    -padding [list [scale 8 $pct] [scale 4 $pct]]

	foreach style {TCheckbutton TRadiobutton} {
	    ttk::style configure $style -padding [scale 2 $pct]
	}

	#
	# -diameter will be replaced with -size in Tk 9.
	#
	set l [scale 2 $pct]; set t $l; set r [scale 4 $pct]; set b $l
	set indMargins [list $l $t $r $b]			;# {2 2 4 2}
	ttk::style configure Item -diameter [scale 9 $pct] \
	    -size [scale 9 $pct] -indicatormargins $indMargins
	ttk::style configure Treeview -indent [scale 20 $pct]
    }
}

#------------------------------------------------------------------------------
# scaleutil::patchWinTheme
#
# Works around a bug related to the scaling of ttk::checkbutton and
# ttk::radiobutton widgets in the "vista" and "xpnative" themes.
#------------------------------------------------------------------------------
proc scaleutil::patchWinTheme {theme pct} {
    ttk::style theme settings $theme {
	#
	# Create the Checkbutton.vsapi_ind and Radiobutton.vsapi_ind
	# elements.  Due to the way the vsapi element factory is
	# implemented, we have to set the -height and -width options
	# to half of the desired element height and width, respectively.
	#
	if {$pct > 350} {
	    set pct 350
	}
	array set arr {125 8   150 10  175 10  200 13  225 13}
	array set arr {250 16  275 16  300 20  325 20  350 20}
	set height $arr($pct)
	set pad [scale 2 $pct]
	set width [expr {$height + 2*$pad}]
	if {[lsearch -exact [ttk::style element names] \
	     "Checkbutton.vsapi_ind"]  < 0} {
	    ttk::style element create Checkbutton.vsapi_ind vsapi BUTTON 3 {
		{alternate disabled} 12  {alternate pressed} 11
		{alternate active} 10  alternate 9
		{selected disabled} 8  {selected pressed} 7
		{selected active} 6  selected 5
		disabled 4  pressed 3  active 2  {} 1
	    } -height $height -width $width
	}
	if {[lsearch -exact [ttk::style element names] \
	     "Radiobutton.vsapi_ind"]  < 0} {
	    ttk::style element create Radiobutton.vsapi_ind vsapi BUTTON 2 {
		{alternate disabled} 4  alternate 1
		{selected disabled} 8  {selected pressed} 7
		{selected active} 6  selected 5
		disabled 4  pressed 3  active 2  {} 1
	    } -height $height -width $width
	}

	#
	# Redefine the TCheckbutton and TRadiobutton layouts
	#
	ttk::style layout TCheckbutton {
	    Checkbutton.padding -sticky nswe -children {
		Checkbutton.vsapi_ind -side left -sticky ""
		Checkbutton.focus -side left -sticky w -children {
		    Checkbutton.label -sticky nswe
		}
	    }
	}
	ttk::style layout TRadiobutton {
	    Radiobutton.padding -sticky nswe -children {
		Radiobutton.vsapi_ind -side left -sticky ""
		Radiobutton.focus -side left -sticky w -children {
		    Radiobutton.label -sticky nswe
		}
	    }
	}

	#
	# Patch the padding of TCheckbutton and TRadiobutton, so widgets of
	# these styles will look as if they had a uniform padding of 2, as
	# set in the library files ttk/xpTheme.tcl and ttk/vistaTheme.tcl
	#
	set padding [list -$pad $pad $pad $pad]
	ttk::style configure TCheckbutton -padding $padding
	ttk::style configure TRadiobutton -padding $padding
    }
}
