#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc SAMPDef {} {
    global isamp

    set isamp(timeout) 1000
}

proc InitSAMP {} {
    SAMPConnect 0
#    catch {SAMPConnect 0}
}

# Cmds

proc SAMPConnect {{verbose 1}} {
    global ds9
    global isamp
    global samp
    global sampmap
    global sampmap2

    # connected?
    if {[info exists samp]} {
	if {$verbose} {
	    Error "SAMP: [msgcat::mc {already connected}]"
	}
	return
    }

    # reset samp array
    if {[info exists samp]} {
	unset samp
    }
    set samp(apps,image) {}
    set samp(apps,table) {}
    set samp(apps,votable) {}
    set samp(tmp,files) {}

    # these are to try to prevent feedback problems with 
    set samp(lock) 0

    # can we find a hub?
    if {![SAMPParseHub]} {
 	if {$verbose} {
	    Error "SAMP: [msgcat::mc {unable to locate HUB}]"
	}
	if {[info exists samp]} {
	    unset samp
	}
	return
    }

    # register
    set params [list "string $samp(secret)"]
    set rr {}
    if {![SAMPSend {samp.hub.register} $params rr]} {
  	if {$verbose} {
	    Error "SAMP: [msgcat::mc {internal error}] $rr"
	}
	if {[info exists samp]} {
	    unset samp
	}
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
    set sampmap(samp.icon.url) {string "http://ds9.si.edu/doc/sun.gif"}
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
  	if {$verbose} {
	    Error "SAMP: [msgcat::mc {internal error}] $rr"
	}
	if {[info exists samp]} {
	    unset samp
	}
	return
    }

    # who are we
    set samp(port) [lindex [fconfigure [xmlrpc::serve 0] -sockname] 2]
    set samp(home) "[info hostname]:$samp(port)"

    # callback
    set param1 [list "string $samp(private)"]
    set param2 [list "string http://$samp(home)"]
    set params "$param1 $param2"
    set rr {}
    if {![SAMPSend {samp.hub.setXmlrpcCallback} $params rr]} {
  	if {$verbose} {
	    Error "SAMP: [msgcat::mc {internal error}] $rr"
	}
	if {[info exists samp]} {
	    unset samp
	}
	return
    }

    # declare subscriptions
    catch {unset sampmap}
    catch {unset sampmap2}
    set sampmap(samp.app.ping) {struct mapPing}

    set sampmap(samp.hub.event.shutdown) {struct mapShutdown}
    set sampmap(samp.hub.event.register) {struct mapRegister}
    set sampmap(samp.hub.event.unregister) {struct mapUnregister}
    set sampmap(samp.hub.disconnect) {struct mapDisconnect}

    set sampmap(image.load.fits) {struct mapImageLoadFits}
    set sampmap(table.load.fits) {struct mapTableLoadFits}
    set sampmap(table.load.votable) {struct mapTableLoadVotable}
    set sampmap(table.highlight.row) {struct mapTableHighlightRow}
    set sampmap(table.select.rowList) {struct mapTableSelectRowList}
    set sampmap(coord.pointAt.sky) {struct mapCoordPointAtSky}
    set sampmap(client.env.get) {struct mapClientEnvGet}

    set sampmap(x-samp.affiliation.name) {struct mapAffiliationName}
    set sampmap(x-samp.affiliation.url) {struct mapAffiliationURL}
    set sampmap(x-samp.homepage.url) {struct mapHomepageURL}
    set sampmap(x-samp.releasenotes.url) {struct mapReleasenotesURL}
    set sampmap(x-samp.faq.url) {struct mapFAQURL}
    set sampmap(x-samp.authors) {struct mapAuthors}
    set sampmap(x-samp.release.version) {struct mapReleaseVersion}

    set sampmap(ds9.get) {struct mapDS9Get}
    set sampmap(ds9.set) {struct mapDS9Set}
    set sampmap(ds9.restricted-get) {struct sampmap2}
    set sampmap(ds9.restricted-set) {struct sampmap2}

    set sampmap2(x-samp.mostly-harmless) {string "1"}

    set param1 [list "string $samp(private)"]
    set param2 [list "struct sampmap"]
    set params "$param1 $param2" 
    set rr {}
    if {![SAMPSend {samp.hub.declareSubscriptions} $params rr]} {
  	if {$verbose} {
	    Error "SAMP: [msgcat::mc {internal error}] $rr"
	}
	if {[info exists samp]} {
	    unset samp
	}
	return
    }

    after $isamp(timeout) SAMPUpdate
}

proc SAMPDisconnect {} {
    global ds9
    global samp

    # connected?
    if {![info exists samp]} {
	Error "SAMP: [msgcat::mc {not connected}]"
	return
    }

    # disconnect
    if {[info exists samp(private)]} {
	set params [list "string $samp(private)"]
	set rr {}
	if {![SAMPSend {samp.hub.unregister} $params rr]} {
	    Error "SAMP: [msgcat::mc {internal error}] $rr"
	}
	SAMPShutdown
    }

    UpdateFileMenu
    UpdateCATDialog
}

proc SAMPSendImageLoadFits {id} {
    global ds9
    global current
    global isamp
    global samp
    global sampmap
    global sampmap2

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
    catch {unset sampmap}
    set sampmap(samp.mtype) {string "image.load.fits"}
    set sampmap(samp.params) {struct sampmap2}

    catch {unset sampmap2}
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
	if {![SAMPSend {samp.hub.notify} $params rr]} {
	    Error "SAMP: [msgcat::mc {internal error}] $rr"
	}
    } else {
	if {![SAMPSend {samp.hub.notifyAll} $params rr]} {
	    Error "SAMP: [msgcat::mc {internal error}] $rr"
	}
    }
}

proc SAMPSendTableLoadFits {id} {
    global ds9
    global current
    global isamp
    global samp
    global sampmap
    global sampmap2

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
    catch {unset sampmap}
    set sampmap(samp.mtype) {string "table.load.fits"}
    set sampmap(samp.params) {struct sampmap2}

    catch {unset sampmap2}
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
	if {![SAMPSend {samp.hub.notify} $params rr]} {
	    Error "SAMP: [msgcat::mc {internal error}] $rr"
	}
    } else {
	if {![SAMPSend {samp.hub.notifyAll} $params rr]} {
	    Error "SAMP: [msgcat::mc {internal error}] $rr"
	}
    }
}

proc SAMPSendTableLoadVotable {id varname} {
    global ds9
    global isamp
    global samp
    global sampmap
    global sampmap2

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
    catch {unset sampmap}
    set sampmap(samp.mtype) {string "table.load.votable"}
    set sampmap(samp.params) {struct sampmap2}

    catch {unset sampmap2}
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
	if {![SAMPSend {samp.hub.notify} $params rr]} {
	    Error "SAMP: [msgcat::mc {internal error}] $rr"
	}
    } else {
	if {![SAMPSend {samp.hub.notifyAll} $params rr]} {
	    Error "SAMP: [msgcat::mc {internal error}] $rr"
	}
    }
}

proc SAMPSendTableRowListCmd {varname rowlist} {
    global ds9
    global samp

    # connected?
    if {![info exists samp]} {
	return
    }

    if {$samp(apps,votable) == {}} {
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
    global isamp
    global samp
    global sampmap
    global sampmap2

    # row starts at 1
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,samp)} {
	puts stderr "SAMPSendTableHighlightRow $samp(ocat,$varname) $row"
    }

    catch {unset sampmap}
    set sampmap(samp.mtype) {string "table.highlight.row"}
    set sampmap(samp.params) {struct sampmap2}

    catch {unset sampmap2}
    set sampmap2(table-id) "string [XMLQuote $samp(ocat,$varname)]"
    set sampmap2(row) "string [XMLQuote [expr $row-1]]"

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
	if {![SAMPSend {samp.hub.notify} $params rr]} {
	    Error "SAMP: [msgcat::mc {internal error}] $rr"
	}
    } else {
	if {![SAMPSend {samp.hub.notifyAll} $params rr]} {
	    Error "SAMP: [msgcat::mc {internal error}] $rr"
	}
    }
}

proc SAMPSendTableSelectRowList {id varname rows} {
    global isamp
    global samp
    global sampmap
    global sampmap2

    # rows start at 1
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,samp)} {
	puts stderr "SAMPSendTableSelectRowList $samp(ocat,$varname) $rows"
    }

    catch {unset sampmap}
    set sampmap(samp.mtype) {string "table.select.rowList"}
    set sampmap(samp.params) {struct sampmap2}

    catch {unset sampmap2}
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
	if {![SAMPSend {samp.hub.notify} $params rr]} {
	    Error "SAMP: [msgcat::mc {internal error}] $rr"
	}
    } else {
	if {![SAMPSend {samp.hub.notifyAll} $params rr]} {
	    Error "SAMP: [msgcat::mc {internal error}] $rr"
	}
    }
}

proc SAMPSendCoordPointAtSkyCmd {which} {
    global ds9
    global samp

    # connected?
    if {![info exists samp]} {
	return
    }

    # are we locked?
    if {$samp(lock)} {
	global debug
	if {$debug(tcl,samp)} {
	    puts stderr "SAMP: SAMPSendCoordPointAtSkyCmd: ABORT locked"
	}
	return
    }

    if {$samp(apps,image) == {} || $samp(apps,table) == {}} {
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
    global isamp
    global samp
    global sampmap
    global sampmap2

    global debug
    if {$debug(tcl,samp)} {
	puts stderr "SAMPSendCoordPointAtSky $id $coord"
    }

    catch {unset sampmap}
    set sampmap(samp.mtype) {string "coord.pointAt.sky"}
    set sampmap(samp.params) {struct sampmap2}

    catch {unset sampmap2}
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
	if {![SAMPSend {samp.hub.notify} $params rr]} {
	    Error "SAMP: [msgcat::mc {internal error}] $rr"
	}
    } else {
	if {![SAMPSend {samp.hub.notifyAll} $params rr]} {
	    Error "SAMP: [msgcat::mc {internal error}] $rr"
	}
    }
}

# Support

proc SAMPShutdown {} {
    global ds9
    global samp

    # delete any files
    SAMPDelTmpFiles

    # close the server socket if still up
    catch {close $xmlrpc::acceptfd}

    # update the menus
    set samp(apps,image) {}
    set samp(apps,table) {}
    set samp(apps,votable) {}
    UpdateFileMenu
    UpdateCATDialog

    # unset samp array
    if {[info exists samp]} {
	unset samp
    }
}

proc SAMPUpdate {} {
    # this routine is run after a delay since it needs to 
    # call the hub for metadata

    # connected? we might have already disconnected.
    global samp
    if {![info exists samp]} {
	return
    }

    global debug
    if {$debug(tcl,samp)} {
	puts stderr "SAMPUpdate"
    }

    # image fits
    set param1 [list "string $samp(private)"]
    set param2 [list "string image.load.fits"]
    set params "$param1 $param2" 
    set rr {}
    if {![SAMPSend {samp.hub.getSubscribedClients} $params rr]} {
	Error "SAMP: [msgcat::mc {internal error}] $rr"
	return
    }
    
    set samp(apps,image) {}
    foreach arg [lindex $rr 1] {
	foreach {key val} $arg {
	    if {$key != {}} {
		lappend samp(apps,image) [list $key [SAMPGetAppName $key]]
	    }
	}
    }

    # table fits
    set param1 [list "string $samp(private)"]
    set param2 [list "string table.load.fits"]
    set params "$param1 $param2" 
    set rr {}
    if {![SAMPSend {samp.hub.getSubscribedClients} $params rr]} {
	Error "SAMP: [msgcat::mc {internal error}] $rr"
	return
    }
    
    set samp(apps,table) {}
    foreach arg [lindex $rr 1] {
	foreach {key val} $arg {
	    if {$key != {}} {
		lappend samp(apps,table) [list $key [SAMPGetAppName $key]]
	    }
	}
    }

    # votable
    set param1 [list "string $samp(private)"]
    set param2 [list "string table.load.votable"]
    set params "$param1 $param2" 
    set rr {}
    if {![SAMPSend {samp.hub.getSubscribedClients} $params rr]} {
	Error "SAMP: [msgcat::mc {internal error}] $rr"
	return
    }
    
    set samp(apps,votable) {}
    foreach arg [lindex $rr 1] {
	foreach {key val} $arg {
	    if {$key != {}} {
		lappend samp(apps,votable) [list $key [SAMPGetAppName $key]]
	    }
	}
    }

    if {$debug(tcl,samp)} {
	puts stderr "SAMPUpdate: image apps: $samp(apps,image)"
	puts stderr "SAMPUpdate: table apps: $samp(apps,table)"
	puts stderr "SAMPUpdate: votable apps: $samp(apps,votable)"
    }

    UpdateFileMenu
    UpdateCATDialog
}

proc SAMPSend {method params resultVar} {
    upvar $resultVar result

    global samp

    global debug
    if {$debug(tcl,samp)} {
	puts stderr "SAMPSend: $method $params"
    }

    if {[catch {set result [xmlrpc::call $samp(url) $samp(method) $method $params]}]} {
	if {$debug(tcl,samp)} {
	    puts stderr "SAMPSend Error: $result"
	}
	return 0
    }

    # reset error if needed
    # xmlrpc leaves error msgs
    InitError samp

    if {$debug(tcl,samp)} {
	puts stderr "SAMPSend Result: $result"
    }

    return 1
}

proc SAMPReply {msgid status {result {}} {url {}} {error {}}} {
    global samp
    global sampmap
    global sampmap2
    global sampmap3

    global debug
    if {$debug(tcl,samp)} {
	puts stderr "SAMPReply:$msgid:$status:$result:$url:$error:"
    }

    catch {unset sampmap}
    catch {unset sampmap2}
    catch {unset sampmap3}
    switch -- $status {
	OK {
	    set sampmap(samp.status) {string "samp.ok"}
	    set sampmap(samp.result) {struct sampmap2}
	    if {$result != {}} {
		set sampmap2(value) "string \"[XMLQuote $result]\""
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
		set sampmap2(value) "string \"[XMLQuote $result]\""
	    }
	    if {$url != {}} {
		set sampmap2(url) "string \"[XMLQuote $url]\""
	    }
	    set sampmap3(samp.errortxt) "string \"[XMLQuote $error]\""
	}
	ERROR {
	    set sampmap(samp.status) {string "samp.error"}
	    set sampmap(samp.error)  {struct sampmap3}
	    set sampmap3(samp.errortxt) "string \"[XMLQuote $error]\""
	}
    }
    set param1 [list "string $samp(private)"]
    set param2 [list "string $msgid"]
    set param3 [list "struct sampmap"]
    set params "$param1 $param2 $param3"
    set rr {}
    if {![SAMPSend {samp.hub.reply} $params rr]} {
	Error "SAMP: [msgcat::mc {internal error}] $rr"
	return
    }
}

proc SAMPReplySimple {msgid str} {
    upvar $varname args

    global debug
    if {$debug(tcl,samp)} {
	puts stderr "SAMPReplySimple: $str"
    }

    global samp
    SAMPReply $msgid OK "$str"
}

# receiveNotification(string sender-id, map message)
proc samp.client.receiveNotification {args} {
    global debug
    if {$debug(tcl,samp)} {
	puts stderr "SAMPReceivedNotification: $args"
    }
    
    set secret [lindex $args 0]
    set id [lindex $args 1]
    set map [lindex $args 2]

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

    # be sure to lock any command that may cause a
    #   SAMPSendCoordPointAtSkyCmd response
    global samp
    switch -- $mtype {
	samp.hub.event.shutdown {
	    SAMPRcvdEventShutdown params
	}
	samp.hub.event.register {
	    SAMPRcvdEventRegister params
	}
	samp.hub.event.unregister {
	    SAMPRcvdEventUnregister params
	}
	samp.hub.disconnect {
	    SAMPRcvdDisconnect params
	}
	image.load.fits {
	    set samp(lock) 1
	    SAMPRcvdImageLoadFits params
	    set samp(lock) 0
	}
	table.load.fits {
	    set samp(lock) 1
	    SAMPRcvdTableLoadFits params
	    set samp(lock) 0
	}
	table.load.votable {
	    SAMPRcvdTableLoadVotable params
	}
	table.highlight.row {
	    set samp(lock) 1
	    SAMPRcvdTableHighlightRow params
	    set samp(lock) 0
	}
	table.select.rowList {
	    set samp(lock) 1
	    SAMPRcvdTableSelectRowList params
	    set samp(lock) 0
	}
	coord.pointAt.sky {
	    set samp(lock) 1
	    SAMPRcvdCoordPointAtSky params
	    set samp(lock) 0
	}
	ds9.set {
	    set samp(lock) 1
	    SAMPRcvdDS9Set {} params 0
	    set samp(lock) 0
	}
	ds9.restricted-set {
	    set samp(lock) 1
	    SAMPRcvdDS9Set {} params 1
	    set samp(lock) 0
	}
	default {
	    if {$debug(tcl,samp)} {
		puts stderr "SAMP samp.client.receiveNotification: bad mtype $mtype"
	    }
	}
    }

    return {string OK}
}

# receiveCall(string sender-id, string msg-id, map message)
proc samp.client.receiveCall {args} {
    global ds9
    global debug
    if {$debug(tcl,samp)} {
	puts stderr "SAMPReceivedCall: $args"
    }

    set secret [lindex $args 0]
    set id [lindex $args 1]
    set msgid [lindex $args 2]
    set map [lindex $args 3]

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

    # be sure to lock any command that may cause a
    #   SAMPSendCoordPointAtSkyCmd response
    global samp
    switch -- $mtype {
	samp.app.ping {
	    SAMPReply $msgid OK
	}
	image.load.fits {
	    set samp(lock) 1
	    SAMPRcvdImageLoadFits params
	    set samp(lock) 0
	    SAMPReply $msgid OK
	}
	table.load.fits {
	    set samp(lock) 1
	    SAMPRcvdTableLoadFits params
	    set samp(lock) 0
	    SAMPReply $msgid OK
	}
	table.load.votable {
	    SAMPRcvdTableLoadVotable params
	    SAMPReply $msgid OK
	}
	table.highlight.row {
	    set samp(lock) 1
	    SAMPRcvdTableHighlightRow params
	    set samp(lock) 0
	    SAMPReply $msgid OK
	}
	table.select.rowList {
	    set samp(lock) 1
	    SAMPRcvdTableSelectRowList params
	    set samp(lock) 0
	    SAMPReply $msgid OK
	}
	coord.pointAt.sky {
	    set samp(lock) 1
	    SAMPRcvdCoordPointAtSky params
	    set samp(lock) 0
	    SAMPReply $msgid OK
	}
	client.env.get {
	    SAMPRcvdClientEnvGet $msgid params
	}
	x-samp.affiliation.name {
	    SAMPReplySimple $msgid "SMITHSONIAN ASTROPHYSICAL OBSERVATORY"
	}
	x-samp.affiliation.url {
	    SAMPReplySimple $msgid "https://www.cfa.harvard.edu/sao"
	}
	x-samp.homepage.url {
	    SAMPReplySimple $msgid "http://ds9.si.edu"
	}
	x-samp.releasenotes.url {
	    SAMPReplySimple $msgid OK "http://ds9.si.edu/doc/release/r8.1.html"
	}
	x-samp.faq.url {
	    SAMPReplySimple $msgid OK "http://ds9.si.edu/doc/faq.html"
	}
	x-samp.authors {
	    global help
	    SAMPReplySimple $msgid OK "$help(authors)"
	}
	x-samp.release.version {
	    SAMPReplySimple $msgid OK "$ds9(version,display)"
	}
	ds9.get {
	    set samp(lock) 1
	    SAMPRcvdDS9Get $msgid params
	    set samp(lock) 0
	}
	ds9.set {
	    set samp(lock) 1
	    SAMPRcvdDS9Set $msgid params 0
	    set samp(lock) 0
	}
	ds9.restricted-get {
	    set samp(lock) 1
	    SAMPRcvdDS9Get $msgid params
	    set samp(lock) 0
	}
	ds9.restricted-set {
	    set samp(lock) 1
	    SAMPRcvdDS9Set $msgid params 1
	    set samp(lock) 0
	}
	default {
	    SAMPReply $msgid ERROR {} {} "[msgcat::mc {Unknown command}]: $mtype"
	    if {$debug(tcl,samp)} {
		puts stderr "SAMP samp.client.receiveCall: bad mtype $mtype"
	    }
	}
    }

    return {string OK}
}

# receiveResponse(string responder-id, string msg-tag, map response)
proc samp.client.receiveResponse {args} {
    global debug
    if {$debug(tcl,samp)} {
	puts stderr "SAMPReceivedResponse: $args"
    }

    set msgtag [lindex $args 0]
    set value [lindex $args 1]
    set map [lindex $args 2]

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
	# look in home directory for .samp
	global tcl_platform
	switch $tcl_platform(platform) {
	    unix {
		set fn [file join [GetEnvHome] {.samp}]
	    }
	    windows {
		set fn [file join "$env(HOMEDRIVE)$env(HOMEPATH)" {.samp}]
	    }
	}
    }

    # no hub to be found
    if {![file exist $fn]} {
	return 0
    }

    set samp(secret) {}
    set samp(url) {}
    set samp(metod) {}
    set fp [open $fn r]
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
	return 0
    }

    global debug
    if {$debug(tcl,samp)} {
	puts stderr "SAMPParseHub: $samp(secret) $samp(url) $samp(method)"
    }
    return 1
}

proc SAMPGetAppName {id} {
    global samp

    global debug
    if {$debug(tcl,samp)} {
	puts stderr "SAMPGetAppName: $id"
    }

    set param1 [list "string $samp(private)"]
    set param2 [list "string $id"]
    set params "$param1 $param2" 
    set rr {}
    if {![SAMPSend {samp.hub.getMetadata} $params rr]} {
	Error "SAMP: [msgcat::mc {internal error}] $rr"
	return
    }

    set name {}
    foreach arg [lindex $rr 1] {
	foreach {key val} $arg {
	    switch -- $key {
		samp.name {set name [XMLUnQuote $val]}
	    }
	}
    }

    return $name
}

# CallBacks
# Hub

proc SAMPRcvdEventShutdown {varname} {
    upvar $varname args

    global debug
    if {$debug(tcl,samp)} {
	puts stderr "SAMPRcvdEventShutdown: $args"
    }

    SAMPShutdown
}

proc SAMPRcvdEventRegister {varname} {
    upvar $varname args

    global isamp
    global samp

    global debug
    if {$debug(tcl,samp)} {
	puts stderr "SAMPRcvdEventRegister: $args"
    }

    foreach arg $args {
	foreach {key val} $arg {
	    switch -- $key {
		id {
		    # check to see if its just us
		    if {$samp(self) == $val} {
			return
		    }
		}
	    }
	}
    }

    # wait
    after $isamp(timeout) SAMPUpdate
}

proc SAMPRcvdEventUnregister {varname} {
    upvar $varname args

    global isamp
    global samp

    global debug
    if {$debug(tcl,samp)} {
	puts stderr "SAMPRcvdEventUnregister: $args"
    }

    foreach arg $args {
	foreach {key val} $arg {
	    switch -- $key {
		id {
		    # check to see if its just us
		    if {$samp(self) == $val} {
			return
		    }
		}
	    }
	}
    }

    # wait
    after $isamp(timeout) SAMPUpdate
}

proc SAMPRcvdDisconnect {varname} {
    upvar $varname args

    global debug
    if {$debug(tcl,samp)} {
	puts stderr "SAMPRcvdDisconnect: $args"
    }

    set msg {}

    foreach arg $args {
	foreach {key val} $arg {
	    switch -- $key {
		reason {set msg [XMLUnQuote $val]}
	    }
	}
    }

    SAMPShutdown
}

# HTTPClient

proc SAMPRcvdImageLoadFits {varname} {
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

    if {$debug(tcl,samp)} {
	puts stderr "SAMPRcvdImageLoadFits: $url $imageid $name"
    }

    if {$url != {}} {
	MultiLoad
	LoadURLFits $url {} {}
    }
}

proc SAMPRcvdTableLoadFits {varname} {
    upvar $varname args

    global debug
    if {$debug(tcl,samp)} {
	puts stderr "SAMPRcvdTableLoadFits: $args"
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

    if {$debug(tcl,samp)} {
	puts stderr "SAMPRcvdTableLoadFits: $url $imageid $name"
    }

    if {$url != {}} {
	MultiLoad
	LoadURLFits $url {} {}
    }
}

proc SAMPRcvdTableLoadVotable {varname} {
    upvar $varname args

    global samp
    global debug
    if {$debug(tcl,samp)} {
	puts stderr "SAMPRcvdTableLoadVotable: $args"
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

    if {$debug(tcl,samp)} {
	puts stderr "SAMPRcvdTableLoadVotable: $url $tabid $name"
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

proc SAMPRcvdTableHighlightRow {varname} {
    upvar $varname args

    global samp
    global debug
    if {$debug(tcl,samp)} {
	puts stderr "SAMPRcvdTableHighlightRow: $args"
    }

    set url {}
    set tabid {}
    set row {}

    foreach arg $args {
	foreach {key val} $arg {
	    switch -- $key {
		url {set url [XMLUnQuote $val]}
		table-id {set tabid [XMLUnQuote $val]}
		row {set row [XMLUnQuote $val]}
	    }
	}
    }

    if {$debug(tcl,samp)} {
	puts stderr "SAMPRcvdTableHighlightRow: $url $tabid $row"
    }

    if {$tabid != {} && $row != {}} {
	if {[info exists samp(icat,$tabid)]} {
	    CATSelectRows $samp(icat,$tabid) samp [expr $row+1] 1
	}
    }
}

proc SAMPRcvdTableSelectRowList {varname} {
    upvar $varname args

    global samp
    global debug
    if {$debug(tcl,samp)} {
	puts stderr "SAMPRcvdTableSelectRowList: $args"
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
		    foreach rr [XMLUnQuote $val] {
			lappend rowlist [expr $rr+1]
		    }
		}
	    }
	}
    }

    if {$debug(tcl,samp)} {
	puts stderr "SAMPRcvdTableSelectRowList: $url $tabid $rowlist"
    }

    if {$tabid != {} && [llength $rowlist] != 0} {
	if {[info exists samp(icat,$tabid)]} {
	    CATSelectRows $samp(icat,$tabid) samp $rowlist 1
	}
    }
}

proc SAMPRcvdCoordPointAtSky {varname} {
    upvar $varname args

    global samp
    global debug
    if {$debug(tcl,samp)} {
	puts stderr "SAMPRcvdCoordPointAtSky: $args"
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

    if {$debug(tcl,samp)} {
	puts stderr "SAMPRcvdCoordPointAtSky: $ra $dec"
    }

    global current
    if {$ra != {} && $dec != {} && [$current(frame) has wcs celestial wcs]} {
	PanTo $ra $dec wcs fk5
    }
}

proc SAMPRcvdClientEnvGet {msgid varname} {
    upvar $varname args

    global samp
    global debug
    if {$debug(tcl,samp)} {
	puts stderr "SAMPRcvdClientEnvGet: $msgid $args"
    }

    set name {}

    foreach arg $args {
	foreach {key val} $arg {
	    switch -- $key {
		name {set name [XMLUnQuote $val]}
	    }
	}
    }

    if {$debug(tcl,samp)} {
	puts stderr "SAMPRcvdClientEnvGet: $name"
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

proc SAMPRcvdDS9Set {msgid varname safemode} {
    upvar $varname args

    global debug
    if {$debug(tcl,samp)} {
	puts stderr "SAMPRcvdDS9Set: $msgid $args $safemode"
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
	set fn [tmpnam {.xpa}]
	lappend samp(tmp,files) $fn
	GetFileURL $url fn
    }
    CommSet $fn $cmd $safemode
    if {$msgid != {}} {
	SAMPRcvdDS9SetReply $msgid
    }
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

proc SAMPRcvdDS9Get {msgid varname} {
    upvar $varname args

    global debug
    if {$debug(tcl,samp)} {
	puts stderr "SAMPRcvdDS9Get: $args"
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

    set fn [tmpnam {.xpa}]
    lappend samp(tmp,files) $fn
    InitError samp
    CommGet SAMPRcvdDS9GetReply $msgid $cmd $fn
}

proc SAMPRcvdDS9GetReply {msgid msg {fn {}}} {
    global ds9
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
	}

	SAMPReply $msgid OK $value $url
    }
}

proc SAMPDelTmpFiles {} {
    global samp

    # delete any tmp files
    foreach fn $samp(tmp,files) {
	catch {file delete -force "$fn"}
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
    SAMPUpdate

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

    if {[info exists samp]} {
	foreach arg $samp(apps,image) {
	    foreach {key val} $arg {
		if {[string tolower $val] == $name} {
		    SAMPSendImageLoadFits $key
		    break
		}
	    }
	}
    } else {
	Error "SAMP: [msgcat::mc {not connected}]"
    }
}

proc SAMPCmdSendTable {name} {
    global samp

    if {[info exists samp]} {
	foreach arg $samp(apps,table) {
	    foreach {key val} $arg {
		if {[string tolower $val] == $name} {
		    SAMPSendTableLoadFits $key
		    break
		}
	    }
	}
    } else {
	Error "SAMP: [msgcat::mc {not connected}]"
    }
}    
