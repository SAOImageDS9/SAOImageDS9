 #!/usr/bin/env wish

set ::TKDND_DEBUG_LEVEL 1
package require tkdnd

proc drag_init {} {
    return {copy DND_Text some_data}
}

proc modal_dialog {} {
    set w .modal_dialog
    toplevel $w
    wm title $w "Modal Dialog"
    set text \
        "DnD Source in Modal Dialog:\n\
         (1) Press mouse button here\n\
         (2) Move the mouse around until DnD cursor occurs\n\
         (3) Release the mouse\n\
         ==> Unable to get keyboard focus in other applications until\n\
         (a) the modal dialog is closed, or\n\
         (b) this label is clicked."
    ttk::label $w.source -text $text
    pack $w.source -expand 1 -fill both

    tkdnd::drag_source register $w.source
    bind $w.source <<DragInitCmd>> {drag_init}

    wm transient $w .
    raise $w
    focus $w
    grab  $w
    set sentinel {}
    wm protocol $w WM_DELETE_WINDOW [list set sentinel "closed"]
    tkwait variable sentinel
    grab release $w
    destroy $w
}

ttk::button .button -text "Open Modal Dialog" -command "modal_dialog"
pack .button -expand 1 -fill both
