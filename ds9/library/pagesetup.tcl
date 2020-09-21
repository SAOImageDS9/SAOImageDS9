#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc PSPageSetup {} {
    global ps
    global ed

    set ed(ok) 0
    array set ed [array get ps]

    set w {.pagesetup}

    DialogCreate $w [msgcat::mc {Page Setup}] ed(ok)

    # Layout
    set f [ttk::labelframe $w.layout -text {Layout}]

    ttk::label $f.torient -text [msgcat::mc {Orientation}]
    ttk::radiobutton $f.portrait -text [msgcat::mc {Portrait}] \
	-variable ed(orient) -value portrait
    ttk::radiobutton $f.landscape -text [msgcat::mc {Landscape}] \
	-variable ed(orient) -value landscape
    ttk::label $f.tscale -text [msgcat::mc {Scale}]
    ttk::entry $f.scale -textvariable ed(scale) -width 7
    ttk::label $f.uscale -text {%}

    grid $f.torient $f.portrait $f.landscape -padx 2 -pady 2 -sticky w
    grid $f.tscale $f.scale $f.uscale -padx 2 -pady 2 -sticky w

    # Page Size
    set f [ttk::labelframe $w.size -text {Page Size}]

    ttk::radiobutton $f.letter -text "[msgcat::mc {Letter}](8.5 x 11 in)"\
	-variable ed(size) -value letter 
    ttk::radiobutton $f.legal -text "[msgcat::mc {Legal}](8.5 x 14 in)"\
	-variable ed(size) -value legal 
    ttk::radiobutton $f.tabloid -text "[msgcat::mc {Tabloid}](11 x 17 in)"\
	-variable ed(size) -value tabloid 
    ttk::radiobutton $f.poster -text "[msgcat::mc {Poster}](36 x 48 in)"\
	-variable ed(size) -value poster 
    ttk::radiobutton $f.a4 -text {A4(210 x 297 mm)} \
	-variable ed(size) -value a4 
    ttk::radiobutton $f.other -text "[msgcat::mc {Other}] (inches)" \
	-variable ed(size) -value other
    ttk::radiobutton $f.othermm -text "[msgcat::mc {Other}] (mm)" \
	-variable ed(size) -value othermm
    ttk::label $f.title3 -text [msgcat::mc {Width}]
    ttk::entry $f.width -textvariable ed(width) -width 10
    ttk::label $f.title4 -text [msgcat::mc {Height}]
    ttk::entry $f.height -textvariable ed(height) -width 10

    grid $f.letter -padx 2 -pady 2 -sticky w
    grid $f.legal -padx 2 -pady 2 -sticky w
    grid $f.tabloid -padx 2 -pady 2 -sticky w
    grid $f.poster -padx 2 -pady 2 -sticky w
    grid $f.a4 -padx 2 -pady 2 -sticky w
    grid $f.other $f.title3 $f.width -padx 2 -pady 2 -sticky w
    grid $f.othermm $f.title4 $f.height -padx 2 -pady 2 -sticky w

    # Buttons
    set f [ttk::frame $w.buttons]
    ttk::button $f.ok -text [msgcat::mc {OK}] -command {set ed(ok) 1} \
	-default active
    ttk::button $f.cancel -text [msgcat::mc {Cancel}] -command {set ed(ok) 0}
    pack $f.ok $f.cancel -side left -expand true -padx 2 -pady 4

    bind $w <Return> {set ed(ok) 1}

    # Fini
    grid $w.layout -sticky news
    grid $w.size -sticky news
    grid $w.buttons -sticky ew
    grid rowconfigure $w 0 -weight 1
    grid rowconfigure $w 1 -weight 1
    grid columnconfigure $w 0 -weight 1

    DialogWait $w ed(ok) $w.buttons.ok 
    destroy $w

    if {$ed(ok)} {
	array set ps [array get ed]
    }

    set rr $ed(ok)
    unset ed
    return $rr
}

proc PrefsDialogPageSetup {} {
    global dprefs

    set w $dprefs(tab)

    $dprefs(listbox) insert {} end -id [ttk::frame $w.pagesetup] \
	-text [msgcat::mc {Page Setup}]

    # Layout
    set f [ttk::labelframe $w.pagesetup.layout -text {Layout}]

    ttk::label $f.torient -text [msgcat::mc {Orientation}]
    ttk::radiobutton $f.portrait -text [msgcat::mc {Portrait}] \
	-variable pps(orient) -value portrait
    ttk::radiobutton $f.landscape -text [msgcat::mc {Landscape}] \
	-variable pps(orient) -value landscape
    ttk::label $f.tscale -text [msgcat::mc {Scale}]
    ttk::entry $f.scale -textvariable pps(scale) -width 7
    ttk::label $f.uscale -text {%}

    grid $f.torient $f.portrait $f.landscape -padx 2 -pady 2 -sticky w
    grid $f.tscale $f.scale $f.uscale -padx 2 -pady 2 -sticky w

    # Page Size
    set f [ttk::labelframe $w.pagesetup.size -text {Page Size}]

    ttk::radiobutton $f.letter -text "[msgcat::mc {Letter}](8.5 x 11 in)"\
	-variable pps(size) -value letter 
    ttk::radiobutton $f.legal -text "[msgcat::mc {Legal}](8.5 x 14 in)"\
	-variable pps(size) -value legal 
    ttk::radiobutton $f.tabloid -text "[msgcat::mc {Tabloid}](11 x 17 in)"\
	-variable pps(size) -value tabloid 
    ttk::radiobutton $f.poster -text "[msgcat::mc {Poster}](36 x 48 in)"\
	-variable pps(size) -value poster 
    ttk::radiobutton $f.a4 -text {A4(210 x 297 mm)} \
	-variable pps(size) -value a4 
    ttk::radiobutton $f.other -text "[msgcat::mc {Other}] (inches)" \
	-variable pps(size) -value other
    ttk::radiobutton $f.othermm -text "[msgcat::mc {Other}] (mm)" \
	-variable pps(size) -value othermm

    ttk::label $f.title3 -text [msgcat::mc {Width}]
    ttk::entry $f.width -textvariable pps(width) -width 10

    ttk::label $f.title4 -text [msgcat::mc {Height}]
    ttk::entry $f.height -textvariable pps(height) -width 10

    grid $f.letter -padx 2 -pady 2 -sticky w
    grid $f.legal -padx 2 -pady 2 -sticky w
    grid $f.tabloid -padx 2 -pady 2 -sticky w
    grid $f.poster -padx 2 -pady 2 -sticky w
    grid $f.a4 -padx 2 -pady 2 -sticky w
    grid $f.other $f.title3 $f.width -padx 2 -pady 2 -sticky w
    grid $f.othermm $f.title4 $f.height -padx 2 -pady 2 -sticky w

    pack $w.pagesetup.layout $w.pagesetup.size \
	-side top -fill both -expand true
}

# Process Cmds

proc ProcessPageSetupCmd {varname iname} {
    upvar $varname var
    upvar $iname i
    global ds9

    ProcessPSPageSetupCmd var i
}

proc ProcessSendPageSetupCmd {proc id param {sock {}} {fn {}}} {
    global ds9

    ProcessSendPSPageSetupCmd $proc $id $param
}

proc ProcessPSPageSetupCmd {varname iname} {
    upvar $varname var
    upvar $iname i

    pagesetup::YY_FLUSH_BUFFER
    pagesetup::yy_scan_string [lrange $var $i end]
    pagesetup::yyparse
    incr i [expr $pagesetup::yycnt-1]
}

proc ProcessSendPSPageSetupCmd {proc id param {sock {}} {fn {}}} {
    global parse
    set parse(proc) $proc
    set parse(id) $id

    pagesetupsend::YY_FLUSH_BUFFER
    pagesetupsend::yy_scan_string $param
    pagesetupsend::yyparse
}

