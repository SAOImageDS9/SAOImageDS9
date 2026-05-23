# -*- tcl -*-
namespace eval ::widget::listentry {
    msgcat::mcset {} wle.add             Add
    msgcat::mcset {} wle.remove          Remove
    msgcat::mcset {} wle.up              Up
    msgcat::mcset {} wle.down            Down
    msgcat::mcset {} wle.browse          Browse...
    msgcat::mcset {} wle.tip.add         {Add a new value to the list}
    msgcat::mcset {} wle.tip.remove      {Remove the selected values from the list}
    msgcat::mcset {} wle.tip.up          {Move the selected elements up a position}
    msgcat::mcset {} wle.tip.down        {Move the selected elements down a position}
    msgcat::mcset {} wle.tip.browse      {Search for elements}
    msgcat::mcset {} wle.tip.main        {List of values}
    msgcat::mcset {} wle.tip.entry       {Enter a new value}
    msgcat::mcset {} wle.tip.list        {List of values}
    msgcat::mcset {} wle.tip.empty       Empty
    msgcat::mcset {} wle.tip.dup         {The list already contains this item}
    msgcat::mcset {} wle.tip.add-none    {Nothing to enter}
    msgcat::mcset {} wle.tip.remove-none {Nothing selected for removal}            
}
