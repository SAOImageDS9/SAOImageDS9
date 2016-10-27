# Needed because some sites return 'x-fits' (CADC) in Content-Encoding
proc http::ContentEncoding {token} {
    upvar 0 $token state
    set r {}
    if {[info exists state(coding)]} {
	foreach coding [split $state(coding) ,] {
	    switch -exact -- $coding {
		deflate { lappend r inflate }
		gzip - x-gzip { lappend r gunzip }
		compress - x-compress { lappend r decompress }
		identity {}
		x-fits {}
		default {
# just do nothing
# return -code error "unsupported content-encoding \"$coding\""
		}
	    }
	}
    }
    return $r
}

