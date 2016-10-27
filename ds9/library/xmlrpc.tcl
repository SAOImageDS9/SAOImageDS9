# xmlrpc0.3
# Written by Eric Yeh
#
# Server API:
#	xmlrpc::serve
#	Note: all callable functions should be defined in the global scope
#
# Client API:
#	xmlrpc::call url methodName params
#		url is of the form "http://hostname:port"
#		methodName is the name of the method to call
#		and params is a list of arguments to the method
#		where each argument is a "typed tcl" value defined below
#	xmlrpc::buildRequest
#		return an XML-RPC client request
#	xmlrpc::marshall
#		return a marshalled "typed tcl" value
#	xmlrpc::unmarshall
#		return an unmarshalled "typed tcl" value
#	xmlrpc::assoc
#		return a cons of a list if the key matches
#
# Typed Tcl values:
# 	Because Tcl has no types for variables, all values will be represented
# 	as a 2 element tuple of the form:
# 	{type, value} where value is the original value
# 	and type is a string describing its type.
# 	Valid types (case sensitive, must be lowercase):
#		int
#		boolean
#		string
#		double
#		dateTime.iso8601
#		base64
#		struct
#		array
#	Note:
#		When marshalling dictionaries(tcl arrays), tcl has no
#		way of creating unnamed dictionaries.  Therefore,
#		the way to use a dictionary is to create it as normal,
#		and refer to its name in the "tcl type".
#		For example:
#			set dict(first) {string eric}
#			xmlrpc::marshall {struct dict}
#
#		the marshall procedure will attempt to "find" dict
#		using upvar(yuck!) and checking the global scope.
#
# Unmarshalling of a dictionary results in a 2 element
# list of the form (remaining, alist)
# where remaining is unused marshalled data (should be empty)
# and alist is an A-list.
# An A-list has the form:
# {key, datum} where key is the key and datum is its value.
# The method "assoc" is provided to access information from
# this data structure.  It behaves like the LISP assoc, in that
# it will return the (key, datum) pair if a match is found.

# TODO:
# -currently server functions can't return dictionaries
# -add more error handling
# -Check for [{}] in unmarshalling
# -Empty dictionaries

package provide xmlrpc 0.3

namespace eval xmlrpc {
    namespace	export call buildRequest marshall unmarshall assoc
    namespace	export serve

    variable	READSIZE 4096;		# read size

    variable	WS	"\[ |\n|\t\|\r]";	# WhiteSpace
    variable	W	"\[^ |\n|\t\]";		# a word with no spaces
    variable	DIGIT	"\[0-9\]";		# Digit

    variable	response	"";		# response to return
    variable	acceptfd	"";		# socket to listen on
    variable	DEBUG		0;		# debug
}

# Given a port, create a new socket
# and start listening on it
#
proc xmlrpc::serve {port} {
    variable	acceptfd

    set acceptfd [socket -server xmlrpc::serveOnce $port]
    return $acceptfd
}

# Accept a new connection
#
proc xmlrpc::serveOnce {sock addr port} {
    variable	READSIZE

    debug "in serveOnce: addr: $addr"
    debug "in serveOnce: port: $port"
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
    set headerStatus [lindex $res 0];	# Header + Status
    set body [lindex $res 1];		# Body, if any

    set RE "\[^\n\]+\n(.*)"
    if {![regexp $RE $headerStatus {} header]} {
	return [errReturn "Malformed Request"]
    }

    set body [getBody $sock $header $body]

    set	RE "<\?xml.version=.";			# xml version
    append	RE "\[^\?\]+.\?>$WS*";			# version number
    append	RE "<methodCall>$WS*";			# methodCall tag
    append	RE "<methodName>";			# methodName tag
    append	RE "(\[a-zA-Z0-9_:\/\\.\]+)";		# method Name
    append	RE "</methodName>$WS*";			# end methodName tag
    append	RE "(.*)";				# parameters, if any
    append	RE "</methodCall>.*";			# end methodCall tag

    if {![regexp $RE $body {} mname params]} {
	return [errReturn "Malformed methodCall"]
    }

    set args {}
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
    if {[catch {set result [eval ::$mname $args]}]} {
	set response [buildFault 100 "eval() failed"]
    } else {
	set response [buildResponse $result]
    }
    debug "in doRequest: response:\n$response"
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
    append	body "\t<params>\n"
    append	body "\t\t<param>\n"
    append	body [xmlrpc::marshall $result 3 2]
    append	body "\n\t\t</param>\n"
    append	body "\t</params>\n"
    append	body "</methodResponse>\n"

    set lenbod [string length $body]

    # build the header
    set	header "HTTP/1.1 200 OK\n"
    append	header "Content-Type: text/xml\n"
    append	header "Content-length: $lenbod\n"

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
    append	body "\t<fault>\n"
    append	body [xmlrpc::marshall {struct err} 2]
    append	body "\t</fault>\n"
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
    variable	response
    global		readdone
    global		xmlcall

    set readdone 0
    set xmlcall 1
    set RE {http://([^:]+):([0-9]+)}
    if {![regexp $RE $url {} host port]} {
	return [errReturn "Malformed URL"]
    }

    set sock [socket $host $port]
    fconfigure $sock -translation {lf lf} -buffersize $READSIZE
    fconfigure $sock -blocking off
    if {[catch {set request [buildRequest $method $methodName $params $ntabs $distance]}]} {
	return
    }
    puts -nonewline $sock $request
    flush $sock
    fileevent $sock readable [list xmlrpc::getResponse $sock]
    vwait readdone
    catch {close $sock}
    if {$readdone > 0} {
	return $response
    } else {
	return [errReturn "xmlrpc::call failed"]
    }
}

# Given a socket to read on,
# get and parse the response from the server
#
proc xmlrpc::getResponse {sock} {
    variable	response
    global		readdone

    set res [readHeader $sock]
    set headerStatus [lindex $res 0];	# Header + Status
    set body [lindex $res 1];		# Body, if any

    set header [parseHTTPCode $headerStatus]
    set body [getBody $sock $header $body]
    set response [parseResponse $body]
    set readdone 1
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
	return [errReturn "No Content-Length found"]
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
	    return [errReturn "Premature eof"]
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
    append	body "\t<methodName>$methodName</methodName>\n"
    if {$params != {}} {
	append body "\t\t<params>\n"
	foreach {param} $params {
	    append body "\t\t\t<param>\n"
	    append body [xmlrpc::marshall $param $ntabs $distance]
	    append body "\n\t\t\t</param>\n"
	}
	append body "\t\t</params>\n"
    }
    append	body "</methodCall>\n"
#    set body [regsub -all "\n" $body "\r\n"]
    set lenbod [string length $body]

    # build the header
    set	header "POST /$method HTTP/1.0\n"
    append	header "Content-Type: text/xml\n"
    append	header "Content-length: $lenbod\n"
#    set header [regsub -all "\n" $header "\r\n"]

#    set request "$header\r\n$body"
    set request "$header\n$body"
    return $request
}

# Given a "typed tcl" value
# return the marshalled representation
#
proc xmlrpc::marshall {param {ntabs 0} {distance 1}} {
    if {![validParam $param]} {
	return [errReturn "Malformed Parameter: $param"]
    }

    set strtabs ""
    for {set x 0} {$x < $ntabs} {incr x} {
	append strtabs "\t"
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
	append	str "$strtabs\t<struct>\n"
	foreach {k v} [array get dict] {
	    append 	str "$strtabs\t\t<member>\n"
	    append	str "$strtabs\t\t\t<name>$k</name>\n"
	    append 	str [marshall $v [expr $ntabs + 3] [expr $distance + 1]]
	    append	str "\n$strtabs\t\t</member>\n"
	}
	append	str "$strtabs\t</struct>\n"
	append	str "$strtabs</value>\n"
	return $str
    } elseif {$type == "array"} {
	set	str "$strtabs<value>\n"
	append	str "$strtabs\t<array>\n"
	append	str "$strtabs\t\t<data>\n"
	foreach el $val {
	    append	str [marshall $el [expr $ntabs + 3] [expr $distance + 1]]
	    append	str "\n"
	}
	append	str "$strtabs\t\t</data>\n"
	append	str "$strtabs\t</array>\n"
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
	# check for empty element
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

    if {$btag == "int" || $btag == "i4"} {
	set res [umInt $str]
    } elseif {$btag== "boolean"} {
	set res [umBool $str]
    } elseif {$btag == "string"} {
	set res [umString $str]
    } elseif {$btag == "double"} {
	set res [umDouble $str]
    } elseif {$btag == "dateTime.iso8601"} {
	set res [umDateTime $str]
    } elseif {$btag == "base64"} {
	set res [umBase64 $str]
    } elseif {$btag == "array"} {
	set res [umArray $str]
    } elseif {$btag == "struct"} {
	set res [umStruct $str]
    } else {
	#check for empty element
	if {[string range $btag 0 1]=={/}} {
	    set id [string first "]" $str ]
	    if {$id != -1} {
		set rest [string range $str $id end]
		set rest [string trim $rest]
		return [list $rest {}]
	    }
	}

	# return [errReturn "Unknown type: $str"]
	# assume string
	set id [string first "<" $str ]
	if {$id != -1} {
	    set vv [string range $str 0 [expr $id-1]]
	    set rr [string range $str $id end]
	    set str "<string>${vv}</string>${rr}"
	    set res [umString $str]
	} else {
	    return [errReturn "Unknown type: $str"]
	}
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
    append	RE "($W+?)$WS*";		# key
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

proc xmlrpc::debug {msg} {
    variable	DEBUG

    if {$DEBUG} {
	puts "$msg"
    }
}

proc xmlrpc::errReturn {msg} {
    warn $msg
    return -code error
}

proc xmlrpc::test {} {
    set person(first) {string "eric m"}
    set person(last) {string yeh}
    set employed(programmer) {struct person}

    #set xml [marshall {struct employed}]
    #set w [list {int 1}]
    #set q [list "array \{$w\}" {int 2} {string eric}]
    #puts [marshall "array \{$q\}"]

    #set xml [marshall {array {{int 1} {string {hello everybody}}}}]
    set xml [marshall {struct person}]
    debug "xml:\n$xml"
    set data [unmarshall $xml]
    debug "data: $data"
    set data [lindex $data 1]
    debug "data: $data"
    puts [assoc "first" $data]
}

#proc bgerror {error} {
#    global xmlcall
#    if {$xmlcall} {
#	global readdone
#	set readdone -1
#	set xmlcall 0
#    }
#}

#xmlrpc::test
