#  Copyright (C) 1999-2023
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

# Server

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
#    puts $mname
#    puts $params
    
    if {[catch {set result [eval $mname [list $params]]}]} {
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
    return $result
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
#    puts "2***"
#    puts $result
    
    return $result
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
	return [xmlrpcError "Bad HTTP status: $status"]
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
#    puts "3***"
#    puts $body
    
    xml2rpc $body
    global parse
    set rpc $parse(result)
    
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

proc list2rpcMember {ll} {
    set ms {}
    foreach {key val} $ll {
	lappend ms [list member [list [list name [list $key]] [list value $val]]]
    }
    return $ms
}

proc rpcParams2List {rpc varname} {
    upvar $varname var

    # params
    set rpc [lindex $rpc 1]

    # each param
    foreach pp $rpc {
	rpcParam2List [lindex $pp 1] var
    }
}

proc rpcParam2List {rpc varname} {
    upvar $varname var

    set tag [lindex $rpc 0]

#    puts "rpc=$rpc"
#    puts "tag=$tag"

    switch $tag {
	value {
	    set rr [lindex $rpc 1]
	    rpcParam2List $rr var
	}
	struct {
	    set vvar {}
	    rpcStruct2List $rpc vvar
	    lappend var $vvar
	}
	array {
	    set vvar {}
	    rpcArray2List $rpc vvar
	    lappend var $vvar
	}
	default {
	    set rr [lindex $rpc 1]
	    lappend var $rr
	}
    }
}

proc rpcArray2List {rpc varname} {
    upvar $varname var
    
    set tag [lindex [lindex $rpc 0] 0]

#   puts "rpc=$rpc"
#   puts "tag=$tag"

    switch $tag {
	value {
	    set rr [lindex $rpc 1]
	    rpcArray2List $rr var
	}

	data {
	    set rr [lindex $rpc 1]
	    foreach pp $rr {
		rpcArray2List $pp var
	    }
	}

	array {
	    set rr [lindex $rpc 1]
	    rpcArray2List $rr var
	}

	default {
	    set rr [lindex $rpc 1]
	    lappend var $rr
	}
    }
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
	    set vvar {}
	    foreach pp $rr {
		rpcStruct2List $pp vvar
	    }
	    lappend var $vvar
	}

	member {
	    set rr [lindex $rpc 1]
	    rpcStruct2List [lindex $rr 0] var
	    rpcStruct2List [lindex $rr 1] var
	}

	name {
	    set rr [lindex $rpc 1]
#	    puts "name=$rr"
	    lappend var $rr
	}

	default {
	    set rr [lindex $rpc 1]
#	    puts "value=$rr"
	    lappend var $rr
	}
    }
}

proc rpc2xml {rpc} {
    set result {<?xml version="1.0"?>}
    append result "\n[rpc2xmlproc $rpc]\n"
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
