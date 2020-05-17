#set themesdir [file join [pwd] [file dirname [info script]]]
#source [file join $themesdir scidthemes.tcl]
#option add *Menu.BorderWidth 0

package ifneeded ttk::theme::scidthemes 0.9.3 \
    [list source [file join $dir scidthemes.tcl]]
