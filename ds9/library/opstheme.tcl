#  Copyright (C) 2026
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

# Ops / Ops Dark
#
# A ttk theme with a 1990s starship-console flavor: bracket shaped
# labelframes, pill buttons that light up, block tabs and headings,
# segmented progress bars.  The palette is built around the ink and
# blue accent of the Advanced view icons (icons/ui and icons/ui_dark),
# with amber and lilac as console secondaries.
#
# All artwork is inline SVG rendered by Tk, so nothing extra needs to
# be installed.  Elements not drawn here are inherited from clam.

namespace eval ::ops {
    variable scale 1

    # original image sizes, see OpsStretch
    variable size
    array set size {}

    variable palette
    array set palette {
	ops,bg		#e6eaf0
	ops,field	#ffffff
	ops,raised	#f7f9fc
	ops,hover	#dce8fa
	ops,line	#a9b4c3
	ops,trough	#d3d9e2
	ops,fg		#30353b
	ops,dim		#9aa3ae
	ops,accent	#1e6fd9
	ops,accentfg	#ffffff
	ops,amber	#c25f00
	ops,amberfg	#ffffff
	ops,lilac	#6b62d0
	ops,lilacfg	#ffffff
	ops,stripe	#f1f4f8

	opsdark,bg		#0d1015
	opsdark,field		#16191d
	opsdark,raised		#1c222b
	opsdark,hover		#1d3150
	opsdark,line		#3a4554
	opsdark,trough		#1b2029
	opsdark,fg		#dfe3e8
	opsdark,dim		#5f6874
	opsdark,accent		#5ea4ff
	opsdark,accentfg	#0d1015
	opsdark,amber		#ff9f45
	opsdark,amberfg		#0d1015
	opsdark,lilac		#a5a3ff
	opsdark,lilacfg		#0d1015
	opsdark,stripe		#1a1e23
    }
}

proc OpsThemeCreate {} {
    # artwork is drawn at 96dpi and scaled to match tk scaling
    set ::ops::scale [expr {max(1.0,round([tk scaling]/(96/72.)*2)/2.)}]

    foreach theme {ops opsdark} {
	if {[lsearch -exact [ttk::style theme names] $theme] == -1} {
	    ttk::style theme create $theme -parent clam
	}
	ttk::style theme settings $theme [list OpsThemeSettings $theme]
    }

    # icon bars get flat toolbar buttons; other themes fall back to
    # TButton/TMenubutton for these styles
    foreach ww {iconstop iconsleft iconsbottom icons panner} {
	option add *$ww.TButton.style Icon.TButton widgetDefault
	option add *$ww.TMenubutton.style Icon.TMenubutton widgetDefault
    }
}

# svg helpers, coordinates in 96dpi pixels

proc OpsImage {theme name w h body} {
    set img "ops_${theme}_$name"
    catch {image delete $img}
    unset -nocomplain ::ops::size($img)
    image create photo $img -format [list svg -scale $::ops::scale] -data \
	"<svg xmlns='http://www.w3.org/2000/svg' width='$w' height='$h' viewBox='0 0 $w $h'>$body</svg>"
    return $img
}

# rounded rect; a stroke is kept inside the box
proc OpsRect {x y w h r fill {stroke none} {sw 1} {op 1}} {
    if {$stroke ne {none}} {
	set i [expr {$sw/2.}]
	set x [expr {$x+$i}]
	set y [expr {$y+$i}]
	set w [expr {$w-$sw}]
	set h [expr {$h-$sw}]
	set r [expr {max(0,$r-$i)}]
    }
    return "<rect x='$x' y='$y' width='$w' height='$h' rx='$r' ry='$r' fill='$fill' fill-opacity='$op' stroke='$stroke' stroke-width='$sw'/>"
}

proc OpsPath {d fill {stroke none} {sw 1}} {
    return "<path d='$d' fill='$fill' stroke='$stroke' stroke-width='$sw' stroke-linecap='round' stroke-linejoin='round'/>"
}

# image element border/padding scaled to the artwork
proc OpsPx {args} {
    set rr {}
    foreach vv $args {
	lappend rr [expr {round($vv*$::ops::scale)}]
    }
    return $rr
}

# image element with a wide stretch area
#
# ttk fills an element by tiling the center of the image (inside
# -border) one center sized piece at a time, and each piece with
# partial alpha costs an XGetImage round trip.  With the 1px centers
# drawn here that is one round trip per pixel, which on some servers
# (Xwayland with glamor) takes minutes for a dialog.  So the center
# of each image is pre-tiled out to at least 64px, and -width/-height
# keep the element's minimum size that of the original artwork.
proc OpsElement {name spec args} {
    set ii [lsearch -exact $args -border]
    if {$ii == -1} {
	ttk::style element create $name image $spec {*}$args
	return
    }

    # ttk padding: l, l t, l t r, or l t r b
    lassign [lindex $args $ii+1] l t r b
    if {$t eq {}} {set t $l}
    if {$r eq {}} {set r $l}
    if {$b eq {}} {set b $t}

    set imgs [list [lindex $spec 0]]
    foreach {state img} [lrange $spec 1 end] {
	lappend imgs $img
    }
    foreach img $imgs {
	OpsStretch $img $l $t $r $b
    }

    lassign $::ops::size([lindex $imgs 0]) w h
    ttk::style element create $name image $spec {*}$args \
	-width $w -height $h
}

proc OpsStretch {img l t r b} {
    # images may be shared between elements
    if {[info exists ::ops::size($img)]} {
	return
    }
    set w [image width $img]
    set h [image height $img]
    set ::ops::size($img) [list $w $h]

    set nw [OpsStretchSize $w $l $r]
    set nh [OpsStretchSize $h $t $b]
    if {$nw == $w && $nh == $h} {
	return
    }

    set src [image create photo]
    $src copy $img -compositingrule set
    $img blank
    $img configure -width $nw -height $nh

    # copy the 9 patches; a larger -to region tiles the -from region
    set sx [list 0 $l $l [expr {$w-$r}] [expr {$w-$r}] $w]
    set dx [list 0 $l $l [expr {$nw-$r}] [expr {$nw-$r}] $nw]
    set sy [list 0 $t $t [expr {$h-$b}] [expr {$h-$b}] $h]
    set dy [list 0 $t $t [expr {$nh-$b}] [expr {$nh-$b}] $nh]
    foreach {sy0 sy1} $sy {dy0 dy1} $dy {
	foreach {sx0 sx1} $sx {dx0 dx1} $dx {
	    if {$sx1 > $sx0 && $sy1 > $sy0} {
		$img copy $src -compositingrule set \
		    -from $sx0 $sy0 $sx1 $sy1 -to $dx0 $dy0 $dx1 $dy1
	    }
	}
    }
    image delete $src
}

# new length with the center widened to at least 64px in whole tiles,
# so the tiled pattern is unchanged
proc OpsStretchSize {len b0 b1} {
    set cc [expr {$len-$b0-$b1}]
    if {$cc <= 0 || $cc >= 64} {
	return $len
    }
    return [expr {$b0+$b1+$cc*int(ceil(64./$cc))}]
}

# menubutton: left section 0-17, gap 17-19, end cap 19-39
proc OpsMbBody {face stroke cap} {
    set left {M11.5 0.5 H16.5 V22.5 H11.5 A11 11 0 0 1 11.5 0.5 Z}
    set end {M19 0 H28 A11.5 11.5 0 0 1 28 23 H19 Z}
    return "[OpsPath $left $face $stroke][OpsPath $end $cap]"
}

proc OpsCk {x fill stroke {sw 1}} {
    return [OpsRect 0 0 16 16 4 $fill $stroke $sw]$x
}

proc OpsRb {x fill stroke {sw 1}} {
    set rr [expr {8-$sw/2.}]
    return "<circle cx='8' cy='8' r='$rr' fill='$fill' stroke='$stroke' stroke-width='$sw'/>$x"
}

proc OpsTab {fill} {
    return [OpsPath {M2 15 V6 A6 6 0 0 1 8 0 H11 A6 6 0 0 1 17 6 V15 Z} $fill]
}

proc OpsThemeSettings {theme} {
    upvar #0 ::ops::palette pp
    foreach kk {bg field raised hover line trough fg dim accent accentfg
	amber amberfg lilac lilacfg stripe} {
	set $kk $pp($theme,$kk)
    }

    # Base
    ttk::style configure . \
	-background $bg \
	-foreground $fg \
	-fieldbackground $field \
	-bordercolor $line \
	-lightcolor $raised \
	-darkcolor $raised \
	-troughcolor $trough \
	-arrowcolor $accent \
	-insertcolor $fg \
	-focuscolor $accent \
	-selectbackground $amber \
	-selectforeground $amberfg \
	-font TkDefaultFont
    ttk::style map . \
	-background {} \
	-foreground [list disabled $dim] \
	-selectbackground [list !focus $amber] \
	-selectforeground [list !focus $amberfg]

    ttk::style configure TFrame -background $bg
    ttk::style configure TLabel -background $bg -foreground $fg

    # Button: pill that lights up blue on hover, amber when pressed
    set r 11
    set pill {OpsRect 0 0 24 23 11.5}
    OpsElement Button.border [list \
	[OpsImage $theme btn 24 23 [{*}$pill $raised $line]] \
	disabled [OpsImage $theme btn_d 24 23 [{*}$pill $bg $line 1 0.5]] \
	pressed [OpsImage $theme btn_p 24 23 [{*}$pill $amber]] \
	active [OpsImage $theme btn_a 24 23 [{*}$pill $accent]] \
	focus [OpsImage $theme btn_f 24 23 [{*}$pill $raised $accent 1.5]] \
	] -border [OpsPx $r] -padding [OpsPx 10 3] -sticky nswe
    # no focus element, focus is shown by the border
    ttk::style layout TButton {
	Button.border -sticky nswe -children {
	    Button.padding -sticky nswe -children {
		Button.label -sticky nswe
	    }
	}
    }
    ttk::style configure TButton -anchor center -width -9 -padding 0
    ttk::style map TButton -foreground [list \
	disabled $dim pressed $amberfg active $accentfg]

    # Icon bar buttons: flat until hovered
    set ibody [OpsRect 0 0 15 15 6 $hover $accent]
    set pbody [OpsRect 0 0 15 15 6 $amber $amber 1 0.35]
    OpsElement Icon.Button.border [list \
	[OpsImage $theme ibtn 15 15 {}] \
	pressed [OpsImage $theme ibtn_p 15 15 $pbody] \
	active [OpsImage $theme ibtn_a 15 15 $ibody] \
	] -border [OpsPx 7] -padding [OpsPx 3] -sticky nswe
    ttk::style layout Icon.TButton {
	Icon.Button.border -sticky nswe -children {
	    Button.padding -sticky nswe -children {
		Button.label -sticky nswe
	    }
	}
    }
    ttk::style configure Icon.TButton -padding 0 -width 0
    ttk::style map Icon.TButton -foreground [list disabled $dim]

    ttk::style layout Toolbutton [ttk::style layout Icon.TButton]
    ttk::style configure Toolbutton -padding 0 -width 0
    ttk::style map Toolbutton -foreground [list disabled $dim]

    # small corner mark for icon menu buttons
    OpsElement Icon.Menubutton.indicator [list \
	[OpsImage $theme imark 5 5 [OpsPath {M5 0 V5 H0 Z} $accent]] \
	disabled [OpsImage $theme imark_d 5 5 [OpsPath {M5 0 V5 H0 Z} $dim]] \
	] -sticky se
    ttk::style layout Icon.TMenubutton {
	Icon.Button.border -sticky nswe -children {
	    Icon.Menubutton.indicator -side right -sticky se
	    Menubutton.padding -sticky nswe -children {
		Menubutton.label -sticky nswe
	    }
	}
    }
    ttk::style configure Icon.TMenubutton -padding 0 -width 0
    ttk::style map Icon.TMenubutton -foreground [list disabled $dim]

    # Menubutton: pill with a separate blue end cap holding the arrow
    OpsElement Menubutton.border [list \
	[OpsImage $theme mb 39 23 [OpsMbBody $raised $line $accent]] \
	disabled [OpsImage $theme mb_d 39 23 [OpsMbBody $bg $line $dim]] \
	pressed [OpsImage $theme mb_p 39 23 [OpsMbBody $amber $amber $amber]] \
	active [OpsImage $theme mb_a 39 23 [OpsMbBody $accent $accent $accent]] \
	] -border [OpsPx 11 11 24 11] -padding [OpsPx 10 3 2 3] -sticky nswe
    OpsElement Menubutton.indicator [list \
	[OpsImage $theme mbarrow 8 5 [OpsPath {M0 0 H8 L4 5 Z} $accentfg]] \
	pressed [OpsImage $theme mbarrow_p 8 5 [OpsPath {M0 0 H8 L4 5 Z} $amberfg]] \
	disabled [OpsImage $theme mbarrow_d 8 5 [OpsPath {M0 0 H8 L4 5 Z} $bg]] \
	] -sticky {}
    ttk::style layout TMenubutton {
	Menubutton.border -sticky nswe -children {
	    Menubutton.focus -sticky nswe -children {
		Menubutton.indicator -side right -sticky {}
		Menubutton.padding -sticky we -children {
		    Menubutton.label -side left -sticky {}
		}
	    }
	}
    }
    ttk::style configure TMenubutton -width -9 \
	-padding [OpsPx 0 0 10 0] -arrowpadding 0 \
	-background $bg
    # menus take their active colors from TMenubutton
    ttk::style map TMenubutton \
	-background [list active $accent] \
	-foreground [list disabled $dim pressed $amberfg active $accentfg]

    # Entry, Spinbox
    set fbody [OpsRect 0 0 9 9 3 $field $line]
    OpsElement Entry.field [list \
	[OpsImage $theme field 9 9 $fbody] \
	disabled [OpsImage $theme field_d 9 9 [OpsRect 0 0 9 9 3 $bg $line]] \
	readonly [OpsImage $theme field_r 9 9 [OpsRect 0 0 9 9 3 $bg $line]] \
	focus [OpsImage $theme field_f 9 9 [OpsRect 0 0 9 9 3 $field $accent 1.5]] \
	] -border [OpsPx 4] -padding [OpsPx 4 2] -sticky nswe
    ttk::style configure TEntry -padding 0 -insertwidth 1
    ttk::style map TEntry -foreground [list disabled $dim]

    OpsElement Spinbox.field [list \
	ops_${theme}_field \
	disabled ops_${theme}_field_d \
	readonly ops_${theme}_field_r \
	focus ops_${theme}_field_f \
	] -border [OpsPx 4] -padding [OpsPx 4 2 1 2] -sticky nswe
    ttk::style configure TSpinbox -padding 0 -arrowsize [OpsPx 9] \
	-background $field -bordercolor $field \
	-lightcolor $field -darkcolor $field
    ttk::style map TSpinbox \
	-arrowcolor [list disabled $dim pressed $amber active $accent] \
	-background [list readonly $bg disabled $bg]

    # Combobox: field plus a blue end cap
    set capd {M2 0 H19 A3 3 0 0 1 22 3 V6 A3 3 0 0 1 19 9 H2 Z}
    OpsElement Combobox.field [list \
	ops_${theme}_field \
	disabled ops_${theme}_field_d \
	focus ops_${theme}_field_f \
	] -border [OpsPx 4] -padding [OpsPx 4 2] -sticky nswe
    OpsElement Combobox.downarrow [list \
	[OpsImage $theme cbcap 22 9 [OpsPath $capd $accent]] \
	disabled [OpsImage $theme cbcap_d 22 9 [OpsPath $capd $dim]] \
	pressed [OpsImage $theme cbcap_p 22 9 [OpsPath $capd $amber]] \
	] -border [OpsPx 5 4 4 4] -sticky ns
    OpsElement Combobox.glyph [list \
	ops_${theme}_mbarrow \
	pressed ops_${theme}_mbarrow_p \
	disabled ops_${theme}_mbarrow_d \
	] -sticky {}
    ttk::style layout TCombobox {
	Combobox.downarrow -side right -sticky ns -children {
	    Combobox.glyph -sticky {}
	}
	Combobox.field -sticky nswe -children {
	    Combobox.padding -sticky nswe -children {
		Combobox.textarea -sticky nswe
	    }
	}
    }
    ttk::style configure TCombobox -padding 0 -insertwidth 1 \
	-fieldbackground $field \
	-selectbackground $amber -selectforeground $amberfg
    ttk::style map TCombobox \
	-fieldbackground {} \
	-foreground [list disabled $dim] \
	-selectbackground [list !focus $amber] \
	-selectforeground [list !focus $amberfg]
    ttk::style configure ComboboxPopdownFrame -relief solid -borderwidth 1 \
	-bordercolor $accent

    # Checkbutton, Radiobutton: amber status lights
    set ck {M4 8.5 L7 11.5 L12 5}
    OpsElement Checkbutton.indicator [list \
	[OpsImage $theme ck 22 16 [OpsCk {} $field $line]] \
	{disabled selected} [OpsImage $theme ck_ds 22 16 \
	    [OpsCk [OpsPath $ck none $bg 2] $dim $dim]] \
	{disabled alternate} [OpsImage $theme ck_da 22 16 \
	    [OpsCk [OpsRect 4 7 8 2 1 $bg] $dim $dim]] \
	disabled [OpsImage $theme ck_d 22 16 [OpsCk {} $bg $line]] \
	selected [OpsImage $theme ck_s 22 16 \
	    [OpsCk [OpsPath $ck none $amberfg 2] $amber $amber]] \
	alternate [OpsImage $theme ck_t 22 16 \
	    [OpsCk [OpsRect 4 7 8 2 1 $amberfg] $amber $amber]] \
	active [OpsImage $theme ck_a 22 16 [OpsCk {} $field $accent 1.5]] \
	] -sticky w
    ttk::style configure TCheckbutton -padding [OpsPx 2]

    set dot "<circle cx='8' cy='8' r='3.5' fill='$amber'/>"
    set ddot "<circle cx='8' cy='8' r='3.5' fill='$dim'/>"
    OpsElement Radiobutton.indicator [list \
	[OpsImage $theme rb 22 16 [OpsRb {} $field $line]] \
	{disabled selected} [OpsImage $theme rb_ds 22 16 [OpsRb $ddot $bg $dim]] \
	disabled [OpsImage $theme rb_d 22 16 [OpsRb {} $bg $line]] \
	selected [OpsImage $theme rb_s 22 16 [OpsRb $dot $field $amber 1.5]] \
	active [OpsImage $theme rb_a 22 16 [OpsRb {} $field $accent 1.5]] \
	] -sticky w
    ttk::style configure TRadiobutton -padding [OpsPx 2]

    # Scrollbar: pill thumb in a soft track, no arrows
    foreach {orient w h track thumb bb} [list \
	Vertical 12 13 {2 0 8 13 4} {2 1 8 11 4} {6 6 6 6} \
	Horizontal 13 12 {0 2 13 8 4} {1 2 11 8 4} {6 6 6 6}] {
	set oo [string tolower $orient]
	OpsElement $orient.Scrollbar.trough \
	    [OpsImage $theme sbt$oo $w $h [OpsRect {*}$track $trough]] \
	    -border [OpsPx {*}$bb] -sticky nswe
	OpsElement $orient.Scrollbar.thumb [list \
	    [OpsImage $theme sb$oo $w $h [OpsRect {*}$thumb $line]] \
	    pressed [OpsImage $theme sb${oo}_p $w $h [OpsRect {*}$thumb $amber]] \
	    active [OpsImage $theme sb${oo}_a $w $h [OpsRect {*}$thumb $accent]] \
	    ] -border [OpsPx {*}$bb] -sticky nswe
    }
    ttk::style layout Vertical.TScrollbar {
	Vertical.Scrollbar.trough -sticky ns -children {
	    Vertical.Scrollbar.thumb -expand 1 -sticky nswe
	}
    }
    ttk::style layout Horizontal.TScrollbar {
	Horizontal.Scrollbar.trough -sticky we -children {
	    Horizontal.Scrollbar.thumb -expand 1 -sticky nswe
	}
    }

    # Scale: thin track, blue pill slider
    OpsElement Horizontal.Scale.trough \
	[OpsImage $theme sclh 13 16 [OpsRect 0 6 13 4 2 $line]] \
	-border [OpsPx 6 0 6 0] -sticky we
    OpsElement Vertical.Scale.trough \
	[OpsImage $theme sclv 16 13 [OpsRect 6 0 4 13 2 $line]] \
	-border [OpsPx 0 6 0 6] -sticky ns
    OpsElement Horizontal.Scale.slider [list \
	[OpsImage $theme sldh 24 16 [OpsRect 0 0 24 16 8 $accent]] \
	disabled [OpsImage $theme sldh_d 24 16 [OpsRect 0 0 24 16 8 $dim]] \
	{pressed} [OpsImage $theme sldh_p 24 16 [OpsRect 0 0 24 16 8 $amber]] \
	] -sticky {}
    OpsElement Vertical.Scale.slider [list \
	[OpsImage $theme sldv 16 24 [OpsRect 0 0 16 24 8 $accent]] \
	disabled [OpsImage $theme sldv_d 16 24 [OpsRect 0 0 16 24 8 $dim]] \
	{pressed} [OpsImage $theme sldv_p 16 24 [OpsRect 0 0 16 24 8 $amber]] \
	] -sticky {}

    # Progressbar: segmented readout
    OpsElement Horizontal.Progressbar.trough \
	[OpsImage $theme pbth 9 14 [OpsRect 0 0 9 14 3 $field $line]] \
	-border [OpsPx 4] -padding [OpsPx 3] -sticky nswe
    OpsElement Vertical.Progressbar.trough \
	[OpsImage $theme pbtv 14 9 [OpsRect 0 0 14 9 3 $field $line]] \
	-border [OpsPx 4] -padding [OpsPx 3] -sticky nswe
    OpsElement Horizontal.Progressbar.pbar \
	[OpsImage $theme pbh 8 8 [OpsRect 0 0 6 8 1 $accent]] \
	-border 0 -sticky nswe
    OpsElement Vertical.Progressbar.pbar \
	[OpsImage $theme pbv 8 8 [OpsRect 0 2 8 6 1 $accent]] \
	-border 0 -sticky nswe
    ttk::style configure TProgressbar -thickness [OpsPx 14]

    # Labelframe: console bracket, label sits in a gap of the top bar
    set br {M0 7 A7 7 0 0 1 7 0 H39 A1 1 0 0 1 39 2 H7 A3 3 0 0 0 4 5
	V35 A3 3 0 0 0 7 38 H39 A1 1 0 0 1 39 40 H7 A7 7 0 0 1 0 33 Z}
    OpsElement Labelframe.border \
	[OpsImage $theme lf 40 40 [OpsPath $br $accent]] \
	-border [OpsPx 8 7 3 7] -padding [OpsPx 10 6 6 8] -sticky nswe
    ttk::style configure TLabelframe -labeloutside false \
	-labelmargins [OpsPx 12 0 0 0] -padding [OpsPx 6 2 4 2]
    ttk::style configure TLabelframe.Label -foreground $amber \
	-background $bg -padding [OpsPx 4 0]

    # Separator: console rail
    OpsElement Horizontal.Separator.rail \
	[OpsImage $theme seph 7 3 [OpsRect 0 0 7 3 1.5 $accent]] \
	-border [OpsPx 3 0 3 0] -sticky we
    OpsElement Vertical.Separator.rail \
	[OpsImage $theme sepv 3 7 [OpsRect 0 0 3 7 1.5 $accent]] \
	-border [OpsPx 0 3 0 3] -sticky ns
    ttk::style layout TSeparator {Horizontal.Separator.rail -sticky we}
    ttk::style layout Horizontal.TSeparator {Horizontal.Separator.rail -sticky we}
    ttk::style layout Vertical.TSeparator {Vertical.Separator.rail -sticky ns}

    ttk::style configure Sash -sashthickness [OpsPx 6] -gripsize 0 \
	-background $bg -bordercolor $bg -lightcolor $bg -darkcolor $bg

    # Notebook: block tabs over a blue rail
    OpsElement Notebook.client \
	[OpsImage $theme nbc 9 9 [OpsRect 0 0 9 3 0 $accent]] \
	-border [OpsPx 4 3 4 4] -padding [OpsPx 4 6 4 4] -sticky nswe
    OpsElement Notebook.tab [list \
	[OpsImage $theme tab 19 15 [OpsTab $line]] \
	selected [OpsImage $theme tab_s 19 15 [OpsTab $accent]] \
	active [OpsImage $theme tab_a 19 15 [OpsTab $lilac]] \
	disabled [OpsImage $theme tab_d 19 15 [OpsTab $trough]] \
	] -border [OpsPx 9 7 9 2] -sticky nswe
    ttk::style configure TNotebook -tabmargins 0 -padding 0
    ttk::style configure TNotebook.Tab -padding [OpsPx 12 3 12 3]
    ttk::style map TNotebook.Tab -padding {} -expand {} -foreground [list \
	disabled $dim selected $accentfg active $lilacfg]

    # Treeview: lilac heading blocks, amber selection
    OpsElement Treeview.field \
	[OpsImage $theme tvf 9 9 [OpsRect 0 0 9 9 3 $field $line]] \
	-border [OpsPx 4] -padding [OpsPx 2] -sticky nswe
    OpsElement Treeheading.cell [list \
	[OpsImage $theme th 9 9 [OpsRect 0 0 8 8 0 $lilac]] \
	active [OpsImage $theme th_a 9 9 [OpsRect 0 0 8 8 0 $accent]] \
	] -border [OpsPx 2 2 2 2] -sticky nswe
    ttk::style layout Heading {
	Treeheading.cell -sticky nswe -children {
	    Treeheading.padding -sticky nswe -children {
		Treeheading.image -side right -sticky {}
		Treeheading.text -sticky we
	    }
	}
    }
    ttk::style configure Heading -foreground $lilacfg \
	-padding [OpsPx 6 2] -relief flat
    ttk::style map Heading -foreground [list active $accentfg]
    ttk::style configure Treeview -background $field -foreground $fg \
	-fieldbackground $field -stripedbackground $stripe
    ttk::style configure Treeview.Separator -background $stripe
    ttk::style map Treeview \
	-background [list disabled $bg selected $amber] \
	-foreground [list disabled $dim selected $amberfg]
    ttk::style configure Item -foreground $fg -indicatorforeground $accent
    ttk::setTreeviewRowHeight
}
