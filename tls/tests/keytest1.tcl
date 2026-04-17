#!/usr/bin/env tclsh

set auto_path [linsert $auto_path 0 [file normalize [file join [file dirname [info script]] ..]]]
package prefer latest
package require tls

proc creadable {s} {
    puts "LINE=[gets $s]"
    after 2000
    file delete -force $::keyfile
    file delete -force $::certfile
    exit
}

proc myserv {s args} {
    fileevent $s readable [list creadable $s]
}

close [file tempfile keyfile keyfile]
close [file tempfile certfile certfile]

tls::misc req 1024 $keyfile $certfile [list C CCC ST STTT L LLLL O OOOO OU OUUUU CN CNNNN Email some@email.com days 730 serial 12]

tls::socket -require 0 -keyfile $keyfile -certfile $certfile -server myserv 12300

puts "Now run keytest2.tcl"
vwait forever

