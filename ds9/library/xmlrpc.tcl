#  Copyright (C) 1999-2024
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

# Server

global xmlrpccnt
global xmlrpcdone
global xmlrpcresult

set xmlrpccnt 0

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

    xml2rpc $body
    global parse
    set rpc $parse(result)

    # space out < and >
    # shift \n to \r (multi line strings)
    set foo "debug on\n$body"
#    set foo $body
    set in [string map {< " <" > "> "} $foo]
    puts $in
    set out {}
    xmlrpc parse in out

#    set rr [xmlxml $body]

    set tag [lindex [lindex $rpc 0] 0]

    # methodcall
    set rpc [lindex $rpc 1]

    # methodname
    set mname [lindex [lindex $rpc 0] 1]
    set rpc [lindex $rpc 1]

    # params
    set params $rpc
    
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
    set body [xmlrpc2xml $rpc]

#    puts "OUT GOING"
#    puts $body

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
    global xmlrpccnt
    global xmlrpcresult
    global xmlrpcdone

    set cnt $xmlrpccnt
    incr xmlrpccnt

    set RE {http://([^:]+):([0-9]+)}
    if {![regexp $RE $url {} host port]} {
	# ERROR
	return
    }

    set sock [socket $host $port]

    set xmlrpcdone($cnt) 0
    set xmlrpcresult($cnt) {}

    fconfigure $sock -translation {lf lf} -buffersize 4096
    fconfigure $sock -blocking off
    if {[catch {set request [xmlrpcBuildRequest $method $methodName $params]}]} {
	# ERROR
	return
    }
    puts $sock $request
    flush $sock

    fileevent $sock readable [list xmlrpcGetResponse $sock $cnt]
    vwait xmlrpcdone($cnt)

    set ss $xmlrpcdone($cnt)
    set rr $xmlrpcresult($cnt)

    unset xmlrpcdone($cnt)
    unset xmlrpcresult($cnt)

    catch {close $sock}

    if {$ss > 0} {
	return $rr
    } else {
	# ERROR
	return
    }
}

proc xmlrpcBuildRequest {method mname params} {
    set rpc [list methodCall [list [list methodName $mname] $params]]
    # build the body
    set body [xmlrpc2xml $rpc]

#    puts "OUT GOING"
#    puts $body

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

proc xmlrpcGetResponse {sock cnt} {
    global xmlrpcresult
    global xmlrpcdone

    set res [xmlrpcReadHeader $sock]
    set headerStatus [lindex $res 0];	# Header + Status
    set body [lindex $res 1];		# Body, if any

    set header [xmlrpcParseHTTPCode $headerStatus]
    set body [xmlrpcGetBody $sock $header $body]
    set xmlrpcresult($cnt) [xmlrpcParseResponse $body]
    set xmlrpcdone($cnt) 1
}

proc xmlrpcParseResponse {body} {
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
#    puts "IN COMING"
#    puts $data

    # space out < and >
    # shift \n to \r (multi line strings)
    set data [string map {< " <" > "> " \n \r} $data]

    xmlrpc::YY_FLUSH_BUFFER
    xmlrpc::yy_scan_string $data
    xmlrpc::yyparse
}

# XMLRPC2XML

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

proc xmlrpc2xml {rpc} {
    set result {<?xml version="1.0"?>}
    set space ""
    append result "\n[xmlrpc2xmlproc $rpc space]\n"
    return $result
}

proc xmlrpc2xmlproc {rpc varname} {
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
	    return "$space<$tag>\n[xmlrpc2xmlproc $rr space]\n$space</$tag>"
	}

	methodresponse {
	    set rr [lindex $rpc 1]
	    return "$space<$tag>\n[xmlrpc2xmlproc $rr space]\n$space</$tag>"
	}

	fault {
	    set rr [lindex $rpc 1]
	    return "$space<$tag>\n[xmlrpc2xmlproc $rr space]\n$space</$tag>"
	}

	methodname {
	    set rr [lindex $rpc 1]
	    set val [lindex [lindex $rpc 0] 1]
	    return "$space<$tag>$val</$tag>\n[xmlrpc2xmlproc $rr space]"
	}
	
	params {
	    set rr [lindex $rpc 1]
	    set res "$space<$tag>\n"
	    foreach pp $rr {
		append res "[xmlrpc2xmlproc $pp space]\n"
	    }
	    append res "$space</$tag>"
	    return $res
	}

	param {
	    set rr [lindex $rpc 1]
	    return "$space<$tag>\n[xmlrpc2xmlproc $rr space]\n$space</$tag>"
	}

	value {
	    set rr [lindex $rpc 1]
	    return "$space<$tag>[xmlrpc2xmlproc $rr space]</$tag>"
	}

	struct {
	    set rr [lindex $rpc 1]
	    set res "\n$space<$tag>\n"
	    foreach pp $rr {
		append res "[xmlrpc2xmlproc $pp space]\n"
	    }
	    append res "$space</$tag>\n$spaceminus"
	    return $res
	}

	member {
	    set rr [lindex $rpc 1]
	    set res "$space<$tag>\n"
	    append res "[xmlrpc2xmlproc [lindex $rr 0] space]\n"
	    append res "[xmlrpc2xmlproc [lindex $rr 1] space]\n"
	    append res "$space</$tag>"
	    return $res
	}

	name {
	    set rr [lindex $rpc 1]
	    return "$space<$tag>$rr</$tag>"
	}

	array {
	    set rr [lindex $rpc 1]
	    return "\n$space<$tag>\n[xmlrpc2xmlproc $rr space]\n$space</$tag>\n$spaceminus"
	}

	data {
	    set rr [lindex $rpc 1]
	    set res "$space<$tag>\n"
	    foreach pp $rr {
		append res "[xmlrpc2xmlproc $pp space]\n"
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

# TclXML

proc xmlxml {body} {
    global foo
    catch {unset foo}

    set foo(state) {}

    set foo(methodCall) {}
    set foo(methodResponse) {}

    set foo(params) {}
    
    set foo(data) {}
    
    set foo(xparam) {}
    set foo(members) {}
    set foo(name) {}

    set foo(values) {}

    set foo(stack,members) {}
    set foo(stack,name) {}
    set foo(stack,values) {}
    set foo(array) false

    # struct stack
    global stack
    set stack {}

    set xml [xml::parser \
		 -characterdatacommand [list xmlxmlCharCB] \
		 -elementstartcommand [list xmlxmlElemStartCB] \
		 -elementendcommand [list xmlxmlElemEndCB] \
		 -ignorewhitespace 1 \
		]

    if {[catch {$xml parse $body} err]} {
	puts "TclXML Parse error"
	return -code error
    }

    if {$foo(methodCall) != {}} {
	set result $foo(methodCall)
    } elseif {$foo(methodResponse) != {}} {
	set result $foo(methodResponse)
    }
    unset foo

    $xml free
    
    return $result
}

proc xmlxmlCharCB {data} {
    global foo

#    set data [string trim $data]

    switch $foo(state) {
	methodcall {}
	methodresponse {}

	methodname {set foo(vv) $data}

	fault {set foo(vv) $data}

	params {}
	param {}

	struct {}
	member {}
	name {set foo(vv) $data}

	array {}
	data {}

	string {set foo(vv) $data}
	integer {set foo(vv) $data}

	value {set foo(vv) $data}
    }
}

proc xmlxmlElemStartCB {name attlist args} {
    global foo
    
    set name [string tolower $name]
    switch $name {
	methodcall {
	    set foo(methodName) {}
	    set foo(params) {}
	}
	methodresponse {
	    set foo(params) {}
	    set foo(fault) {}
	}

	methodname {
	    set foo(vv) {}
	}

	fault {
	    set foo(vv) {}
	}

	params {
	    set foo(xparam) {}
	}
	param {
	    set foo(value) {}
	}

	struct {
	    xmlxmlPush $foo(members) foo(stack,members)
	    xmlxmlPush $foo(name) foo(stack,name)
	    set foo(members) {}
	    set foo(name) {}
	}
	member {
	    set foo(value) {}
	}
	name {
	    set foo(vv) {}
	}

	array {
	    set foo(data) {}
	    set foo(array) true
	}
	data {
	    xmlxmlPush $foo(values) foo(stack,values)
	    set foo(values) {}
	}

	string {
	    set foo(vv) {}
	}
	integer {
	    set foo(vv) {}
	}

	value {
	    set foo(type) {}
	}
    }

    set foo(state) $name
}

proc xmlxmlElemEndCB {name args} {
    global foo
    
    set name [string tolower $name]
    switch $name {
	methodcall {
	    if {$foo(methodName) != {} && $foo(params) != {}} {
		set foo(methodCall) \
		    [list $name [list $foo(methodName) $foo(params)]]
	    } else {
		set foo(methodCall) [list $name [list $foo(methodName)]]
	    }
	}
	methodresponse {
	    if {$foo(params) != {}} {
		set foo(methodResponse) [list $name $foo(params)]
		set foo(params) {}
	    } else if {$foo(fault) != {}} {
		set foo(methodResponse) [list $name $foo(fault)]
		set foo(fault) {}
	    }
	}

	methodname {
	    set foo(methodName) [list $name $foo(vv)]
	}

	fault {
	    set foo(fault) [list $name $foo(vv)]
	}

	params {
	    set foo(params) [list $name $foo(xparam)]
	}
	param {
	    lappend foo(xparam) [list $name $foo(value)]
	}

	struct {
	    set foo(type) [list $name $foo(members)]
	    set foo(members) [xmlxmlPop foo(stack,members)]
	    set foo(name) [xmlxmlPop foo(stack,name)]
	}
	member {
	    lappend foo(members) [list $name [list $foo(name) $foo(value)]]
	}
	name {
	    set foo(name) [list $name $foo(vv)]
	}

	array {
	    set foo(type) [list $name $foo(data)]
	    set foo(array) false
	}
	data {
	    set foo(data) [list $name $foo(values)]
	    set foo(values) [xmlxmlPop foo(stack,values)]
	}

	string {
	    set foo(type) [list $name [XMLUnQuote $foo(vv)]]
	}
	integer {
	    set foo(type) [list $name $foo(vv)]
	}

	value {
	    if {$foo(type) != {}} {
		set vv [list $name $foo(type)]
	    } else {
		# default string
		set vv [list $name [list string [XMLUnQuote $foo(vv)]]]
	    }

	    if {!$foo(array)} {
		set foo(value) $vv
	    } else {
		lappend foo(values) $vv
	    }
	}
    }

    set foo(state) {}
}

proc xmlxmlPush {item var} {
    upvar #0 $var stack

    lappend stack $item
}

proc xmlxmlPop {var} {
    upvar #0 $var stack

    set item [lindex $stack end] 
    set stack [lreplace $stack end end]
    return $item
}
