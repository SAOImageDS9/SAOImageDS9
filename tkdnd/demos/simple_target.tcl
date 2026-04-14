package require tkdnd
catch {console show}

pack [ttk::frame .frame] -fill both -expand 1
set drop_target .frame.drop_target
pack [ttk::button $drop_target \
      -text " Drop Target (I can accept anything!)\
           \n          but only on the left half!"] \
      -fill x -padx 20 -pady 20

tkdnd::drop_target register $drop_target *

## Visual feedback:
bind $drop_target <<DropEnter>> {%W state  active}
bind $drop_target <<DropLeave>> {%W state !active}

## Position events:
proc handle_position {widget mouse_x mouse_y drag_source_actions buttons} {
  ## Limit drops to the left half part of the window...
  set x [winfo rootx $widget]
  set w [winfo width $widget]
  set middle [expr {$x + $w / 2.}]
  if {$mouse_x > $middle} {return refuse_drop}
  if {"alt" in $buttons && "link" in $drag_source_actions} {
    return link
  } elseif {"ctrl" in $buttons && "move" in $drag_source_actions} {
    return move
  } elseif {"copy" in $drag_source_actions} {
    return copy
  } else {
    return refuse_drop
  }
};# handle_position
bind $drop_target <<DropPosition>> [list handle_position %W %X %Y %a %b]

## Drop callbacks:
bind $drop_target <<Drop>>           {
  puts "Generic data drop: \"%D\""
  %W state !active
  return %A
}
bind $drop_target <<Drop:DND_Text>>  {
  puts "Dropped text:  \"%D\""
  %W state !active
  return %A
}
bind $drop_target <<Drop:DND_Files>> {
  puts "Dropped files: \"[join %D {, }]\""
  %W state !active
  return %A
}
bind $drop_target <<Drop:DND_HTML>> {
  puts "Dropped HTML: \"[join %D {, }]\""
  %W state !active
  return %A
}
bind $drop_target <<Drop:DND_Color>> {
  puts "Dropped color: \"%D\""
  %W state !active
  return %A
}

