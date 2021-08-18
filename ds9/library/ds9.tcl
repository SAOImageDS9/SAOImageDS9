#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

proc DS9Def {} {
    global ds9
    global pds9

    switch $ds9(wm) {
	x11 -
	aqua {set ds9(title) $ds9(app)}
	win32 {set ds9(title) [file rootname $ds9(app)]}
    }

    # Must be major,minor
    set ds9(version) {8.3}
    # For display purposes only
    set ds9(version,display) {8.3b2}

    set ds9(visual) {}
    set ds9(depth) 8
    set ds9(FTY_MAXAXES) 10
    set ds9(threads) [GetNumCores]
    set ds9(prefs) 1

    # can't trust 'tk scaling'
    switch $ds9(wm) {
	x11 -
	win32 {
	    set ds9(scaling) [tk scaling]
	    if {$ds9(scaling) == Inf} {
		set ds9(scaling) [expr 96./72.]
	    }
	}
	aqua {set ds9(scaling) 1.4}
    }

    set ds9(helvetica) [font configure TkDefaultFont -family]
    set ds9(courier) [font configure TkFixedFont -family]
    switch $ds9(wm) {
	x11 {
	    set ds9(times) serif

	    # These look better if normal weight
	    font configure TkCaptionFont -weight normal
	    font configure TkHeadingFont -weight normal
	}
	aqua -
	win32 {set ds9(times) times}
    }
    set ds9(main) {}
    set ds9(image) {}
    set ds9(canvas) {}
    set ds9(panel) {}
    set ds9(info) {}
    set ds9(panner) {}
    set ds9(magnifier) {}
    set ds9(buttons) {}
    set ds9(graph,sp) {}
    set ds9(graph,horz) {}
    set ds9(graph,vert) {}

    set ds9(frames) {}
    set ds9(seq) 1
    set ds9(active) {}
    set ds9(active,num) 0
    set ds9(lock) 0
    set ds9(last) {}

    set ds9(event,opendoc) {}
    set ds9(event,printdoc) {}

    set ds9(tmpdir) {}

    switch $ds9(wm) {
	x11 -
	win32 {set ds9(menu,start) 1}
	aqua {set ds9(menu,start) 0}
    }
    set ds9(menu,size,frame,goto) [expr $ds9(menu,start)+0]
    set ds9(menu,size,frame,active) [expr $ds9(menu,start)+3]
    set ds9(menu,size,analysis) [expr $ds9(menu,start)+34]
    set ds9(menu,size,wrap) 20

    set ds9(display) single

    set ds9(array,x) 512
    set ds9(array,y) 512
    set ds9(array,bitpix) -32
    set ds9(array,skip) 0
    set ds9(array,arch) bigendian

    set ds9(row) -1
    set ds9(freeze) 0

    set ds9(b1) 0
    set ds9(b2) 0
    set ds9(b3) 0

    set ds9(sb1) 0
    set ds9(sb2) 0
    set ds9(sb3) 0

    set ds9(cb1) 0
    set ds9(cb2) 0
    set ds9(cb3) 0

    set ds9(csb1) 0
    set ds9(csb2) 0
    set ds9(csb3) 0

    set ds9(modifier) 0

    set ds9(ext,file) ".$ds9(app).fil"
    set ds9(ext,alt) ".$ds9(app).file"

    set ds9(msg) {}
    set ds9(msg,level) info
    set ds9(msg,src) {}
    set ds9(msg,timeout) 1000

    switch $ds9(wm) {
	x11 -
	win32 {
	    set ds9(ctrl) "Control-"
	    set ds9(shiftctrl) "Shift-Control-"
	}
	aqua {
	    set ds9(ctrl) "Command-"
	    set ds9(shiftctrl) "Shift-Command-"
	}
    }

    # prefs only
    InitDefaultFont
    InitDefaultTextFont

    set pds9(backup) 1
    set pds9(automarker) 1
    switch $ds9(wm) {
	x11 -
	aqua {set pds9(xpa) 1}
	win32 {set pds9(xpa) 0}
    }
    
    set pds9(prec,linear) 8
    set pds9(prec,deg) 7
    set pds9(prec,hms) 4
    set pds9(prec,dms) 3
    set pds9(prec,len,linear) 8
    set pds9(prec,len,deg) 7
    set pds9(prec,len,arcmin) 5
    set pds9(prec,len,arcsec) 3
    set pds9(prec,angle) 8

    set pds9(bg) white
    set pds9(bg,use) 0
    set pds9(nan) white

    set pds9(samp) 1
    set pds9(confirm) 1
    set pds9(iraf) 1
    switch $ds9(wm) {
	x11 {set pds9(dialog) motif}
	aqua -
	win32 {set pds9(dialog) native}
    }
    set pds9(dialog,center) 0
    set pds9(dialog,all) 0
    set pds9(language) locale
    set pds9(language,name) [LanguageToName $pds9(language)]
    set pds9(language,dir) {}

    set pds9(theme) default
}

# ds9(wm)
if {[catch {tk windowingsystem} ds9(wm)]} {
    puts stderr "Unable to initialize window system."
    exit
}

# ds9(app)
set ds9(app) [file tail [info nameofexecutable]]

# ds9(top)
# need for load
set ds9(top) .
set ds9(mb) .mb

# pre package load
switch $ds9(wm) {
    x11 {
	set ds9(root) "[::tcl::zipfs::root]mntpt"
	set auto_path [list $ds9(root) $ds9(root)/tcl8.6 $ds9(root)/tk8.6 $ds9(root)/tk8.6/ttk]
    }
    aqua {
	# set to absolute path
	set ds9(root) [file normalize [file dirname [file dirname $argv0]]]
	set bb [file dirname [file dirname $ds9(root)]]
	set auto_path [list $ds9(root) $bb/Tcl.framework/Resources $bb/Tcl.framework/Resources/Scripts $bb/Tk.framework/Resources $bb/Tk.framework/Resources/Scripts $bb/Tk.framework/Resources/Scripts/ttk]
    }
    win32 {
	set ds9(root) [file dirname [file dirname $argv0]]
	set auto_path [list $ds9(root) $ds9(root)/tcl8.6 $ds9(root)/tk8.6 $ds9(root)/tk8.6/ttk]
    }
}

package require msgcat
package require http

package require base64
package require ftp
package require math::fuzzy

package require tkcon
package require Tkblt
package require Tls
package require xmlrpc

package require DS9

# post package load
switch $ds9(wm) {
    x11 -
    win32 {
	# awthemes
	package require awthemes
	package require colorutils
	package require awdark
	package require awlight
	package require awarc
	package require awblack
	package require awbreeze
	package require awbreezedark
	package require awclearlooks
	package require awwinxpblue

	# ttkthemes- alot of these lacks full set of colors
#	package require ttk::theme::aquativo
#	package require ttk::theme::black
#	package require ttk::theme::blue
	package require ttk::theme::clearlooks
#	package require ttk::theme::elegance
#	package require ttk::theme::itft1
#	package require ttk::theme::keramik
#	package require ttk::theme::kroc
#	package require ttk::theme::plastik
	package require ttk::theme::radiance
#	package require ttk::theme::smog
#	package require ttk::theme::winxpblue

	# scidthemes
	package require ttk::theme::scidthemes

	# edit theme list
	set ds9(themes) [lsort [ttk::style theme names]]
	set ds9(themes) [lsearch -all -inline -not -exact $ds9(themes) alt]
	set ds9(themes) [lsearch -all -inline -not -exact $ds9(themes) classic]

	# fix TLabel widgets
	foreach tt [ttk::style theme names] {
	    ttk::style theme use $tt
	    ttk::style configure TLabel -borderwidth 2 -padding 1
	}

	switch $ds9(wm) {
	    x11 {ttk::style theme use default}
	    win32 {ttk::style theme use xpnative}
	}

	# used by x11/darwin
	ttk::style configure Tree.TFrame \
	    -background [ttk::style lookup Treeview -background]

	# fix ::tk::dialog::file
	set ::tk::dialog::file::showHiddenVar 0
	set ::tk::dialog::file::showHiddenBtn 1
    }
    aqua {
	::tk::unsupported::MacWindowStyle style $ds9(top) document \
	    "closeBox fullZoom collapseBox resizable"

	proc ::tk::mac::ShowPreferences {} {
	    PrefsDialog
	}

	proc ::tk::mac::OpenApplication {} {
	}

	proc ::tk::mac::ReopenApplication {} {
	    if {[wm state .] eq "withdrawn"} {
		wm state . normal
	    } else {
		wm deiconify .
	    }
	    raise .
	}

	proc ::tk::mac::OpenDocument {args} {
	    global ds9

	    # we can recieve this event before everything has been
	    # initiated, so save and process later
	    set ds9(event,opendoc) $args
	    if {!$ds9(init)} {
		MacOSOpenDocEvent
	    }
	}

	proc ::tk::mac::PrintDocument {args} {
	    global ds9

	    regsub -all {file://} $args {} ds9(event,printdoc)
	    if {!$ds9(init)} {
		MacOSPrintDocEvent 0
	    }
	}

	proc ::tk::mac::Quit {} {
	    QuitDS9
	}

	proc ::tk::mac::ShowHelp {} {
	    HelpRef
	}

	proc ::tk::mac::DoScriptFile {args} {
	}

	proc ::tk::mac::DoScriptText {args} {
	}

	proc ::tk::mac::LaunchURL {} {
	}
    }
}

# Define Variables
DS9Def
2MASSDef
3DDef
AnalysisDef
BinDef
BlinkDef
BlockDef
CanvasDef
CATDef
CATSymDef
CATCDSSrchDef
CentroidDef
ColorbarDef
ContourDef
CoordDef
CropDef
CrosshairDef
CubeDef
CurrentDef
CursorDef
DebugDef 
ESODef
ExamineDef
ExportDef
FPDef
GraphDef
GridDef
GroupDef
HelpDef
HTTPDef
HVDef
IExamDef
IISDef
MagnifierDef
MarkerDef
MaskDef
MinMaxDef
MovieDef
NotesDef
NRESDef
NVSSDef
PannerDef
PanZoomDef
PrismDef
PixelDef
PlotDef
PrefsDef
PSDef
RGBDef
SAMPDef
SAODef
SaveDef
SaveImageDef
ScaleDef
SIADef
SimpleTextDef
EditTextDef
SkyViewDef
SmoothDef
STSCIDef
TemplateDef
TileDef
ViewDef
VLADef
VLSSDef
VODef
WCSDef
ZScaleDef
# do last
ButtonsDef

# let's start
set ds9(init) 1

# set up signal trap
# not supported under windows
switch $tcl_platform(platform) {
    unix {signal add SIGINT QuitDS9}
    windows {}
}

# environment vars
# we don't want to see any error messages if xpa is not available
if { [info exists env(XPA_VERBOSITY)] == 0 } {
  set env(XPA_VERBOSITY) 0
}
# lower XPA connection timeout
set env(XPA_CONNECT_TIMEOUT) 3
# set filter ptype to contained (default is process)
set env(FILTER_PTYPE) c
# set filter error proc so it will not kill ds9
set env(GERROR) 0

# Events
event add <<Open>> <${ds9(ctrl)}o>
event add <<Save>> <${ds9(ctrl)}s>
event add <<Print>> <${ds9(ctrl)}p>
event add <<SelectAll>> <${ds9(ctrl)}a>
event add <<Find>> <${ds9(ctrl)}f>
event add <<FindNext>> <${ds9(ctrl)}g>
event add <<Close>> <${ds9(ctrl)}w>
event add <<ZoomIn>> <${ds9(ctrl)}plus>
event add <<ZoomOut>> <${ds9(ctrl)}minus>

event add <<Region>> <${ds9(ctrl)}r>
event add <<None>> <${ds9(ctrl)}n>

switch $ds9(wm) {
    x11 -
    win32 {
	event add <<Quit>> <${ds9(ctrl)}q>
	event add <<Pref>> <${ds9(ctrl)}comma>

	event add <<PageSetup>> <${ds9(shiftctrl)}P>
	event add <<SelectNone>> <${ds9(shiftctrl)}A>
    }
    aqua {
	event add <<PageSetup>> <${ds9(shiftctrl)}p>
	event add <<SelectNone>> <${ds9(shiftctrl)}a>
    }
}

# We want to withdraw the window til everything is ready to go
wm withdraw $ds9(top)

wm title $ds9(top) "SAOImage $ds9(title)"
wm iconname $ds9(top) "SAOImage $ds9(title)"
wm protocol $ds9(top) WM_DELETE_WINDOW QuitDS9

# set the visual
set ds9(visual) [winfo visual .]
set ds9(depth) [winfo depth .]

switch $ds9(wm) {
    x11 {
	if {$ds9(depth)==15} {
	    set ds9(depth) 16
	}
	if {$ds9(depth)==32} {
	    set ds9(depth) 24
	}
    } 
    aqua {
	if {$ds9(depth)==15} {
	    set ds9(depth) 16
	}
    }
    win32 {
	if {$ds9(depth)==32} {
	    set ds9(depth) 24
	}
    }
}

switch -- $ds9(visual)$ds9(depth) {
    truecolor8 {}
    truecolor16 {}
    truecolor24 {}
    default {BadVisualError}
}

# Init Temporary Dir before prefs
InitTempDir

# Init the filter compiler
InitFilterCompiler

# we need to check to see to run prefs first
ProcessCommandLineFirst

# Load any preferences here, before we do any real work
if {$ds9(prefs)} {
    LoadPrefs
}

# set fonts
SetDefaultFont false
SetDefaultTextFont false

# we need to set certain variables such as debug, title, language, xpa
ProcessCommandLineSecond

# initialize language
switch $pds9(language) {
    locale {
	switch $ds9(wm) {
	    x11 {
		foreach ee {LC_MESSAGES LC_ALL LANG} {
		    if {[info exists env($ee)]} {
			set ll [string tolower [string range $env($ee) 0 1]]
			if {[SetLanguage $ll]} {
			    break
			}
		    }
		}
	    }
	    aqua {}
	    win32 {}
	}
    }
    default {SetLanguage $pds9(language)}
}

# create our main frame
set ds9(main) [ttk::frame ${ds9(top)}ds9]
pack $ds9(main) -fill both -expand true

# Create image canvas
CreateCanvas

# Create Colorbar
CreateColorbar

# Create other parts of the display
CreateMenuBar
CreateInfoPanel
CreatePanner
CreateMagnifier
CreateButtons
CreateGraphs

# Make sure that the wm knows when to swap in the colormap (if needed)
wm colormapwindows . "$ds9(main) $ds9(canvas)"

# Initialize the display
InitColorbar
InitPanner
InitDialogBox

# Set our current state of things
ChangeMode

# force a update
global debug
if {$debug(tcl,idletasks)} {
    puts stderr "initialize update"
}
update

# layout
ConfigureView

# our first frame
CreateFrame

# do this last so we don't get an ConfigureView event
InitCanvas

# ok, ready to show the window
wm deiconify $ds9(top)

# Init external File Formats
# we want this before processing the command line
InitExternalFile

# Init analysis file formats
InitAnalysisFile

# Configure HTTP
ConfigHTTP

# SAMP
if {$pds9(samp)} {
    InitSAMP
}

# XPA
if {$pds9(xpa)} {
    InitXPA
}

# and process any command line items
# we want to see something before any fits files are loaded
ProcessCommandLine

# Initialize IIS
# after command line options to set port/fifo/unix...
catch {IISInit}

# any os events received?
switch $ds9(wm) {
    x11 -
    win32 {}
    aqua {
	MacOSOpenDocEvent
	MacOSPrintDocEvent 1
    }
}

# Load any initalization tcl code
SourceInitFileDir {.ini}

# do we have the correct prefs file?
CheckPrefs

# start error monitor
after $ds9(msg,timeout) [list ErrorTimer]

# ok, we're done
set ds9(init) 0

# major kludges
switch $ds9(wm) {
    x11 {
        # everything must be realized
        update

	# be sure theme has been set
	# could be changed in prefs or command line
	ThemeChange

	# lock down geometry at statup
	# so unneeded configure events are not generated
	# a problem with recent versions of linux
	wm geometry $ds9(top) \
	    "[winfo width $ds9(top)]x[winfo height $ds9(top)]"
    }
    aqua {}
    win32 {
        # everything must be realized
        update

	# default for win32
	if {$pds9(theme) == {default}} {
	    set pds9(theme) xpnative
	    ttk::style theme use xpnative
	}
	ThemeChange

	# jump start keyevents for windows
	event generate $ds9(canvas) <Tab> -x 0 -y 0
    }
}
