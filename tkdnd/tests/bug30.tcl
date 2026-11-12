package require tkdnd
pack [label .dragrefuse -text DragRefuse -height 5 -relief ridge]

tkdnd::drag_source register .dragrefuse
bind .dragrefuse <<DragInitCmd>>  {list refuse_drop}
