This directory contains the images of the BMP test-suite created by
Jason Summers. It is available at https://entropymine.com/jason/bmpsuite/.
The test-suite version is dated 2021-04-14.

To see the usage message:
> tclsh RunBmpTests.tcl --help

To execute the test suite using the Img extension and all test images:
> tclsh RunBmpTests.tcl --img all

Using option --proc different ways of reading the images can be selected:
--proc 1: Uses "image create photo -file $fileName"
--proc 2: Uses "set ph [image create photo] ; $ph read $fileName" 
--proc 3: Uses "image create photo -data $imgData"
--proc 4: Uses "set ph [image create photo] ; $ph put $imgData"
