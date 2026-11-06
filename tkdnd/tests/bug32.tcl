package require tkdnd
pack [label .dragsource -text DragSource -height 5 -relief ridge]

tkdnd::drag_source register .dragsource

proc my_drag_init {types} {
    puts stderr "my_drag_init: {$types}"
    return [list copy DND_Text {Some nice dropped text!}]
}

bind .dragsource <<DragInitCmd>> [list my_drag_init %t]
