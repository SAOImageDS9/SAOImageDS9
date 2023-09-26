#  Copyright (C) 1999-2023
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

# Cmds

proc SAMPConnect {verbose} {
    global ds9
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
	return
    }

    # samp initalization started
    set samp(init) 0

    # register
    set params [list "string $samp(secret)"]
    set rr {}
    if {![SAMPSend {samp.hub.register} $params rr]} {
	catch {unset samp}
	return
    }
    set rr [lindex $rr 1]
    foreach ff $rr {
	foreach {key val} $ff {
	    switch -- $key {
		samp.hub-id {set samp(hub) $val}
		samp.self-id {set samp(self) $val}
		samp.private-key {set samp(private) $val}
	    }
	}
    }

    # declare metadata
    catch {unset sampmap}
    set sampmap(samp.name) {string "SAOImageDS9"}
    set sampmap(samp.description.text) {string "SAOImageDS9 is an astronomical visualization application"}
    set sampmap(samp.icon.url) {string "http://ds9.si.edu/sun.png"}
    set sampmap(samp.documentation.url) {string "http://ds9.si.edu/doc/ref/index.html"}

    set sampmap(home.page) {string "http://ds9.si.edu/"}
    set sampmap(author.name) {string "William Joye"}
    set sampmap(author.email) {string "ds9help@cfa.harvard.edu"}
    set sampmap(author.affiliation) {string "Smithsonian Astrophysical Observatory"}
    set sampmap(ds9.version) "string [lindex $ds9(version) 0]"

    set param1 [list "string $samp(private)"]
    set param2 [list "struct sampmap"]
    set params "$param1 $param2"
    set rr {}
    if {![SAMPSend {samp.hub.declareMetadata} $params rr]} {
	catch {unset samp}
	return
    }

    # who are we
    set samp(sock) [xmlrpc::serve 0]
    set samp(port) [lindex [fconfigure $samp(sock) -sockname] 2]
    set samp(home) "[info hostname]:$samp(port)"

    # callback
    set param1 [list "string $samp(private)"]
    set param2 [list "string http://$samp(home)"]
    set params "$param1 $param2"
    set rr {}
    if {![SAMPSend {samp.hub.setXmlrpcCallback} $params rr]} {
	catch {unset samp}
	return
    }

    # declare subscriptions
    catch {unset sampmap}
    set sampmap(samp.app.ping) {struct mapPing}
#    set sampmap(samp.app.status) {struct mapStatus}
#    set sampmap(samp.msg.progress) {struct mapProgress}

    set sampmap(samp.hub.event.shutdown) {struct mapShutdown}
    set sampmap(samp.hub.event.register) {struct mapRegister}
    set sampmap(samp.hub.event.unregister) {struct mapUnregister}
    set sampmap(samp.hub.event.metadata) {struct mapMetadata}
    set sampmap(samp.hub.event.subscriptions) {struct mapSubscriptions}
    set sampmap(samp.hub.disconnect) {struct mapDisconnect}

    set sampmap(image.load.fits) {struct mapImageLoadFits}
    set sampmap(table.load.fits) {struct mapTableLoadFits}
    set sampmap(table.load.votable) {struct mapTableLoadVotable}
    set sampmap(table.highlight.row) {struct mapTableHighlightRow}
    set sampmap(table.select.rowList) {struct mapTableSelectRowList}
    set sampmap(coord.pointAt.sky) {struct mapCoordPointAtSky}
    set sampmap(client.env.get) {struct mapClientEnvGet}

    set sampmap(ds9.get) {struct mapDS9Get}
    set sampmap(ds9.set) {struct mapDS9Set}

    set param1 [list "string $samp(private)"]
    set param2 [list "struct sampmap"]
    set params "$param1 $param2" 
    set rr {}
    if {![SAMPSend {samp.hub.declareSubscriptions} $params rr]} {
	catch {unset samp}
	return
    }

    # get current client info
    set params [list "string $samp(private)"]
    set rr {}
    if {![SAMPSend {samp.hub.getRegisteredClients} $params rr]} {
	catch {unset samp}
	return
    }
    set samp(clients) [lindex $rr 1]

    foreach cc $samp(clients) {
	set param1 [list "string $samp(private)"]
	set param2 [list "string $cc"]
	set params "$param1 $param2" 
	set rr {}
	if {![SAMPSend {samp.hub.getSubscriptions} $params rr]} {
	    catch {unset samp}
	    return
	}
	
	foreach arg [lindex $rr 1] {
	    foreach {key val} $arg {
		lappend samp($cc,subscriptions) $key
	    }
	}

	set param1 [list "string $samp(private)"]
	set param2 [list "string $cc"]
	set params "$param1 $param2" 
	set rr {}
	if {![SAMPSend {samp.hub.getMetadata} $params rr]} {
	    catch {unset samp}
	    return
	}

	foreach arg [lindex $rr 1] {
	    foreach {key val} $arg {
		switch -- $key {
		    samp.name {set samp($cc,name) $val}
		}
	    }
	}
    }

    # samp initalization started
    set samp(init) 1

    UpdateFileMenuSAMP
    UpdateCATDialogSAMP
}

proc SAMPDisconnect {verbose} {
    global ds9
    global samp

    # connected?
    if {![info exists samp]} {
	if {$verbose} {
	    Error "SAMP: [msgcat::mc {not connected}]"
	}
	return
    }

    # disconnect
    if {[info exists samp(private)]} {
	set params [list "string $samp(private)"]
	set rr {}
	if {![SAMPSend {samp.hub.unregister} $params rr]} {
	    catch {unset samp}
	    return
	}
	SAMPShutdown
    }

    UpdateFileMenuSAMP
    UpdateCATDialogSAMP
}

proc SAMPSendImageLoadFits {id} {
    global ds9
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
    set sampmap(samp.mtype) {string "image.load.fits"}
    set sampmap(samp.params) {struct sampmap2}
    set sampmap2(url) "string \"[XMLQuote file://localhost/$fn]\""
    set sampmap2(name) "string \"[XMLQuote $fnb]\""

    set param1 [list "string $samp(private)"]
    if {$id != {}} {
	set param2 [list "string $id"]
    } else {
	set param2 {}
    }
    set param3 [list "struct sampmap"]
    set params "$param1 $param2 $param3" 

    set rr {}
    if {$id != {}} {
	SAMPSend {samp.hub.notify} $params rr
    } else {
	SAMPSend {samp.hub.notifyAll} $params rr
    }
}

proc SAMPSendTableLoadFits {id} {
    global ds9
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
    set sampmap(samp.mtype) {string "table.load.fits"}
    set sampmap(samp.params) {struct sampmap2}
    set sampmap2(url) "string \"[XMLQuote file://localhost/$fn]\""
    set sampmap2(name) "string \"[XMLQuote $fnb]\""

    set param1 [list "string $samp(private)"]
    if {$id != {}} {
	set param2 [list "string $id"]
    } else {
	set param2 {}
    }
    set param3 [list "struct sampmap"]
    set params "$param1 $param2 $param3" 

    set rr {}
    if {$id != {}} {
	SAMPSend {samp.hub.notify} $params rr
    } else {
	SAMPSend {samp.hub.notifyAll} $params rr
    }
}

proc SAMPSendTableLoadVotable {id varname} {
    global ds9
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
    set sampmap(samp.mtype) {string "table.load.votable"}
    set sampmap(samp.params) {struct sampmap2}
    set sampmap2(url) "string \"[XMLQuote file://localhost/$fn]\""
    set sampmap2(table-id) "string [XMLQuote $varname$samp(port)]"
    set sampmap2(name) "string \"[XMLQuote $var(title)]\""

    set param1 [list "string $samp(private)"]
    if {$id != {}} {
	set param2 [list "string $id"]
    } else {
	set param2 {}
    }
    set param3 [list "struct sampmap"]
    set params "$param1 $param2 $param3" 

    set rr {}
    if {$id != {}} {
	SAMPSend {samp.hub.notify} $params rr
    } else {
	SAMPSend {samp.hub.notifyAll} $params rr
    }
}

proc SAMPSendTableRowListCmd {varname rowlist} {
    global ds9
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

    set sampmap(samp.mtype) {string "table.highlight.row"}
    set sampmap(samp.params) {struct sampmap2}
    set sampmap2(table-id) "string [XMLQuote $samp(ocat,$varname)]"
    set sampmap2(row) "string [expr $row-1]"

    set param1 [list "string $samp(private)"]
    if {$id != {}} {
	set param2 [list "string $id"]
    } else {
	set param2 {}
    }
    set param3 [list "struct sampmap"]
    set params "$param1 $param2 $param3" 

    set rr {}
    if {$id != {}} {
	SAMPSend {samp.hub.notify} $params rr
    } else {
	SAMPSend {samp.hub.notifyAll} $params rr
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

    set sampmap(samp.mtype) {string "table.select.rowList"}
    set sampmap(samp.params) {struct sampmap2}
    set sampmap2(table-id) "string [XMLQuote $samp(ocat,$varname)]"
    set ss {}
    foreach rr $rows {
	lappend ss "string [expr $rr-1]"
    }
    set sampmap2(row-list) [list array $ss]

    set param1 [list "string $samp(private)"]
    if {$id != {}} {
	set param2 [list "string $id"]
    } else {
	set param2 {}
    }
    set param3 [list "struct sampmap"]
    set params "$param1 $param2 $param3" 

    set rr {}
    if {$id != {}} {
	SAMPSend {samp.hub.notify} $params rr
    } else {
	SAMPSend {samp.hub.notifyAll} $params rr
    }
}

proc SAMPSendCoordPointAtSkyCmd {which} {
    global ds9
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

    set sampmap(samp.mtype) {string "coord.pointAt.sky"}
    set sampmap(samp.params) {struct sampmap2}
    set sampmap2(ra) "string [XMLQuote [lindex $coord 0]]"
    set sampmap2(dec) "string [XMLQuote [lindex $coord 1]]"

    set param1 [list "string $samp(private)"]
    if {$id != {}} {
	set param2 [list "string $id"]
    } else {
	set param2 {}
    }
    set param3 [list "struct sampmap"]
    set params "$param1 $param2 $param3" 

    set rr {}
    if {$id != {}} {
	SAMPSend {samp.hub.notify} $params rr
    } else {
	SAMPSend {samp.hub.notifyAll} $params rr
    }
}

# Support

proc SAMPShutdown {} {
    global ds9
    global samp

    # delete any files
    SAMPDelTmpFiles

    # close the server socket if still up
    catch {close $samp(sock)}

    # unset samp array
    catch {unset samp}
}

proc SAMPSend {method params resultVar {ntabs 5} {distance 4}} {
    upvar $resultVar result
    global samp

    global debug
    if {$debug(tcl,samp)} {
	puts stderr "SAMPSend: $samp(url) $samp(method) $method $params"
    }

    if {[catch {set result [xmlrpc::call $samp(url) $samp(method) $method $params $ntabs $distance]}]} {
	if {$debug(tcl,samp)} {
	    puts stderr "SAMP: [msgcat::mc {internal error}] $result"
	}
	return 0
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
	    set sampmap(samp.status) {string "samp.ok"}
	    set sampmap(samp.result) {struct sampmap2}
	    if {$result != {}} {
		set sampmap2(value) "string \"$result\""
	    }
	    if {$url != {}} {
		set sampmap2(url) "string \"[XMLQuote $url]\""
	    }
	}
	WARNING {
	    set sampmap(samp.status) {string "samp.warning"}
	    set sampmap(samp.result) {struct sampmap2}
	    set sampmap(samp.error)  {struct sampmap3}
	    if {$result != {}} {
		set sampmap2(value) "string \"$result\""
	    }
	    if {$url != {}} {
		set sampmap2(url) "string \"[XMLQuote $url]\""
	    }
	    set sampmap3(samp.errortxt) "string \"$error\""
	}
	ERROR {
	    set sampmap(samp.status) {string "samp.error"}
	    set sampmap(samp.error)  {struct sampmap3}
	    set sampmap3(samp.errortxt) "string \"$error\""
	}
    }
    set param1 [list "string $samp(private)"]
    set param2 [list "string $msgid"]
    set param3 [list "struct sampmap"]
    set params "$param1 $param2 $param3"

    set rr {}
    
    SAMPSend {samp.hub.reply} $params rr
}

proc SAMPValidMtype {mtype} {
    switch $mtype {
	samp.client.receiveNotification -
	samp.client.receiveCall -
	samp.client.receiveResponse -
	samp.hub.event.shutdown -
	samp.hub.event.register -
	samp.hub.event.unregister -
	samp.hub.event.metadata -
	samp.hub.event.subscriptions -
	samp.hub.disconnect -
	samp.app.ping -
	image.load.fits -
	table.load.fits -
	table.load.votable -
	table.highlight.row -
	table.select.rowList -
	coord.pointAt.sky -
	client.env.get -
	ds9.set -
	ds9.get {return 1}
	default {return 0}
    }
}

proc samp.client.receiveNotification {args} {
    global samp
    
    global debug
    if {$debug(tcl,samp)} {
	puts stderr "samp.client.receiveNotification $args"
    }
    
    set secret [lindex $args 0]
    set id [lindex $args 1]
    set map [lindex $args 2]

    if {$secret != $samp(private)} {
	Error "SAMP: [msgcat::mc {internal error}]"
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

    if {[SAMPValidMtype $mtype]} {
	$mtype params
    } else {
	Error "SAMP: [msgcat::mc {internal error}]"
	return {string ERROR}
    }

    return {string OK}
}

proc samp.client.receiveCall {args} {
    global ds9
    global samp
    
    global debug
    if {$debug(tcl,samp)} {
	puts stderr "samp.client.receiveCall $args"
    }

    set secret [lindex $args 0]
    set id [lindex $args 1]
    set msgid [lindex $args 2]
    set map [lindex $args 3]

    if {$secret != $samp(private)} {
	Error "SAMP: [msgcat::mc {internal error}]"
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

    if {[SAMPValidMtype $mtype]} {
	switch -- $mtype {
	    client.env.get {
		$mtype $msgid params
	    }
	    ds9.get {
		$mtype $msgid params
	    }
	    ds9.set {
		$mtype params
		SAMPRcvdDS9SetReply $msgid
	    }
	    default {
		$mtype params
		SAMPReply $msgid OK
	    }
	}
    } else {
	Error "SAMP: [msgcat::mc {internal error}]"
	return {string ERROR}
    }

    return {string OK}
}

proc samp.client.receiveResponse {args} {
    global samp

    global debug
    if {$debug(tcl,samp)} {
	puts stderr "samp.client.receiveResponse $args"
    }

    set secret [lindex $args 0]
    set id [lindex $args 1]
    set msgtag [lindex $args 2]
    set map [lindex $args 3]

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
	if {[lsearch $samp($cc,subscriptions) $mtype]>=0} {
	    lappend ll $cc
	}
    }
    return $ll
}

# CallBacks

proc samp.hub.event.shutdown {varname} {
    upvar $varname args

    global debug
    if {$debug(tcl,samp)} {
	puts stderr "samp.hub.event.shutdown $args"
    }

    SAMPShutdown

    UpdateFileMenuSAMP
    UpdateCATDialogSAMP
}

proc samp.hub.event.register {varname} {
    upvar $varname args

    global samp

    global debug
    if {$debug(tcl,samp)} {
	puts stderr "samp.hub.event.register $args"
    }

    foreach arg $args {
	foreach {key val} $arg {
	    switch -- $key {
		id {
		    lappend samp(clients) $val
		    set samp($val,subscriptions) {}
		    set samp($val,name) {}
		}
	    }
	}
    }
}

proc samp.hub.event.unregister {varname} {
    upvar $varname args

    global samp

    global debug
    if {$debug(tcl,samp)} {
	puts stderr "samp.hub.event.unregister $args"
    }

    foreach arg $args {
	foreach {key val} $arg {
	    switch -- $key {
		id {
		    set id [lsearch $samp(clients) $val]
		    set samp(clients) [lreplace $samp(clients) $id $id]
		    unset samp($val,subscriptions)
		    unset samp($val,name)
		}
	    }
	}
    }

    UpdateFileMenuSAMP
    UpdateCATDialogSAMP
}

proc samp.hub.event.metadata {varname} {
    upvar $varname args

    global samp

    global debug
    if {$debug(tcl,samp)} {
	puts stderr "samp.hub.event.metadata $args"
    }

    set id {}
    set name {}
    foreach arg $args {
	foreach {key val} $arg {
	    switch -- $key {
		id {
		    set id $val
		}
		metadata {
		    foreach aa $val {
			foreach {bb cc} $aa {
			    if {$bb == {samp.name}} {
				set name $cc
			    }
			}
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
}

proc samp.hub.event.subscriptions {varname} {
    upvar $varname args

    global samp

    global debug
    if {$debug(tcl,samp)} {
	puts stderr "samp.hub.event.subscriptions $args"
    }

    set id {}
    set subs {}
    foreach arg $args {
	foreach {key val} $arg {
	    switch -- $key {
		id {
		    set id $val
		}
		subscriptions {
		    foreach aa $val {
			foreach {bb cc} $aa {
			    lappend subs $bb
			}
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

    set samp($id,subscriptions) $subs

    UpdateFileMenuSAMP
    UpdateCATDialogSAMP
}

proc samp.hub.disconnect {varname} {
    upvar $varname args

    global debug
    if {$debug(tcl,samp)} {
	puts stderr "samp.hub.disconnect $args"
    }

    set msg {}

    foreach arg $args {
	foreach {key val} $arg {
	    switch -- $key {
		reason {set msg $val}
	    }
	}
    }

    SAMPShutdown
    UpdateFileMenu
    UpdateCATDialogSAMP
}

# HTTPClient

proc samp.app.ping {varname} {
    upvar $varname args

    global debug
    if {$debug(tcl,samp)} {
	puts stderr "samp.app.ping $args"
    }
}

proc image.load.fits {varname} {
    upvar $varname args

    global debug
    if {$debug(tcl,samp)} {
	puts stderr "SAMPRcvdImageLoadFits: $args"
    }

    global current
    global samp

    set url {}
    set imageid {}
    set name {}

    foreach arg $args {
	foreach {key val} $arg {
	    switch -- $key {
		url {set url [XMLUnQuote $val]}
		image-id {set imageid [XMLUnQuote $val]}
		name {set name [XMLUnQuote $val]}
	    }
	}
    }

    if {$url != {}} {
	LoadURLFits $url {} {} 1
    }
}

proc table.load.fits {varname} {
    upvar $varname args

    global debug
    if {$debug(tcl,samp)} {
	puts stderr "table.load.fits $args"
    }

    global current
    global samp

    set url {}
    set imageid {}
    set name {}

    foreach arg $args {
	foreach {key val} $arg {
	    switch -- $key {
		url {set url [XMLUnQuote $val]}
		image-id {set imageid [XMLUnQuote $val]}
		name {set name [XMLUnQuote $val]}
	    }
	}
    }

    if {$url != {}} {
	LoadURLFits $url {} {} 1
    }
}

proc table.load.votable {varname} {
    upvar $varname args

    global samp
    global debug
    if {$debug(tcl,samp)} {
	puts stderr "table.load.votable $args"
    }

    set url {}
    set tabid {}
    set name {}

    foreach arg $args {
	foreach {key val} $arg {
	    switch -- $key {
		url {set url [XMLUnQuote $val]}
		table-id {set tabid [XMLUnQuote $val]}
		name {set name [XMLUnQuote $val]}
	    }
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
}

proc table.highlight.row {varname} {
    upvar $varname args

    global samp
    global debug
    if {$debug(tcl,samp)} {
	puts stderr "table.highlight.row $args"
    }

    set url {}
    set tabid {}
    set row {}

    foreach arg $args {
	foreach {key val} $arg {
	    switch -- $key {
		url {set url [XMLUnQuote $val]}
		table-id {set tabid [XMLUnQuote $val]}
		row {set row $val}
	    }
	}
    }

    if {$tabid != {} && $row != {}} {
	if {[info exists samp(icat,$tabid)]} {
	    CATSelectRows $samp(icat,$tabid) samp [expr $row+1] 1
	}
    }
}

proc table.select.rowList {varname} {
    upvar $varname args

    global samp
    global debug
    if {$debug(tcl,samp)} {
	puts stderr "table.select.rowList $args"
    }

    set url {}
    set tabid {}
    set rowlist {}

    foreach arg $args {
	foreach {key val} $arg {
	    switch -- $key {
		url {set url [XMLUnQuote $val]}
		table-id {set tabid [XMLUnQuote $val]}
		row-list {
		    foreach rr $val {
			lappend rowlist [expr $rr+1]
		    }
		}
	    }
	}
    }

    if {$tabid != {} && [llength $rowlist] != 0} {
	if {[info exists samp(icat,$tabid)]} {
	    CATSelectRows $samp(icat,$tabid) samp $rowlist 1
	}
    }
}

proc coord.pointAt.sky {varname} {
    upvar $varname args

    global samp
    global debug
    if {$debug(tcl,samp)} {
	puts stderr "coord.pointAt.sky $args"
    }

    set ra {}
    set dec {}

    foreach arg $args {
	foreach {key val} $arg {
	    switch -- $key {
		ra {set ra [XMLUnQuote $val]}
		dec {set dec [XMLUnQuote $val]}
	    }
	}
    }

    global current
    if {$ra != {} && $dec != {} && [$current(frame) has wcs celestial wcs]} {
	PanTo $ra $dec wcs fk5
    }
}

proc client.env.get {msgid varname} {
    upvar $varname args

    global samp
    global debug
    if {$debug(tcl,samp)} {
	puts stderr "client.env.get $msgid $args"
    }

    set name {}

    foreach arg $args {
	foreach {key val} $arg {
	    switch -- $key {
		name {set name [XMLUnQuote $val]}
	    }
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

proc ds9.set {varname} {
    upvar $varname args
   
    global debug
    if {$debug(tcl,samp)} {
	puts stderr "ds9.set $args"
    }

    global current
    global samp

    set url {}
    set cmd {}

    foreach arg $args {
	foreach {key val} $arg {
	    switch -- $key {
		url {set url [XMLUnQuote $val]}
		cmd {set cmd [XMLUnQuote $val]}
	    }
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

proc ds9.get {msgid varname} {
    upvar $varname args

    global debug
    if {$debug(tcl,samp)} {
	puts stderr "ds9.get $args"
    }

    global current
    global samp

    set url {}
    set cmd {}

    foreach arg $args {
	foreach {key val} $arg {
	    switch -- $key {
		url {set url [XMLUnQuote $val]}
		cmd {set cmd [XMLUnQuote $val]}
	    }
	}
    }

    InitError samp
    set fn [CommGet SAMPRcvdDS9GetReply $msgid $cmd [tmpnam {}]]
    if {$fn != {}} {
	lappend samp(tmp,files) $fn
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
