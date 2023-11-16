#  Copyright (C) 1999-2023
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc SAMPConnect {verbose} {
    global samp

    # connected?
    if {[info exists samp]} {
	if {$verbose} {
	    Error "SAMP: [msgcat::mc {already connected}]"
	}
	return
    }

    # reset samp array
    catch {unset samp}

    set samp(clients) {}
    set samp(tmp,files) {}
    set samp(msgtag) {}
    set samp(timeout) 30

    # can we find a hub?
    if {![SAMPParseHub]} {
 	if {$verbose} {
	    Error "SAMP: [msgcat::mc {unable to locate HUB}]"
	}
	catch {unset samp}
	# Error
	return
    }

    # samp initalization started
    set samp(init) 0

    # register
    SAMPConnectRegister

    # declare metadata
    SAMPConnectMetadata
    
    # who are we
    set samp(sock) [xmlrpcServe 0]
    set samp(port) [lindex [fconfigure $samp(sock) -sockname] 2]
    set samp(home) "[info hostname]:$samp(port)"

    # callback
    SAMPConnectCallback

    # declare subscriptions
    SAMPConnectSubscriptions

    # get current client info
    set clients [SAMPConnectGetClients]
    foreach cc $clients {
	SAMPConnectGetSubscriptions $cc
	SAMPConnectGetMetadata $cc
    }

    # samp initalization started
    set samp(init) 1

    UpdateFileMenuSAMP
    UpdateCATDialogSAMP
}

proc SAMPConnectRegister {} {
    global samp
    
    set params [list [list param [list value [list string $samp(secret)]]]]
    if {![SAMPSend samp.hub.register $params rr]} {
	catch {unset samp}
	# Error
	return
    }

    # first param
    set rr [lindex $rr 0]
    set rr [lindex $rr 1]

    rpcStruct2List $rr ll
    foreach {key val} [lindex $ll 0] {
	switch -- $key {
	    samp.hub-id {set samp(hub) $val}
	    samp.self-id {set samp(self) $val}
	    samp.private-key {set samp(private) $val}
	}
    }
}

proc SAMPConnectMetadata {} {
    global samp
    global ds9

    set map(samp.name) {string SAOImageDS9}
    set map(samp.description.text) {string "SAOImageDS9 is an astronomical visualization application"}
    set map(samp.icon.url) {string http://ds9.si.edu/sun.png}
    set map(samp.documentation.url) {string http://ds9.si.edu/doc/ref/index.html}

    set map(home.page) {string http://ds9.si.edu/}
    set map(author.name) {string "William Joye"}
    set map(author.email) {string ds9help@cfa.harvard.edu}
    set map(author.affiliation) {string "Smithsonian Astrophysical Observatory"}
    set map(ds9.version) "string [lindex $ds9(version) 0]"

    set param1 [list param [list value [list string $samp(private)]]]
    set param2 [list param [list value [list struct [list2rpcMember [array get map]]]]]
    set params [list $param1 $param2]
    
    if {![SAMPSend samp.hub.declareMetadata $params rr]} {
	catch {unset samp}
	# Error
	return
    }
}

proc SAMPConnectCallback {} {
    global samp
    
    set param1 [list param [list value [list string $samp(private)]]]
    set param2 [list param [list value [list string "http://$samp(home)"]]]
    set params [list $param1 $param2]

    if {![SAMPSend samp.hub.setXmlrpcCallback $params rr]} {
	catch {unset samp}
	# Error
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

    set map(ds9.get) {struct {}}
    set map(ds9.set) {struct {}}

    #    set map(samp.app.status) {struct {}}
    #    set map(samp.msg.progress) {struct {}}

    set param1 [list param [list value [list string $samp(private)]]]
    set param2 [list param [list value [list struct [list2rpcMember [array get map]]]]]
    set params [list $param1 $param2]

    if {![SAMPSend samp.hub.declareSubscriptions $params rr]} {
	catch {unset samp}
	# Error
	return
    }
}

proc SAMPConnectGetClients {} {
    global samp
    
    set params [list [list param [list value [list string $samp(private)]]]]
    if {![SAMPSend samp.hub.getRegisteredClients $params rr]} {
	catch {unset samp}
	# Error
	return
    }

    # first param
    set rr [lindex $rr 0]
    set rr [lindex $rr 1]

    rpcArray2List $rr ll
    return $ll
}

proc SAMPConnectGetSubscriptions {cc} {
    global samp

    set param1 [list param [list value [list string $samp(private)]]]
    set param2 [list param [list value [list string $cc]]]
    set params [list $param1 $param2]
    if {![SAMPSend samp.hub.getSubscriptions $params rr]} {
	catch {unset samp}
	# Error
	return
    }
    
    # first param
    set rr [lindex $rr 0]
    set rr [lindex $rr 1]

    rpcStruct2List $rr ll 
    set samp($cc,subscriptions) [lindex $ll 0]
}

proc SAMPConnectGetMetadata {cc} {
    global samp

    set param1 [list param [list value [list string $samp(private)]]]
    set param2 [list param [list value [list string $cc]]]
    set params [list $param1 $param2]
    if {![SAMPSend samp.hub.getMetadata $params rr]} {
	catch {unset samp}
	# Error
	return
    }
    
    # first param
    set rr [lindex $rr 0]
    set rr [lindex $rr 1]

    rpcStruct2List $rr ll
    foreach {key val} [lindex $ll 0] {
	switch -- $key {
	    samp.name {set samp($cc,name) $val}
	}
    }
}

proc SAMPDisconnect {verbose} {
    global samp

    # connected?
    if {![info exists samp]} {
	if {$verbose} {
	    Error "SAMP: [msgcat::mc {not connected}]"
	}
	return
    }

    # disconnect
    set params [list [list param [list value [list string $samp(private)]]]]
    if {![SAMPSend samp.hub.unregister $params rr]} {
	catch {unset samp}
	# Error
	return
    }
    SAMPShutdown

    UpdateFileMenuSAMP
    UpdateCATDialogSAMP
}

proc SAMPSendMType {mtype mm id} {
    global samp
    
    set param1 [list param [list value [list string $samp(private)]]]

    if {$id != {}} {
	set param2 [list param [list value [list string $id]]]
    } else {
	set param2 {}
    }

    set m2 [list2rpcMember $mm]

    set map(samp.mtype) "string $mtype"
    set map(samp.params) [list struct $m2]
    set m1 [list2rpcMember [array get map]]

    set param3 [list param [list value [list struct $m1]]]

    return [list $param1 $param2 $param3]
}

proc SAMPSendImageLoadFits {id} {
    global current
    global samp

    global debug
    if {$debug(tcl,samp)} {
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
    set params [SAMPSendMType image.load.fits [array get map2] $id]
    if {$id != {}} {
	SAMPSend samp.hub.notify $params rr
    } else {
	SAMPSend samp.hub.notifyAll $params rr
    }
}

proc SAMPSendTableLoadFits {id} {
    global current
    global samp

    global debug
    if {$debug(tcl,samp)} {
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
    set params [SAMPSendMType table.load.fits [array get map2] $id]
    if {$id != {}} {
	SAMPSend samp.hub.notify $params rr
    } else {
	SAMPSend samp.hub.notifyAll $params rr
    }
}

proc SAMPSendTableLoadVotable {id varname} {
    global samp

    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,samp)} {
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
    set params [SAMPSendMType table.load.votable [array get map2] $id]
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
    global samp

    # row starts at 1
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,samp)} {
	puts stderr "SAMPSendTableHighlightRow $samp(ocat,$varname) $row"
    }

    # cmd
    set map2(table-id) "string $samp(ocat,$varname)"
    set map2(row) "string [expr $row-1]"
    set params [SAMPSendMType table.highlight.row [array get map2] $id]
    if {$id != {}} {
	SAMPSend samp.hub.notify $params rr
    } else {
	SAMPSend samp.hub.notifyAll $params rr
    }
}

proc SAMPSendTableSelectRowList {id varname rows} {
    global samp

    # rows start at 1
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,samp)} {
	puts stderr "SAMPSendTableSelectRowList $samp(ocat,$varname) $rows"
    }

    # cmd
    set ss {}
    foreach rr $rows {
	lappend ss "string [expr $rr-1]"
    }
    set map2(row-list) [list array $ss]
    set map2(table-id) "string $samp(ocat,$varname)"
    set params [SAMPSendMType table.select.rowList [array get map2] $id]
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

    global debug
    if {$debug(tcl,samp)} {
	puts stderr "SAMPSendCoordPointAtSky $id $coord"
    }

    # cmd
    set map2(ra) "string [lindex $coord 0]"
    set map2(dec) "string [lindex $coord 1]"
    set params [SAMPSendMType coord.pointAt.sky [array get map2] $id]
    if {$id != {}} {
	SAMPSend samp.hub.notify $params rr
    } else {
	SAMPSend samp.hub.notifyAll $params rr
    }
}

proc SAMPShutdown {} {
    global samp

    # delete any files
    SAMPDelTmpFiles

    # close the server socket if still up
    catch {close $samp(sock)}

    # unset samp array
    catch {unset samp}
}

proc SAMPGetAppsImage {} {
    global samp

    set ll {}
    foreach cc [SAMPGetAppsSubscriptions image.load.fits] {
	lappend ll [list $cc $samp($cc,name)]
    }
    return $ll
}

proc SAMPGetAppsTable {} {
    global samp

    set ll {}
    foreach cc [SAMPGetAppsSubscriptions table.load.fits] {
	lappend ll [list $cc $samp($cc,name)]
    }
    return $ll
}

proc SAMPGetAppsVOTable {} {
    global samp

    set ll {}
    foreach cc [SAMPGetAppsSubscriptions table.load.votable] {
	lappend ll [list $cc $samp($cc,name)]
    }
    return $ll
}

proc SAMPGetAppsSubscriptions {mtype} {
    global samp

    set ll {}
    foreach cc $samp(clients) {
	foreach {key val} $samp($cc,subscriptions) {
	    if {$key == $mtype} {
		lappend ll $cc
	    }
	}
    }
    return $ll
}

proc SAMPSend {method params resultVar} {
    upvar $resultVar result
    global samp

    global debug
    if {$debug(tcl,samp)} {
	puts stderr "SAMPSend: $samp(url) $samp(method) $method $params"
    }

    if {[catch {set result [xmlrpcCall $samp(url) $samp(method) $method $params]}]} {
	if {$debug(tcl,samp)} {
	    puts stderr "SAMPSend: bad xmlrpcCAll $result"
	}
	# Error
	return
    }

    if {$debug(tcl,samp)} {
	puts stderr "SAMPSend Result: $result"
    }

    switch $method {
	samp.hub.notify -
	samp.hub.notifyAll {}

	samp.hub.call -
	samp.hub.callAll {
	    # and now we wait
	    # must be set before
	    vwait samp(msgtag)
	}

	samp.hub.callAndWait {
	    set status {}
	    set value {}
	    set error {}
	    foreach arg [lindex $result 1] {
		foreach {key val} $arg {
		    switch -- $key {
			samp.result {set value [lindex [lindex $val 0] 1]}
			samp.status {set status $val}
			samp.error  {set error [lindex [lindex $val 0] 1]}
		    }
		}
	    }
	    if {$debug(tcl,samp)} {
		puts stderr "SAMPSend: callAndWait: $status $value $error"
	    }
	}
    }

    return 1
}

proc SAMPReply {msgid status {result {}} {url {}} {error {}}} {
    global samp

    global debug
    if {$debug(tcl,samp)} {
	puts stderr "SAMPReply $msgid $status"
    }

    switch -- $status {
	OK {
	    if {$result != {}} {
		set map2(value) "string \"$result\""
	    }
	    if {$url != {}} {
		set map2(url) "string \"$url\""
	    }
	    set m2 [list2rpcMember [array get map2]]

	    set map(samp.status) {string samp.ok}
	    set map(samp.result) [list struct $m2]
	    set m1 [list2rpcMember [array get map]]

	    set param3 [list param [list value [list struct $m1]]]
	}
	WARNING {
	    set map3(samp.errortxt) "string $error"
	    set m3 [list2rpcMember [array get map3]]

	    if {$result != {}} {
		set map2(value) "string \"$result\""
	    }
	    if {$url != {}} {
		set map2(url) "string \"$url\""
	    }
	    set m2 [list2rpcMember $map2]

	    set map(samp.status) {string samp.warning}
	    set map(samp.result) [list struct $m2]
	    set map(samp.error)  [list struct $m3]
	    set m1 [list2rpcMember [array get map]]

	    set param3 [list param [list value [list struct $m1]]]
	}
	ERROR {
	    set map3(samp.errortxt) "string $error"
	    set m3 [list2rpcMember [array get map3]]

	    set map(samp.status) {string samp.error}
	    set map(samp.error) [list struct $m3]
	    set map(samp.errortxt) "string $error"
	    set m1 [list2rpcMember [array get map]]

	    set param3 [list param [list value [list struct $m1]]]
	}
    }
    set param1 [list param [list value [list string $samp(private)]]]
    set param2 [list param [list value [list string $msgid]]]

    set params [list $param1 $param2 $param3]
    SAMPSend samp.hub.reply $params rr
}

proc SAMPRcvdDS9SetReply {msgid} {
    global ds9
    global icursor

    global debug
    if {$debug(tcl,samp)} {
	puts stderr "SAMPRcvdDS9SetReply: $msgid"
    }

    global errorInfo
    if {$errorInfo != {} || $ds9(msg) != {}} {
	if {$ds9(msg) != {}} {
	    switch $ds9(msg,level) {
		info -
		warning {SAMPReply $msgid OK $ds9(msg)}
		error -
		fatal {SAMPReply $msgid ERROR {} {} $ds9(msg)}
	    }
	} else {
	    SAMPReply $msgid ERROR {} {} [lindex [split $errorInfo "\n"] 0]
	}
	InitError samp
    } else {
	SAMPReply $msgid OK
    }
}

proc SAMPRcvdDS9GetReply {msgid msg {fn {}}} {
    global ds9
    global samp
    global icursor

    global debug
    if {$debug(tcl,samp)} {
	puts stderr "SAMPRcvdDS9GetReply: $msgid $msg $fn"
    }

    global errorInfo
    if {$errorInfo != {} || $ds9(msg) != {}} {
	if {$ds9(msg) != {}} {
	    switch $ds9(msg,level) {
		info -
		warning {SAMPReply $msgid OK $ds9(msg)}
		error -
		fatal {SAMPReply $msgid ERROR {} {} $ds9(msg)}
	    }
	} else {
	    SAMPReply $msgid ERROR {} {} [lindex [split $errorInfo "\n"] 0]
	}
	InitError samp
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
}

# procs

proc SAMPrpc2List {rpc varname} {
    upvar $varname var

    # params
    set rpc [lindex $rpc 1]

    # each param
    foreach pp $rpc {
	rpcParams2List [lindex $pp 1] var
    }
}

proc samp.client.receiveNotification {rpc} {
    global samp
    
    global debug
    if {$debug(tcl,samp)} {
	puts stderr "samp.client.receiveNotification $rpc"
    }
    
    SAMPrpc2List $rpc args
    
    set secret [lindex $args 0]
    set id [lindex $args 1]
    set map [lindex $args 2]

    if {$secret != $samp(private)} {
	if {$debug(tcl,samp)} {
	    puts stderr "samp.client.receiveNotification bad secret"
	}
	# Error
	return {string ERROR}
    }

    set mtype {}
    set params {}
    foreach mm $map {
	foreach {key val} $mm {
	    switch -- $key {
		samp.mtype {set mtype $val}
		samp.params {set params $val}
	    }
	}
    }

    after 0 "$mtype {} $params"
    return {string OK}
}

proc samp.client.receiveCall {rpc} {
    global samp

    global debug
    if {$debug(tcl,samp)} {
	puts stderr "samp.client.receiveCall $rpc"
    }

    SAMPrpc2List $rpc args

    set secret [lindex $args 0]
    set id [lindex $args 1]
    set msgid [lindex $args 2]
    set map [lindex $args 3]

    if {$secret != $samp(private)} {
	if {$debug(tcl,samp)} {
	    puts stderr "samp.client.receiveCall bad secret"
	}
	# Error
	return {string ERROR}
    }

    set mtype {}
    set params {}
    foreach mm $map {
	foreach {key val} $mm {
	    switch -- $key {
		samp.mtype {set mtype $val}
		samp.params {set params $val}
	    }
	}
    }

    after 0 "$mtype \{$msgid\} $params"
    return {string OK}
}

proc samp.client.receiveResponse {rpc} {
    global samp

    global debug
    if {$debug(tcl,samp)} {
	puts stderr "samp.client.receiveResponse $rpc"
    }

    SAMPrpc2List $rpc args

    set secret [lindex $args 0]
    set id [lindex $args 1]
    set msgtag [lindex $args 2]
    set map [lindex $args 3]

    if {$secret != $samp(private)} {
	if {$debug(tcl,samp)} {
	    puts stderr "samp.client.receiveCall bad secret"
	}
	# Error
	return {string ERROR}
    }

    if {$msgtag != $samp(msgtag)} {
	Error "SAMP: samp.client.receiveResponse bad tag $msgtag"
    }
    set samp(msgtag) {}

    set status {}
    set value {}
    set error {}
    foreach arg $map {
	foreach {key val} $arg {
	    switch -- $key {
		samp.result {set value [lindex [lindex $val 0] 1]}
		samp.status {set status $val}
		samp.error  {set error [lindex [lindex $val 0] 1]}
	    }
	}
    }

    return {string OK}
}

proc samp.hub.event.shutdown {msgid args} {
    global debug
    if {$debug(tcl,samp)} {
	puts stderr "samp.hub.event.shutdown $args"
    }

    SAMPShutdown

    UpdateFileMenuSAMP
    UpdateCATDialogSAMP

    if {$msgid != {}} {
	SAMPReply $msgid OK
    }
}

proc samp.hub.event.register {msgid args} {
    global samp

    global debug
    if {$debug(tcl,samp)} {
	puts stderr "samp.hub.event.register $args"
    }

    foreach {key val} $args {
	switch -- $key {
	    id {
		lappend samp(clients) $val
		set samp($val,subscriptions) {}
		set samp($val,name) {}
	    }
	}
    }

    if {$msgid != {}} {
	SAMPReply $msgid OK
    }
}

proc samp.hub.event.unregister {msgid args} {
    global samp

    global debug
    if {$debug(tcl,samp)} {
	puts stderr "samp.hub.event.unregister $args"
    }

    foreach {key val} $args {
	switch -- $key {
	    id {
		set id [lsearch $samp(clients) $val]
		set samp(clients) [lreplace $samp(clients) $id $id]
		unset samp($val,subscriptions)
		unset samp($val,name)
	    }
	}
    }

    UpdateFileMenuSAMP
    UpdateCATDialogSAMP

    if {$msgid != {}} {
	SAMPReply $msgid OK
    }
}

proc samp.hub.event.metadata {msgid args} {
    global samp

    global debug
    if {$debug(tcl,samp)} {
	puts stderr "samp.hub.event.metadata $args"
    }

    set id {}
    set name {}
    foreach {key val} $args {
	switch -- $key {
	    id {set id $val}
	    metadata {
		foreach {key2 val2} $val {
		    if {$key2 == {samp.name}} {
			set name $val2
		    }
		}
	    }
	}
    }
    
    # should not happen
    if {$id == {}} {
	return
    }

    # just ignore if ourself
    if {$id == $samp(self)}  {
	return
    }

    set samp($id,name) $name

    UpdateFileMenuSAMP
    UpdateCATDialogSAMP

    if {$msgid != {}} {
	SAMPReply $msgid OK
    }
}

proc samp.hub.event.subscriptions {msgid args} {
    global samp

    global debug
    if {$debug(tcl,samp)} {
	puts stderr "samp.hub.event.subscriptions $args"
    }

    set id {}
    set subs {}
    foreach {key val} $args {
	switch -- $key {
	    id {set id $val}
	    subscriptions {lappend subs $val}
	}
    }
    
    # should not happen
    if {$id == {}} {
	return
    }

    # just ignore if ourself
    if {$id == $samp(self)}  {
	return
    }

    set samp($id,subscriptions) $subs

    UpdateFileMenuSAMP
    UpdateCATDialogSAMP

    if {$msgid != {}} {
	SAMPReply $msgid OK
    }
}

proc samp.hub.disconnect {msgid args} {
    global debug
    if {$debug(tcl,samp)} {
	puts stderr "samp.hub.disconnect $args"
    }

    set msg {}

    foreach {key val} $args {
	switch -- $key {
	    reason {set msg $val}
	}
    }

    SAMPShutdown
    UpdateFileMenu
    UpdateCATDialogSAMP
}

proc samp.app.ping {msgid args} {
    upvar $varname args

    global debug
    if {$debug(tcl,samp)} {
	puts stderr "samp.app.ping $args"
    }

    if {$msgid != {}} {
	SAMPReply $msgid OK
    }
}

proc image.load.fits {msgid args} {
    global current
    global samp

    global debug
    if {$debug(tcl,samp)} {
	puts stderr "SAMPRcvdImageLoadFits: $args"
    }

    set url {}
    set imageid {}
    set name {}

    foreach {key val} $args {
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

    global debug
    if {$debug(tcl,samp)} {
	puts stderr "table.load.fits $args"
    }

    set url {}
    set imageid {}
    set name {}

    foreach {key val} $args {
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

    global debug
    if {$debug(tcl,samp)} {
	puts stderr "table.load.votable $args"
    }

    set url {}
    set tabid {}
    set name {}

    foreach {key val} $args {
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

    global debug
    if {$debug(tcl,samp)} {
	puts stderr "table.highlight.row $args"
    }

    set url {}
    set tabid {}
    set row {}

    foreach {key val} $args {
	switch -- $key {
	    url {set url $val}
	    table-id {set tabid $val}
	    row {set row $val}
	}
    }

    if {$tabid != {} && $row != {}} {
	if {[info exists samp(icat,$tabid)]} {
	    CATSelectRows $samp(icat,$tabid) samp [expr $row+1] 1
	}
    }

    if {$msgid != {}} {
	SAMPReply $msgid OK
    }
}

proc table.select.rowList {msgid args} {
    global samp

    global debug
    if {$debug(tcl,samp)} {
	puts stderr "table.select.rowList $args"
    }

    set url {}
    set tabid {}
    set rowlist {}

    foreach {key val} $args {
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
	    CATSelectRows $samp(icat,$tabid) samp $rowlist 1
	}
    }

    if {$msgid != {}} {
	SAMPReply $msgid OK
    }
}

proc coord.pointAt.sky {msgid args} {
    global samp

    global debug
    if {$debug(tcl,samp)} {
	puts stderr "coord.pointAt.sky $args"
    }

    set ra {}
    set dec {}

    foreach {key val} $args {
	switch -- $key {
	    ra {set ra $val}
	    dec {set dec $val}
	}
    }

    global current
    if {$ra != {} && $dec != {} && [$current(frame) has wcs celestial wcs]} {
	PanTo $ra $dec wcs fk5
    }

    if {$msgid != {}} {
	SAMPReply $msgid OK
    }
}

proc client.env.get {msgid args} {
    global samp

    global debug
    if {$debug(tcl,samp)} {
	puts stderr "client.env.get $msgid $args"
    }

    set name {}

    foreach {key val} $args {
	switch -- $key {
	    name {set name $val}
	}
    }

    global env
    if {[catch {set rr $env($name)}]} {
	SAMPReply $msgid ERROR {} {} [lindex [split $errorInfo "\n"] 0]
	global errorInfo
	set errorInfo {}
    } else {
	SAMPReply $msgid OK $rr
    }
}

proc ds9.set {msgid args} {
    global current
    global samp

    global debug
    if {$debug(tcl,samp)} {
	puts stderr "ds9.set $args"
    }

    set url {}
    set cmd {}

    foreach {key val} $args {
	switch -- $key {
	    url {set url $val}
	    cmd {set cmd $val}
	}
    }

    set fn {}

    InitError samp
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

    CommSet $fn $cmd 0

    if {$msgid != {}} {
	SAMPRcvdDS9SetReply $msgid
    }
}

proc ds9.get {msgid args} {
    global current
    global samp

    global debug
    if {$debug(tcl,samp)} {
	puts stderr "ds9.get $args"
    }

    set url {}
    set cmd {}

    foreach {key val} $args {
	switch -- $key {
	    url {set url $val}
	    cmd {set cmd $val}
	}
    }

    InitError samp
    set fn [CommGet SAMPRcvdDS9GetReply $msgid $cmd [tmpnam {}]]
    if {$fn != {}} {
	lappend samp(tmp,files) $fn
    }
}

# Support

proc SAMPParseHub {} {
    global samp
    global env

    set fn {}

    if {[info exists env(SAMP_HUB)]} {
	if {$env(SAMP_HUB) != {}} {
	    set exp {std-lockurl:(.*)}
	    if {[regexp $exp $env(SAMP_HUB) dummy url]} {

		ParseURL $url rr
		switch -- $rr(scheme) {
		    ftp {
			set fn [tmpnam {.samp}]
			lappend samp(tmp,files) $fn
			GetFileFTP $rr(authority) $rr(path) $fn
		    }
		    file {set fn $rr(path)}
		    http -
		    https -
		    default {
			set fn [tmpnam {.samp}]
			lappend samp(tmp,files) $fn
			GetFileHTTP $url $fn
		    }
		}
	    }
	}
    }

    if {$fn == {}} {
	set fn [file join [GetEnvHome] {.samp}]
    }

    # no hub to be found
    if {![file exist $fn]} {
	return 0
    }
    if {[catch {set fp [open $fn r]}]} {
	return 0
    }

    set samp(secret) {}
    set samp(url) {}
    set samp(method) {}
    set samp(fn) $fn

    while {1} {
	if {[gets $fp line] == -1} {
	    break
	}

	# skip any comments
	if {[string range $line 0 0] == "#"} {
	    continue;
	}

	if {[regexp -nocase {samp.secret=(.*)} $line foo ss]} {
	    set samp(secret) $ss
	}
	if {[regexp -nocase {samp.hub.xmlrpc.url=(.*)} $line foo url]} {
	    if {[ParseURL $url r]} {
		set samp(url) $r(scheme)://$r(authority)
		set samp(method) [string range $r(path) 1 end]
	    }
	}
    }
    catch {close $fp}

    if {$samp(secret) == {} || $samp(url) == {}} {
	SAMPDelTmpFiles
	catch {unset samp}
	return 0
    }

    global debug
    if {$debug(tcl,samp)} {
	puts stderr "SAMPParseHub: $samp(secret) $samp(url) $samp(method)"
    }
    return 1
}

proc SAMPDelTmpFiles {} {
    global samp

    # delete any tmp files
    if {[info exists samp]} {
	if {[info exists samp(tmp,files)]} {
	    foreach fn $samp(tmp,files) {
		catch {file delete -force "$fn"}
	    }
	}
    }
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
