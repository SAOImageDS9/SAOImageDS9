#  Copyright (C) 1999-2026
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

# Icon bar at the top of each plot window, shown when View->Icons is set

proc PlotIconsImages {} {
    global ds9

    # named images, so recreating them after a theme change updates
    # every plot window that uses them
    foreach nn {file_open save_as_pdf save_as_png backup plot_stats \
		    plot_gui edit_zoom edit_none select_box select_circle \
		    select_polygon select_freehand} {
	image create photo ploticon_$nn -file "$ds9(icons,ui)/$nn.png"
    }
}

proc PlotIconsCreate {varname} {
    upvar #0 $varname var
    global $varname

    if {[lsearch [image names] ploticon_file_open] < 0} {
	PlotIconsImages
    }

    set var(icons) [ttk::frame $var(top).icons]
    set var(icons,sep) [ttk::separator $var(top).iconssep -orient horizontal]
    set mb $var(icons)

    ttk::button $mb.load -takefocus 0 -image ploticon_file_open \
	-command [list PlotLoadData $varname]
    tooltip::tooltip $mb.load [msgcat::mc {Load Data}]

    ttk::button $mb.pdf -takefocus 0 -image ploticon_save_as_pdf \
	-command [list PlotExportDialog $varname pdf]
    tooltip::tooltip $mb.pdf [msgcat::mc {Export PDF}]

    ttk::button $mb.png -takefocus 0 -image ploticon_save_as_png \
	-command [list PlotExportDialog $varname png]
    tooltip::tooltip $mb.png [msgcat::mc {Export PNG}]

    ttk::button $mb.backup -takefocus 0 -image ploticon_backup \
	-command [list PlotBackupDialog $varname]
    tooltip::tooltip $mb.backup [msgcat::mc {Backup}]

    ttk::button $mb.stats -takefocus 0 -image ploticon_plot_stats \
	-command "set ${varname}(stats) 1; PlotStats $varname"
    tooltip::tooltip $mb.stats [msgcat::mc {Statistics}]

    ttk::button $mb.gui -takefocus 0 -image ploticon_plot_gui \
	-command [list PlotGUI $varname]
    tooltip::tooltip $mb.gui [msgcat::mc {Open Control Panel}]

    ttk::menubutton $mb.mode -menu $mb.mode.m -takefocus 0
    tooltip::tooltip $mb.mode [msgcat::mc {Edit Mode}]

    ThemeMenu $mb.mode.m
    $mb.mode.m configure -tearoff 0
    foreach {mm txt img} [list \
			      zoom [msgcat::mc {Zoom}] edit_zoom \
			      pointer [msgcat::mc {Pointer}] edit_none \
			      selectbox [msgcat::mc {Select Box}] select_box \
			      selectcircle [msgcat::mc {Select Circle}] \
			      select_circle \
			      selectpolygon [msgcat::mc {Select Polygon}] \
			      select_polygon \
			      selectfreehand [msgcat::mc {Select Freehand}] \
			      select_freehand \
			     ] {
	IconMenuButton $mb.mode $txt $varname mode $mm \
	    [list PlotChangeMode $varname]
	$mb.mode.m entryconfig end -image ploticon_$img
	set var(icons,mode,$mm) ploticon_$img
    }

    trace add variable ${varname}(mode) write [list PlotIconsModeCB $varname]
    PlotIconsModeCB $varname

    pack $mb.load $mb.pdf $mb.png $mb.backup $mb.stats $mb.gui $mb.mode \
	-side left -fill x
    # gap to separate the mode from the file commands
    pack configure $mb.mode -padx {8 0}

    PlotIconsLayout $varname
}

proc PlotIconsModeCB {varname args} {
    upvar #0 $varname var
    global $varname

    if {[winfo exists $var(icons).mode]} {
	$var(icons).mode configure -image $var(icons,mode,$var(mode))
    }
}

proc PlotIconsLayout {varname} {
    upvar #0 $varname var
    global $varname

    global view

    pack forget $var(icons) $var(icons,sep)
    if {$view(icons)} {
	pack $var(icons) -side top -fill x -before $var(main)
	pack $var(icons,sep) -side top -fill x -before $var(main)
    }
}

proc PlotIconsLayoutAll {} {
    global iap

    if {![info exists iap(plots)]} {
	return
    }
    foreach varname $iap(plots) {
	if {[PlotPing $varname]} {
	    PlotIconsLayout $varname
	}
    }
}
