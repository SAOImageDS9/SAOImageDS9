Create Test Cases

1. Create the test case *.csv file. You can use multiple files. Generally it's a good idea to group like functions in the same file.

2. Add test cases to *.csv files. Each test case is on a separate line. The column titles correspond to the tcltest tool options. Leave a column blank if not used.

3. Define any common functions in a common.tcl or in *.csv file.

4. To create the test cases script, execute make_test_files.tcl. This will use the *.csv files to create the *.test files.


Execute Test Suite

5. To run the test suite, execute the all.tcl file.


Special Notes

On systems that don't use a standard OpenSSL installation, the following environment variables can be used to set SSL cert info:

SSL_CERT_FILE = Set to file with SSL CA certificates in OpenSSL compatible format. The usual file name is /path/to/cacert.pem.

SSL_CERT_DIR = Path to directory with CA files.
