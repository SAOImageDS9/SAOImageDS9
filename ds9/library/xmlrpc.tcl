#  Copyright (C) 1999-2024
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

# Server

global xmlrpc
set xmlrpc(cnt) 0
set xmlrpc(parser) true
set xmlrpc(debug) false
set xmlrpc(sock) {}
set xmlrpc(timeout) 15000

proc xmlrpcServe {port} {
    return [socket -server xmlrpcServeOnce $port]
}

proc xmlrpcServeOnce {sock addr port} {
    global xmlrpc

    fconfigure $sock -translation {lf lf} -buffersize 4096
    fconfigure $sock -blocking off
    set xmlrpc(request,$sock) {}
    set xmlrpc(request,timeout,$sock) \
	[after $xmlrpc(timeout) [list xmlrpcRequestTimeout $sock]]
    fileevent $sock readable [list xmlrpcDoRequest $sock]
}

proc xmlrpcRequestTimeout {sock} {
    global xmlrpc

    if {![info exists xmlrpc(request,$sock)]} {
	return
    }

    catch {after cancel $xmlrpc(request,timeout,$sock)}
    catch {unset xmlrpc(request,timeout,$sock)}
    catch {unset xmlrpc(request,$sock)}
    catch {fileevent $sock readable {}}
    catch {close $sock}
}

proc xmlrpcPreflightResponse {request} {
    set header "HTTP/1.1 204 No Content\n"
    append header "Access-Control-Allow-Origin: *\n"
    append header "Access-Control-Allow-Methods: POST, GET, OPTIONS\n"
    append header "Access-Control-Allow-Headers: Content-Type\n"

    # Private Network Access preflights require the local server to opt in.
    if {[regexp -nocase \
	     {(^|\n)Access-Control-Request-Private-Network:[ \t]*true[ \t\r]*(\n|$)} \
	     $request]} {
	append header "Access-Control-Allow-Private-Network: true\n"
    }

    return $header
}

proc xmlrpcDoRequest {sock} {
    global xmlrpc

    if {![info exists xmlrpc(request,$sock)]} {
	catch {close $sock}
	return
    }

    if {[catch {set buff [read $sock]}]} {
	xmlrpcRequestTimeout $sock
	return
    }
    append xmlrpc(request,$sock) $buff

    set request $xmlrpc(request,$sock)
    set nindex [string first "\n\n" $request]
    set bindex [string first "\r\n\r\n" $request]
    if {$nindex >= 0 && ($bindex < 0 || $nindex < $bindex)} {
	set headerStatus [string range $request 0 [expr {$nindex - 1}]]
	set body [string range $request [expr {$nindex + 2}] end]
    } elseif {$bindex >= 0} {
	set headerStatus [string range $request 0 [expr {$bindex - 1}]]
	set body [string range $request [expr {$bindex + 4}] end]
    } else {
	if {[eof $sock]} {
	    xmlrpcRequestTimeout $sock
	}
	return
    }

    set RE "\[^\n\]+\n(.*)"
    if {![regexp $RE $headerStatus {} header]} {
	xmlrpcRequestTimeout $sock
	return
    }

    # CORS preflight
    set	RE "OPTIONS"
    if {[regexp $RE $headerStatus {}]} {
	catch {after cancel $xmlrpc(request,timeout,$sock)}
	unset xmlrpc(request,timeout,$sock)
	unset xmlrpc(request,$sock)
	fileevent $sock readable {}

	set header [xmlrpcPreflightResponse $headerStatus]

	catch {
	    puts -nonewline $sock $header
	    flush $sock
	}
	catch {close $sock}
	return
    }

    set res [xmlrpcParseHTTPHeaders $header]
    set headersl [lindex $res 1]
    set expLenl [xmlrpcAssoc "Content-Length" $headersl]
    if {$expLenl == {}} {
	xmlrpcRequestTimeout $sock
	return
    }

    set expLen [lindex $expLenl 1]
    set bodyLen [string length $body]
    if {$bodyLen < $expLen} {
	if {[eof $sock]} {
	    xmlrpcRequestTimeout $sock
	}
	return
    }
    if {$bodyLen > $expLen} {
	set body [string range $body 0 [expr {$expLen - 1}]]
    }

    catch {after cancel $xmlrpc(request,timeout,$sock)}
    unset xmlrpc(request,timeout,$sock)
    unset xmlrpc(request,$sock)
    fileevent $sock readable {}

    if {$xmlrpc(debug)} {
	puts "***INCOMING Request***"
	puts $body
    }

    if {$xmlrpc(parser)} {
	# debug- set body "debug on\n$body"
	set in [string map {< " <" > "> "} $body]

	# can we parse it?
	if {[catch {xmlrpc parse in out}]} {
	    # ERROR
	    catch {close $sock}
	    return
	}
	# do we have a valid list?
	if {[catch {set rpc [expr $out]}]} {
	    # ERROR
	    catch {close $sock}
	    return
	}
    } else {
	xmlrpcParseXML $body
	global parse
	set rpc $parse(result)
    }

    set tag [lindex [lindex $rpc 0] 0]

    # methodcall
    set rpc [lindex $rpc 1]

    # methodname
    set mname [lindex [lindex $rpc 0] 1]
    set rpc [lindex $rpc 1]

    # params
    set params $rpc
    
    # sanity check on mname
    # should be of form xxxx.yyyy.zzzz
    if {[llength [split $mname {.}]]==1} {
	# ERROR
	catch {close $sock}
	return
    }

    set xmlrpc(sock) $sock
    if {[catch {set result [eval $mname [list $params]]}]} {
	# needed for sampwebhub
	global errorCode
	if {$errorCode == "abort"} {
	    return
	}
	set res [xmlrpcBuildFault 1 "$mname failed"]
    } else {
	set res [xmlrpcBuildResponse $result]
    }
    set xmlrpc(sock) {}
    
    catch {
	puts -nonewline $sock $res
	flush $sock
    }
    catch {close $sock}
}

proc xmlrpcResponse {rpc} {
    global xmlrpc

    # build the body
    set body [xmlrpcParseRPC $rpc]

    if {$xmlrpc(debug)} {
	puts "***OUTGOING Reponse***"
	puts $body
    }

    # build the header
    set	header "HTTP/1.1 200 OK\n"
    append	header "Content-Type: text/xml\n"
    append	header "Content-length: [string length $body]\n"
    # needed for CORS
    append	header "Access-Control-Allow-Origin: *\n"

    set result "$header\n$body"
    return $result
}

proc xmlrpcBuildResponse {params} {
    set rpc [list methodResponse $params]
    return [xmlrpcResponse $rpc]
}

proc xmlrpcBuildFault {errcode errmsg} {
    set rpc [list methodResponse [list fault [list value [list struct [list [list member [list [list name faultCode] [list value [list int $errcode]]]] [list member [list [list name faultString] [list value $errmsg]]]]]]]]
    return [xmlrpcResponse $rpc]
}

proc xmlrpcReadHeader {sock} {
    set buffer {}
    while {1} {
	if {[catch {set buff [xmlrpcNBRead $sock]}]} {
	    return {}
	}
	append buffer $buff
	set nindex [string first "\n\n" $buffer]
	if {$nindex > 0} {
	    break
	}
	set bindex [string first "\r\n\r\n" $buffer]
	if {$bindex > 0} {
	    break
	}
    }
    if {$nindex > 0} {
	set header [string range $buffer 0 [expr $nindex - 1]]
	set body [string range $buffer [expr $nindex + 2] end]
    } elseif {$bindex > 0} {
	set header [string range $buffer 0 [expr $bindex - 1]]
	set body [string range $buffer [expr $bindex + 4] end]
    }
    return [list $header $body]
}

proc xmlrpcReadBody {body expLen sock} {
    set newbody $body
    while {1} {
	if {[catch {set buff [xmlrpcNBRead $sock]}]} {
	    return [xmlrpcError "Premature eof"]
	}
	append newbody $buff
	set bodLen [string length $newbody]
	if {$bodLen == $expLen} {
	    break
	} elseif {$bodLen > $expLen} {
	    return [xmlrpcError "Content-length:$expLen does not match Body Length:$bodLen"]
	}
    }
    return $newbody
}

proc xmlrpcGetBody {sock header body} {
    set res [xmlrpcParseHTTPHeaders $header]
    set headersl [lindex $res 1];		# A-list of headers

    set expLenl [xmlrpcAssoc "Content-Length" $headersl]
    if {$expLenl == {}} {
	return {}
    }
    set expLen [lindex $expLenl 1]
    set body [xmlrpcReadBody $body $expLen $sock]
    return $body
}

proc xmlrpcNBRead {fd} {
    fileevent $fd readable ""
    set buffer ""
    while {1} {
	if {[eof $fd]} {
	    if {$buffer == {}} {
		return -code error "Premature eof"
	    }
	    break
	}
	set temp [read $fd 4096]
	if {$temp == ""} {
	    break
	}
	append buffer $temp
    }
    return $buffer
}

# CALL

proc xmlrpcCall {url method methodName params} {
    global xmlrpc

    set cnt $xmlrpc(cnt)
    incr xmlrpc(cnt)

    set RE {http://([^:]+):([0-9]+)}
    if {![regexp $RE $url {} host port]} {
	# ERROR
	return
    }

    set sock [socket $host $port]

    set xmlrpc(done,$cnt) 0
    set xmlrpc(result,$cnt) {}
    set xmlrpc(buffer,$cnt) {}

    fconfigure $sock -translation {lf lf} -buffersize 4096
    fconfigure $sock -blocking off
    if {[catch {set request [xmlrpcBuildRequest $method $methodName $params]}]} {
	# ERROR
	catch {close $sock}
	unset xmlrpc(done,$cnt)
	unset xmlrpc(result,$cnt)
	unset xmlrpc(buffer,$cnt)
	return
    }
    puts $sock $request
    flush $sock

    fileevent $sock readable [list xmlrpcGetResponse $sock $cnt]
    set timeoutId [after $xmlrpc(timeout) [list xmlrpcCallTimeout $sock $cnt]]
    vwait xmlrpc(done,$cnt)
    after cancel $timeoutId

    set ss $xmlrpc(done,$cnt)
    set rr $xmlrpc(result,$cnt)

    unset xmlrpc(done,$cnt)
    unset xmlrpc(result,$cnt)
    unset xmlrpc(buffer,$cnt)

    if {$ss > 0} {
	return $rr
    } else {
	return -code error "XML-RPC request timed out"
    }
}

proc xmlrpcCallTimeout {sock cnt} {
    global xmlrpc

    if {![info exists xmlrpc(done,$cnt)] || $xmlrpc(done,$cnt) != 0} {
	return
    }

    catch {fileevent $sock readable {}}
    catch {close $sock}
    set xmlrpc(result,$cnt) {}
    set xmlrpc(done,$cnt) -1
}

proc xmlrpcBuildRequest {method mname params} {
    global xmlrpc
    
    set rpc [list methodCall [list [list methodName $mname] $params]]
    # build the body
    set body [xmlrpcParseRPC $rpc]

    if {$xmlrpc(debug)} {
	puts "***OUTGOING Request***"
	puts $body
    }

    # build the header
    set	header "POST /$method HTTP/1.0\n"
    append	header "Content-Type: text/xml\n"
    append	header "Content-length: [string length $body]\n"

    set result "$header\n$body" 
    return [string trim $result]
}

proc xmlrpcParseHTTPCode {str} {
    set DIGIT "\[0-9\]";		# Digit

    set	RE "HTTP/";				# HTTP message
    append	RE "($DIGIT+\\.*$DIGIT*).";		# version
    append	RE "($DIGIT+).";			# status code
    append	RE "(\[^\n\]+)\n(.*)";			# status message

    if {![regexp $RE $str {} vern status code rest]} {
	return [xmlrpcError "Unrecognized HTTP code:\n$str"]
    }
    if {$status != "200"} {
	if {$xmlrpc(debug)} {
	    return [xmlrpcError "Bad HTTP status: $status"]
	} else {
	    return
	}
    }
    return $rest
}

proc xmlrpcParseHTTPHeaders {str} {
    set headers {}
    set remain {}
    set remainp 0
    set RE {([^:]+):(.*)}

    set parts [split $str "\n"]
    foreach {part} $parts {
	if {$part == ""
	    && !$remainp} {
	    set remainp 1
	    continue
	}
	if {$remainp} {
	    lappend remain $part
	    continue
	}
	if {![regexp $RE $part {} key value]} {
	    return [xmlrpcError "Unrecognized HTTP Header format: $part"]
	}
	set value [string trim $value]
	lappend headers [list $key $value]
    }
    set rest [join $remain "\n"]
    return [list $rest $headers]
}

proc xmlrpcGetResponse {sock cnt} {
    global xmlrpc

    if {![info exists xmlrpc(done,$cnt)] || $xmlrpc(done,$cnt) != 0} {
	catch {close $sock}
	return
    }

    if {[catch {set buff [read $sock]}]} {
	xmlrpcCallTimeout $sock $cnt
	return
    }
    append xmlrpc(buffer,$cnt) $buff

    set buffer $xmlrpc(buffer,$cnt)
    set nindex [string first "\n\n" $buffer]
    set bindex [string first "\r\n\r\n" $buffer]
    if {$nindex >= 0 && ($bindex < 0 || $nindex < $bindex)} {
	set headerStatus [string range $buffer 0 [expr {$nindex - 1}]]
	set body [string range $buffer [expr {$nindex + 2}] end]
    } elseif {$bindex >= 0} {
	set headerStatus [string range $buffer 0 [expr {$bindex - 1}]]
	set body [string range $buffer [expr {$bindex + 4}] end]
    } else {
	if {[eof $sock]} {
	    xmlrpcCallTimeout $sock $cnt
	}
	return
    }

    set header [xmlrpcParseHTTPCode $headerStatus]
    set res [xmlrpcParseHTTPHeaders $header]
    set headersl [lindex $res 1]
    set expLenl [xmlrpcAssoc "Content-Length" $headersl]
    if {$expLenl == {}} {
	xmlrpcCallTimeout $sock $cnt
	return
    }

    set expLen [lindex $expLenl 1]
    set bodyLen [string length $body]
    if {$bodyLen < $expLen} {
	if {[eof $sock]} {
	    xmlrpcCallTimeout $sock $cnt
	}
	return
    }
    if {$bodyLen > $expLen} {
	set body [string range $body 0 [expr {$expLen - 1}]]
    }

    set xmlrpc(result,$cnt) [xmlrpcParseResponse $body]
    catch {fileevent $sock readable {}}
    catch {close $sock}
    set xmlrpc(done,$cnt) 1
}

proc xmlrpcParseResponse {body} {
    global xmlrpc

    if {$xmlrpc(debug)} {
	puts "***INCOMING Response***"
	puts $body
    }
    
    if {$xmlrpc(parser)} {
	# debug- set body "debug on\n$body"
	set in [string map {< " <" > "> "} $body]

	# can we parse it?
	if {[catch {xmlrpc parse in out}]} {
	    # ERROR
	    return
	}
	# do we have a valid list?
	if {[catch {set rpc [expr $out]}]} {
	    # ERROR
	    return
	}
    } else {
	xmlrpcParseXML $body
	global parse
	set rpc $parse(result)
    }
    
    # rm methodResponse
    set rpc [lindex $rpc 1]

    set tag [string tolower [lindex $rpc 0]]
    switch $tag {
	params -
	fault {
	    return [lindex $rpc 1]
	}
    }
}

proc xmlrpcAssoc {key list} {
    foreach {cons} $list {
	set tkey [lindex $cons 0]
	if {[string tolower $key] == [string tolower $tkey]} {
	    return $cons
	}
    }
    return {}
}

proc xmlrpcError {msg} {
    puts $msg
}

proc xmlrpcParseXML {data} {
#    puts "IN COMING"
#    puts $data

    # space out < and >
    # shift \n to \r (multi line strings)
    set data [string map {< " <" > "> " \n \r} $data]

    xmlrpc::YY_FLUSH_BUFFER
    xmlrpc::yy_scan_string $data
    xmlrpc::yyparse
}

proc xmlrpcList2Member {ll} {
    set ms {}
    foreach {key val} $ll {
	lappend ms [list member [list [list name [list $key]] [list value $val]]]
    }
    return $ms
}

proc xmlrpcList2Array {ll} {
    set ms {}
    foreach {val} $ll {
	lappend ms [list value [list string $val]]
    }
    return [list array [list data $ms]]
}

proc xmlrpcParams2List {rpc varname} {
    upvar $varname var

    # params
    set rpc [lindex $rpc 1]

    # each param
    foreach pp $rpc {
	xmlrpcParam2List [lindex $pp 1] var
    }
}

proc xmlrpcParam2List {rpc varname} {
    upvar $varname var

    set tag [lindex $rpc 0]

#    puts "rpc=$rpc"
#    puts "tag=$tag"

    switch $tag {
	value {
	    set rr [lindex $rpc 1]
	    xmlrpcParam2List $rr var
	}
	struct {
	    set vvar {}
	    xmlrpcStruct2List $rpc vvar
	    lappend var $vvar
	}
	array {
	    set vvar {}
	    xmlrpcArray2List $rpc vvar
	    lappend var $vvar
	}
	default {
	    set rr [lindex $rpc 1]
	    lappend var $rr
	}
    }
}

proc xmlrpcArray2List {rpc varname} {
    upvar $varname var
    
    set tag [lindex [lindex $rpc 0] 0]

#   puts "rpc=$rpc"
#   puts "tag=$tag"

    switch $tag {
	value {
	    set rr [lindex $rpc 1]
	    xmlrpcArray2List $rr var
	}

	data {
	    set rr [lindex $rpc 1]
	    foreach pp $rr {
		xmlrpcArray2List $pp var
	    }
	}

	array {
	    set rr [lindex $rpc 1]
	    xmlrpcArray2List $rr var
	}

	default {
	    set rr [lindex $rpc 1]
	    lappend var $rr
	}
    }
}

proc xmlrpcStruct2List {rpc varname} {
    upvar $varname var

    set tag [lindex [lindex $rpc 0] 0]

#   puts "rpc=$rpc"
#   puts "tag=$tag"

    switch $tag {
	value {
	    set rr [lindex $rpc 1]
	    xmlrpcStruct2List $rr var
	}

	struct {
	    set rr [lindex $rpc 1]
	    set vvar {}
	    foreach pp $rr {
		xmlrpcStruct2List $pp vvar
	    }
	    lappend var $vvar
	}

	member {
	    set rr [lindex $rpc 1]
	    xmlrpcStruct2List [lindex $rr 0] var
	    xmlrpcStruct2List [lindex $rr 1] var
	}

	name {
	    set rr [lindex $rpc 1]
	    lappend var $rr
	}

	default {
	    set rr [lindex $rpc 1]
	    lappend var $rr
	}
    }
}

proc xmlrpcParseRPC {rpc} {
    set result {<?xml version="1.0"?>}
    set space ""
    append result "\n[xmlrpcParseRPCp $rpc space]\n"
    return $result
}

proc xmlrpcParseRPCp {rpc varname} {
    upvar $varname spaceminus
    set space "$spaceminus  "

    set tag [lindex [lindex $rpc 0] 0]

    #puts "rpc=$rpc"
    #puts "tag=$tag"

    if {$tag == {}} {
	return
    }

    switch [string tolower $tag] {
	methodcall {
	    set rr [lindex $rpc 1]
	    return "$space<$tag>\n[xmlrpcParseRPCp $rr space]\n$space</$tag>"
	}

	methodresponse {
	    set rr [lindex $rpc 1]
	    return "$space<$tag>\n[xmlrpcParseRPCp $rr space]\n$space</$tag>"
	}

	fault {
	    set rr [lindex $rpc 1]
	    return "$space<$tag>\n[xmlrpcParseRPCp $rr space]\n$space</$tag>"
	}

	methodname {
	    set rr [lindex $rpc 1]
	    set val [lindex [lindex $rpc 0] 1]
	    return "$space<$tag>$val</$tag>\n[xmlrpcParseRPCp $rr space]"
	}
	
	params {
	    set rr [lindex $rpc 1]
	    set res "$space<$tag>\n"
	    foreach pp $rr {
		append res "[xmlrpcParseRPCp $pp space]\n"
	    }
	    append res "$space</$tag>"
	    return $res
	}

	param {
	    set rr [lindex $rpc 1]
	    return "$space<$tag>\n[xmlrpcParseRPCp $rr space]\n$space</$tag>"
	}

	value {
	    set rr [lindex $rpc 1]
	    return "$space<$tag>[xmlrpcParseRPCp $rr space]</$tag>"
	}

	struct {
	    set rr [lindex $rpc 1]
	    set res "\n$space<$tag>\n"
	    foreach pp $rr {
		append res "[xmlrpcParseRPCp $pp space]\n"
	    }
	    append res "$space</$tag>\n$spaceminus"
	    return $res
	}

	member {
	    set rr [lindex $rpc 1]
	    set res "$space<$tag>\n"
	    append res "[xmlrpcParseRPCp [lindex $rr 0] space]\n"
	    append res "[xmlrpcParseRPCp [lindex $rr 1] space]\n"
	    append res "$space</$tag>"
	    return $res
	}

	name {
	    set rr [lindex $rpc 1]
	    return "$space<$tag>$rr</$tag>"
	}

	array {
	    set rr [lindex $rpc 1]
	    return "\n$space<$tag>\n[xmlrpcParseRPCp $rr space]\n$space</$tag>\n$spaceminus"
	}

	data {
	    set rr [lindex $rpc 1]
	    set res "$space<$tag>\n"
	    foreach pp $rr {
		append res "[xmlrpcParseRPCp $pp space]\n"
	    }
	    append res "$space</$tag>"
	    return $res
	}

	string {
	    set rr [lindex $rpc 1]
	    return "<$tag>[XMLQuote $rr]</$tag>"
	}

	int {
	    set rr [lindex $rpc 1]
	    return "<$tag>$rr</$tag>"
	}

	default {
	    return [XMLQuote $rpc]
	}
    }
}
