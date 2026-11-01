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
# ms to wait for a complete incoming request
set xmlrpc(request,timeout) 15000
# ms to wait for the response to an outgoing call
set xmlrpc(call,timeout) 60000

proc xmlrpcServe {port} {
    return [socket -server xmlrpcServeOnce $port]
}

proc xmlrpcServeOnce {sock addr port} {
    global xmlrpc

    fconfigure $sock -translation {lf lf} -buffersize 4096
    fconfigure $sock -blocking off

    # requests are read incrementally from fileevents, so don't hold the
    # socket forever if one never completes
    set xmlrpc(request,$sock) {}
    set xmlrpc(request,timer,$sock) \
	[after $xmlrpc(request,timeout) [list xmlrpcDropRequest $sock]]
    fileevent $sock readable [list xmlrpcDoRequest $sock]
}

proc xmlrpcRequestDone {sock} {
    global xmlrpc

    catch {after cancel $xmlrpc(request,timer,$sock)}
    unset -nocomplain xmlrpc(request,timer,$sock)
    unset -nocomplain xmlrpc(request,$sock)
    catch {fileevent $sock readable {}}
}

proc xmlrpcDropRequest {sock} {
    xmlrpcRequestDone $sock
    catch {close $sock}
}

proc xmlrpcPreflightResponse {request} {
    # RFC 7230 requires CRLF line endings; some HTTP clients parse this
    # strictly and fail on bare LF
    set header "HTTP/1.1 204 No Content\r\n"
    append header "Access-Control-Allow-Origin: *\r\n"
    append header "Access-Control-Allow-Methods: POST, GET, OPTIONS\r\n"
    append header "Access-Control-Allow-Headers: Content-Type\r\n"

    # Private Network Access preflights require the local server to opt in.
    if {[regexp -nocase \
	     {(^|\n)Access-Control-Request-Private-Network:[ \t]*true[ \t\r]*(\n|$)} \
	     $request]} {
	append header "Access-Control-Allow-Private-Network: true\r\n"
    }

    return $header
}

proc xmlrpcDoRequest {sock} {
    global xmlrpc

    if {[catch {xmlrpcReadMessage $sock xmlrpc(request,$sock)} res]} {
	# ERROR
	xmlrpcDropRequest $sock
	return
    }
    if {$res == {}} {
	# wait for the rest
	return
    }
    xmlrpcRequestDone $sock

    set headerStatus [lindex $res 0];	# Header + Status
    set body [lindex $res 1];		# Body, if any

    set RE "\[^\n\]+\n(.*)"
    if {![regexp $RE $headerStatus {} header]} {
	# ERROR
	catch {close $sock}
	return
    }

    # CORS preflight
    set	RE "OPTIONS"
    if {[regexp $RE $headerStatus {}]} {
	set header [xmlrpcPreflightResponse $headerStatus]

	xmlrpcWriteResponse $sock $header
	return
    }

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

    xmlrpcWriteResponse $sock $res
}

# the peer may have hung up without waiting for the response; don't let
# that error escape to bgerror, which would block ds9 behind a dialog
proc xmlrpcWriteResponse {sock res} {
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
    # HTTP/1.0: this server always closes the socket after one response,
    # so it must not claim HTTP/1.1, which implies persistent connections
    # by default -- a keep-alive client would otherwise try to reuse a
    # socket we've already torn down and see its next request go unanswered
    #
    # RFC 7230 requires CRLF line endings; some HTTP clients (e.g.
    # Haskell's http-streams, used by the hsamp SAMP hub/client library)
    # parse this strictly and fail with a "not enough input"/incomplete
    # parse error when given bare LF -- verified directly against a real
    # http-streams client, which only succeeds once this is CRLF
    set	header "HTTP/1.0 200 OK\r\n"
    append	header "Content-Type: text/xml\r\n"
    append	header "Content-length: [string length $body]\r\n"
    # needed for CORS
    append	header "Access-Control-Allow-Origin: *\r\n"

    set result "$header\r\n$body"
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

# Read whatever is available on the (non-blocking) sock and append it to
# the buffer named by varname. Returns {header body} once the headers and
# Content-Length worth of body have arrived, {} if more is needed, and
# errors if the peer closed early. Called from fileevents, never loops
# waiting for data: busy-waiting here starves the event loop, which can be
# the very thing that has to write the rest of the message (eg when ds9
# talks to its own hub and the request overflows the socket buffer).
proc xmlrpcReadMessage {sock varname} {
    upvar #0 $varname buffer

    append buffer [read $sock]

    # a bare "\n\n" can legitimately occur inside the body itself (eg
    # the blank line our own pretty-printer emits for a params-less
    # methodCall), so we can't just prefer it over "\r\n\r\n" -- use
    # whichever separator actually occurs earliest in the buffer
    set nindex [string first "\n\n" $buffer]
    set bindex [string first "\r\n\r\n" $buffer]
    if {$bindex > 0 && ($nindex <= 0 || $bindex < $nindex)} {
	set header [string range $buffer 0 [expr $bindex - 1]]
	set body [string range $buffer [expr $bindex + 4] end]
    } elseif {$nindex > 0} {
	set header [string range $buffer 0 [expr $nindex - 1]]
	set body [string range $buffer [expr $nindex + 2] end]
    } else {
	if {[eof $sock]} {
	    error "Premature eof"
	}
	return
    }

    # no Content-Length (eg a CORS preflight) means no body
    set expLen 0
    set RE "\[^\n\]+\n(.*)"
    if {[regexp $RE $header {} headers]} {
	set res [xmlrpcParseHTTPHeaders $headers]
	set expLenl [xmlrpcAssoc "Content-Length" [lindex $res 1]]
	if {$expLenl != {}} {
	    set expLen [lindex $expLenl 1]
	}
    }
    if {![string is integer -strict $expLen]} {
	error "Bad Content-Length: $expLen"
    }

    if {[string length $body] < $expLen} {
	if {[eof $sock]} {
	    error "Premature eof"
	}
	return
    }
    return [list $header [string range $body 0 [expr $expLen - 1]]]
}

# CALL

proc xmlrpcCall {url method methodName params} {
    global xmlrpc

    set cnt $xmlrpc(cnt)
    incr xmlrpc(cnt)

    set RE {http://([^:]+):([0-9]+)}
    if {![regexp $RE $url {} host port]} {
	error "xmlrpcCall: bad url $url"
    }

    set sock [socket $host $port]

    set xmlrpc(done,$cnt) 0
    set xmlrpc(result,$cnt) {}
    set xmlrpc(buffer,$cnt) {}

    fconfigure $sock -translation {lf lf} -buffersize 4096
    fconfigure $sock -blocking off
    if {[catch {
	puts $sock [xmlrpcBuildRequest $method $methodName $params]
	flush $sock
    }]} {
	set xmlrpc(done,$cnt) -1
    } else {
	fileevent $sock readable [list xmlrpcGetResponse $sock $cnt]
	# don't wait forever on a peer that accepted but never answers
	set timer [after $xmlrpc(call,timeout) \
		       [list xmlrpcCallTimeout $sock $cnt]]
	vwait xmlrpc(done,$cnt)
	after cancel $timer
    }

    set ss $xmlrpc(done,$cnt)
    set rr $xmlrpc(result,$cnt)

    unset xmlrpc(done,$cnt)
    unset xmlrpc(result,$cnt)
    unset xmlrpc(buffer,$cnt)

    # callers catch this; returning {} would look like success
    if {$ss <= 0} {
	catch {close $sock}
	error "xmlrpcCall: $methodName failed"
    }
    return $rr
}

proc xmlrpcCallTimeout {sock cnt} {
    global xmlrpc

    if {![info exists xmlrpc(done,$cnt)] || $xmlrpc(done,$cnt) != 0} {
	return
    }
    catch {fileevent $sock readable {}}
    catch {close $sock}
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
    # RFC 7230 requires CRLF line endings; see xmlrpcResponse for why
    set	header "POST /$method HTTP/1.0\r\n"
    append	header "Content-Type: text/xml\r\n"
    append	header "Content-length: [string length $body]\r\n"

    set result "$header\r\n$body"
    return [string trim $result]
}

proc xmlrpcParseHTTPCode {str} {
    global xmlrpc

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

    if {[catch {xmlrpcReadMessage $sock xmlrpc(buffer,$cnt)} res]} {
	# ERROR
	catch {close $sock}
	set xmlrpc(done,$cnt) -1
	return
    }
    if {$res == {}} {
	# wait for the rest
	return
    }
    catch {close $sock}

    set headerStatus [lindex $res 0];	# Header + Status
    set body [lindex $res 1];		# Body, if any

    # non-200 status
    if {[xmlrpcParseHTTPCode $headerStatus] != {}} {
	set xmlrpc(result,$cnt) [xmlrpcParseResponse $body]
    }
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
