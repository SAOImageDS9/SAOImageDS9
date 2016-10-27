# usage: mergedict <##>

set mm [lindex $argv 0]
set enc [lindex $argv 1]
set fn "msgs/${mm}.msg"

# read in original msg file
if {[catch {open $fn r} id]} {
    puts "Error: can't open $fn for reading"
    return
}
fconfigure $id -encoding $enc

set orgmsg {}
while {[gets $id line] >= 0} {
    lappend orgmsg $line
}
set orgmsg [lsort -unique $orgmsg]
catch {close $id}

# read current msgs
set curmsg {}
while {[gets stdin line] >= 0} {
    set exp {.*msgcat::mc {([^\}]*)}}
    if [regexp $exp $line foo aa] {
	lappend curmsg "::msgcat::mcset $mm {$aa} "
    }
}
set curmsg [lsort -unique $curmsg]

# now merge original against current
set mermsg {}
foreach ll $curmsg {
    set ii [lsearch -glob $orgmsg "$ll*"]
    if {$ii != -1} {
	lappend mermsg [lindex $orgmsg $ii]
    } else {
	lappend mermsg $ll
    }
}
set mermsg [lsort -unique $mermsg]

# now find unused entries in original
foreach ll $orgmsg {
    set ii [lsearch -exact $mermsg $ll]

    if {$ii == -1} {
	if {[string range $ll 0 0] != {#}} {
	    lappend mermsg "# $ll"
	} else {
	    lappend mermsg "$ll"
	}
    }
}
set mermsg [lsort -unique $mermsg]

# write new msg file
if {[catch {open $fn w} id]} {
    puts "Error: can't open $fn for writing"
    return
}
fconfigure $id -encoding $enc

foreach ll $mermsg {
    puts $id $ll
}

catch {close $id}
