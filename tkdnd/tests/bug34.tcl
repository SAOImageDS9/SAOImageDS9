package require tkdnd 2.9.2

menu .menu
.menu add cascade -label MENU
. configure -menu .menu

label .widget -text "LABEL"
pack .widget -expand 1 -fill both

tkdnd::drop_target register .widget *
bind .widget <<DropEnter>> {puts enter}

wm geometry . 300x200
