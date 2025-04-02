The test environment of the Img extension consists of the following test suites:

1. Standard tcltests for all supported image formats.
   This test suite is located in this directory and can be executed by
   calling "tclsh all.tcl".

   Each format test contains the following test cases:
   1.X: Read image from file or binary string.
   2.X: Read image using metadata information.
   3.X: Write image to file.
   4.X: Write image to file using metadata information.
   5.X: Check invalid format options.

2. Test suite for formats supporting resolution information.
   This test suite is located in directory dpiTests and can be exectued by
   calling "tclsh DpiReadWrite.tcl".

3. Test suite for read and write format options.
   This test suite is located in directory visualtests and can be exectued by
   calling "tclsh RunTests --auto".
   See Readme.txt in directory visualtests.

4. Test suite for AFL (American Fuzzy Lop) fuzzed images.
   See Readme.txt in directory afltests.
   Note, that directory afltests is not included in the tarball
   distribution files, as it contains image files triggering
   virus alarms at VirusTotal.

5. Test suite for BMP files.
   See Readme.txt in directory bmpsuite.

6. Test suite for PNG files.
   See Readme.txt in directory pngsuite.
