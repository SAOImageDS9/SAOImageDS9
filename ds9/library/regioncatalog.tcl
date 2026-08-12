#  Copyright (C) 1999-2021
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

# A region statistics catalog owns a canonical keyed model in addition to the
# Starbase arrays used by the Catalog Tool.  Physical table rows are always a
# derived view and are never used as region identities.

proc RegionCatalogCreate {{frame {}}} {
    global current
    global wcs
    global iregioncatalog

    if {$frame == {}} {
	set frame $current(frame)
    }
    if {$frame == {} || [info commands $frame] == {} || ![$frame has fits]} {
	Error [msgcat::mc {No image data available}]
	return {}
    }

    if {[info exists iregioncatalog(frame,$frame)]} {
	set old $iregioncatalog(frame,$frame)
	upvar #0 $old ovar
	if {[info exists ovar(top)] && [winfo exists $ovar(top)]} {
	    raise $ovar(top)
	    RegionCatalogRecalculate $old
	    return $old
	}
	unset iregioncatalog(frame,$frame)
    }

    set system $wcs(system)
    set sky $wcs(sky)
    if {$system != {image} && ![$frame has wcs $system]} {
	set system image
    }

    set title "[msgcat::mc {Region Statistics}] — $frame"
    set varname [CATDialog catregionstats regionstats region_statistics \
	$title none]
    if {$varname == {}} {
	return {}
    }

    upvar #0 $varname var
    set var(frame) $frame
    set var(regioncatalog) 1
    set var(regioncatalog,system) $system
    set var(regioncatalog,sky) $sky
    set var(regioncatalog,generation) 0
    set var(regioncatalog,keys) {}
    set var(proc,table) RegionCatalogRefreshView
    set var(proc,destroy) [list RegionCatalogDetach $varname]
    set var(show) 0
    set var(edit) 0
    set var(panto) 0
    set var(allrows) 1

    set iregioncatalog(frame,$frame) $varname

    # Region statistics catalogs display data only.  They never create catalog
    # markers or couple table selection back to the source regions.
    $var(tbl) configure -browsecommand [list RegionCatalogSelectCmd $varname %s %S]
    $var(top).param.bfilter configure \
	-command [list RegionCatalogFilterDialog $varname]
    $var(top).param.isort configure \
	-command [list RegionCatalogRefreshView $varname]
    $var(top).param.dsort configure \
	-command [list RegionCatalogRefreshView $varname]
    $var(top).buttons.filter configure \
	-command [list RegionCatalogRefreshView $varname]
    $var(mb).file entryconfig [msgcat::mc {Filter}] \
	-command [list RegionCatalogRefreshView $varname]

    foreach item {{Retrieve} {Cancel} {Clear} {Show} {Edit} {Copy to Regions} \
	{Update from Current Frame} {Update from Current Crosshair}} {
	catch {$var(mb).file entryconfig [msgcat::mc $item] -state disabled}
    }
    catch {$var(mb) entryconfig [msgcat::mc {Catalog Server}] -state disabled}
    catch {$var(mb) entryconfig [msgcat::mc {Symbol}] -state disabled}
    foreach button {load apply cancel clear} {
	catch {$var(top).buttons.$button configure -state disabled}
    }
    pack forget $var(top).obj

    # Subscribe before taking the initial snapshot.  Stage 5 clears pending
    # events when registering, and any later mutation is delivered at idle.
    if {[catch {
	# The frame command has its own parser, so preserve the multiword Tcl
	# command prefix as one braced marker-command token.
	set callback [list [list RegionCatalogEvent $varname]]
	$frame marker analysis stats callback $callback
	set fields [$frame get marker analysis stats fields]
	set batch [$frame get marker analysis stats all data $system $sky]
	RegionCatalogInitialize $varname $fields $batch
    } message options]} {
	RegionCatalogDetach $varname
	CATDestroy $varname
	Error "[msgcat::mc {Unable to create region statistics catalog}]: $message"
	return {}
    }

    return $varname
}

proc RegionCatalogInitialize {varname fields batch} {
    upvar #0 $varname var

    RegionCatalogCheckSchema $fields fields
    RegionCatalogCheckSchema $batch regions

    set regions [dict get $batch regions]
    set areaunit [RegionCatalogDefaultAreaUnit $var(regioncatalog,system)]
    if {[llength $regions]} {
	set areaunit [dict get [lindex $regions 0] area_unit]
    }

    RegionCatalogBuildSchema $varname [dict get $fields fields] $areaunit
    RegionCatalogReplaceAll $varname $batch 0

    set var(colx) $var(regioncatalog,coordx)
    set var(coly) $var(regioncatalog,coordy)
    set var(psystem) $var(regioncatalog,system)
    set var(psky) $var(regioncatalog,sky)

    TBLSortMenu $varname
    CATColsMenu $varname
    CATColsUpdate $varname
    RegionCatalogRefreshView $varname
}

proc RegionCatalogCheckSchema {value required} {
    if {![dict exists $value schema_version] ||
	[dict get $value schema_version] != 1 ||
	![dict exists $value $required]} {
	error "unsupported region statistics $required schema"
    }
}

proc RegionCatalogDefaultAreaUnit {system} {
    switch -- $system {
	image {return pixel_squared}
	physical -
	amplifier -
	detector {return linear_squared}
	default {return arcsec_squared}
    }
}

proc RegionCatalogCoordinateInfo {frame system sky} {
    if {$system == {image}} {
	return [dict create x X y Y unit pixel xucd pos.cartesian.x \
	    yucd pos.cartesian.y]
    }
    if {$system == {physical} || $system == {amplifier} ||
	$system == {detector}} {
	return [dict create x X y Y unit pixel xucd pos.cartesian.x \
	    yucd pos.cartesian.y]
    }
    if {[$frame has wcs celestial $system]} {
	switch -- $sky {
	    fk4 {
		return [dict create x RA_B1950 y DEC_B1950 unit deg \
		    xucd pos.eq.ra yucd pos.eq.dec]
	    }
	    fk5 {
		return [dict create x RA_J2000 y DEC_J2000 unit deg \
		    xucd pos.eq.ra yucd pos.eq.dec]
	    }
	    icrs {
		return [dict create x RA_ICRS y DEC_ICRS unit deg \
		    xucd pos.eq.ra yucd pos.eq.dec]
	    }
	    galactic {
		return [dict create x GLON y GLAT unit deg \
		    xucd pos.galactic.lon yucd pos.galactic.lat]
	    }
	    ecliptic {
		return [dict create x ELON y ELAT unit deg \
		    xucd pos.ecliptic.lon yucd pos.ecliptic.lat]
	    }
	}
    }
    return [dict create x WCS_X y WCS_Y unit linear \
	xucd pos.cartesian.x yucd pos.cartesian.y]
}

proc RegionCatalogUniqueColumn {used preferred key} {
    set name $preferred
    if {$name == {}} {
	set name [string map {. _ { } _ - _} $key]
    }
    if {[lsearch -exact $used $name] < 0} {
	return $name
    }
    set name "stat_$name"
    set base $name
    set count 1
    while {[lsearch -exact $used $name] >= 0} {
	set name "${base}_[incr count]"
    }
    return $name
}

proc RegionCatalogUnit {kind areaunit} {
    switch -- $areaunit {
	pixel_squared {set area {pixel**2}}
	arcsec_squared {set area {arcsec**2}}
	linear_squared {set area {linear**2}}
	default {set area $areaunit}
    }
    switch -- $kind {
	data_value -
	data_error {return data}
	pixel_count {return pixel}
	area {return $area}
	data_per_area {return "data/$area"}
	default {return {}}
    }
}

proc RegionCatalogBuildSchema {varname fields areaunit} {
    upvar #0 $varname var

    set coord [RegionCatalogCoordinateInfo $var(frame) \
	$var(regioncatalog,system) $var(regioncatalog,sky)]
    set var(regioncatalog,coordx) [dict get $coord x]
    set var(regioncatalog,coordy) [dict get $coord y]
    set var(regioncatalog,fields) $fields
    set var(regioncatalog,areaunit) $areaunit

    set header {region_id component shape background exclude}
    lappend header $var(regioncatalog,coordx) $var(regioncatalog,coordy)
    set datatype {int int char int int double double}
    set arraysize {{} {} * {} {} {} {}}
    set precision {0 0 {} 0 0 10 10}
    set unit [list {} {} {} {} {} [dict get $coord unit] [dict get $coord unit]]
    set ucd [list meta.id meta.number meta.code meta.code meta.code \
	[dict get $coord xucd] [dict get $coord yucd]]
    set description [list {DS9 region identifier} {Region component number} \
	{DS9 region shape} {Background-region flag} {Excluded-region flag} \
	{Region center first coordinate} {Region center second coordinate}]
    set ids {region_id component shape background exclude center_1 center_2}

    foreach field $fields {
	set key [dict get $field key]
	set col [RegionCatalogUniqueColumn $header [dict get $field label] $key]
	set var(regioncatalog,column,$key) $col
	lappend header $col
	switch -- [dict get $field datatype] {
	    integer {
		lappend datatype int
		lappend arraysize {}
	    }
	    real {
		lappend datatype double
		lappend arraysize {}
	    }
	    default {
		lappend datatype char
		lappend arraysize *
	    }
	}
	lappend precision [dict get $field precision]
	lappend unit [RegionCatalogUnit [dict get $field unit_kind] $areaunit]
	lappend ucd [dict get $field ucd]
	lappend description [dict get $field description]
	lappend ids $key
    }

    set var(regioncatalog,Header) $header
    set var(regioncatalog,DataType) $datatype
    set var(regioncatalog,ArraySize) $arraysize
    set var(regioncatalog,Precision) $precision
    set var(regioncatalog,Unit) $unit
    set var(regioncatalog,Ucd) $ucd
    set var(regioncatalog,Description) $description
    set var(regioncatalog,Id) $ids
    RegionCatalogInstallSchema $varname
}

proc RegionCatalogInstallSchema {varname} {
    upvar #0 $varname var
    upvar #0 $var(catdb) db

    array unset db
    starbase_new db {*}$var(regioncatalog,Header)
    set db(H_1) $db(Header)
    set db(H_2) [regsub -all {[A-Za-z0-9]} $db(Header) {-}]
    foreach name {DataType ArraySize Precision Unit Ucd Description Id} {
	set db($name) $var(regioncatalog,$name)
    }
}

proc RegionCatalogRowsFromResult {varname result} {
    upvar #0 $varname var

    RegionCatalogCheckSchema $result components
    set id [dict get $result region_id]
    set center [dict get $result center]
    set rows {}
    foreach component [dict get $result components] {
	set number [dict get $component component]
	set row [dict create \
	    region_id $id \
	    component $number \
	    shape [dict get $result shape] \
	    background [dict get $result background] \
	    exclude [dict get $result exclude] \
	    $var(regioncatalog,coordx) [lindex $center 0] \
	    $var(regioncatalog,coordy) [lindex $center 1]]
	set values [dict get $component values]
	foreach field $var(regioncatalog,fields) {
	    set key [dict get $field key]
	    set col $var(regioncatalog,column,$key)
	    if {[dict exists $values $key]} {
		dict set row $col [dict get $values $key]
	    } else {
		dict set row $col {}
	    }
	}
	lappend rows [list [list $id $number] $row]
    }
    return $rows
}

proc RegionCatalogReplaceAll {varname batch {refresh 1}} {
    upvar #0 $varname var
    RegionCatalogCheckSchema $batch regions

    # Parse into temporary Tcl values before touching the live model.  A bad
    # region result therefore leaves the prior catalog intact.
    set records {}
    foreach result [dict get $batch regions] {
	foreach pair [RegionCatalogRowsFromResult $varname $result] {
	    lappend records $pair
	}
    }

    foreach name [array names var {regioncatalog,record,*}] {
	unset var($name)
    }
    set var(regioncatalog,keys) {}
    foreach pair $records {
	set key [lindex $pair 0]
	lassign $key id component
	lappend var(regioncatalog,keys) $key
	set var(regioncatalog,record,$id,$component) [lindex $pair 1]
    }
    if {$refresh} {
	RegionCatalogRefreshView $varname
    }
}

proc RegionCatalogDeleteRegion {varname id {refresh 1}} {
    upvar #0 $varname var
    if {![info exists var(regioncatalog)]} {
	return
    }
    foreach name [array names var "regioncatalog,record,$id,*"] {
	unset var($name)
    }
    set keys {}
    foreach key $var(regioncatalog,keys) {
	if {[lindex $key 0] != $id} {
	    lappend keys $key
	}
    }
    set var(regioncatalog,keys) $keys
    if {$refresh} {
	RegionCatalogRefreshView $varname
    }
}

proc RegionCatalogStoreRegion {varname id pairs} {
    upvar #0 $varname var

    set position [llength $var(regioncatalog,keys)]
    set keys {}
    foreach key $var(regioncatalog,keys) {
	if {[lindex $key 0] == $id} {
	    if {$position == [llength $var(regioncatalog,keys)]} {
		set position [llength $keys]
	    }
	} else {
	    lappend keys $key
	}
    }
    foreach name [array names var "regioncatalog,record,$id,*"] {
	unset var($name)
    }

    set newkeys {}
    foreach pair $pairs {
	set key [lindex $pair 0]
	lassign $key rid component
	lappend newkeys $key
	set var(regioncatalog,record,$rid,$component) [lindex $pair 1]
    }
    set var(regioncatalog,keys) [linsert $keys $position {*}$newkeys]
}

proc RegionCatalogReplaceRegion {varname id {refresh 1}} {
    upvar #0 $varname var
    if {[catch {
	set result [$var(frame) get marker $id analysis stats data \
	    $var(regioncatalog,system) $var(regioncatalog,sky)]
	if {$result == {}} {
	    set pairs {}
	} else {
	    if {[dict get $result region_id] != $id} {
		error "region statistics identifier mismatch"
	    }
	    set pairs [RegionCatalogRowsFromResult $varname $result]
	}
    } message]} {
	set var(status) "[msgcat::mc {Unable to update region}] $id: $message"
	return 0
    }

    RegionCatalogStoreRegion $varname $id $pairs
    if {$refresh} {
	RegionCatalogRefreshView $varname
    }
    return 1
}

proc RegionCatalogSelectedKeys {varname} {
    upvar #0 $varname var
    if {![info exists var(tbl)] || [info commands $var(tbl)] == {} ||
	![info exists var(tbldb)]} {
	return {}
    }
    upvar #0 $var(tbldb) view
    if {![TBLValidDB $var(tbldb)] ||
	![info exists view(region_id)] || ![info exists view(component)]} {
	return {}
    }
    set result {}
    foreach selection [$var(tbl) curselection] {
	set row [lindex [split $selection ,] 0]
	if {[string is integer -strict $row] && $row > 0 &&
	    $row <= $view(Nrows)} {
	    lappend result [list $view($row,$view(region_id)) \
		$view($row,$view(component))]
	}
    }
    return [lsort -unique $result]
}

proc RegionCatalogRebuildCanonical {varname} {
    upvar #0 $varname var
    RegionCatalogInstallSchema $varname
    upvar #0 $var(catdb) db

    foreach key $var(regioncatalog,keys) {
	lassign $key id component
	if {![info exists var(regioncatalog,record,$id,$component)]} {
	    continue
	}
	set row $var(regioncatalog,record,$id,$component)
	incr db(Nrows)
	set rr $db(Nrows)
	for {set cc 1} {$cc <= $db(Ncols)} {incr cc} {
	    set col $db(0,$cc)
	    if {[dict exists $row $col]} {
		set db($rr,$cc) [dict get $row $col]
	    } else {
		set db($rr,$cc) {}
	    }
	}
    }
}

proc RegionCatalogFilterAccept {src row filter} {
    upvar #0 $src table

    set context ::RegionCatalogFilterContext
    catch {namespace delete $context}
    namespace eval $context {}
    foreach column $table(Header) {
	set column [string trim $column]
	set value $table($row,$table($column))
	if {[string trim $value] == {}} {
	    set value 0
	}
	namespace eval $context [list set $column $value]
    }
    set expression [namespace eval $context [list subst $filter]]
    return [namespace eval $context [list expr $expression]]
}

proc RegionCatalogFilterSort {varname src dest} {
    upvar #0 $varname var
    upvar #0 $src source
    upvar #0 $dest target

    set target(Header) $source(Header)
    starbase_colmap target
    set target(Nrows) 0
    set target(HLines) $source(HLines)
    foreach name {DataType Id ArraySize Width Precision Unit Ref Ucd Description} {
	if {[info exists source($name)]} {
	    set target($name) $source($name)
	}
    }
    for {set rr 1} {$rr <= $source(HLines)} {incr rr} {
	set target(H_$rr) $source(H_$rr)
    }

    set order {}
    if {$var(sort) != {}} {
	set column $source($var(sort))
	for {set rr 1} {$rr <= $source(Nrows)} {incr rr} {
	    set value $source($rr,$column)
	    if {$value == {}} {set value 0}
	    lappend order [list $rr $value]
	}
	if {[catch {lsort $var(sort,dir) -real -index 1 $order} sorted]} {
	    set sorted [lsort $var(sort,dir) -ascii -index 1 $order]
	}
	set order $sorted
    } else {
	for {set rr 1} {$rr <= $source(Nrows)} {incr rr} {
	    lappend order [list $rr {}]
	}
    }

    foreach item $order {
	set sourceRow [lindex $item 0]
	if {$var(filter) != {}} {
	    if {[catch {
		set accepted [RegionCatalogFilterAccept $src $sourceRow $var(filter)]
	    }]} {
		return 0
	    }
	    if {!$accepted} {continue}
	}
	incr target(Nrows)
	for {set cc 1} {$cc <= $source(Ncols)} {incr cc} {
	    set target($target(Nrows),$cc) $source($sourceRow,$cc)
	}
    }
    return 1
}

proc RegionCatalogRefreshView {varname} {
    upvar #0 $varname var
    global icat
    if {![info exists var(regioncatalog)]} {
	return
    }

    set selected [RegionCatalogSelectedKeys $varname]
    RegionCatalogRebuildCanonical $varname

    if {$var(filter) == {} && $var(sort) == {}} {
	set var(tbldb) $var(catdb)
    } else {
	set var(tbldb) ${varname}tbldb
	upvar #0 $var(tbldb) view
	array unset view
	if {![RegionCatalogFilterSort $varname $var(catdb) $var(tbldb)]} {
	    set var(tbldb) $var(catdb)
	    set var(status) [msgcat::mc {Unable to evaluate filter}]
	}
    }

    if {[info exists var(tbl)] && [info commands $var(tbl)] != {}} {
	upvar #0 $var(tbldb) view
	$var(tbl) configure -variable $var(tbldb)
	$var(found) configure -textvariable ${var(tbldb)}(Nrows)
	set cols [expr {$view(Ncols) > $icat(mincols) ?
	    $view(Ncols) : $icat(mincols)}]
	set rows [expr {$view(Nrows)+1 > $icat(minrows) ?
	    $view(Nrows)+1 : $icat(minrows)}]
	$var(tbl) configure -cols $cols -rows $rows
	$var(tbl) selection clear all
	if {[llength $selected] && [info exists view(region_id)] &&
	    [info exists view(component)]} {
	    for {set rr 1} {$rr <= $view(Nrows)} {incr rr} {
		set key [list $view($rr,$view(region_id)) \
		    $view($rr,$view(component))]
		if {[lsearch -exact $selected $key] >= 0} {
		    $var(tbl) selection set $rr,1
		}
	    }
	}
	if {$var(plot)} {
	    CATPlotGenerate $varname
	}
	CATDialogUpdate $varname
    }
    RegionCatalogUpdateStatus $varname
}

proc RegionCatalogUpdateStatus {varname} {
    upvar #0 $varname var
    set ids {}
    set empty 0
    foreach key $var(regioncatalog,keys) {
	lappend ids [lindex $key 0]
	lassign $key id component
	if {[info exists var(regioncatalog,column,core.pixel_count)] &&
	    [info exists var(regioncatalog,record,$id,$component)]} {
	    set row $var(regioncatalog,record,$id,$component)
	    set col $var(regioncatalog,column,core.pixel_count)
	    if {![dict exists $row $col] || [dict get $row $col] == 0} {
		incr empty
	    }
	}
    }
    set ids [lsort -unique $ids]
    set skipped 0
    if {[info commands $var(frame)] != {} && [$var(frame) has fits]} {
	catch {
	    set all [$var(frame) get marker id all]
	    set skipped [expr {[llength $all]-[llength $ids]}]
	    if {$skipped < 0} {set skipped 0}
	}
    }
    set var(status) "[llength $ids] [msgcat::mc {regions}], \
	[llength $var(regioncatalog,keys)] [msgcat::mc {rows}], \
	$empty [msgcat::mc {empty}], $skipped [msgcat::mc {skipped}]"
}

proc RegionCatalogSelectCmd {varname old current} {
    upvar #0 $varname var
    if {![info exists var(regioncatalog)]} {
	return
    }
    set rows {}
    foreach selection [$var(tbl) curselection] {
	set row [lindex [split $selection ,] 0]
	if {[string is integer -strict $row] && $row > 0} {
	    lappend rows $row
	}
    }
    set currentRow [lindex [split $current ,] 0]
    if {[llength $rows] <= 1 && [string is integer -strict $currentRow] &&
	$currentRow > 0} {
	set rows [list $currentRow]
    }
    if {[llength $rows]} {
	set rows [lsort -integer -unique $rows]
	TBLStatusRows $varname $rows
	if {$var(plot)} {
	    CATPlotHighliteElement $varname $rows
	}
	SAMPSendTableRowListCmd $varname $rows
	RegionCatalogPanToRow $varname [lindex $rows 0]
    } else {
	RegionCatalogUpdateStatus $varname
    }
}

proc RegionCatalogPanToRow {varname row} {
    upvar #0 $varname var
    if {!$var(panto) || [info commands $var(frame)] == {} ||
	![$var(frame) has fits] || ![string is integer -strict $row] ||
	$row < 1} {
	return
    }
    upvar #0 $var(tbldb) view
    if {![TBLValidDB $var(tbldb)] || $row > $view(Nrows)} {
	return
    }
    set xcol $var(regioncatalog,coordx)
    set ycol $var(regioncatalog,coordy)
    if {![info exists view($xcol)] || ![info exists view($ycol)]} {
	return
    }
    set x $view($row,$view($xcol))
    set y $view($row,$view($ycol))
    if {$x == {} || $y == {}} {
	return
    }
    PanToFrame $var(frame) $x $y \
	$var(regioncatalog,system) $var(regioncatalog,sky)
}

# Plot and SAMP callbacks identify rows in the current filtered/sorted view.
# Handle them without catalog-marker lookups: region statistics catalogs never
# create those markers.
proc RegionCatalogSelectRows {varname src rowlist cc} {
    upvar #0 $varname var
    if {$cc != 1 || ![info exists var(regioncatalog)]} {
	return
    }
    set rows {}
    upvar #0 $var(tbldb) view
    foreach row [lsort -integer -unique $rowlist] {
	if {[string is integer -strict $row] && $row >= 1 &&
	    $row <= $view(Nrows)} {
	    lappend rows $row
	}
    }

    $var(tbl) selection clear all
    if {$rows == {}} {
	RegionCatalogUpdateStatus $varname
	return
    }
    foreach row $rows {
	$var(tbl) selection set $row,1
    }
    $var(tbl) see [lindex $rows 0],1
    TBLStatusRows $varname $rows

    switch -- $src {
	samp {
	    if {$var(plot)} {
		CATPlotHighliteElement $varname $rows
	    }
	}
	plot {SAMPSendTableRowListCmd $varname $rows}
    }
    RegionCatalogPanToRow $varname [lindex $rows 0]
}

proc RegionCatalogFilterDialog {varname} {
    upvar #0 $varname var
    if {[TBLEditDialog $varname filter $var(catdb)]} {
	RegionCatalogRefreshView $varname
    }
}

proc RegionCatalogRecalculate {varname} {
    upvar #0 $varname var
    if {![info exists var(regioncatalog)] ||
	[info commands $var(frame)] == {}} {
	return 0
    }
    if {![$var(frame) has fits]} {
	RegionCatalogReplaceAll $varname \
	    [dict create schema_version 1 regions {}]
	return 1
    }
    if {[catch {
	set batch [$var(frame) get marker analysis stats all data \
	    $var(regioncatalog,system) $var(regioncatalog,sky)]
	RegionCatalogReplaceAll $varname $batch
    } message]} {
	set var(status) "[msgcat::mc {Unable to recalculate catalog}]: $message"
	return 0
    }
    return 1
}

proc RegionCatalogEvent {varname event} {
    upvar #0 $varname var
    if {![info exists var(regioncatalog)]} {
	return
    }
    if {[catch {
	RegionCatalogCheckSchema $event added
	foreach key {generation reset image_changed changed deleted} {
	    if {![dict exists $event $key]} {
		error "incomplete region statistics event"
	    }
	}
    } message]} {
	set var(status) "[msgcat::mc {Unable to process live catalog update}]: $message"
	return
    }

    set generation [dict get $event generation]
    if {$generation <= $var(regioncatalog,generation)} {
	return
    }
    set var(regioncatalog,generation) $generation

    if {[dict get $event reset] || [dict get $event image_changed]} {
	RegionCatalogRecalculate $varname
	return
    }
    if {[catch {
	foreach id [dict get $event deleted] {
	    RegionCatalogDeleteRegion $varname $id 0
	}
	foreach id [concat [dict get $event added] [dict get $event changed]] {
	    RegionCatalogReplaceRegion $varname $id 0
	}
	RegionCatalogRefreshView $varname
    } message]} {
	set var(status) "[msgcat::mc {Unable to process live catalog update}]: $message"
    }
}

proc RegionCatalogDetach {varname} {
    global iregioncatalog
    upvar #0 $varname var
    if {![info exists var(regioncatalog)]} {
	return
    }
    set frame $var(frame)
    if {[info commands $frame] != {}} {
	catch {$frame marker analysis stats callback}
    }
    if {[info exists iregioncatalog(frame,$frame)] &&
	$iregioncatalog(frame,$frame) == $varname} {
	unset iregioncatalog(frame,$frame)
    }
    set var(regioncatalog) 0
}

proc RegionCatalogDestroy {varname} {
    if {[info exists ::$varname]} {
	CATDestroy $varname
    }
}

proc RegionCatalogFrameDelete {frame} {
    global iregioncatalog
    if {[info exists iregioncatalog(frame,$frame)]} {
	RegionCatalogDestroy $iregioncatalog(frame,$frame)
    }
}
