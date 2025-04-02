This directory contains the images of the PNG test-suite created by
Willem van Schaik. It is available at http://www.schaik.com/pngsuite/.
The test-suite version is dated 2017-07-19.

To see the usage message:
> tclsh RunPngTests.tcl --help

To execute the test suite using the Img extension and all test images:
> tclsh RunPngTests.tcl --img all

Using option --proc different ways of reading the images can be selected:
--proc 1: Uses "image create photo -file $fileName"
--proc 2: Uses "set ph [image create photo] ; $ph read $fileName"
--proc 3: Uses "image create photo -data $imgData"
--proc 4: Uses "set ph [image create photo] ; $ph put $imgData"
