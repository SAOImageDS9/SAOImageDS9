#! /usr/bin/env tclsh
## -*- tcl -*-

# @@ Meta Begin
# Application shtmlview 1.1.0
# Meta platform     tcl
# Meta summary      Simple HMTL Viewer (plus Markdown)
# Meta description  A viewer for simple HTML, and also Markdown files.
# Meta description  
# Meta category     HTML/Markdown viewer
# Meta subject      html markdown
# Meta require      {Tcl 8.5}
# Meta require      Tk
# Meta require      shtmlview
# Meta author       Stephen Uhler <stephen.uhler@sun.com>
# Meta author       Clif Flynt <clif@cflynt.com>
# Meta author       Robert Heller <heller@deepsoft.com>
# Meta author       Detlef Groth <detlef@dgroth.de>
# Meta license      BSD
# @@ Meta End

package require Tcl 8.5
package require Tk
package require shtmlview::shtmlview

# Support various non-HTML formats, if possible
catch { package require shtmlview::doctools }
catch { package require shtmlview::mkdoc    }

option add *Font		TkDefaultFont
option add *selectBackground	#678db2
option add *selectForeground	white

proc usage {} {
    puts stderr "shtmlview: Markdown and HTML file viewer\n"
    puts stderr "Usage as application: $::argv0 \[OPTION\] \[FILENAME\]\n"
    puts stderr "  FILENAME: HTML file or Markdown file"
    puts stderr "  OPTION:"
    puts stderr "    --help        - display this help message"
    puts stderr "    --version     - display current version of the package/application"
    puts stderr "    --render text - renders the specified HTML or Markdown string"
    puts stderr "    --render -    - renders the HTML or Markdown read from stdin"
    exit 1
}

proc atExit {} {
    file delete ${::tmpfile}.html
    exit 0
}

if {[llength $argv] == 0} {
    usage
}
    
if {[llength $argv] >= 1 && [lsearch -regexp $argv --help] > -1} {
    usage
}

if {[llength $argv] == 1 && [lindex $argv 0] eq "--version"} {
    puts [package present shtmlview::shtmlview]
    exit 0
}
    
if {[lindex $argv 0] eq "--render"} {

    set help [::shtmlview::shtmlview .help \
		  -tablesupport false \
		  -toolbar false ]
    
    if {[llength $argv] == 2 && [lindex $argv 1] ne "-"} {

	$help render [regsub -all {\\n} [lindex $argv 1] "\n"]

    } elseif {[llength $argv] == 1 || [lindex $argv 1] eq "-"} {

	$help render [read stdin]

    } else {
	$help render "<b>Hello World</b>"
    }

    pack $help -fill both -expand true -side top

} elseif {[file exists [lindex $argv 0]]} {

    set file [lindex $argv 0]

    set help [::shtmlview::shtmlview .help \
		  -historycombo true \
		  -tablesupport true ]

    pack $help -side top -fill both -expand true

    $help configure -home $file
    $help browse {*}$argv

    [$help getTextWidget] tag configure divblue -foreground blue
    update idletasks
} else {
    set file [lindex $argv 0]
    puts stderr "Error: file $file does not exist, or unknown option $file"
    usage
}

vwait __forever__
exit
