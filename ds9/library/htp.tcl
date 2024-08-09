package provide DS9 1.0
namespace eval ::http {}

# needed because Topcat does not set totalsize in meta
proc http::Event {sock token} {
    variable http
    variable socketMapping
    variable socketRdState
    variable socketWrState
    variable socketRdQueue
    variable socketWrQueue
    variable socketClosing
    variable socketPlayCmd

    variable $token
    upvar 0 $token state
    set tk [namespace tail $token]
    while 1 {
	yield
	##Log Event call - token $token

	if {![info exists state]} {
	    Log "Event $sock with invalid token '$token' - remote close?"
	    if {![eof $sock]} {
		if {[set d [read $sock]] ne ""} {
		    Log "WARNING: additional data left on closed socket\
			    - token $token"
		}
	    }
	    Log ^X$tk end of response (token error) - token $token
	    CloseSocket $sock
	    return
	}
	if {$state(state) eq "connecting"} {
	    ##Log - connecting - token $token
	    if {    $state(reusing)
		 && $state(-pipeline)
		 && ($state(-timeout) > 0)
		 && (![info exists state(after)])
	    } {
		set state(after) [after $state(-timeout) \
			[list http::reset $token timeout]]
	    }

	    if {[catch {gets $sock state(http)} nsl]} {
		Log "WARNING - if testing, pay special attention to this\
			case (GK) which is seldom executed - token $token"
		if {[info exists state(reusing)] && $state(reusing)} {
		    # The socket was closed at the server end, and closed at
		    # this end by http::CheckEof.

		    if {[TestForReplay $token read $nsl c]} {
			return
		    }

		    # else:
		    # This is NOT a persistent socket that has been closed since
		    # its last use.
		    # If any other requests are in flight or pipelined/queued,
		    # they will be discarded.
		} else {
		    Log ^X$tk end of response (error) - token $token
		    Finish $token $nsl
		    return
		}
	    } elseif {$nsl >= 0} {
		##Log - connecting 1 - token $token
		set state(state) "header"
	    } elseif {    [eof $sock]
		       && [info exists state(reusing)]
		       && $state(reusing)
	    } {
		# The socket was closed at the server end, and we didn't notice.
		# This is the first read - where the closure is usually first
		# detected.

		if {[TestForReplay $token read {} d]} {
		    return
		}

		# else:
		# This is NOT a persistent socket that has been closed since its
		# last use.
		# If any other requests are in flight or pipelined/queued, they
		# will be discarded.
	    }
	} elseif {$state(state) eq "header"} {
	    if {[catch {gets $sock line} nhl]} {
		##Log header failed - token $token
		Log ^X$tk end of response (error) - token $token
		Finish $token $nhl
		return
	    } elseif {$nhl == 0} {
		##Log header done - token $token
		Log ^E$tk end of response headers - token $token
		# We have now read all headers
		# We ignore HTTP/1.1 100 Continue returns. RFC2616 sec 8.2.3
		if {    ($state(http) == "")
		     || ([regexp {^\S+\s(\d+)} $state(http) {} x] && $x == 100)
		} {
		    set state(state) "connecting"
		    continue
		    # This was a "return" in the pre-coroutine code.
		}

		if {    ([info exists state(connection)])
		     && ([info exists socketMapping($state(socketinfo))])
		     && ("keep-alive" in $state(connection))
		     && ($state(-keepalive))
		     && (!$state(reusing))
		     && ($state(-pipeline))
		} {
		    # Response headers received for first request on a
		    # persistent socket.  Now ready for pipelined writes (if
		    # any).
		    # Previous value is $token. It cannot be "pending".
		    set socketWrState($state(socketinfo)) Wready
		    http::NextPipelinedWrite $token
		}

		# Once a "close" has been signaled, the client MUST NOT send any
		# more requests on that connection.
		#
		# If either the client or the server sends the "close" token in
		# the Connection header, that request becomes the last one for
		# the connection.

		if {    ([info exists state(connection)])
		     && ([info exists socketMapping($state(socketinfo))])
		     && ("close" in $state(connection))
		     && ($state(-keepalive))
		} {
		    # The server warns that it will close the socket after this
		    # response.
		    ##Log WARNING - socket will close after response for $token
		    # Prepare data for a call to ReplayIfClose.
		    if {    ($socketRdQueue($state(socketinfo)) ne {})
			 || ($socketWrQueue($state(socketinfo)) ne {})
			 || ($socketWrState($state(socketinfo)) ni
						[list Wready peNding $token])
		    } {
			set InFlightW $socketWrState($state(socketinfo))
			if {$InFlightW in [list Wready peNding $token]} {
			    set InFlightW Wready
			} else {
			    set msg "token ${InFlightW} is InFlightW"
			    ##Log $msg - token $token
			}

			set socketPlayCmd($state(socketinfo)) \
				[list ReplayIfClose $InFlightW \
				$socketRdQueue($state(socketinfo)) \
				$socketWrQueue($state(socketinfo))]

			# - All tokens are preserved for re-use by ReplayCore.
			# - Queues are preserved in case of Finish with error,
			#   but are not used for anything else because
			#   socketClosing(*) is set below.
			# - Cancel the state(after) timeout events.
			foreach tokenVal $socketRdQueue($state(socketinfo)) {
			    if {[info exists ${tokenVal}(after)]} {
				after cancel [set ${tokenVal}(after)]
				unset ${tokenVal}(after)
			    }
			}

		    } else {
			set socketPlayCmd($state(socketinfo)) \
				{ReplayIfClose Wready {} {}}
		    }

		    # Do not allow further connections on this socket.
		    set socketClosing($state(socketinfo)) 1
		}

		set state(state) body

		# According to
		# https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers/Connection
		# any comma-separated "Connection:" list implies keep-alive, but I
		# don't see this in the RFC so we'll play safe and
		# scan any list for "close".
		# Done here to support combining duplicate header field's values.
		if {   [info exists state(connection)]
		    && ("close" ni $state(connection))
		    && ("keep-alive" ni $state(connection))
		} {
		    lappend state(connection) "keep-alive"
		}

		# If doing a HEAD, then we won't get any body
		if {$state(-validate)} {
		    Log ^F$tk end of response for HEAD request - token $token
		    set state(state) complete
		    Eot $token
		    return
		}

		# - For non-chunked transfer we may have no body - in this case
		#   we may get no further file event if the connection doesn't
		#   close and no more data is sent. We can tell and must finish
		#   up now - not later - the alternative would be to wait until
		#   the server times out.
		# - In this case, the server has NOT told the client it will
		#   close the connection, AND it has NOT indicated the resource
		#   length EITHER by setting the Content-Length (totalsize) OR
		#   by using chunked Transfer-Encoding.
		# - Do not worry here about the case (Connection: close) because
		#   the server should close the connection.
		# - IF (NOT Connection: close) AND (NOT chunked encoding) AND
		#      (totalsize == 0).

# waj
		if {    (!(    [info exists state(connection)]
			    && ("close" in $state(connection))
			  )
			)
		     && (![info exists state(transfer)])
			&& ($state(totalsize) == 0)
			&& 0
		} {
		    set msg {body size is 0 and no events likely - complete}
		    Log "$msg - token $token"
		    set msg {(length unknown, set to 0)}
		    Log ^F$tk end of response body {*}$msg - token $token
		    set state(state) complete
		    Eot $token
		    return
		}

		# We have to use binary translation to count bytes properly.
		lassign [fconfigure $sock -translation] trRead trWrite
		fconfigure $sock -translation [list binary $trWrite]

		if {
		    $state(-binary) || [IsBinaryContentType $state(type)]
		} {
		    # Turn off conversions for non-text data.
		    set state(binary) 1
		}
		if {[info exists state(-channel)]} {
		    if {$state(binary) || [llength [ContentEncoding $token]]} {
			fconfigure $state(-channel) -translation binary
		    }
		    if {![info exists state(-handler)]} {
			# Initiate a sequence of background fcopies.
			fileevent $sock readable {}
			rename ${token}EventCoroutine {}
			CopyStart $sock $token
			return
		    }
		}
	    } elseif {$nhl > 0} {
		# Process header lines.
		##Log header - token $token - $line
		if {[regexp -nocase {^([^:]+):(.+)$} $line x key value]} {
		    switch -- [string tolower $key] {
			content-type {
			    set state(type) [string trim [string tolower $value]]
			    # Grab the optional charset information.
			    if {[regexp -nocase \
				    {charset\s*=\s*\"((?:[^""]|\\\")*)\"} \
				    $state(type) -> cs]} {
				set state(charset) [string map {{\"} \"} $cs]
			    } else {
				regexp -nocase {charset\s*=\s*(\S+?);?} \
					$state(type) -> state(charset)
			    }
			}
			content-length {
			    set state(totalsize) [string trim $value]
			}
			content-encoding {
			    set state(coding) [string trim $value]
			}
			transfer-encoding {
			    set state(transfer) \
				    [string trim [string tolower $value]]
			}
			proxy-connection -
			connection {
			    # RFC 7230 Section 6.1 states that a comma-separated
			    # list is an acceptable value.
			    foreach el [SplitCommaSeparatedFieldValue $value] {
				lappend state(connection) [string tolower $el]
			    }
			}
			upgrade {
			    set state(upgrade) [string trim $value]
			}
		    }
		    lappend state(meta) $key [string trim $value]
		}
	    }
	} else {
	    # Now reading body
	    ##Log body - token $token
	    if {[catch {
		if {[info exists state(-handler)]} {
		    set n [eval $state(-handler) [list $sock $token]]
		    ##Log handler $n - token $token
		    # N.B. the protocol has been set to 1.0 because the -handler
		    # logic is not expected to handle chunked encoding.
		    # FIXME Allow -handler with 1.1 on dechunked stacked chan.
		    if {$state(totalsize) == 0} {
			# We know the transfer is complete only when the server
			# closes the connection - i.e. eof is not an error.
			set state(state) complete
		    }
		    if {![string is integer -strict $n]} {
			if 1 {
			    # Do not tolerate bad -handler - fail with error
			    # status.
			    set msg {the -handler command for http::geturl must\
				    return an integer (the number of bytes\
				    read)}
			    Log ^X$tk end of response (handler error) -\
				    token $token
			    Eot $token $msg
			} else {
			    # Tolerate the bad -handler, and continue.  The
			    # penalty:
			    # (a) Because the handler returns nonsense, we know
			    #     the transfer is complete only when the server
			    #     closes the connection - i.e. eof is not an
			    #     error.
			    # (b) http::size will not be accurate.
			    # (c) The transaction is already downgraded to 1.0
			    #     to avoid chunked transfer encoding.  It MUST
			    #     also be forced to "Connection: close" or the
			    #     HTTP/1.0 equivalent; or it MUST fail (as
			    #     above) if the server sends
			    #     "Connection: keep-alive" or the HTTP/1.0
			    #     equivalent.
			    set n 0
			    set state(state) complete
			}
		    }
		} elseif {[info exists state(transfer_final)]} {
		    # This code forgives EOF in place of the final CRLF.
		    set line [getTextLine $sock]
		    set n [string length $line]
		    set state(state) complete
		    if {$n > 0} {
			# - HTTP trailers (late response headers) are permitted
			#   by Chunked Transfer-Encoding, and can be safely
			#   ignored.
			# - Do not count these bytes in the total received for
			#   the response body.
			Log "trailer of $n bytes after final chunk -\
				token $token"
			append state(transfer_final) $line
			set n 0
		    } else {
			Log ^F$tk end of response body (chunked) - token $token
			Log "final chunk part - token $token"
			Eot $token
		    }
		} elseif {    [info exists state(transfer)]
			   && ($state(transfer) eq "chunked")
		} {
		    ##Log chunked - token $token
		    set size 0
		    set hexLenChunk [getTextLine $sock]
		    #set ntl [string length $hexLenChunk]
		    if {[string trim $hexLenChunk] ne ""} {
			scan $hexLenChunk %x size
			if {$size != 0} {
			    ##Log chunk-measure $size - token $token
			    set chunk [BlockingRead $sock $size]
			    set n [string length $chunk]
			    if {$n >= 0} {
				append state(body) $chunk
				incr state(log_size) [string length $chunk]
				##Log chunk $n cumul $state(log_size) -\
					token $token
			    }
			    if {$size != [string length $chunk]} {
				Log "WARNING: mis-sized chunk:\
				    was [string length $chunk], should be\
				    $size - token $token"
				set n 0
				set state(connection) close
				Log ^X$tk end of response (chunk error) \
					- token $token
				set msg {error in chunked encoding - fetch\
					terminated}
				Eot $token $msg
			    }
			    # CRLF that follows chunk.
			    # If eof, this is handled at the end of this proc.
			    getTextLine $sock
			} else {
			    set n 0
			    set state(transfer_final) {}
			}
		    } else {
			# Line expected to hold chunk length is empty, or eof.
			##Log bad-chunk-measure - token $token
			set n 0
			set state(connection) close
			Log ^X$tk end of response (chunk error) - token $token
			Eot $token {error in chunked encoding -\
				fetch terminated}
		    }
		} else {
		    ##Log unchunked - token $token
		    if {$state(totalsize) == 0} {
			# We know the transfer is complete only when the server
			# closes the connection.
			set state(state) complete
			set reqSize $state(-blocksize)
		    } else {
			# Ask for the whole of the unserved response-body.
			# This works around a problem with a tls::socket - for
			# https in keep-alive mode, and a request for
			# $state(-blocksize) bytes, the last part of the
			# resource does not get read until the server times out.
			set reqSize [expr {  $state(totalsize)
					   - $state(currentsize)}]

			# The workaround fails if reqSize is
			# capped at $state(-blocksize).
			# set reqSize [expr {min($reqSize, $state(-blocksize))}]
		    }
		    set c $state(currentsize)
		    set t $state(totalsize)
		    ##Log non-chunk currentsize $c of totalsize $t -\
			    token $token
		    set block [read $sock $reqSize]
		    set n [string length $block]
		    if {$n >= 0} {
			append state(body) $block
			##Log non-chunk [string length $state(body)] -\
				token $token
		    }
		}
		# This calculation uses n from the -handler, chunked, or
		# unchunked case as appropriate.
		if {[info exists state]} {
		    if {$n >= 0} {
			incr state(currentsize) $n
			set c $state(currentsize)
			set t $state(totalsize)
			##Log another $n currentsize $c totalsize $t -\
				token $token
		    }
		    # If Content-Length - check for end of data.
		    if {
			   ($state(totalsize) > 0)
			&& ($state(currentsize) >= $state(totalsize))
		    } {
			Log ^F$tk end of response body (unchunked) -\
				token $token
			set state(state) complete
			Eot $token
		    }
		}
	    } err]} {
		Log ^X$tk end of response (error ${err}) - token $token
		Finish $token $err
		return
	    } else {
		if {[info exists state(-progress)]} {
		    eval $state(-progress) \
			[list $token $state(totalsize) $state(currentsize)]
		}
	    }
	}

	# catch as an Eot above may have closed the socket already
	# $state(state) may be connecting, header, body, or complete
	if {![set cc [catch {eof $sock} eof]] && $eof} {
	    ##Log eof - token $token
	    if {[info exists $token]} {
		set state(connection) close
		if {$state(state) eq "complete"} {
		    # This includes all cases in which the transaction
		    # can be completed by eof.
		    # The value "complete" is set only in http::Event, and it is
		    # used only in the test above.
		    Log ^F$tk end of response body (unchunked, eof) -\
			    token $token
		    Eot $token
		} else {
		    # Premature eof.
		    Log ^X$tk end of response (unexpected eof) - token $token
		    Eot $token eof
		}
	    } else {
		# open connection closed on a token that has been cleaned up.
		Log ^X$tk end of response (token error) - token $token
		CloseSocket $sock
	    }
	} elseif {$cc} {
	    return
	}
    }
}

