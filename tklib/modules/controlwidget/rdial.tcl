# rdial.tcl --
#     Rotated dial widget, part of controlwidget package
#
# Contents: a "rotated" dial widget or thumbnail "roller" dial
# Date: Son May 23, 2010
#
# Abstract
#   A mouse draggable "dial" widget from the side view - visible
#   is the knurled area - Shift & Ctrl changes the sensitivity
#
# Copyright (c) Gerhard Reithofer, Tech-EDV 2010-05
#
# Adjusted for Tklib (snitified) by Arjen Markus
#
# The author  hereby grant permission to use,  copy, modify, distribute,
# and  license this  software  and its  documentation  for any  purpose,
# provided that  existing copyright notices  are retained in  all copies
# and that  this notice  is included verbatim  in any  distributions. No
# written agreement, license, or royalty  fee is required for any of the
# authorized uses.  Modifications to this software may be copyrighted by
# their authors and need not  follow the licensing terms described here,
# provided that the new terms are clearly indicated on the first page of
# each file where they apply.
#
# IN NO  EVENT SHALL THE AUTHOR  OR DISTRIBUTORS BE LIABLE  TO ANY PARTY
# FOR  DIRECT, INDIRECT, SPECIAL,  INCIDENTAL, OR  CONSEQUENTIAL DAMAGES
# ARISING OUT  OF THE  USE OF THIS  SOFTWARE, ITS DOCUMENTATION,  OR ANY
# DERIVATIVES  THEREOF, EVEN  IF THE  AUTHOR  HAVE BEEN  ADVISED OF  THE
# POSSIBILITY OF SUCH DAMAGE.
#
# THE  AUTHOR  AND DISTRIBUTORS  SPECIFICALLY  DISCLAIM ANY  WARRANTIES,
# INCLUDING,   BUT   NOT  LIMITED   TO,   THE   IMPLIED  WARRANTIES   OF
# MERCHANTABILITY,    FITNESS   FOR    A    PARTICULAR    PURPOSE,   AND
# NON-INFRINGEMENT. THIS  SOFTWARE  IS  PROVIDED  ON AN "AS  IS"  BASIS,
# AND  THE  AUTHOR  AND  DISTRIBUTORS  HAVE  NO  OBLIGATION  TO  PROVIDE
# MAINTENANCE, SUPPORT, UPDATES, ENHANCEMENTS, OR MODIFICATIONS.
#
# Original syntax:
#
# Syntax:
#   rdial::create w ?-width wid? ?-height hgt?  ?-value floatval?
#        ?-bg|-background bcol? ?-fg|-foreground fcol? ?-step step?
#        ?-callback script? ?-scale "degrees"|"radians"|factor?
#        ?-slow sfact? ?-fast ffact? ?-orient "horizontal"|"vertical"?
#        ?-variable varname? ?-bindwheel step?
#
# History:
#  20100526: -scale option added
#  20100626: incorrect "rotation direction" in vertical mode repaired
#  20100704: added -variable option and methods get and set (AM)
#  20101020: bug {[info exists ...]<0} => {![info exists ...]} repaired
#  20101112: drag: set opt(-value) depending on scale - thank's Manfred R.
#  20101118: -variable option added
#  20170518: -bindwheel option added for scrollwheel input
#  20170523: boolean variable buttonwheel controls Button/Wheel binding.
#            if false the <BindWheel> event is used (by default in Windows),
#            the event <ButtonPress-4/5> if it is false (other systems).
#
# Todo:
#    option -variable -- conflicts with -value
#    methods get and set
#

package require Tk 8.5
package require snit

namespace eval controlwidget {
    namespace export rdial
}

# rdial --
#     Rotated dial widget
#
snit::widget controlwidget::rdial {

    #
    # widget default values
    #
    option -bg         -default "#dfdfdf"  -configuremethod SetOption
    option -background -default "#dfdfdf"  -configuremethod SetOption
    option -fg         -default "black"    -configuremethod SetOption
    option -foreground -default "black"    -configuremethod SetOption
    option -callback   -default ""
    option -orient     -default horizontal
    option -width      -default 80         -configuremethod SetOption
    option -height     -default 8          -configuremethod SetOption
    option -step       -default 10
    option -value      -default 0.0        -configuremethod SetOption
    option -slow       -default 0.1
    option -fast       -default 10
    option -scale      -default 1.0        -configuremethod SetOption
    option -variable   -default {}         -configuremethod VariableName
    option -bindwheel  -default 2.0        -configuremethod SetOption

    variable d2r
    variable sfact
    variable ssize
    variable ovalue
    variable sector    88
    variable callback
    variable buttonwheel 1
    variable wheelfactor 15.0


    constructor args {

        # I did not find a platform independent method :-(
        if {$::tcl_platform(platform) eq "windows"} {
            set buttonwheel 0
        }

        #
        # A few constants to reduce expr
        #
        set d2r   [expr {atan(1.0)/45.0}]
        set ssize [expr {sin($sector*$d2r)}]

        #
        # Now initialise the widget
        #
        $self configurelist $args

        canvas $win.c   \
            -background $options(-background)

        grid $win.c -sticky nsew

        set wid $options(-width)
        set hgt $options(-height)
        set bgc $options(-background)

        # canvas dimensions and bindings
        if {$options(-orient) eq "horizontal"} {
            $win.c configure -width $wid -height $hgt
            # standard bindings
            bind $win.c <ButtonPress-1> [list $self SetVar ovalue %x]
            bind $win.c <B1-Motion>       [list $self drag %W %x 0]
            bind $win.c <ButtonRelease-1> [list $self drag %W %x 0]
            # course movement
            bind $win.c <Shift-ButtonPress-1> [list $self SetVar ovalue %x]
            bind $win.c <Shift-B1-Motion>       [list $self drag %W %x 1]
            bind $win.c <Shift-ButtonRelease-1> [list $self drag %W %x 1]
            # fine movement
            bind $win.c <Control-ButtonPress-1> [list $self SetVar ovalue %x]
            bind $win.c <Control-B1-Motion>       [list $self drag %W %x -1]
            bind $win.c <Control-ButtonRelease-1> [list $self drag %W %x -1]
        } else {
            $win.c configure -width $hgt -height $wid
            # standard binding
            bind $win.c <ButtonPress-1> [list $self SetVar ovalue %y]
            bind $win.c <B1-Motion>       [list $self drag %W %y 0]
            bind $win.c <ButtonRelease-1> [list $self drag %W %y 0]
            # course movement
            bind $win.c <Shift-ButtonPress-1> [list $self SetVar ovalue %y]
            bind $win.c <Shift-B1-Motion>       [list $self drag %W %y 1]
            bind $win.c <Shift-ButtonRelease-1> [list $self drag %W %y 1]
            # fine movement
            bind $win.c <Control-ButtonPress-1> [list $self SetVar ovalue %y]
            bind $win.c <Control-B1-Motion>       [list $self drag %W %y -1]
            bind $win.c <Control-ButtonRelease-1> [list $self drag %W %y -1]
        }
        if {$options(-bindwheel) != 0} {
            if {$buttonwheel} {
                set up $options(-bindwheel)
                set dn [expr {0.0 - $up}]
                # standard binding
                bind $win.c <ButtonPress-4> [list $self roll %W $up 0]
                bind $win.c <ButtonPress-5> [list $self roll %W $dn 0]
                # course movement
                bind $win.c <Shift-ButtonPress-4> [list $self roll %W $up 1]
                bind $win.c <Shift-ButtonPress-5> [list $self roll %W $dn 1]
                # fine movement
                bind $win.c <Control-ButtonPress-4> [list $self roll %W $up -1]
                bind $win.c <Control-ButtonPress-5> [list $self roll %W $dn -1]
            } else {
                # it seem that Shift+Control doesn't work :-(
                bind $win.c <MouseWheel> [list $self roll %W %D 0]
                bind $win.c <Shift-MouseWheel> [list $self roll %W %D 1]
                bind $win.c <Control-MouseWheel> [list $self roll %W %D -1]
            }
        }

        if {$options(-variable) ne ""} {
            if { [info exists ::$options(-variable)] } {
                set options(-value) [set ::$options(-variable)]
            } else {
                set ::options(-variable) [expr {$options(-value)*$options(-scale)}]
            }

            trace add variable ::$options(-variable) write [mymethod variableChanged]
        }

        # draw insides
        $self draw $win.c $options(-value)
    }

    #
    # public methods --
    #

    method set {newValue} {
        if { $options(-variable) != "" } {
            set ::$options(-variable) $newValue   ;#! This updates the dial too
        } else {
            set options(-value) $newValue
            $self draw $win.c $options(-value)
        }
    }
    method get {} {
        return $options(-value)
    }

    #
    # private methods --
    #

    # store some private variable
    method SetVar {var value} {
        set $var $value
    }

    # configure method - write only
    method SetOption {option arg} {
        switch -- $option {
            "-bg" {set option "-background"}
            "-fg" {set option "-foreground"}
            "-scale" {
                 switch -glob -- $arg {
                     "d*" {set arg 1.0}
                     "r*" {set arg $d2r}
                 }
                 # numeric check
                 set arg [expr {$arg*1.0}]
            }
            "-value" {
                  set arg [expr {$arg/$options(-scale)}]
            }
            "-height" {
                if { [winfo exists $win.c] } {
                    $win.c configure $option $arg
                }
            }
            "-width" {
                if { [winfo exists $win.c] } {
                    $win.c configure $option $arg
                }
                # sfact depends on width
                set sfact [expr {$ssize*2/$arg}]
            }
        }
        set options($option) $arg

        if { [winfo exists $win.c] } {
            $self draw $win.c $options(-value)
        }
    }

    method VariableName {option name} {

        # Could be still constructing in which case
        # $win.c does not exist:

        if {![winfo exists $win.c]} {
            set options(-variable) $name
            return;
        }

        # Remove any old traces

        if {$options(-variable) ne ""} {
            trace remove variable ::$options(-variable) write [mymethod variableChanged]
        }

        # Set new trace if appropriate and update value.

        set options(-variable) $name
        if {$options(-variable) ne ""} {
            trace add variable ::$options(-variable) write [mymethod variableChanged]
            $self draw $win.c [set ::$options(-variable)]
        }
    }

    method variableChanged {name1 name2 op} {

        set options(-value) [expr {[set ::$options(-variable)]/$options(-scale)}]
        $self draw $win.c [set ::$options(-variable)]

        if { $options(-callback) ne "" } {
            {*}$options(-callback) [expr {$options(-value)*$options(-scale)}]
        }
    }


    # cget method
    proc GetOption {option} {
        if { $option eq "-value" } {
            return [expr {$options(-value)*$options(-scale)}]
        } else  {
            return $options(-value)
        }
    }

    # draw the thumb wheel view
    method draw {w val} {

        set stp $options(-step)
        set wid $options(-width)
        set hgt $options(-height)
        set dfg $options(-foreground)
        set dbg $options(-background)

        $win.c delete all
        if {$options(-orient) eq "horizontal"} {
            # every value is mapped to the visible sector
            set mod [expr {$val-$sector*int($val/$sector)}]
            $win.c create rectangle 0 0 $wid $hgt -fill $dbg
            # from normalized value to left end
            for {set ri $mod} {$ri>=-$sector} {set ri [expr {$ri-$stp}]} {
                set offs [expr {($ssize+sin($ri*$d2r))/$sfact}]
                $win.c create line $offs 0 $offs $hgt -fill $dfg
            }
            # from normalized value to right end
            for {set ri [expr {$mod+$stp}]} {$ri<=$sector} {set ri [expr {$ri+$stp}]} {
                set offs [expr {($ssize+sin($ri*$d2r))/$sfact}]
                $win.c create line $offs 0 $offs $hgt -fill $dfg
            }
        } else {
            # every value is mapped to the visible sector
            set mod [expr {$sector*int($val/$sector)-$val}]
            $win.c create rectangle 0 0 $hgt $wid -fill $dbg
            # from normalized value to upper end
            for {set ri $mod} {$ri>=-$sector} {set ri [expr {$ri-$stp}]} {
                set offs [expr {($ssize+sin($ri*$d2r))/$sfact}]
                $win.c create line 0 $offs $hgt $offs -fill $dfg
            }
            # from normalized value to lower end
            for {set ri [expr {$mod+$stp}]} {$ri<=$sector} {set ri [expr {$ri+$stp}]} {
                set offs [expr {($ssize+sin($ri*$d2r))/$sfact}]
                $win.c create line 0 $offs $hgt $offs -fill $dfg
            }
        }
        # let's return the widget/canvas
        set options(-value) $val
    }

    # update rdials after value change
    method rdupdate {w diff} {
        # calculate "new" calue
        set options(-value) [expr {$options(-value)+$diff*$options(-scale)}]

        # call callback if defined...
        if {$options(-callback) ne ""} {
            {*}$options(-callback) $options(-value)
        }

        # draw knob with new angle
        $self draw $w $options(-value)
    }

    # change by mouse dragging
    method drag {w coord mode} {
        variable ovalue

        # calculate new value
        if {$options(-orient) eq "horizontal"} {
            set diff [expr {$coord-$ovalue}]
        } else  {
            set diff [expr {$ovalue-$coord}]
        }
        if {$mode<0} {
            set diff [expr {$diff*$options(-slow)}]
        } elseif {$mode>0} {
            set diff [expr {$diff*$options(-fast)}]
        }
        $self rdupdate $w $diff

        # store "old" value for diff
        set ovalue $coord
    }

    # change by mouse wheel
    method roll {w diff mode} {

        if {! $buttonwheel} {
            set diff [expr {$diff/$wheelfactor/$options(-bindwheel)}]
        }
        if {$mode<0} {
            set diff [expr {$diff*$options(-slow)}]
        } elseif {$mode>0} {
            set diff [expr {$diff*$options(-fast)}]
        }
        $self rdupdate $w $diff
    }
}

# Announce our presence
package provide rdial 0.7

#-------- test & demo ... disable it for package autoloading -> {0}
if {0} {
    if {[info script] eq $argv0} {
        array set disp_value {rs -30.0 rh 120.0 rv 10.0}
        proc rndcol {} {
            set col "#"
            for {set i 0} {$i<3} {incr i} {
                append col [format "%02x" [expr {int(rand()*230)+10}]]
            }
            return $col
        }
        proc set_rand_col {} {
            .rs configure -fg [rndcol] -bg [rndcol]
        }
        proc show_value {which v} {
            set val [.$which cget -value]
            set ::disp_value($which) [format "%.1f" $val]
            switch -- $which {
                "rh" {
                    if {abs($val)<30} return
                    .rs configure -width [expr {abs($val)}]
                }
                "rv" {
                    if {abs($val)<5}  return
                    .rs configure -height [expr {abs($val)}]
                }
                "rs" {
                    if {!(int($val)%10)} set_rand_col
                }
            }
        }
        set help "Use mouse button with Shift &"
        append help "\nControl for dragging the dials"
        append help "\nwith Mouswheel support"
        label .lb -text $help
        label .lv -textvariable disp_value(rv)
        controlwidget::rdial .rv -callback {show_value rv} -value $disp_value(rv)\
                -width 200 -step 5 -bg blue -fg white \
                -variable score -bindwheel -10.0
        label .lh -textvariable disp_value(rh)
        controlwidget::rdial .rh -callback {show_value rh} -value $disp_value(rh)\
                -width $disp_value(rh) -height 20 -fg blue -bg yellow -orient vertical
        label .ls -textvariable disp_value(rs)
        controlwidget::rdial .rs -callback {show_value rs} -value $disp_value(rs)\
                -width $disp_value(rh) -height $disp_value(rv)
        pack {*}[winfo children .]
        wm minsize . 220 300

        after 2000 {
            set ::score 0.0
        }
        after 3000 {
            set ::score 100.0
            .rh set 3
        }
    }
}
