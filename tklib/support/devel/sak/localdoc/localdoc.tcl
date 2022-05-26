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

    set nav ../../../../home

    puts "Reindex the documentation..."
    sak::doc::imake __dummy__
    sak::doc::index __dummy__

    puts "Removing old documentation..."
    file delete -force embedded
    file mkdir embedded/man
    file mkdir embedded/www

    puts "Generating manpages..."
    dtplite::do \
	[list \
	     -exclude {*/doctools/tests/*} \
	     -exclude {*/support/*} \
	     -ext n \
	     -o embedded/man \
	     nroff .]

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

    puts "Generating HTML... Pass 1, draft..."
    dtplite::do \
	[list \
	     -toc $toc \
	     -nav {Tklib Home} $nav \
	     -post+toc Categories $cats \
	     -post+toc Modules $mods \
	     -post+toc Applications $apps \
	     -exclude {*/doctools/tests/*} \
	     -exclude {*/support/*} \
	     -merge \
	     -o embedded/www \
	     html .]

    puts "Generating HTML... Pass 2, resolving cross-references..."
    dtplite::do \
	[list \
	     -toc $toc \
	     -nav {Tklib Home} $nav \
	     -post+toc Categories $cats \
	     -post+toc Modules $mods \
	     -post+toc Applications $apps \
	     -exclude {*/doctools/tests/*} \
	     -exclude {*/support/*} \
	     -merge \
	     -o embedded/www \
	     html .]

    # Special docs, pre-made HTML. Integrate into the docs made above.

    puts "Special HTML..."

    set base  embedded/www
    set dst   [lindex [glob $base/*/files/modules] 0]
    set xbase [file dirname [file dirname $dst]]
    
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
    return
}

proc sak::localdoc::xdesc {path} {
    set index [cat $path]
    regexp {<title>(.*)</title>} $index -> desc
    return [join [lrange [split $desc] 0 end-2] { }]
}

proc sak::localdoc::basetoc {toc mod mdesc} {
    regexp {^(.*>Widget</dt><dd>\n<table class="#doctools_toc">)(.*)(</table></dl>\n</dl>\n<dl><dt><a name='by_type'>.*)$} $toc -> h t f
    set tn [xtable $t $mod $mdesc tklib/]
    return $h\n$tn$f
}

proc sak::localdoc::basetoc0 {toc mod mdesc} {
    regexp {^(.*>Widget</dt><dd>\n<table class="#doctools_toc">)(.*)(</table>.*)$} $toc -> h t f
    set tn [xtable $t $mod $mdesc tklib/]
    return $h\n$tn$f
}

proc sak::localdoc::basetoc1 {toc mod mdesc} {
    regexp {^(.*<dl><dt><a name='modules'>Modules</dt><dd>)(.*)(</dl>\n</dd>.*)$} $toc -> h t f
    set tn [xdd $t $mod $mdesc tklib/]
    return $h\n$tn$f
}

proc sak::localdoc::xbasetoc {toc mod mdesc} {
    regexp {^(.*<table class="#doctools_toc">)(.*)(</table>.*)$} $toc -> h t f
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
	    append tn "<tr class=\"#doctools_toc[expr {$even ? "even\"" : "odd\" "}] >" \n
	    append tn "<td class=\"#doctools_tocleft\" ><a name='$mod'><a href=\"${prefix}files/modules/$mod/index.html\">$mod</a></td>" \n
	    append tn "<td class=\"#doctools_tocright\">$mdesc</td>" \n
	    append tn "</tr>" \n
	    set even [expr {1-$even}]
	}
	
	append tn "<tr class=\"#doctools_toc[expr {$even ? "even\"" : "odd\" "}] >" \n
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
