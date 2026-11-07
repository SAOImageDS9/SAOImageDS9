# msgtool.tcl -- maintain the ds9 translation catalogs in msgs/
#
# Run from the ds9/ directory:
#
#   tclsh util/msgtool.tcl report
#	For every msgs/*.msg: number of keys, keys used in library/ but
#	missing from the catalog, keys in the catalog not used literally
#	in library/, and entries whose translation is still the English.
#	Also lists the [msgcat::mc $var] calls that cannot be checked.
#
#   tclsh util/msgtool.tcl missing <lang>
#	Keys used in library/ but missing from msgs/<lang>.msg, one Tcl
#	list {key file:line} per line.
#
#   tclsh util/msgtool.tcl untranslated <lang>
#	Entries in msgs/<lang>.msg whose translation equals the key, one
#	Tcl list {key file:line} per line.
#
#   tclsh util/msgtool.tcl unused <lang>
#	Keys in msgs/<lang>.msg that no literal [msgcat::mc] call uses.
#	Check before removing: some are reached through $var calls.
#
#   tclsh util/msgtool.tcl merge <lang> <file>
#	Add or replace entries. <file> is a UTF-8 Tcl list of alternating
#	key/translation, e.g. one {English} {Translation} pair per line.
#	A new <lang> creates msgs/<lang>.msg.
#
#   tclsh util/msgtool.tcl remove <lang> <file>
#	Remove the keys listed in <file> (a UTF-8 Tcl list of keys).
#
#   tclsh util/msgtool.tcl normalize <lang>
#	Rewrite msgs/<lang>.msg in canonical form.
#
# Catalogs are written as UTF-8, one ::msgcat::mcset per line, sorted by
# key with a key ordered after any key it is a prefix of. Rewriting an
# unchanged catalog reproduces it byte for byte.

proc ReadFile {fn} {
    set fd [open $fn r]
    fconfigure $fd -encoding utf-8
    set txt [read $fd]
    close $fd
    return $txt
}

# return {key loc key loc ...} for every literal msgcat::mc key in library/
# and append the non-literal calls to ::dynamic
proc ScanLibrary {} {
    set ::dynamic {}
    set rr {}
    foreach fn [lsort [glob library/*.tcl]] {
	set txt [ReadFile $fn]
	set idx 0
	while {[regexp -indices -start $idx {msgcat::mc(?=[\s\\])} $txt mm]} {
	    set pp [expr {[lindex $mm 1]+1}]
	    set idx $pp
	    set line [expr {[regexp -all {\n} [string range $txt 0 $pp]]+1}]
	    lassign [FirstWord [string range $txt $pp [expr {$pp+2000}]]] \
		type raw
	    switch -- $type {
		brace {set ok 1; set key $raw}
		quote {
		    set ok [expr {![regexp {(^|[^\\])[$\[]} $raw]}]
		    if {$ok} {
			set key [subst -nocommands -novariables $raw]
		    }
		}
		bare {
		    set ok [expr {$raw ne {} && ![regexp {[$\[\\]} $raw]}]
		    set key $raw
		}
		default {set ok 0}
	    }
	    if {$ok} {
		lappend rr $key "$fn:$line"
	    } else {
		lappend ::dynamic "$fn:$line: [string range $raw 0 60]"
	    }
	}
    }
    return $rr
}

# first Tcl word of ss, as {brace|quote|bare|? raw}
proc FirstWord {ss} {
    set ss [string trimleft [regsub -all {\\\n\s*} $ss { }]]
    set cc [string index $ss 0]
    if {$cc eq "\{" || $cc eq "\""} {
	set close [expr {$cc eq "\{" ? "\}" : "\""}]
	set nn [string length $ss]
	for {set ee 1} {$ee < $nn} {incr ee} {
	    if {[string index $ss $ee] ne $close} {
		continue
	    }
	    set cand [string range $ss 0 $ee]
	    if {[info complete $cand] && ![catch {llength $cand} ll] && $ll==1} {
		set type [expr {$cc eq "\{" ? "brace" : "quote"}]
		return [list $type [string range $ss 1 [expr {$ee-1}]]]
	    }
	}
	return [list ? $ss]
    }
    regexp {\A[^\s\];]*} $ss ww
    return [list bare $ww]
}

# load msgs/<lang>.msg into array varname, return header
proc ReadCatalog {lang varname} {
    upvar $varname cat
    array unset cat
    set fn msgs/$lang.msg
    if {![file exists $fn]} {
	return "# Clean UTF-8 Translation Catalog for Tcl 9\n"
    }
    set txt [ReadFile $fn]
    namespace eval ::msgtool {variable pairs {}}
    proc ::msgtool::mcset {ll kk {vv {}}} {
	variable pairs
	lappend pairs $kk $vv
    }
    namespace eval ::msgtool [string map {::msgcat::mcset mcset} $txt]
    array set cat $::msgtool::pairs
    set hdr {}
    foreach line [split $txt \n] {
	if {[string match ::msgcat::* $line]} {
	    break
	}
	append hdr $line\n
    }
    return [string trimright $hdr \n]\n
}

proc Format {ss} {
    if {[string first \n $ss] < 0} {
	return [list $ss]
    }
    return "\"[string map {\\ \\\\ \" \\\" \n \\n \[ \\\[ \$ \\\$} $ss]\""
}

proc WriteCatalog {lang hdr varname} {
    upvar $varname cat
    set out $hdr\n
    set keys [lmap kk [array names cat] {set kk "$kk￿"}]
    foreach kk [lsort $keys] {
	set kk [string range $kk 0 end-1]
	append out "::msgcat::mcset $lang [Format $kk] [Format $cat($kk)]\n"
    }
    set fd [open msgs/$lang.msg w]
    fconfigure $fd -encoding utf-8 -translation lf
    puts -nonewline $fd $out
    close $fd
}

proc Languages {} {
    lmap fn [lsort [glob msgs/*.msg]] {file rootname [file tail $fn]}
}

proc Used {} {
    foreach {kk loc} [ScanLibrary] {
	if {![info exists ::used($kk)]} {
	    set ::used($kk) $loc
	}
    }
}

if {![file isdirectory library] || ![file isdirectory msgs]} {
    puts stderr "msgtool: run from the ds9/ directory"
    exit 1
}

lassign $argv cmd lang file
switch -- $cmd {
    report {
	Used
	puts "[array size used] distinct keys in library/"
	foreach lang [Languages] {
	    ReadCatalog $lang cat
	    set missing 0
	    foreach kk [array names used] {
		if {![info exists cat($kk)]} {incr missing}
	    }
	    set unused 0
	    set same 0
	    foreach kk [array names cat] {
		if {![info exists used($kk)]} {incr unused}
		if {$cat($kk) eq $kk} {incr same}
	    }
	    puts [format {%-3s keys %5d  missing %4d  unused %4d  untranslated %4d} \
		      $lang [array size cat] $missing $unused $same]
	}
	puts "\nNon-literal \[msgcat::mc\] calls (not checked):"
	foreach dd $::dynamic {
	    puts "  $dd"
	}
    }
    missing {
	Used
	ReadCatalog $lang cat
	foreach kk [lsort [array names used]] {
	    if {![info exists cat($kk)]} {
		puts [list $kk $used($kk)]
	    }
	}
    }
    untranslated {
	Used
	ReadCatalog $lang cat
	foreach kk [lsort [array names cat]] {
	    if {$cat($kk) eq $kk} {
		set loc [expr {[info exists used($kk)] ? $used($kk) : {-}}]
		puts [list $kk $loc]
	    }
	}
    }
    unused {
	Used
	ReadCatalog $lang cat
	foreach kk [lsort [array names cat]] {
	    if {![info exists used($kk)]} {
		puts [list $kk]
	    }
	}
    }
    merge {
	set hdr [ReadCatalog $lang cat]
	set added 0
	set changed 0
	foreach {kk vv} [ReadFile $file] {
	    if {![info exists cat($kk)]} {
		incr added
	    } elseif {$cat($kk) ne $vv} {
		incr changed
	    }
	    set cat($kk) $vv
	}
	WriteCatalog $lang $hdr cat
	puts "$lang: $added added, $changed changed"
    }
    remove {
	set hdr [ReadCatalog $lang cat]
	set nn 0
	foreach kk [ReadFile $file] {
	    if {[info exists cat($kk)]} {
		unset cat($kk)
		incr nn
	    } else {
		puts stderr "$lang: not in catalog: $kk"
	    }
	}
	WriteCatalog $lang $hdr cat
	puts "$lang: $nn removed"
    }
    normalize {
	set hdr [ReadCatalog $lang cat]
	WriteCatalog $lang $hdr cat
    }
    default {
	puts stderr "usage: tclsh util/msgtool.tcl report|missing|untranslated|unused|merge|remove|normalize ?lang? ?file?"
	exit 1
    }
}
