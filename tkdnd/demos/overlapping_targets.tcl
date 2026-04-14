cd [file dirname [file normalize [info script]]]
source simple_source.tcl

set background [. cget -background]

proc my_drop {w type data action} {
  puts "Data drop ($type): \"$data\""
  $w configure -bg $::background
  return $action
};# my_drop

##
## Drop targets
##

set parent {}
foreach type {DND_HTML DND_Text DND_Files} bg {orange orange orange} {
  set w [labelframe $parent.drop_target$type -labelanchor n -bg $::background \
          -text " Drop Target ($type) " -width 80 -height 40]
  pack $w -fill x -padx 20 -pady 20
  tkdnd::drop_target register $w $type
  bind $w <<DropEnter>> {%W configure -bg green}
  bind $w <<DropLeave>> {%W configure -bg $::background}
  bind $w <<Drop>> [list my_drop %W %CPT %D %A]
  # bind $w <<DropPosition>> {puts "Common types: %CTT"; return copy}
  set w [frame $w.frame -bg $bg -width 60 -height 20]
  pack $w -fill x -padx 20 -pady 20
  set parent $w
}
