#!/usr/bin/tclsh

package require Tk

set iscript [info script]
if { [file type $iscript] eq "link" } { set iscript [file link $iscript] }
set ap [file normalize [file dirname $iscript]]
if { $ap ni $::auto_path } {
  lappend ::auto_path $ap
}
if { 1 } {
  set ap [file normalize [file join [file dirname $iscript] .. code]]
  if { $ap ni $::auto_path } {
    lappend ::auto_path $ap
  }
}
unset ap
unset iscript

if { [llength $::argv] < 1 } {
  puts "Usage: demottk.tcl <theme> \[-ttkscale <scale-factor>] \[-scale <scale-factor>] \[-fontscale <scale-factor>] \[-highlightcolor <color>] \[-notksvg]"
  exit 1
}

set theme [lindex $::argv 0]

set ::notksvg false
set fontscale 1.0 ; # default
set sf 1.0
set gc {}
for {set idx 1} {$idx < [llength $::argv]} {incr idx} {
  if { [lindex $::argv $idx] eq "-ttkscale" } {
    incr idx
    tk scaling [lindex $::argv $idx]
  }
  if { [lindex $::argv $idx] eq "-scale" } {
    incr idx
    set sf [lindex $::argv $idx]
  }
  if { [lindex $::argv $idx] eq "-highlightcolor" } {
    incr idx
    set gc [lindex $::argv $idx]
  }
  if { [lindex $::argv $idx] eq "-fontscale" } {
    incr idx
    set fontscale [lindex $::argv $idx]
  }
  if { [lindex $::argv $idx] eq "-notksvg" } {
    set ::notksvg true
  }
}

# now do the requires so that -notksvg has an effect.
package require colorutils
package require awthemes

if { $gc ne {} } {
  ::themeutils::setThemeColors $theme \
      graphics.color $gc
}
::themeutils::setThemeColors $theme \
    scale.factor $sf

if { ! $::notksvg } {
  catch { package require tksvg }
}

set fn data/bll-tecra/tkscale.txt
if { [file exists $fn] } {
  set fh [open $fn r]
  set scale [gets $fh]
  close $fh
  tk scaling -displayof . $scale
}

set calcdpi [expr {round([tk scaling]*72.0)}]
set scalefactor [expr {$calcdpi/100.0}]

# Tk defaults to pixels.  Sigh.
# Use points so that the fonts scale.
font configure TkDefaultFont -size 11
set origfontsz [font metrics TkDefaultFont -ascent]
font configure TkDefaultFont -size [expr {round(12.0*$fontscale)}]

set newfontsz [font metrics TkDefaultFont -ascent]
if { $origfontsz != $newfontsz } {
  set appscale [expr {double($newfontsz)/double($origfontsz)}]
  ::themeutils::setThemeColors $theme \
      scale.factor $appscale
}

set loaded false
if { 1 } {
  set fn [file join $::env(HOME) s ballroomdj code themes themeloader.tcl]
  if { [file exists $fn] } {
    source $fn
    themeloader::loadTheme $theme
    set loaded true
  }
}

set havetksvg false
if { ! [catch {package present tksvg}] } {
  set havetksvg true
}

set ttheme $theme
if { ($havetksvg && $theme eq "black") ||
    ($havetksvg && $theme eq "winxpblue") } {
  set ttheme aw${theme}
}
if { [file exists $ttheme.tcl] && ! $loaded } {
  source $ttheme.tcl
}

ttk::style theme use $theme

set val 55
set valb $theme
set off 0
set on 1

. configure -background [ttk::style lookup TFrame -background]

if { [info commands ::ttk::theme::${theme}::scaledStyle] ne {} } {
  font create SmallFont
  font configure SmallFont -size [expr {round(8.0*$fontscale)}]
  ttk::theme::${theme}::scaledStyle Small TkDefaultFont SmallFont
}

ttk::style configure TFrame -borderwidth 0

foreach {k} {{} Small} {
  set tfont TkDefaultFont
  set s {}
  if { $k ne {} } {
    set tfont SmallFont
    set s Small.
  }

  ttk::labelframe .lf${k} \
      -text " Normal " \
      -style ${s}TLabelframe
  ttk::style configure ${s}TLabelframe.Label -font $tfont

  ttk::frame .bf$k
  ttk::label .lb$k -text $theme -style ${s}TLabel
  ttk::style configure ${s}TLabel -font $tfont
  ttk::button .b$k -text $theme -style ${s}TButton
  ttk::style configure ${s}TButton -font $tfont
  pack .lb$k .b$k -in .bf$k -side left -padx 3p

  ttk::combobox .combo$k -values \
      [list aaa bbb ccc ddd eee fff ggg hhh iii jjj kkk lll mmm nnn ooo ppp] \
      -textvariable valb \
      -width 15 \
      -height 5 \
      -font $tfont \
      -style ${s}TCombobox
  option add *TCombobox*Listbox.font $tfont

  ttk::frame .cbf$k
  ttk::checkbutton .cboff$k -text off -variable off -style ${s}TCheckbutton
  ttk::checkbutton .cbon$k -text on -variable on -style ${s}TCheckbutton
  pack .cboff$k .cbon$k -in .cbf$k -side left -padx 3p

  ttk::separator .sep$k -style ${s}TSeparator

  ttk::frame .rbf$k
  ttk::radiobutton .rboff$k -text off -variable on -value 0 -style ${s}TRadiobutton
  ttk::radiobutton .rbon$k -text on -variable on -value 1 -style ${s}TRadiobutton
  pack .rboff$k .rbon$k -in .rbf$k -side left -padx 3p

  pack .bf$k .combo$k .cbf$k .sep$k .rbf$k \
      -in .lf$k -side top -anchor w -padx 3p -pady 3p
  pack configure .sep$k -fill x -expand true

  ttk::frame .hf$k
  ttk::scale .sc$k \
      -from 0 \
      -to 100 \
      -variable val \
      -length [expr {round(100*$scalefactor)}] \
      -style ${s}Horizontal.TScale
  ttk::progressbar .pb$k \
      -mode determinate \
      -variable val \
      -length [expr {round(100*$scalefactor)}] \
      -style ${s}Horizontal.TProgressbar
  ttk::entry .ent$k -textvariable valb \
      -width 15 \
      -font $tfont \
      -style ${s}TEntry
  ttk::spinbox .sbox$k -textvariable val \
      -width 5 \
      -from 1 -to 100 -increment 0.1 \
      -font $tfont \
      -style ${s}TSpinbox
  pack .sc$k .pb$k .ent$k .sbox$k \
      -in .hf$k -side top -anchor w -padx 3p -pady 3p

  ttk::frame .vf$k
  ttk::scale .scv$k \
      -orient vertical \
      -from 0 -to 100 \
      -variable val \
      -length [expr {round(100*$scalefactor)}] \
      -style ${s}Vertical.TScale
  ttk::progressbar .pbv$k -orient vertical \
      -mode determinate \
      -variable val \
      -length [expr {round(100*$scalefactor)}] \
      -style ${s}Vertical.TProgressbar
  pack .scv$k .pbv$k -in .vf$k -side right -padx 3p -pady 3p

  pack .hf$k .vf$k -in .lf$k -side left -anchor e
}
.lfSmall configure -text " Scaled "
pack .lf .lfSmall -in . -side left -padx 3p -pady 3p -expand 1 -fill both

