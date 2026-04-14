package require tkdnd

set dsource .drag\ source
pack [label $dsource -text DragSource -height 5 -relief ridge]

tkdnd::drag_source register $dsource

proc my_drag_init {w} {
    puts stderr "my_drag_init: {$w}"
    return [list copy DND_Text {Some nice dropped text!}]
}

bind $dsource <<DragInitCmd>> [list my_drag_init %W]
