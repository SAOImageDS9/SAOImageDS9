# -*- tcl -*-
namespace eval ::widget::listentry {
    msgcat::mcset en wle.add             Add
    msgcat::mcset en wle.remove          Remove
    msgcat::mcset en wle.up              Up
    msgcat::mcset en wle.down            Down
    msgcat::mcset en wle.browse          Browse...
    msgcat::mcset en wle.tip.add         {Add a new value to the list}
    msgcat::mcset en wle.tip.remove      {Remove the selected values from the list}
    msgcat::mcset en wle.tip.up          {Move selected element up a position}
    msgcat::mcset en wle.tip.down        {Move selected element down a position}
    msgcat::mcset en wle.tip.browse      {Search for elements}
    msgcat::mcset en wle.tip.main        {List of values}
    msgcat::mcset en wle.tip.entry       {Enter a new value}
    msgcat::mcset en wle.tip.list        {List of values}
    msgcat::mcset en wle.tip.empty       Empty
    msgcat::mcset en wle.tip.dup         {The list already contains this item}
    msgcat::mcset en wle.tip.add-none    {Nothing to enter}
    msgcat::mcset en wle.tip.remove-none {Nothing selected for removal}            
}
