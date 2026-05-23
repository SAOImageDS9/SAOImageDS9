# tooltip.tcl --
#
#       Balloon help
#
# Copyright (c) 1996-2007 Jeffrey Hobbs
# Copyright (c) 2024      Emmanuel Frecon, Rene Zaumseil
#
# See the file "license.terms" for information on usage and redistribution
# of this file, and for a DISCLAIMER OF ALL WARRANTIES.
#
# Initiated: 28 October 1996


package require Tk 8.5-

#------------------------------------------------------------------------
# PROCEDURE
#	tooltip::tooltip
#
# DESCRIPTION
#	Implements a tooltip (balloon help) system
#
# ARGUMENTS
#	tooltip <option> ?arg?
#
# clear ?pattern?
#	Stops the specified widgets (defaults to all) from showing tooltips.
#
# configure ?opt ?val opt val ...??
#       Configure foreground, background and font.
#
# delay ?millisecs?
#	Query or set the delay.  The delay is in milliseconds and must
#	be at least 50.  Returns the delay.
#
# fade ?boolean?
#	Enables or disables fading of the tooltip.
#
# disable OR off
#	Disables all tooltips.
#
# enable OR on
#	Enables tooltips for defined widgets.
#
# <widget> ?-heading columnId? ?-index index? ?-item(s) items? ?-tab tabId"
# ?-tag tag? ?message?
#	* If -heading is specified, then <widget> is assumed to be a
#	  ttk::treeview widget and columnId specifies a column identifier.
#	* If -index is specified, then <widget> is assumed to be a menu and
#	  index represents what index into the menu (either the numerical index
#	  or the label) to associate the tooltip message with.
#	  Tooltips do not appear for disabled menu items.
#	* If -item(s) is specified, then <widget> is assumed to be a listbox,
#	  ttk::treeview or canvas and items specifies one or more items.
#	* If -tab is specified, then <widget> is assumed to be a ttk::notebook
#	  and tabId specifies a tab identifier.
#	* If -tag is specified, then <widget> is assumed to be a text and tag
#	  specifies a tag name.
#	If message is {}, then the tooltip for that widget is removed.
#	The widget must exist prior to calling tooltip.  The current
#	tooltip message for <widget> is returned, if any.
#
# RETURNS: varies (see methods above)
#
# NAMESPACE & STATE
#	The namespace tooltip is used.
#	Control toplevel name via ::tooltip::wname.
#
# EXAMPLE USAGE:
#	tooltip .button "A Button"
#	tooltip .menu -index "Load" "Loads a file"
#
#------------------------------------------------------------------------

# TkTooltipFont is defined in tk library/ttk/fonts.tcl
catch {font create    TkTooltipFontItalic}
catch {font configure TkTooltipFontItalic \
       {*}[font configure TkTooltipFont] -slant italic}

namespace eval ::tooltip {
    namespace export -clear tooltip
    variable tooltip
    variable G

    if {![info exists G]} {
        array set G {
            enabled     1
            fade        1
            FADESTEP    0.2
            FADEID      {}
            DELAY       500
            AFTERID     {}
            LAST        -1
            TOPLEVEL    .__tooltip__
        }
        if {[tk windowingsystem] eq "x11"} {
            set G(fade) 0 ; # don't fade by default on X11
        }
    }

    # functional options
    option add *Tooltip.Frame.highlightThickness 0
    option add *Tooltip.Frame.relief             solid
    option add *Tooltip.Frame.borderWidth        1
    option add *Tooltip*Label.highlightThickness 0
    option add *Tooltip*Label.relief             flat
    option add *Tooltip*Label.borderWidth        0
    option add *Tooltip*Label.padX               3p
    option add *Tooltip*Label.padY               3p

    # configurable options
    option add *Tooltip.Frame.background         lightyellow
    option add *Tooltip*Label.background         lightyellow
    option add *Tooltip*Label.foreground         black
    option add *Tooltip*label.font               TkTooltipFont	;# lowercase!
    option add *Tooltip*info.font                TkTooltipFontItalic

    # The extra ::hide call in <Enter> is necessary to catch moving to
    # child widgets where the <Leave> event won't be generated
    bind Tooltip <Enter> [namespace code {
	#tooltip::hide
	variable tooltip
	variable G
	set G(LAST) -1
	if {$G(enabled) && [info exists tooltip(%W)]} {
	    set G(AFTERID) \
		[after $G(DELAY) [namespace code [list show %W $tooltip(%W) cursor]]]
	}
    }]

    bind Menu <<MenuSelect>>	[namespace code { menuMotion %W }]
    bind Tooltip <Leave>	[namespace code [list hide 1]] ; # fade ok
    bind Tooltip <Any-KeyPress>	[namespace code hide]
    bind Tooltip <Any-Button>	[namespace code hide]
}

proc ::tooltip::tooltip {w args} {
    variable tooltip
    variable G
    switch -- $w {
	clear	{
	    if {[llength $args]==0} { set args .* }
	    clear [lindex $args 0]
	}
	delay	{
	    if {[llength $args]} {
		set millisecs [lindex $args 0]
		##nagelfar ignore
		if {![string is integer -strict $millisecs] || ($millisecs < 50)} {
		    return -code error "tooltip delay must be an integer\
			    greater than or equal to 50 (delay is in millisecs)"
		}
		return [set G(DELAY) $millisecs]
	    } else {
		return $G(DELAY)
	    }
	}
	fade	{
	    if {[llength $args]} {
		set G(fade) [string is true -strict [lindex $args 0]]
	    }
	    return $G(fade)
	}
	off - disable	{
	    set G(enabled) 0
	    hide
	}
	on - enable	{
	    set G(enabled) 1
	}
	configure {
            return [configure {*}$args]
	}
	default {
	    set i $w
	    if {[llength $args]} {
		set i [uplevel 1 [namespace code [list register $w {*}$args]]]
	    }
	    set b $G(TOPLEVEL)
	    if {[info exists tooltip($i)]} { return $tooltip($i) }
	}
    }
}

proc ::tooltip::register {w args} {
    variable tooltip
    set key [lindex $args 0]
    set img {}
    set inf {}
    while {[string match -* $key]} {
	switch -- $key {
	    -- {
		set args [lassign $args _ key]
		break
	    }
	    -heading {
		if {[winfo class $w] ne "Treeview"} {
		    return -code error "widget \"$w\" is not a ttk::treeview widget"
		}
		set args [lassign $args _ columnId]
	    }
	    -index {
		if {[catch {
		    $w entrycget 1 -label
		}]} {
		    return -code error "widget \"$w\" does not seem to be a\
			    menu, which is required for the -index switch"
		}
		set args [lassign $args _ index]
	    }
	    -item -
	    -items {
                if {[winfo class $w] in {Listbox Treeview}} {
		    set args [lassign $args _ items]
                } else {
		    set args [lassign $args _ namedItem]
                    if {[catch {
			$w find withtag $namedItem
		    } items]} {
                        return -code error "widget \"$w\" is not a canvas, or\
			    item \"$namedItem\" does not exist in the canvas"
                    }
                }
	    }
	    -tab {
		if {[winfo class $w] ne "TNotebook"} {
		    return -code error "widget \"$w\" is not a ttk::notebook widget"
		}
		set args [lassign $args _ tabId]
		if {[catch {
		    $w index $tabId
		} tabIndex]} {
		    return -code error $tabIndex
		} elseif {$tabIndex < 0 || $tabIndex >= [$w index end]} {
		    return -code error "tab index $tabId out of bounds"
		}
		set tabWin [lindex [$w tabs] $tabIndex]
	    }
            -tag {
		set args [lassign $args _ tag]
                set r [catch {
		    lsearch -exact [$w tag names] $tag
		} ndx]
                if {$r || $ndx == -1} {
                    return -code error "widget \"$w\" is not a text widget or\
                        \"$tag\" is not a text tag"
                }
            }
	    -image {
		set args [lassign $args _ img]
	    }
	    -info {
		set args [lassign $args _ inf]
	    }
	    default {
		return -code error "unknown option \"$key\":\
			should be -heading, -image, -index, -info,\
			-item(s), -tab, -tag or --"
	    }
	}
	set key [lindex $args 0]
    }
    if {[llength $args] != 1} {
	return -code error "wrong # args: should be \"tooltip widget\
		?-heading columnId? ?-image image? ?-index index? ?-info info?\
		?-item(s) items? ?-tab tabId? ?-tag tag? ?--? message\""
    }
    if {$key eq ""} {
	clear $w
    } else {
	if {![winfo exists $w]} {
	    return -code error "bad window path name \"$w\""
	}
	set details [list $key $img $inf]
	if {[info exists columnId]} {
	    set tooltip($w,$columnId) $details
	    enableListbox $w $columnId
	    return $w,$columnId
	} elseif {[info exists index]} {
	    set tooltip($w,$index) $details
	    return $w,$index
	} elseif {[info exists items]} {
	    foreach item $items {
		set tooltip($w,$item) $details
		set class [winfo class $w]
		if { $class eq "Listbox" || $class eq "Treeview"} {
		    enableListbox $w $item
		} else {
		    enableCanvas $w $item
		}
	    }
	    # Only need to return the first item for the purposes of
	    # how this is called
	    return $w,[lindex $items 0]
	} elseif {[info exists tabWin]} {
	    set tooltip($w,$tabWin) $details
	    enableNotebook $w $tabWin
	    return $w,$tabWin
        } elseif {[info exists tag]} {
            set tooltip($w,t_$tag) $details
            enableTag $w $tag
            return $w,$tag
	} else {
	    set tooltip($w) $details
	    # Note: Add the necessary bindings only once.
	    set tags [bindtags $w]
	    if {[lsearch -exact $tags "Tooltip"] == -1} {
		bindtags $w [linsert $tags end "Tooltip"]
	    }
	    return $w
	}
    }
}

proc ::tooltip::createToplevel {} {
    variable G

    set b $G(TOPLEVEL)
    if {[winfo exists $b]} { return }

    toplevel $b -class Tooltip -borderwidth 0
    if {[tk windowingsystem] eq "aqua"} {
        ::tk::unsupported::MacWindowStyle style $b help none
    } else {
        wm overrideredirect $b 1
    }
    catch {wm attributes $b -topmost 1}
    # avoid the blink issue with 1 to <1 alpha on Windows
    catch {wm attributes $b -alpha 0.99}
    wm positionfrom $b program
    wm withdraw $b

    frame $b.f
    label $b.f.label -justify left -compound left
    label $b.f.info  -justify left

    grid $b.f
    grid $b.f.label -sticky w
    grid $b.f.info  -sticky w
}

proc ::tooltip::configure {args} {
    set len [llength $args]
    if {$len >= 2 && ($len % 2) != 0} {
        return -level 2 -code error "wrong # args. Should be\
            \"tooltip configure ?opt ?val opt val ...??\""
    }

    variable G
    set b $G(TOPLEVEL)
    if {![winfo exists $b]} {
        createToplevel
    }
    foreach opt {-foreground -background -font} {
        set val [$b.f.label configure $opt]
        set opts($opt) [lindex $val 4]
        set defs($opt) [lindex $val 1]
        lappend keys $opt
    }

    switch -- $len {
        0 {
            return [array get opts]
        }
        1 {
            set key [lindex $args 0]
            if {$key ni $keys} {
                return -level 2 -code error "unknown option \"$key\""
            } else {
                return $opts($key)
            }
        }
        default {
            # allow -fg and -bg as aliases
            lappend keys -fg -bg
            set defs(-fg) $defs(-foreground)
            set defs(-bg) $defs(-background)

            foreach {key val} $args {
                if {$key ni $keys} {
                    return -level 2 -code error "unknown option \"$key\""
                }
                if {[catch {
		    switch $key {
			-background - -bg {
			    foreach widget [list $b.f $b.f.label $b.f.info] {
				$widget configure $key $val
			    }
			    option add *Tooltip*Frame.$defs($key) $val
			    option add *Tooltip*Label.$defs($key) $val
			}
			-foreground - -fg {
			    foreach widget [list $b.f.label $b.f.info] {
				$widget configure $key $val
			    }
			    option add *Tooltip*Label.$defs($key) $val
			}
			-font {
			    $b.f.label configure $key $val
			    option add *Tooltip*label.$defs($key) $val

			    catch {font configure TkTooltipFontItalic \
				   {*}[font actual $val] -slant italic}
			    $b.f.info configure $key TkTooltipFontItalic
			}
		    }
                } err]} {
                    return -level 2 -code error $err
                }
            }
        }
    }
}

proc ::tooltip::clear {{pattern .*}} {
    variable tooltip
    # cache the current widget at pointer
    set ptrw [winfo containing {*}[winfo pointerxy .]]
    foreach w [array names tooltip $pattern] {
	unset tooltip($w)
	if {[winfo exists $w]} {
	    set tags [bindtags $w]
	    set i [lsearch -exact $tags "Tooltip"]
	    if {$i != -1} {
		bindtags $w [lreplace $tags $i $i]
	    }
	    ## We don't remove TooltipMenu because there
	    ## might be other indices that use it

	    # Withdraw the tooltip if we clear the current contained item
	    if {$ptrw eq $w} { hide }
	}
    }
}

proc ::tooltip::show {w msg {i {}}} {
    if {![winfo exists $w]} { return }

    # Use string match to allow that the help will be shown when
    # the pointer is in any descendant of the desired widget
    if {([winfo class $w] ne "Menu")
	&& ![string match $w* [winfo containing {*}[winfo pointerxy $w]]]} {
	return
    }

    variable G

    after cancel $G(FADEID)
    set b $G(TOPLEVEL)
    if {![winfo exists $b]} {
        createToplevel
    }

    lassign $msg text image infotext
    $b.f.label configure -text $text -image $image
    if {$infotext eq {}} {
	grid remove $b.f.info
    } else {
	$b.f.info configure -text $infotext
	grid $b.f.info
    }
    update idletasks

    # Bail out if the widget went way during the idletasks
    if {![winfo exists $w]} return

    set screenw [winfo screenwidth $w]
    set screenh [winfo screenheight $w]
    set reqw [winfo reqwidth $b]
    set reqh [winfo reqheight $b]
    # When adjusting for being on the screen boundary, check that we are
    # near the "edge" already, as Tk handles multiple monitors oddly
    if {$i eq "cursor"} {
        set py [winfo pointery $w]
	set y [expr {$py + 20}]
# this is a wrong calculation?
#	if {($y < $screenh) && ($y+$reqh) > $screenh} {}
	if { ($y + $reqh) > $screenh } {
	    set y [expr {$py - $reqh - 5}]
	}
    } elseif {$i ne ""} {
        # menu entry
	set y [expr {[winfo rooty $w]+[winfo vrooty $w]+[$w yposition $i]+25}]
	if {($y < $screenh) && ($y+$reqh) > $screenh} {
	    # show above if we would be offscreen
	    set y [expr {[winfo rooty $w]+[$w yposition $i]-$reqh-5}]
	}
    } else {
	set y [expr {[winfo rooty $w]+[winfo vrooty $w]+[winfo height $w]+5}]
	if {($y < $screenh) && ($y+$reqh) > $screenh} {
	    # show above if we would be offscreen
	    set y [expr {[winfo rooty $w]-$reqh-5}]
	}
    }
    if {$i eq "cursor"} {
	set x [winfo pointerx $w]
    } else {
	set x [expr {[winfo rootx $w]+[winfo vrootx $w]+
		     ([winfo width $w]-$reqw)/2}]
    }
    # only readjust when we would appear right on the screen edge
    if {$x<0 && ($x+$reqw)>0} {
	set x 0
    } elseif {($x < $screenw) && ($x+$reqw) > $screenw} {
	set x [expr {$screenw-$reqw}]
    }
    if {[tk windowingsystem] eq "aqua"} {
	set focus [focus]
    }
    # avoid the blink issue with 1 to <1 alpha on Windows, watch half-fading
    catch {wm attributes $b -alpha 0.99}
    # put toplevel placed outside the screen back into it, just a little below the top border.
    if {$y < 0} { set y 10 }
    wm geometry $b +$x+$y
    wm deiconify $b
    raise $b
    if {[tk windowingsystem] eq "aqua" && $focus ne ""} {
	# Aqua's help window steals focus on display
	after idle [list focus -force $focus]
    }
}

proc ::tooltip::menuMotion {w} {
    variable G

    if {$G(enabled)} {
	variable tooltip

        # Menu events come from a funny path, map to the real path.
        set m [string map {"#" "."} [winfo name $w]]
	set cur [$w index active]

	# The next two lines (all uses of LAST) are necessary until the
	# <<MenuSelect>> event is properly coded for Unix/(Windows)?
	if {$cur == $G(LAST)} return
	set G(LAST) $cur
	# a little inlining - this is :hide
	after cancel $G(AFTERID)
	catch {wm withdraw $G(TOPLEVEL)}
	if {[info exists tooltip($m,$cur)] || \
		(![catch {
		    $w entrycget $cur -label
		} cur] && \
		[info exists tooltip($m,$cur)])} {
	    set G(AFTERID) [after $G(DELAY) \
		    [namespace code [list show $w $tooltip($m,$cur) cursor]]]
	}
    }
}

proc ::tooltip::hide {{fadeOk 0}} {
    variable G

    after cancel $G(AFTERID)
    after cancel $G(FADEID)
    if {$fadeOk && $G(fade)} {
	fade $G(TOPLEVEL) $G(FADESTEP)
    } else {
	catch {wm withdraw $G(TOPLEVEL)}
    }
}

proc ::tooltip::fade {w step} {
    if {[catch {
	wm attributes $w -alpha
    } alpha] || $alpha <= 0.0} {
        catch { wm withdraw $w }
        catch { wm attributes $w -alpha 0.99 }
    } else {
	variable G
        wm attributes $w -alpha [expr {$alpha-$step}]
        set G(FADEID) [after 50 [namespace code [list fade $w $step]]]
    }
}

proc ::tooltip::wname {{w {}}} {
    variable G
    if {[llength [info level 0]] > 1} {
	# $w specified
	if {$w ne $G(TOPLEVEL)} {
	    hide
	    destroy $G(TOPLEVEL)
	    set G(TOPLEVEL) $w
	}
    }
    return $G(TOPLEVEL)
}

proc ::tooltip::listitemTip {w x y} {
    variable tooltip
    variable G

    set G(LAST) -1
    if {[winfo class $w] eq "Listbox"} {
	set item [$w index @$x,$y]
    } else {
	switch [$w identify region $x $y] {
	    tree - cell {
		set item [$w identify item $x $y]
	    }
	    heading - separator {
		set item [$w column [$w identify column $x $y] -id]
	    }
	    default { set item "" }
	}
    }
    if {$G(enabled) && [info exists tooltip($w,$item)]} {
	set G(AFTERID) [after $G(DELAY) \
		[namespace code [list show $w $tooltip($w,$item) cursor]]]
    }
}

# Handle the lack of <Enter>/<Leave> between listbox/treeview items using <Motion>
proc ::tooltip::listitemMotion {w x y} {
    variable tooltip
    variable G
    if {$G(enabled)} {
	if {[winfo class $w] eq "Listbox"} {
	    set item [$w index @$x,$y]
	} else {
	    switch [$w identify region $x $y] {
		tree - cell { set item [$w identify item $x $y] }
		heading - separator {
		    set item [$w column [$w identify column $x $y] -id]
		}
		default { set item "" }
	    }
	}
        if {$item ne $G(LAST)} {
            set G(LAST) $item
            after cancel $G(AFTERID)
            catch {wm withdraw $G(TOPLEVEL)}
            if {[info exists tooltip($w,$item)]} {
                set G(AFTERID) [after $G(DELAY) \
                   [namespace code [list show $w $tooltip($w,$item) cursor]]]
            }
        }
    }
}

# Initialize tooltip events for listbox/treeview widgets
proc ::tooltip::enableListbox {w args} {
    if {[string match *listitemTip* [bind $w <Enter>]]} { return }
    bind $w <Enter> +[namespace code [list listitemTip %W %x %y]]
    bind $w <Motion> +[namespace code [list listitemMotion %W %x %y]]
    bind $w <Leave> +[namespace code [list hide 1]] ; # fade ok
    bind $w <Any-KeyPress> +[namespace code hide]
    bind $w <Any-Button> +[namespace code hide]
}

proc ::tooltip::canvasitemTip {w args} {
    variable tooltip
    variable G

    set G(LAST) -1
    set item [$w find withtag current]
    if {$G(enabled) && [info exists tooltip($w,$item)]} {
	set G(AFTERID) [after $G(DELAY) \
		[namespace code [list show $w $tooltip($w,$item) cursor]]]
    }
}

proc ::tooltip::enableCanvas {w args} {
    if {[string match *canvasitemTip* [$w bind all <Enter>]]} { return }
    $w bind all <Enter> +[namespace code [list canvasitemTip $w]]
    $w bind all <Leave> +[namespace code [list hide 1]] ; # fade ok
    $w bind all <Any-KeyPress> +[namespace code hide]
    $w bind all <Any-Button> +[namespace code hide]
}

proc ::tooltip::notebooktabTip {w x y} {
    variable tooltip
    variable G

    set G(LAST) -1
    set tabIndex [$w index @$x,$y]
    set tabWin [lindex [$w tabs] $tabIndex]
    if {$G(enabled) && [info exists tooltip($w,$tabWin)]} {
	set G(AFTERID) [after $G(DELAY) \
		[namespace code [list show $w $tooltip($w,$tabWin) cursor]]]
    }
}

# Handle the lack of <Enter>/<Leave> between ttk::notebook items using <Motion>
proc ::tooltip::notebooktabMotion {w x y} {
    variable tooltip
    variable G
    if {$G(enabled)} {
	set tabIndex [$w index @$x,$y]
	set tabWin [lindex [$w tabs] $tabIndex]
        if {$tabWin ne $G(LAST)} {
            set G(LAST) $tabWin
            after cancel $G(AFTERID)
            catch {wm withdraw $G(TOPLEVEL)}
            if {[info exists tooltip($w,$tabWin)]} {
                set G(AFTERID) [after $G(DELAY) \
                   [namespace code [list show $w $tooltip($w,$tabWin) cursor]]]
            }
        }
    }
}

# Initialize tooltip events for ttk::notebook widgets
proc ::tooltip::enableNotebook {w args} {
    if {[string match *notebooktabTip* [bind $w <Enter>]]} { return }
    bind $w <Enter> +[namespace code [list notebooktabTip %W %x %y]]
    bind $w <Motion> +[namespace code [list notebooktabMotion %W %x %y]]
    bind $w <Leave> +[namespace code [list hide 1]] ; # fade ok
    bind $w <Any-KeyPress> +[namespace code hide]
    bind $w <Any-Button> +[namespace code hide]
}

proc ::tooltip::tagTip {w tag} {
    variable tooltip
    variable G
    set G(LAST) -1
    if {$G(enabled) && [info exists tooltip($w,t_$tag)]} {
        if {[info exists G(AFTERID)]} { after cancel $G(AFTERID) }
        set G(AFTERID) [after $G(DELAY) \
            [namespace code [list show $w $tooltip($w,t_$tag) cursor]]]
        # clear the 'Enter' binding. it is restored by `conditionally-hide` below.
        $w tag bind $tag <Enter> ""
    }
}

proc ::tooltip::enableTag {w tag} {
    variable G
    if {[string match *tagTip* [$w tag bind $tag]]} { return }
    $w tag bind $tag <Enter> +[namespace code [list tagTip $w $tag]]
    $w tag bind $tag <Leave> +[namespace code [list conditionally-hide $w $tag]] ; # fade ok
    $w tag bind $tag <Any-KeyPress> +[namespace code hide]
    $w tag bind $tag <Any-Button> +[namespace code hide]

    # save the 'Enter' binding.
    # this is cleared by `tagTip`, see above, and restored by `conditionally-hide` below.
    set G(enterBinding,$w,$tag) [$w tag bind $tag <Enter>]
}

proc ::tooltip::conditionally-hide {w tag} {
    variable G
    # re-enable the 'Enter' binding. it is saved by `enableTag`, and cleared by `tagTip`.
    $w tag bind $tag <Enter> $G(enterBinding,$w,$tag)
    
    # have we really left ? if the cursor is _in_ the tooltip we haven't.
    createToplevel
    lassign [split [wm geometry $G(TOPLEVEL)] "x+"] w h xT yT
    lassign [winfo pointerxy "."] x y
    
    if {($x >= $xT) && ($x <= ($xT + $w)) &&
	($y >= $yT) && ($y <= ($yT + $h))} return

    hide 1
}

package provide tooltip 2.0.1
