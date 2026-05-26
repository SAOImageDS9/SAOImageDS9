#!/usr/bin/env tclsh

# Common Constraints
package prefer latest
package require tls

# Supported protocols
set protocols [list ssl2 ssl3 tls1 tls1.1 tls1.2 tls1.3]
foreach protocol $protocols {
    ::tcltest::testConstraint $protocol 0
    ::tcltest::testConstraint !$protocol 1
}

foreach protocol [::tls::protocols] {
    ::tcltest::testConstraint $protocol 1
    ::tcltest::testConstraint !$protocol 0
}

# Is OpenSSL
::tcltest::testConstraint OpenSSL [string match "OpenSSL*" [::tls::version]]
puts [format "OpenSSL version = %s" [tls::version]]									

# Legacy OpenSSL v1.1.1 vs new v3.x
foreach ver [list 1.1.1 3.0 3.2] {
    ::tcltest::testConstraint [format "OpenSSL%s" $ver] 0
    ::tcltest::testConstraint [format "!OpenSSL%s" $ver] 1
}

scan [lindex [split [::tls::version]] 1] %f version
if {$version >= 3.2} {
    ::tcltest::testConstraint OpenSSL3.2 1
    ::tcltest::testConstraint !OpenSSL3.2 0
} elseif {$version >= 3.0} {
    ::tcltest::testConstraint OpenSSL3.0 1
    ::tcltest::testConstraint !OpenSSL3.0 0
} else {
    ::tcltest::testConstraint OpenSSL1.1.1 1
    ::tcltest::testConstraint !OpenSSL1.1.1 0
}

# Mac
if {$::tcl_platform(os) eq "Darwin"} {
    ::tcltest::testConstraint mac 1
    ::tcltest::testConstraint !mac 0
} else {
    ::tcltest::testConstraint mac 0
    ::tcltest::testConstraint !mac 1
}
