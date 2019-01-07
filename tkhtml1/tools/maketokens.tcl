#!/bin/sh
# This script is a replacement for the maketokens.sh shell script.
# The shell script required GNU awk.  This script should work with
# any old version of tclsh.
# \
exec tclsh "$0" ${1+"$@"}

if {$argc!=1} {
  puts stderr "Usage: $argv0 tokenlist.txt >htmltokens.c"
  exit 1
}
if {[catch {open [lindex $argv 0] r} f]} {
  puts stderr "$argv0: can not open \"[lindex $argv 0]\": $f"
  exit 1
}
set tokenlist {}
while {![eof $f]} {
  set line [string trim [gets $f]]
  if {$line==""} continue
  if {[string index $line 0]=="#"} continue
  if {[llength $line]!=2 && [llength $line]!=3}  continue
  lappend tokenlist [lindex $line 0]
  lappend tokenlist [lindex $line 1]
  lappend tokenlist [lindex $line 2]
}
close $f

global tcl_platform
if {$tcl_platform(platform) == "windows"} {
    fconfigure stdout -translation lf
}

puts {/* DO NOT EDIT
** The code in this file was automatically generated.
*/
#include <tk.h>
#include "htmltokens.h"
#if INTERFACE
struct HtmlTokenMap {
  char *zName;                /* Name of a markup */
  Html_16 type;               /* Markup type code */
  Html_16 extra;              /* Extra space needed above HtmlBaseElement */
  HtmlTokenMap *pCollide;     /* Hash table collision chain */
};
#define Html_Text    1
#define Html_Space   2
#define Html_Unknown 3
#define Html_Block   4
#define HtmlIsMarkup(X) ((X)->base.type>Html_Block)
}

set count 5
set fmt {#define %-20s %d}

foreach {name start end} $tokenlist {
  set upr [string toupper $name]
  puts [format $fmt Html_$upr $count]
  incr count
  if {$end!=""} {
    puts [format $fmt Html_End$upr $count]
    incr count
  }
}

puts [format $fmt Html_TypeCount [expr $count-1]]
puts "#define HTML_MARKUP_HASH_SIZE [expr $count+11]"
puts "#define HTML_MARKUP_COUNT [expr $count-5]"
puts "#endif /* INTERFACE */"
puts "HtmlTokenMap HtmlMarkupMap\[\] = {"

set fmt "  { %-15s %-25s %-30s },"

foreach {name start end} $tokenlist {
  set upr [string toupper $name]
  set nm "\"$name\","
  set val Html_$upr,
  if {$start=="0"} {
    set size "0,"
  } else {
    set size "sizeof($start),"
  }
  puts [format $fmt $nm $val $size]
  if {$end==""} continue
  set nm "\"/$name\","
  set val Html_End$upr,
  if {$end=="0"} {
    set size "0,"
  } else {
    set size "sizeof($end),"
  }
  puts [format $fmt $nm $val $size]
}

puts "};"
