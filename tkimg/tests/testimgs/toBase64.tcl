source "base64.tcl"

fconfigure stdout -translation lf
set fileName [lindex $argv 0]
set retVal [catch {open $fileName r} fp]
if { $retVal == 0 } {
    fconfigure $fp -translation binary
    set imgData [read $fp]
    close $fp
    set uuImg [::base64::encode -maxlen 72 $imgData]
    puts -nonewline "set imgdata \\\n{"
    puts -nonewline $uuImg
    puts "}"
}
exit 0
