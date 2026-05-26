# -*- tcl -*-
# sak::doc - Documentation facilities

package require sak::util
package require sak::doc

namespace eval ::sak::localdoc {}

# ###
# API commands

## ### ### ### ######### ######### #########

proc ::sak::localdoc::usage {} {
    package require sak::help
    puts stdout \n[sak::help::on localdoc]
    exit 1
}

proc ::sak::localdoc::run {} {
    package require cmdline
    package require fileutil
    package require textutil::repeat
    package require doctools      1
    package require doctools::toc 1
    package require doctools::idx 1
    package require dtplite

    # Read installation information. Need the list of excluded
    # modules to suppress them here in the doc generation as well.
    global excluded modules apps guide distribution
    set distribution [pwd]
    source support/installation/modules.tcl

    lappend baseconfig -module tklib
    foreach e $excluded {
	puts "Excluding $e ..."
	lappend baseconfig -exclude */modules/$e/*
    }

    set nav ../../../../home

    puts "Reindex the documentation..."
    sak::doc::imake __dummy__ $excluded
    sak::doc::index __dummy__ $excluded

    puts "Removing old documentation..."
    # Keep the manually created pages around, not to be touched
    # TODO: catch errors and restore automatically
    file rename embedded/index.md e_index.md
    file rename embedded/head.md  e_head.md

    file delete -force embedded
    file mkdir         embedded/md

    # Put the saved pages back into place, early.
    file rename e_index.md embedded/index.md
    file rename e_head.md  embedded/head.md

    run-idoc-man $baseconfig

    # Note: Might be better to run them separately.
    # Note @: Or we shuffle the results a bit more in the post processing stage.

    set map  {
	.man     .html
	modules/ tklib/files/modules/
	apps/    tklib/files/apps/
    }

    set toc  [string map $map [fileutil::cat support/devel/sak/doc/toc.txt]]
    set apps [string map $map [fileutil::cat support/devel/sak/doc/toc_apps.txt]]
    set mods [string map $map [fileutil::cat support/devel/sak/doc/toc_mods.txt]]
    set cats [string map $map [fileutil::cat support/devel/sak/doc/toc_cats.txt]]

    run-idoc-www $baseconfig $toc $nav $cats $mods $apps

    set map  {
	.man     .md
	modules/ tklib/files/modules/
	apps/    tklib/files/apps/
    }

    set toc  [string map $map [fileutil::cat support/devel/sak/doc/toc.txt]]
    set apps [string map $map [fileutil::cat support/devel/sak/doc/toc_apps.txt]]
    set mods [string map $map [fileutil::cat support/devel/sak/doc/toc_mods.txt]]
    set cats [string map $map [fileutil::cat support/devel/sak/doc/toc_cats.txt]]

    run-embedded $baseconfig $toc $cats $mods $apps
    return
}

proc ::sak::localdoc::run-idoc-man {baseconfig} {
    file delete -force idoc
    file mkdir idoc/man
    file mkdir idoc/www

    puts "Generating manpages (installation)..."
    set     config $baseconfig
    lappend config -exclude {*/doctools/tests/*}
    lappend config -exclude {*/support/*}
    lappend config -ext n
    lappend config -o idoc/man
    lappend config nroff .

    dtplite::do $config
    return
}

proc ::sak::localdoc::run-idoc-www {baseconfig toc nav cats mods apps} {
    puts "Generating HTML (installation)... Pass 1, draft..."
    set     config $baseconfig
    lappend config -exclude {*/doctools/tests/*}
    lappend config -exclude {*/support/*}
    lappend config -toc                   $toc
    lappend config -nav {Tklib Home}      $nav
    lappend config -post+toc Categories   $cats
    lappend config -post+toc Modules      $mods
    lappend config -post+toc Applications $apps
    lappend config -merge
    lappend config -o idoc/www
    lappend config html .

    dtplite::do $config

    puts "Generating HTML (installation)... Pass 2, resolving cross-references..."
    dtplite::do $config

    # Special docs, pre-made HTML. Integrate into the docs made above.

    puts "Special HTML (installation)..."

    set base  idoc/www
    set dst   [lindex [glob $base/*/files/modules] 0]
    set xbase [file dirname [file dirname $dst]]

    puts \t@\t$xbase
    
    foreach special [glob -nocomplain modules/*/doc/index.html] {
	set src  [file dirname $special]
	set mod  [file tail [file dirname $src]]
	set desc [xdesc $special]
	puts "\t$mod @ $src... ($desc)"

	# Base assembly
	file copy $src $dst/$mod

	# Toc integration.
	write $xbase/toc.html [xbasetoc [cat $xbase/toc.html] $mod $desc]
	write $base/toc.html  [basetoc  [cat $base/toc.html]  $mod $desc]
	write $base/toc0.html [basetoc0 [cat $base/toc0.html] $mod $desc]
	write $base/toc1.html [basetoc1 [cat $base/toc1.html] $mod $desc]
    }
}

proc ::sak::localdoc::run-embedded {baseconfig toc cats mods apps} {
    puts "Generating Markdown (online)... Pass 1, draft..."
    set     config $baseconfig
    lappend config -exclude  {*/doctools/tests/*}
    lappend config -exclude  {*/support/*}
    lappend config -ext md ;# must be known before nav options
    lappend config -toc                    $toc
    lappend config -post+toc Categories    $cats
    lappend config -post+toc Modules       $mods
    lappend config -post+toc Applications  $apps
    lappend config -merge
    lappend config -o embedded/md
    lappend config markdown .

    dtplite::do $config

    puts "Generating Markdown (online)... Pass 2, resolving cross-references..."
    dtplite::do $config
    return
}

proc sak::localdoc::xdesc {path} {
    set index [cat $path]
    regexp {<title>(.*)</title>} $index -> desc
    return [join [lrange [split $desc] 0 end-2] { }]
}

proc sak::localdoc::basetoc {toc mod mdesc} {
    regexp {^(.*>Widget</dt><dd>\n<table class="doctools_toc">)(.*)(</table></dl>\n</dl>\n<dl><dt><a name='by_type'>.*)$} $toc -> h t f
    set tn [xtable $t $mod $mdesc tklib/]
    return $h\n$tn$f
}

proc sak::localdoc::basetoc0 {toc mod mdesc} {
    regexp {^(.*>Widget</dt><dd>\n<table class="doctools_toc">)(.*)(</table>.*)$} $toc -> h t f
    set tn [xtable $t $mod $mdesc tklib/]
    return $h\n$tn$f
}

proc sak::localdoc::basetoc1 {toc mod mdesc} {
    regexp {^(.*<dl><dt><a name='modules'>Modules</dt><dd>)(.*)(</dl>\n</dd>.*)$} $toc -> h t f
    set tn [xdd $t $mod $mdesc tklib/]
    return $h\n$tn$f
}

proc sak::localdoc::xbasetoc {toc mod mdesc} {
    regexp {^(.*<table class="doctools_toc">)(.*)(</table>.*)$} $toc -> h t f
    set tn [xtable $t $mod $mdesc]
    return $h\n$tn$f
}

proc sak::localdoc::xdd {t mod mdesc {prefix {}}} {
    set check 1
    set tn ""

    foreach line [split [string trim $t] \n] {
	if {!$check} {
	    append tn $line \n
	    continue
	}
	if {[regexp {<dl><dt><a name='(.*)'>.*</dt><dd>} $line -> name]} {
	    if {$check && ([string compare $name $mod] > 0)} {
		# Insert before first entry just lexicographically after the new module.
		set check 0
		append tn "<dl><dt><a name='$mod'>$mod</dt><dd>" \n
		append tn "<table class=\"#doctools_toc\">" \n
		append tn "<tr class=\"#doctools_toceven\" >" \n
		append tn "<td class=\"#doctools_tocleft\" ><a name='$mod'><a href=\"${prefix}files/modules/$mod/index.html\">$mod</a></td>" \n
		append tn "<td class=\"#doctools_tocright\">$mdesc</td>" \n
		append tn "</tr>" \n
		append tn "</table></dl>" \n
	    }
	}
	append tn $line \n
    }

    return $tn
}

proc sak::localdoc::xtable {t mod mdesc {prefix {}}} {
    set check 1
    set even 1
    set tn   ""
    foreach {__ link desc post} [split [string trim $t] \n] {
	#puts |$__|\n|$link|\n|$desc|\n|$post|
	regexp {<a name='(.*)'>} $link -> name

	if {$check && ([string compare $name $mod] > 0)} {
	    # Insert before first entry just lexicographically after the new module.
	    set check 0
	    append tn "<tr class=\"doctools_toc[expr {$even ? "even\"" : "odd\" "}] >" \n
	    append tn "<td class=\"doctools_tocleft\" ><a name='$mod'><a href=\"${prefix}files/modules/$mod/index.html\">$mod</a></td>" \n
	    append tn "<td class=\"doctools_tocright\">$mdesc</td>" \n
	    append tn "</tr>" \n
	    set even [expr {1-$even}]
	}

	append tn "<tr class=\"doctools_toc[expr {$even ? "even\"" : "odd\" "}] >" \n
	append tn $link \n
	append tn $desc \n
	append tn $post \n
	set even [expr {1-$even}]
    }
    return $tn
}

proc sak::localdoc::cat {path} {
    set     c [open $path r]
    set     d [read $c]
    close  $c
    return $d
}

proc sak::localdoc::write {path d} {
    puts "\t\tRewriting $path"
    set    c [open $path w]
    puts -nonewline $c $d
    close $c
    return
}

# ### ### ### ######### ######### #########

package provide sak::localdoc 1.0

##
# ###
