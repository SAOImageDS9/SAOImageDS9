#  Copyright (C) 1999-2024
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

package require Thread

# Non-Threaded

proc xmlrpcServe {port} {
    return [socket -server xmlrpcServeOnce $port]
}

proc xmlrpcServeOnce {sock addr port} {
    fconfigure $sock -translation {lf lf} -buffersize 4096
    fconfigure $sock -blocking off
    fileevent $sock readable [list xmlrpcDoRequest $sock]
}

# Threaded

proc xmlrpcServeThread {port} {
    return [socket -server xmlrpcServeOnceThread $port]
}

proc xmlrpcServeOnceThread {sock addr port} {
    fconfigure $sock -translation {lf lf} -buffersize 4096
    fconfigure $sock -blocking off
#    fileevent $sock readable [list xmlrpcDoThread $sock]
    fileevent $sock readable [list xmlrpcDoRequest $sock]
}

proc xmlrpcDoThread {sock} {
    set id [thread::create {
	package require SAMPXmlrpcThread
	package require SAMPHubThread
	
	proc xmlrpcDoNothing {sock} {
	    puts OHNO
	    
	    catch {
		flush $sock
		close $sock
	    }
	}

        thread::wait}]

    thread::transfer $id $sock
    thread::send $id [list xmlrpcDoRequest $sock]
    thread::release $id
}


