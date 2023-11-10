#  Copyright (C) 1999-2023
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

# SERVER

proc xmlrpcServe {port} {
    return [socket -server xmlrpcServeOnce $port]
}

proc xmlrpcServeOnce {sock addr port} {
    fconfigure $sock -translation {lf lf} -buffersize 4096
    fconfigure $sock -blocking off
    fileevent $sock readable [list xmlrpcDoRequest $sock]
}

proc xmlrpcDoRequest {sock} {
    set res [xmlrpcReadHeader $sock]
    if {$res == {}} {
	# ERROR
	return
    }

    set headerStatus [lindex $res 0];	# Header + Status
    set body [lindex $res 1];		# Body, if any

    set RE "\[^\n\]+\n(.*)"
    if {![regexp $RE $headerStatus {} header]} {
	# ERROR
	return
    }

    # CORS preflight
    set	RE "OPTIONS"
    if {[regexp $RE $headerStatus {}]} {
	set header "HTTP/1.1 204 No Content\n"
	append header "Access-Control-Allow-Origin: *\n"
	append header "Access-Control-Allow-Methods: POST, GET, OPTIONS\n"
	append header "Access-Control-Allow-Headers: Content-Type\n"

	puts -nonewline $sock $header
	flush $sock
	catch {close $sock}
	return
    }
    
    set body [xmlrpcGetBody $sock $header $body]
#    puts "***"
#    puts $body

    xml2rpc $body
    global parse
    set rpc $parse(result)

    set tag [lindex [lindex $rpc 0] 0]

    # methodcall
    set rpc [lindex $rpc 1]

    # methodname
    set mname [lindex [lindex $rpc 0] 1]
    set rpc [lindex $rpc 1]

    # params
    set params $rpc

    if {[catch {set result [eval $mname $params]}]} {
	set res [xmlrpcBuildFault 1 "$mname failed"]
    } else {
	set res [xmlrpcBuildResponse $result]
    }
    
    puts -nonewline $sock $res
    flush $sock
    catch {close $sock}
}

proc xmlrpcResponse {rpc} {
    # build the body
    set body [rpc2xml $rpc]
    
    # build the header
    set	header "HTTP/1.1 200 OK\n"
    append	header "Content-Type: text/xml\n"
    append	header "Content-length: [string length $body]\n"
    # needed for CORS
    append	header "Access-Control-Allow-Origin: *\n"

    set result "$header\n$body"
    return [string trim $result]
}

proc xmlrpcBuildResponse {rpc} {
    set rpc [list methodResponse [list params $rpc]]
    return [xmlrpcResponse $rpc]
}

proc xmlrpcBuildFault {errcode errmsg} {
    set rpc [list value [list struct [list member [list name $errcode] [list value $errmsg]]]]
    set rpc [list methodResponse [list fault $rpc]]
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
	    return [errReturn "Premature eof"]
	}
	append newbody $buff
	set bodLen [string length $newbody]
	if {$bodLen == $expLen} {
	    break
	} elseif {$bodLen > $expLen} {
	    return [errReturn "Content-length:$expLen does not match Body Length:$bodLen"]
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
	    catch {close $fd}
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
    global xmlresponse
    global xmlreaddone

    set RE {http://([^:]+):([0-9]+)}
    if {![regexp $RE $url {} host port]} {
	# ERROR
	return
    }

    set sock [socket $host $port]
    set xmlreaddone($sock) 0
    set xmlresponse($sock) {}

    fconfigure $sock -translation {lf lf} -buffersize 4096
    fconfigure $sock -blocking off
    if {[catch {set request [xmlrpcBuildRequest $method $methodName $params]}]} {
	# ERROR
	puts "OH NO"
	return
    }
    puts $sock $request
    flush $sock

    fileevent $sock readable [list xmlrpcGetResponse $sock]
    vwait xmlreaddone($sock)

    if {[catch {close $sock}]} {
	# someone is closing premature
	global errorInfo
	set errorInfo {}
    }

    set ss $xmlreaddone($sock)
    set rr $xmlresponse($sock)
    unset xmlreaddone($sock)
    unset xmlresponse($sock)

    if {$ss > 0} {
	return $rr
    } else {
	# ERROR
	return
    }
}

proc xmlrpcBuildRequest {method mname params} {
    set rpc [list methodCall [list [list methodName $mname] [list params $params]]]
    # build the body
    set body [rpc2xml $rpc]

    # build the header
    set	header "POST /$method HTTP/1.0\n"
    append	header "Content-Type: text/xml\n"
    append	header "Content-length: [string length $body]\n"

    set result "$header\n$body" 
#    puts "***"
#    puts $result
    
    return [string trim $result]
}

proc xmlrpcParseHTTPCode {str} {
    set DIGIT "\[0-9\]";		# Digit

    set	RE "HTTP/";				# HTTP message
    append	RE "($DIGIT+\\.*$DIGIT*).";		# version
    append	RE "($DIGIT+).";			# status code
    append	RE "(\[^\n\]+)\n(.*)";			# status message

    if {![regexp $RE $str {} vern status code rest]} {
	return [errReturn "Unrecognized HTTP code:\n$str"]
    }
    if {$status != "200"} {
	return [errReturn "Bad HTTP status: $status"]
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
	    return [errReturn "Unrecognized HTTP Header format: $part"]
	}
	set value [string trim $value]
	lappend headers [list $key $value]
    }
    set rest [join $remain "\n"]
    return [list $rest $headers]
}

proc xmlrpcGetResponse {sock} {
    global xmlresponse
    global xmlreaddone

    set res [xmlrpcReadHeader $sock]
    set headerStatus [lindex $res 0];	# Header + Status
    set body [lindex $res 1];		# Body, if any

    set header [xmlrpcParseHTTPCode $headerStatus]
    set body [xmlrpcGetBody $sock $header $body]
    set xmlresponse($sock) [xmlrpcParseResponse $body]
    set xmlreaddone($sock) 1
}

proc xmlrpcParseResponse {body} {
#    puts "***"
#    puts $body
    
    xml2rpc $body
    global parse
    set rpc $parse(result)
    
    # rm methodResponse
    set rpc [lindex $rpc 1]

    set tag [string tolower [lindex $rpc 0]]
    switch $tag {
	params {
	    # rm <params>
	    set rpc [lindex $rpc 1]

	    # rm list
	    set rpc [lindex $rpc 0]

	    # <param>
	    set rpc [lindex $rpc 1]
	    return $rpc
	}
	fault {
	    # fault
	    set rpc [lindex $rpc 1]
	    return $rpc
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

# XML2RPC

proc xml2rpc {data} {
    # space out < and >
    # rm any newlines (multi line strings)
    set data [string map {< " <" > "> " \n {}} $data]

    xmlrpc::YY_FLUSH_BUFFER
    xmlrpc::yy_scan_string $data
    xmlrpc::yyparse
}

# RPC2XML

proc list2rpcStruct {ll} {
    set ms {}
    foreach {key val} $ll {
	lappend ms [list member [list [list name [list $key]] [list value $val]]]
    }
    return [list value [list struct $ms]]
}

proc rpcStruct2List {rpc varname} {
    upvar $varname var
    
    set tag [lindex [lindex $rpc 0] 0]

#   puts "rpc=$rpc"
#   puts "tag=$tag"

    switch $tag {
	value {
	    set rr [lindex $rpc 1]
	    rpcStruct2List $rr var
	}

	struct {
	    set rr [lindex $rpc 1]
	    foreach pp $rr {
		rpcStruct2List $pp var
	    }
	}

	member {
	    set rr [lindex $rpc 1]
	    rpcStruct2List [lindex $rr 0] var
	    rpcStruct2List [lindex $rr 1] var
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

proc rpc2xml {rpc} {
    set result {<?xml version="1.0"?>}
    append result "\n[rpc2xmlproc $rpc]\n"
#    puts "***"
#    puts $result
    return $result
}

proc rpc2xmlproc {rpc} {
    set level [expr [info level]-3]
    set space {}
    for {set ii 0} {$ii<$level} {incr ii} {
	append space "  "
    }

    set tag [lindex [lindex $rpc 0] 0]

#   puts "rpc=$rpc"
#   puts "tag=$tag"

    if {$tag == {}} {
	return
    }

    switch [string tolower $tag] {
	methodcall {
	    set rr [lindex $rpc 1]
	    return "$space<$tag>\n[rpc2xmlproc $rr]\n$space</$tag>"
	}

	methodresponse {
	    set rr [lindex $rpc 1]
	    return "$space<$tag>\n[rpc2xmlproc $rr]\n$space</$tag>"
	}

	fault {
	    set rr [lindex $rpc 1]
	    return "$space<$tag>\n[rpc2xmlproc $rr]\n$space</$tag>"
	}

	methodname {
	    set rr [lindex $rpc 1]
	    set val [lindex [lindex $rpc 0] 1]
	    return "$space<$tag>$val</$tag>\n[rpc2xmlproc $rr]"
	}
	
	params {
	    set rr [lindex $rpc 1]
	    set res "$space<$tag>\n"
	    foreach pp $rr {
		append res "[rpc2xmlproc $pp]\n"
	    }
	    append res "$space</$tag>"
	    return $res
	}

	param {
	    set rr [lindex $rpc 1]
	    return "$space<$tag>\n[rpc2xmlproc $rr]\n$space</$tag>"
	}

	value {
	    set rr [lindex $rpc 1]
	    return "$space<$tag>\n[rpc2xmlproc $rr]\n$space</$tag>"
	}

	struct {
	    set rr [lindex $rpc 1]
	    set res "$space<$tag>\n"
	    foreach pp $rr {
		append res "[rpc2xmlproc $pp]\n"
	    }
	    append res "$space</$tag>"
	    return $res
	}

	member {
	    set rr [lindex $rpc 1]
	    set res "$space<$tag>\n"
	    append res "[rpc2xmlproc [lindex $rr 0]]\n"
	    append res "[rpc2xmlproc [lindex $rr 1]]\n"
	    append res "$space</$tag>"
	    return $res
	}

	name {
	    set rr [lindex $rpc 1]
	    return "$space<$tag>$rr</$tag>"
	}

	array {
	    set rr [lindex $rpc 1]
	    return "$space<$tag>\n[rpc2xmlproc $rr]\n$space</$tag>"
	}

	data {
	    set rr [lindex $rpc 1]
	    set res "$space<$tag>\n"
	    foreach pp $rr {
		append res "[rpc2xmlproc $pp]\n"
	    }
	    append res "$space</$tag>"
	    return $res
	}

	default {
	    set rr [lindex $rpc 1]
	    return "$space<string>[XMLQuote $rr]</string>"
	}
    }
}

namespace eval xmlrpc {
    namespace export call buildRequest marshall unmarshall assoc
    namespace export serve

    variable	READSIZE 4096;
    variable	WS	"\[ |\n|\t\|\r]";	# WhiteSpace
    variable	W	"\[^ |\n|\t\]";		# a word with no spaces
    variable	DIGIT	"\[0-9\]";		# Digit
}

# Given a port, create a new socket
# and start listening on it
#
proc xmlrpc::serve {port} {
    return [socket -server xmlrpc::serveOnce $port]
}

# Accept a new connection
#
proc xmlrpc::serveOnce {sock addr port} {
    variable	READSIZE
    fconfigure $sock -translation {lf lf} -buffersize $READSIZE
    fconfigure $sock -blocking off
    fileevent $sock readable [list xmlrpc::doRequest $sock]
}

# Given a socket,
# Handle an XML-RPC request
#
proc xmlrpc::doRequest {sock} {
    variable	WS

    set res [readHeader $sock]
    if {$res == {}} {
	return
    }

    puts $res
    set headerStatus [lindex $res 0];	# Header + Status
    set body [lindex $res 1];		# Body, if any

    set RE "\[^\n\]+\n(.*)"
    if {![regexp $RE $headerStatus {} header]} {
	return [errReturn "Malformed Request"]
    }

    # CORS preflight
    set	RE "OPTIONS"
    if {[regexp $RE $headerStatus {}]} {
	set header "HTTP/1.1 204 No Content\n"
	append header "Access-Control-Allow-Origin: *\n"
	append header "Access-Control-Allow-Methods: POST, GET, OPTIONS\n"
	append header "Access-Control-Allow-Headers: Content-Type\n"

	puts -nonewline $sock $header
	flush $sock
	catch {close $sock}
	return
    }
    
    set	RE "<\?xml.version=.";			# xml version
    append	RE "\[^\?\]+.\?>$WS*";			# version number
    append	RE "<methodCall>$WS*";			# methodCall tag
    append	RE "<methodName>";			# methodName tag
    append	RE "(\[a-zA-Z0-9_:\/\\.\-\]+)";		# method Name
    append	RE "</methodName>$WS*";			# end methodName tag
    append	RE "(.*)";				# parameters, if any
    append	RE "</methodCall>.*";			# end methodCall tag

    set body [getBody $sock $header $body]
    if {![regexp $RE $body {} mname params]} {
	return [errReturn "Malformed methodCall"]
    }

    set args {}
    if {$params == {}} {
	# legal to have no params i.e. ping
	if {[catch {set result [eval ::$mname]}]} {
	    set response [buildFault 1 "$mname failed"]
	} else {
	    set response [buildResponse $result]
	}
	puts -nonewline $sock $response
	flush $sock
	catch {close $sock}
	return

    } else {
	set param [string range $params 8 end]
	set param [string trim $param]
	while {[string range $param 0 6] == "<param>" ||
	       [string range $param 0 7] == "</param>"} {
	    # check for empty element
	    if {[string range $param 0 7] == "</param>"} {
		lappend args {}
		set param [string range $param 8 end]
		set param [string trim $param]
		continue
	    }

	    set param [string range $param 7 end]
	    set param [string trim $param]

	    set res [unmarshall $param]
	    set param [lindex $res 0]
	    set el [lindex $res 1]
	    lappend args $el
	    if {[string range $param 0 7] != "</param>"} {
		return [errReturn "Invalid End Param"]
	    }
	    set param [string range $param 8 end]
	    set param [string trim $param]
	}
	if {$param != "</params>"} {
	    return [errReturn "Invalid End Params"]
	}
    }

    if {[catch {set result [eval $mname $args]}]} {
	set response [buildFault 1 "$mname failed"]
    } else {
	set response [buildResponse $result]
    }

    puts -nonewline $sock $response
    flush $sock
    catch {close $sock}
}

# Given a "typed tcl" value,
# build an XML-RPC response
#
proc buildResponse {result} {
    # build the body
    set	body "<?xml version=\"1.0\"?>\n"
    append	body "<methodResponse>\n"
    append	body "  <params>\n"
    append	body "    <param>\n"
    append	body [xmlrpc::marshall $result 3 2]
    append	body "\n    </param>\n"
    append	body "  </params>\n"
    append	body "</methodResponse>\n"

    set lenbod [string length $body]

    # build the header
    set	header "HTTP/1.1 200 OK\n"
    append	header "Content-Type: text/xml\n"
    append	header "Content-length: $lenbod\n"
    # needed for CORS
    append	header "Access-Control-Allow-Origin: *\n"

    set response "$header\n$body"
    return $response
    #return [string trim $response]
}

# Given an error code (integer)
# and an errmsg (string)
# build an XML-RPC fault
#
proc buildFault {errcode errmsg} {
    set err(faultCode) [list int $errcode]
    set err(faultString) [list string $errmsg]

    # build the body
    set	body "<?xml version=\"1.0\"?>\n"
    append	body "<methodResponse>\n"
    append	body "  <fault>\n"
    append	body [xmlrpc::marshall {struct err} 2]
    append	body "  </fault>\n"
    append	body "</methodResponse>\n"

    set lenbod [string length $body]

    # build the header
    set	header "HTTP/1.1 200 OK\n"
    append	header "Content-Type: text/xml\n"
    append	header "Content-length: $lenbod\n"

    set response "$header\n$body"
    return [string trim $response]
}

# send an XML-RPC request
#
proc xmlrpc::call {url method methodName params {ntabs 4} {distance 3}} {
    variable	READSIZE
    global xmlresponse
    global xmlreaddone

    set RE {http://([^:]+):([0-9]+)}
    if {![regexp $RE $url {} host port]} {
	return [errReturn "Malformed URL"]
    }

    set sock [socket $host $port]
    set xmlreaddone($sock) 0
    set xmlresponse($sock) {}

    fconfigure $sock -translation {lf lf} -buffersize $READSIZE
    fconfigure $sock -blocking off
    if {[catch {set request [buildRequest $method $methodName $params $ntabs $distance]}]} {
	return
    }
    puts -nonewline $sock $request
    flush $sock

    fileevent $sock readable [list xmlrpc::getResponse $sock]
    vwait xmlreaddone($sock)

    if {[catch {close $sock}]} {
	# someone is closing premature
	global errorInfo
	set errorInfo {}
    }

    set ss $xmlreaddone($sock)
    set rr $xmlresponse($sock)
    unset xmlreaddone($sock)
    unset xmlresponse($sock)

    if {$ss > 0} {
	return $rr
    } else {
	return [errReturn "xmlrpc::call failed"]
    }
}

# Given a socket to read on,
# get and parse the response from the server
#
proc xmlrpc::getResponse {sock} {
    global xmlresponse
    global xmlreaddone

    set res [readHeader $sock]
    set headerStatus [lindex $res 0];	# Header + Status
    set body [lindex $res 1];		# Body, if any

    set header [parseHTTPCode $headerStatus]
    set body [getBody $sock $header $body]
    set xmlresponse($sock) [parseResponse $body]
    set xmlreaddone($sock) 1
}

# Given a socket to read on,
# a string of header information
# and a string, body,
# return a string representing the entire body
#
proc xmlrpc::getBody {sock header body} {
    set res [parseHTTPHeaders $header]
    set headersl [lindex $res 1];		# A-list of headers

    set expLenl [assoc "Content-Length" $headersl]
    if {$expLenl == {}} {
	return {}
#	return [errReturn "No Content-Length found"]
    }
    set expLen [lindex $expLenl 1]
    set body [readBody $body $expLen $sock]
    return $body
}

# Given a socket to read on,
# Return a 2 element list of the form:
# {header, body} where both are strings
# Note: header will include the first line which is the status
#
proc xmlrpc::readHeader {sock} {
    set buffer ""
    while {1} {
	if {[catch {set buff [nbRead $sock]}]} {
	    return {}
#	    return [errReturn "Premature eof"]
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

# Given the body buffer,
# the number of bytes expected in the body (Content-Length)
# and a socket to read on,
# return the entire body buffer
#
proc xmlrpc::readBody {body expLen sock} {
    set newbody $body
    while {1} {
	if {[catch {set buff [nbRead $sock]}]} {
	    return [errReturn "Premature eof"]
	}
	append newbody $buff
	set bodLen [string length $newbody]
	if {$bodLen == $expLen} {
	    break
	} elseif {$bodLen > $expLen} {
	    return [errReturn "Content-length:$expLen does not match Body Length:$bodLen"]
	}
    }
    return $newbody
}

# Given a string, str,
# check the HTTP status
# and return the unused portion of str
#
proc xmlrpc::parseHTTPCode {str} {
    variable	DIGIT

    set	RE "HTTP/";				# HTTP message
    append	RE "($DIGIT+\\.*$DIGIT*).";		# version
    append	RE "($DIGIT+).";			# status code
    append	RE "(\[^\n\]+)\n(.*)";			# status message

    if {![regexp $RE $str {} vern status code rest]} {
	return [errReturn "Unrecognized HTTP code:\n$str"]
    }
    if {$status != "200"} {
	return [errReturn "Bad HTTP status: $status"]
    }
    return $rest
}

# Given a string, str,
# return a 2 element list of the form:
# {remaining, alist}
# where remaining is the unused portion of str
# and alist is an A-list of header information
#
proc xmlrpc::parseHTTPHeaders {str} {
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
	    return [errReturn "Unrecognized HTTP Header format: $part"]
	}
	set value [string trim $value]
	lappend headers [list $key $value]
    }
    set rest [join $remain "\n"]
    return [list $rest $headers]
}

# Given a string, str
# parse the response from the server
# returning the unmarshalled data
#
proc xmlrpc::parseResponse {str} {
    variable	WS

    set	RE "<\?xml.version=.";		# xml version
    append	RE "(\[^\?\]+).\?>$WS*";	# version number
    append	RE "<methodResponse>$WS*";	# method response tag
    append	RE "<params>$WS*";		# params tag
    append	RE "<param>$WS*";		# param tag
    append	RE "(<value>.*)";		# value
    append	RE "</param>$WS*";		# end param tag
    append	RE "</params>$WS*";		# end params tag
    append	RE "</methodResponse>";		# end method response tag

    if {![regexp $RE $str {} vern value]} {
	set	RE "<\?xml.version=.";		# xml version
	append	RE "(\[^\?\]+).\?>$WS*";	# version number
	append	RE "<methodResponse>$WS*";	# method response tag
	append	RE "<fault>$WS*";		# fault tag
	append	RE "(.*)$WS*";			# fault values
	append	RE "</fault>$WS*";		# end fault tag
	append	RE "</methodResponse>";		# end method response tag

	if {![regexp $RE $str {} vern value]} {
	    return [errReturn "Unrecognized response from server"]
	}
    }
    set result [unmarshall $value]
    return $result
}

# Given a non-blocking file descriptor, fd
# do a read
#
proc xmlrpc::nbRead {fd} {
    variable	READSIZE

    fileevent $fd readable ""
    set buffer ""
    while {1} {
	if {[eof $fd]} {
	    catch {close $fd}
	    break
	}
	set temp [read $fd $READSIZE]
	if {$temp == ""} {
	    break
	}
	append buffer $temp
    }
    return $buffer
}

# Given a methodName,
# and a list of parameters,
# return an XML-RPC request
#
proc xmlrpc::buildRequest {method methodName params {ntabs 4} {distance 2}} {
    # build the body
    set	body "<?xml version=\"1.0\"?>\n"
    append	body "<methodCall>\n"
    append	body "  <methodName>$methodName</methodName>\n"
    if {$params != {}} {
	append body "    <params>\n"
	foreach {param} $params {
	    append body "      <param>\n"
	    append body [xmlrpc::marshall $param $ntabs $distance]
	    append body "\n      </param>\n"
	}
	append body "    </params>\n"
    }
    append	body "</methodCall>\n"
    set lenbod [string length $body]

    # build the header
    set	header "POST /$method HTTP/1.0\n"
    append	header "Content-Type: text/xml\n"
    append	header "Content-length: $lenbod\n"

    set request "$header\n$body"
    return $request
}

# Given a "typed tcl" value
# return the marshalled representation
#
proc xmlrpc::marshall {param {ntabs 0} {distance 1}} {
    if {![validParam $param]} {
	return $param
#	return [errReturn "Malformed Parameter: $param"]
    }

    set strtabs ""
    for {set x 0} {$x < $ntabs} {incr x} {
	append strtabs "  "
    }

    set type [lindex $param 0]
    set val [lindex $param 1]

    if {$type == "int"} {
	return "$strtabs<value><int>$val</int></value>"
    } elseif {$type == "i4"} {
	return "$strtabs<value><i4>$val</i4></value>"
    } elseif {$type == "boolean"} {
	return "$strtabs<value><boolean>$val</boolean></value>"
    } elseif {$type == "string"} {
	return "$strtabs<value><string>$val</string></value>"
    } elseif {$type == "double"} {
	return "$strtabs<value><double>$val</double></value>"
    } elseif {$type == "dateTime.iso8601"} {
	return "$strtabs<value><dateTime.iso8601>$val</dateTime.iso8601></value>"
    } elseif {$type == "base64"} {
	return "$strtabs<value><base64>$val</base64></value>"
    } elseif {$type == "struct"} {
	# get the original caller's scope
	upvar $distance $val dict
	# try the global scope
	if {![array exists dict]} {
	    upvar #0 $val dict
	}

	set	str "$strtabs<value>\n"
	append	str "$strtabs  <struct>\n"
	foreach {k v} [array get dict] {
	    append 	str "$strtabs    <member>\n"
	    append	str "$strtabs      <name>$k</name>\n"
	    append 	str [marshall $v [expr $ntabs + 3] [expr $distance + 1]]
	    append	str "\n$strtabs    </member>\n"
	}
	append	str "$strtabs  </struct>\n"
	append	str "$strtabs</value>\n"
	return $str
    } elseif {$type == "array"} {
	set	str "$strtabs<value>\n"
	append	str "$strtabs  <array>\n"
	append	str "$strtabs    <data>\n"
	foreach el $val {
	    append	str [marshall $el [expr $ntabs + 3] [expr $distance + 1]]
	    append	str "\n"
	}
	append	str "$strtabs    </data>\n"
	append	str "$strtabs  </array>\n"
	append	str "$strtabs</value>\n"
	return $str
    } else {
	return [errReturn "Unknown type: $type"]
    }
}

# Given a value param,
# return 1 if it a valid parameter
# return 0 if not
# A valid parameter is a 2 element tuple
#
proc xmlrpc::validParam {param} {
    if {[llength $param] != 2} {
	return 0
    }
    return 1
}

# Given a marshalled value,
# unmarshall it and return it
#
proc xmlrpc::unmarshall {str} {
    set str [string trim $str]
    if {[string range $str 0 6] != "<value>"} {
	# check for just </value> element
	if {[string range $str 0 7] != "</value>"} {
	    return [errReturn "Bad value tag"]
	}
	set rest [string range $str 8 end]
	set rest [string trim $rest]
	return [list $rest {}]
    }

    set str [string range $str 7 end]
    set str [string trimleft $str]
    set RE {<([^>]+)>}
    if {![regexp $RE $str {} btag]} {
	return [errReturn "No beginning tag found: $str"]
    }

    switch $btag {
	int -
	i4 {set res [umInt $str]}
	boolean {set res [umBool $str]}
	string {set res [umString $str]}
	double {set res [umDouble $str]}
	dateTime.iso8601 {set res [umDateTime $str]}
	base64 {res [umBase64 $str]}
	array {set res [umArray $str]}
	struct {set res [umStruct $str]}

	"/value" {
	    # assume string
	    set id [string first "<" $str ]
	    if {$id != -1} {
		set vv [string range $str 0 [expr $id-1]]
		set rr [string range $str $id end]
		set str "<string>${vv}</string>${rr}"
		set res [umString $str]
	    }
	}

	"/string" {set res [list [string range $str 9 end] {}]}
	"/struct" {set res [list [string range $str 9 end] {}]}
	default {return [errReturn "Unknown type: $str"]}
    }
    set rest [lindex $res 0]
    set val [lindex $res 1]
    if {[string range $rest 0 7] != "</value>"} {
	return [errReturn "Invalid close of value tag"]
    }
    set rest [string range $rest 8 end]
    set rest [string trim $rest]
    return [list $rest $val]
}

proc xmlrpc::umInt {str} {
    variable	WS
    variable	DIGIT

    set	RE "<(int|i4)>$WS*";	# int tag
    append	RE "(-*)($DIGIT+)$WS*";	# int value
    append	RE "</(int|i4)>$WS*";	# end int tag
    append	RE "(.*)";		# leftover

    if {![regexp $RE $str {} tag negp digits engtag rest]} {
	return [errReturn "Invalid Integer"]
    }
    if {$negp != ""} {
	set digits [expr -1 * $digits]
    } else {
	set digits [expr 1 * $digits]
    }
    set rest [string trim $rest]
    return [list $rest $digits]
}

proc xmlrpc::umBool {str} {
    variable	WS

    set	RE "<boolean>$WS*";	# boolean tag
    append	RE "(0|1)$WS*";		# boolean value
    append	RE "</boolean>$WS*";	# end boolean tag
    append	RE "(.*)";		# leftover

    if {![regexp $RE $str {} bool rest]} {
	return [errReturn "Invalid Boolean"]
    }
    set rest [string trim $rest]
    return [list $rest $bool]
}

proc xmlrpc::umString {str} {
    variable	WS

    set	RE "<string>";		# string tag
    append	RE "(\[^<\]*)";		# string value
    append	RE "</string>$WS*";	# end string tag
    append	RE "(.*)";		# leftover

    if {![regexp $RE $str {} s rest]} {
	return [errReturn "Invalid String"]
    }
    set rest [string trim $rest]
    return [list $rest $s]
}

proc xmlrpc::umDouble {str} {
    variable	WS
    variable	DIGIT

    set	RE "<double>$WS*";			# double tag
    append	RE "(-*)($DIGIT*\.?$DIGIT*)$WS*";	# double value
    append	RE "</double>$WS*";			# end double tag
    append	RE "(.*)";				# leftover

    if {![regexp $RE $str {} negp d rest]} {
	return [errReturn "Invalid Double"]
    }
    if {$negp != ""} {
	set d [expr -1 * $d]
    } else {
	set d [expr 1 * $d]
    }
    set rest [string trim $rest]
    return [list $rest $d]
}

proc xmlrpc::umDateTime {str} {
    variable	WS
    variable	DIGIT

    set	RE "<dateTime\\.iso8601>$WS*";			# dateTime tag
    append	RE "($DIGIT+T$DIGIT+:$DIGIT+:$DIGIT+)$WS*";	# dateTime value
    append	RE "</dateTime\\.iso8601>$WS*";			# end string tag
    append	RE "(.*)";					# leftover

    if {![regexp $RE $str {} dateTime rest]} {
	return [errReturn "Invalid DateTime"]
    }
    set rest [string trim $rest]
    return [list $rest $dateTime]
}

proc xmlrpc::umBase64 {str} {
    variable	WS

    set	RE "<base64>";		# string tag
    append	RE "(\[^<\]*)";		# string value
    append	RE "</base64>$WS*";	# end string tag
    append	RE "(.*)";		# leftover

    if {![regexp $RE $str {} s rest]} {
	return [errReturn "Invalid Base64"]
    }
    set rest [string trim $rest]
    return [list $rest $s]
}

proc xmlrpc::umArray {str} {
    variable	WS

    set	RE "<array>$WS*";	# array tag
    append	RE "<data>$WS*";	# data tag
    append	RE "(.*)";		# leftover

    if {![regexp $RE $str {} rest]} {
	return [errReturn "Invalid Array"]
    }
    set l {}
    while {[string range $rest 0 6] == "<value>"} {
	set res [unmarshall $rest]
	set rest [lindex $res 0]
	set el [lindex $res 1]
	lappend l $el
    }

    set	REAREND "</data>$WS*";	# end data tag
    append	REAREND "</array>$WS*";	# end array tag
    append	REAREND "(.*)";		# leftover

    if {![regexp $REAREND $rest {} leftover]} {
	return [errReturn "Invalid End Array"]
    }
    return [list $leftover $l]
}

proc xmlrpc::umStruct {str} {
    variable	WS
    variable	W

    if {[string range $str 0 7] != "<struct>"} {
	return [errReturn "Invalid Struct"]
    }

    set	RE "<name>$WS*";	# name tag
    append	RE "($W*?)$WS*";		# key
    append	RE "</name>$WS*";	# end name tag
    append	RE "(<value>.*)";	# value tag

    set l {}
    set str [string range $str 8 end]
    set str [string trim $str]
    while {[string range $str 0 7] == "<member>"} {
	set str [string range $str 8 end]
	set str [string trim $str]
	if {![regexp $RE $str {} key val]} {
	    return [errReturn "Invalid Struct Member"]
	}
	set res [unmarshall $val]
	set str [lindex $res 0]
	set el [lindex $res 1]
	lappend l [list $key $el]
	if {[string range $str 0 8] != "</member>"} {
	    return [errReturn "Invalid End Struct Member"]
	}
	set str [string range $str 9 end]
	set str [string trim $str]
    }
    if {[string range $str 0 8] != "</struct>"} {
	return [errReturn "Invalid End Struct"]
    }
    set str [string range $str 9 end]
    set str [string trim $str]
    return [list $str $l]
}

# Given a key, and a list of elements where each element is of the form:
# {key, datum}, return {key, datum} if the requested key matches
# a key in the list.
# Returns the first match found in the list.
# Return {} on failure
#
proc xmlrpc::assoc {key list} {
    foreach {cons} $list {
	set tkey [lindex $cons 0]
	if {[string tolower $key] == [string tolower $tkey]} {
	    return $cons
	}
    }
    return {}
}

proc xmlrpc::warn {msg} {
    puts stderr $msg
}

proc xmlrpc::errReturn {msg} {
    warn $msg
    return -code error
}
