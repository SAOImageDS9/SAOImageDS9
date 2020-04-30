#!/usr/bin/tclsh
#
#

package provide awblack 7.2

set ap [file normalize [file dirname [info script]]]
if { $ap ni $::auto_path } {
  lappend ::auto_path $ap
}
set ap [file normalize [file join [file dirname [info script]] .. code]]
if { $ap ni $::auto_path } {
  lappend ::auto_path $ap
}
unset ap
package require awthemes

namespace eval ::ttk::theme::black {

  proc setBaseColors { } {
    variable colors

    array set colors {
        style.arrow           solid-bg
        style.checkbutton     square-x
        style.combobox        solid-bg
        style.radiobutton     octagon-circle
        style.menubutton      solid
        style.treeview        solid
        bg.bg                 #424242
        fg.fg                 #ffffff
        graphics.color        #424242
        is.dark               true
    }
  }

  proc setDerivedColors { } {
    variable colors

    set colors(checkbutton.padding) {4 0 0 3}
    set colors(checkbutton.scale) 0.7
    set colors(bg.button) $colors(bg.bg)
    set colors(button.padding) {5 1}
    set colors(entrybg.bg) #ffffff
    set colors(entryfg.fg) #000000
    set colors(focus.color) #000000
    set colors(graphics.color.arrow) #000000
    set colors(graphics.color.menubutton) #000000
    set colors(menubutton.padding) {5 1}
    set colors(menubutton.relief) raised
    set colors(menubutton.width) -8
    set colors(notebook.tab.focusthickness) 1
    set colors(notebook.tab.padding) {4 2 4 2}
    set colors(trough.color) $colors(bg.darkest)
  }

  proc init { } {
    ::ttk::awthemes::init black
  }

  init
}


