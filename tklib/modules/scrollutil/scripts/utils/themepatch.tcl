#==============================================================================
# Contains procedures designed for patching and unpatching the alt, clam and
# default themes.
#
# Structure of the module:
#   - Namespace initialization
#   - Public utility procedures
#   - Private helper procedures
#
# Copyright (c) 2022-2024  Csaba Nemethi (E-mail: csaba.nemethi@t-online.de)
#==============================================================================

if {[catch {package require Tk 8.4-}]} {
    package require Tk 8.4
}
if {$::tk_version < 8.5 || [regexp {^8\.5a[1-5]$} $::tk_patchLevel]} {
    if {[catch {package require tile 0.8-}]} {
	package require tile 0.8
    }
}
if {![info exists ::tk::scalingPct]} {		;# earlier than Tk 8.7b1
    if {[catch {package require scaleutil 1.10-}]} {
	package require scaleutil 1.10
    }
}

#
# Namespace initialization
# ========================
#

namespace eval themepatch {
    #
    # Public variables:
    #
    variable version	1.8
    variable library	[file dirname [file normalize [info script]]]

    #
    # Public procedures:
    #
    namespace export	patch unpatch ispatched

    #
    # Define the procedure ::themepatch::scale
    #
    if {[llength [info procs ::tk::ScaleNum]] > 0} {	;# Tk 8.7b1 or later
	proc scale {num pct} {
	    return [::tk::ScaleNum $num]
	}
    } else {
	interp alias {} ::themepatch::scale {} ::scaleutil::scale
    }
}

package provide themepatch $themepatch::version

lappend auto_path [file join $themepatch::library indicatorImgs]

#
# Public utility procedures
# =========================
#

#------------------------------------------------------------------------------
# themepatch::patch
#
# Patches some styles of the given themes.
#------------------------------------------------------------------------------
proc themepatch::patch args {
    if {[info exists ::tk::scalingPct]} {		;# Tk 8.7b1 or later
	set pct $::tk::scalingPct			;# can be > 200
	set fmt $::tk::svgFmt
    } else {
	set pct [::scaleutil::scalingPercentage [tk windowingsystem]] ;# <= 200
	set fmt gif

	if {$::tk_version >= 8.7 || [catch {package require tksvg}] == 0} {
	    set pct $::scaleutil::scalingPct			;# can be > 200
	    set fmt [list svg -scale [expr {$pct / 100.0}]]
	}
    }

    set currentTheme [getCurrentTheme]
    foreach theme $args {
	if {[lsearch -exact {alt clam default} $theme] < 0} {
	    return -code error \
		"bad theme \"$theme\": must be alt, clam, or default"
	}

	#
	# Save the TCheckbutton and TRadiobutton layouts of the other
	# themes, because some of them might have $theme as ancestor
	#
	array unset ckbtnLayoutArr
	array unset rdbtnLayoutArr
	foreach theme2 [ttk::style theme names] {
	    if {$theme2 ne $theme} {
		ttk::style theme settings $theme2 {
		    set ckbtnLayoutArr($theme2) [ttk::style layout TCheckbutton]
		    set rdbtnLayoutArr($theme2) [ttk::style layout TRadiobutton]
		}
	    }
	}

	ttk::style theme settings $theme {
	    patch_$theme $pct $fmt
	}

	#
	# Restore the TCheckbutton and TRadiobutton layouts of the other themes
	#
	foreach theme2 [array names ckbtnLayoutArr] {
	    ttk::style theme settings $theme2 {
		ttk::style layout TCheckbutton $ckbtnLayoutArr($theme2)
		ttk::style layout TRadiobutton $rdbtnLayoutArr($theme2)
	    }
	}

	if {$theme eq $currentTheme} {
	    #
	    # Send a <<ThemeChanged>> virtual event to all widgets
	    #
	    ::ttk::ThemeChanged
	}
    }
}

#------------------------------------------------------------------------------
# themepatch::unpatch
#
# Unpatches some styles of the given themes.
#------------------------------------------------------------------------------
proc themepatch::unpatch args {
    if {[info exists ::tk::scalingPct]} {		;# Tk 8.7b1 or later
	set pct $::tk::scalingPct			;# can be > 200
    } else {
	set pct [::scaleutil::scalingPercentage [tk windowingsystem]] ;# <= 200

	if {$::tk_version >= 8.7 || [catch {package require tksvg}] == 0} {
	    set pct $::scaleutil::scalingPct			;# can be > 200
	}
    }

    set currentTheme [getCurrentTheme]
    foreach theme $args {
	if {[lsearch -exact {alt clam default} $theme] < 0} {
	    return -code error \
		"bad theme \"$theme\": must be alt, clam, or default"
	}

	ttk::style theme settings $theme {
	    unpatch_$theme $pct
	}

	if {$theme eq $currentTheme} {
	    #
	    # Send a <<ThemeChanged>> virtual event to all widgets
	    #
	    ::ttk::ThemeChanged
	}
    }
}

#------------------------------------------------------------------------------
# themepatch::ispatched
#
# Returns 1 if the given theme is patched and 0 otherwise.
#------------------------------------------------------------------------------
proc themepatch::ispatched theme {
    if {[lsearch -exact {alt clam default} $theme] < 0} {
	return -code error \
	    "bad theme \"$theme\": must be alt, clam, or default"
    }

    ttk::style theme settings $theme {
	set ckbtnLayout [ttk::style layout TCheckbutton]
	return [expr {[string first "Checkbutton.indicator" $ckbtnLayout] < 0}]
    }
}

#
# Private helper procedures
# =========================
#

#------------------------------------------------------------------------------
# themepatch::getCurrentTheme
#
# Returns the current tile theme.
#------------------------------------------------------------------------------
proc themepatch::getCurrentTheme {} {
    if {[catch {ttk::style theme use} result] == 0} {
	return $result
    } elseif {[info exists ::ttk::currentTheme]} {
	return $::ttk::currentTheme
    } elseif {[info exists ::tile::currentTheme]} {
	return $::tile::currentTheme
    } else {					;# this is highly improbable
	return ""
    }
}

#------------------------------------------------------------------------------
# themepatch::patch_alt
#
# Patches the styles TCheckbutton and TRadiobutton of the alt theme.
#------------------------------------------------------------------------------
proc themepatch::patch_alt {pct fmt} {
    #
    # Patch the TCheckbutton and TRadiobutton layouts
    #
    patchLayouts $pct $fmt alt
}

#------------------------------------------------------------------------------
# themepatch::unpatch_alt
#
# Unpatches the styles TCheckbutton and TRadiobutton of the alt theme.
#------------------------------------------------------------------------------
proc themepatch::unpatch_alt pct {
    #
    # Restore the TCheckbutton and TRadiobutton layouts
    #
    restoreLayouts
}

#------------------------------------------------------------------------------
# themepatch::patch_clam
#
# Patches the styles TButton, TMenubutton, Heading, TCheckbutton, and
# TRadiobutton of the clam theme.
#------------------------------------------------------------------------------
proc themepatch::patch_clam {pct fmt} {
    #
    # TButton and TMenubutton
    #
    set pad [scale 3 $pct]
    foreach style {TButton TMenubutton} {
	ttk::style configure $style -padding $pad -width -9  ;# default: 5, -11
    }

    #
    # Treeview Heading and Tablelist
    #
    ttk::style configure Heading -padding 1			;# default: 3
    if {[info exists ::tablelist::version] &&
	[package vcompare $::tablelist::version 6.18] < 0 &&
	[llength [info procs ::tablelist::_clamTheme]] == 0} {
	rename ::tablelist::clamTheme ::tablelist::_clamTheme
	proc ::tablelist::clamTheme {} {
	    ::tablelist::_clamTheme
	    variable themeDefaults
	    set themeDefaults(-labelpady) 1			;# default: 3
	}
    }

    #
    # Patch the TCheckbutton and TRadiobutton layouts
    #
    patchLayouts $pct $fmt clam
}

#------------------------------------------------------------------------------
# themepatch::unpatch_clam
#
# Unpatches the styles TButton, TMenubutton, Heading, TCheckbutton, and
# TRadiobutton of the clam theme.
#------------------------------------------------------------------------------
proc themepatch::unpatch_clam pct {
    #
    # TButton and TMenubutton
    #
    set pad [scale 5 $pct]
    foreach style {TButton TMenubutton} {
	ttk::style configure $style -padding $pad -width -11
    }

    #
    # Treeview Heading and Tablelist
    #
    set pad [scale 3 $pct]
    ttk::style configure Heading -padding $pad
    if {[info exists ::tablelist::version] &&
	[package vcompare $::tablelist::version 6.18] < 0 &&
	[llength [info procs ::tablelist::_clamTheme]] == 1} {
	rename ::tablelist::clamTheme ""
	rename ::tablelist::_clamTheme ::tablelist::clamTheme
    }

    #
    # Restore the TCheckbutton and TRadiobutton layouts
    #
    restoreLayouts
}

#------------------------------------------------------------------------------
# themepatch::patch_default
#
# Patches the styles TCheckbutton and TRadiobutton of the default theme.
#------------------------------------------------------------------------------
proc themepatch::patch_default {pct fmt} {
    #
    # Patch the TCheckbutton and TRadiobutton layouts
    #
    patchLayouts $pct $fmt default
}

#------------------------------------------------------------------------------
# themepatch::unpatch_default
#
# Unpatches the styles TCheckbutton and TRadiobutton of the default theme.
#------------------------------------------------------------------------------
proc themepatch::unpatch_default pct {
    #
    # Restore the TCheckbutton and TRadiobutton layouts
    #
    restoreLayouts
}

#------------------------------------------------------------------------------
# themepatch::patchLayouts
#
# Patches the TCheckbutton and TRadiobutton layouts of the given theme.
#------------------------------------------------------------------------------
proc themepatch::patchLayouts {pct fmt theme} {
    #
    # Create the Checkbutton.image_ind and Radiobutton.image_ind elements
    #
    set pad [scale 4 $pct]
    if {[lsearch -exact [ttk::style element names] "Checkbutton.image_ind"]
	< 0} {
	if {[llength $fmt] > 1} {
	    ${theme}::createCheckbtnIndImgs_svg $fmt
	} else {
	    ${theme}::createCheckbtnIndImgs_$fmt $pct
	}
	variable ${theme}::ckIndArr
	set ckIndWidth [expr {[image width $ckIndArr(default)] + $pad}]
	ttk::style element create Checkbutton.image_ind image [list \
	    $ckIndArr(default) \
	    {alternate disabled}	$ckIndArr(alt_disabled) \
	    {alternate pressed}		$ckIndArr(alt_pressed) \
	    alternate			$ckIndArr(alternate) \
	    {selected disabled}		$ckIndArr(sel_disabled) \
	    {selected pressed}		$ckIndArr(sel_pressed) \
	    selected			$ckIndArr(selected) \
	    disabled			$ckIndArr(disabled) \
	    pressed			$ckIndArr(pressed) \
	] -width $ckIndWidth -sticky w
    }
    if {[lsearch -exact [ttk::style element names] "Radiobutton.image_ind"]
	< 0} {
	if {[llength $fmt] > 1} {
	    ${theme}::createRadiobtnIndImgs_svg $fmt
	} else {
	    ${theme}::createRadiobtnIndImgs_$fmt $pct
	}
	variable ${theme}::rbIndArr
	set rbIndWidth [expr {[image width $rbIndArr(default)] + $pad}]
	ttk::style element create Radiobutton.image_ind image [list \
	    $rbIndArr(default) \
	    {alternate disabled}	$rbIndArr(alt_disabled) \
	    {alternate pressed}		$rbIndArr(alt_pressed) \
	    alternate			$rbIndArr(alternate) \
	    {selected disabled}		$rbIndArr(sel_disabled) \
	    {selected pressed}		$rbIndArr(sel_pressed) \
	    selected			$rbIndArr(selected) \
	    disabled			$rbIndArr(disabled) \
	    pressed			$rbIndArr(pressed) \
	] -width $rbIndWidth -sticky w
    }

    #
    # Redefine the TCheckbutton and TRadiobutton layouts
    #
    ttk::style layout TCheckbutton {
	Checkbutton.padding -sticky nswe -children {
	    Checkbutton.image_ind -side left -sticky ""
	    Checkbutton.focus -side left -sticky w -children {
		Checkbutton.label -sticky nswe
	    }
	}
    }
    ttk::style layout TRadiobutton {
	Radiobutton.padding -sticky nswe -children {
	    Radiobutton.image_ind -side left -sticky ""
	    Radiobutton.focus -side left -sticky w -children {
		Radiobutton.label -sticky nswe
	    }
	}
    }
}

#------------------------------------------------------------------------------
# themepatch::restoreLayouts
#
# Restores the TCheckbutton and TRadiobutton layouts.
#------------------------------------------------------------------------------
proc themepatch::restoreLayouts {} {
    ttk::style layout TCheckbutton {
	Checkbutton.padding -sticky nswe -children {
	    Checkbutton.indicator -side left -sticky ""
	    Checkbutton.focus -side left -sticky w -children {
		Checkbutton.label -sticky nswe
	    }
	}
    }
    ttk::style layout TRadiobutton {
	Radiobutton.padding -sticky nswe -children {
	    Radiobutton.indicator -side left -sticky ""
	    Radiobutton.focus -side left -sticky w -children {
		Radiobutton.label -sticky nswe
	    }
	}
    }
}

namespace eval themepatch::alt     {}
namespace eval themepatch::clam    {}
namespace eval themepatch::default {}
