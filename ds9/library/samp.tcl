#  Copyright (C) 1999-2024
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc SAMPConnect {verbose} {
    global debug

    if {![SAMPConnectInit $verbose 0 $debug(tcl,samp)]} {
	# Error
	return
    }
}

proc SAMPConnectMetadata {} {
    global samp
    global ds9

    set map(samp.name) "string \"$ds9(app)\""
    set map(samp.description.text) {string "SAOImageDS9 is an astronomical visualization application"}
    set map(samp.icon.url) {string https://ds9.si.edu/sun.png}
    set map(samp.documentation.url) {string https://ds9.si.edu/doc/ref/index.html}

    set map(home.page) {string https://ds9.si.edu/}
    set map(author.name) {string "William Joye"}
    set map(author.email) {string ds9help@cfa.harvard.edu}
    set map(author.affiliation) {string "Smithsonian Astrophysical Observatory"}
    set map(ds9.version) "string [lindex $ds9(version) 0]"

    set param1 [list param [list value [list string $samp(private)]]]
    set param2 [list param [list value [list struct [xmlrpcList2Member [array get map]]]]]
    set params [list params [list $param1 $param2]]
    
    set rr {}
    if {![SAMPSend samp.hub.declareMetadata $params rr]} {
	# Error
	unset samp
	return
    }
}

proc SAMPConnectSubscriptions {} {
    global samp
    
    set map(samp.app.ping) {struct {}}

    set map(samp.hub.event.shutdown) {struct {}}
    set map(samp.hub.event.register) {struct {}}
    set map(samp.hub.event.unregister) {struct {}}
    set map(samp.hub.event.metadata) {struct {}}
    set map(samp.hub.event.subscriptions) {struct {}}
    set map(samp.hub.disconnect) {struct {}}

    set map(image.load.fits) {struct {}}
    set map(table.load.fits) {struct {}}
    set map(table.load.votable) {struct {}}
    set map(table.highlight.row) {struct {}}
    set map(table.select.rowList) {struct {}}
    set map(coord.pointAt.sky) {struct {}}
    set map(client.env.get) {struct {}}

    set map1(x-samp.mostly-harmless) "1"
    set m1 [xmlrpcList2Member [array get map1]]

    set map(ds9.get) [list struct $m1]
    set map(ds9.set) [list struct $m1]

    #    set map(samp.app.status) {struct {}}
    #    set map(samp.msg.progress) {struct {}}

    set param1 [list param [list value [list string $samp(private)]]]
    set param2 [list param [list value [list struct [xmlrpcList2Member [array get map]]]]]
    set params [list params [list $param1 $param2]]

    set rr {}
    if {![SAMPSend samp.hub.declareSubscriptions $params rr]} {
	# Error
	unset samp
	return
    }
}

proc SAMPSendMType {mtype id mm} {
    global samp
    
    set m2 [xmlrpcList2Member $mm]

    set map1(samp.mtype) "string $mtype"
    set map1(samp.params) [list struct $m2]
    set m1 [xmlrpcList2Member [array get map1]]

    set param1 [list param [list value [list string $samp(private)]]]
    if {$id != {}} {
	set param2 [list param [list value [list string $id]]]
    } else {
	set param2 {}
    }
    set param3 [list param [list value [list struct $m1]]]

    return [list params [list $param1 $param2 $param3]]
}

proc SAMPSendImageLoadFits {id} {
    global current
    global samp

    if {$samp(debug)} {
	puts stderr "SAMPSendImageLoadFits"
    }

    # connected?
    if {![info exists samp]} {
	Error "SAMP: [msgcat::mc {not connected}]"
	return
    }

    # got something to send?
    if {![$current(frame) has fits]} {
	return
    }

    # save current frame
    set fn [tmpnam {.fits}]
    lappend samp(tmp,files) $fn
    catch {$current(frame) save fits image file "\{$fn\}"}

    # name to use
    set fnb [$current(frame) get fits file name root base]
    if {[regexp {(.*)\[.*\]} $fnb aa bb]} {
	set fnb $bb
    }

    # cmd
    set map2(url) "string file://localhost/$fn"
    set map2(name) "string $fnb"
    set params [SAMPSendMType image.load.fits $id [array get map2]]
    set rr {}
    if {$id != {}} {
	SAMPSend samp.hub.notify $params rr
    } else {
	SAMPSend samp.hub.notifyAll $params rr
    }
}

proc SAMPSendTableLoadFits {id} {
    global current
    global samp

    if {$samp(debug)} {
	puts stderr "SAMPSendTableLoadFits"
    }

    # connected?
    if {![info exists samp]} {
	Error "SAMP: [msgcat::mc {not connected}]"
	return
    }

    # got something to send?
    if {![$current(frame) has fits] && [$current(frame) has fits bin]} {
	return
    }

    # save current frame
    set fn [tmpnam {.fits}]
    lappend samp(tmp,files) $fn
    catch {$current(frame) save fits table file "\{$fn\}"}

    # name to use
    set fnb [$current(frame) get fits file name root base]
    if {[regexp {(.*)\[.*\]} $fnb aa bb]} {
	set fnb $bb
    }

    # cmd
    set map2(url) "string file://localhost/$fn"
    set map2(name) "string $fnb"
    set params [SAMPSendMType table.load.fits $id [array get map2]]
    set rr {}
    if {$id != {}} {
	SAMPSend samp.hub.notify $params rr
    } else {
	SAMPSend samp.hub.notifyAll $params rr
    }
}

proc SAMPSendTableLoadVotable {id varname} {
    upvar #0 $varname var
    global $varname

    global samp

    if {$samp(debug)} {
	puts stderr "SAMPSendTableLoadVotable $id $varname"
    }

    # connected?
    if {![info exists samp]} {
	Error "SAMP: [msgcat::mc {not connected}]"
	return
    }

    # remember
    set samp(icat,$varname$samp(port)) $varname
    set samp(ocat,$varname) $varname$samp(port)

    # save votable
    set fn [tmpnam {.xml}]
    lappend samp(tmp,files) $fn
    TBLSaveFn $varname $fn VOTWrite

    # cmd
    set map2(url) "string file://localhost/$fn"
    set map2(table-id) "string $varname$samp(port)"
    set map2(name) "string $var(title)"
    set params [SAMPSendMType table.load.votable $id [array get map2]]
    set rr {}
    if {$id != {}} {
	SAMPSend samp.hub.notify $params rr
    } else {
	SAMPSend samp.hub.notifyAll $params rr
    }
}

proc SAMPSendTableRowListCmd {varname rowlist} {
    global samp

    # connected?
    if {![info exists samp]} {
	return
    }

    if {[SAMPGetAppsVOTable] == {}} {
	return
    }

    # are we good?
    if {![info exists samp(ocat,$varname)]} {
	return
    }

    switch -- [llength $rowlist] {
	0 {}
	1 {SAMPSendTableHighlightRow {} $varname $rowlist}
	default {SAMPSendTableSelectRowList {} $varname $rowlist}
    }
}

proc SAMPSendTableHighlightRow {id varname row} {
    # row starts at 1
    upvar #0 $varname var
    global $varname

    global samp

    if {$samp(highlight)} {
	return
    }

    if {$samp(debug)} {
	puts stderr "SAMPSendTableHighlightRow $samp(ocat,$varname) $row"
    }

    # cmd
    set map2(table-id) "string $samp(ocat,$varname)"
    set map2(row) "string [expr $row-1]"
    set params [SAMPSendMType table.highlight.row $id [array get map2]]
    set rr {}
    if {$id != {}} {
	SAMPSend samp.hub.notify $params rr
    } else {
	SAMPSend samp.hub.notifyAll $params rr
    }
}

proc SAMPSendTableSelectRowList {id varname rows} {
    # rows start at 1
    upvar #0 $varname var
    global $varname

    global samp

    if {$samp(rowList)} {
	return
    }

    if {$samp(debug)} {
	puts stderr "SAMPSendTableSelectRowList $samp(ocat,$varname) $rows"
    }

    # cmd
    set ss {}
    foreach rr $rows {
	lappend ss "string [expr $rr-1]"
    }
    set map2(row-list) [list array $ss]
    set map2(table-id) "string $samp(ocat,$varname)"
    set params [SAMPSendMType table.select.rowList $id [array get map2]]
    set rr {}
    if {$id != {}} {
	SAMPSend samp.hub.notify $params rr
    } else {
	SAMPSend samp.hub.notifyAll $params rr
    }
}

proc SAMPSendCoordPointAtSkyCmd {which} {
    global samp

    # connected?
    if {![info exists samp]} {
	return
    }

    if {[SAMPGetAppsImage] == {} || [SAMPGetAppsTable] == {}} {
	return
    }

    if {[$which has wcs celestial wcs]} {
	set coord [$which get coordinates [$which get cursor canvas] wcs fk5 degrees]
	if {$coord != {}} {
	    SAMPSendCoordPointAtSky {} "$coord"
	}
    }
}

proc SAMPSendCoordPointAtSky {id coord} {
    global samp

    if {$samp(pointAt)} {
	return
    }

    if {$samp(debug)} {
	puts stderr "SAMPSendCoordPointAtSky $id $coord"
    }

    # cmd
    set map2(ra) "string [lindex $coord 0]"
    set map2(dec) "string [lindex $coord 1]"
    set params [SAMPSendMType coord.pointAt.sky $id [array get map2]]
    set rr {}
    if {$id != {}} {
	SAMPSend samp.hub.notify $params rr
    } else {
	SAMPSend samp.hub.notifyAll $params rr
    }
}

proc SAMPRcvdDS9SetReply {msgid} {
    global ds9
    global samp
    global errorInfo

    if {$samp(debug)} {
	puts stderr "SAMPRcvdDS9SetReply: $msgid"
    }

    if {$errorInfo != {} || $ds9(msg) != {}} {
	if {$ds9(msg) != {}} {
	    switch $ds9(msg,level) {
		info -
		warning {SAMPReply $msgid OK "$ds9(msg)"}
		error -
		fatal {SAMPReply $msgid ERROR {} {} "$ds9(msg)"}
	    }
	} else {
	    SAMPReply $msgid ERROR {} {} [SAMPErrorInfo]
	}
    } else {
	SAMPReply $msgid OK
    }
    InitError tcl
}

proc SAMPRcvdDS9GetReply {msgid msg {fn {}}} {
    global ds9
    global samp
    global errorInfo

    if {$samp(debug)} {
	puts stderr "SAMPRcvdDS9GetReply: $msgid $msg $fn"
    }

    if {$errorInfo != {} || $ds9(msg) != {}} {
	if {$ds9(msg) != {}} {
	    switch $ds9(msg,level) {
		info -
		warning {SAMPReply $msgid OK "$ds9(msg)"}
		error -
		fatal {SAMPReply $msgid ERROR {} {} "$ds9(msg)"}
	    }
	} else {
	    SAMPReply $msgid ERROR {} {} [SAMPErrorInfo]
	}
    } else {
	# be sure to white space any newlines, backslashes, and trim
	set value [string trim [string map {\n { } \\ {}} $msg]]

	# create url
	set url {}
	if {$fn != {}} {
	    set url "file://localhost/$fn"
	    lappend samp(tmp,files) $fn
	}

	SAMPReply $msgid OK $value $url
    }
    InitError tcl
}

proc image.load.fits {msgid args} {
    global current
    global samp

    if {![info exists samp]} {
	return
    }

    if {$samp(debug)} {
	puts stderr "SAMPRcvdImageLoadFits: $args"
    }

    set url {}
    set imageid {}
    set name {}

    foreach {key val} [join $args] {
	switch -- $key {
	    url {set url $val}
	    image-id {set imageid $val}
	    name {set name $val}
	}
    }

    if {$url != {}} {
	LoadURLFits $url {} {} 1
    }

    if {$msgid != {}} {
	SAMPReply $msgid OK
    }
}

proc table.load.fits {msgid args} {
    global current
    global samp

    if {![info exists samp]} {
	return
    }

    if {$samp(debug)} {
	puts stderr "table.load.fits $args"
    }

    set url {}
    set imageid {}
    set name {}

    foreach {key val} [join $args] {
	switch -- $key {
	    url {set url $val}
	    image-id {set imageid $val}
	    name {set name $val}
	}
    }

    if {$url != {}} {
	LoadURLFits $url {} {} 1
    }

    if {$msgid != {}} {
	SAMPReply $msgid OK
    }
}

proc table.load.votable {msgid args} {
    global samp

    if {![info exists samp]} {
	return
    }

    if {$samp(debug)} {
	puts stderr "table.load.votable $args"
    }

    set url {}
    set tabid {}
    set name {}

    foreach {key val} [join $args] {
	switch -- $key {
	    url {set url $val}
	    table-id {set tabid $val}
	    name {set name $val}
	}
    }

    global icat
    if {$url != {}} {
	CATVOTURL $url $name $tabid
	if {$tabid != {}} {
	    set catid [lindex $icat(cats) end]
	    set samp(icat,$tabid) $catid
	    set samp(ocat,$catid) $tabid
	}
    }

    if {$msgid != {}} {
	SAMPReply $msgid OK
    }
}

proc table.highlight.row {msgid args} {
    global samp

    if {![info exists samp]} {
	return
    }

    if {$samp(debug)} {
	puts stderr "table.highlight.row $args"
    }

    set url {}
    set tabid {}
    set row {}

    foreach {key val} [join $args] {
	switch -- $key {
	    url {set url $val}
	    table-id {set tabid $val}
	    row {set row $val}
	}
    }

    if {$tabid != {} && $row != {}} {
	if {[info exists samp(icat,$tabid)]} {
	    set samp(highlight) 1
	    CATSelectRows $samp(icat,$tabid) samp [expr $row+1] 1
	    set samp(highlight) 0
	}
    }

    if {$msgid != {}} {
	SAMPReply $msgid OK
    }
}

proc table.select.rowList {msgid args} {
    global samp

    if {![info exists samp]} {
	return
    }

    if {$samp(debug)} {
	puts stderr "table.select.rowList $args"
    }

    set url {}
    set tabid {}
    set rowlist {}

    foreach {key val} [join $args] {
	switch -- $key {
	    url {set url $val}
	    table-id {set tabid $val}
	    row-list {
		foreach rr $val {
		    lappend rowlist [expr $rr+1]
		}
	    }
	}
    }

    if {$tabid != {} && [llength $rowlist] != 0} {
	if {[info exists samp(icat,$tabid)]} {
	    set samp(rowList) 1
	    CATSelectRows $samp(icat,$tabid) samp $rowlist 1
	    set samp(rowList) 0
	}
    }

    if {$msgid != {}} {
	SAMPReply $msgid OK
    }
}

proc coord.pointAt.sky {msgid args} {
    global samp

    if {![info exists samp]} {
	return
    }

    if {$samp(debug)} {
	puts stderr "coord.pointAt.sky $args"
    }

    set ra {}
    set dec {}

    foreach {key val} [join $args] {
	switch -- $key {
	    ra {set ra $val}
	    dec {set dec $val}
	}
    }

    global current
    if {$ra != {} && $dec != {} && [$current(frame) has wcs celestial wcs]} {
	# turn off auto send pointAt
	set samp(pointAt) 1
	PanTo $ra $dec wcs fk5
	set samp(pointAt) 0
    }

    if {$msgid != {}} {
	SAMPReply $msgid OK
    }
}

proc client.env.get {msgid args} {
    global samp

    if {![info exists samp]} {
	return
    }

    if {$samp(debug)} {
	puts stderr "client.env.get $msgid $args\n"
    }

    set name {}

    foreach {key val} [join $args] {
	switch -- $key {
	    name {set name $val}
	}
    }

    global env
    if {[catch {set rr $env($name)}]} {
	SAMPReply $msgid ERROR {} {} {not found}
    } else {
	SAMPReply $msgid OK $rr
    }
}

proc ds9.set {msgid args} {
    global current
    global samp

    if {![info exists samp]} {
	return
    }

    if {$samp(debug)} {
	puts stderr "ds9.set $args"
    }

    set url {}
    set cmd {}

    foreach {key val} [join $args] {
	switch -- $key {
	    url {set url $val}
	    cmd {set cmd $val}
	}
    }

    set fn {}

    if {$url != {}} {
	ParseURL $url rr
	switch -- $rr(scheme) {
	    ftp {
		set fn [tmpnam {.ftp}]
		lappend samp(tmp,files) $fn
		GetFileFTP $rr(authority) $rr(path) $fn
	    }
	    file {set fn $rr(path)}
	    http -
	    https -
	    default {
		set fn [tmpnam {.http}]
		lappend samp(tmp,files) $fn
		GetFileHTTP $url $fn
	    }
	}
    }

    InitError samp
    CommSet $fn $cmd 1
    if {$msgid != {}} {
	SAMPRcvdDS9SetReply $msgid
    }
}

proc ds9.get {msgid args} {
    global current
    global samp

    if {![info exists samp]} {
	return
    }

    if {$samp(debug)} {
	puts stderr "ds9.get $args"
    }

    set url {}
    set cmd {}

    foreach {key val} [join $args] {
	switch -- $key {
	    url {set url $val}
	    cmd {set cmd $val}
	}
    }

    InitError samp
    set fn [CommGet SAMPRcvdDS9GetReply $msgid $cmd [tmpnam {}]]

    # check for error (in case SAMPRcvdDS9GetReply did not get run)
    global ds9
    global errorInfo
    if {$errorInfo != {} || $ds9(msg) != {}} {
	if {$ds9(msg) != {}} {
	    SAMPReply $msgid ERROR {} {} "$ds9(msg)"
	} else {
	    SAMPReply $msgid ERROR {} {} [SAMPErrorInfo]
	}
	InitError tcl
    }
}

proc SAMPErrorInfo {} {
    global errorInfo
    
    set rr [lindex [split $errorInfo "\n"] 0]
    return [string trim [string map {\" {} \\ {}} $rr]]
}

proc SAMPUpdateMenus {} {
    UpdateFileMenuSAMP
    UpdateCATDialogSAMP
}

# Cmds

proc ProcessSAMPFirstCmd {varname iname} {
    upvar $varname var
    upvar $iname i

    sampfirst::YY_FLUSH_BUFFER
    sampfirst::yy_scan_string [lrange $var $i end]
    sampfirst::yyparse
    incr i [expr $sampfirst::yycnt-1]
}

proc ProcessSAMPCmd {varname iname} {
    upvar $varname var
    upvar $iname i

    # we need to be realized
    ProcessRealizeDS9

    samp::YY_FLUSH_BUFFER
    samp::yy_scan_string [lrange $var $i end]
    samp::yyparse
    incr i [expr $samp::yycnt-1]
}

proc ProcessSendSAMPCmd {proc id param {sock {}} {fn {}}} {
    global samp

    if {[info exists samp]} {
	$proc $id "yes\n"
    } else {
	$proc $id "no\n"
    }
}

proc SAMPCmdSendImage {name} {
    global samp

    if {![info exists samp]} {
	Error "SAMP: [msgcat::mc {not connected}]"
	return
    }

    foreach arg [SAMPGetAppsImage] {
	foreach {key val} $arg {
	    if {[string tolower $val] == $name} {
		SAMPSendImageLoadFits $key
		break
	    }
	}
    }
}

proc SAMPCmdSendTable {name} {
    global samp

    if {![info exists samp]} {
	Error "SAMP: [msgcat::mc {not connected}]"
	return
    }

    foreach arg [SAMPGetAppsTable] {
	foreach {key val} $arg {
	    if {[string tolower $val] == $name} {
		SAMPSendTableLoadFits $key
		break
	    }
	}
    }
}    
