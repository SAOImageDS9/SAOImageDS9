#==============================================================================
# Contains the implementation of the tablelist widget.
#
# Structure of the module:
#   - Namespace initialization
#   - Private procedure creating the default bindings
#   - Public procedure creating a new tablelist widget
#   - Private procedures implementing the tablelist widget command
#   - Private callback procedures
#
# Copyright (c) 2000-2024  Csaba Nemethi (E-mail: csaba.nemethi@t-online.de)
#==============================================================================

#
# Namespace initialization
# ========================
#

namespace eval tablelist {
    #
    # Get the windowing system ("x11", "win32", or "aqua")
    #
    variable winSys [tk windowingsystem]

    #
    # Get the display's current scaling percentage (100, 125, 150, 175, or 200)
    #
    variable scalingpct [scaleutil::scalingPercentage $winSys]

    #
    # Make the variable scalingpct read-only
    #
    trace add variable scalingpct {write unset} \
	[list tablelist::restoreScalingpct $scalingpct]

    #
    # The following trace procedure is executed whenever the
    # variable scalingpct is written or unset.  It restores the
    # variable to its original value, given by the first argument.
    #
    proc restoreScalingpct {origVal varName index op} {
	variable scalingpct $origVal
	switch $op {
	    write {
		return -code error "the variable is read-only"
	    }
	    unset {
		trace add variable scalingpct {write unset} \
		    [list tablelist::restoreScalingpct $origVal]
	    }
	}
    }

    #
    # Create aliases for a few tile commands if not yet present
    #
    proc createTileAliases {} {
	if {[interp alias {} ::tablelist::style] ne ""} {
	    return ""
	}

	if {[llength [info commands ::ttk::style]] == 0} {
	    interp alias {} ::tablelist::style      {} ::style
	    if {[string compare $::tile::version "0.7"] >= 0} {
		interp alias {} ::tablelist::styleConfig {} ::style configure
	    } else {
		interp alias {} ::tablelist::styleConfig {} ::style default
	    }
	    interp alias {} ::tablelist::getThemes  {} ::tile::availableThemes
	    interp alias {} ::tablelist::setTheme   {} ::tile::setTheme

	    interp alias {} ::tablelist::tileqt_kdeStyleChangeNotification \
			 {} ::tile::theme::tileqt::kdeStyleChangeNotification
	    interp alias {} ::tablelist::tileqt_currentThemeName \
			 {} ::tile::theme::tileqt::currentThemeName
	    interp alias {} ::tablelist::tileqt_currentThemeColour \
			 {} ::tile::theme::tileqt::currentThemeColour
	} else {
	    interp alias {} ::tablelist::style	      {} ::ttk::style
	    interp alias {} ::tablelist::styleConfig  {} ::ttk::style configure
	    interp alias {} ::tablelist::getThemes    {} ::ttk::themes
	    interp alias {} ::tablelist::setTheme     {} ::ttk::setTheme

	    interp alias {} ::tablelist::tileqt_kdeStyleChangeNotification \
			 {} ::ttk::theme::tileqt::kdeStyleChangeNotification
	    interp alias {} ::tablelist::tileqt_currentThemeName \
			 {} ::ttk::theme::tileqt::currentThemeName
	    interp alias {} ::tablelist::tileqt_currentThemeColour \
			 {} ::ttk::theme::tileqt::currentThemeColour
	}

	interp alias {} ::tablelist::getCurrentTheme  {} ::mwutil::currentTheme
    }
    variable currentTheme [::mwutil::currentTheme]
    if {$currentTheme ne ""} {
	createTileAliases
    }

    variable ckbtnLayouts
    array set ckbtnLayouts {alt ""  clam ""  default ""}
    variable widgetStyle ""
    variable colorScheme ""
    switch -- $currentTheme {
	alt -
	clam -
	default {
	    set ckbtnLayouts($currentTheme) [style layout TCheckbutton]
	}
	tileqt {
	    set widgetStyle [tileqt_currentThemeName]
	    if {[info exists ::env(KDE_SESSION_VERSION)] &&
		$::env(KDE_SESSION_VERSION) ne ""} {
		set colorScheme [getKdeConfigVal "General" "ColorScheme"]
	    } else {
		set colorScheme [getKdeConfigVal "KDE" "colorScheme"]
	    }
	}
    }

    variable pngSupported [expr {
	($::tk_version >= 8.6 &&
	 [package vcompare $::tk_patchLevel "8.6b2"] >= 0) ||
	($::tk_version >= 8.5 && [catch {package require img::png}] == 0)}]

    variable svgSupported [expr {
	$::tk_version >= 8.7 || [catch {package require tksvg}] == 0}]
    if {$svgSupported} {
	variable svgfmt \
	    [list svg -scale [expr {$::scaleutil::scalingPct / 100.0}]]
    }

    variable newAquaSupport [expr {
	($::tk_version == 8.6 &&
	 [package vcompare $::tk_patchLevel "8.6.10"] >= 0) ||
	($::tk_version >= 8.7 &&
	 [package vcompare $::tk_patchLevel "8.7a3"] >= 0)}]

    variable disp [expr {$::tk_version >= 8.5 ? "display" : ""}]

    variable scaled4 [::scaleutil::scale 4 $::scaleutil::scalingPct]

    #
    # The array configSpecs is used to handle configuration options.  The
    # names of its elements are the configuration options for the Tablelist
    # class.  The value of an array element is either an alias name or a list
    # containing the database name and class as well as an indicator specifying
    # the widget(s) to which the option applies: c stands for all children
    # (text widgets and labels), b for the body text widget, l for the labels,
    # f for the frame, and w for the widget itself.
    #
    #	Command-Line Name	 {Database Name		  Database Class      W}
    #	------------------------------------------------------------------------
    #
    variable configSpecs
    array set configSpecs {
	-acceptchildcommand	 {acceptChildCommand	  AcceptChildCommand  w}
	-acceptdropcommand	 {acceptDropCommand	  AcceptDropCommand   w}
	-activestyle		 {activeStyle		  ActiveStyle	      w}
	-aftercopycommand	 {afterCopyCommand	  AfterCopyCommand    w}
	-arrowcolor		 {arrowColor		  ArrowColor	      w}
	-arrowdisabledcolor	 {arrowDisabledColor	  ArrowDisabledColor  w}
	-arrowstyle		 {arrowStyle		  ArrowStyle	      w}
	-autofinishediting	 {autoFinishEditing	  AutoFinishEditing   w}
	-autoscan		 {autoScan		  AutoScan	      w}
	-background		 {background		  Background	      b}
	-bg			 -background
	-borderwidth		 {borderWidth		  BorderWidth	      f}
	-bd			 -borderwidth
	-collapsecommand	 {collapseCommand	  CollapseCommand     w}
	-colorizecommand	 {colorizeCommand	  ColorizeCommand     w}
	-columns		 {columns		  Columns	      w}
	-columntitles		 {columnTitles		  ColumnTitles	      w}
	-cursor			 {cursor		  Cursor	      c}
	-customdragsource	 {customDragSource	  CustomDragSource    w}
	-disabledforeground	 {disabledForeground	  DisabledForeground  w}
	-displayondemand	 {displayOnDemand	  DisplayOnDemand     w}
	-editendcommand		 {editEndCommand	  EditEndCommand      w}
	-editendonfocusout	 {editEndOnFocusOut	  EditEndOnFocusOut   w}
	-editendonmodclick	 {editEndOnModClick	  EditEndOnModClick   w}
	-editselectedonly	 {editSelectedOnly	  EditSelectedOnly    w}
	-editstartcommand	 {editStartCommand	  EditStartCommand    w}
	-expandcommand		 {expandCommand		  ExpandCommand       w}
	-exportselection	 {exportSelection	  ExportSelection     w}
	-font			 {font			  Font		      b}
	-forceeditendcommand	 {forceEditEndCommand	  ForceEditEndCommand w}
	-foreground		 {foreground		  Foreground	      b}
	-fg			 -foreground
	-fullseparators		 {fullSeparators	  FullSeparators      w}
	-height			 {height		  Height	      w}
	-highlightbackground	 {highlightBackground	  HighlightBackground f}
	-highlightcolor		 {highlightColor	  HighlightColor      f}
	-highlightthickness	 {highlightThickness	  HighlightThickness  f}
	-incrarrowtype		 {incrArrowType		  IncrArrowType	      w}
	-instanttoggle		 {instantToggle		  InstantToggle	      w}
	-itembackground		 {itemBackground	  Background	      w}
	-itembg			 -itembackground
	-labelactivebackground	 {labelActiveBackground	  Foreground	      l}
	-labelactiveforeground	 {labelActiveForeground	  Background	      l}
	-labelbackground	 {labelBackground	  Background	      l}
	-labelbg		 -labelbackground
	-labelborderwidth	 {labelBorderWidth	  BorderWidth	      l}
	-labelbd		 -labelborderwidth
	-labelcommand		 {labelCommand		  LabelCommand	      w}
	-labelcommand2		 {labelCommand2		  LabelCommand2	      w}
	-labeldisabledforeground {labelDisabledForeground DisabledForeground  l}
	-labelfont		 {labelFont		  Font		      l}
	-labelforeground	 {labelForeground	  Foreground	      l}
	-labelfg		 -labelforeground
	-labelheight		 {labelHeight		  Height	      l}
	-labelpady		 {labelPadY		  Pad		      l}
	-labelrelief		 {labelRelief		  Relief	      l}
	-listvariable		 {listVariable		  Variable	      w}
	-movablecolumns	 	 {movableColumns	  MovableColumns      w}
	-movablerows		 {movableRows		  MovableRows	      w}
	-movecolumncursor	 {moveColumnCursor	  MoveColumnCursor    w}
	-movecursor		 {moveCursor		  MoveCursor	      w}
	-populatecommand	 {populateCommand	  PopulateCommand     w}
	-protecttitlecolumns	 {protectTitleColumns	  ProtectTitleColumns w}
	-relief			 {relief		  Relief	      f}
	-resizablecolumns	 {resizableColumns	  ResizableColumns    w}
	-resizecursor		 {resizeCursor		  ResizeCursor	      w}
	-selectbackground	 {selectBackground	  Foreground	      w}
	-selectborderwidth	 {selectBorderWidth	  BorderWidth	      w}
	-selectfiltercommand	 {selectFilterCommand	  SelectFilterCommand w}
	-selectforeground	 {selectForeground	  Background	      w}
	-selectmode		 {selectMode		  SelectMode	      w}
	-selecttype		 {selectType		  SelectType	      w}
	-setfocus		 {setFocus		  SetFocus	      w}
	-setgrid		 {setGrid		  SetGrid	      w}
	-showarrow		 {showArrow		  ShowArrow	      w}
	-showbusycursor		 {showBusyCursor	  ShowBusyCursor      w}
	-showeditcursor		 {showEditCursor	  ShowEditCursor      w}
	-showhorizseparator	 {showHorizSeparator	  ShowHorizSeparator  w}
	-showlabels		 {showLabels		  ShowLabels	      w}
	-showseparators		 {showSeparators	  ShowSeparators      w}
	-snipstring		 {snipString		  SnipString	      w}
	-sortcommand		 {sortCommand		  SortCommand	      w}
	-spacing		 {spacing		  Spacing	      w}
	-state			 {state			  State		      w}
	-stretch		 {stretch		  Stretch	      w}
	-stripebackground	 {stripeBackground	  Background	      w}
	-stripebg		 -stripebackground
	-stripeforeground	 {stripeForeground	  Foreground	      w}
	-stripefg		 -stripeforeground
	-stripeheight		 {stripeHeight		  StripeHeight	      w}
	-takefocus		 {takeFocus		  TakeFocus	      f}
	-targetcolor		 {targetColor		  TargetColor	      w}
	-tight			 {tight			  Tight		      w}
	-titlecolumns		 {titleColumns	  	  TitleColumns	      w}
	-tooltipaddcommand	 {tooltipAddCommand	  TooltipAddCommand   w}
	-tooltipdelcommand	 {tooltipDelCommand	  TooltipDelCommand   w}
	-treecolumn		 {treeColumn		  TreeColumn	      w}
	-treestyle		 {treeStyle		  TreeStyle	      w}
	-width			 {width			  Width		      w}
	-xmousewheelwindow	 {xMouseWheelWindow	  MouseWheelWindow    w}
	-xscrollcommand		 {xScrollCommand	  ScrollCommand	      w}
	-ymousewheelwindow	 {yMouseWheelWindow	  MouseWheelWindow    w}
	-yscrollcommand		 {yScrollCommand	  ScrollCommand	      w}
    }

    #
    # Extend the elements of the array configSpecs
    #
    extendConfigSpecs

    variable configOpts [lsort [array names configSpecs]]

    #
    # The array colConfigSpecs is used to handle column configuration options.
    # The names of its elements are the column configuration options for the
    # Tablelist widget class.  The value of an array element is either an alias
    # name or a list containing the database name and class.
    #
    #	Command-Line Name	{Database Name		Database Class	}
    #	-----------------------------------------------------------------
    #
    variable colConfigSpecs
    array set colConfigSpecs {
	-align			{""			""		}
	-allowduplicates	{""			""		}
	-background		{""			""		}
	-bg			-background
	-changesnipside		{""			""		}
	-changetitlesnipside	{""			""		}
	-editable		{""			""		}
	-editwindow		{""			""		}
	-font			{""			""		}
	-foreground		{""			""		}
	-fg			-foreground
	-formatcommand		{""			""		}
	-hide			{""			""		}
	-labelalign		{""			""		}
	-labelbackground	{""			""		}
	-labelbg		-labelbackground
	-labelborderwidth	{""			""		}
	-labelbd		-labelborderwidth
	-labelcommand		{""			""		}
	-labelcommand2		{""			""		}
	-labelfont		{""			""		}
	-labelforeground	{""			""		}
	-labelfg		-labelforeground
	-labelheight		{""			""		}
	-labelimage		{""			""		}
	-labelpady		{""			""		}
	-labelrelief		{""			""		}
	-labelvalign		{""			""		}
	-labelwindow		{""			""		}
	-maxwidth		{""			""		}
	-name			{""			""		}
	-resizable		{""			""		}
	-selectbackground	{""			""		}
	-selectfiltercommand	{""			""		}
	-selectforeground	{""			""		}
	-showarrow		{""			""		}
	-showlinenumbers	{""			""		}
	-sortcommand		{""			""		}
	-sortmode		{""			""		}
	-stretchable		{""			""		}
	-stretchwindow		{""			""		}
	-stripebackground	{""			""		}
	-stripeforeground	{""			""		}
	-text			{""			""		}
	-title			{""			""		}
	-valign			{""			""		}
	-width			{""			""		}
	-windowdestroy		{""			""		}
	-windowupdate		{""			""		}
	-wrap			{""			""		}
    }

    #
    # Extend some elements of the array colConfigSpecs
    #
    lappend colConfigSpecs(-align)			- left
    lappend colConfigSpecs(-allowduplicates)		- 1
    lappend colConfigSpecs(-changesnipside)		- 0
    lappend colConfigSpecs(-changetitlesnipside)	- 0
    lappend colConfigSpecs(-editable)			- 0
    lappend colConfigSpecs(-editwindow)			- entry
    lappend colConfigSpecs(-hide)			- 0
    lappend colConfigSpecs(-labelvalign)		- center
    lappend colConfigSpecs(-maxwidth)			- 0
    lappend colConfigSpecs(-resizable)			- 1
    lappend colConfigSpecs(-showarrow)			- 1
    lappend colConfigSpecs(-showlinenumbers)		- 0
    lappend colConfigSpecs(-sortmode)			- ascii
    lappend colConfigSpecs(-stretchable)		- 0
    lappend colConfigSpecs(-stretchwindow)		- 0
    lappend colConfigSpecs(-valign)			- center
    lappend colConfigSpecs(-width)			- 0
    lappend colConfigSpecs(-wrap)			- 0

    if {$usingTile} {
	unset colConfigSpecs(-labelbackground)
	unset colConfigSpecs(-labelbg)
	unset colConfigSpecs(-labelheight)
    }

    #
    # The array rowConfigSpecs is used to handle row configuration options.
    # The names of its elements are the row configuration options for the
    # Tablelist widget class.  The value of an array element is either an alias
    # name or a list containing the database name and class.
    #
    #	Command-Line Name	{Database Name	Database Class	}
    #	---------------------------------------------------------
    #
    variable rowConfigSpecs
    array set rowConfigSpecs {
	-background		{""		""		}
	-bg			-background
	-font			{""		""		}
	-foreground		{""		""		}
	-fg			-foreground
	-hide			{""		""		}
	-name			{""		""		}
	-selectable		{""		""		}
	-selectbackground	{""		""		}
	-selectforeground	{""		""		}
	-text			{""		""		}
    }

    #
    # Extend some elements of the array rowConfigSpecs
    #
    lappend rowConfigSpecs(-hide)	- 0
    lappend rowConfigSpecs(-selectable)	- 1

    #
    # The array hdr_rowConfigSpecs is used to handle header row configuration
    # options.  The names of its elements are the header row configuration
    # options for the Tablelist widget class.  The value of an array element is
    # either an alias name or a list containing the database name and class.
    #
    #	Command-Line Name	{Database Name	Database Class	}
    #	---------------------------------------------------------
    #
    variable hdr_rowConfigSpecs
    array set hdr_rowConfigSpecs {
	-background		{""		""		}
	-bg			-background
	-font			{""		""		}
	-foreground		{""		""		}
	-fg			-foreground
	-name			{""		""		}
	-text			{""		""		}
    }

    #
    # The array cellConfigSpecs is used to handle cell configuration options.
    # The names of its elements are the cell configuration options for the
    # Tablelist widget class.  The value of an array element is either an alias
    # name or a list containing the database name and class.
    #
    #	Command-Line Name	{Database Name	Database Class	}
    #	---------------------------------------------------------
    #
    variable cellConfigSpecs
    array set cellConfigSpecs {
	-background		{""		""		}
	-bg			-background
	-editable		{""		""		}
	-editwindow		{""		""		}
	-font			{""		""		}
	-foreground		{""		""		}
	-fg			-foreground
	-image			{""		""		}
	-imagebackground	{""		""		}
	-selectbackground	{""		""		}
	-selectforeground	{""		""		}
	-stretchwindow		{""		""		}
	-text			{""		""		}
	-valign			{""		""		}
	-window			{""		""		}
	-windowdestroy		{""		""		}
	-windowupdate		{""		""		}
    }

    #
    # Extend some elements of the array cellConfigSpecs
    #
    lappend cellConfigSpecs(-editable)		- 0
    lappend cellConfigSpecs(-editwindow)	- entry
    lappend cellConfigSpecs(-stretchwindow)	- 0
    lappend cellConfigSpecs(-valign)		- center

    #
    # The array hdr_cellConfigSpecs is used to handle header cell configuration
    # options.  The names of its elements are the header cell configuration
    # options for the Tablelist widget class.  The value of an array element is
    # either an alias name or a list containing the database name and class.
    #
    #	Command-Line Name	{Database Name	Database Class	}
    #	---------------------------------------------------------
    #
    variable hdr_cellConfigSpecs
    array set hdr_cellConfigSpecs {
	-background		{""		""		}
	-bg			-background
	-font			{""		""		}
	-foreground		{""		""		}
	-fg			-foreground
	-image			{""		""		}
	-imagebackground	{""		""		}
	-stretchwindow		{""		""		}
	-text			{""		""		}
	-valign			{""		""		}
	-window			{""		""		}
	-windowdestroy		{""		""		}
	-windowupdate		{""		""		}
    }

    #
    # Extend some elements of the array hdr_cellConfigSpecs
    #
    lappend hdr_cellConfigSpecs(-stretchwindow)	- 0
    lappend hdr_cellConfigSpecs(-valign)	- center

    #
    # Use a list to facilitate the handling of the command options
    #
    variable cmdOpts [list \
	activate activatecell applysorting attrib autoscrolltarget bbox \
	bodypath bodytag canceledediting cancelediting cellattrib cellbbox \
	cellcget cellconfigure cellindex cellselection cget childcount \
	childindex childkeys collapse collapseall columnattrib columncget \
	columnconfigure columncount columnindex columnwidth config \
	configcelllist configcells configcolumnlist configcolumns \
	configrowlist configrows configure containing containingcell \
	containingcolumn cornerlabelpath cornerpath curcellselection \
	curselection depth delete deletecolumns descendantcount dicttoitem \
	dumptofile dumptostring editcell editinfo editwinpath editwintag \
	embedcheckbutton embedcheckbuttons embedttkcheckbutton \
	embedttkcheckbuttons entrypath expand expandall expandedkeys \
	fillcolumn findcolumnname findrowname finishediting formatinfo get \
	getcells getcolumns getformatted getformattedcells \
	getformattedcolumns getfullkeys getkeys hasattrib hascellattrib \
	hascolumnattrib hasrowattrib header headerpath headertag \
	hidetargetmark imagelabelpath index insert insertchild \
	insertchildlist insertchildren insertcolumnlist insertcolumns \
	insertlist iselemsnipped isexpanded istitlesnipped isviewable \
	itemlistvar itemtodict labelpath labels labeltag labelwindowpath \
	loadfromfile loadfromstring move movecolumn nearest nearestcell \
	nearestcolumn noderow parentkey refreshsorting rejectinput \
	resetsortinfo restorecursor rowattrib rowcget rowconfigure scan \
	searchcolumn see seecell seecolumn selection separatorpath separators \
	setbusycursor showtargetmark size sort sortbycolumn sortbycolumnlist \
	sortcolumn sortcolumnlist sortorder sortorderlist stopautoscroll \
	targetmarkpath targetmarkpos togglecolumnhide togglerowhide \
	toplevelkey unsetattrib unsetcellattrib unsetcolumnattrib \
	unsetrowattrib viewablerowcount windowpath xview yview]

    proc restrictCmdOpts {} {
	variable cmdOpts

	if {[llength [info commands "::dict"]] == 0} {
	    foreach opt [list dicttoitem itemtodict] {
		set idx [lsearch -exact $cmdOpts $opt]
		set cmdOpts [lreplace $cmdOpts $idx $idx]
	    }
	}

	if {$::tk_version < 8.5} {
	    foreach opt [list header headerpath headertag] {
		set idx [lsearch -exact $cmdOpts $opt]
		set cmdOpts [lreplace $cmdOpts $idx $idx]
	    }
	}
    }
    restrictCmdOpts

    #
    # Use lists to facilitate the handling of miscellaneous options
    #
    variable activeStyles  [list frame none underline]
    variable alignments    [list left right center]
    variable arrowStyles   [list flat7x4 flat7x7 flat8x4 flat8x5 flat9x5 \
				 flat10x5 flat11x6 flat12x6 flat13x7 flat14x7 \
				 flat15x8 flat16x8 flatAngle7x4 flatAngle7x5 \
				 flatAngle9x5 flatAngle9x6 flatAngle10x6 \
				 flatAngle11x6 flatAngle13x7 flatAngle15x8 \
				 photo7x4 photo9x5 photo11x6 photo13x7 \
				 photo15x8 sunken8x7 sunken10x9 sunken12x11]
    variable arrowTypes    [list up down]
    variable colWidthOpts  [list -requested -stretched -total]
    variable cornerOpts	   [list -ne -sw]
    variable constrOpts    [list -all -nonhidden -viewable]
    variable expCollOpts   [list -fully -partly]
    variable fillColOpts   [list -text -image -window]
    variable findOpts      [list -descend -parent]
    variable gapTypeOpts   [list -any -horizontal -vertical]
    variable headerOpts    [list bbox cellattrib cellbbox cellcget \
				 cellconfigure cellindex configcelllist \
				 configcells configrowlist configrows \
				 containing containingcell delete \
				 embedcheckbutton embedcheckbuttons \
				 embedttkcheckbutton embedttkcheckbuttons \
				 fillcolumn findrowname get getcells \
				 getcolumns getformatted getformattedcells \
				 getformattedcolumns getfullkeys getkeys \
				 hascellattrib hasrowattrib imagelabelpath \
				 index insert insertlist iselemsnipped \
				 itemlistvar nearest nearestcell rowattrib \
				 rowcget rowconfigure size unsetcellattrib \
				 unsetrowattrib windowpath]
    variable labelWinTypes [list checkbutton ttk::checkbutton]
    variable scanOpts      [list mark dragto]
    variable searchOpts    [list -all -backwards -check -descend -exact \
				 -formatted -glob -nocase -not -numeric \
				 -parent -regexp -start]
    variable selectionOpts [list anchor clear includes set]
    variable selectTypes   [list row cell]
    variable sortModes     [list ascii asciinocase command dictionary \
				 integer real]
    variable sortOpts      [list -increasing -decreasing]
    variable sortOrders    [list increasing decreasing]
    variable states	   [list disabled normal]
    variable targetOpts    [list before inside]
    variable treeStyles    [list adwaita ambiance aqua aqua11 arc baghira \
				 bicolor100 bicolor125 bicolor150 bicolor175 \
				 bicolor200 blueMenta classic100 classic125 \
				 classic150 classic175 classic200 dust \
				 dustSand gtk klearlooks mate menta mint \
				 mint2 newWave oxygen1 oxygen2 phase plain100 \
				 plain125 plain150 plain175 plain200 plastik \
				 plastique radiance ubuntu ubuntu2 ubuntu3 \
				 ubuntuMate vistaAero vistaClassic white100 \
				 white125 white150 white175 white200 win7Aero \
				 win7Classic win10 winnative winxpBlue \
				 winxpOlive winxpSilver yuyo]
    variable valignments   [list center top bottom]

    if {$pngSupported} {
	lappend arrowStyles photo7x7
	set arrowStyles [lsort -dictionary $arrowStyles]
    }

    if {$svgSupported} {
	lappend arrowStyles photo0x0
	set arrowStyles [lsort -dictionary $arrowStyles]

	lappend treeStyles bicolor classic plain white
	set treeStyles [lsort $treeStyles]
    }

    #
    # Whether to support strictly Tk core listbox compatible bindings only
    #
    variable strictTk 0

    #
    # The array maxIndentDepths holds the current max.
    # indentation depth for every tree style in use
    #
    variable maxIndentDepths

    #
    # The array treeLabelWidths holds the widths of the indentation
    # labels for every tree style in use and every depth > 0
    #
    variable treeLabelWidths

    #
    # Define the command mapTabs, which returns the string
    # obtained by replacing all \t characters in its
    # argument with \\t, as well as the command isInteger
    #
    interp alias {} ::tablelist::mapTabs   {} string map {"\t" "\\t"}
    interp alias {} ::tablelist::isInteger {} string is integer -strict

    #
    # Define the command genVirtualEvent, needed because the -data option of the
    # "event generate" command was not available in Tk versions earlier than 8.5
    #
    if {[catch {event generate . <<__>> -data ""}] == 0} {
	proc genVirtualEvent {win event userData} {
	    event generate $win $event -data $userData
	}
    } else {
	proc genVirtualEvent {win event userData} {
	    event generate $win $event
	}
    }

    #
    # Define the variable pu holding the position unit "indices" or "chars"
    # to be used in text widget indices of the form <index>(+|-)<count>$pu
    #
    variable pu
    if {$::tk_version >= 8.5} {
	set pu indices
    } else {
	set pu chars
    }

    interp alias {} ::tablelist::configSubCmd \
		 {} ::tablelist::configureSubCmd
    interp alias {} ::tablelist::insertchildSubCmd \
		 {} ::tablelist::insertchildrenSubCmd
}

#
# Private procedure creating the default bindings
# ===============================================
#

#------------------------------------------------------------------------------
# tablelist::createBindings
#
# Creates the default bindings for the binding tags Tablelist, TablelistMain,
# TablelistWindow, TablelistKeyNav, TablelistBody, TablelistLabel,
# TablelistSubLabel, TablelistArrow, and TablelistEdit.
#------------------------------------------------------------------------------
proc tablelist::createBindings {} {
    #
    # Define some Tablelist class bindings
    #
    bind Tablelist <KeyPress> continue
    bind Tablelist <FocusIn> {
	if {[focus -lastfor %W] eq "%W"} {
	    if {[winfo exists [%W editwinpath]]} {
		focus [set tablelist::ns%W::data(editFocus)]
	    } else {
		focus [%W bodypath]
	    }
	}
    }
    bind Tablelist <FocusOut> {
	if {[%W cget -editendonfocusout]} {
	    tablelist::finishEditingOnFocusOut %W
	}
    }
    bind Tablelist <<TablelistSelect>>	{ event generate %W <<ListboxSelect>> }
    bind Tablelist <Destroy>		{ tablelist::cleanup %W }
    variable usingTile
    if {$usingTile} {
	bind Tablelist <Activate> {
	    after idle [list tablelist::updateBackgrounds %W 1 1]
	}
	bind Tablelist <Deactivate> {
	    after idle [list tablelist::updateBackgrounds %W 1 0]
	}
    }
    bind Tablelist <<TkWorldChanged>> {
	if {"%d" eq "FontChanged"} {
	    tablelist::updateFonts %W
	}
    }

    #
    # Define some bindings for the binding tag TablelistMain
    #
    bindtags . [linsert [bindtags .] 1 TablelistMain]
    bind TablelistMain <<ThemeChanged>> {
	after idle tablelist::handleThemeChangedEvent
    }
    variable winSys
    variable newAquaSupport
    if {$usingTile && $winSys eq "aqua" && $newAquaSupport} {
	foreach event {<<LightAqua>> <<DarkAqua>>} {
	    bind TablelistMain $event {
		if {![info exists tablelist::appearanceId]} {
		    set tablelist::appearanceId \
			[after 0 tablelist::handleAppearanceEvent]
		}
	    }
	}
    }

    #
    # Define a TablelistWindow class binding
    #
    bind TablelistWindow <Destroy>	{ tablelist::cleanupWindow %W }

    #
    # Define the binding tags TablelistKeyNav,
    # TablelistBody, and TablelistHeader
    #
    mwutil::defineKeyNav Tablelist
    defineTablelistBody
    defineTablelistHeader

    #
    # Define the virtual events <<Button3>> and <<ShiftButton3>>
    #
    event add <<Button3>> <Button-3>
    event add <<ShiftButton3>> <Shift-Button-3>
    if {$winSys eq "aqua"} {
	event add <<Button3>> <Control-Button-1>
	event add <<ShiftButton3>> <Shift-Control-Button-1>
    }

    #
    # Define the binding tags TablelistLabel,
    # TablelistSubLabel, and TablelistArrow
    #
    defineTablelistLabel
    defineTablelistSubLabel
    defineTablelistArrow

    #
    # Define the binding tag TablelistEdit if the file tablelistEdit.tcl exists
    #
    catch {defineTablelistEdit}
}

#
# Public procedure creating a new tablelist widget
# ================================================
#

#------------------------------------------------------------------------------
# tablelist::tablelist
#
# Creates a new tablelist widget whose name is specified as the first command-
# line argument, and configures it according to the options and their values
# given on the command line.  Returns the name of the newly created widget.
#------------------------------------------------------------------------------
proc tablelist::tablelist args {
    variable usingTile
    variable configSpecs
    variable configOpts
    variable cornerOpts
    variable helpLabel

    if {[llength $args] == 0} {
	mwutil::wrongNumArgs "tablelist pathName ?options?"
    }

    #
    # Create a frame of the class Tablelist
    #
    set win [lindex $args 0]
    if {[catch {
	if {$usingTile} {
	    ttk::frame $win -style Frame$win.TFrame -class Tablelist \
			    -height 0 -width 0 -padding 0
	} else {
	    tk::frame $win -class Tablelist -container 0 -height 0 -width 0 \
			   -padx 0 -pady 0
	}
    } result] != 0} {
	return -code error $result
    }

    #
    # Create a namespace within the current one to hold the data of the widget
    #
    namespace eval ns$win {
	#
	# The folowing array holds various data for this widget
	#
	variable data
	array set data {
	    arrowWidth		 8
	    arrowHeight		 4
	    hasListVar		 0
	    isDisabled		 0
	    ownsFocus		 0
	    charWidth		 1
	    hdrWidth		 0
	    activeRow		 0
	    activeCol		 0
	    anchorRow		 0
	    anchorCol		 0
	    seqNum		-1
	    hdr_seqNum		-1
	    keyList		 {}
	    hdr_keyList		 {}
	    itemList		 {}
	    hdr_itemList	 {}
	    itemCount		 0
	    hdr_itemCount	 0
	    lastRow		-1
	    hdr_lastRow		-1
	    colList		 {}
	    colCount		 0
	    lastCol		-1
	    treeCol		 0
	    topRowChanged	 0
	    winSizeChanged	 0
	    rightX		 0
	    btmY		 0
	    rowTagRefCount	 0
	    cellTagRefCount	 0
	    imgCount		 0
	    winCount		 0
	    indentCount		 0
	    labelClicked	 0
	    labelModifClicked	 0
	    arrowColList	 {}
	    sortColList		 {}
	    sortOrder		 ""
	    editKey		 ""
	    editRow		-1
	    editCol		-1
	    canceled		 0
	    fmtKey		 ""
	    fmtRow		-1
	    fmtCol		-1
	    prevCell		 ""
	    hdr_prevCell	 ""
	    prevCol		-1
	    forceAdjust		 0
	    fmtCmdFlagList	 {}
	    hasFmtCmds		 0
	    scrlColOffset	 0
	    cellsToReconfig	 {}
	    hdr_cellsToReconfig	 {}
	    nonViewableRowCount	 0
	    viewableRowList	 {-1}
	    hiddenColCount	 0
	    root-row		-1
	    root-parent		 ""
	    root-childList	 {}
	    keyToRowMapValid	 1
	    searchStartIdx	 0
	    keyBeingExpanded	 ""
	    justEntered		 0
	    inEditWin		 0
	    inActiveWin		 1
	    afterId		 ""
	    afterId2		 ""
	    x			 ""
	    y			 ""
	    xView		 {-1 -1}
	    yView		 {-1 -1}
	    rightCol		-1
	    btmRow		-1
	}

	#
	# The following array is used to hold arbitrary
	# attributes and their values for this widget
	#
	variable attribs

	#
	# The following array is used to hold the
	# selection state of the rows and cells
	#
	variable selStates

	#
	# The following array is used to hold the selection state of embedded
	# checkbutton windows created via createCkbtn and createTtkCkbtn
	#
	variable checkStates
    }

    #
    # Initialize some further components of data
    #
    upvar ::tablelist::ns${win}::data data
    foreach opt $configOpts {
	set data($opt) [lindex $configSpecs($opt) 3]
    }
    if {$usingTile} {
	variable themeDefaults
	set data(themeDefaults) [array get themeDefaults]
    }
    set data(colFontList)	[list $data(-font)]
    set data(listVarTraceCmd)	[list tablelist::listVarTrace $win]
    set data(bodyTag)		body$win
    set data(headerTag)		header$win
    set data(labelTag)		label$win
    set data(editwinTag)	editwin$win
    set data(body)		$win.body
    set data(bodyFrm)		$data(body).f
    set data(bodyFrmEd)		$data(bodyFrm).e
    set data(rowGap)		$data(body).g
    set data(hdr)		$win.hdr
    set data(hdrTxt)		$data(hdr).t
    set data(hdrTxtFrm)		$data(hdrTxt).f
    set data(hdrTxtFrmFrm)	$data(hdrTxtFrm).f	;# for the aqua theme
    set data(hdrTxtFrmCanv)	$data(hdrTxtFrm).c
    set data(hdrTxtFrmLbl)	$data(hdrTxtFrm).l
    set data(hdrFrm)		$data(hdr).f
    set data(hdrFrmFrm)		$data(hdrFrm).f		;# for the aqua theme
    set data(hdrFrmLbl)		$data(hdrFrm).l
    set data(colGap)		$data(hdr).g
    set data(lb)		$win.lb
    set data(vsep)		$win.vsep
    set data(hsep)		$win.hsep
    set data(topWin)		[winfo toplevel $win]

    #
    # Get unique names for the north-east and south-west corner
    # frames (which will be siblings of the tablelist widget)
    #
    foreach opt $cornerOpts {
	set data(cornerFrm$opt) ${win}_cf$opt
	for {set n 2} {[winfo exists $data(cornerFrm$opt)]} {incr n} {
	    set data(cornerFrm$opt) ${win}_cf$opt$n
	}
    }
    set data(cornerFrmFrm)	$data(cornerFrm-ne).f	;# for the aqua theme
    set data(cornerFrmFrmFrm)	$data(cornerFrmFrm).f	;# for the aqua theme
    set data(cornerLbl)		$data(cornerFrmFrm).l

    #
    # Create a child hierarchy used to hold the column labels.  The
    # labels will be created as children of the frame data(hdrTxtFrm),
    # which is embedded into the text widget data(hdrTxt) (in order
    # to make it scrollable), which in turn fills the frame data(hdr)
    # (whose width and height can be set arbitrarily in pixels).
    #

    set w $data(hdr)		;# header frame
    tk::frame $w -borderwidth 0 -container 0 -height 0 -highlightthickness 0 \
		 -padx 0 -pady 0 -relief flat -takefocus 0 -width 0
    bind $w <Configure> { tablelist::hdrConfigure %W %w }
    pack $w -fill x

    set w $data(hdrTxt)		;# text widget within the header frame
    text $w -borderwidth 0 -highlightthickness 0 -insertwidth 0 \
	    -padx 0 -pady 0 -state normal -takefocus 0 -wrap none
    catch {$w configure -undo 0};  # because of a text widget issue in Tk 8.6.6
    place $w -relheight 1.0 -relwidth 1.0
    bindtags $w [list $w $data(headerTag) TablelistHeader $data(topWin) all]

    tk::frame $data(hdrTxtFrm) -borderwidth 0 -container 0 -height 0 \
			       -highlightthickness 0 -padx 0 -pady 0 \
			       -relief flat -takefocus 0 -width 0
    $w window create 1.0 -window $data(hdrTxtFrm) -align top

    tk::frame $data(hdrTxtFrmFrm) -borderwidth 0 -container 0 -height 1 \
				  -highlightthickness 0 -padx 0 -pady 0 \
				  -relief flat -takefocus 0 -width 0
    place $data(hdrTxtFrmFrm) -relwidth 1.0

    $w tag configure noSpacings -spacing1 0 -spacing3 0
    $w tag add noSpacings 1.0
    $w tag configure tinyFont -font "Courier -1"
    $w tag add tinyFont 1.0 end
    $w tag configure itembg -background ""	;# initial setting
    $w tag configure stripe -background ""	;# for the priority order only
    $w tag configure active -borderwidth ""	;# for the priority order only
    $w tag configure disabled -foreground ""	;# initial setting
    $w tag configure hiddenCol -elide 1		;# used for hiding a column
    $w tag configure elidedCol -elide 1		;# used for horizontal scrolling

    set w $data(hdrFrm)		;# filler frame within the header frame
    tk::frame $w -borderwidth 0 -container 0 -height 0 -highlightthickness 0 \
		 -padx 0 -pady 0 -relief flat -takefocus 0 -width 0
    place $w -relwidth 1.0

    set w $data(hdrFrmFrm)	;# child of filler frame within the header frame
    tk::frame $w -borderwidth 0 -container 0 -height 1 -highlightthickness 0 \
		 -padx 0 -pady 0 -relief flat -takefocus 0 -width 0
    place $w -relwidth 1.0

    variable currentTheme
    set aquaTheme [expr {$usingTile && $currentTheme eq "aqua"}]

    set w $data(hdrFrmLbl)	;# label within the filler frame
    set x 0
    set y 0
    if {$usingTile} {
	ttk::label $w -style Tablelist.Heading -image "" -padding {1 1 1 1} \
		      -takefocus 0 -text "" -textvariable ""

	if {$aquaTheme} {
	    variable newAquaSupport
	    if {$newAquaSupport} {
		set y 4
	    } else {
		set x -1
	    }
	}
    } else {
	tk::label $w -bitmap "" -highlightthickness 0 -image "" \
		     -takefocus 0 -text "" -textvariable ""
    }
    place $w -x $x -y $y -relheight 1.0 -relwidth 1.0

    set w $data(cornerFrm-ne)	;# north-east corner frame
    tk::frame $w -borderwidth 0 -container 0 -height 0 -highlightthickness 0 \
		 -padx 0 -pady 0 -relief flat -takefocus 0 -width 0

    set w $data(cornerFrmFrm)	;# child frame of the north-east corner frame
    tk::frame $w -borderwidth 0 -container 0 -height 0 -highlightthickness 0 \
		 -padx 0 -pady 0 -relief flat -takefocus 0 -width 0
    place $w -relwidth 1.0

    set w $data(cornerFrmFrmFrm)  ;# grandchild frm of the north-east corner frm
    tk::frame $w -borderwidth 0 -container 0 -height 1 -highlightthickness 0 \
		 -padx 0 -pady 0 -relief flat -takefocus 0 -width 0
    place $w -relwidth 1.0

    if {$aquaTheme && $newAquaSupport} {
	set labelBg $themeDefaults(-labelbackground)
	foreach w [list $data(hdrTxtFrm) $data(hdrFrm) $data(cornerFrmFrm)] {
	    $w configure -background $labelBg
	}

	if {[tk::unsupported::MacWindowStyle isdark .]} {
	    set labelBorderBg #4b4b4b
	} else {
	    set labelBorderBg #c8c8c8
	}
	foreach w [list $data(hdrTxtFrmFrm) $data(hdrFrmFrm) \
		   $data(cornerFrmFrmFrm)] {
	    $w configure -background $labelBorderBg
	}
    }

    set w $data(cornerLbl)	;# label within the north-east corner frame
    set y 0
    if {$usingTile} {
	ttk::label $w -style Tablelist.Heading -image "" -padding {1 1 1 1} \
		      -takefocus 0 -text "" -textvariable ""

	if {$aquaTheme && $newAquaSupport} {
	    set y 4
	}
    } else {
	tk::label $w -bitmap "" -highlightthickness 0 -image "" \
		     -takefocus 0 -text "" -textvariable ""
    }
    place $w -y $y -relheight 1.0 -relwidth 1.0

    set w $data(cornerFrm-sw)	;# south-west corner frame
    if {$usingTile} {
	ttk::frame $w -borderwidth 0 -height 0 -padding 0 -relief flat \
		      -takefocus 0 -width 0
    } else {
	tk::frame $w -borderwidth 0 -container 0 -height 0 \
		     -highlightthickness 0 -padx 0 -pady 0 -relief flat \
		     -takefocus 0 -width 0
    }

    if {$::tk_version >= 8.5} {
	#
	# Create the upper horizontal separator
	# (to be placed just below the header rows)
	#
	set w $data(hsep)1
	if {$usingTile} {
	    ttk::separator $w -style Main$win.TSeparator \
			      -cursor $data(-cursor) -takefocus 0
	} else {
	    tk::frame $w -background $data(-foreground) -borderwidth 1 \
			 -container 0 -cursor $data(-cursor) -height 2 \
			 -highlightthickness 0 -padx 0 -pady 0 -relief sunken \
			 -takefocus 0
	}
    }

    #
    # Create the body text widget within the main frame
    #
    set w $data(body)
    text $w -borderwidth 0 -exportselection 0 -highlightthickness 0 \
	    -insertwidth 0 -padx 0 -pady 0 -state normal -takefocus 0 -wrap none
    catch {$w configure -undo 0};  # because of a text widget issue in Tk 8.6.6
    bind $w <Configure> { tablelist::bodyConfigure %W %w %h }
    pack $w -expand 1 -fill both
    bindtags $w [list $w $data(bodyTag) TablelistBody $data(topWin) \
		 TablelistKeyNav all]

    #
    # Create the "stripe", "select", "curRow", "active", "disabled", "redraw",
    # "hiddenRow", "elidedRow", "hiddenCol", and "elidedCol" tags in the body
    # text widget.  Don't use the built-in "sel" tag because on Windows the
    # selection in a text widget only becomes visible when the window gets
    # the input focus.  DO NOT CHANGE the order of creation of these tags!
    #
    $w tag configure itembg -background ""		     ;# initial setting
    $w tag configure stripe -background "" -foreground ""    ;# initial setting
    $w tag configure select -relief raised
    $w tag configure curRow -borderwidth 1 -relief raised
    $w tag configure active -borderwidth ""		     ;# initial setting
    $w tag configure disabled -foreground ""		     ;# initial setting
    $w tag configure redraw -relief sunken
    $w tag configure hiddenRow -elide 1		;# used for hiding a row
    $w tag configure elidedRow -elide 1		;# used when collapsing a node
    $w tag configure hiddenCol -elide 1		;# used for hiding a column
    $w tag configure elidedCol -elide 1		;# used for horizontal scrolling
    if {$::tk_version >= 8.5} {
	$w tag configure elidedWin -elide 1	;# used for eliding a window
    }

    #
    # Create two frames used to display a gap between two consecutive
    # rows/columns when moving a row/column interactively
    #
    variable scaled4
    tk::frame $data(rowGap) -borderwidth 1 -container 0 -highlightthickness 0 \
			    -relief sunken -takefocus 0 -height $scaled4
    tk::frame $data(colGap) -borderwidth 1 -container 0 -highlightthickness 0 \
			    -relief sunken -takefocus 0 -width $scaled4

    #
    # Create an unmanaged listbox child, used to handle the -setgrid option
    #
    listbox $data(lb)

    #
    # Create the bitmaps needed to display the sort ranks
    #
    createSortRankImgs $win

    #
    # Take into account that some scripts start by
    # destroying all children of the root window
    #
    if {![winfo exists $helpLabel]} {
	if {$usingTile} {
	    ttk::label $helpLabel -takefocus 0
	} else {
	    tk::label $helpLabel -takefocus 0
	}
    }

    #
    # Configure the widget according to the command-line
    # arguments and to the available database options
    #
    if {[catch {
	mwutil::configureWidget $win configSpecs tablelist::doConfig \
				tablelist::doCget [lrange $args 1 end] 1
    } result] != 0} {
	destroy $win
	return -code error $result
    }

    #
    # Move the original widget command into the current namespace and
    # create an alias of the original name for a new widget procedure
    #
    rename ::$win $win
    interp alias {} ::$win {} tablelist::tablelistWidgetCmd $win

    #
    # Register a callback to be invoked whenever the PRIMARY
    # selection is owned by the window win and someone
    # attempts to retrieve it as a UTF8_STRING or STRING
    #
    selection handle -type UTF8_STRING $win \
	[list ::tablelist::fetchSelection $win]
    selection handle -type STRING $win \
	[list ::tablelist::fetchSelection $win]

    #
    # Set a trace on the array elements data(activeRow),
    # data(avtiveCol), and data(-selecttype)
    #
    foreach name {activeRow activeCol -selecttype} {
	trace add variable data($name) write [list tablelist::activeTrace $win]
    }

    trace add variable ::tablelist::ns${win}::checkStates write \
	[list tablelist::checkStatesTrace $win]

    after 1000 [list tablelist::purgeWidgets $win]

    return $win
}

#
# Private procedures implementing the tablelist widget command
# ============================================================
#

#------------------------------------------------------------------------------
# tablelist::tablelistWidgetCmd
#
# Processes the Tcl command corresponding to a tablelist widget.
#------------------------------------------------------------------------------
proc tablelist::tablelistWidgetCmd {win args} {
    if {[llength $args] == 0} {
	mwutil::wrongNumArgs "$win option ?arg arg ...?"
    }

    variable cmdOpts
    set cmd [mwutil::fullOpt "option" [lindex $args 0] $cmdOpts]
    return [${cmd}SubCmd $win [lrange $args 1 end]]
}

#------------------------------------------------------------------------------
# tablelist::activateSubCmd
#------------------------------------------------------------------------------
proc tablelist::activateSubCmd {win argList} {
    if {[llength $argList] != 1} {
	mwutil::wrongNumArgs "$win activate index"
    }

    upvar ::tablelist::ns${win}::data data
    if {$data(isDisabled)} {
	return ""
    }

    synchronize $win
    displayItems $win
    set index [rowIndex $win [lindex $argList 0] 0]

    #
    # Adjust the index to fit within the existing viewable items
    #
    adjustRowIndex $win index 1

    set data(activeRow) $index
    return ""
}

#------------------------------------------------------------------------------
# tablelist::activatecellSubCmd
#------------------------------------------------------------------------------
proc tablelist::activatecellSubCmd {win argList} {
    if {[llength $argList] != 1} {
	mwutil::wrongNumArgs "$win activatecell cellIndex"
    }

    upvar ::tablelist::ns${win}::data data
    if {$data(isDisabled)} {
	return ""
    }

    synchronize $win
    displayItems $win
    foreach {row col} [cellIndex $win [lindex $argList 0] 0] {}

    #
    # Adjust the row and column indices to fit
    # within the existing viewable elements
    #
    adjustRowIndex $win row 1
    adjustColIndex $win col 1

    set data(activeRow) $row
    set data(activeCol) $col
    return ""
}

#------------------------------------------------------------------------------
# tablelist::applysortingSubCmd
#------------------------------------------------------------------------------
proc tablelist::applysortingSubCmd {win argList} {
    if {[llength $argList] != 1} {
	mwutil::wrongNumArgs "$win applysorting itemList"
    }

    return [sortList $win [lindex $argList 0]]
}

#------------------------------------------------------------------------------
# tablelist::attribSubCmd
#------------------------------------------------------------------------------
proc tablelist::attribSubCmd {win argList} {
    return [mwutil::attribSubCmd $win "widget" $argList]
}

#------------------------------------------------------------------------------
# tablelist::autoscrolltargetSubCmd
#------------------------------------------------------------------------------
proc tablelist::autoscrolltargetSubCmd {win argList} {
    if {[llength $argList] != 3} {
	mwutil::wrongNumArgs "$win autoscrolltarget event x y"
    }

    set event [lindex $argList 0]
    ##nagelfar ignore
    set x [format "%d" [lindex $argList 1]]
    ##nagelfar ignore
    set y [format "%d" [lindex $argList 2]]

    synchronize $win
    displayItems $win

    upvar ::tablelist::ns${win}::data data
    if {$event eq "<<DropEnter>>" || $event eq "enter"} {
	set data(x) ""
	set data(y) ""
	after cancel $data(afterId2)
	return ""
    }

    if {$data(x) eq "" || $data(y) eq ""} {
	set data(x) $x
	set data(y) $y
    }
    set prevX $data(x)
    set prevY $data(y)
    set data(x) $x
    set data(y) $y

    set w [::$win bodypath]
    set wX [winfo x $w]
    set wY [winfo y $w]
    incr x -$wX						;# relative to the body
    incr y -$wY						;# relative to the body
    incr prevX -$wX					;# relative to the body
    incr prevY -$wY					;# relative to the body

    variable scaled4
    set minX [expr {[minScrollableX $win] + $scaled4}]	;# relative to the body
    set minY $scaled4					;# relative to the body
    set maxX [expr {[winfo width  $w] - 1 - $scaled4}]	;# relative to the body
    set maxY [expr {[winfo height $w] - 1 - $scaled4}]	;# relative to the body

    if {($y > $maxY && $prevY <= $maxY) ||
	($y < $minY && $prevY >= $minY) ||
	($x > $maxX && $prevX <= $maxX) ||
	($x < $minX && $prevX >= $minX)} {
	autoScan2 $win 0
    } elseif {($y <= $maxY && $prevY > $maxY) ||
	      ($y >= $minY && $prevY < $minY) ||
	      ($x <= $maxX && $prevX > $maxX) ||
	      ($x >= $minX && $prevX < $minX)} {
	after cancel $data(afterId2)
    }

    return ""
}

#------------------------------------------------------------------------------
# tablelist::bboxSubCmd
#------------------------------------------------------------------------------
proc tablelist::bboxSubCmd {win argList} {
    if {[llength $argList] != 1} {
	mwutil::wrongNumArgs "$win bbox index"
    }

    synchronize $win
    displayItems $win
    set index [rowIndex $win [lindex $argList 0] 0]

    upvar ::tablelist::ns${win}::data data
    set w $data(body)
    set dlineinfo [$w dlineinfo [expr {$index + 1}].0]
    if {$data(itemCount) == 0 || [llength $dlineinfo] == 0} {
	return {}
    }

    set spacing1 [$w cget -spacing1]
    set spacing3 [$w cget -spacing3]
    foreach {x y width height baselinePos} $dlineinfo {}
    incr height -[expr {$spacing1 + $spacing3}]
    if {$height < 0} {
	set height 0
    }
    return [list [expr {$x + [winfo x $w]}] \
		 [expr {$y + [winfo y $w] + $spacing1}] $width $height]
}

#------------------------------------------------------------------------------
# tablelist::bodypathSubCmd
#------------------------------------------------------------------------------
proc tablelist::bodypathSubCmd {win argList} {
    if {[llength $argList] != 0} {
	mwutil::wrongNumArgs "$win bodypath"
    }

    upvar ::tablelist::ns${win}::data data
    return $data(body)
}

#------------------------------------------------------------------------------
# tablelist::bodytagSubCmd
#------------------------------------------------------------------------------
proc tablelist::bodytagSubCmd {win argList} {
    if {[llength $argList] != 0} {
	mwutil::wrongNumArgs "$win bodytag"
    }

    upvar ::tablelist::ns${win}::data data
    return $data(bodyTag)
}

#------------------------------------------------------------------------------
# tablelist::cancelededitingSubCmd
#------------------------------------------------------------------------------
proc tablelist::cancelededitingSubCmd {win argList} {
    if {[llength $argList] != 0} {
	mwutil::wrongNumArgs "$win canceledediting"
    }

    upvar ::tablelist::ns${win}::data data
    return $data(canceled)
}

#------------------------------------------------------------------------------
# tablelist::canceleditingSubCmd
#------------------------------------------------------------------------------
proc tablelist::canceleditingSubCmd {win argList} {
    if {[llength $argList] != 0} {
	mwutil::wrongNumArgs "$win cancelediting"
    }

    synchronize $win
    return [doCancelEditing $win]
}

#------------------------------------------------------------------------------
# tablelist::cellattribSubCmd
#------------------------------------------------------------------------------
proc tablelist::cellattribSubCmd {win argList} {
    if {[llength $argList] < 1} {
	mwutil::wrongNumArgs \
		"$win cellattrib cellIndex ?name? ?value name value ...?"
    }

    synchronize $win
    foreach {row col} [cellIndex $win [lindex $argList 0] 1] {}
    upvar ::tablelist::ns${win}::data data
    set key [lindex $data(keyList) $row]
    return [mwutil::attribSubCmd $win $key,$col [lrange $argList 1 end]]
}

#------------------------------------------------------------------------------
# tablelist::cellbboxSubCmd
#------------------------------------------------------------------------------
proc tablelist::cellbboxSubCmd {win argList} {
    if {[llength $argList] != 1} {
	mwutil::wrongNumArgs "$win cellbbox cellIndex"
    }

    synchronize $win
    foreach {row col} [cellIndex $win [lindex $argList 0] 0] {}
    upvar ::tablelist::ns${win}::data data
    if {$row < 0 || $row > $data(lastRow) ||
	$col < 0 || $col > $data(lastCol)} {
	return {}
    }

    set bbox [bboxSubCmd $win $row]
    if {[llength $bbox] == 0} {
	return {}
    }

    foreach {x y width height} $bbox {}
    set w $data(hdrTxtFrmLbl)$col
    return [list [expr {[winfo rootx $w] - [winfo rootx $win]}] $y \
		 [winfo width $w] $height]
}

#------------------------------------------------------------------------------
# tablelist::cellcgetSubCmd
#------------------------------------------------------------------------------
proc tablelist::cellcgetSubCmd {win argList} {
    if {[llength $argList] != 2} {
	mwutil::wrongNumArgs "$win cellcget cellIndex option"
    }

    synchronize $win
    foreach {row col} [cellIndex $win [lindex $argList 0] 1] {}
    variable cellConfigSpecs
    set opt [mwutil::fullConfigOpt [lindex $argList 1] cellConfigSpecs]
    return [doCellCget $row $col $win $opt]
}

#------------------------------------------------------------------------------
# tablelist::cellconfigureSubCmd
#------------------------------------------------------------------------------
proc tablelist::cellconfigureSubCmd {win argList} {
    if {[llength $argList] < 1} {
	mwutil::wrongNumArgs \
		"$win cellconfigure cellIndex ?option? ?value option value ...?"
    }

    synchronize $win
    variable cellConfigSpecs
    foreach {row col} [cellIndex $win [lindex $argList 0] 1] {}
    return [mwutil::configureSubCmd $win cellConfigSpecs \
	    "tablelist::doCellConfig $row $col" \
	    "tablelist::doCellCget $row $col" [lrange $argList 1 end]]
}

#------------------------------------------------------------------------------
# tablelist::cellindexSubCmd
#------------------------------------------------------------------------------
proc tablelist::cellindexSubCmd {win argList} {
    if {[llength $argList] != 1} {
	mwutil::wrongNumArgs "$win cellindex cellIndex"
    }

    synchronize $win
    return [join [cellIndex $win [lindex $argList 0] 0] ","]
}

#------------------------------------------------------------------------------
# tablelist::cellselectionSubCmd
#------------------------------------------------------------------------------
proc tablelist::cellselectionSubCmd {win argList} {
    set argCount [llength $argList]
    if {$argCount < 2 || $argCount > 3} {
	mwutil::wrongNumArgs \
		"$win cellselection option firstCellIndex lastCellIndex" \
		"$win cellselection option cellIndexList"
    }

    synchronize $win
    variable selectionOpts
    set opt [mwutil::fullOpt "option" [lindex $argList 0] $selectionOpts]
    set first [lindex $argList 1]

    switch $opt {
	anchor -
	includes {
	    if {$argCount != 2} {
		mwutil::wrongNumArgs "$win cellselection $opt cellIndex"
	    }
	    foreach {row col} [cellIndex $win $first 0] {}
	    return [cellSelection $win $opt $row $col $row $col]
	}

	clear -
	set {
	    if {$argCount == 2} {
		foreach elem $first {
		    foreach {row col} [cellIndex $win $elem 0] {}
		    cellSelection $win $opt $row $col $row $col
		}
	    } else {
		foreach {firstRow firstCol} [cellIndex $win $first 0] {}
		foreach {lastRow lastCol} \
			[cellIndex $win [lindex $argList 2] 0] {}
		cellSelection $win $opt $firstRow $firstCol $lastRow $lastCol
	    }

	    updateColorsWhenIdle $win
	    invokeMotionHandler $win
	    return ""
	}
    }
}

#------------------------------------------------------------------------------
# tablelist::cgetSubCmd
#------------------------------------------------------------------------------
proc tablelist::cgetSubCmd {win argList} {
    if {[llength $argList] != 1} {
	mwutil::wrongNumArgs "$win cget option"
    }

    #
    # Return the value of the specified configuration option
    #
    variable configSpecs
    set opt [mwutil::fullConfigOpt [lindex $argList 0] configSpecs]
    return [doCget $win $opt]
}

#------------------------------------------------------------------------------
# tablelist::childcountSubCmd
#------------------------------------------------------------------------------
proc tablelist::childcountSubCmd {win argList} {
    if {[llength $argList] != 1} {
	mwutil::wrongNumArgs "$win childcount nodeIndex"
    }

    synchronize $win
    set key [nodeIndexToKey $win [lindex $argList 0]]
    upvar ::tablelist::ns${win}::data data
    return [llength $data($key-childList)]
}

#------------------------------------------------------------------------------
# tablelist::childindexSubCmd
#------------------------------------------------------------------------------
proc tablelist::childindexSubCmd {win argList} {
    if {[llength $argList] != 1} {
	mwutil::wrongNumArgs "$win childindex index"
    }

    synchronize $win
    set row [rowIndex $win [lindex $argList 0] 0 1]
    upvar ::tablelist::ns${win}::data data
    set key [lindex $data(keyList) $row]
    set parentKey $data($key-parent)
    return [lsearch -exact $data($parentKey-childList) $key]
}

#------------------------------------------------------------------------------
# tablelist::childkeysSubCmd
#------------------------------------------------------------------------------
proc tablelist::childkeysSubCmd {win argList} {
    if {[llength $argList] != 1} {
	mwutil::wrongNumArgs "$win childkeys nodeIndex"
    }

    synchronize $win
    set key [nodeIndexToKey $win [lindex $argList 0]]
    upvar ::tablelist::ns${win}::data data
    return $data($key-childList)
}

#------------------------------------------------------------------------------
# tablelist::collapseSubCmd
#------------------------------------------------------------------------------
proc tablelist::collapseSubCmd {win argList} {
    set argCount [llength $argList]
    if {$argCount < 1 || $argCount > 2} {
	mwutil::wrongNumArgs "$win collapse indexList ?-fully|-partly?"
    }

    synchronize $win
    displayItems $win
    set indexList {}
    foreach elem [lindex $argList 0] {
	set index [rowIndex $win $elem 0 1]
	lappend indexList $index
    }
    set indexList [lsort -integer -decreasing $indexList]

    if {$argCount == 1} {
	set fullCollapsion 1
    } else {
	variable expCollOpts
	set opt [mwutil::fullOpt "option" [lindex $argList 1] $expCollOpts]
	set fullCollapsion [expr {$opt eq "-fully"}]
    }

    set callerProc [lindex [info level -1] 0]
    set collapsingAll [expr {$callerProc eq "collapseallSubCmd"}]
    upvar ::tablelist::ns${win}::data data
    set callCollapseCmd [expr {$data(-collapsecommand) ne ""}]
    set col $data(treeCol)
    set w $data(body)
    set processed 0

    foreach index $indexList {
	set key [lindex $data(keyList) $index]
	if {![info exists data($key,$col-indent)]} {
	    continue
	}

	if {$callCollapseCmd} {
	    uplevel #0 $data(-collapsecommand) [list $win $index]
	}

	if {$collapsingAll} {
	    #
	    # Change the indentation image from
	    # the expanded to the collapsed one
	    #
	    set data($key,$col-indent) [string map \
		{"expanded" "collapsed"} $data($key,$col-indent)]
	} else {
	    #
	    # Set the indentation image to the collapsed one
	    #
	    set data($key,$col-indent) [string map \
		{"indented" "collapsed" "expanded" "collapsed"} \
		$data($key,$col-indent)]
	}
	if {[winfo exists $w.ind_$key,$col]} {
	    set idx [string last "g" $data($key,$col-indent)]
	    set img [string range $data($key,$col-indent) 0 $idx]
	    $w.ind_$key,$col configure -image $img
	}

	if {[llength $data($key-childList)] == 0} {
	    continue
	}

	#
	# Elide the descendants of this item
	#
	set fromRow [expr {$index + 1}]
	set toRow [nodeRow $win $key end]
	for {set row $fromRow} {$row < $toRow} {incr row} {
	    doRowConfig $row $win -elide 1

	    if {$fullCollapsion} {
		set descKey [lindex $data(keyList) $row]
		if {[llength $data($descKey-childList)] != 0} {
		    if {$callCollapseCmd} {
			uplevel #0 $data(-collapsecommand) [list $win $row]
		    }

		    #
		    # Change the descendant's indentation image
		    # from the expanded to the collapsed one
		    #
		    set data($descKey,$col-indent) [string map \
			{"expanded" "collapsed"} $data($descKey,$col-indent)]
		    if {[winfo exists $w.ind_$descKey,$col]} {
			set idx [string last "g" $data($descKey,$col-indent)]
			set img [string range $data($descKey,$col-indent) \
				 0 $idx]
			$w.ind_$descKey,$col configure -image $img
		    }
		}
	    }
	}

	set processed 1
    }

    if {$processed} {
	adjustRowIndex $win data(anchorRow) 1

	set activeRow $data(activeRow)
	adjustRowIndex $win activeRow 1
	set data(activeRow) $activeRow

	update idletasks
	if {[destroyed $win]} {
	    return ""
	}

	hdr_adjustElidedText $win
	hdr_updateColors $win
	adjustElidedText $win
	redisplayVisibleItems $win
	makeStripes $win
	adjustSepsWhenIdle $win
	updateVScrlbarWhenIdle $win
    }

    return ""
}

#------------------------------------------------------------------------------
# tablelist::collapseallSubCmd
#------------------------------------------------------------------------------
proc tablelist::collapseallSubCmd {win argList} {
    set argCount [llength $argList]
    if {$argCount > 1} {
	mwutil::wrongNumArgs "$win collapseall ?-fully|-partly?"
    }

    if {$argCount == 0} {
	set opt "-fully"
    } else {
	variable expCollOpts
	set opt [mwutil::fullOpt "option" [lindex $argList 0] $expCollOpts]
    }

    synchronize $win
    upvar ::tablelist::ns${win}::data data
    return [collapseSubCmd $win [list $data(root-childList) $opt]]
}

#------------------------------------------------------------------------------
# tablelist::columnattribSubCmd
#------------------------------------------------------------------------------
proc tablelist::columnattribSubCmd {win argList} {
    if {[llength $argList] < 1} {
	mwutil::wrongNumArgs \
		"$win columnattrib columnIndex ?name? ?value name value ...?"
    }

    set col [colIndex $win [lindex $argList 0] 1]
    return [mwutil::attribSubCmd $win $col [lrange $argList 1 end]]
}

#------------------------------------------------------------------------------
# tablelist::columncgetSubCmd
#------------------------------------------------------------------------------
proc tablelist::columncgetSubCmd {win argList} {
    if {[llength $argList] != 2} {
	mwutil::wrongNumArgs "$win columncget columnIndex option"
    }

    set col [colIndex $win [lindex $argList 0] 1]
    variable colConfigSpecs
    set opt [mwutil::fullConfigOpt [lindex $argList 1] colConfigSpecs]
    return [doColCget $col $win $opt]
}

#------------------------------------------------------------------------------
# tablelist::columnconfigureSubCmd
#------------------------------------------------------------------------------
proc tablelist::columnconfigureSubCmd {win argList} {
    if {[llength $argList] < 1} {
	mwutil::wrongNumArgs \
		"$win columnconfigure columnIndex ?option? ?value\
		 option value ...?"
    }

    synchronize $win
    variable colConfigSpecs
    set col [colIndex $win [lindex $argList 0] 1]
    return [mwutil::configureSubCmd $win colConfigSpecs \
	    "tablelist::doColConfig $col" "tablelist::doColCget $col" \
	    [lrange $argList 1 end]]
}

#------------------------------------------------------------------------------
# tablelist::columncountSubCmd
#------------------------------------------------------------------------------
proc tablelist::columncountSubCmd {win argList} {
    if {[llength $argList] != 0} {
	mwutil::wrongNumArgs "$win columncount"
    }

    upvar ::tablelist::ns${win}::data data
    return $data(colCount)
}

#------------------------------------------------------------------------------
# tablelist::columnindexSubCmd
#------------------------------------------------------------------------------
proc tablelist::columnindexSubCmd {win argList} {
    if {[llength $argList] != 1} {
	mwutil::wrongNumArgs "$win columnindex columnIndex"
    }

    return [colIndex $win [lindex $argList 0] 0]
}

#------------------------------------------------------------------------------
# tablelist::columnwidthSubCmd
#------------------------------------------------------------------------------
proc tablelist::columnwidthSubCmd {win argList} {
    set argCount [llength $argList]
    if {$argCount < 1 || $argCount > 2} {
	mwutil::wrongNumArgs \
		"$win columnwidth columnIndex ?-requested|-stretched|-total?"
    }

    synchronize $win
    displayItems $win
    set col [colIndex $win [lindex $argList 0] 1]
    if {$argCount == 1} {
	set opt -requested
    } else {
	variable colWidthOpts
	set opt [mwutil::fullOpt "option" [lindex $argList 1] $colWidthOpts]
    }
    return [colWidth $win $col $opt]
}

#------------------------------------------------------------------------------
# tablelist::configcelllistSubCmd
#------------------------------------------------------------------------------
proc tablelist::configcelllistSubCmd {win argList} {
    if {[llength $argList] != 1} {
	mwutil::wrongNumArgs "$win configcelllist cellConfigSpecList"
    }

    return [configcellsSubCmd $win [lindex $argList 0]]
}

#------------------------------------------------------------------------------
# tablelist::configcellsSubCmd
#------------------------------------------------------------------------------
proc tablelist::configcellsSubCmd {win argList} {
    synchronize $win
    variable cellConfigSpecs

    set argCount [llength $argList]
    foreach {cell opt val} $argList {
	if {$argCount == 1} {
	    return -code error "option and value for \"$cell\" missing"
	} elseif {$argCount == 2} {
	    return -code error "value for \"$opt\" missing"
	}
	foreach {row col} [cellIndex $win $cell 1] {}
	mwutil::configureWidget $win cellConfigSpecs \
		"tablelist::doCellConfig $row $col" \
		"tablelist::doCellCget $row $col" [list $opt $val] 0
	incr argCount -3
    }

    upvar ::tablelist::ns${win}::data data
    if {$data(-showeditcursor)} {
	invokeMotionHandler $win
    }

    return ""
}

#------------------------------------------------------------------------------
# tablelist::configcolumnlistSubCmd
#------------------------------------------------------------------------------
proc tablelist::configcolumnlistSubCmd {win argList} {
    if {[llength $argList] != 1} {
	mwutil::wrongNumArgs "$win configcolumnlist columnConfigSpecList"
    }

    return [configcolumnsSubCmd $win [lindex $argList 0]]
}

#------------------------------------------------------------------------------
# tablelist::configcolumnsSubCmd
#------------------------------------------------------------------------------
proc tablelist::configcolumnsSubCmd {win argList} {
    synchronize $win
    variable colConfigSpecs

    set argCount [llength $argList]
    foreach {col opt val} $argList {
	if {$argCount == 1} {
	    return -code error "option and value for \"$col\" missing"
	} elseif {$argCount == 2} {
	    return -code error "value for \"$opt\" missing"
	}
	set col [colIndex $win $col 1]
	mwutil::configureWidget $win colConfigSpecs \
		"tablelist::doColConfig $col" "tablelist::doColCget $col" \
		[list $opt $val] 0
	incr argCount -3
    }

    return ""
}

#------------------------------------------------------------------------------
# tablelist::configrowlistSubCmd
#------------------------------------------------------------------------------
proc tablelist::configrowlistSubCmd {win argList} {
    if {[llength $argList] != 1} {
	mwutil::wrongNumArgs "$win configrowlist rowConfigSpecList"
    }

    return [configrowsSubCmd $win [lindex $argList 0]]
}

#------------------------------------------------------------------------------
# tablelist::configrowsSubCmd
#------------------------------------------------------------------------------
proc tablelist::configrowsSubCmd {win argList} {
    synchronize $win
    variable rowConfigSpecs

    set argCount [llength $argList]
    foreach {rowSpec opt val} $argList {
	if {$argCount == 1} {
	    return -code error "option and value for \"$rowSpec\" missing"
	} elseif {$argCount == 2} {
	    return -code error "value for \"$opt\" missing"
	}
	set row [rowIndex $win $rowSpec 0 1]
	mwutil::configureWidget $win rowConfigSpecs \
		"tablelist::doRowConfig $row" "tablelist::doRowCget $row" \
		[list $opt $val] 0
	incr argCount -3
    }

    return ""
}

#------------------------------------------------------------------------------
# tablelist::configureSubCmd
#------------------------------------------------------------------------------
proc tablelist::configureSubCmd {win argList} {
    variable configSpecs
    return [mwutil::configureSubCmd $win configSpecs tablelist::doConfig \
	    tablelist::doCget $argList]
}

#------------------------------------------------------------------------------
# tablelist::containingSubCmd
#------------------------------------------------------------------------------
proc tablelist::containingSubCmd {win argList} {
    if {[llength $argList] != 1} {
	mwutil::wrongNumArgs "$win containing y"
    }

    ##nagelfar ignore
    set y [format "%d" [lindex $argList 0]]
    synchronize $win
    displayItems $win
    return [containingRow $win $y]
}

#------------------------------------------------------------------------------
# tablelist::containingcellSubCmd
#------------------------------------------------------------------------------
proc tablelist::containingcellSubCmd {win argList} {
    if {[llength $argList] != 2} {
	mwutil::wrongNumArgs "$win containingcell x y"
    }

    ##nagelfar ignore
    set x [format "%d" [lindex $argList 0]]
    ##nagelfar ignore
    set y [format "%d" [lindex $argList 1]]
    synchronize $win
    displayItems $win
    return [containingRow $win $y],[containingCol $win $x]
}

#------------------------------------------------------------------------------
# tablelist::containingcolumnSubCmd
#------------------------------------------------------------------------------
proc tablelist::containingcolumnSubCmd {win argList} {
    if {[llength $argList] != 1} {
	mwutil::wrongNumArgs "$win containingcolumn x"
    }

    ##nagelfar ignore
    set x [format "%d" [lindex $argList 0]]
    synchronize $win
    displayItems $win
    return [containingCol $win $x]
}

#------------------------------------------------------------------------------
# tablelist::cornerlabelpathSubCmd
#------------------------------------------------------------------------------
proc tablelist::cornerlabelpathSubCmd {win argList} {
    if {[llength $argList] != 0} {
	mwutil::wrongNumArgs "$win cornerlabelpath"
    }

    upvar ::tablelist::ns${win}::data data
    return $data(cornerLbl)
}

#------------------------------------------------------------------------------
# tablelist::cornerpathSubCmd
#------------------------------------------------------------------------------
proc tablelist::cornerpathSubCmd {win argList} {
    set argCount [llength $argList]
    if {$argCount > 1} {
	mwutil::wrongNumArgs "$win cornerpath ?-ne|-sw?"
    }

    if {$argCount == 0} {
	set opt "-ne"
    } else {
	variable cornerOpts
	set opt [mwutil::fullOpt "option" [lindex $argList 0] $cornerOpts]
    }

    upvar ::tablelist::ns${win}::data data
    return $data(cornerFrm$opt)
}

#------------------------------------------------------------------------------
# tablelist::curcellselectionSubCmd
#------------------------------------------------------------------------------
proc tablelist::curcellselectionSubCmd {win argList} {
    set argCount [llength $argList]
    if {$argCount > 1} {
	mwutil::wrongNumArgs \
		"$win curcellselection ?-all|-nonhidden|-viewable?"
    }

    if {$argCount == 0} {
	set constraint 0
    } else {
	variable constrOpts
	set opt [mwutil::fullOpt "option" [lindex $argList 0] $constrOpts]
	set constraint [lsearch -exact $constrOpts $opt]
    }


    synchronize $win
    return [curCellSelection $win $constraint]
}

#------------------------------------------------------------------------------
# tablelist::curselectionSubCmd
#------------------------------------------------------------------------------
proc tablelist::curselectionSubCmd {win argList} {
    set argCount [llength $argList]
    if {$argCount > 1} {
	mwutil::wrongNumArgs \
		"$win curselection ?-all|-nonhidden|-viewable?"
    }

    if {$argCount == 0} {
	set constraint 0
    } else {
	variable constrOpts
	set opt [mwutil::fullOpt "option" [lindex $argList 0] $constrOpts]
	set constraint [lsearch -exact $constrOpts $opt]
    }

    synchronize $win
    return [curSelection $win $constraint]
}

#------------------------------------------------------------------------------
# tablelist::deleteSubCmd
#------------------------------------------------------------------------------
proc tablelist::deleteSubCmd {win argList} {
    set argCount [llength $argList]
    if {$argCount < 1 || $argCount > 2} {
	mwutil::wrongNumArgs \
		"$win delete firstIndex lastIndex" "$win delete indexList"
    }

    upvar ::tablelist::ns${win}::data data
    if {$data(isDisabled)} {
	return ""
    }

    synchronize $win
    displayItems $win
    set first [lindex $argList 0]

    if {$argCount == 1} {
	if {[llength $first] == 1} {			;# just to save time
	    set index [rowIndex $win [lindex $first 0] 0]
	    return [deleteRows $win $index $index $data(hasListVar)]
	} elseif {$data(itemCount) == 0} {		;# no items present
	    return ""
	} else {					;# a bit more work
	    #
	    # Sort the numerical equivalents of the
	    # specified indices in decreasing order
	    #
	    set indexList {}
	    foreach elem $first {
		set index [rowIndex $win $elem 0]
		if {$index < 0} {
		    set index 0
		} elseif {$index > $data(lastRow)} {
		    set index $data(lastRow)
		}
		lappend indexList $index
	    }
	    set indexList [lsort -integer -decreasing $indexList]
	    set indexCount [llength $indexList]
	    if {$indexCount == 0} {
		return ""
	    }

	    #
	    # Traverse the sorted index list and ignore any duplicates
	    #
	    set maxIndex [lindex $indexList 0]
	    set prevIndex [expr {$maxIndex + 1}]
	    foreach index $indexList {
		if {$index != $prevIndex} {
		    if {$index != $prevIndex - 1} {
			deleteRows $win $prevIndex $maxIndex $data(hasListVar)
			set maxIndex $index
		    }
		    set prevIndex $index
		}
	    }
	    deleteRows $win $index $maxIndex $data(hasListVar)
	    return ""
	}
    } else {
	if {$data(itemCount) == 0} {			;# no items present
	    return ""
	} else {
	    set first [rowIndex $win $first 0]
	    set last [rowIndex $win [lindex $argList 1] 0]
	    return [deleteRows $win $first $last $data(hasListVar)]
	}
    }
}

#------------------------------------------------------------------------------
# tablelist::deletecolumnsSubCmd
#------------------------------------------------------------------------------
proc tablelist::deletecolumnsSubCmd {win argList} {
    set argCount [llength $argList]
    if {$argCount < 1 || $argCount > 2} {
	mwutil::wrongNumArgs \
		"$win deletecolumns firstColumn lastColumn" \
		"$win deletecolumns columnIndexList"
    }

    upvar ::tablelist::ns${win}::data data
    if {$data(isDisabled)} {
	return ""
    }

    synchronize $win
    displayItems $win
    set first [lindex $argList 0]

    if {$argCount == 1} {
	if {[llength $first] == 1} {			;# just to save time
	    set col [colIndex $win [lindex $first 0] 1]
	    deleteCols $win $col $col
	    redisplay $win
	} elseif {$data(colCount) == 0} {		;# no columns present
	    return ""
	} else {					;# a bit more work
	    #
	    # Sort the numerical equivalents of the
	    # specified column indices in decreasing order
	    #
	    set colList {}
	    foreach elem $first {
		lappend colList [colIndex $win $elem 1]
	    }
	    set colList [lsort -integer -decreasing $colList]

	    #
	    # Traverse the sorted column index list and ignore any duplicates
	    #
	    set deleted 0
	    set prevCol -1
	    foreach col $colList {
		if {$col != $prevCol} {
		    deleteCols $win $col $col
		    set deleted 1
		    set prevCol $col
		}
	    }
	    if {$deleted} {
		redisplay $win
	    }
	}
    } else {
	if {$data(colCount) == 0} {			;# no columns present
	    return ""
	} else {
	    set first [colIndex $win $first 1]
	    set last [colIndex $win [lindex $argList 1] 1]
	    if {$first <= $last} {
		deleteCols $win $first $last
		redisplay $win
	    }
	}
    }

    updateViewWhenIdle $win
    return ""
}

#------------------------------------------------------------------------------
# tablelist::depthSubCmd
#------------------------------------------------------------------------------
proc tablelist::depthSubCmd {win argList} {
    if {[llength $argList] != 1} {
	mwutil::wrongNumArgs "$win depth nodeIndex"
    }

    synchronize $win
    set key [nodeIndexToKey $win [lindex $argList 0]]
    return [depth $win $key]
}

#------------------------------------------------------------------------------
# tablelist::descendantcountSubCmd
#------------------------------------------------------------------------------
proc tablelist::descendantcountSubCmd {win argList} {
    if {[llength $argList] != 1} {
	mwutil::wrongNumArgs "$win descendantcount nodeIndex"
    }

    synchronize $win
    set key [nodeIndexToKey $win [lindex $argList 0]]
    return [descCount $win $key]
}

#------------------------------------------------------------------------------
# tablelist::dicttoitemSubCmd
#------------------------------------------------------------------------------
proc tablelist::dicttoitemSubCmd {win argList} {
    if {[llength $argList] != 1} {
	mwutil::wrongNumArgs "$win dicttoitem dictionary"
    }

    upvar ::tablelist::ns${win}::data data
    set origDict [lindex $argList 0]
    set newDict {}
    dict for {key val} $origDict {
	set col [colIndex2 $win $key]
	if {$col >= 0 && $col < $data(colCount)} {
	    dict set newDict $col $val
	}
    }

    set item {}
    for {set col 0} {$col < $data(colCount)} {incr col} {
	if {[dict exists $newDict $col]} {
	    set elem [dict get $newDict $col]
	} else {
	    set elem ""
	}
	lappend item $elem
    }
    return $item
}

#------------------------------------------------------------------------------
# tablelist::dumptofileSubCmd
#------------------------------------------------------------------------------
proc tablelist::dumptofileSubCmd {win argList} {
    if {[llength $argList] != 1} {
	mwutil::wrongNumArgs "$win dumptofile fileName"
    }

    set fileName [lindex $argList 0]
    if {[catch {open $fileName "wb"} file] != 0} {
	return -code error $file
    }

    puts $file [dumptostringSubCmd $win {}]
    close $file
    return ""
}

#------------------------------------------------------------------------------
# tablelist::dumptostringSubCmd
#------------------------------------------------------------------------------
proc tablelist::dumptostringSubCmd {win argList} {
    if {[llength $argList] != 0} {
	mwutil::wrongNumArgs "$win dumptostring"
    }

    synchronize $win
    displayItems $win
    ::$win expandall -fully

    #
    # Build the lists hdr_itemList, itemList, and parentList
    #
    upvar ::tablelist::ns${win}::data data
    set lastCol $data(lastCol)
    set hdr_itemList {}
    set parentList {}
    set itemList {}
    foreach item $data(hdr_itemList) {
	lappend hdr_itemList [lrange $item 0 $lastCol]
    }
    foreach item $data(itemList) {
	set key [lindex $item end]
	lappend parentList [keyToRow $win $data($key-parent)]
	lappend itemList [lrange $item 0 $lastCol]
    }

    set str ""
    append str [string map {\n \\n} [::$win cget -columntitles]] \n
    append str [list [::$win sortcolumnlist] [::$win sortorderlist]] \n
    append str [string map {\n \\n} $hdr_itemList] \n
    append str $parentList \n
    append str $itemList
    return $str
}

#------------------------------------------------------------------------------
# tablelist::editcellSubCmd
#------------------------------------------------------------------------------
proc tablelist::editcellSubCmd {win argList} {
    if {[llength $argList] != 1} {
	mwutil::wrongNumArgs "$win editcell cellIndex"
    }

    synchronize $win
    displayItems $win
    foreach {row col} [cellIndex $win [lindex $argList 0] 1] {}
    return [doEditCell $win $row $col 0]
}

#------------------------------------------------------------------------------
# tablelist::editinfoSubCmd
#------------------------------------------------------------------------------
proc tablelist::editinfoSubCmd {win argList} {
    if {[llength $argList] != 0} {
	mwutil::wrongNumArgs "$win editinfo"
    }

    upvar ::tablelist::ns${win}::data data
    return [list $data(editKey) $data(editRow) $data(editCol)]
}

#------------------------------------------------------------------------------
# tablelist::editwinpathSubCmd
#------------------------------------------------------------------------------
proc tablelist::editwinpathSubCmd {win argList} {
    if {[llength $argList] != 0} {
	mwutil::wrongNumArgs "$win editwinpath"
    }

    upvar ::tablelist::ns${win}::data data
    if {[winfo exists $data(bodyFrmEd)]} {
	return $data(bodyFrmEd)
    } else {
	return ""
    }
}

#------------------------------------------------------------------------------
# tablelist::editwintagSubCmd
#------------------------------------------------------------------------------
proc tablelist::editwintagSubCmd {win argList} {
    if {[llength $argList] != 0} {
	mwutil::wrongNumArgs "$win editwintag"
    }

    upvar ::tablelist::ns${win}::data data
    return $data(editwinTag)
}

#------------------------------------------------------------------------------
# tablelist::embedcheckbuttonSubCmd
#------------------------------------------------------------------------------
proc tablelist::embedcheckbuttonSubCmd {win argList} {
    set argCount [llength $argList]
    if {$argCount < 1 || $argCount > 2} {
	mwutil::wrongNumArgs "$win embedcheckbutton cellIndex ?command?"
    }

    synchronize $win
    foreach {row col} [cellIndex $win [lindex $argList 0] 1] {}

    if {$argCount == 1} {
	set cmd ""
    } else {
	set cmd [lindex $argList 1]
    }

    doCellConfig $row $col $win -window [list ::tablelist::createCkbtn $cmd]
    return ""
}

#------------------------------------------------------------------------------
# tablelist::embedcheckbuttonsSubCmd
#------------------------------------------------------------------------------
proc tablelist::embedcheckbuttonsSubCmd {win argList} {
    set argCount [llength $argList]
    if {$argCount < 1 || $argCount > 2} {
	mwutil::wrongNumArgs "$win embedcheckbuttons columnIndex ?command?"
    }

    synchronize $win
    set col [colIndex $win [lindex $argList 0] 1]

    if {$argCount == 1} {
	set cmd ""
    } else {
	set cmd [lindex $argList 1]
    }

    fillcolumnSubCmd $win [list $col -window \
	[list ::tablelist::createCkbtn $cmd]]
    return ""
}

#------------------------------------------------------------------------------
# tablelist::embedttkcheckbuttonSubCmd
#------------------------------------------------------------------------------
proc tablelist::embedttkcheckbuttonSubCmd {win argList} {
    set argCount [llength $argList]
    if {$argCount < 1 || $argCount > 2} {
	mwutil::wrongNumArgs "$win embedttkcheckbutton cellIndex ?command?"
    }

    synchronize $win
    foreach {row col} [cellIndex $win [lindex $argList 0] 1] {}

    if {$argCount == 1} {
	set cmd ""
    } else {
	set cmd [lindex $argList 1]
    }

    doCellConfig $row $col $win -window [list ::tablelist::createTtkCkbtn $cmd]
    return ""
}

#------------------------------------------------------------------------------
# tablelist::embedttkcheckbuttonsSubCmd
#------------------------------------------------------------------------------
proc tablelist::embedttkcheckbuttonsSubCmd {win argList} {
    set argCount [llength $argList]
    if {$argCount < 1 || $argCount > 2} {
	mwutil::wrongNumArgs "$win embedttkcheckbuttons columnIndex ?command?"
    }

    synchronize $win
    set col [colIndex $win [lindex $argList 0] 1]

    if {$argCount == 1} {
	set cmd ""
    } else {
	set cmd [lindex $argList 1]
    }

    fillcolumnSubCmd $win [list $col -window \
	[list ::tablelist::createTtkCkbtn $cmd]]
    return ""
}

#------------------------------------------------------------------------------
# tablelist::entrypathSubCmd
#------------------------------------------------------------------------------
proc tablelist::entrypathSubCmd {win argList} {
    if {[llength $argList] != 0} {
	mwutil::wrongNumArgs "$win entrypath"
    }

    upvar ::tablelist::ns${win}::data data
    if {[winfo exists $data(bodyFrmEd)]} {
	set class [winfo class $data(bodyFrmEd)]
	if {[regexp {^(Mentry|T?Checkbutton|T?Menubutton)$} $class]} {
	    return ""
	} else {
	    return $data(editFocus)
	}
    } else {
	return ""
    }
}

#------------------------------------------------------------------------------
# tablelist::expandSubCmd
#------------------------------------------------------------------------------
proc tablelist::expandSubCmd {win argList} {
    set argCount [llength $argList]
    if {$argCount < 1 || $argCount > 2} {
	mwutil::wrongNumArgs "$win expand indexList ?-fully|-partly?"
    }

    synchronize $win
    displayItems $win
    set indexList {}
    foreach elem [lindex $argList 0] {
	set index [rowIndex $win $elem 0 1]
	lappend indexList $index
    }

    if {$argCount == 1} {
	set fullExpansion 1
    } else {
	variable expCollOpts
	set opt [mwutil::fullOpt "option" [lindex $argList 1] $expCollOpts]
	set fullExpansion [expr {$opt eq "-fully"}]
    }

    set callerProc [lindex [info level -1] 0]
    upvar ::tablelist::ns${win}::data data
    set callExpandCmd [expr {$callerProc ne "doRowConfig" &&
			     $data(-expandcommand) ne ""}]
    set col $data(treeCol)
    set w $data(body)
    set processed 0

    #
    # Level-order traversal
    #
    while {[llength $indexList] != 0} {
	set indexList [lsort -integer -decreasing $indexList]
	set keyList {}

	foreach index $indexList {
	    set key [lindex $data(keyList) $index]
	    if {![info exists data($key,$col-indent)] ||
		[string match "*indented*" $data($key,$col-indent)]} {
		continue
	    }

	    if {$callExpandCmd} {
		set data(keyBeingExpanded) $key
		uplevel #0 $data(-expandcommand) [list $win $index]
		set data(keyBeingExpanded) ""
	    }

	    #
	    # Set the indentation image to the indented or expanded one
	    #
	    set childCount [llength $data($key-childList)]
	    set state [expr {($childCount == 0) ? "indented" : "expanded"}]
	    set data($key,$col-indent) [string map \
		[list "collapsed" $state "expanded" $state] \
		$data($key,$col-indent)]
	    if {$state eq "indented"} {
		set data($key,$col-indent) [string map \
		    {"Act" "" "Sel" ""} $data($key,$col-indent)]
	    }
	    if {[winfo exists $w.ind_$key,$col]} {
		set idx [string last "g" $data($key,$col-indent)]
		set img [string range $data($key,$col-indent) 0 $idx]
		$w.ind_$key,$col configure -image $img
	    }

	    #
	    # Conditionally unelide the children and
	    # add their full keys to the list keyList
	    #
	    set isViewable [expr {![info exists data($key-elide)] &&
				  ![info exists data($key-hide)]}]
	    foreach childKey $data($key-childList) {
		set childRow [keyToRow $win $childKey]
		if {$isViewable} {
		    doRowConfig $childRow $win -elide 0
		}

		if {$fullExpansion ||
		    [string match "*expanded*" $data($childKey,$col-indent)]} {
		    lappend keyList $childKey
		}
	    }

	    set processed 1
	}

	set indexList {}
	foreach key $keyList {
	    lappend indexList [keyToRow $win $key]
	}
    }

    if {$processed} {
	hdr_adjustElidedText $win
	hdr_updateColors $win
	adjustElidedText $win
	redisplayVisibleItems $win
	makeStripes $win
	adjustSepsWhenIdle $win
	updateVScrlbarWhenIdle $win
    }

    return ""
}

#------------------------------------------------------------------------------
# tablelist::expandallSubCmd
#------------------------------------------------------------------------------
proc tablelist::expandallSubCmd {win argList} {
    set argCount [llength $argList]
    if {$argCount > 1} {
	mwutil::wrongNumArgs "$win expandall ?-fully|-partly?"
    }

    if {$argCount == 0} {
	set opt "-fully"
    } else {
	variable expCollOpts
	set opt [mwutil::fullOpt "option" [lindex $argList 0] $expCollOpts]
    }

    synchronize $win
    upvar ::tablelist::ns${win}::data data
    return [expandSubCmd $win [list $data(root-childList) $opt]]
}

#------------------------------------------------------------------------------
# tablelist::expandedkeysSubCmd
#------------------------------------------------------------------------------
proc tablelist::expandedkeysSubCmd {win argList} {
    if {[llength $argList] != 0} {
	mwutil::wrongNumArgs "$win expandedkeys"
    }

    upvar ::tablelist::ns${win}::data data
    set result {}
    foreach name [array names data "*,$data(treeCol)-indent"] {
	if {[string match "*expanded*" $data($name)]} {
	    set commaPos [string first "," $name]
	    lappend result [string range $name 0 [expr {$commaPos - 1}]]
	}
    }
    return $result
}

#------------------------------------------------------------------------------
# tablelist::fillcolumnSubCmd
#------------------------------------------------------------------------------
proc tablelist::fillcolumnSubCmd {win argList} {
    set argCount [llength $argList]
    if {$argCount < 2 || $argCount > 3} {
	mwutil::wrongNumArgs \
		"$win fillcolumn columnIndex ?-text|-image|-window? value"
    }

    upvar ::tablelist::ns${win}::data data
    if {$data(isDisabled)} {
	return ""
    }

    synchronize $win
    displayItems $win

    set col [colIndex $win [lindex $argList 0] 1]
    set pixels [lindex $data(colList) [expr {2*$col}]]

    if {$argCount == 2} {
	set opt -text
	set val [lindex $argList 1]
    } else {
	variable fillColOpts
	set opt [mwutil::fullOpt "option" [lindex $argList 1] $fillColOpts]
	set val [lindex $argList 2]
    }

    switch -- $opt {
	-text {
	    #
	    # Update the item list and the list variable if present
	    #
	    set newItemList {}
	    foreach item $data(itemList) {
		set item [lreplace $item $col $col $val]
		lappend newItemList $item
	    }
	    set data(itemList) $newItemList
	    condUpdateListVar $win

	    #
	    # Adjust the columns if necessary and make sure the
	    # specified column will be redisplayed at idle time
	    #
	    if {$pixels == 0} {
		adjustColumns $win $col 1
	    }
	    redisplayCol $win $col 0 last
	    showLineNumbersWhenIdle $win
	}

	default {
	    #
	    # Configure the body cells of the specified column
	    #
	    set itemCount $data(itemCount)
	    for {set row 0} {$row < $itemCount} {incr row} {
		doCellConfig $row $col $win $opt $val 1
	    }

	    #
	    # Adjust the columns if necessary
	    #
	    if {$pixels == 0} {
		adjustColumns $win $col 1
	    }
	}
    }

    updateViewWhenIdle $win
    return ""
}

#------------------------------------------------------------------------------
# tablelist::findcolumnnameSubCmd
#------------------------------------------------------------------------------
proc tablelist::findcolumnnameSubCmd {win argList} {
    if {[llength $argList] != 1} {
	mwutil::wrongNumArgs "$win findcolumnname name"
    }

    set name [lindex $argList 0]
    set nameIsEmpty [expr {$name eq ""}]

    upvar ::tablelist::ns${win}::data data
    for {set col 0} {$col < $data(colCount)} {incr col} {
	set hasName [info exists data($col-name)]
	if {($hasName && $name eq $data($col-name)) ||
	    (!$hasName && $nameIsEmpty)} {
	    return $col
	}
    }
    return -1
}

#------------------------------------------------------------------------------
# tablelist::findrownameSubCmd
#------------------------------------------------------------------------------
proc tablelist::findrownameSubCmd {win argList} {
    set argCount [llength $argList]
    if {$argCount < 1} {
	mwutil::wrongNumArgs \
		"$win findrowname name ?-descend? ?-parent nodeIndex?"
    }

    synchronize $win
    set name [lindex $argList 0]
    set nameIsEmpty [expr {$name eq ""}]

    #
    # Initialize some processing parameters
    #
    set parentKey root
    set descend 0						;# boolean

    #
    # Parse the argument list
    #
    variable findOpts
    for {set n 1} {$n < $argCount} {incr n} {
	set arg [lindex $argList $n]
	set opt [mwutil::fullOpt "option" $arg $findOpts]
	switch -- $opt {
	    -descend { set descend 1 }
	    -parent {
		if {$n == $argCount - 1} {
		    return -code error "value for \"$arg\" missing"
		}

		incr n
		set parentKey [nodeIndexToKey $win [lindex $argList $n]]
	    }
	}
    }

    upvar ::tablelist::ns${win}::data data
    set childCount [llength $data($parentKey-childList)]
    if {$childCount == 0} {
	return -1
    }

    if {$descend} {
	set fromChildKey [lindex $data($parentKey-childList) 0]
	set fromRow [keyToRow $win $fromChildKey]
	set toRow [nodeRow $win $parentKey end]
	for {set row $fromRow} {$row < $toRow} {incr row} {
	    set key [lindex $data(keyList) $row]
	    set hasName [info exists data($key-name)]
	    if {($hasName && $name eq $data($key-name)) ||
		(!$hasName && $nameIsEmpty)} {
		return $row
	    }
	}
    } else {
	for {set childIdx 0} {$childIdx < $childCount} {incr childIdx} {
	    set key [lindex $data($parentKey-childList) $childIdx]
	    set hasName [info exists data($key-name)]
	    if {($hasName && $name eq $data($key-name)) ||
		(!$hasName && $nameIsEmpty)} {
		return [keyToRow $win $key]
	    }
	}
    }
    return -1
}

#------------------------------------------------------------------------------
# tablelist::finisheditingSubCmd
#------------------------------------------------------------------------------
proc tablelist::finisheditingSubCmd {win argList} {
    if {[llength $argList] != 0} {
	mwutil::wrongNumArgs "$win finishediting"
    }

    synchronize $win
    return [doFinishEditing $win]
}

#------------------------------------------------------------------------------
# tablelist::formatinfoSubCmd
#------------------------------------------------------------------------------
proc tablelist::formatinfoSubCmd {win argList} {
    if {[llength $argList] != 0} {
	mwutil::wrongNumArgs "$win formatinfo"
    }

    upvar ::tablelist::ns${win}::data data
    return [list $data(fmtKey) $data(fmtRow) $data(fmtCol)]
}

#------------------------------------------------------------------------------
# tablelist::getSubCmd
#------------------------------------------------------------------------------
proc tablelist::getSubCmd {win argList} {
    set argCount [llength $argList]
    if {$argCount < 1 || $argCount > 3} {
	mwutil::wrongNumArgs \
		"$win get firstIndex lastIndex ?-all|-nonhidden|-viewable?" \
		"$win get indexList"
    }

    synchronize $win
    set first [lindex $argList 0]

    #
    # Get the specified items from the internal list
    #
    upvar ::tablelist::ns${win}::data data
    set result {}
    if {$argCount == 1} {
	foreach elem $first {
	    set row [rowIndex $win $elem 0]
	    if {$row >= 0 && $row < $data(itemCount)} {
		set item [lindex $data(itemList) $row]
		lappend result [lrange $item 0 $data(lastCol)]
	    }
	}

	if {[llength $first] == 1} {
	    return [lindex $result 0]
	} else {
	    return $result
	}
    } else {
	set first [rowIndex $win $first 0]
	set last [rowIndex $win [lindex $argList 1] 0]
	if {$argCount == 2} {
	    set constraint 0
	} else {
	    variable constrOpts
	    set opt [mwutil::fullOpt "option" [lindex $argList 2] $constrOpts]
	    set constraint [lsearch -exact $constrOpts $opt]
	}

	if {$last < $first} {
	    return {}
	}

	#
	# Adjust the range to fit within the existing items
	#
	if {$first < 0} {
	    set first 0
	}
	if {$last > $data(lastRow)} {
	    set last $data(lastRow)
	}

	foreach item [lrange $data(itemList) $first $last] {
	    if {$constraint == 0} {
		lappend result [lrange $item 0 $data(lastCol)]
	    } else {
		set key [lindex $item end]
		if {[info exists data($key-hide)] ||
		    ($constraint == 2 && [info exists data($key-elide)])} {
		    continue
		}

		lappend result [lrange $item 0 $data(lastCol)]
	    }
	}
	return $result
    }
}

#------------------------------------------------------------------------------
# tablelist::getcellsSubCmd
#------------------------------------------------------------------------------
proc tablelist::getcellsSubCmd {win argList} {
    set argCount [llength $argList]
    if {$argCount < 1 || $argCount > 3} {
	mwutil::wrongNumArgs \
		"$win getcells firstCellIndex lastCellIndex\
		 ?-all|-nonhidden|-viewable?" \
		"$win getcells cellIndexList"
    }

    synchronize $win
    set first [lindex $argList 0]

    #
    # Get the specified elements from the internal list
    #
    upvar ::tablelist::ns${win}::data data
    set result {}
    if {$argCount == 1} {
	foreach elem $first {
	    foreach {row col} [cellIndex $win $elem 1] {}
	    lappend result [lindex [lindex $data(itemList) $row] $col]
	}

	if {[llength $first] == 1} {
	    return [lindex $result 0]
	} else {
	    return $result
	}
    } else {
	foreach {firstRow firstCol} [cellIndex $win $first 1] {}
	foreach {lastRow lastCol} [cellIndex $win [lindex $argList 1] 1] {}
	if {$argCount == 2} {
	    set constraint 0
	} else {
	    variable constrOpts
	    set opt [mwutil::fullOpt "option" [lindex $argList 2] $constrOpts]
	    set constraint [lsearch -exact $constrOpts $opt]
	}

	foreach item [lrange $data(itemList) $firstRow $lastRow] {
	    if {$constraint == 0} {
		foreach elem [lrange $item $firstCol $lastCol] {
		    lappend result $elem
		}
	    } else {
		set key [lindex $item end]
		if {[info exists data($key-hide)] ||
		    ($constraint == 2 && [info exists data($key-elide)])} {
		    continue
		}

		for {set col $firstCol} {$col <= $lastCol} {incr col} {
		    if {!$data($col-hide)} {
			lappend result [lindex $item $col]
		    }
		}
	    }
	}
	return $result
    }
}

#------------------------------------------------------------------------------
# tablelist::getcolumnsSubCmd
#------------------------------------------------------------------------------
proc tablelist::getcolumnsSubCmd {win argList} {
    set argCount [llength $argList]
    if {$argCount < 1 || $argCount > 2} {
	mwutil::wrongNumArgs \
		"$win getcolumns firstColumn lastColumn" \
		"$win getcolumns columnIndexList"
    }

    synchronize $win
    set first [lindex $argList 0]

    #
    # Get the specified columns from the internal list
    #
    upvar ::tablelist::ns${win}::data data
    set result {}
    if {$argCount == 1} {
	foreach elem $first {
	    set col [colIndex $win $elem 1]
	    set colResult {}
	    foreach item $data(itemList) {
		lappend colResult [lindex $item $col]
	    }
	    lappend result $colResult
	}

	if {[llength $first] == 1} {
	    return [lindex $result 0]
	} else {
	    return $result
	}
    } else {
	set first [colIndex $win $first 1]
	set last [colIndex $win [lindex $argList 1] 1]

	for {set col $first} {$col <= $last} {incr col} {
	    set colResult {}
	    foreach item $data(itemList) {
		lappend colResult [lindex $item $col]
	    }
	    lappend result $colResult
	}
	return $result
    }
}

#------------------------------------------------------------------------------
# tablelist::getformattedSubCmd
#------------------------------------------------------------------------------
proc tablelist::getformattedSubCmd {win argList} {
    set argCount [llength $argList]
    if {$argCount < 1 || $argCount > 3} {
	mwutil::wrongNumArgs \
		"$win getformatted firstIndex lastIndex\
		 ?-all|-nonhidden|-viewable?" \
		"$win getformatted indexList"
    }

    synchronize $win
    set first [lindex $argList 0]

    #
    # Get the specified items from the internal list
    #
    upvar ::tablelist::ns${win}::data data
    set result {}
    if {$argCount == 1} {
	foreach elem $first {
	    set row [rowIndex $win $elem 0]
	    if {$row >= 0 && $row < $data(itemCount)} {
		set item [lindex $data(itemList) $row]
		set key [lindex $item end]
		set item [lrange $item 0 $data(lastCol)]
		lappend result [formatItem $win $key $row $item]
	    }
	}

	if {[llength $first] == 1} {
	    return [lindex $result 0]
	} else {
	    return $result
	}
    } else {
	set first [rowIndex $win $first 0]
	set last [rowIndex $win [lindex $argList 1] 0]
	if {$argCount == 2} {
	    set constraint 0
	} else {
	    variable constrOpts
	    set opt [mwutil::fullOpt "option" [lindex $argList 2] $constrOpts]
	    set constraint [lsearch -exact $constrOpts $opt]
	}

	if {$last < $first} {
	    return {}
	}

	#
	# Adjust the range to fit within the existing items
	#
	if {$first < 0} {
	    set first 0
	}
	if {$last > $data(lastRow)} {
	    set last $data(lastRow)
	}

	set row $first
	foreach item [lrange $data(itemList) $first $last] {
	    set key [lindex $item end]
	    if {$constraint == 0} {
		set item [lrange $item 0 $data(lastCol)]
		lappend result [formatItem $win $key $row $item]
	    } else {
		if {[info exists data($key-hide)] ||
		    ($constraint == 2 && [info exists data($key-elide)])} {
		    incr row
		    continue
		}

		set item [lrange $item 0 $data(lastCol)]
		lappend result [formatItem $win $key $row $item]
	    }
	    incr row
	}
	return $result
    }
}

#------------------------------------------------------------------------------
# tablelist::getformattedcellsSubCmd
#------------------------------------------------------------------------------
proc tablelist::getformattedcellsSubCmd {win argList} {
    set argCount [llength $argList]
    if {$argCount < 1 || $argCount > 3} {
	mwutil::wrongNumArgs \
		"$win getformattedcells firstCellIndex lastCellIndex\
		 ?-all|-nonhidden|-viewable?" \
		"$win getformattedcells cellIndexList"
    }

    synchronize $win
    set first [lindex $argList 0]

    #
    # Get the specified elements from the internal list
    #
    upvar ::tablelist::ns${win}::data data
    set result {}
    if {$argCount == 1} {
	foreach elem $first {
	    foreach {row col} [cellIndex $win $elem 1] {}
	    set item [lindex $data(itemList) $row]
	    set key [lindex $item end]
	    set text [lindex $item $col]
	    if {[lindex $data(fmtCmdFlagList) $col]} {
		set text [formatElem $win $key $row $col $text]
	    }
	    lappend result $text
	}

	if {[llength $first] == 1} {
	    return [lindex $result 0]
	} else {
	    return $result
	}
    } else {
	foreach {firstRow firstCol} [cellIndex $win $first 1] {}
	foreach {lastRow lastCol} [cellIndex $win [lindex $argList 1] 1] {}
	if {$argCount == 2} {
	    set constraint 0
	} else {
	    variable constrOpts
	    set opt [mwutil::fullOpt "option" [lindex $argList 2] $constrOpts]
	    set constraint [lsearch -exact $constrOpts $opt]
	}

	set row $firstRow
	foreach item [lrange $data(itemList) $firstRow $lastRow] {
	    set key [lindex $item end]
	    if {$constraint == 0} {
		set col $firstCol
		foreach text [lrange $item $firstCol $lastCol] {
		    if {[lindex $data(fmtCmdFlagList) $col]} {
			set text [formatElem $win $key $row $col $text]
		    }
		    lappend result $text
		    incr col
		}
	    } else {
		if {[info exists data($key-hide)] ||
		    ($constraint == 2 && [info exists data($key-elide)])} {
		    incr row
		    continue
		}

		for {set col $firstCol} {$col <= $lastCol} {incr col} {
		    if {!$data($col-hide)} {
			set text [lindex $item $col]
			if {[lindex $data(fmtCmdFlagList) $col]} {
			    set text [formatElem $win $key $row $col $text]
			}
			lappend result $text
		    }
		}
	    }
	    incr row
	}
	return $result
    }
}

#------------------------------------------------------------------------------
# tablelist::getformattedcolumnsSubCmd
#------------------------------------------------------------------------------
proc tablelist::getformattedcolumnsSubCmd {win argList} {
    set argCount [llength $argList]
    if {$argCount < 1 || $argCount > 2} {
	mwutil::wrongNumArgs \
		"$win getformattedcolumns firstColumn lastColumn" \
		"$win getformattedcolumns columnIndexList"
    }

    synchronize $win
    set first [lindex $argList 0]

    #
    # Get the specified columns from the internal list
    #
    upvar ::tablelist::ns${win}::data data
    set result {}
    if {$argCount == 1} {
	foreach elem $first {
	    set col [colIndex $win $elem 1]
	    set fmtCmdFlag [lindex $data(fmtCmdFlagList) $col]
	    set colResult {}
	    set row 0
	    foreach item $data(itemList) {
		set key [lindex $item end]
		set text [lindex $item $col]
		if {$fmtCmdFlag} {
		    set text [formatElem $win $key $row $col $text]
		}
		lappend colResult $text
		incr row
	    }
	    lappend result $colResult
	}

	if {[llength $first] == 1} {
	    return [lindex $result 0]
	} else {
	    return $result
	}
    } else {
	set first [colIndex $win $first 1]
	set last [colIndex $win [lindex $argList 1] 1]

	for {set col $first} {$col <= $last} {incr col} {
	    set fmtCmdFlag [lindex $data(fmtCmdFlagList) $col]
	    set colResult {}
	    set row 0
	    foreach item $data(itemList) {
		set key [lindex $item end]
		set text [lindex $item $col]
		if {$fmtCmdFlag} {
		    set text [formatElem $win $key $row $col $text]
		}
		lappend colResult $text
		incr row
	    }
	    lappend result $colResult
	}
	return $result
    }
}

#------------------------------------------------------------------------------
# tablelist::getfullkeysSubCmd
#------------------------------------------------------------------------------
proc tablelist::getfullkeysSubCmd {win argList} {
    set argCount [llength $argList]
    if {$argCount < 1 || $argCount > 3} {
	mwutil::wrongNumArgs \
		"$win getfullkeys firstIndex lastIndex\
		 ?-all|-nonhidden|-viewable?" \
		"$win getfullkeys indexList"
    }

    synchronize $win
    set first [lindex $argList 0]

    #
    # Get the specified keys from the internal list
    #
    upvar ::tablelist::ns${win}::data data
    set result {}
    if {$argCount == 1} {
	foreach elem $first {
	    set row [rowIndex $win $elem 0]
	    if {$row >= 0 && $row < $data(itemCount)} {
		lappend result [lindex [lindex $data(itemList) $row] end]
	    }
	}

	if {[llength $first] == 1} {
	    return [lindex $result 0]
	} else {
	    return $result
	}
    } else {
	set first [rowIndex $win $first 0]
	set last [rowIndex $win [lindex $argList 1] 0]
	if {$argCount == 2} {
	    set constraint 0
	} else {
	    variable constrOpts
	    set opt [mwutil::fullOpt "option" [lindex $argList 2] $constrOpts]
	    set constraint [lsearch -exact $constrOpts $opt]
	}

	if {$last < $first} {
	    return {}
	}

	#
	# Adjust the range to fit within the existing items
	#
	if {$first < 0} {
	    set first 0
	}
	if {$last > $data(lastRow)} {
	    set last $data(lastRow)
	}

	foreach item [lrange $data(itemList) $first $last] {
	    set key [lindex $item end]
	    if {$constraint == 0} {
		lappend result $key
	    } else {
		if {[info exists data($key-hide)] ||
		    ($constraint == 2 && [info exists data($key-elide)])} {
		    continue
		}

		lappend result $key
	    }
	}
	return $result
    }
}

#------------------------------------------------------------------------------
# tablelist::getkeysSubCmd
#------------------------------------------------------------------------------
proc tablelist::getkeysSubCmd {win argList} {
    set argCount [llength $argList]
    if {$argCount < 1 || $argCount > 3} {
	mwutil::wrongNumArgs \
		"$win getkeys firstIndex lastIndex\
		 ?-all|-nonhidden|-viewable?" \
		"$win getkeys indexList"
    }

    synchronize $win
    set first [lindex $argList 0]

    #
    # Get the specified keys from the internal list
    #
    upvar ::tablelist::ns${win}::data data
    set result {}
    if {$argCount == 1} {
	foreach elem $first {
	    set row [rowIndex $win $elem 0]
	    if {$row >= 0 && $row < $data(itemCount)} {
		set item [lindex $data(itemList) $row]
		lappend result [string range [lindex $item end] 1 end]
	    }
	}

	if {[llength $first] == 1} {
	    return [lindex $result 0]
	} else {
	    return $result
	}
    } else {
	set first [rowIndex $win $first 0]
	set last [rowIndex $win [lindex $argList 1] 0]
	if {$argCount == 2} {
	    set constraint 0
	} else {
	    variable constrOpts
	    set opt [mwutil::fullOpt "option" [lindex $argList 2] $constrOpts]
	    set constraint [lsearch -exact $constrOpts $opt]
	}

	if {$last < $first} {
	    return {}
	}

	#
	# Adjust the range to fit within the existing items
	#
	if {$first < 0} {
	    set first 0
	}
	if {$last > $data(lastRow)} {
	    set last $data(lastRow)
	}

	foreach item [lrange $data(itemList) $first $last] {
	    set key [lindex $item end]
	    if {$constraint == 0} {
		lappend result [string range $key 1 end]
	    } else {
		if {[info exists data($key-hide)] ||
		    ($constraint == 2 && [info exists data($key-elide)])} {
		    continue
		}

		lappend result [string range $key 1 end]
	    }
	}
	return $result
    }
}

#------------------------------------------------------------------------------
# tablelist::hasattribSubCmd
#------------------------------------------------------------------------------
proc tablelist::hasattribSubCmd {win argList} {
    if {[llength $argList] != 1} {
	mwutil::wrongNumArgs "$win hasattrib name"
    }

    return [mwutil::hasattribSubCmd $win "widget" [lindex $argList 0]]
}

#------------------------------------------------------------------------------
# tablelist::hascellattribSubCmd
#------------------------------------------------------------------------------
proc tablelist::hascellattribSubCmd {win argList} {
    if {[llength $argList] != 2} {
	mwutil::wrongNumArgs "$win hascellattrib cellIndex name"
    }

    synchronize $win
    foreach {row col} [cellIndex $win [lindex $argList 0] 1] {}
    upvar ::tablelist::ns${win}::data data
    set key [lindex $data(keyList) $row]
    return [mwutil::hasattribSubCmd $win $key,$col [lindex $argList 1]]
}

#------------------------------------------------------------------------------
# tablelist::hascolumnattribSubCmd
#------------------------------------------------------------------------------
proc tablelist::hascolumnattribSubCmd {win argList} {
    if {[llength $argList] != 2} {
	mwutil::wrongNumArgs "$win hascolumnattrib columnIndex name"
    }

    set col [colIndex $win [lindex $argList 0] 1]
    return [mwutil::hasattribSubCmd $win $col [lindex $argList 1]]
}

#------------------------------------------------------------------------------
# tablelist::hasrowattribSubCmd
#------------------------------------------------------------------------------
proc tablelist::hasrowattribSubCmd {win argList} {
    if {[llength $argList] != 2} {
	mwutil::wrongNumArgs "$win hasrowattrib index name"
    }

    synchronize $win
    set row [rowIndex $win [lindex $argList 0] 0 1]
    upvar ::tablelist::ns${win}::data data
    set key [lindex $data(keyList) $row]
    return [mwutil::hasattribSubCmd $win $key [lindex $argList 1]]
}

#------------------------------------------------------------------------------
# tablelist::headerSubCmd
#------------------------------------------------------------------------------
proc tablelist::headerSubCmd {win argList} {
    if {[llength $argList] == 0} {
	mwutil::wrongNumArgs "$win header option ?arg arg ...?"
    }

    variable headerOpts
    set opt [mwutil::fullOpt "option" [lindex $argList 0] $headerOpts]
    return [header_${opt}SubCmd $win [lrange $argList 1 end]]
}

#------------------------------------------------------------------------------
# tablelist::header_bboxSubCmd
#------------------------------------------------------------------------------
proc tablelist::header_bboxSubCmd {win argList} {
    if {[llength $argList] != 1} {
	mwutil::wrongNumArgs "$win header bbox headerIndex"
    }

    set index [hdr_rowIndex $win [lindex $argList 0] 0]

    upvar ::tablelist::ns${win}::data data
    set w $data(hdrTxt)
    set dlineinfo [$w dlineinfo [expr {$index + 2}].0]
    if {$data(hdr_itemCount) == 0 || [llength $dlineinfo] == 0} {
	return {}
    }

    set spacing1 [$w cget -spacing1]
    set spacing3 [$w cget -spacing3]
    foreach {x y width height baselinePos} $dlineinfo {}
    incr height -[expr {$spacing1 + $spacing3}]
    if {$height < 0} {
	set height 0
    }
    return [list [expr {$x + [winfo x $w]}] \
		 [expr {$y + [winfo y $w] + $spacing1}] $width $height]
}

#------------------------------------------------------------------------------
# tablelist::header_cellattribSubCmd
#------------------------------------------------------------------------------
proc tablelist::header_cellattribSubCmd {win argList} {
    if {[llength $argList] < 1} {
	mwutil::wrongNumArgs \
		"$win header cellattrib headerCellIndex ?name? ?value\
		 name value ...?"
    }

    foreach {row col} [hdr_cellIndex $win [lindex $argList 0] 1] {}
    upvar ::tablelist::ns${win}::data data
    set key [lindex $data(hdr_keyList) $row]
    return [mwutil::attribSubCmd $win $key,$col [lrange $argList 1 end]]
}

#------------------------------------------------------------------------------
# tablelist::header_cellbboxSubCmd
#------------------------------------------------------------------------------
proc tablelist::header_cellbboxSubCmd {win argList} {
    if {[llength $argList] != 1} {
	mwutil::wrongNumArgs "$win header cellbbox headerCellIndex"
    }

    foreach {row col} [hdr_cellIndex $win [lindex $argList 0] 0] {}
    upvar ::tablelist::ns${win}::data data
    if {$row < 0 || $row > $data(hdr_lastRow) ||
	$col < 0 || $col > $data(lastCol)} {
	return {}
    }

    set bbox [header_bboxSubCmd $win $row]
    if {[llength $bbox] == 0} {
	return {}
    }

    foreach {x y width height} $bbox {}
    set w $data(hdrTxtFrmLbl)$col
    return [list [expr {[winfo rootx $w] - [winfo rootx $win]}] $y \
		 [winfo width $w] $height]
}

#------------------------------------------------------------------------------
# tablelist::header_cellcgetSubCmd
#------------------------------------------------------------------------------
proc tablelist::header_cellcgetSubCmd {win argList} {
    if {[llength $argList] != 2} {
	mwutil::wrongNumArgs "$win header cellcget headerCellIndex option"
    }

    foreach {row col} [hdr_cellIndex $win [lindex $argList 0] 1] {}
    variable hdr_cellConfigSpecs
    set opt [mwutil::fullConfigOpt [lindex $argList 1] hdr_cellConfigSpecs]
    return [doCellCget h$row $col $win $opt]
}

#------------------------------------------------------------------------------
# tablelist::header_cellconfigureSubCmd
#------------------------------------------------------------------------------
proc tablelist::header_cellconfigureSubCmd {win argList} {
    if {[llength $argList] < 1} {
	mwutil::wrongNumArgs \
		"$win header cellconfigure headerCellIndex ?option? ?value\
		 option value ...?"
    }

    variable hdr_cellConfigSpecs
    foreach {row col} [hdr_cellIndex $win [lindex $argList 0] 1] {}
    return [mwutil::configureSubCmd $win hdr_cellConfigSpecs \
	    "tablelist::doCellConfig h$row $col" \
	    "tablelist::doCellCget h$row $col" [lrange $argList 1 end]]
}

#------------------------------------------------------------------------------
# tablelist::header_cellindexSubCmd
#------------------------------------------------------------------------------
proc tablelist::header_cellindexSubCmd {win argList} {
    if {[llength $argList] != 1} {
	mwutil::wrongNumArgs "$win header cellindex headerCellIndex"
    }

    return [join [hdr_cellIndex $win [lindex $argList 0] 0] ","]
}

#------------------------------------------------------------------------------
# tablelist::header_configcelllistSubCmd
#------------------------------------------------------------------------------
proc tablelist::header_configcelllistSubCmd {win argList} {
    if {[llength $argList] != 1} {
	mwutil::wrongNumArgs \
		"$win header configcelllist headerCellConfigSpecList"
    }

    return [header_configcellsSubCmd $win [lindex $argList 0]]
}

#------------------------------------------------------------------------------
# tablelist::header_configcellsSubCmd
#------------------------------------------------------------------------------
proc tablelist::header_configcellsSubCmd {win argList} {
    variable hdr_cellConfigSpecs

    set argCount [llength $argList]
    foreach {cell opt val} $argList {
	if {$argCount == 1} {
	    return -code error "option and value for \"$cell\" missing"
	} elseif {$argCount == 2} {
	    return -code error "value for \"$opt\" missing"
	}
	foreach {row col} [hdr_cellIndex $win $cell 1] {}
	mwutil::configureWidget $win hdr_cellConfigSpecs \
		"tablelist::doCellConfig h$row $col" \
		"tablelist::doCellCget h$row $col" [list $opt $val] 0
	incr argCount -3
    }

    return ""
}

#------------------------------------------------------------------------------
# tablelist::header_configrowlistSubCmd
#------------------------------------------------------------------------------
proc tablelist::header_configrowlistSubCmd {win argList} {
    if {[llength $argList] != 1} {
	mwutil::wrongNumArgs "$win header configrowlist headerRowConfigSpecList"
    }

    return [header_configrowsSubCmd $win [lindex $argList 0]]
}

#------------------------------------------------------------------------------
# tablelist::header_configrowsSubCmd
#------------------------------------------------------------------------------
proc tablelist::header_configrowsSubCmd {win argList} {
    variable hdr_rowConfigSpecs

    set argCount [llength $argList]
    foreach {rowSpec opt val} $argList {
	if {$argCount == 1} {
	    return -code error "option and value for \"$rowSpec\" missing"
	} elseif {$argCount == 2} {
	    return -code error "value for \"$opt\" missing"
	}
	set row [hdr_rowIndex $win $rowSpec 0 1]
	mwutil::configureWidget $win hdr_rowConfigSpecs \
		"tablelist::doRowConfig h$row" "tablelist::doRowCget $row" \
		[list $opt $val] 0
	incr argCount -3
    }

    return ""
}

#------------------------------------------------------------------------------
# tablelist::header_containingSubCmd
#------------------------------------------------------------------------------
proc tablelist::header_containingSubCmd {win argList} {
    if {[llength $argList] != 1} {
	mwutil::wrongNumArgs "$win header containing y"
    }

    ##nagelfar ignore
    set y [format "%d" [lindex $argList 0]]
    return [hdr_containingRow $win $y]
}

#------------------------------------------------------------------------------
# tablelist::header_containingcellSubCmd
#------------------------------------------------------------------------------
proc tablelist::header_containingcellSubCmd {win argList} {
    if {[llength $argList] != 2} {
	mwutil::wrongNumArgs "$win header containingcell x y"
    }

    ##nagelfar ignore
    set x [format "%d" [lindex $argList 0]]
    ##nagelfar ignore
    set y [format "%d" [lindex $argList 1]]
    return [hdr_containingRow $win $y],[containingCol $win $x]
}

#------------------------------------------------------------------------------
# tablelist::header_deleteSubCmd
#------------------------------------------------------------------------------
proc tablelist::header_deleteSubCmd {win argList} {
    set argCount [llength $argList]
    if {$argCount < 1 || $argCount > 2} {
	mwutil::wrongNumArgs \
		"$win header delete firstHeaderIndex lastHeaderIndex" \
		"$win header delete headerIndexList"
    }

    upvar ::tablelist::ns${win}::data data
    if {$data(isDisabled)} {
	return ""
    }

    set first [lindex $argList 0]

    if {$argCount == 1} {
	if {[llength $first] == 1} {		;# just to save time
	    set index [hdr_rowIndex $win [lindex $first 0] 0]
	    return [hdr_deleteRows $win $index $index]
	} elseif {$data(hdr_itemCount) == 0} {	;# no header items present
	    return ""
	} else {				;# a bit more work
	    #
	    # Sort the numerical equivalents of the
	    # specified indices in decreasing order
	    #
	    set indexList {}
	    foreach elem $first {
		set index [hdr_rowIndex $win $elem 0]
		if {$index < 0} {
		    set index 0
		} elseif {$index > $data(hdr_lastRow)} {
		    set index $data(hdr_lastRow)
		}
		lappend indexList $index
	    }
	    set indexList [lsort -integer -decreasing $indexList]
	    set indexCount [llength $indexList]
	    if {$indexCount == 0} {
		return ""
	    }

	    #
	    # Traverse the sorted index list and ignore any duplicates
	    #
	    set maxIndex [lindex $indexList 0]
	    set prevIndex [expr {$maxIndex + 1}]
	    foreach index $indexList {
		if {$index != $prevIndex} {
		    if {$index != $prevIndex - 1} {
			hdr_deleteRows $win $prevIndex $maxIndex
			set maxIndex $index
		    }
		    set prevIndex $index
		}
	    }
	    hdr_deleteRows $win $index $maxIndex
	    return ""
	}
    } else {
	if {$data(hdr_itemCount) == 0} {	;# no header items present
	    return ""
	} else {
	    set first [hdr_rowIndex $win $first 0]
	    set last [hdr_rowIndex $win [lindex $argList 1] 0]
	    return [hdr_deleteRows $win $first $last]
	}
    }
}

#------------------------------------------------------------------------------
# tablelist::header_embedcheckbuttonSubCmd
#------------------------------------------------------------------------------
proc tablelist::header_embedcheckbuttonSubCmd {win argList} {
    set argCount [llength $argList]
    if {$argCount < 1 || $argCount > 2} {
	mwutil::wrongNumArgs \
		"$win header embedcheckbutton headerCellIndex ?command?"
    }

    foreach {row col} [hdr_cellIndex $win [lindex $argList 0] 1] {}

    if {$argCount == 1} {
	set cmd ""
    } else {
	set cmd [lindex $argList 1]
    }

    doCellConfig h$row $col $win -window \
		 [list ::tablelist::hdr_createCkbtn $cmd]
    return ""
}

#------------------------------------------------------------------------------
# tablelist::header_embedcheckbuttonsSubCmd
#------------------------------------------------------------------------------
proc tablelist::header_embedcheckbuttonsSubCmd {win argList} {
    set argCount [llength $argList]
    if {$argCount < 1 || $argCount > 2} {
	mwutil::wrongNumArgs \
		"$win header embedcheckbuttons columnIndex ?command?"
    }

    set col [colIndex $win [lindex $argList 0] 1]

    if {$argCount == 1} {
	set cmd ""
    } else {
	set cmd [lindex $argList 1]
    }

    upvar ::tablelist::ns${win}::data data
    set hdr_itemCount $data(hdr_itemCount)
    for {set row 0} {$row < $hdr_itemCount} {incr row} {
	doCellConfig h$row $col $win -window \
		     [list ::tablelist::hdr_createCkbtn $cmd]
    }

    return ""
}

#------------------------------------------------------------------------------
# tablelist::header_embedttkcheckbuttonSubCmd
#------------------------------------------------------------------------------
proc tablelist::header_embedttkcheckbuttonSubCmd {win argList} {
    set argCount [llength $argList]
    if {$argCount < 1 || $argCount > 2} {
	mwutil::wrongNumArgs \
		"$win header embedttkcheckbutton headerCellIndex ?command?"
    }

    foreach {row col} [hdr_cellIndex $win [lindex $argList 0] 1] {}

    if {$argCount == 1} {
	set cmd ""
    } else {
	set cmd [lindex $argList 1]
    }

    doCellConfig h$row $col $win -window \
		 [list ::tablelist::hdr_createTtkCkbtn $cmd]
    return ""
}

#------------------------------------------------------------------------------
# tablelist::header_embedttkcheckbuttonsSubCmd
#------------------------------------------------------------------------------
proc tablelist::header_embedttkcheckbuttonsSubCmd {win argList} {
    set argCount [llength $argList]
    if {$argCount < 1 || $argCount > 2} {
	mwutil::wrongNumArgs \
		"$win header embedttkcheckbuttons columnIndex ?command?"
    }

    set col [colIndex $win [lindex $argList 0] 1]

    if {$argCount == 1} {
	set cmd ""
    } else {
	set cmd [lindex $argList 1]
    }

    upvar ::tablelist::ns${win}::data data
    set hdr_itemCount $data(hdr_itemCount)
    for {set row 0} {$row < $hdr_itemCount} {incr row} {
	doCellConfig h$row $col $win -window \
		     [list ::tablelist::hdr_createTtkCkbtn $cmd]
    }

    return ""
}

#------------------------------------------------------------------------------
# tablelist::header_fillcolumnSubCmd
#------------------------------------------------------------------------------
proc tablelist::header_fillcolumnSubCmd {win argList} {
    set argCount [llength $argList]
    if {$argCount < 2 || $argCount > 3} {
	mwutil::wrongNumArgs \
		"$win header fillcolumn columnIndex ?-text|-image|-window?\
		 value"
    }

    upvar ::tablelist::ns${win}::data data
    if {$data(isDisabled)} {
	return ""
    }

    set col [colIndex $win [lindex $argList 0] 1]
    set pixels [lindex $data(colList) [expr {2*$col}]]

    if {$argCount == 2} {
	set opt -text
	set val [lindex $argList 1]
    } else {
	variable fillColOpts
	set opt [mwutil::fullOpt "option" [lindex $argList 1] $fillColOpts]
	set val [lindex $argList 2]
    }

    switch -- $opt {
	-text {
	    #
	    # Update the header item list
	    #
	    set hdr_newItemList {}
	    foreach item $data(hdr_itemList) {
		set item [lreplace $item $col $col $val]
		lappend hdr_newItemList $item
	    }
	    set data(hdr_itemList) $hdr_newItemList

	    #
	    # Adjust the columns if necessary and make sure the
	    # specified column will be redisplayed at idle time
	    #
	    if {$pixels == 0} {
		adjustColumns $win $col 1
	    }
	    redisplayColWhenIdle $win $col
	}

	default {
	    #
	    # Configure the header cells of the specified column
	    #
	    set hdr_itemCount $data(hdr_itemCount)
	    for {set row 0} {$row < $hdr_itemCount} {incr row} {
		doCellConfig h$row $col $win $opt $val 1
	    }

	    #
	    # Adjust the columns if necessary
	    #
	    if {$pixels == 0} {
		adjustColumns $win $col 1
	    }
	}
    }

    updateViewWhenIdle $win
    return ""
}

#------------------------------------------------------------------------------
# tablelist::header_findrownameSubCmd
#------------------------------------------------------------------------------
proc tablelist::header_findrownameSubCmd {win argList} {
    if {[llength $argList] != 1} {
	mwutil::wrongNumArgs "$win header findrowname name"
    }

    set name [lindex $argList 0]
    set nameIsEmpty [expr {$name eq ""}]

    upvar ::tablelist::ns${win}::data data
    set hdr_itemCount $data(hdr_itemCount)
    for {set row 0} {$row < $hdr_itemCount} {incr row} {
	set key [lindex $data(hdr_keyList) $row]
	set hasName [info exists data($key-name)]
	if {($hasName && $name eq $data($key-name)) ||
	    (!$hasName && $nameIsEmpty)} {
	    return $row
	}
    }
    return -1
}

#------------------------------------------------------------------------------
# tablelist::header_getSubCmd
#------------------------------------------------------------------------------
proc tablelist::header_getSubCmd {win argList} {
    set argCount [llength $argList]
    if {$argCount < 1 || $argCount > 2} {
	mwutil::wrongNumArgs \
		"$win header get firstHeaderIndex lastHeaderIndex" \
		"$win header get headerIndexList"
    }

    set first [lindex $argList 0]

    #
    # Get the specified items from the internal list
    #
    upvar ::tablelist::ns${win}::data data
    set result {}
    if {$argCount == 1} {
	foreach elem $first {
	    set row [hdr_rowIndex $win $elem 0]
	    if {$row >= 0 && $row < $data(hdr_itemCount)} {
		set item [lindex $data(hdr_itemList) $row]
		lappend result [lrange $item 0 $data(lastCol)]
	    }
	}

	if {[llength $first] == 1} {
	    return [lindex $result 0]
	} else {
	    return $result
	}
    } else {
	set first [hdr_rowIndex $win $first 0]
	set last [hdr_rowIndex $win [lindex $argList 1] 0]
	if {$last < $first} {
	    return {}
	}

	#
	# Adjust the range to fit within the existing items
	#
	if {$first < 0} {
	    set first 0
	}
	if {$last > $data(hdr_lastRow)} {
	    set last $data(hdr_lastRow)
	}

	foreach item [lrange $data(hdr_itemList) $first $last] {
	    lappend result [lrange $item 0 $data(lastCol)]
	}
	return $result
    }
}

#------------------------------------------------------------------------------
# tablelist::header_getcellsSubCmd
#------------------------------------------------------------------------------
proc tablelist::header_getcellsSubCmd {win argList} {
    set argCount [llength $argList]
    if {$argCount < 1 || $argCount > 2} {
	mwutil::wrongNumArgs \
		"$win header getcells firstHeaderCell lastHeaderCell" \
		"$win header getcells headerCellIndexList"
    }

    set first [lindex $argList 0]

    #
    # Get the specified elements from the internal list
    #
    upvar ::tablelist::ns${win}::data data
    set result {}
    if {$argCount == 1} {
	foreach elem $first {
	    foreach {row col} [hdr_cellIndex $win $elem 1] {}
	    lappend result [lindex [lindex $data(hdr_itemList) $row] $col]
	}

	if {[llength $first] == 1} {
	    return [lindex $result 0]
	} else {
	    return $result
	}
    } else {
	foreach {firstRow firstCol} [hdr_cellIndex $win $first 1] {}
	foreach {lastRow lastCol} [hdr_cellIndex $win [lindex $argList 1] 1] {}

	foreach item [lrange $data(hdr_itemList) $firstRow $lastRow] {
	    foreach elem [lrange $item $firstCol $lastCol] {
		lappend result $elem
	    }
	}
	return $result
    }
}

#------------------------------------------------------------------------------
# tablelist::header_getcolumnsSubCmd
#------------------------------------------------------------------------------
proc tablelist::header_getcolumnsSubCmd {win argList} {
    set argCount [llength $argList]
    if {$argCount < 1 || $argCount > 2} {
	mwutil::wrongNumArgs \
		"$win header getcolumns firstColumn lastColumn" \
		"$win header getcolumns columnIndexList"
    }

    set first [lindex $argList 0]

    #
    # Get the specified columns from the internal list
    #
    upvar ::tablelist::ns${win}::data data
    set result {}
    if {$argCount == 1} {
	foreach elem $first {
	    set col [colIndex $win $elem 1]
	    set colResult {}
	    foreach item $data(hdr_itemList) {
		lappend colResult [lindex $item $col]
	    }
	    lappend result $colResult
	}

	if {[llength $first] == 1} {
	    return [lindex $result 0]
	} else {
	    return $result
	}
    } else {
	set first [colIndex $win $first 1]
	set last [colIndex $win [lindex $argList 1] 1]

	for {set col $first} {$col <= $last} {incr col} {
	    set colResult {}
	    foreach item $data(hdr_itemList) {
		lappend colResult [lindex $item $col]
	    }
	    lappend result $colResult
	}
	return $result
    }
}

#------------------------------------------------------------------------------
# tablelist::header_getformattedSubCmd
#------------------------------------------------------------------------------
proc tablelist::header_getformattedSubCmd {win argList} {
    set argCount [llength $argList]
    if {$argCount < 1 || $argCount > 2} {
	mwutil::wrongNumArgs \
		"$win header getformatted firstHeaderIndex lastHeaderIndex" \
		"$win header getformatted headerIndexList"
    }

    set first [lindex $argList 0]

    #
    # Get the specified items from the internal list
    #
    upvar ::tablelist::ns${win}::data data
    set result {}
    if {$argCount == 1} {
	foreach elem $first {
	    set row [hdr_rowIndex $win $elem 0]
	    if {$row >= 0 && $row < $data(hdr_itemCount)} {
		set item [lindex $data(hdr_itemList) $row]
		set key [lindex $item end]
		set item [lrange $item 0 $data(lastCol)]
		lappend result [formatItem $win $key $row $item]
	    }
	}

	if {[llength $first] == 1} {
	    return [lindex $result 0]
	} else {
	    return $result
	}
    } else {
	set first [hdr_rowIndex $win $first 0]
	set last [hdr_rowIndex $win [lindex $argList 1] 0]
	if {$last < $first} {
	    return {}
	}

	#
	# Adjust the range to fit within the existing items
	#
	if {$first < 0} {
	    set first 0
	}
	if {$last > $data(hdr_lastRow)} {
	    set last $data(hdr_lastRow)
	}

	set row $first
	foreach item [lrange $data(hdr_itemList) $first $last] {
	    set key [lindex $item end]
	    set item [lrange $item 0 $data(lastCol)]
	    lappend result [formatItem $win $key $row $item]
	    incr row
	}
	return $result
    }
}

#------------------------------------------------------------------------------
# tablelist::header_getformattedcellsSubCmd
#------------------------------------------------------------------------------
proc tablelist::header_getformattedcellsSubCmd {win argList} {
    set argCount [llength $argList]
    if {$argCount < 1 || $argCount > 2} {
	mwutil::wrongNumArgs \
		"$win header getformattedcells firstHeaderCell lastHeaderCell" \
		"$win header getformattedcells headerCellIndexList"
    }

    set first [lindex $argList 0]

    #
    # Get the specified elements from the internal list
    #
    upvar ::tablelist::ns${win}::data data
    set result {}
    if {$argCount == 1} {
	foreach elem $first {
	    foreach {row col} [hdr_cellIndex $win $elem 1] {}
	    set item [lindex $data(hdr_itemList) $row]
	    set key [lindex $item end]
	    set text [lindex $item $col]
	    if {[lindex $data(fmtCmdFlagList) $col]} {
		set text [formatElem $win $key $row $col $text]
	    }
	    lappend result $text
	}

	if {[llength $first] == 1} {
	    return [lindex $result 0]
	} else {
	    return $result
	}
    } else {
	foreach {firstRow firstCol} [hdr_cellIndex $win $first 1] {}
	foreach {lastRow lastCol} [hdr_cellIndex $win [lindex $argList 1] 1] {}

	set row $firstRow
	foreach item [lrange $data(hdr_itemList) $firstRow $lastRow] {
	    set key [lindex $item end]
	    set col $firstCol
	    foreach text [lrange $item $firstCol $lastCol] {
		if {[lindex $data(fmtCmdFlagList) $col]} {
		    set text [formatElem $win $key $row $col $text]
		}
		lappend result $text
		incr col
	    }
	    incr row
	}
	return $result
    }
}

#------------------------------------------------------------------------------
# tablelist::header_getformattedcolumnsSubCmd
#------------------------------------------------------------------------------
proc tablelist::header_getformattedcolumnsSubCmd {win argList} {
    set argCount [llength $argList]
    if {$argCount < 1 || $argCount > 2} {
	mwutil::wrongNumArgs \
		"$win header getformattedcolumns firstColumn lastColumn" \
		"$win header getformattedcolumns columnIndexList"
    }

    set first [lindex $argList 0]

    #
    # Get the specified columns from the internal list
    #
    upvar ::tablelist::ns${win}::data data
    set result {}
    if {$argCount == 1} {
	foreach elem $first {
	    set col [colIndex $win $elem 1]
	    set fmtCmdFlag [lindex $data(fmtCmdFlagList) $col]
	    set colResult {}
	    set row 0
	    foreach item $data(hdr_itemList) {
		set key [lindex $item end]
		set text [lindex $item $col]
		if {$fmtCmdFlag} {
		    set text [formatElem $win $key $row $col $text]
		}
		lappend colResult $text
		incr row
	    }
	    lappend result $colResult
	}

	if {[llength $first] == 1} {
	    return [lindex $result 0]
	} else {
	    return $result
	}
    } else {
	set first [colIndex $win $first 1]
	set last [colIndex $win [lindex $argList 1] 1]

	for {set col $first} {$col <= $last} {incr col} {
	    set fmtCmdFlag [lindex $data(fmtCmdFlagList) $col]
	    set colResult {}
	    set row 0
	    foreach item $data(hdr_itemList) {
		set key [lindex $item end]
		set text [lindex $item $col]
		if {$fmtCmdFlag} {
		    set text [formatElem $win $key $row $col $text]
		}
		lappend colResult $text
		incr row
	    }
	    lappend result $colResult
	}
	return $result
    }
}

#------------------------------------------------------------------------------
# tablelist::header_getfullkeysSubCmd
#------------------------------------------------------------------------------
proc tablelist::header_getfullkeysSubCmd {win argList} {
    set argCount [llength $argList]
    if {$argCount < 1 || $argCount > 2} {
	mwutil::wrongNumArgs \
		"$win header getfullkeys firstHeaderIndex lastHeaderIndex" \
		"$win header getfullkeys headerIndexList"
    }

    set first [lindex $argList 0]

    #
    # Get the specified keys from the internal list
    #
    upvar ::tablelist::ns${win}::data data
    set result {}
    if {$argCount == 1} {
	foreach elem $first {
	    set row [hdr_rowIndex $win $elem 0]
	    if {$row >= 0 && $row < $data(hdr_itemCount)} {
		lappend result [lindex [lindex $data(hdr_itemList) $row] end]
	    }
	}

	if {[llength $first] == 1} {
	    return [lindex $result 0]
	} else {
	    return $result
	}
    } else {
	set first [hdr_rowIndex $win $first 0]
	set last [hdr_rowIndex $win [lindex $argList 1] 0]
	if {$last < $first} {
	    return {}
	}

	#
	# Adjust the range to fit within the existing items
	#
	if {$first < 0} {
	    set first 0
	}
	if {$last > $data(hdr_lastRow)} {
	    set last $data(hdr_lastRow)
	}

	foreach item [lrange $data(hdr_itemList) $first $last] {
	    lappend result [lindex $item end]
	}
	return $result
    }
}

#------------------------------------------------------------------------------
# tablelist::header_getkeysSubCmd
#------------------------------------------------------------------------------
proc tablelist::header_getkeysSubCmd {win argList} {
    set argCount [llength $argList]
    if {$argCount < 1 || $argCount > 2} {
	mwutil::wrongNumArgs \
		"$win header getkeys firstHeaderIndex lastHeaderIndex" \
		"$win header getkeys headerIndexList"
    }

    set first [lindex $argList 0]

    #
    # Get the specified keys from the internal list
    #
    upvar ::tablelist::ns${win}::data data
    set result {}
    if {$argCount == 1} {
	foreach elem $first {
	    set row [hdr_rowIndex $win $elem 0]
	    if {$row >= 0 && $row < $data(hdr_itemCount)} {
		set item [lindex $data(hdr_itemList) $row]
		lappend result [string range [lindex $item end] 2 end]
	    }
	}

	if {[llength $first] == 1} {
	    return [lindex $result 0]
	} else {
	    return $result
	}
    } else {
	set first [hdr_rowIndex $win $first 0]
	set last [hdr_rowIndex $win [lindex $argList 1] 0]
	if {$last < $first} {
	    return {}
	}

	#
	# Adjust the range to fit within the existing items
	#
	if {$first < 0} {
	    set first 0
	}
	if {$last > $data(hdr_lastRow)} {
	    set last $data(hdr_lastRow)
	}

	foreach item [lrange $data(hdr_itemList) $first $last] {
	    lappend result [string range [lindex $item end] 2 end]
	}
	return $result
    }
}

#------------------------------------------------------------------------------
# tablelist::header_hascellattribSubCmd
#------------------------------------------------------------------------------
proc tablelist::header_hascellattribSubCmd {win argList} {
    if {[llength $argList] != 2} {
	mwutil::wrongNumArgs "$win header hascellattrib headerCellIndex name"
    }

    foreach {row col} [hdr_cellIndex $win [lindex $argList 0] 1] {}
    upvar ::tablelist::ns${win}::data data
    set key [lindex $data(hdr_keyList) $row]
    return [mwutil::hasattribSubCmd $win $key,$col [lindex $argList 1]]
}

#------------------------------------------------------------------------------
# tablelist::header_hasrowattribSubCmd
#------------------------------------------------------------------------------
proc tablelist::header_hasrowattribSubCmd {win argList} {
    if {[llength $argList] != 2} {
	mwutil::wrongNumArgs "$win header hasrowattrib headerIndex name"
    }

    set row [hdr_rowIndex $win [lindex $argList 0] 0 1]
    upvar ::tablelist::ns${win}::data data
    set key [lindex $data(hdr_keyList) $row]
    return [mwutil::hasattribSubCmd $win $key [lindex $argList 1]]
}

#------------------------------------------------------------------------------
# tablelist::header_imagelabelpathSubCmd
#------------------------------------------------------------------------------
proc tablelist::header_imagelabelpathSubCmd {win argList} {
    if {[llength $argList] != 1} {
	mwutil::wrongNumArgs "$win header imagelabelpath headerCellIndex"
    }

    foreach {row col} [hdr_cellIndex $win [lindex $argList 0] 1] {}
    upvar ::tablelist::ns${win}::data data
    set key [lindex $data(hdr_keyList) $row]
    set w $data(hdrTxt).img_$key,$col
    if {[winfo exists $w]} {
	return $w
    } else {
	return ""
    }
}

#------------------------------------------------------------------------------
# tablelist::header_indexSubCmd
#------------------------------------------------------------------------------
proc tablelist::header_indexSubCmd {win argList} {
    if {[llength $argList] != 1} {
	mwutil::wrongNumArgs "$win header index headerIndex"
    }

    return [hdr_rowIndex $win [lindex $argList 0] 1]
}

#------------------------------------------------------------------------------
# tablelist::header_insertSubCmd
#------------------------------------------------------------------------------
proc tablelist::header_insertSubCmd {win argList} {
    if {[llength $argList] < 1} {
	mwutil::wrongNumArgs "$win header insert headerIndex ?item item ...?"
    }

    upvar ::tablelist::ns${win}::data data
    if {$data(isDisabled)} {
	return ""
    }

    set index [hdr_rowIndex $win [lindex $argList 0] 1]
    return [hdr_insertRows $win $index [lrange $argList 1 end]]
}

#------------------------------------------------------------------------------
# tablelist::header_insertlistSubCmd
#------------------------------------------------------------------------------
proc tablelist::header_insertlistSubCmd {win argList} {
    if {[llength $argList] != 2} {
	mwutil::wrongNumArgs "$win header insertlist headerIndex itemList"
    }

    upvar ::tablelist::ns${win}::data data
    if {$data(isDisabled)} {
	return ""
    }

    set index [hdr_rowIndex $win [lindex $argList 0] 1]
    return [hdr_insertRows $win $index [lindex $argList 1]]
}

#------------------------------------------------------------------------------
# tablelist::header_iselemsnippedSubCmd
#------------------------------------------------------------------------------
proc tablelist::header_iselemsnippedSubCmd {win argList} {
    if {[llength $argList] != 2} {
	mwutil::wrongNumArgs \
		"$win header iselemsnipped headerCellIndex fullTextName"
    }

    foreach {row col} [hdr_cellIndex $win [lindex $argList 0] 1] {}
    set fullTextName [lindex $argList 1]
    upvar 3 $fullTextName fullText

    upvar ::tablelist::ns${win}::data data
    set item [lindex $data(hdr_itemList) $row]
    set key [lindex $item end]
    set fullText [lindex $item $col]
    if {[lindex $data(fmtCmdFlagList) $col]} {
	set fullText [formatElem $win $key $row $col $fullText]
    }
    if {[string match "*\t*" $fullText]} {
	set fullText [mapTabs $fullText]
    }

    set pixels [lindex $data(colList) [expr {2*$col}]]
    if {$pixels == 0} {				;# convention: dynamic width
	if {$data($col-maxPixels) > 0 &&
	    $data($col-reqPixels) > $data($col-maxPixels)} {
	    set pixels $data($col-maxPixels)
	}
    }
    if {$pixels == 0 || $data($col-wrap)} {
	return 0
    }

    set text $fullText
    getAuxData $win $key $col auxType auxWidth $pixels
    set indentWidth 0
    set cellFont [getCellFont $win $key $col]
    incr pixels $data($col-delta)

    if {[string match "*\n*" $text]} {
	set list [split $text "\n"]
	adjustMlElem $win list auxWidth indentWidth $cellFont $pixels "r" ""
	set text [join $list "\n"]
    } else {
	adjustElem $win text auxWidth indentWidth $cellFont $pixels "r" ""
    }

    return [expr {$text ne $fullText}]
}

#------------------------------------------------------------------------------
# tablelist::header_itemlistvarSubCmd
#------------------------------------------------------------------------------
proc tablelist::header_itemlistvarSubCmd {win argList} {
    if {[llength $argList] != 0} {
	mwutil::wrongNumArgs "$win header itemlistvar"
    }

    return ::tablelist::ns${win}::data(hdr_itemList)
}

#------------------------------------------------------------------------------
# tablelist::header_nearestSubCmd
#------------------------------------------------------------------------------
proc tablelist::header_nearestSubCmd {win argList} {
    if {[llength $argList] != 1} {
	mwutil::wrongNumArgs "$win header nearest y"
    }

    ##nagelfar ignore
    set y [format "%d" [lindex $argList 0]]
    return [hdr_rowIndex $win @0,$y 0]
}

#------------------------------------------------------------------------------
# tablelist::header_nearestcellSubCmd
#------------------------------------------------------------------------------
proc tablelist::header_nearestcellSubCmd {win argList} {
    if {[llength $argList] != 2} {
	mwutil::wrongNumArgs "$win header nearestcell x y"
    }

    ##nagelfar ignore
    set x [format "%d" [lindex $argList 0]]
    ##nagelfar ignore
    set y [format "%d" [lindex $argList 1]]
    return [join [hdr_cellIndex $win @$x,$y 0] ","]
}

#------------------------------------------------------------------------------
# tablelist::header_rowattribSubCmd
#------------------------------------------------------------------------------
proc tablelist::header_rowattribSubCmd {win argList} {
    if {[llength $argList] < 1} {
	mwutil::wrongNumArgs \
		"$win header rowattrib headerIndex ?name? ?value\
		 name value ...?"
    }

    set row [hdr_rowIndex $win [lindex $argList 0] 0 1]
    upvar ::tablelist::ns${win}::data data
    set key [lindex $data(hdr_keyList) $row]
    return [mwutil::attribSubCmd $win $key [lrange $argList 1 end]]
}

#------------------------------------------------------------------------------
# tablelist::header_rowcgetSubCmd
#------------------------------------------------------------------------------
proc tablelist::header_rowcgetSubCmd {win argList} {
    if {[llength $argList] != 2} {
	mwutil::wrongNumArgs "$win header rowcget headerIndex option"
    }

    set row [hdr_rowIndex $win [lindex $argList 0] 0 1]
    variable hdr_rowConfigSpecs
    set opt [mwutil::fullConfigOpt [lindex $argList 1] hdr_rowConfigSpecs]
    return [doRowCget h$row $win $opt]
}

#------------------------------------------------------------------------------
# tablelist::header_rowconfigureSubCmd
#------------------------------------------------------------------------------
proc tablelist::header_rowconfigureSubCmd {win argList} {
    if {[llength $argList] < 1} {
	mwutil::wrongNumArgs \
		"$win header rowconfigure headerIndex ?option? ?value\
		 option value ...?"
    }

    variable hdr_rowConfigSpecs
    set row [hdr_rowIndex $win [lindex $argList 0] 0 1]
    return [mwutil::configureSubCmd $win hdr_rowConfigSpecs \
	    "tablelist::doRowConfig h$row" "tablelist::doRowCget h$row" \
	    [lrange $argList 1 end]]
}

#------------------------------------------------------------------------------
# tablelist::header_sizeSubCmd
#------------------------------------------------------------------------------
proc tablelist::header_sizeSubCmd {win argList} {
    if {[llength $argList] != 0} {
	mwutil::wrongNumArgs "$win header size"
    }

    upvar ::tablelist::ns${win}::data data
    return $data(hdr_itemCount)
}

#------------------------------------------------------------------------------
# tablelist::header_unsetcellattribSubCmd
#------------------------------------------------------------------------------
proc tablelist::header_unsetcellattribSubCmd {win argList} {
    if {[llength $argList] != 2} {
	mwutil::wrongNumArgs "$win header unsetcellattrib headerCellIndex name"
    }

    foreach {row col} [hdr_cellIndex $win [lindex $argList 0] 1] {}
    upvar ::tablelist::ns${win}::data data
    set key [lindex $data(hdr_keyList) $row]
    return [mwutil::unsetattribSubCmd $win $key,$col [lindex $argList 1]]
}

#------------------------------------------------------------------------------
# tablelist::header_unsetrowattribSubCmd
#------------------------------------------------------------------------------
proc tablelist::header_unsetrowattribSubCmd {win argList} {
    if {[llength $argList] != 2} {
	mwutil::wrongNumArgs "$win header unsetrowattrib headerIndex name"
    }

    set row [hdr_rowIndex $win [lindex $argList 0] 0]
    upvar ::tablelist::ns${win}::data data
    set key [lindex $data(hdr_keyList) $row]
    return [mwutil::unsetattribSubCmd $win $key [lindex $argList 1]]
}

#------------------------------------------------------------------------------
# tablelist::header_windowpathSubCmd
#------------------------------------------------------------------------------
proc tablelist::header_windowpathSubCmd {win argList} {
    if {[llength $argList] != 1} {
	mwutil::wrongNumArgs "$win header windowpath headerCellIndex"
    }

    foreach {row col} [hdr_cellIndex $win [lindex $argList 0] 1] {}
    upvar ::tablelist::ns${win}::data data
    set key [lindex $data(hdr_keyList) $row]
    set w $data(hdrTxt).frm_$key,$col.w
    if {[winfo exists $w]} {
	return $w
    } else {
	return ""
    }
}

#------------------------------------------------------------------------------
# tablelist::headerpathSubCmd
#------------------------------------------------------------------------------
proc tablelist::headerpathSubCmd {win argList} {
    if {[llength $argList] != 0} {
	mwutil::wrongNumArgs "$win headerpath"
    }

    upvar ::tablelist::ns${win}::data data
    return $data(hdrTxt)
}

#------------------------------------------------------------------------------
# tablelist::headertagSubCmd
#------------------------------------------------------------------------------
proc tablelist::headertagSubCmd {win argList} {
    if {[llength $argList] != 0} {
	mwutil::wrongNumArgs "$win headertag"
    }

    upvar ::tablelist::ns${win}::data data
    return $data(headerTag)
}

#------------------------------------------------------------------------------
# tablelist::hidetargetmarkSubCmd
#------------------------------------------------------------------------------
proc tablelist::hidetargetmarkSubCmd {win argList} {
    if {[llength $argList] != 0} {
	mwutil::wrongNumArgs "$win hidetargetmark"
    }

    upvar ::tablelist::ns${win}::data data
    place forget $data(rowGap)
    return ""
}

#------------------------------------------------------------------------------
# tablelist::imagelabelpathSubCmd
#------------------------------------------------------------------------------
proc tablelist::imagelabelpathSubCmd {win argList} {
    if {[llength $argList] != 1} {
	mwutil::wrongNumArgs "$win imagelabelpath cellIndex"
    }

    synchronize $win
    foreach {row col} [cellIndex $win [lindex $argList 0] 1] {}
    upvar ::tablelist::ns${win}::data data
    set key [lindex $data(keyList) $row]
    set w $data(body).img_$key,$col
    if {[winfo exists $w]} {
	return $w
    } else {
	return ""
    }
}

#------------------------------------------------------------------------------
# tablelist::indexSubCmd
#------------------------------------------------------------------------------
proc tablelist::indexSubCmd {win argList} {
    if {[llength $argList] != 1} {
	mwutil::wrongNumArgs "$win index index"
    }

    synchronize $win
    return [rowIndex $win [lindex $argList 0] 1]
}

#------------------------------------------------------------------------------
# tablelist::insertSubCmd
#------------------------------------------------------------------------------
proc tablelist::insertSubCmd {win argList} {
    if {[llength $argList] < 1} {
	mwutil::wrongNumArgs "$win insert index ?item item ...?"
    }

    upvar ::tablelist::ns${win}::data data
    if {$data(isDisabled)} {
	return ""
    }

    synchronize $win
    set index [rowIndex $win [lindex $argList 0] 1]
    return [insertRows $win $index [lrange $argList 1 end] \
	    $data(hasListVar) root $index]
}

#------------------------------------------------------------------------------
# tablelist::insertchildlistSubCmd
#------------------------------------------------------------------------------
proc tablelist::insertchildlistSubCmd {win argList} {
    if {[llength $argList] != 3} {
	mwutil::wrongNumArgs \
		"$win insertchildlist parentNodeIndex childIndex itemList"
    }

    upvar ::tablelist::ns${win}::data data
    if {$data(isDisabled)} {
	return ""
    }

    synchronize $win
    set parentKey [nodeIndexToKey $win [lindex $argList 0]]
    set childIdx [lindex $argList 1]
    set listIdx [nodeRow $win $parentKey $childIdx]
    set itemList [lindex $argList 2]
    set result [insertRows $win $listIdx $itemList $data(hasListVar) \
		$parentKey $childIdx]

    if {$data(colCount) == 0} {
	return $result
    }

    displayItems $win
    set treeCol $data(treeCol)
    set treeStyle $data(-treestyle)

    #
    # Mark the parent item as expanded if it was just indented
    #
    set depth [depth $win $parentKey]
    if {[info exists data($parentKey,$treeCol-indent)] &&
	$data($parentKey,$treeCol-indent) eq \
	"tablelist_${treeStyle}_indentedImg$depth"} {
	set data($parentKey,$treeCol-indent) \
	    tablelist_${treeStyle}_expandedImg$depth
	if {[winfo exists $data(body).ind_$parentKey,$treeCol]} {
	    set idx [string last "g" $data($parentKey,$treeCol-indent)]
	    set img [string range $data($parentKey,$treeCol-indent) 0 $idx]
	    $data(body).ind_$parentKey,$treeCol configure -image $img
	}
    }

    #
    # Elide the new items if the parent is collapsed or non-viewable
    #
    set itemCount [llength $itemList]
    if {$parentKey ne $data(keyBeingExpanded) &&
	(([info exists data($parentKey,$treeCol-indent)] && \
	  $data($parentKey,$treeCol-indent) eq \
	  "tablelist_${treeStyle}_collapsedImg$depth") || \
	 [info exists data($parentKey-elide)] || \
	 [info exists data($parentKey-hide)])} {
	for {set n 0; set row $listIdx} {$n < $itemCount} {incr n; incr row} {
	    doRowConfig $row $win -elide 1
	}
    }

    #
    # Mark the new items as indented
    #
    incr depth
    variable maxIndentDepths
    if {$depth > $maxIndentDepths($treeStyle)} {
	setTreeLabelWidths $treeStyle $depth
	set maxIndentDepths($treeStyle) $depth
    }
    for {set n 0; set row $listIdx} {$n < $itemCount} {incr n; incr row} {
	doCellConfig $row $treeCol $win -indent \
		     tablelist_${treeStyle}_indentedImg$depth
    }

    return $result
}

#------------------------------------------------------------------------------
# tablelist::insertchildrenSubCmd
#------------------------------------------------------------------------------
proc tablelist::insertchildrenSubCmd {win argList} {
    if {[llength $argList] < 2} {
	mwutil::wrongNumArgs \
		"$win insertchildren parentNodeIndex childIndex ?item item ...?"
    }

    return [insertchildlistSubCmd $win [list [lindex $argList 0] \
	    [lindex $argList 1] [lrange $argList 2 end]]]
}

#------------------------------------------------------------------------------
# tablelist::insertcolumnlistSubCmd
#------------------------------------------------------------------------------
proc tablelist::insertcolumnlistSubCmd {win argList} {
    if {[llength $argList] != 2} {
	mwutil::wrongNumArgs "$win insertcolumnlist columnIndex columnList"
    }

    upvar ::tablelist::ns${win}::data data
    if {$data(isDisabled)} {
	return ""
    }

    synchronize $win
    displayItems $win
    set arg0 [lindex $argList 0]
    if {[string first $arg0 "end"] == 0 || $arg0 == $data(colCount)} {
	set col $data(colCount)
    } else {
	set col [colIndex $win $arg0 1]
    }

    return [insertCols $win $col [lindex $argList 1]]
}

#------------------------------------------------------------------------------
# tablelist::insertcolumnsSubCmd
#------------------------------------------------------------------------------
proc tablelist::insertcolumnsSubCmd {win argList} {
    if {[llength $argList] < 1} {
	mwutil::wrongNumArgs \
		"$win insertcolumns columnIndex ?width title ?alignment?\
		 width title ?alignment? ...?"
    }

    upvar ::tablelist::ns${win}::data data
    if {$data(isDisabled)} {
	return ""
    }

    synchronize $win
    displayItems $win
    set arg0 [lindex $argList 0]
    if {[string first $arg0 "end"] == 0 || $arg0 == $data(colCount)} {
	set col $data(colCount)
    } else {
	set col [colIndex $win $arg0 1]
    }

    insertCols $win $col [lrange $argList 1 end]
}

#------------------------------------------------------------------------------
# tablelist::insertlistSubCmd
#------------------------------------------------------------------------------
proc tablelist::insertlistSubCmd {win argList} {
    if {[llength $argList] != 2} {
	mwutil::wrongNumArgs "$win insertlist index itemList"
    }

    upvar ::tablelist::ns${win}::data data
    if {$data(isDisabled)} {
	return ""
    }

    synchronize $win
    set index [rowIndex $win [lindex $argList 0] 1]
    return [insertRows $win $index [lindex $argList 1] \
	    $data(hasListVar) root $index]
}

#------------------------------------------------------------------------------
# tablelist::iselemsnippedSubCmd
#------------------------------------------------------------------------------
proc tablelist::iselemsnippedSubCmd {win argList} {
    if {[llength $argList] != 2} {
	mwutil::wrongNumArgs "$win iselemsnipped cellIndex fullTextName"
    }

    synchronize $win
    foreach {row col} [cellIndex $win [lindex $argList 0] 1] {}
    set fullTextName [lindex $argList 1]
    upvar 2 $fullTextName fullText

    upvar ::tablelist::ns${win}::data data
    set item [lindex $data(itemList) $row]
    set key [lindex $item end]
    set fullText [lindex $item $col]
    if {[lindex $data(fmtCmdFlagList) $col]} {
	set fullText [formatElem $win $key $row $col $fullText]
    }
    if {[string match "*\t*" $fullText]} {
	set fullText [mapTabs $fullText]
    }

    set pixels [lindex $data(colList) [expr {2*$col}]]
    if {$pixels == 0} {				;# convention: dynamic width
	if {$data($col-maxPixels) > 0 &&
	    $data($col-reqPixels) > $data($col-maxPixels)} {
	    set pixels $data($col-maxPixels)
	}
    }
    if {$pixels == 0 || $data($col-wrap)} {
	return 0
    }

    set text $fullText
    getAuxData $win $key $col auxType auxWidth $pixels
    getIndentData $win $key $col indentWidth
    set cellFont [getCellFont $win $key $col]
    incr pixels $data($col-delta)

    if {[string match "*\n*" $text]} {
	set list [split $text "\n"]
	adjustMlElem $win list auxWidth indentWidth $cellFont $pixels "r" ""
	set text [join $list "\n"]
    } else {
	adjustElem $win text auxWidth indentWidth $cellFont $pixels "r" ""
    }

    return [expr {$text ne $fullText}]
}

#------------------------------------------------------------------------------
# tablelist::isexpandedSubCmd
#------------------------------------------------------------------------------
proc tablelist::isexpandedSubCmd {win argList} {
    if {[llength $argList] != 1} {
	mwutil::wrongNumArgs "$win isexpanded index"
    }

    synchronize $win
    set row [rowIndex $win [lindex $argList 0] 0]
    upvar ::tablelist::ns${win}::data data
    set key [lindex $data(keyList) $row]
    set treeCol $data(treeCol)
    if {[info exists data($key,$treeCol-indent)]} {
	return [string match "*expanded*" $data($key,$treeCol-indent)]
    } else {
	return 0
    }
}

#------------------------------------------------------------------------------
# tablelist::istitlesnippedSubCmd
#------------------------------------------------------------------------------
proc tablelist::istitlesnippedSubCmd {win argList} {
    if {[llength $argList] != 2} {
	mwutil::wrongNumArgs "$win istitlesnipped columnIndex fullTextName"
    }

    set col [colIndex $win [lindex $argList 0] 1]
    set fullTextName [lindex $argList 1]
    upvar 2 $fullTextName fullText

    upvar ::tablelist::ns${win}::data data
    set fullText [lindex $data(-columns) [expr {3*$col + 1}]]
    return $data($col-isSnipped)
}

#------------------------------------------------------------------------------
# tablelist::isviewableSubCmd
#------------------------------------------------------------------------------
proc tablelist::isviewableSubCmd {win argList} {
    if {[llength $argList] != 1} {
	mwutil::wrongNumArgs "$win isviewable index"
    }

    synchronize $win
    set row [rowIndex $win [lindex $argList 0] 0 1]
    return [isRowViewable $win $row]
}

#------------------------------------------------------------------------------
# tablelist::itemlistvarSubCmd
#------------------------------------------------------------------------------
proc tablelist::itemlistvarSubCmd {win argList} {
    if {[llength $argList] != 0} {
	mwutil::wrongNumArgs "$win itemlistvar"
    }

    return ::tablelist::ns${win}::data(itemList)
}

#------------------------------------------------------------------------------
# tablelist::itemtodictSubCmd
#------------------------------------------------------------------------------
proc tablelist::itemtodictSubCmd {win argList} {
    set argCount [llength $argList]
    if {$argCount < 1 || $argCount > 2} {
	mwutil::wrongNumArgs "$win itemtodict item ?excludedColumnIndexList?"
    }

    upvar ::tablelist::ns${win}::data data
    set item [lindex $argList 0]
    set exclColIdxList {}
    if {$argCount == 2} {
	foreach idx [lindex $argList 1] {
	    set col [colIndex2 $win $idx]
	    if {$col >= 0 && $col < $data(colCount)} {
		lappend exclColIdxList $col
	    }
	}
    }

    set dictionary {}
    for {set col 0} {$col < $data(colCount)} {incr col} {
	if {[lsearch -exact $exclColIdxList $col] >= 0} {
	    continue
	}

	if {[info exists data($col-name)]} {
	    set key $data($col-name)
	} else {
	    set key $col
	}
	dict set dictionary $key [lindex $item $col]
    }
    return $dictionary
}

#------------------------------------------------------------------------------
# tablelist::labelpathSubCmd
#------------------------------------------------------------------------------
proc tablelist::labelpathSubCmd {win argList} {
    if {[llength $argList] != 1} {
	mwutil::wrongNumArgs "$win labelpath columnIndex"
    }

    set col [colIndex $win [lindex $argList 0] 1]
    upvar ::tablelist::ns${win}::data data
    return $data(hdrTxtFrmLbl)$col
}

#------------------------------------------------------------------------------
# tablelist::labelsSubCmd
#------------------------------------------------------------------------------
proc tablelist::labelsSubCmd {win argList} {
    if {[llength $argList] != 0} {
	mwutil::wrongNumArgs "$win labels"
    }

    upvar ::tablelist::ns${win}::data data
    set labelList {}
    for {set col 0} {$col < $data(colCount)} {incr col} {
	lappend labelList $data(hdrTxtFrmLbl)$col
    }
    return $labelList
}

#------------------------------------------------------------------------------
# tablelist::labeltagSubCmd
#------------------------------------------------------------------------------
proc tablelist::labeltagSubCmd {win argList} {
    if {[llength $argList] != 0} {
	mwutil::wrongNumArgs "$win labeltag"
    }

    upvar ::tablelist::ns${win}::data data
    return $data(labelTag)
}

#------------------------------------------------------------------------------
# tablelist::labelwindowpathSubCmd
#------------------------------------------------------------------------------
proc tablelist::labelwindowpathSubCmd {win argList} {
    if {[llength $argList] != 1} {
	mwutil::wrongNumArgs "$win labelwindowpath columnIndex"
    }

    synchronize $win
    displayItems $win
    set col [colIndex $win [lindex $argList 0] 1]
    upvar ::tablelist::ns${win}::data data
    set ckbtn $data(hdrTxtFrmLbl)$col-il.f.ckbtn

    if {[winfo exists $ckbtn]} {
	return $ckbtn
    } else {
	return ""
    }
}

#------------------------------------------------------------------------------
# tablelist::loadfromfileSubCmd
#------------------------------------------------------------------------------
proc tablelist::loadfromfileSubCmd {win argList} {
    set argCount [llength $argList]
    if {$argCount < 1 || $argCount > 2} {
	mwutil::wrongNumArgs "$win loadfromfile fileName ?-fully|-partly?"
    }

    if {$argCount == 1} {
	set opt "-partly"
    } else {
	variable expCollOpts
	set opt [mwutil::fullOpt "option" [lindex $argList 1] $expCollOpts]
    }

    set fileName [lindex $argList 0]
    if {[catch {open $fileName "rb"} file] != 0} {
	return -code error $file
    }

    set str [read $file]
    close $file

    if {[catch {loadfromstringSubCmd $win [list $str $opt]}] == 0} {
	return ""
    } else {
	return -code error \
	    "the specified file is not compatible with this tablelist widget"
    }
}

#------------------------------------------------------------------------------
# tablelist::loadfromstringSubCmd
#------------------------------------------------------------------------------
proc tablelist::loadfromstringSubCmd {win argList} {
    set argCount [llength $argList]
    if {$argCount < 1 || $argCount > 2} {
	mwutil::wrongNumArgs "$win loadfromstring string ?-fully|-partly?"
    }

    set str [lindex $argList 0]
    if {$argCount == 1} {
	set opt "-partly"
    } else {
	variable expCollOpts
	set opt [mwutil::fullOpt "option" [lindex $argList 1] $expCollOpts]
    }

    set idx [string first \n $str]
    set line [string range $str 0 [expr {$idx - 1}]]
    set columnTitles [string map {\\n \n} $line]
    if {$columnTitles ne [::$win cget -columntitles]} {
	return -code error \
	    "the specified string is not compatible with this tablelist widget"
    }

    set startIdx [incr idx]
    set idx [string first \n $str $startIdx]
    set line [string range $str $startIdx [expr {$idx - 1}]]
    foreach {sortColumnList sortOrderList} $line {}

    set startIdx [incr idx]
    set idx [string first \n $str $startIdx]
    set line [string range $str $startIdx [expr {$idx - 1}]]
    set hdr_itemList [string map {\\n \n} $line]

    set startIdx [incr idx]
    set idx [string first \n $str $startIdx]
    set parentList [string range $str $startIdx [expr {$idx - 1}]]

    set itemList [string range $str [incr idx] end]

    if {$::tk_version >= 8.5} {
	::$win header delete 0 end
    }
    ::$win delete 0 end
    ::$win sortbycolumnlist $sortColumnList $sortOrderList

    update idletasks
    if {[destroyed $win]} {
	return ""
    }

    if {$::tk_version >= 8.5} {
	::$win header insertlist end $hdr_itemList
    }

    #
    # Get the indices of all top-level items within $itemList
    #
    set idxList [lsearch -all $parentList -1]
    if {[llength $idxList] == [llength $itemList]} {	;# flat data structure
	::$win insertlist end $itemList
	return ""
    }

    if {$opt eq "-partly"} {
	#
	# Insert the items identified by the elements
	# of $idxList as children of the root node
	#
	set itemList2 {}
	foreach idx $idxList {
	    lappend itemList2 [lindex $itemList $idx]
	}
	::$win insertchildlist root end $itemList2

	#
	# Mark the expandable new rows as collapsed
	#
	set row -1
	set expandableRows {}
	foreach idx $idxList {
	    incr row
	    ::$win rowattrib $row "origRow" $idx
	    if {[lindex $parentList [expr {$idx + 1}]] == $idx} {
		lappend expandableRows $row
	    }
	}
	::$win collapse $expandableRows -partly

	::$win attrib "itemList" $itemList
	::$win attrib "parentList" $parentList
	::$win configure -populatecommand ::tablelist::populateCmd \
			 -expandcommand   ::tablelist::expandCmd \
			 -movablecolumns  0
    } else {
	foreach parent $parentList item $itemList {
	    #
	    # Insert the item as a child of the node given by $parent
	    #
	    if {$parent < 0} {
		set parent root
	    }
	    ::$win insertchild $parent end $item
	}
	::$win collapseall -fully

	::$win unsetattrib "itemList"
	::$win unsetattrib "parentList"
	::$win configure -populatecommand "" -expandcommand ""
    }

    return ""
}

#------------------------------------------------------------------------------
# tablelist::moveSubCmd
#------------------------------------------------------------------------------
proc tablelist::moveSubCmd {win argList} {
    set argCount [llength $argList]
    if {$argCount < 2 || $argCount > 3} {
	mwutil::wrongNumArgs \
		"$win move sourceIndex targetIndex" \
		"$win move sourceIndex targetParentNodeIndex targetChildIndex"
    }

    synchronize $win
    displayItems $win
    set source [rowIndex $win [lindex $argList 0] 0]
    if {$argCount == 2} {
	set target [rowIndex $win [lindex $argList 1] 1]
	return [moveRow $win $source $target]
    } else {
	set targetParentKey [nodeIndexToKey $win [lindex $argList 1]]
	set targetChildIdx [lindex $argList 2]
	return [moveNode $win $source $targetParentKey $targetChildIdx]
    }
}

#------------------------------------------------------------------------------
# tablelist::movecolumnSubCmd
#------------------------------------------------------------------------------
proc tablelist::movecolumnSubCmd {win argList} {
    if {[llength $argList] != 2} {
	mwutil::wrongNumArgs \
		"$win movecolumn sourceColumnIndex targetColumnIndex"
    }

    synchronize $win
    displayItems $win
    set arg0 [lindex $argList 0]
    set source [colIndex $win $arg0 1]
    set arg1 [lindex $argList 1]
    upvar ::tablelist::ns${win}::data data
    if {[string first $arg1 "end"] == 0 || $arg1 == $data(colCount)} {
	set target $data(colCount)
    } else {
	set target [colIndex $win $arg1 1]
    }

    moveCol $win $source $target
    return ""
}

#------------------------------------------------------------------------------
# tablelist::nearestSubCmd
#------------------------------------------------------------------------------
proc tablelist::nearestSubCmd {win argList} {
    if {[llength $argList] != 1} {
	mwutil::wrongNumArgs "$win nearest y"
    }

    ##nagelfar ignore
    set y [format "%d" [lindex $argList 0]]
    return [rowIndex $win @0,$y 0]
}

#------------------------------------------------------------------------------
# tablelist::nearestcellSubCmd
#------------------------------------------------------------------------------
proc tablelist::nearestcellSubCmd {win argList} {
    if {[llength $argList] != 2} {
	mwutil::wrongNumArgs "$win nearestcell x y"
    }

    ##nagelfar ignore
    set x [format "%d" [lindex $argList 0]]
    ##nagelfar ignore
    set y [format "%d" [lindex $argList 1]]
    return [join [cellIndex $win @$x,$y 0] ","]
}

#------------------------------------------------------------------------------
# tablelist::nearestcolumnSubCmd
#------------------------------------------------------------------------------
proc tablelist::nearestcolumnSubCmd {win argList} {
    if {[llength $argList] != 1} {
	mwutil::wrongNumArgs "$win nearestcolumn x"
    }

    ##nagelfar ignore
    set x [format "%d" [lindex $argList 0]]
    return [colIndex $win @$x,0 0]
}

#------------------------------------------------------------------------------
# tablelist::noderowSubCmd
#------------------------------------------------------------------------------
proc tablelist::noderowSubCmd {win argList} {
    if {[llength $argList] != 2} {
	mwutil::wrongNumArgs "$win noderow parentNodeIndex childIndex"
    }

    synchronize $win
    set parentKey [nodeIndexToKey $win [lindex $argList 0]]
    set childIdx [lindex $argList 1]
    return [nodeRow $win $parentKey $childIdx]
}

#------------------------------------------------------------------------------
# tablelist::parentkeySubCmd
#------------------------------------------------------------------------------
proc tablelist::parentkeySubCmd {win argList} {
    if {[llength $argList] != 1} {
	mwutil::wrongNumArgs "$win parentkey nodeIndex"
    }

    synchronize $win
    set key [nodeIndexToKey $win [lindex $argList 0]]
    upvar ::tablelist::ns${win}::data data
    return $data($key-parent)
}

#------------------------------------------------------------------------------
# tablelist::refreshsortingSubCmd
#------------------------------------------------------------------------------
proc tablelist::refreshsortingSubCmd {win argList} {
    set argCount [llength $argList]
    if {$argCount > 1} {
	mwutil::wrongNumArgs "$win refreshsorting ?parentNodeIndex?"
    }

    synchronize $win
    displayItems $win
    if {$argCount == 0} {
	set parentKey root
    } else {
	set parentKey [nodeIndexToKey $win [lindex $argList 0]]
    }

    upvar ::tablelist::ns${win}::data data
    set sortOrderList {}
    foreach col $data(sortColList) {
	lappend sortOrderList $data($col-sortOrder)
    }

    return [sortItems $win $parentKey $data(sortColList) $sortOrderList]
}

#------------------------------------------------------------------------------
# tablelist::rejectinputSubCmd
#------------------------------------------------------------------------------
proc tablelist::rejectinputSubCmd {win argList} {
    if {[llength $argList] != 0} {
	mwutil::wrongNumArgs "$win rejectinput"
    }

    upvar ::tablelist::ns${win}::data data
    set data(rejected) 1
    return ""
}

#------------------------------------------------------------------------------
# tablelist::resetsortinfoSubCmd
#------------------------------------------------------------------------------
proc tablelist::resetsortinfoSubCmd {win argList} {
    if {[llength $argList] != 0} {
	mwutil::wrongNumArgs "$win resetsortinfo"
    }

    upvar ::tablelist::ns${win}::data data

    foreach col $data(sortColList) {
	set data($col-sortRank) 0
	set data($col-sortOrder) ""
    }

    set whichWidths {}
    foreach col $data(arrowColList) {
	lappend whichWidths l$col
    }

    set data(sortColList) {}
    set data(arrowColList) {}
    set data(sortOrder) {}

    if {[llength $whichWidths] > 0} {
	synchronize $win
	adjustColumns $win $whichWidths 1
    }

    return ""
}

#------------------------------------------------------------------------------
# tablelist::restorecursorSubCmd
#------------------------------------------------------------------------------
proc tablelist::restorecursorSubCmd {win argList} {
    if {[llength $argList] != 0} {
	mwutil::wrongNumArgs "$win restorecursor"
    }

    upvar ::tablelist::ns${win}::data data
    if {[info exists data(origCursor)]} {
	doConfig $win -cursor $data(origCursor)
	unset data(origCursor)
	return 1
    } else {
	return 0
    }
}

#------------------------------------------------------------------------------
# tablelist::rowattribSubCmd
#------------------------------------------------------------------------------
proc tablelist::rowattribSubCmd {win argList} {
    if {[llength $argList] < 1} {
	mwutil::wrongNumArgs \
		"$win rowattrib index ?name? ?value name value ...?"
    }

    synchronize $win
    set row [rowIndex $win [lindex $argList 0] 0 1]
    upvar ::tablelist::ns${win}::data data
    set key [lindex $data(keyList) $row]
    return [mwutil::attribSubCmd $win $key [lrange $argList 1 end]]
}

#------------------------------------------------------------------------------
# tablelist::rowcgetSubCmd
#------------------------------------------------------------------------------
proc tablelist::rowcgetSubCmd {win argList} {
    if {[llength $argList] != 2} {
	mwutil::wrongNumArgs "$win rowcget index option"
    }

    synchronize $win
    set row [rowIndex $win [lindex $argList 0] 0 1]
    variable rowConfigSpecs
    set opt [mwutil::fullConfigOpt [lindex $argList 1] rowConfigSpecs]
    return [doRowCget $row $win $opt]
}

#------------------------------------------------------------------------------
# tablelist::rowconfigureSubCmd
#------------------------------------------------------------------------------
proc tablelist::rowconfigureSubCmd {win argList} {
    if {[llength $argList] < 1} {
	mwutil::wrongNumArgs \
		"$win rowconfigure index ?option? ?value option value ...?"
    }

    synchronize $win
    variable rowConfigSpecs
    set row [rowIndex $win [lindex $argList 0] 0 1]
    return [mwutil::configureSubCmd $win rowConfigSpecs \
	    "tablelist::doRowConfig $row" "tablelist::doRowCget $row" \
	    [lrange $argList 1 end]]
}

#------------------------------------------------------------------------------
# tablelist::scanSubCmd
#------------------------------------------------------------------------------
proc tablelist::scanSubCmd {win argList} {
    if {[llength $argList] != 3} {
	mwutil::wrongNumArgs "$win scan mark|dragto x y"
    }

    variable scanOpts
    set opt [mwutil::fullOpt "option" [lindex $argList 0] $scanOpts]
    ##nagelfar ignore
    set x [format "%d" [lindex $argList 1]]
    ##nagelfar ignore
    set y [format "%d" [lindex $argList 2]]
    synchronize $win
    displayItems $win
    return [doScan $win $opt $x $y]
}

#------------------------------------------------------------------------------
# tablelist::searchcolumnSubCmd
#------------------------------------------------------------------------------
proc tablelist::searchcolumnSubCmd {win argList} {
    set argCount [llength $argList]
    if {$argCount < 2} {
	mwutil::wrongNumArgs "$win searchcolumn columnIndex pattern ?options?"
    }

    synchronize $win
    set col [colIndex $win [lindex $argList 0] 1]
    set pattern [lindex $argList 1]

    #
    # Initialize some processing parameters
    #
    set mode -glob		;# possible values: -exact, -glob, -regexp
    set checkCmd ""
    set parentKey root
    set allMatches 0		;# boolean
    set backwards 0		;# boolean
    set descend 0		;# boolean
    set formatted 0		;# boolean
    set noCase 0		;# boolean
    set negated 0		;# boolean
    set numeric 0		;# boolean
    set gotStartRow 0		;# boolean

    #
    # Parse the argument list
    #
    variable searchOpts
    for {set n 2} {$n < $argCount} {incr n} {
	set arg [lindex $argList $n]
	set opt [mwutil::fullOpt "option" $arg $searchOpts]
	switch -- $opt {
	    -all	{ set allMatches 1}
	    -backwards	{ set backwards 1 }
	    -check {
		if {$n == $argCount - 1} {
		    return -code error "value for \"$arg\" missing"
		}

		incr n
		set checkCmd [lindex $argList $n]
	    }
	    -descend	{ set descend 1 }
	    -exact	{ set mode -exact }
	    -formatted	{ set formatted 1 }
	    -glob	{ set mode -glob }
	    -nocase	{ set noCase 1 }
	    -not	{ set negated 1 }
	    -numeric	{ set numeric 1 }
	    -parent {
		if {$n == $argCount - 1} {
		    return -code error "value for \"$arg\" missing"
		}

		incr n
		set parentKey [nodeIndexToKey $win [lindex $argList $n]]
	    }
	    -regexp	{ set mode -regexp }
	    -start {
		if {$n == $argCount - 1} {
		    return -code error "value for \"$arg\" missing"
		}

		incr n
		set startRow [rowIndex $win [lindex $argList $n] 0]
		set gotStartRow 1
	    }
	}
    }

    if {($mode eq "-exact" && !$numeric && $noCase) ||
	($mode eq "-glob" && $noCase)} {
	set pattern [string tolower $pattern]
    }

    upvar ::tablelist::ns${win}::data data
    if {$data(-populatecommand) ne ""} {
	#
	# Populate the relevant subtree(s) if necessary
	#
	if {$parentKey eq "root"} {
	    if {$descend} {
		set lastRow $data(lastRow)
		for {set row $lastRow} {$row >= 0} {incr row -1} {
		    populate $win $row 1
		}
	    }
	} else {
	    populate $win [keyToRow $win $parentKey] $descend
	}
    }

    #
    # Build the list of row indices of the matching elements
    #
    set rowList {}
    set useFormatCmd [expr {$formatted && [lindex $data(fmtCmdFlagList) $col]}]
    set childCount [llength $data($parentKey-childList)]
    if {$childCount != 0} {
	if {$backwards} {
	    set childIdx [expr {$childCount - 1}]
	    if {$descend} {
		set childKey [lindex $data($parentKey-childList) $childIdx]
		set maxRow [expr {[nodeRow $win $childKey end] - 1}]
		if {$gotStartRow && $maxRow > $startRow} {
		    set maxRow $startRow
		}
		set minRow [nodeRow $win $parentKey 0]
		for {set row $maxRow} {$row >= $minRow} {incr row -1} {
		    set item [lindex $data(itemList) $row]
		    set elem [lindex $item $col]
		    if {$useFormatCmd} {
			set key [lindex $item end]
			set elem [formatElem $win $key $row $col $elem]
		    }
		    if {[doesMatch $win $row $col $pattern $elem $mode \
			 $numeric $noCase $checkCmd] != $negated} {
			lappend rowList $row
			if {!$allMatches} {
			    break
			}
		    }
		}
	    } else {
		for {} {$childIdx >= 0} {incr childIdx -1} {
		    set key [lindex $data($parentKey-childList) $childIdx]
		    set row [keyToRow $win $key]
		    if {$gotStartRow && $row > $startRow} {
			continue
		    }
		    set elem [lindex [lindex $data(itemList) $row] $col]
		    if {$useFormatCmd} {
			set elem [formatElem $win $key $row $col $elem]
		    }
		    if {[doesMatch $win $row $col $pattern $elem $mode \
			 $numeric $noCase $checkCmd] != $negated} {
			lappend rowList $row
			if {!$allMatches} {
			    break
			}
		    }
		}
	    }
	} else {
	    set childIdx 0
	    if {$descend} {
		set childKey [lindex $data($parentKey-childList) $childIdx]
		set fromRow [keyToRow $win $childKey]
		if {$gotStartRow && $fromRow < $startRow} {
		    set fromRow $startRow
		}
		set toRow [nodeRow $win $parentKey end]
		for {set row $fromRow} {$row < $toRow} {incr row} {
		    set item [lindex $data(itemList) $row]
		    set elem [lindex $item $col]
		    if {$useFormatCmd} {
			set key [lindex $item end]
			set elem [formatElem $win $key $row $col $elem]
		    }
		    if {[doesMatch $win $row $col $pattern $elem $mode \
			 $numeric $noCase $checkCmd] != $negated} {
			lappend rowList $row
			if {!$allMatches} {
			    break
			}
		    }
		}
	    } else {
		for {} {$childIdx < $childCount} {incr childIdx} {
		    set key [lindex $data($parentKey-childList) $childIdx]
		    set row [keyToRow $win $key]
		    if {$gotStartRow && $row < $startRow} {
			continue
		    }
		    set elem [lindex [lindex $data(itemList) $row] $col]
		    if {$useFormatCmd} {
			set elem [formatElem $win $key $row $col $elem]
		    }
		    if {[doesMatch $win $row $col $pattern $elem $mode \
			 $numeric $noCase $checkCmd] != $negated} {
			lappend rowList $row
			if {!$allMatches} {
			    break
			}
		    }
		}
	    }
	}
    }

    if {$allMatches} {
	return $rowList
    } elseif {[llength $rowList] == 0} {
	return -1
    } else {
	return [lindex $rowList 0]
    }
}

#------------------------------------------------------------------------------
# tablelist::seeSubCmd
#------------------------------------------------------------------------------
proc tablelist::seeSubCmd {win argList} {
    if {[llength $argList] != 1} {
	mwutil::wrongNumArgs "$win see index"
    }

    synchronize $win
    displayItems $win
    set index [rowIndex $win [lindex $argList 0] 0]
    if {[winfo viewable $win] &&
	[llength [$win.body tag nextrange elidedWin 1.0]] == 0} {
	return [seeRow $win $index]
    } else {
	after 0 [list tablelist::seeRow $win $index]
	return ""
    }
}

#------------------------------------------------------------------------------
# tablelist::seecellSubCmd
#------------------------------------------------------------------------------
proc tablelist::seecellSubCmd {win argList} {
    if {[llength $argList] != 1} {
	mwutil::wrongNumArgs "$win seecell cellIndex"
    }

    synchronize $win
    displayItems $win
    foreach {row col} [cellIndex $win [lindex $argList 0] 0] {}
    if {[winfo viewable $win] &&
	[llength [$win.body tag nextrange elidedWin 1.0]] == 0} {
	return [seeCell $win $row $col]
    } else {
	after 0 [list tablelist::seeCell $win $row $col]
	return ""
    }
}

#------------------------------------------------------------------------------
# tablelist::seecolumnSubCmd
#------------------------------------------------------------------------------
proc tablelist::seecolumnSubCmd {win argList} {
    if {[llength $argList] != 1} {
	mwutil::wrongNumArgs "$win seecolumn columnIndex"
    }

    synchronize $win
    displayItems $win
    set col [colIndex $win [lindex $argList 0] 0]
    if {[winfo viewable $win] &&
	[llength [$win.body tag nextrange elidedWin 1.0]] == 0} {
	return [seeCell $win [rowIndex $win @0,0 0] $col]
    } else {
	after 0 [list tablelist::seeCell $win [rowIndex $win @0,0 0] $col]
	return ""
    }
}

#------------------------------------------------------------------------------
# tablelist::selectionSubCmd
#------------------------------------------------------------------------------
proc tablelist::selectionSubCmd {win argList} {
    set argCount [llength $argList]
    if {$argCount < 2 || $argCount > 3} {
	mwutil::wrongNumArgs \
		"$win selection option firstIndex lastIndex" \
		"$win selection option indexList"
    }

    synchronize $win
    variable selectionOpts
    set opt [mwutil::fullOpt "option" [lindex $argList 0] $selectionOpts]
    set first [lindex $argList 1]

    switch $opt {
	anchor -
	includes {
	    if {$argCount != 2} {
		mwutil::wrongNumArgs "$win selection $opt index"
	    }
	    set index [rowIndex $win $first 0]
	    return [rowSelection $win $opt $index $index]
	}

	clear -
	set {
	    if {$argCount == 2} {
		foreach elem $first {
		    set index [rowIndex $win $elem 0]
		    rowSelection $win $opt $index $index
		}
	    } else {
		set first [rowIndex $win $first 0]
		set last [rowIndex $win [lindex $argList 2] 0]
		rowSelection $win $opt $first $last
	    }

	    updateColorsWhenIdle $win
	    invokeMotionHandler $win
	    return ""
	}
    }
}

#------------------------------------------------------------------------------
# tablelist::separatorpathSubCmd
#------------------------------------------------------------------------------
proc tablelist::separatorpathSubCmd {win argList} {
    set argCount [llength $argList]
    if {$argCount > 1} {
	mwutil::wrongNumArgs "$win separatorpath ?columnIndex?"
    }

    upvar ::tablelist::ns${win}::data data
    if {$argCount == 0} {
	if {[winfo exists $data(vsep)]} {
	    return $data(vsep)
	} else {
	    return ""
	}
    } else {
	set col [colIndex $win [lindex $argList 0] 1]
	if {$data(-showseparators)} {
	    return $data(vsep)$col
	} else {
	    return ""
	}
    }
}

#------------------------------------------------------------------------------
# tablelist::separatorsSubCmd
#------------------------------------------------------------------------------
proc tablelist::separatorsSubCmd {win argList} {
    if {[llength $argList] != 0} {
	mwutil::wrongNumArgs "$win separators"
    }

    set sepList {}
    foreach w [winfo children $win] {
	if {[regexp {^vsep([0-9]+)?$} [winfo name $w]]} {
	    lappend sepList $w
	}
    }
    return [lsort -dictionary $sepList]
}

#------------------------------------------------------------------------------
# tablelist::setbusycursorSubCmd
#------------------------------------------------------------------------------
proc tablelist::setbusycursorSubCmd {win argList} {
    if {[llength $argList] != 0} {
	mwutil::wrongNumArgs "$win setbusycursor"
    }

    upvar ::tablelist::ns${win}::data data
    set data(origCursor) $data(-cursor)

    variable winSys
    switch $winSys {
	x11	{ set busyCursor watch }
	win32	{ set busyCursor wait }
	aqua {
	    variable helpLabel
	    if {[catch {$helpLabel configure -cursor wait}] == 0} {
		set busyCursor wait
	    } else {
		set busyCursor watch
	    }
	}
    }

    doConfig $win -cursor $busyCursor
    update idletasks
    return [expr {![destroyed $win]}]
}

#------------------------------------------------------------------------------
# tablelist::showtargetmarkSubCmd
#------------------------------------------------------------------------------
proc tablelist::showtargetmarkSubCmd {win argList} {
    if {[llength $argList] != 2} {
	mwutil::wrongNumArgs "$win showtargetmark before|inside index"
    }

    synchronize $win
    displayItems $win
    variable targetOpts
    set opt [mwutil::fullOpt "option" [lindex $argList 0] $targetOpts]
    set index [lindex $argList 1]

    upvar ::tablelist::ns${win}::data data
    set w $data(body)

    switch $opt {
	before {
	    set row [rowIndex $win $index 1]
	    if {$data(itemCount) == 0} {
		set y 0
	    } elseif {$row >= $data(itemCount)} {
		set dlineinfo [$w dlineinfo $data(itemCount).0]
		if {[llength $dlineinfo] == 0} {
		    return ""
		}

		set lineY [lindex $dlineinfo 1]
		set lineHeight [lindex $dlineinfo 3]
		set y [expr {$lineY + $lineHeight}]
	    } else {
		if {$row < 0} {
		    set row 0
		}
		set dlineinfo [$w dlineinfo [expr {$row + 1}].0]
		if {[llength $dlineinfo] == 0} {
		    return ""
		}

		set y [lindex $dlineinfo 1]
	    }

	    variable scaled4
	    place $data(rowGap) -anchor w -y $y -height $scaled4 \
				-width [winfo width $data(hdrTxtFrm)]
	}

	inside {
	    set row [rowIndex $win $index 0 1]
	    set dlineinfo [$w dlineinfo [expr {$row + 1}].0]
	    if {[llength $dlineinfo] == 0} {
		return ""
	    }

	    set lineY [lindex $dlineinfo 1]
	    set lineHeight [lindex $dlineinfo 3]
	    set y [expr {$lineY + $lineHeight/2}]

	    place $data(rowGap) -anchor w -y $y -height $lineHeight -width 6
	}
    }

    raise $data(rowGap)
    return ""
}

#------------------------------------------------------------------------------
# tablelist::sizeSubCmd
#------------------------------------------------------------------------------
proc tablelist::sizeSubCmd {win argList} {
    if {[llength $argList] != 0} {
	mwutil::wrongNumArgs "$win size"
    }

    synchronize $win
    upvar ::tablelist::ns${win}::data data
    return $data(itemCount)
}

#------------------------------------------------------------------------------
# tablelist::sortSubCmd
#------------------------------------------------------------------------------
proc tablelist::sortSubCmd {win argList} {
    set argCount [llength $argList]
    if {$argCount > 1} {
	mwutil::wrongNumArgs "$win sort ?-increasing|-decreasing?"
    }

    if {$argCount == 0} {
	set order -increasing
    } else {
	variable sortOpts
	set order [mwutil::fullOpt "option" [lindex $argList 0] $sortOpts]
    }

    synchronize $win
    displayItems $win
    return [sortItems $win root -1 [string range $order 1 end]]
}

#------------------------------------------------------------------------------
# tablelist::sortbycolumnSubCmd
#------------------------------------------------------------------------------
proc tablelist::sortbycolumnSubCmd {win argList} {
    set argCount [llength $argList]
    if {$argCount < 1 || $argCount > 2} {
	mwutil::wrongNumArgs \
		"$win sortbycolumn columnIndex ?-increasing|-decreasing?"
    }

    synchronize $win
    displayItems $win
    set col [colIndex $win [lindex $argList 0] 1]
    if {$argCount == 1} {
	set order -increasing
    } else {
	variable sortOpts
	set order [mwutil::fullOpt "option" [lindex $argList 1] $sortOpts]
    }
    return [sortItems $win root $col [string range $order 1 end]]
}

#------------------------------------------------------------------------------
# tablelist::sortbycolumnlistSubCmd
#------------------------------------------------------------------------------
proc tablelist::sortbycolumnlistSubCmd {win argList} {
    set argCount [llength $argList]
    if {$argCount < 1 || $argCount > 2} {
	mwutil::wrongNumArgs \
		"$win sortbycolumnlist columnIndexList ?sortOrderList?"
    }

    synchronize $win
    displayItems $win
    set sortColList {}
    foreach elem [lindex $argList 0] {
	set col [colIndex $win $elem 1]
	if {[lsearch -exact $sortColList $col] >= 0} {
	    return -code error "duplicate column index \"$elem\""
	}
	lappend sortColList $col
    }

    set sortOrderList {}
    if {$argCount == 2} {
	variable sortOrders
	foreach elem [lindex $argList 1] {
	    lappend sortOrderList [mwutil::fullOpt "option" $elem $sortOrders]
	}
    }

    return [sortItems $win root $sortColList $sortOrderList]
}

#------------------------------------------------------------------------------
# tablelist::sortcolumnSubCmd
#------------------------------------------------------------------------------
proc tablelist::sortcolumnSubCmd {win argList} {
    if {[llength $argList] != 0} {
	mwutil::wrongNumArgs "$win sortcolumn"
    }

    upvar ::tablelist::ns${win}::data data
    if {[llength $data(sortColList)] == 0} {
	return -1
    } else {
	return [lindex $data(sortColList) 0]
    }
}

#------------------------------------------------------------------------------
# tablelist::sortcolumnlistSubCmd
#------------------------------------------------------------------------------
proc tablelist::sortcolumnlistSubCmd {win argList} {
    if {[llength $argList] != 0} {
	mwutil::wrongNumArgs "$win sortcolumnlist"
    }

    upvar ::tablelist::ns${win}::data data
    return $data(sortColList)
}

#------------------------------------------------------------------------------
# tablelist::sortorderSubCmd
#------------------------------------------------------------------------------
proc tablelist::sortorderSubCmd {win argList} {
    if {[llength $argList] != 0} {
	mwutil::wrongNumArgs "$win sortorder"
    }

    upvar ::tablelist::ns${win}::data data
    if {[llength $data(sortColList)] == 0} {
	return $data(sortOrder)
    } else {
	set col [lindex $data(sortColList) 0]
	return $data($col-sortOrder)
    }
}

#------------------------------------------------------------------------------
# tablelist::sortorderlistSubCmd
#------------------------------------------------------------------------------
proc tablelist::sortorderlistSubCmd {win argList} {
    if {[llength $argList] != 0} {
	mwutil::wrongNumArgs "$win sortorderlist"
    }

    upvar ::tablelist::ns${win}::data data
    set sortOrderList {}
    foreach col $data(sortColList) {
	lappend sortOrderList $data($col-sortOrder)
    }
    return $sortOrderList
}

#------------------------------------------------------------------------------
# tablelist::stopautoscrollSubCmd
#------------------------------------------------------------------------------
proc tablelist::stopautoscrollSubCmd {win argList} {
    if {[llength $argList] != 0} {
	mwutil::wrongNumArgs "$win stopautoscroll"
    }

    upvar ::tablelist::ns${win}::data data
    after cancel $data(afterId2)
    return ""
}

#------------------------------------------------------------------------------
# tablelist::targetmarkpathSubCmd
#------------------------------------------------------------------------------
proc tablelist::targetmarkpathSubCmd {win argList} {
    if {[llength $argList] != 0} {
	mwutil::wrongNumArgs "$win targetmarkpath"
    }

    upvar ::tablelist::ns${win}::data data
    return $data(rowGap)
}

#------------------------------------------------------------------------------
# tablelist::targetmarkposSubCmd
#------------------------------------------------------------------------------
proc tablelist::targetmarkposSubCmd {win argList} {
    set argCount [llength $argList]
    if {$argCount < 1 || $argCount > 2} {
	mwutil::wrongNumArgs "$win targetmarkpos y ?-any|-horizontal|-vertical?"
    }

    ##nagelfar ignore
    set y [format "%d" [lindex $argList 0]]
    if {$argCount == 1} {
	set opt -any
    } else {
	variable gapTypeOpts
	set opt [mwutil::fullOpt "option" [lindex $argList 1] $gapTypeOpts]
    }

    synchronize $win
    displayItems $win

    switch -- $opt {
	-any {
	    set row [containingRow $win $y relOffset]
	    if {$row < 0} {
		set place before
		upvar ::tablelist::ns${win}::data data
		set row [expr {
		    ($y < [winfo y $data(body)]) ? 0 : $data(itemCount)
		}]
	    } elseif {$relOffset < 0.25} {
		set place before
	    } elseif {$relOffset < 0.75} {
		set place inside
	    } else {
		set place before
		if {[isexpandedSubCmd $win $row]} {
		    incr row
		} else {
		    #
		    # Get the containing row's next sibling
		    #
		    set childIdx [childindexSubCmd $win $row]
		    set row [noderowSubCmd $win [list \
			     [parentkeySubCmd $win $row] [incr childIdx]]]
		}
	    }

	    return [list $place $row]
	}

	-horizontal {
	    set row [containingRow $win $y relOffset]
	    if {$row < 0} {
		upvar ::tablelist::ns${win}::data data
		set row [expr {
		    ($y < [winfo y $data(body)]) ? 0 : $data(itemCount)
		}]
	    } elseif {$relOffset >= 0.5} {
		if {[isexpandedSubCmd $win $row]} {
		    incr row
		} else {
		    #
		    # Get the containing row's next sibling
		    #
		    set childIdx [childindexSubCmd $win $row]
		    set row [noderowSubCmd $win [list \
			     [parentkeySubCmd $win $row] [incr childIdx]]]
		}
	    }

	    return [list before $row]
	}

	-vertical {
	    set row [containingRow $win $y]
	    return [list inside $row]
	}
    }
}

#------------------------------------------------------------------------------
# tablelist::togglecolumnhideSubCmd
#------------------------------------------------------------------------------
proc tablelist::togglecolumnhideSubCmd {win argList} {
    set argCount [llength $argList]
    if {$argCount < 1 || $argCount > 2} {
	mwutil::wrongNumArgs \
		"$win togglecolumnhide firstColumn lastColumn" \
		"$win togglecolumnhide columnIndexList"
    }

    synchronize $win
    set first [lindex $argList 0]

    #
    # Toggle the value of the -hide option of the specified columns
    #
    upvar ::tablelist::ns${win}::data data
    set colIdxList {}
    if {$argCount == 1} {
	foreach elem $first {
	    set col [colIndex $win $elem 1]
	    set data($col-hide) [expr {!$data($col-hide)}]
	    if {$data($col-hide)} {
		incr data(hiddenColCount)
		if {$col == $data(editCol)} {
		    doCancelEditing $win
		}
	    } else {
		incr data(hiddenColCount) -1
	    }
	    lappend colIdxList $col
	}
    } else {
	set first [colIndex $win $first 1]
	set last [colIndex $win [lindex $argList 1] 1]

	for {set col $first} {$col <= $last} {incr col} {
	    set data($col-hide) [expr {!$data($col-hide)}]
	    if {$data($col-hide)} {
		incr data(hiddenColCount)
		if {$col == $data(editCol)} {
		    doCancelEditing $win
		}
	    } else {
		incr data(hiddenColCount) -1
	    }
	    lappend colIdxList $col
	}
    }

    if {[llength $colIdxList] == 0} {
	return ""
    }

    #
    # Adjust the columns and redisplay the items
    #
    makeColFontAndTagLists $win
    adjustColumns $win $colIdxList 1
    adjustColIndex $win data(anchorCol) 1
    adjustColIndex $win data(activeCol) 1

    updateViewWhenIdle $win
    genVirtualEvent $win <<TablelistColHiddenStateChanged>> $colIdxList
    return ""
}

#------------------------------------------------------------------------------
# tablelist::togglerowhideSubCmd
#------------------------------------------------------------------------------
proc tablelist::togglerowhideSubCmd {win argList} {
    set argCount [llength $argList]
    if {$argCount < 1 || $argCount > 2} {
	mwutil::wrongNumArgs \
		"$win togglerowhide firstIndex lastIndex" \
		"$win togglerowhide indexList"
    }

    synchronize $win
    set first [lindex $argList 0]

    #
    # Toggle the value of the -hide option of the specified rows
    #
    set rowIdxList {}
    set count 0
    if {$argCount == 1} {
	foreach elem $first {
	    set row [rowIndex $win $elem 0 1]
	    doRowConfig $row $win -hide [expr {![doRowCget $row $win -hide]}]
	    incr count
	    lappend rowIdxList $row
	}
    } else {
	set firstRow [rowIndex $win $first 0 1]
	set lastRow [rowIndex $win [lindex $argList 1] 0 1]
	for {set row $firstRow} {$row <= $lastRow} {incr row} {
	    doRowConfig $row $win -hide [expr {![doRowCget $row $win -hide]}]
	    incr count
	    lappend rowIdxList $row
	}
    }

    if {$count != 0} {
	makeStripesWhenIdle $win
	showLineNumbersWhenIdle $win
	updateViewWhenIdle $win
	genVirtualEvent $win <<TablelistRowHiddenStateChanged>> $rowIdxList
    }

    return ""
}

#------------------------------------------------------------------------------
# tablelist::toplevelkeySubCmd
#------------------------------------------------------------------------------
proc tablelist::toplevelkeySubCmd {win argList} {
    if {[llength $argList] != 1} {
	mwutil::wrongNumArgs "$win toplevelkey index"
    }

    synchronize $win
    set row [rowIndex $win [lindex $argList 0] 0 1]
    upvar ::tablelist::ns${win}::data data
    set key [lindex $data(keyList) $row]
    return [topLevelKey $win $key]
}

#------------------------------------------------------------------------------
# tablelist::unsetattribSubCmd
#------------------------------------------------------------------------------
proc tablelist::unsetattribSubCmd {win argList} {
    if {[llength $argList] != 1} {
	mwutil::wrongNumArgs "$win unsetattrib name"
    }

    return [mwutil::unsetattribSubCmd $win "widget" [lindex $argList 0]]
}

#------------------------------------------------------------------------------
# tablelist::unsetcellattribSubCmd
#------------------------------------------------------------------------------
proc tablelist::unsetcellattribSubCmd {win argList} {
    if {[llength $argList] != 2} {
	mwutil::wrongNumArgs "$win unsetcellattrib cellIndex name"
    }

    synchronize $win
    foreach {row col} [cellIndex $win [lindex $argList 0] 1] {}
    upvar ::tablelist::ns${win}::data data
    set key [lindex $data(keyList) $row]
    return [mwutil::unsetattribSubCmd $win $key,$col [lindex $argList 1]]
}

#------------------------------------------------------------------------------
# tablelist::unsetcolumnattribSubCmd
#------------------------------------------------------------------------------
proc tablelist::unsetcolumnattribSubCmd {win argList} {
    if {[llength $argList] != 2} {
	mwutil::wrongNumArgs "$win unsetcolumnattrib columnIndex name"
    }

    set col [colIndex $win [lindex $argList 0] 1]
    return [mwutil::unsetattribSubCmd $win $col [lindex $argList 1]]
}

#------------------------------------------------------------------------------
# tablelist::unsetrowattribSubCmd
#------------------------------------------------------------------------------
proc tablelist::unsetrowattribSubCmd {win argList} {
    if {[llength $argList] != 2} {
	mwutil::wrongNumArgs "$win unsetrowattrib index name"
    }

    synchronize $win
    set row [rowIndex $win [lindex $argList 0] 0]
    upvar ::tablelist::ns${win}::data data
    set key [lindex $data(keyList) $row]
    return [mwutil::unsetattribSubCmd $win $key [lindex $argList 1]]
}

#------------------------------------------------------------------------------
# tablelist::viewablerowcountSubCmd
#------------------------------------------------------------------------------
proc tablelist::viewablerowcountSubCmd {win argList} {
    set argCount [llength $argList]
    if {$argCount != 0 && $argCount != 2} {
	mwutil::wrongNumArgs "$win viewablerowcount ?firstIndex lastIndex?"
    }

    synchronize $win
    upvar ::tablelist::ns${win}::data data
    if {$argCount == 0} {
	set first 0
	set last $data(lastRow)
    } else {
	set first [rowIndex $win [lindex $argList 0] 0]
	set last [rowIndex $win [lindex $argList 1] 0]
    }
    if {$last < $first} {
	return 0
    }

    #
    # Adjust the range to fit within the existing items
    #
    if {$first < 0} {
	set first 0
    }
    if {$last > $data(lastRow)} {
	set last $data(lastRow)
    }

    return [getViewableRowCount $win $first $last]
}

#------------------------------------------------------------------------------
# tablelist::windowpathSubCmd
#------------------------------------------------------------------------------
proc tablelist::windowpathSubCmd {win argList} {
    if {[llength $argList] != 1} {
	mwutil::wrongNumArgs "$win windowpath cellIndex"
    }

    synchronize $win
    foreach {row col} [cellIndex $win [lindex $argList 0] 1] {}
    upvar ::tablelist::ns${win}::data data
    set key [lindex $data(keyList) $row]
    set w $data(body).frm_$key,$col.w
    if {[winfo exists $w]} {
	return $w
    } else {
	return ""
    }
}

#------------------------------------------------------------------------------
# tablelist::xviewSubCmd
#------------------------------------------------------------------------------
proc tablelist::xviewSubCmd {win argList} {
    set argCount [llength $argList]
    if {$argCount != 1 || [lindex $argList 0] != 0} {
	synchronize $win
	displayItems $win
    }
    upvar ::tablelist::ns${win}::data data

    switch $argCount {
	0 {
	    #
	    # Command: $win xview
	    #
	    if {$data(-titlecolumns) == 0} {
		return [$data(hdrTxt) xview]
	    } else {
		set scrlWindowWidth [getScrlWindowWidth $win]
		if {$scrlWindowWidth <= 0} {
		    return [list 0 1]
		}

		set scrlContentWidth [getScrlContentWidth $win 0 $data(lastCol)]
		if {$scrlContentWidth == 0} {
		    return [list 0 1]
		}

		set scrlXOffset \
		    [scrlColOffsetToXOffset $win $data(scrlColOffset)]
		set frac1 [expr {double($scrlXOffset) / $scrlContentWidth}]
		set frac2 [expr {double($scrlXOffset + $scrlWindowWidth) /
				 $scrlContentWidth}]
		if {$frac2 > 1.0} {
		    set frac2 1.0
		}
		return [list $frac1 $frac2]
	    }
	}

	1 {
	    #
	    # Command: $win xview <units>
	    #
	    ##nagelfar ignore
	    set units [format "%d" [lindex $argList 0]]
	    if {$data(-titlecolumns) == 0} {
		foreach w [list $data(hdrTxt) $data(body)] {
		    $w xview moveto 0
		    $w xview scroll $units units
		}
		redisplayVisibleItems $win
	    } else {
		changeScrlColOffset $win $units
	    }
	    hdr_updateColors $win
	    updateColors $win
	    return ""
	}

	default {
	    #
	    # Command: $win xview moveto <fraction>
	    #	       $win xview scroll <number> units|pages
	    #
	    set argList [mwutil::getScrollInfo2 "$win xview" $argList]
	    variable winSys
	    if {$data(-titlecolumns) == 0} {
		if {[lindex $argList 0] eq "moveto"} {
		    set data(horizFraction) [lindex $argList 1]
		    if {![info exists data(horizMoveToId)]} {
			if {$winSys eq "x11"} {
			    set delay [expr {($data(colCount) + 7) / 8}]
			} else {
			    set delay [expr {($data(colCount) + 1) / 2}]
			}
			set data(horizMoveToId) \
			    [after $delay [list tablelist::horizMoveTo $win]]
		    }
		    return ""
		} else {
		    set number [lindex $argList 1]
		    if {[lindex $argList 2] eq "units"} {
			if {[info exists data(horizScrollId)]} {
			    incr data(horizUnits) $number
			} else {
			    set data(horizUnits) $number
			    if {$winSys eq "x11"} {
				set delay [expr {($data(colCount) + 7) / 8}]
			    } else {
				set delay [expr {($data(colCount) + 1) / 2}]
			    }
			    set data(horizScrollId) [after $delay \
				[list tablelist::horizScrollByUnits $win]]
			}
			return ""
		    } else {
			foreach w [list $data(hdrTxt) $data(body)] {
			    $w xview scroll $number pages
			}
			redisplayVisibleItems $win
			hdr_updateColors $win
			updateColors $win
		    }
		}
	    } else {
		if {[lindex $argList 0] eq "moveto"} {
		    #
		    # Compute the new scrolled column offset
		    #
		    set fraction [lindex $argList 1]
		    set scrlContentWidth \
			[getScrlContentWidth $win 0 $data(lastCol)]
		    set pixels [expr {int($fraction*$scrlContentWidth + 0.5)}]
		    set scrlColOffset [scrlXOffsetToColOffset $win $pixels]

		    #
		    # Increase the new scrolled column offset if necessary
		    #
		    if {$pixels + [getScrlWindowWidth $win] >=
			$scrlContentWidth} {
			incr scrlColOffset
		    }

		    changeScrlColOffset $win $scrlColOffset
		} else {
		    set number [lindex $argList 1]
		    if {[lindex $argList 2] eq "units"} {
			changeScrlColOffset $win \
			    [expr {$data(scrlColOffset) + $number}]
		    } else {
			#
			# Compute the new scrolled column offset
			#
			set scrlXOffset \
			    [scrlColOffsetToXOffset $win $data(scrlColOffset)]
			set scrlWindowWidth [getScrlWindowWidth $win]
			set deltaPixels [expr {$number*$scrlWindowWidth}]
			set pixels [expr {$scrlXOffset + $deltaPixels}]
			set scrlColOffset [scrlXOffsetToColOffset $win $pixels]

			#
			# Adjust the new scrolled column offset if necessary
			#
			if {$number < 0 &&
			    [getScrlContentWidth $win $scrlColOffset \
			     $data(lastCol)] -
			    [getScrlContentWidth $win $data(scrlColOffset) \
			     $data(lastCol)] > -$deltaPixels} {
			    incr scrlColOffset
			}
			if {$scrlColOffset == $data(scrlColOffset)} {
			    if {$number < 0} {
				incr scrlColOffset -1
			    } elseif {$number > 0} {
				incr scrlColOffset
			    }
			}

			changeScrlColOffset $win $scrlColOffset
		    }
		}
		hdr_updateColors $win
		updateColors $win
	    }
	    workAroundAquaTkBugs $win
	    return ""
	}
    }
}

#------------------------------------------------------------------------------
# tablelist::yviewSubCmd
#------------------------------------------------------------------------------
proc tablelist::yviewSubCmd {win argList} {
    set argCount [llength $argList]
    if {$argCount != 1 || [lindex $argList 0] != 0} {
	synchronize $win
	displayItems $win
    }
    upvar ::tablelist::ns${win}::data data

    switch $argCount {
	0 {
	    #
	    # Command: $win yview
	    #
	    set totalViewableCount [getViewableRowCount $win 0 $data(lastRow)]
	    if {$totalViewableCount == 0} {
		return [list 0 1]
	    }
	    set topRow [getVertComplTopRow $win]
	    set btmRow [getVertComplBtmRow $win]
	    set upperViewableCount \
		[getViewableRowCount $win 0 [expr {$topRow - 1}]]
	    set winViewableCount [getViewableRowCount $win $topRow $btmRow]
	    set frac1 [expr {double($upperViewableCount) / $totalViewableCount}]
	    set frac2 [expr {double($upperViewableCount + $winViewableCount) /
			     $totalViewableCount}]
	    if {$frac2 == 0.0} {
		set frac2 1.0
	    }
	    return [list $frac1 $frac2]
	}

	1 {
	    #
	    # Command: $win yview <units>
	    #
	    set w $data(body)
	    ##nagelfar ignore
	    set units [format "%d" [lindex $argList 0]]
	    set row [viewableRowOffsetToRowIndex $win $units]
	    $w yview $row
	    adjustElidedText $win
	    redisplayVisibleItems $win
	    if {$::tk_version >= 8.5} {
		$w yview $row
	    }
	    updateColors $win
	    adjustSepsWhenIdle $win
	    updateVScrlbarWhenIdle $win
	    updateIdletasksDelayed
	    return ""
	}

	default {
	    #
	    # Command: $win yview moveto <fraction>
	    #	       $win yview scroll <number> units|pages
	    #
	    set argList [mwutil::getScrollInfo2 "$win yview" $argList]
	    if {[lindex $argList 0] eq "moveto"} {
		set data(vertFraction) [lindex $argList 1]
		if {![info exists data(vertMoveToId)]} {
		    variable winSys
		    if {$winSys eq "x11"} {
			set delay [expr {($data(colCount) + 3) / 4}]
		    } else {
			set delay $data(colCount)
		    }
		    set data(vertMoveToId) \
			[after $delay [list tablelist::vertMoveTo $win]]
		}
	    } else {
		set number [lindex $argList 1]
		if {[lindex $argList 2] eq "units"} {
		    if {[info exists data(vertScrollId)]} {
			incr data(vertUnits) $number
		    } else {
			set data(vertUnits) $number
			variable winSys
			if {$winSys eq "x11"} {
			    set delay [expr {($data(colCount) + 3) / 4}]
			} else {
			    set delay $data(colCount)
			}
			set data(vertScrollId) [after $delay \
			    [list tablelist::vertScrollByUnits $win]]
		    }
		} else {
		    set w $data(body)
		    set absNumber [expr {abs($number)}]
		    for {set n 0} {$n < $absNumber} {incr n} {
			set topRow [getVertComplTopRow $win]
			set btmRow [getVertComplBtmRow $win]
			set upperViewableCount \
			    [getViewableRowCount $win 0 [expr {$topRow - 1}]]
			set winViewableCount \
			    [getViewableRowCount $win $topRow $btmRow]
			set delta [expr {$winViewableCount - 2}]
			if {$delta <= 0} {
			    set delta 1
			}
			if {$number < 0} {
			    set delta [expr {(-1)*$delta}]
			}
			set offset [expr {$upperViewableCount + $delta}]
			set row [viewableRowOffsetToRowIndex $win $offset]
			$w yview $row
		    }

		    set data(topRowChanged) 1
		    adjustElidedText $win
		    redisplayVisibleItems $win
		    if {$::tk_version >= 8.5 && $absNumber != 0} {
			$w yview $row
		    }
		    updateColors $win
		    adjustSepsWhenIdle $win
		    updateVScrlbarWhenIdle $win
		    updateIdletasksDelayed
		}
	    }
	    return ""
	}
    }
}

#------------------------------------------------------------------------------
# tablelist::cellSelection
#
# Processes the tablelist cellselection subcommand.
#------------------------------------------------------------------------------
proc tablelist::cellSelection {win opt firstRow firstCol lastRow lastCol} {
    upvar ::tablelist::ns${win}::data data \
	  ::tablelist::ns${win}::selStates selStates
    if {$data(isDisabled) && $opt ne "includes"} {
	return ""
    }

    switch $opt {
	anchor {
	    #
	    # Adjust the row and column indices to fit
	    # within the existing viewable elements
	    #
	    adjustRowIndex $win firstRow 1
	    adjustColIndex $win firstCol 1

	    set data(anchorRow) $firstRow
	    set data(anchorCol) $firstCol
	    return ""
	}

	clear {
	    if {$data(itemCount) == 0 || $data(colCount) == 0} {
		return ""
	    }

	    #
	    # Adjust the row and column indices
	    # to fit within the existing elements
	    #
	    adjustRowIndex $win firstRow
	    adjustColIndex $win firstCol
	    adjustRowIndex $win lastRow
	    adjustColIndex $win lastCol

	    #
	    # Swap the indices if necessary
	    #
	    if {$lastRow < $firstRow} {
		set tmp $firstRow
		set firstRow $lastRow
		set lastRow $tmp
	    }
	    if {$lastCol < $firstCol} {
		set tmp $firstCol
		set firstCol $lastCol
		set lastCol $tmp
	    }

	    if {$firstRow == 0 && $firstCol == 0 &&
		$lastRow == $data(lastRow) && $lastCol == $data(lastCol)} {
		array unset selStates *		;# this works much faster
	    } else {
		for {set row $firstRow} {$row <= $lastRow} {incr row} {
		    set key [lindex $data(keyList) $row]

		    for {set col $firstCol} {$col <= $lastCol} {incr col} {
			array unset selStates $key,$col
		    }

		    if {[info exists selStates($key)]} {
			unset selStates($key)
			for {set col 0} {$col < $firstCol} {incr col} {
			    set selStates($key,$col) 1
			}
			for {set col [expr {$lastCol + 1}]} \
			    {$col < $data(colCount)} {incr col} {
			    set selStates($key,$col) 1
			}
		    }
		}
	    }

	    return ""
	}

	includes {
	    set key [lindex $data(keyList) $firstRow]
	    return [expr {[info exists selStates($key)] &&
			  $firstCol >= 0 && $firstCol < $data(colCount) ||
			  [info exists selStates($key,$firstCol)]}]
	}

	set {
	    if {$data(itemCount) == 0 || $data(colCount) == 0} {
		return ""
	    }

	    #
	    # Adjust the row and column indices
	    # to fit within the existing elements
	    #
	    adjustRowIndex $win firstRow
	    adjustColIndex $win firstCol
	    adjustRowIndex $win lastRow
	    adjustColIndex $win lastCol

	    #
	    # Swap the indices if necessary
	    #
	    if {$lastRow < $firstRow} {
		set tmp $firstRow
		set firstRow $lastRow
		set lastRow $tmp
	    }
	    if {$lastCol < $firstCol} {
		set tmp $firstCol
		set firstCol $lastCol
		set lastCol $tmp
	    }

	    set wholeRows [expr {$firstCol == 0 && $lastCol == $data(lastCol)}]
	    for {set row $firstRow} {$row <= $lastRow} {incr row} {
		#
		# Nothing to do if the row is selected or is not selectable
		#
		set key [lindex $data(keyList) $row]
		if {[info exists selStates($key)] ||
		    [info exists data($key-selectable)]} {  ;# not selectable
		    continue
		}

		if {$wholeRows} {
		    set selStates($key) 1
		} else {
		    for {set col $firstCol} {$col <= $lastCol} {incr col} {
			set selStates($key,$col) 1
		    }
		}
	    }

	    #
	    # If the selection is exported and there are any selected
	    # cells in the widget then make win the new owner of the
	    # PRIMARY selection and register a callback to be invoked
	    # when it loses ownership of the PRIMARY selection
	    #
	    if {$data(-exportselection) && [array size selStates] != 0} {
		selection own -command \
		    [list ::tablelist::lostSelection $win] $win
	    }

	    return ""
	}
    }
}

#------------------------------------------------------------------------------
# tablelist::colWidth
#
# Processes the tablelist columnwidth subcommand.
#------------------------------------------------------------------------------
proc tablelist::colWidth {win col opt} {
    upvar ::tablelist::ns${win}::data data
    set pixels [lindex $data(colList) [expr {2*$col}]]
    if {$pixels == 0} {				;# convention: dynamic width
	set pixels $data($col-reqPixels)
	if {$data($col-maxPixels) > 0} {
	    if {$pixels > $data($col-maxPixels)} {
		set pixels $data($col-maxPixels)
	    }
	}
    }

    switch -- $opt {
	-requested { return $pixels }
	-stretched { return [expr {$pixels + $data($col-delta)}] }
	-total {
	    return [expr {$pixels + $data($col-delta) + 2*$data(charWidth)}]
	}
    }
}

#------------------------------------------------------------------------------
# tablelist::containingRow
#
# Processes the tablelist containing subcommand.
#------------------------------------------------------------------------------
proc tablelist::containingRow {win y {relOffsetName ""}} {
    upvar ::tablelist::ns${win}::data data
    if {$data(itemCount) == 0} {
	return -1
    }

    set row [rowIndex $win @0,$y 0]		;# before decrementing y !!!
    set w $data(body)
    incr y -[winfo y $w]
    if {$y < 0} {
	return -1
    }

    set dlineinfo [$w dlineinfo [expr {$row + 1}].0]
    set lineY [lindex $dlineinfo 1]
    set lineHeight [lindex $dlineinfo 3]
    if {[llength $dlineinfo] != 0 && $y < $lineY + $lineHeight} {
	if {$relOffsetName ne ""} {
	    upvar $relOffsetName relOffset
	    if {$y == $lineY + $lineHeight -1} {
		set relOffset 1.0
	    } else {
		set relOffset [expr {double($y - $lineY) / $lineHeight}]
	    }
	}
	return $row
    } else {
	return -1
    }
}

#------------------------------------------------------------------------------
# tablelist::hdr_containingRow
#
# Processes the tablelist header containing subcommand.
#------------------------------------------------------------------------------
proc tablelist::hdr_containingRow {win y} {
    upvar ::tablelist::ns${win}::data data
    if {$data(hdr_itemCount) == 0} {
	return -1
    }

    set row [hdr_rowIndex $win @0,$y 0]		;# before decrementing y !!!
    if {$row < 0} {
	return -1
    }

    incr y -[winfo y $data(hdr)]
    if {!$data(-showlabels)} {
	incr y
    }
    if {$y < 0} {
	return -1
    }

    set dlineinfo [$data(hdrTxt) dlineinfo [expr {$row + 2}].0]
    set lineY [lindex $dlineinfo 1]
    set lineHeight [lindex $dlineinfo 3]
    if {[llength $dlineinfo] != 0 && $y >= $lineY &&
	$y < $lineY + $lineHeight} {
	return $row
    } else {
	return -1
    }
}

#------------------------------------------------------------------------------
# tablelist::containingCol
#
# Processes the tablelist containingcolumn subcommand.
#------------------------------------------------------------------------------
proc tablelist::containingCol {win x} {
    upvar ::tablelist::ns${win}::data data
    if {$x < [winfo x $data(body)]} {
	return -1
    }

    set col [colIndex $win @$x,0 0]
    if {$col < 0} {
	return -1
    }

    set lbl $data(hdrTxtFrmLbl)$col
    if {$x + [winfo rootx $win] < [winfo width $lbl] + [winfo rootx $lbl]} {
	return $col
    } else {
	return -1
    }
}

#------------------------------------------------------------------------------
# tablelist::curCellSelection
#
# Processes the tablelist curcellselection subcommand.  Meaning of the optional
# argument: 0: all; 1: nonhidden only; 2: viewable only.
#------------------------------------------------------------------------------
proc tablelist::curCellSelection {win {constraint 0}} {
    upvar ::tablelist::ns${win}::data data \
	  ::tablelist::ns${win}::selStates selStates

    set pairList {}
    if {$constraint == 0} {				;# speed optimization
	foreach name [array names selStates] {
	    set lst [split $name ","]
	    set key [lindex $lst 0]
	    set row [keyToRow $win $key]

	    if {[llength $lst] == 2} {
		set col [lindex $lst 1]
		lappend pairList [list $row $col]
	    } else {
		for {set col 0} {$col < $data(colCount)} {incr col} {
		    lappend pairList [list $row $col]
		}
	    }
	}
    } else {
	foreach name [array names selStates] {
	    set lst [split $name ","]
	    set key [lindex $lst 0]
	    if {[info exists data($key-hide)] ||
		($constraint == 2 && [info exists data($key-elide)])} {
		continue
	    }

	    if {[llength $lst] == 2} {
		set col [lindex $lst 1]
		if {!$data($col-hide)} {
		    set row [keyToRow $win $key]
		    lappend pairList [list $row $col]
		}
	    } else {
		set row [keyToRow $win $key]
		for {set col 0} {$col < $data(colCount)} {incr col} {
		    if {!$data($col-hide)} {
			lappend pairList [list $row $col]
		    }
		}
	    }
	}
    }

    set pairList [lsort -integer -index 1 $pairList]
    set pairList [lsort -integer -index 0 $pairList]

    set result {}
    set prevCellIdx ""
    foreach pair $pairList {
	set cellIdx [join $pair ","]
	if {$cellIdx ne $prevCellIdx} {
	    lappend result $cellIdx
	    set prevCellIdx $cellIdx
	}
    }

    return $result
}

#------------------------------------------------------------------------------
# tablelist::curSelection
#
# Processes the tablelist curselection subcommand.  Meaning of the optional
# argument: 0: all; 1: nonhidden only; 2: viewable only.
#------------------------------------------------------------------------------
proc tablelist::curSelection {win {constraint 0}} {
    upvar ::tablelist::ns${win}::data data \
	  ::tablelist::ns${win}::selStates selStates

    if {$data(colCount) == 0} {
	return {}
    }

    set rowList {}
    if {$constraint == 0} {				;# speed optimization
	foreach name [array names selStates] {
	    set key [lindex [split $name ","] 0]
	    lappend rowList [keyToRow $win $key]
	}
    } else {
	foreach name [array names selStates] {
	    set key [lindex [split $name ","] 0]
	    if {[info exists data($key-hide)] ||
		($constraint == 2 && [info exists data($key-elide)])} {
		continue
	    }

	    lappend rowList [keyToRow $win $key]
	}
    }

    set rowList [lsort -integer $rowList]

    set result {}
    set prevRow -1
    foreach row $rowList {
	if {$row != $prevRow} {
	    lappend result $row
	    set prevRow $row
	}
    }

    return $result
}

#------------------------------------------------------------------------------
# tablelist::deleteRows
#
# Processes the tablelist delete subcommand.
#------------------------------------------------------------------------------
proc tablelist::deleteRows {win first last updateListVar} {
    #
    # Adjust the range to fit within the existing items
    #
    if {$first < 0} {
	set first 0
    }
    upvar ::tablelist::ns${win}::data data \
	  ::tablelist::ns${win}::attribs attribs \
	  ::tablelist::ns${win}::selStates selStates
    if {$last > $data(lastRow)} {
	set last $data(lastRow)
    }
    if {$last < $first} {
	return ""
    }

    #
    # Increase the last index if necessary, to make sure that all
    # descendants of the corresponding item will get deleted, too
    #
    set lastKey [lindex $data(keyList) $last]
    set last [expr {[nodeRow $win $lastKey end] - 1}]
    set count [expr {$last - $first + 1}]

    #
    # Check whether the width of any dynamic-width
    # column might be affected by the deletion
    #
    if {$count == $data(itemCount)} {
	set colWidthsChanged 1				;# just to save time
	set data(seqNum) -1
    } else {
	set colWidthsChanged 0
	set snipStr $data(-snipstring)
	set row 0
	set itemListRange [lrange $data(itemList) $first $last]
	foreach item $itemListRange {
	    #
	    # Format the item
	    #
	    set key [lindex $item end]
	    set dispItem [lrange $item 0 $data(lastCol)]
	    if {$data(hasFmtCmds)} {
		set dispItem [formatItem $win $key $row $dispItem]
	    }
	    if {[string match "*\t*" $dispItem]} {
		set dispItem [mapTabs $dispItem]
	    }

	    set col 0
	    foreach text $dispItem {pixels alignment} $data(colList) {
		if {$pixels != 0} {
		    incr col
		    continue
		}

		getAuxData $win $key $col auxType auxWidth
		getIndentData $win $key $col indentWidth
		set cellFont [getCellFont $win $key $col]
		set elemWidth \
		    [getElemWidth $win $text $auxWidth $indentWidth $cellFont]
		if {$elemWidth == $data($col-elemWidth) &&
		    [incr data($col-widestCount) -1] == 0} {
		    set colWidthsChanged 1
		    break
		}

		incr col
	    }

	    if {$colWidthsChanged} {
		break
	    }

	    incr row
	}
    }

    #
    # Delete the given items from the body text widget.  Interestingly,
    # for a large number of items it is much more efficient to delete
    # the lines in chunks than to invoke a global delete command.
    #
    set w $data(body)
    for {set toLine [expr {$last + 2}]; set fromLine [expr {$toLine - 50}]} \
	{$fromLine > $first} {set toLine $fromLine; incr fromLine -50} {
	$w delete $fromLine.0 $toLine.0
    }
    set rest [expr {$count % 50}]
    $w delete [expr {$first + 1}].0 [expr {$first + $rest + 1}].0

    if {$last == $data(lastRow)} {
	#
	# Delete the newline character that ends
	# the line preceding the first deleted one
	#
	$w delete $first.end

	#
	# Work around a peculiarity of the text widget:  Hide
	# the newline character that ends the line preceding
	# the first deleted one if it was hidden before
	#
	set textIdx $first.0
	foreach tag {elidedRow hiddenRow} {
	    if {[lsearch -exact [$w tag names $textIdx] $tag] >= 0} {
		$w tag add $tag $first.end
	    }
	}
    }

    #
    # Unset the elements of data, attribs, and
    # selStates corresponding to the deleted items
    #
    if {$count == $data(itemCount)} {
	array unset data {k[0-9]*}
	array set data {rowTagRefCount 0  nonViewableRowCount 0
	    cellTagRefCount 0  imgCount 0  winCount 0  indentCount 0
	    root-childList {}}

	array unset attribs {k[0-9]*}
	array unset selStates *
    } else {
	for {set row $first} {$row <= $last} {incr row} {
	    set item [lindex $data(itemList) $row]
	    set key [lindex $item end]

	    foreach opt {-background -foreground -name -selectable
			 -selectbackground -selectforeground} {
		array unset data $key$opt
	    }

	    if {[info exists data($key-font)]} {
		unset data($key-font)
		incr data(rowTagRefCount) -1
	    }

	    set isElided [info exists data($key-elide)]
	    set isHidden [info exists data($key-hide)]
	    if {$isElided} {
		unset data($key-elide)
	    }
	    if {$isHidden} {
		unset data($key-hide)
	    }
	    if {$isElided || $isHidden} {
		incr data(nonViewableRowCount) -1
	    }

	    #
	    # Remove the key from the list of children of its parent
	    #
	    set parentKey $data($key-parent)
	    if {[info exists data($parentKey-childList)]} {
		set childIdx [lsearch -exact $data($parentKey-childList) $key]
		set data($parentKey-childList) \
		    [lreplace $data($parentKey-childList) $childIdx $childIdx]

		#
		# If the parent's list of children has become empty
		# then set its indentation image to the indented one
		#
		set col $data(treeCol)
		if {[llength $data($parentKey-childList)] == 0 &&
		    [info exists data($parentKey,$col-indent)]} {
		    collapseSubCmd $win [list $parentKey -partly]
		    set data($parentKey,$col-indent) [string map \
			{"collapsed" "indented" "expanded" "indented"
			 "Act" "" "Sel" ""} $data($parentKey,$col-indent)]
		    if {[winfo exists $data(body).ind_$parentKey,$col]} {
			set idx [string last "g" $data($parentKey,$col-indent)]
			set img [string range $data($parentKey,$col-indent) \
				 0 $idx]
			$data(body).ind_$parentKey,$col configure -image $img
		    }
		}
	    }

	    foreach prop {-row -parent -childList} {
		unset data($key$prop)
	    }

	    for {set col 0} {$col < $data(colCount)} {incr col} {
		foreach opt {-background -foreground -editable -editwindow
			     -imagebackground -selectbackground
			     -selectforeground -valign -windowdestroy
			     -windowupdate} {
		    array unset data $key,$col$opt
		}

		if {[info exists data($key,$col-font)]} {
		    unset data($key,$col-font)
		    incr data(cellTagRefCount) -1
		}

		if {[info exists data($key,$col-image)]} {
		    unset data($key,$col-image)
		    incr data(imgCount) -1
		}

		if {[info exists data($key,$col-window)]} {
		    unset data($key,$col-window)
		    unset data($key,$col-reqWidth)
		    unset data($key,$col-reqHeight)
		    incr data(winCount) -1
		}

		if {[info exists data($key,$col-indent)]} {
		    unset data($key,$col-indent)
		    incr data(indentCount) -1
		}
	    }

	    array unset attribs $key-*
	    array unset attribs $key,*-*

	    array unset selStates $key
	    array unset selStates $key,*
	}
    }

    #
    # Delete the given items from the internal list
    #
    set data(itemList) [lreplace $data(itemList) $first $last]
    set data(keyList) [lreplace $data(keyList) $first $last]
    incr data(itemCount) -$count

    #
    # Delete the given items from the list variable if needed
    #
    if {$updateListVar &&
	[uplevel #0 [list info exists $data(-listvariable)]]} {
	upvar #0 $data(-listvariable) var
	trace remove variable var {write unset} $data(listVarTraceCmd)
	set var [lreplace $var $first $last]
	trace add variable var {write unset} $data(listVarTraceCmd)
    }

    #
    # Update the key -> row mapping at idle time if needed
    #
    if {$last != $data(lastRow)} {
	set data(keyToRowMapValid) 0
	if {![info exists data(mapId)]} {
	    set data(mapId) \
		[after idle [list tablelist::updateKeyToRowMap $win]]
	}
    }

    incr data(lastRow) -$count

    #
    # Update the indices anchorRow and activeRow
    #
    if {$first <= $data(anchorRow)} {
	incr data(anchorRow) -$count
	if {$data(anchorRow) < $first} {
	    set data(anchorRow) $first
	}
	adjustRowIndex $win data(anchorRow) 1
    }
    if {$last < $data(activeRow)} {
	set activeRow $data(activeRow)
	incr activeRow -$count
	adjustRowIndex $win activeRow 1
	set data(activeRow) $activeRow
    } elseif {$first <= $data(activeRow)} {
	set activeRow $first
	adjustRowIndex $win activeRow 1
	set data(activeRow) $activeRow
    }

    #
    # Update data(editRow) if the edit window is present
    #
    if {$data(editRow) >= 0} {
	set data(editRow) [keyToRow $win $data(editKey)]
    }

    #
    # Adjust the heights of the body text widget
    # and of the listbox child, if necessary
    #
    if {$data(-height) <= 0} {
	set viewableRowCount \
	    [expr {$data(itemCount) - $data(nonViewableRowCount)}]
	$w configure -height $viewableRowCount
	$data(lb) configure -height $viewableRowCount
    }

    #
    # Invalidate the list of row indices indicating the
    # viewable rows, adjust the columns if necessary, and
    # schedule some operations for execution at idle time
    #
    set data(viewableRowList) {-1}
    if {$colWidthsChanged} {
	adjustColumns $win allCols 1
    }
    makeStripesWhenIdle $win
    showLineNumbersWhenIdle $win
    updateViewWhenIdle $win
    return ""
}

#------------------------------------------------------------------------------
# tablelist::hdr_deleteRows
#
# Processes the tablelist header delete subcommand.
#------------------------------------------------------------------------------
proc tablelist::hdr_deleteRows {win first last} {
    #
    # Adjust the range to fit within the existing items
    #
    if {$first < 0} {
	set first 0
    }
    upvar ::tablelist::ns${win}::data data \
	  ::tablelist::ns${win}::attribs attribs
    if {$last > $data(hdr_lastRow)} {
	set last $data(hdr_lastRow)
    }
    if {$last < $first} {
	return ""
    }

    set count [expr {$last - $first + 1}]

    #
    # Check whether the width of any dynamic-width
    # column might be affected by the deletion
    #
    set w $data(hdrTxt)
    if {$count == $data(hdr_itemCount)} {
	set colWidthsChanged 1				;# just to save time
	set data(hdr_seqNum) -1
    } else {
	set colWidthsChanged 0
	set snipStr $data(-snipstring)
	set row 0
	set hdr_itemList [lrange $data(hdr_itemList) $first $last]
	foreach item $hdr_itemList {
	    #
	    # Format the item
	    #
	    set key [lindex $item end]
	    set dispItem [lrange $item 0 $data(lastCol)]
	    if {$data(hasFmtCmds)} {
		set dispItem [formatItem $win $key $row $dispItem]
	    }
	    if {[string match "*\t*" $dispItem]} {
		set dispItem [mapTabs $dispItem]
	    }

	    set col 0
	    foreach text $dispItem {pixels alignment} $data(colList) {
		if {$pixels != 0} {
		    incr col
		    continue
		}

		getAuxData $win $key $col auxType auxWidth
		set cellFont [getCellFont $win $key $col]
		set elemWidth [getElemWidth $win $text $auxWidth 0 $cellFont]
		if {$elemWidth == $data($col-elemWidth) &&
		    [incr data($col-widestCount) -1] == 0} {
		    set colWidthsChanged 1
		    break
		}

		incr col
	    }

	    if {$colWidthsChanged} {
		break
	    }

	    incr row
	}
    }

    #
    # Delete the given items from the header text widget.
    #
    $w delete [expr {$first + 2}].0 [expr {$last + 3}].0

    if {$last == $data(hdr_lastRow)} {
	#
	# Delete the newline character that ends
	# the line preceding the first deleted one
	#
	$w delete [expr {$first + 1}].end
    }

    #
    # Unset the elements of data and attribs corresponding to the deleted items
    #
    for {set row $first} {$row <= $last} {incr row} {
	set item [lindex $data(hdr_itemList) $row]
	set key [lindex $item end]

	foreach opt {-background -foreground -font -name} {
	    array unset data $key$opt
	}

	for {set col 0} {$col < $data(colCount)} {incr col} {
	    foreach opt {-background -foreground -font -image -imagebackground
			 -valign -windowdestroy -windowupdate} {
		array unset data $key,$col$opt
	    }

	    if {[info exists data($key,$col-window)]} {
		unset data($key,$col-window)
		unset data($key,$col-reqWidth)
		unset data($key,$col-reqHeight)
	    }
	}

	array unset attribs $key-*
	array unset attribs $key,*-*
    }

    #
    # Delete the given items from the internal list
    #
    set data(hdr_itemList) [lreplace $data(hdr_itemList) $first $last]
    set data(hdr_keyList) [lreplace $data(hdr_keyList) $first $last]
    incr data(hdr_itemCount) -$count
    incr data(hdr_lastRow) -$count

    #
    # Adjust the columns if necessary and schedule
    # some operations for execution at idle time
    #
    if {$colWidthsChanged} {
	adjustColumns $win allCols 1
    }
    updateViewWhenIdle $win
    return ""
}

#------------------------------------------------------------------------------
# tablelist::deleteCols
#
# Processes the tablelist deletecolumns subcommand.
#------------------------------------------------------------------------------
proc tablelist::deleteCols {win first last} {
    upvar ::tablelist::ns${win}::data data \
	  ::tablelist::ns${win}::attribs attribs \
	  ::tablelist::ns${win}::selStates selStates

    #
    # Delete the data, attributes, and selection
    # states corresponding to the given range
    #
    for {set col $first} {$col <= $last} {incr col} {
	if {$data($col-hide)} {
	    incr data(hiddenColCount) -1
	}
	deleteColData $win $col
	deleteColAttribs $win $col
	deleteColSelStates $win $col
    }

    #
    # Shift the elements of data, attribs, and selStates corresponding to
    # the column indices > last to the left by last - first + 1 positions
    #
    for {set oldCol [expr {$last + 1}]; set newCol $first} \
	{$oldCol < $data(colCount)} {incr oldCol; incr newCol} {
	moveColData data data imgs $oldCol $newCol
	moveColAttribs attribs attribs $oldCol $newCol
	moveColSelStates selStates selStates $oldCol $newCol
    }

    #
    # Update the item list
    #
    set newItemList {}
    foreach item $data(itemList) {
	set item [lreplace $item $first $last]
	lappend newItemList $item
    }
    set data(itemList) $newItemList

    #
    # Set up and adjust the columns, and rebuild some columns-related lists
    #
    setupColumns $win \
	[lreplace $data(-columns) [expr {3*$first}] [expr {3*$last + 2}]] 1
    makeColFontAndTagLists $win
    makeSortAndArrowColLists $win
    adjustColumns $win {} 1
    updateViewWhenIdle $win

    #
    # Update the list variable if present
    #
    condUpdateListVar $win

    #
    # Reconfigure the relevant column labels
    #
    for {set col $first} {$col < $data(colCount)} {incr col} {
	reconfigColLabels $win imgs $col
    }

    #
    # Update the indices anchorCol and activeCol
    #
    set count [expr {$last - $first + 1}]
    if {$first <= $data(anchorCol)} {
	incr data(anchorCol) -$count
	if {$data(anchorCol) < $first} {
	    set data(anchorCol) $first
	}
	adjustColIndex $win data(anchorCol) 1
    }
    if {$last < $data(activeCol)} {
	incr data(activeCol) -$count
	adjustColIndex $win data(activeCol) 1
    } elseif {$first <= $data(activeCol)} {
	set data(activeCol) $first
	adjustColIndex $win data(activeCol) 1
    }
}

#------------------------------------------------------------------------------
# tablelist::insertRows
#
# Processes the tablelist insert, insertlist, insertchildren, and
# insertchildlist subcommands.
#------------------------------------------------------------------------------
proc tablelist::insertRows {win index argList updateListVar parentKey \
			    childIdx} {
    set argCount [llength $argList]
    if {$argCount == 0} {
	return {}
    }

    upvar ::tablelist::ns${win}::data data
    if {$index < 0} {
	set index 0
    } elseif {$index > $data(itemCount)} {
	set index $data(itemCount)
    }
    if {$index < $data(itemCount)} {
	displayItems $win
    }

    set childCount [llength $data($parentKey-childList)]
    if {$childIdx < 0} {
	set childIdx 0
    } elseif {$childIdx > $childCount} {	;# e.g., if $childIdx is "end"
	set childIdx $childCount
    }

    set updateListVar [expr {$updateListVar &&
	[uplevel #0 [list info exists $data(-listvariable)]]}]
    if {$updateListVar} {
	upvar #0 $data(-listvariable) var
	trace remove variable var {write unset} $data(listVarTraceCmd)
    }

    #
    # Insert the items into the internal list
    #
    set result {}
    set appendingItems [expr {$index == $data(itemCount)}]
    set appendingChildren [expr {$childIdx == $childCount}]
    set row $index
    foreach item $argList {
	#
	# Adjust the item, and insert it into the list variable if needed
	#
	set item [adjustItem $item $data(colCount)]
	if {$updateListVar} {
	    if {$appendingItems} {
		lappend var $item    		;# this works much faster
	    } else {
		set var [linsert $var $row $item]
	    }
	}

	#
	# Extend the item and insert it into the internal list
	#
	set key k[incr data(seqNum)]
	lappend item $key
	if {$appendingItems} {
	    lappend data(itemList) $item	;# this works much faster
	    lappend data(keyList) $key		;# this works much faster
	} else {
	    set data(itemList) [linsert $data(itemList) $row $item]
	    set data(keyList) [linsert $data(keyList) $row $key]
	}

	array set data \
	    [list $key-row $row  $key-parent $parentKey  $key-childList {}]

	#
	# Insert the key into the parent's list of children
	#
	if {$appendingChildren} {
	    lappend data($parentKey-childList) $key   ;# this works much faster
	} else {
	    set data($parentKey-childList) \
		[linsert $data($parentKey-childList) $childIdx $key]
	}

	lappend result $key

	incr row
	incr childIdx
    }

    #
    # Update or extend the list data(segmentList)
    #
    if {[info exists data(segmentList)]} {
	set lastSegment [lindex $data(segmentList) end]
	foreach {startRow rowCount} $lastSegment {}
	if {$index == $startRow + $rowCount} {
	    incr rowCount $argCount
	    set data(segmentList) \
		[lreplace $data(segmentList) end end [list $startRow $rowCount]]
	} else {
	    lappend data(segmentList) [list $index $argCount]
	}
    } else {
	lappend data(segmentList) [list $index $argCount]
    }

    incr data(itemCount) $argCount
    set data(lastRow) [expr {$data(itemCount) - 1}]

    if {$updateListVar} {
	trace add variable var {write unset} $data(listVarTraceCmd)
    }

    #
    # Update the key -> row mapping at idle time if needed
    #
    if {!$appendingItems} {
	set data(keyToRowMapValid) 0
	if {![info exists data(mapId)]} {
	    set data(mapId) \
		[after idle [list tablelist::updateKeyToRowMap $win]]
	}
    }

    if {![info exists data(dispId)]} {
	#
	# Arrange for the inserted items to be displayed at idle time
	#
	set data(dispId) [after idle [list tablelist::displayItems $win]]
    }

    #
    # Update the indices anchorRow and activeRow
    #
    if {$index <= $data(anchorRow)} {
	incr data(anchorRow) $argCount
	adjustRowIndex $win data(anchorRow) 1
    }
    if {$index <= $data(activeRow)} {
	set activeRow $data(activeRow)
	incr activeRow $argCount
	adjustRowIndex $win activeRow 1
	set data(activeRow) $activeRow
    }

    #
    # Update data(editRow) if the edit window is present
    #
    if {$data(editRow) >= 0} {
	set data(editRow) [keyToRow $win $data(editKey)]
    }

    return $result
}

#------------------------------------------------------------------------------
# tablelist::hdr_insertRows
#
# Processes the tablelist header insert and insertlist subcommands.
#------------------------------------------------------------------------------
proc tablelist::hdr_insertRows {win index argList} {
    set argCount [llength $argList]
    if {$argCount == 0} {
	return {}
    }

    upvar ::tablelist::ns${win}::data data
    if {$index < 0} {
	set index 0
    } elseif {$index > $data(hdr_itemCount)} {
	set index $data(hdr_itemCount)
    }

    #
    # Insert the items into the internal list and the header text widget
    #
    set result {}
    variable snipSides
    set w $data(hdrTxt)
    set widgetFont $data(-font)
    set snipStr $data(-snipstring)
    set padY [expr {[$w cget -spacing1] == 0}]
    set insertArgs {}
    set multilineData {}
    set indexLine [expr {$index + 2}]
    set row $index
    set line $indexLine
    $w insert $line.0 "\n"
    foreach item $argList {
	#
	# Adjust and extend the item, and insert
	# the extended item into the internal list
	#
	set item [adjustItem $item $data(colCount)]
	set key hk[incr data(hdr_seqNum)]
	set extItem $item
	lappend extItem $key
	set data(hdr_itemList) [linsert $data(hdr_itemList) $row $extItem]
	set data(hdr_keyList) [linsert $data(hdr_keyList) $row $key]

	if {$data(hasFmtCmds)} {
	    set item [formatItem $win $key $row $item]
	}
	if {[string match "*\t*" $item]} {
	    set item [mapTabs $item]
	}

	if {$line != $indexLine} {
	    lappend insertArgs "\n" {}
	}

	set col 0
	foreach text $item \
		colFont $data(colFontList) \
		colTags $data(colTagsList) \
		{pixels alignment} $data(colList) {
	    #
	    # Update the column width or clip the element if necessary
	    #
	    set multiline [string match "*\n*" $text]
	    if {$pixels == 0} {			;# convention: dynamic width
		if {$multiline} {
		    set list [split $text "\n"]
		    set textWidth [getListWidth $win $list $colFont]
		} else {
		    set textWidth \
			[font measure $colFont -displayof $win $text]
		}
		if {$data($col-maxPixels) > 0} {
		    if {$textWidth > $data($col-maxPixels)} {
			set pixels $data($col-maxPixels)
		    }
		}
		if {$textWidth == $data($col-elemWidth)} {
		    incr data($col-widestCount)
		} elseif {$textWidth > $data($col-elemWidth)} {
		    set data($col-elemWidth) $textWidth
		    set data($col-widestCount) 1
		}
	    }
	    if {$pixels != 0} {
		incr pixels $data($col-delta)

		if {$data($col-wrap) && !$multiline} {
		    if {[font measure $colFont -displayof $win $text] >
			$pixels} {
			set multiline 1
		    }
		}

		set snipSide \
		    $snipSides($alignment,$data($col-changesnipside))
		if {$multiline} {
		    set list [split $text "\n"]
		    if {$data($col-wrap)} {
			set snipSide ""
		    }
		    set text [joinList $win $list $colFont \
			      $pixels $snipSide $snipStr]
		} else {
		    set text [strRange $win $text $colFont \
			      $pixels $snipSide $snipStr]
		}
	    }

	    if {$multiline} {
		lappend insertArgs "\t\t" $colTags
		lappend multilineData \
			$line $key $col $text $colFont $pixels $alignment
	    } else {
		lappend insertArgs "\t$text\t" $colTags
	    }

	    incr col
	}

	lappend result $key

	incr row
	incr line
    }
    incr data(hdr_itemCount) $argCount
    set data(hdr_lastRow) [expr {$data(hdr_itemCount) - 1}]

    #
    # Insert the items into the header text widget
    #
    eval [list $w insert $indexLine.0] $insertArgs

    #
    # Embed the message widgets displaying multiline elements
    #
    foreach {line key col text font pixels alignment} $multilineData {
	findTabs $win $w $line $col $col tabIdx1 tabIdx2
	set msgScript [list ::tablelist::displayText $win $key $col $text \
		       $font $pixels $alignment]
	$w window create $tabIdx2 -pady $padY -create $msgScript
    }

    #
    # Check whether the width of any column has changed
    #
    set colWidthsChanged 0
    set col 0
    foreach {pixels alignment} $data(colList) {
	if {$pixels == 0} {			;# convention: dynamic width
	    if {$data($col-elemWidth) > $data($col-reqPixels)} {
		set data($col-reqPixels) $data($col-elemWidth)
		set colWidthsChanged 1
	    }
	}
	incr col
    }

    #
    # Adjust the columns if necessary and schedule
    # some operations for execution at idle time
    #
    if {$colWidthsChanged} {
	adjustColumns $win {} 1
    }
    updateViewWhenIdle $win

    return $result
}

#------------------------------------------------------------------------------
# tablelist::displayItems
#
# This procedure is invoked either as an idle callback after inserting some
# items into the internal list of the tablelist widget win, or directly, upon
# execution of some widget commands.  It displays the inserted items.
#------------------------------------------------------------------------------
proc tablelist::displayItems win {
    #
    # Nothing to do if there are no items to display
    #
    upvar ::tablelist::ns${win}::data data
    if {![info exists data(dispId)]} {
	return ""
    }

    #
    # Here we are in the case that the procedure was scheduled for
    # execution at idle time.  However, it might have been invoked
    # directly, before the idle time occured; in this case we should
    # cancel the execution of the previously scheduled idle callback.
    #
    after cancel $data(dispId)	;# no harm if data(dispId) is no longer valid
    unset data(dispId)

    if {![info exists data(segmentList)]} {
	return ""
    }

    #
    # Keep the memory consumption within reasonable
    # limits by splitting the segments into chunks
    #
    set chunkSize 5000
    set segmentList {}
    foreach segment $data(segmentList) {
	foreach {startRow rowCount} $segment {}
	while {$rowCount >= $chunkSize} {
	    lappend segmentList [list $startRow $chunkSize]
	    incr startRow  $chunkSize
	    incr rowCount -$chunkSize
	}
	if {$rowCount != 0} {
	    lappend segmentList [list $startRow $rowCount]
	}
    }
    unset data(segmentList)

    #
    # Insert the items into the body text widget
    #
    variable snipSides
    set w $data(body)
    set widgetFont $data(-font)
    set snipStr $data(-snipstring)
    set padY [expr {[$w cget -spacing1] == 0}]
    set wasEmpty [$w compare end-1c == 1.0]
    set isEmpty $wasEmpty
    foreach segment $segmentList {
	foreach {startRow rowCount} $segment {}
	set startLine [expr {$startRow + 1}]
	if {$isEmpty} {
	    set isEmpty 0
	} else {
	    $w insert $startLine.0 "\n"
	    $w tag remove elidedRow $startLine.0
	    $w tag remove hiddenRow $startLine.0
	}

	set insertArgs {}
	set insertStr ""
	set multilineData {}
	for {set row $startRow; set line $startLine} {$rowCount != 0} \
	    {set row $line; incr line; incr rowCount -1} {
	    if {$row != $startRow} {
		if {$data(hasColTags)} {
		    lappend insertArgs "\n" {}
		} else {
		    append insertStr "\n"
		}
	    }

	    #
	    # Get and format the item
	    #
	    set item [lindex $data(itemList) $row]
	    set key [lindex $item end]
	    set dispItem [lrange $item 0 $data(lastCol)]
	    if {$data(hasFmtCmds)} {
		set dispItem [formatItem $win $key $row $dispItem]
	    }
	    if {[string match "*\t*" $dispItem]} {
		set dispItem [mapTabs $dispItem]
	    }

	    set col 0
	    if {$data(hasColTags)} {
		foreach text $dispItem \
			colFont $data(colFontList) \
			colTags $data(colTagsList) \
			{pixels alignment} $data(colList) {
		    #
		    # Update the column width or clip the element if necessary
		    #
		    set multiline [string match "*\n*" $text]
		    if {$pixels == 0} {		;# convention: dynamic width
			if {$multiline} {
			    set list [split $text "\n"]
			    set textWidth [getListWidth $win $list $colFont]
			} else {
			    set textWidth \
				[font measure $colFont -displayof $win $text]
			}
			if {$data($col-maxPixels) > 0} {
			    if {$textWidth > $data($col-maxPixels)} {
				set pixels $data($col-maxPixels)
			    }
			}
			if {$textWidth == $data($col-elemWidth)} {
			    incr data($col-widestCount)
			} elseif {$textWidth > $data($col-elemWidth)} {
			    set data($col-elemWidth) $textWidth
			    set data($col-widestCount) 1
			}
		    }
		    if {$pixels != 0} {
			incr pixels $data($col-delta)

			if {$data($col-wrap) && !$multiline} {
			    if {[font measure $colFont -displayof $win $text] >
				$pixels} {
				set multiline 1
			    }
			}

			set snipSide \
			    $snipSides($alignment,$data($col-changesnipside))
			if {$multiline} {
			    set list [split $text "\n"]
			    if {$data($col-wrap)} {
				set snipSide ""
			    }
			    set text [joinList $win $list $colFont \
				      $pixels $snipSide $snipStr]
			} elseif {!$data(-displayondemand)} {
			    set text [strRange $win $text $colFont \
				      $pixels $snipSide $snipStr]
			}
		    }

		    if {$multiline} {
			lappend insertArgs "\t\t" $colTags
			lappend multilineData $line $key $col $text \
					      $colFont $pixels $alignment
		    } elseif {$data(-displayondemand)} {
			lappend insertArgs "\t\t" $colTags
		    } else {
			lappend insertArgs "\t$text\t" $colTags
		    }

		    incr col
		}

	    } else {
		foreach text $dispItem {pixels alignment} $data(colList) {
		    #
		    # Update the column width or clip the element if necessary
		    #
		    set multiline [string match "*\n*" $text]
		    if {$pixels == 0} {		;# convention: dynamic width
			if {$multiline} {
			    set list [split $text "\n"]
			    set textWidth [getListWidth $win $list $widgetFont]
			} else {
			    set textWidth \
				[font measure $widgetFont -displayof $win $text]
			}
			if {$data($col-maxPixels) > 0} {
			    if {$textWidth > $data($col-maxPixels)} {
				set pixels $data($col-maxPixels)
			    }
			}
			if {$textWidth == $data($col-elemWidth)} {
			    incr data($col-widestCount)
			} elseif {$textWidth > $data($col-elemWidth)} {
			    set data($col-elemWidth) $textWidth
			    set data($col-widestCount) 1
			}
		    }
		    if {$pixels != 0} {
			incr pixels $data($col-delta)

			if {$data($col-wrap) && !$multiline} {
			    if {[font measure $widgetFont -displayof $win $text]
				> $pixels} {
				set multiline 1
			    }
			}

			set snipSide \
			    $snipSides($alignment,$data($col-changesnipside))
			if {$multiline} {
			    set list [split $text "\n"]
			    if {$data($col-wrap)} {
				set snipSide ""
			    }
			    set text [joinList $win $list $widgetFont \
				      $pixels $snipSide $snipStr]
			} elseif {!$data(-displayondemand)} {
			    set text [strRange $win $text $widgetFont \
				      $pixels $snipSide $snipStr]
			}
		    }

		    if {$multiline} {
			append insertStr "\t\t"
			lappend multilineData $line $key $col $text \
					      $widgetFont $pixels $alignment
		    } elseif {$data(-displayondemand)} {
			append insertStr "\t\t"
		    } else {
			append insertStr "\t$text\t"
		    }

		    incr col
		}
	    }
	}

	#
	# Insert the items into the body text widget
	#
	if {$data(hasColTags)} {
	    eval [list $w insert $startLine.0] $insertArgs
	} else {
	    $w insert $startLine.0 $insertStr
	}

	#
	# Embed the message widgets displaying multiline elements
	#
	foreach {line key col text font pixels alignment} $multilineData {
	    findTabs $win $w $line $col $col tabIdx1 tabIdx2
	    set msgScript [list ::tablelist::displayText $win $key $col $text \
			   $font $pixels $alignment]
	    $w window create $tabIdx2 -pady $padY -create $msgScript
	    $w tag add elidedWin $tabIdx2
	}
    }

    #
    # Adjust the heights of the body text widget
    # and of the listbox child, if necessary
    #
    if {$data(-height) <= 0} {
	set viewableRowCount \
	    [expr {$data(itemCount) - $data(nonViewableRowCount)}]
	$w configure -height $viewableRowCount
	$data(lb) configure -height $viewableRowCount
    }

    #
    # Check whether the width of any column has changed
    #
    set colWidthsChanged 0
    set col 0
    foreach {pixels alignment} $data(colList) {
	if {$pixels == 0} {			;# convention: dynamic width
	    if {$data($col-elemWidth) > $data($col-reqPixels)} {
		set data($col-reqPixels) $data($col-elemWidth)
		set colWidthsChanged 1
	    }
	}
	incr col
    }

    #
    # Invalidate the list of row indices indicating the
    # viewable rows, adjust the columns if necessary, and
    # schedule some operations for execution at idle time
    #
    set data(viewableRowList) {-1}
    if {$colWidthsChanged} {
	adjustColumns $win {} 1
    }
    makeStripesWhenIdle $win
    showLineNumbersWhenIdle $win
    updateViewWhenIdle $win

    if {$wasEmpty} {
	$w xview moveto [lindex [$data(hdrTxt) xview] 0]
    }
}

#------------------------------------------------------------------------------
# tablelist::insertCols
#
# Processes the tablelist insertcolumns and insertcolumnlist subcommands.
#------------------------------------------------------------------------------
proc tablelist::insertCols {win colIdx argList} {
    set argCount [llength $argList]
    if {$argCount == 0} {
	return ""
    }

    upvar ::tablelist::ns${win}::data data \
	  ::tablelist::ns${win}::attribs attribs \
	  ::tablelist::ns${win}::selStates selStates

    #
    # Check the syntax of argList and get the number of columns to be inserted
    #
    variable alignments
    set count 0
    for {set n 0} {$n < $argCount} {incr n} {
	#
	# Check the column width
	#
	##nagelfar ignore
	format "%d" [lindex $argList $n]    ;# integer check with error message

	#
	# Check whether the column title is present
	#
	if {[incr n] == $argCount} {
	    return -code error "column title missing"
	}

	#
	# Check the column alignment
	#
	set alignment left
	if {[incr n] < $argCount} {
	    set next [lindex $argList $n]
	    if {[isInteger $next]} {
		incr n -1
	    } else {
		mwutil::fullOpt "alignment" $next $alignments
	    }
	}

	incr count
    }

    #
    # Shift the elements of data, attribs, and selStates corresponding
    # to the column indices >= colIdx to the right by count positions
    #
    for {set oldCol $data(lastCol); set newCol [expr {$oldCol + $count}]} \
	{$oldCol >= $colIdx} {incr oldCol -1; incr newCol -1} {
	moveColData data data imgs $oldCol $newCol
	moveColSelStates selStates selStates $oldCol $newCol
    }

    #
    # Update the item list
    #
    set emptyStrs {}
    for {set n 0} {$n < $count} {incr n} {
	lappend emptyStrs ""
    }
    set newItemList {}
    foreach item $data(itemList) {
	set item [eval [list linsert $item $colIdx] $emptyStrs]
	lappend newItemList $item
    }
    set data(itemList) $newItemList

    #
    # Set up and adjust the columns, and rebuild some columns-related lists
    #
    setupColumns $win \
	[eval [list linsert $data(-columns) [expr {3*$colIdx}]] $argList] 1
    makeColFontAndTagLists $win
    makeSortAndArrowColLists $win
    set limit [expr {$colIdx + $count}]
    set colIdxList {}
    for {set col $colIdx} {$col < $limit} {incr col} {
	lappend colIdxList $col
    }
    adjustColumns $win $colIdxList 1

    #
    # Update the list variable if present
    #
    condUpdateListVar $win

    #
    # Redisplay the items
    #
    redisplay $win

    #
    # Reconfigure the relevant column labels
    #
    for {set col $limit} {$col < $data(colCount)} {incr col} {
	reconfigColLabels $win imgs $col
    }

    #
    # Update the indices anchorCol and activeCol
    #
    if {$colIdx <= $data(anchorCol)} {
	incr data(anchorCol) $argCount
	adjustColIndex $win data(anchorCol) 1
    }
    if {$colIdx <= $data(activeCol)} {
	incr data(activeCol) $argCount
	adjustColIndex $win data(activeCol) 1
    }

    updateViewWhenIdle $win
    return ""
}

#------------------------------------------------------------------------------
# tablelist::doScan
#
# Processes the tablelist scan subcommand.
#------------------------------------------------------------------------------
proc tablelist::doScan {win opt x y} {
    upvar ::tablelist::ns${win}::data data
    set w $data(body)
    incr x -[winfo x $w]
    incr y -[winfo y $w]

    if {$opt eq "mark"} {
	if {$data(-titlecolumns) == 0} {
	    $w scan mark $x 0
	    $data(hdrTxt) scan mark $x 0
	} else {
	    set data(scanMarkX) $x
	    set data(scanMarkXOffset) \
		[scrlColOffsetToXOffset $win $data(scrlColOffset)]
	}

	set data(scanMarkY) $y
	set data(scanMarkTopRowOffset) \
	    [getViewableRowCount $win 0 [expr {[getVertComplTopRow $win] - 1}]]
	set data(winViewableCount) [getViewableRowCount $win \
	    [getVertComplTopRow $win] [getVertComplBtmRow $win]]
	set data(bodyHeight) [winfo height $w]
    } else {
	if {![info exists data(scanMarkY)]} {
	    return ""
	}

	set data(scanDragToX) $x
	set data(scanDragToY) $y
	if {![info exists data(dragToId)]} {
	    variable winSys
	    if {$winSys eq "x11"} {
		set delay [expr {($data(colCount) + 3) / 4}]
	    } else {
		set delay $data(colCount)
	    }
	    set data(dragToId) \
		[after $delay [list tablelist::dragTo $win]]
	}
    }

    return ""
}

#------------------------------------------------------------------------------
# tablelist::populate
#
# Helper procedure invoked in searchcolumnSubCmd.
#------------------------------------------------------------------------------
proc tablelist::populate {win index fully} {
    upvar ::tablelist::ns${win}::data data
    set col $data(treeCol)

    #
    # Level-order traversal
    #
    set idxList [list $index]
    while {[llength $idxList] != 0} {
	set idxList [lsort -integer -decreasing $idxList]
	set keyList {}

	foreach idx $idxList {
	    set key [lindex $data(keyList) $idx]
	    if {![info exists data($key,$col-indent)] ||
		[string match "*indented*" $data($key,$col-indent)]} {
		continue
	    }

	    if {[llength $data($key-childList)] == 0} {
		uplevel #0 $data(-populatecommand) [list $win $idx]
	    }

	    if {$fully} {
		foreach childKey $data($key-childList) {
		    lappend keyList $childKey
		}
	    }
	}

	set idxList {}
	foreach key $keyList {
	    lappend idxList [keyToRow $win $key]
	}
    }
}

#------------------------------------------------------------------------------
# tablelist::doesMatch
#
# Helper procedure invoked in searchcolumnSubCmd.
#------------------------------------------------------------------------------
proc doesMatch {win row col pattern value mode numeric noCase checkCmd} {
    switch -- $mode {
	-exact {
	    if {$numeric} {
		set result [expr {$pattern == $value}]
	    } else {
		if {$noCase} {
		    set value [string tolower $value]
		}
		set result [expr {$pattern eq $value}]
	    }
	}

	-glob {
	    if {$noCase} {
		set value [string tolower $value]
	    }
	    set result [string match $pattern $value]
	}

	-regexp {
	    if {$noCase} {
		set result [regexp -nocase $pattern $value]
	    } else {
		set result [regexp $pattern $value]
	    }
	}
    }

    if {!$result || $checkCmd eq ""} {
	return $result
    } else {
	return [uplevel #0 $checkCmd [list $win $row $col $value]]
    }
}

#------------------------------------------------------------------------------
# tablelist::seeRow
#
# Processes the tablelist see subcommand.
#------------------------------------------------------------------------------
proc tablelist::seeRow {win index} {
    #
    # This might be an "after 0" callback; check whether the window exists
    #
    if {[destroyed $win]} {
	return ""
    }

    #
    # Adjust the index to fit within the existing items
    #
    adjustRowIndex $win index
    upvar ::tablelist::ns${win}::data data
    set key [lindex $data(keyList) $index]
    if {$data(itemCount) == 0 || [info exists data($key-hide)]} {
	return ""
    }

    #
    # Expand as many ancestors as needed
    #
    while {[info exists data($key-elide)]} {
	set key $data($key-parent)
	expandSubCmd $win [list $key -partly]
    }

    #
    # Bring the given row into the window and restore
    # the horizontal view in the body text widget
    #
    seeTextIdx $win [expr {$index + 1}].0
    $data(body) xview moveto [lindex [$data(hdrTxt) xview] 0]

    updateView $win
    return ""
}

#------------------------------------------------------------------------------
# tablelist::seeCell
#
# Processes the tablelist seecell subcommand.
#------------------------------------------------------------------------------
proc tablelist::seeCell {win row col} {
    #
    # This might be an "after 0" callback; check whether the window exists
    #
    if {[destroyed $win]} {
	return ""
    }

    #
    # Adjust the row and column indices to fit within the existing elements
    #
    adjustRowIndex $win row
    adjustColIndex $win col
    upvar ::tablelist::ns${win}::data data
    set key [lindex $data(keyList) $row]
    if {[info exists data($key-hide)] ||
	($data(colCount) != 0 && $data($col-hide))} {
	return ""
    }

    #
    # Expand as many ancestors as needed
    #
    while {[info exists data($key-elide)]} {
	set key $data($key-parent)
	expandSubCmd $win [list $key -partly]
    }

    set b $data(body)
    if {$data(colCount) == 0} {
	$b see [expr {$row + 1}].0
	return ""
    }

    #
    # Force any geometry manager calculations to be completed first
    #
    update idletasks
    if {[destroyed $win]} {
	return ""
    }

    #
    # If the tablelist is empty then insert a temporary row
    #
    set h $data(hdrTxt)
    if {$data(itemCount) == 0} {
	for {set n 0} {$n < $data(colCount)} {incr n} {
	    if {!$data($n-hide)} {
		$b insert end "\t\t"
	    }
	}

	$b xview moveto [lindex [$h xview] 0]
    }

    if {$data(-titlecolumns) == 0} {
	findTabs $win $b [expr {$row + 1}] $col $col tabIdx1 tabIdx2
	variable pu
	set nextIdx [$b index $tabIdx2+1$pu]
	set alignment [lindex $data(colList) [expr {2*$col + 1}]]
	set lX [winfo x $data(hdrTxtFrmLbl)$col]
	set rX [expr {$lX + [winfo width $data(hdrTxtFrmLbl)$col] - 1}]

	variable usingTile
	variable currentTheme
	variable newAquaSupport
	if {$usingTile && $currentTheme eq "aqua" && !$newAquaSupport} {
	    incr lX
	    if {$col == 0} {
		incr lX
	    }
	}

	switch $alignment {
	    left {
		#
		# Bring the cell's left edge into view
		#
		seeTextIdx $win $tabIdx1
		$h xview moveto [lindex [$b xview] 0]

		#
		# Shift the view in the header text widget until the right
		# edge of the cell becomes visible but finish the scrolling
		# before the cell's left edge would become invisible
		#
		while {![isHdrTxtFrXPosVisible $win $rX]} {
		    $h xview scroll 1 units
		    if {![isHdrTxtFrXPosVisible $win $lX]} {
			$h xview scroll -1 units
			break
		    }
		}
	    }

	    center {
		#
		# Bring the cell's left edge into view
		#
		seeTextIdx $win $tabIdx1
		set winWidth [winfo width $h]
		if {[winfo width $data(hdrTxtFrmLbl)$col] > $winWidth} {
		    #
		    # The cell doesn't fit into the window:  Bring its
		    # center into the window's middle horizontal position
		    #
		    $h xview moveto \
		       [expr {double($lX + $rX - $winWidth)/2/$data(hdrWidth)}]
		} else {
		    #
		    # Shift the view in the header text widget until
		    # the right edge of the cell becomes visible
		    #
		    $h xview moveto [lindex [$b xview] 0]
		    while {![isHdrTxtFrXPosVisible $win $rX]} {
			$h xview scroll 1 units
		    }
		}
	    }

	    right {
		#
		# Bring the cell's right edge into view
		#
		seeTextIdx $win $nextIdx
		$h xview moveto [lindex [$b xview] 0]

		#
		# Shift the view in the header text widget until the left
		# edge of the cell becomes visible but finish the scrolling
		# before the cell's right edge would become invisible
		#
		while {![isHdrTxtFrXPosVisible $win $lX]} {
		    $h xview scroll -1 units
		    if {![isHdrTxtFrXPosVisible $win $rX]} {
			$h xview scroll 1 units
			break
		    }
		}
	    }
	}

	$b xview moveto [lindex [$h xview] 0]

    } else {
	#
	# Bring the cell's row into view
	#
	seeTextIdx $win [expr {$row + 1}].0

	set scrlWindowWidth [getScrlWindowWidth $win]

	if {($col < $data(-titlecolumns)) ||
	    (!$data($col-elide) &&
	     [getScrlContentWidth $win $data(scrlColOffset) $col] <=
	     $scrlWindowWidth)} {
	    #
	    # The given column index specifies either a title column or
	    # one that is fully visible; restore the horizontal view
	    #
	    $b xview moveto [lindex [$h xview] 0]
	} elseif {$data($col-elide) ||
		  [winfo width $data(hdrTxtFrmLbl)$col] > $scrlWindowWidth} {
	    #
	    # The given column index specifies either an elided column or one
	    # that doesn't fit into the window; shift the horizontal view to
	    # make the column the first visible one among all scrollable columns
	    #
	    set scrlColOffset 0
	    for {incr col -1} {$col >= $data(-titlecolumns)} {incr col -1} {
		if {!$data($col-hide)} {
		    incr scrlColOffset
		}
	    }
	    changeScrlColOffset $win $scrlColOffset
	} else {
	    #
	    # The given column index specifies a non-elided
	    # scrollable column; shift the horizontal view
	    # repeatedly until the column becomes visible
	    #
	    set scrlColOffset [expr {$data(scrlColOffset) + 1}]
	    while {[getScrlContentWidth $win $scrlColOffset $col] >
		   $scrlWindowWidth} {
		incr scrlColOffset
	    }
	    changeScrlColOffset $win $scrlColOffset
	}
    }

    #
    # Delete the temporary row if any
    #
    if {$data(itemCount) == 0} {
	$b delete 1.0 end
    }

    updateView $win
    return ""
}

#------------------------------------------------------------------------------
# tablelist::rowSelection
#
# Processes the tablelist selection subcommand.
#------------------------------------------------------------------------------
proc tablelist::rowSelection {win opt first last} {
    upvar ::tablelist::ns${win}::data data \
	  ::tablelist::ns${win}::selStates selStates
    if {$data(isDisabled) && $opt ne "includes"} {
	return ""
    }

    switch $opt {
	anchor {
	    #
	    # Adjust the index to fit within the existing viewable items
	    #
	    adjustRowIndex $win first 1

	    set data(anchorRow) $first
	    return ""
	}

	clear {
	    #
	    # Swap the indices if necessary
	    #
	    if {$last < $first} {
		set tmp $first
		set first $last
		set last $tmp
	    }

	    if {$first == 0 && $last == $data(lastRow)} {
		array unset selStates *		;# this works much faster
	    } else {
		for {set row $first} {$row <= $last} {incr row} {
		    set key [lindex $data(keyList) $row]
		    array unset selStates $key
		    array unset selStates $key,*
		}
	    }

	    return ""
	}

	includes {
	    set key [lindex $data(keyList) $first]
	    return [expr {([info exists selStates($key)] ||
			   [llength [array names selStates $key,*]] != 0) &&
			  $data(colCount) != 0}]
	}

	set {
	    #
	    # Swap the indices if necessary and adjust
	    # the range to fit within the existing items
	    #
	    if {$last < $first} {
		set tmp $first
		set first $last
		set last $tmp
	    }
	    if {$first < 0} {
		set first 0
	    }
	    if {$last > $data(lastRow)} {
		set last $data(lastRow)
	    }

	    for {set row $first} {$row <= $last} {incr row} {
		#
		# Check whether the row is selectable
		#
		set key [lindex $data(keyList) $row]
		if {![info exists data($key-selectable)]} {	;# selectable
		    set selStates($key) 1
		}
	    }

	    #
	    # If the selection is exported and there are any selected
	    # cells in the widget then make win the new owner of the
	    # PRIMARY selection and register a callback to be invoked
	    # when it loses ownership of the PRIMARY selection
	    #
	    if {$data(-exportselection) && [array size selStates] != 0 &&
		$data(colCount) != 0} {
		selection own -command \
		    [list ::tablelist::lostSelection $win] $win
	    }

	    return ""
	}
    }
}

#------------------------------------------------------------------------------
# tablelist::horizMoveTo
#
# Adjusts the view in the tablelist window win so that data(horizFraction) of
# the horizontal span of the text is off-screen to the left.
#------------------------------------------------------------------------------
proc tablelist::horizMoveTo win {
    upvar ::tablelist::ns${win}::data data
    unset data(horizMoveToId)

    foreach w [list $data(hdrTxt) $data(body)] {
	$w xview moveto $data(horizFraction)
    }

    redisplayVisibleItems $win
    hdr_updateColors $win
    updateColors $win
    workAroundAquaTkBugs $win
}

#------------------------------------------------------------------------------
# tablelist::horizScrollByUnits
#
# Adjusts the view in the tablelist window win left or right by
# data(horizUnits) character units.
#------------------------------------------------------------------------------
proc tablelist::horizScrollByUnits win {
    upvar ::tablelist::ns${win}::data data
    unset data(horizScrollId)

    foreach w [list $data(hdrTxt) $data(body)] {
	$w xview scroll $data(horizUnits) units
    }

    redisplayVisibleItems $win
    hdr_updateColors $win
    updateColors $win
    workAroundAquaTkBugs $win
}

#------------------------------------------------------------------------------
# tablelist::vertMoveTo
#
# Adjusts the view in the tablelist window win so that the viewable item given
# by data(vertFraction) appears at the top of the window.
#------------------------------------------------------------------------------
proc tablelist::vertMoveTo win {
    upvar ::tablelist::ns${win}::data data
    unset data(vertMoveToId)

    set totalViewableCount [getViewableRowCount $win 0 $data(lastRow)]
    set offset [expr {int($data(vertFraction)*$totalViewableCount + 0.5)}]
    set row [viewableRowOffsetToRowIndex $win $offset]
    $data(body) yview $row
    set data(topRowChanged) 1

    updateView $win $row
    updateIdletasksDelayed
}

#------------------------------------------------------------------------------
# tablelist::vertScrollByUnits
#
# Adjusts the view in the tablelist window win up or down by data(vertUnits)
# viewable rows.
#------------------------------------------------------------------------------
proc tablelist::vertScrollByUnits win {
    upvar ::tablelist::ns${win}::data data
    unset data(vertScrollId)

    set topRow [getVertComplTopRow $win]
    set upperViewableCount [getViewableRowCount $win 0 [expr {$topRow - 1}]]
    set offset [expr {$upperViewableCount + $data(vertUnits)}]
    set row [viewableRowOffsetToRowIndex $win $offset]
    $data(body) yview $row
    set data(topRowChanged) 1

    updateView $win $row
    updateIdletasksDelayed
}

#------------------------------------------------------------------------------
# tablelist::dragTo
#
# Adjusts the view in the tablelist window win by 10 times the difference
# between data(scanDragToX) and data(scanDragToY) and the x and y arguments to
# the last scan mark command.
#------------------------------------------------------------------------------
proc tablelist::dragTo win {
    upvar ::tablelist::ns${win}::data data
    unset data(dragToId)

    set w $data(body)
    if {$data(-titlecolumns) == 0} {
	$w scan dragto $data(scanDragToX) 0
	$data(hdrTxt) scan dragto $data(scanDragToX) 0
    } else {
	#
	# Compute the new scrolled x offset by amplifying the
	# difference between the current horizontal position and
	# the place where the scan started (the "mark" position)
	#
	set scrlXOffset [expr {$data(scanMarkXOffset) -
	    10*($data(scanDragToX) - $data(scanMarkX))}]
	if {$scrlXOffset < 0} {
	    set data(scanMarkX) $data(scanDragToX)
	    set data(scanMarkXOffset) 0
	    set scrlXOffset 0
	} else {
	    set maxScrlXOffset \
		[scrlColOffsetToXOffset $win [getMaxScrlColOffset $win]]
	    if {$scrlXOffset > $maxScrlXOffset} {
		set data(scanMarkX) $data(scanDragToX)
		set data(scanMarkXOffset) $maxScrlXOffset
		set scrlXOffset $maxScrlXOffset
	    }
	}

	changeScrlColOffset $win [scrlXOffsetToColOffset $win $scrlXOffset]
    }

    #
    # Compute the new top row offset by amplifying the
    # difference between the current vertical position and
    # the place where the scan started (the "mark" position)
    #
    set numUnits [expr {10*($data(scanDragToY) - $data(scanMarkY)) *
	$data(winViewableCount) / $data(bodyHeight)}]
    set newTopRowOffset [expr {$data(scanMarkTopRowOffset) - $numUnits}]
    if {$newTopRowOffset < 0} {
	set data(scanMarkY) $data(scanDragToY)
	set data(scanMarkTopRowOffset) 0
	set newTopRowOffset 0
    } else {
	set maxRowOffset [getViewableRowCount $win 0 $data(lastRow)]
	if {$newTopRowOffset > $maxRowOffset} {
	    set data(scanMarkY) $data(scanDragToY)
	    set data(scanMarkTopRowOffset) $maxRowOffset
	    set newTopRowOffset $maxRowOffset
	}
    }

    set row [viewableRowOffsetToRowIndex $win $newTopRowOffset]
    $w yview $row
    set data(topRowChanged) 1

    hdr_adjustElidedText $win
    hdr_updateColors $win
    adjustElidedText $win
    redisplayVisibleItems $win
    if {$::tk_version >= 8.5} {
	$w yview $row
    }
    updateColors $win
    adjustSepsWhenIdle $win
    updateVScrlbarWhenIdle $win
    updateIdletasksDelayed
}

#------------------------------------------------------------------------------
# tablelist::seeTextIdx
#
# Wraps the "see" command of the body text widget of the tablelist widget win.
#------------------------------------------------------------------------------
proc tablelist::seeTextIdx {win textIdx} {
    set row [expr {int($textIdx) - 1}]
    set topRow [getVertComplTopRow $win]
    set btmRow [getVertComplBtmRow $win]
    set units 0

    if {$row < $topRow} {
	set diff [expr {[getViewableRowCount $win $row $topRow] - 1}]
	set winViewableCount [getViewableRowCount $win $topRow $btmRow]
	set units [expr {$diff <= $winViewableCount / 3 ?
		   -$diff : -($diff + $winViewableCount/2)}]
    } elseif {$row > $btmRow} {
	set diff [expr {[getViewableRowCount $win $btmRow $row] - 1}]
	set winViewableCount [getViewableRowCount $win $topRow $btmRow]
	set units [expr {$diff <= $winViewableCount / 3 ?
		   $diff : $diff + $winViewableCount/2}]
    }

    if {$units != 0} {
	#
	# Adjust the view vertically (scroll by $units units)
	#
	incr units [getViewableRowCount $win 0 [expr {$topRow - 1}]]
	yviewSubCmd $win $units
    }

    #
    # Adjust the view horizontally
    #
    upvar ::tablelist::ns${win}::data data
    $data(body) see $textIdx
}

#------------------------------------------------------------------------------
# tablelist::updateIdletasksDelayed
#
# Schedules the execution of "update idletasks" 50 ms later.
#------------------------------------------------------------------------------
proc tablelist::updateIdletasksDelayed {} {
    variable idletasksId
    if {![info exists idletasksId]} {
	set idletasksId [after 50 [list tablelist::updateIdletasks]]
    }
}

#------------------------------------------------------------------------------
# tablelist::updateIdletasks
#
# Invokes "update idletasks".
#------------------------------------------------------------------------------
proc tablelist::updateIdletasks {} {
    variable idletasksId
    unset idletasksId

    update idletasks
}

#
# Private callback procedures
# ===========================
#

#------------------------------------------------------------------------------
# tablelist::hdrConfigure
#
# <Configure> callback for the header component of a tablelist widget.
#------------------------------------------------------------------------------
proc tablelist::hdrConfigure {w width} {
    set win [winfo parent $w]
    upvar ::tablelist::ns${win}::data data

    if {$width - 1 != $data(rightX)} {
	stretchColumnsWhenIdle $win
	updateScrlColOffsetWhenIdle $win
	updateHScrlbarWhenIdle $win
    }
}

#------------------------------------------------------------------------------
# tablelist::bodyConfigure
#
# <Configure> callback for the body component of a tablelist widget.
#------------------------------------------------------------------------------
proc tablelist::bodyConfigure {w width height} {
    set win [winfo parent $w]
    upvar ::tablelist::ns${win}::data data

    set rightX [expr {$width - 1}]
    set btmY [expr {$height - 1}]
    if {$rightX != $data(rightX) || $btmY != $data(btmY)} {
	set data(winSizeChanged) 1
	set data(rightX) $rightX
	set data(btmY) $btmY

	makeColFontAndTagLists $win
	updateViewWhenIdle $win
    }
}

#------------------------------------------------------------------------------
# tablelist::fetchSelection
#
# This procedure is invoked when the PRIMARY selection is owned by the
# tablelist widget win and someone attempts to retrieve it as a STRING.  It
# returns part or all of the selection, as given by offset and maxChars.  The
# string which is to be (partially) returned is built by joining all of the
# selected viewable elements of the (partly) selected viewable rows together
# with tabs and the rows themselves with newlines.
#------------------------------------------------------------------------------
proc tablelist::fetchSelection {win offset maxChars} {
    upvar ::tablelist::ns${win}::data data
    if {!$data(-exportselection)} {
	return ""
    }

    set selection ""
    set prevRow -1
    foreach cellIdx [curCellSelection $win 2] {
	##nagelfar ignore
	scan $cellIdx "%d,%d" row col
	if {$row != $prevRow} {
	    if {$prevRow != -1} {
		append selection "\n"
	    }

	    set prevRow $row
	    set item [lindex $data(itemList) $row]
	    set key [lindex $item end]
	    set isFirstCol 1
	}

	set text [lindex $item $col]
	if {[lindex $data(fmtCmdFlagList) $col]} {
	    set text [formatElem $win $key $row $col $text]
	}

	if {!$isFirstCol} {
	    append selection "\t"
	}
	append selection $text

	set isFirstCol 0
    }

    return [string range $selection $offset [expr {$offset + $maxChars - 1}]]
}

#------------------------------------------------------------------------------
# tablelist::lostSelection
#
# This procedure is invoked when the tablelist widget win loses ownership of
# the PRIMARY selection.  It deselects all items of the widget with the aid of
# the selectionSubCmd procedure if the selection is exported.
#------------------------------------------------------------------------------
proc tablelist::lostSelection win {
    upvar ::tablelist::ns${win}::data data
    if {$data(-exportselection)} {
	selectionSubCmd $win [list clear 0 $data(lastRow)]
	event generate $win <<TablelistSelectionLost>>
    }
}

#------------------------------------------------------------------------------
# tablelist::activeTrace
#
# This procedure is executed whenever the array element data(activeRow),
# data(activeCol), or data(-selecttype) is written.  It moves the "active" tag
# to the line or cell that displays the active item or element of the widget in
# its body text child if the latter has the keyboard focus.
#------------------------------------------------------------------------------
proc tablelist::activeTrace {win varName arrIndex op} {
    #
    # Conditionally move the "active" tag to the line
    # or cell that displays the active item or element
    #
    upvar ::tablelist::ns${win}::data data
    if {$data(ownsFocus) && ![info exists data(dispId)]} {
	moveActiveTag $win
    }
}

#------------------------------------------------------------------------------
# tablelist::listVarTrace
#
# This procedure is executed whenever the global variable specified by varName
# is written or unset.  It makes sure that the content of the widget will be
# synchronized with the value of the variable at idle time, and that the
# variable is recreated if it was unset.
#------------------------------------------------------------------------------
proc tablelist::listVarTrace {win varName arrIndex op} {
    upvar ::tablelist::ns${win}::data data
    switch $op {
	write {
	    if {![info exists data(syncId)]} {
		#
		# Arrange for the content of the widget to be synchronized
		# with the value of the variable ::$varName at idle time
		#
		set data(syncId) [after idle [list tablelist::synchronize $win]]
	    }
	}

	unset {
	    #
	    # Recreate the variable $varName by setting it according to
	    # the value of data(itemList), and set the trace on it again
	    #
	    if {$arrIndex ne ""} {
		set varName ${varName}($arrIndex)
	    }
	    upvar #0 $varName var
	    set var {}
	    foreach item $data(itemList) {
		lappend var [lrange $item 0 $data(lastCol)]
	    }
	    trace add variable var {write unset} $data(listVarTraceCmd)
	}
    }
}

#------------------------------------------------------------------------------
# tablelist::checkStatesTrace
#
# This procedure is executed whenever an element of the array checkStates is
# written.  It updates the corresponding tablelist element at idle time.
#------------------------------------------------------------------------------
proc tablelist::checkStatesTrace {win varName arrIndex op} {
    #
    # $arrIndex is a cell index of the form "<key>,<col>",
    # which at idle time will no longer be valid if in
    # the meantime the cell's row or column got deleted
    #
    if {[string match "h*" $arrIndex]} {
	set subcmd "header cellconfigure"
    } else {
	set subcmd "cellconfigure"
    }
    upvar $varName var
    set script [format {
	catch {%s %s %s -text %s}
    } [list $win] $subcmd $arrIndex [list $var($arrIndex)]]
    after idle $script
}

#------------------------------------------------------------------------------
# tablelist::populateCmd
#
# This procedure is the value to which the loadfromfile and loadfromstring
# subcommands with the -partly option set the -populatecommand option of the
# tablelist widget win.  It inserts the children of the specified row,
# according to the values of some widget and row attributes, set by the 
# loadfromfile and loadfromstring subcommands.
#------------------------------------------------------------------------------
proc tablelist::populateCmd {win row} {
    set itemList [::$win attrib "itemList"]
    set parentList [::$win attrib "parentList"]
    set origRow [::$win rowattrib $row "origRow"]

    #
    # Get the indices within $itemList of all
    # children of the node given by $origRow
    #
    set idxList [lsearch -all -start [expr {$origRow + 1}] $parentList $origRow]

    #
    # Insert the items identified by the elements of
    # $idxList as children of the node given by $row
    #
    set itemList2 {}
    foreach idx $idxList {
	lappend itemList2 [lindex $itemList $idx]
    }
    ::$win insertchildlist $row end $itemList2

    #
    # Mark the expandable new rows as collapsed
    #
    set expandableRows {}
    foreach idx $idxList {
	incr row
	::$win rowattrib $row "origRow" $idx
	if {[lindex $parentList [expr {$idx + 1}]] == $idx} {
	    lappend expandableRows $row
	}
    }
    ::$win collapse $expandableRows -partly

    ::$win refreshsorting $row
}

#------------------------------------------------------------------------------
# tablelist::expandCmd
#
# This procedure is the value to which the loadfromfile and loadfromstring
# subcommands with the -partly option set the -expandcommand option of the
# tablelist widget win.  It invokes the populateCmd procedure if the specified
# row has no children yet.
#------------------------------------------------------------------------------
proc tablelist::expandCmd {win row} {
    if {[::$win childcount $row] == 0} {
	populateCmd $win $row
    }
}
