package require Tk

set useImg      false
set useVerbose  false
set useReadProc 1

# See http://www.schaik.com/pngsuite/pngsuite_xxx_png.html
# for a description of the incorrect values.
set corruptedFiles {
    xs1n0g01.png
    xs2n0g01.png
    xs4n0g01.png
    xs7n0g01.png
    xcrn0g04.png
    xlfn0g04.png
    xhdn0g08.png
    xc1n0g08.png
    xc9n2c08.png
    xd0n2c08.png
    xd3n2c08.png
    xd9n2c08.png
    xdtn0g01.png
    xcsn0g01.png
}

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

puts "Starting test ${testDir} ..."
set foundIncorrectCorruptedFile false
foreach testDir $testDirs {
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
            if { [lsearch $corruptedFiles [file tail $fileName]] < 0 } {
                puts "Found corrupt file ($fileName), which is not in list of corrupted files."
                set foundIncorrectCorruptedFile true
            }
            puts $fp "$fileName;-1;-1;$err"
            incr countFail
        }
        incr countAll
    }
    close $fp
    puts "Log written to file $logFileName"
    puts "$countAll files checked: $countOk files correct. $countFail files corrupted."
    puts ""
}

if { $countFail == [llength $corruptedFiles] && $foundIncorrectCorruptedFile == false } {
    puts "All tests succeeded."
    exit 0
} else {
    puts "Some tests failed. See log for details."
    exit 1
}
