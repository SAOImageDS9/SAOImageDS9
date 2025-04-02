package require Tk

set useImg      false
set useVerbose  false
set useReadProc 1

# See https://entropymine.com/jason/bmpsuite/bmpsuite/readme.txt
# for a description of the 4 types of images:
#
# Files in the "g" directory I consider to be "good": 
# Your program should definitely support them if it claims to support BMP.
#
# Files in the "q" directory I consider to be "questionable":
# These may unusual or obsolete, or technically violate the documentation in some
# way, or I may be unsure about their validity.
#
# Files in the "b" directory I consider to be "bad":
# These are clearly invalid or unreasonable. Make sure your program doesn't crash
# when reading them.
#
# The "x" directory contains files in formats related to BMP, that you might not
# consider to truly be in "BMP format".

set corruptedDirs { b x }

set dirNames [lsort -dictionary [glob -nocomplain -types d "\[a-z\]*"]]
set logDir "_Logs"

proc PrintUsageAndExit { progName } {
    puts "$progName ?Options? DirName1 ?DirNameN?"
    puts ""
    puts "Run test suite using image files located in specified directories."
    puts "If \"DirName\" is \"all\", then all tests are run."
    puts ""
    puts "The following directories are available:"
    puts "$::dirNames"
    puts ""
    puts "By default, only the image parsers of Tk are used."
    puts "The results of the tests are written into directory \"$::logDir\"."
    puts ""
    puts "Options:"
    puts "--help   : Print this help message and exit."
    puts "--verbose: Print each file being checked onto stdout."
    puts "--img    : Load Img extension on startup."
    puts "--proc   : Specify read procedure. Default: 1"
    puts "           1: Uses \"image create photo -file \$fileName\""
    puts "           2: Uses \"set ph \[image create photo\] \; \$ph read \$fileName\""
    puts "           3: Uses \"image create photo -data \$imgData\""
    puts "           4: Uses \"set ph \[image create photo\] \; \$ph put \$imgData\""
    exit 1
}

proc GetReadProc { readProcNum } {
    switch -exact $readProcNum {
        1 { set readProc "ReadPhotoFromFile1" }
        2 { set readProc "ReadPhotoFromFile2" }
        3 { set readProc "ReadPhotoFromString1" }
        4 { set readProc "ReadPhotoFromString2" }
        default { puts "Unknown read proc $readProcNum" ; exit 1 }
    }
    return $readProc
}

# Load image data directly from a file into a photo image.
# Uses command: image create photo -file "fileName"
proc ReadPhotoFromFile1 { fileName } {
    set phImg ""
    set err   ""
    set sTime [clock clicks -milliseconds]

    set retVal [catch { set phImg [image create photo -file $fileName] } err]

    set eTime [clock clicks -milliseconds]
    return [list $retVal $phImg $err [expr {($eTime - $sTime) / 1.0E3}]]
}

# Load image data directly from a file into a photo image.
# Uses commands: set ph [image create photo] ; $ph read "fileName"
proc ReadPhotoFromFile2 { fileName } {
    set phImg ""
    set err   ""
    set sTime [clock clicks -milliseconds]

    set phImg [image create photo]
    set retVal [catch { $phImg read $fileName } err]
    if { $retVal != 0 } {
        image delete $phImg
        set phImg ""
    }

    set eTime [clock clicks -milliseconds]
    return [list $retVal $phImg $err [expr {($eTime - $sTime) / 1.0E3}]]
}

# Load binary image data from a variable into a photo image.
# Uses command: image create photo -data $imgData
proc ReadPhotoFromString1 { fileName } {
    set phImg ""
    set err   ""
    set sTime [clock clicks -milliseconds]

    set retVal [catch {open $fileName r} fp]
    if { $retVal != 0 } {
        set err "Cannot open image file $fileName for binary reading."
        return [list $retVal $phImg $err 0.0]
    }
    fconfigure $fp -translation binary
    set imgData [read $fp [file size $fileName]]
    close $fp

    set retVal [catch { set phImg [image create photo -data $imgData] } err]

    set eTime [clock clicks -milliseconds]
    return [list $retVal $phImg $err [expr {($eTime - $sTime) / 1.0E3}]]
}

# Load binary image data from a variable into a photo image.
# Uses commands: set ph [image create photo] ; $ph put $imgData
proc ReadPhotoFromString2 { fileName } {
    set phImg ""
    set err   ""
    set sTime [clock clicks -milliseconds]

    set retVal [catch {open $fileName r} fp]
    if { $retVal != 0 } {
        set err "Cannot open image file $fileName for binary reading."
        return [list $retVal $phImg $err 0.0]
    }
    fconfigure $fp -translation binary
    set imgData [read $fp [file size $fileName]]
    close $fp

    set phImg [image create photo]
    set retVal [catch {$phImg put $imgData} err]
    if { $retVal != 0 } {
        image delete $phImg
        set phImg ""
    }

    set eTime [clock clicks -milliseconds]
    return [list $retVal $phImg $err [expr {($eTime - $sTime) / 1.0E3}]]
}

set curArg 0
while { $curArg < $argc } {
    set curParam [lindex $argv $curArg]
    if { [string first "--" $curParam] == 0 } {
        set curParam [string range $curParam 1 end]
    }
    if { $curParam eq "-img" } {
        set useImg true
    } elseif { $curParam eq "-verbose" } {
        set useVerbose true
    } elseif { $curParam eq "-help" } {
        PrintUsageAndExit $argv0
    } elseif { $curParam eq "-proc" } {
        incr curArg
        set useReadProc [lindex $argv $curArg]
    } else {
        set testDir [lindex $argv $curArg]
        if { [lsearch $dirNames $testDir] >= 0 || $testDir eq "all" } {
            lappend testDirs $testDir
        } else {
            puts "Ignoring test directory $testDir"
        }
    }
    incr curArg
}

if { ! [info exists testDirs] } {
    PrintUsageAndExit $argv0
}
if { [lsearch $testDirs "all"] >= 0 } {
    set testDirs $dirNames
}

puts -nonewline "Using [expr 8 * $tcl_platform(pointerSize)]-bit Tcl [info patchlevel], Tk $::tk_patchLevel"
if { $useImg } {
    package require Img
    puts ", Img [package version Img] "
} else {
    puts ""
}
puts "Using read proc \#$useReadProc : [GetReadProc $useReadProc]"
puts ""

if { ! [file isdirectory $logDir] } {
    file mkdir $logDir
}

set countTotal 0
foreach testDir $testDirs {
    puts "Starting test ${testDir} ..."
    if { $useImg } {
        set logFileName [format "%s/%s-%s.csv" $logDir $testDir "Img"]
    } else {
        set logFileName [format "%s/%s-%s.csv" $logDir $testDir "Tk"]
    }
    set fp [open "$logFileName" "w"]
    set countAll  0
    set countFail 0
    set countOk   0

    set fileNames [lsort -dictionary [glob -nocomplain [file join $testDir "*"]]]
    foreach fileName $fileNames {
        if { $useVerbose } {
            puts "Checking file $fileName"
        }
        set readProc [GetReadProc $useReadProc]
        lassign [$readProc $fileName] retVal phImg err secs
        if { $retVal == 0 } {
            puts $fp "$fileName;[image width $phImg];[image height $phImg];"
            image delete $phImg
            incr countOk
        } else {
            puts $fp "$fileName;-1;-1;$err"
            incr countFail
        }
        incr countAll
    }
    close $fp
    puts "Log written to file $logFileName"
    puts "$countAll files checked: $countOk files correct. $countFail files corrupted."
    puts ""
    incr countTotal $countAll
}

puts ""
puts "Total number of checked files: $countTotal"

exit 0
