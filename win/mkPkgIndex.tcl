# mkPkgIndex.tcl --
#
#	Helper script for non-TEA installion on Windows.
#	This script resolves configure symbols.
#
# Copyright (c) 2003 Zveno Pty Ltd
# http://www.zveno.com/
#
# See the file "LICENSE" in this distribution for information on usage and
# redistribution of this file, and for a DISCLAIMER OF ALL WARRANTIES.
#
# $Id: mkPkgIndex.tcl,v 1.1.1.1 2009/01/16 22:11:49 joye Exp $

set infile [lindex $argv 0]
set outfile [lindex $argv 1]

set ch [open $infile]
set script [read $ch]
close $ch

set ch [open $outfile w]

foreach parameter [lrange $argv 2 end] {
    regexp {^([^=]+)=(.*)$} $parameter dummy name value
    regsub -all @${name}@ $script $value script
}

puts $ch $script
close $ch

exit 0
