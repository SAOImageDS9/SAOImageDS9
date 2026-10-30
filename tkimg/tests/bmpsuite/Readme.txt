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

Result should be:

Starting test b ...
Log written to file _Logs/b-Img.csv
20 files checked: 7 files correct. 13 files corrupted.

Starting test g ...
Log written to file _Logs/g-Img.csv
27 files checked: 23 files correct. 4 files corrupted.

Starting test q ...
Log written to file _Logs/q-Img.csv
43 files checked: 19 files correct. 24 files corrupted.

Starting test x ...
Log written to file _Logs/x-Img.csv
1 files checked: 0 files correct. 1 files corrupted.

Total number of checked files: 91
