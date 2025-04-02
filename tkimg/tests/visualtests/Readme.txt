                    Description of the tests
                    ========================

testFull.tcl:  Read and write full images.
testFrom.tcl:  Read and write images with option "-from".
testTo.tcl:    Read and write images with option "-to".
testSmall.tcl: Read and write images with sizes from 1x1 to 4x4.

Tests testFrom.tcl and testTo.tcl should show the blue, cyan and magenta bars.

Each test performs the following operations:

For each image format "fmt":
  1. Draw the test canvas, store it in a photo image
     and write it to a file in format "fmt".

  2. Read the image from file in different ways and display it.


The following ways to read image data are tested:
Read photo from file 1  : image create photo -file $fileName
Read photo from file 2  : set ph [image create photo] ; $ph read $fileName
Read photo from string 1: image create photo -data $imgData
Read photo from string 2: set ph [image create photo] ; $ph put $imgData

The following ways to write image data are tested:
Write photo to file  : $ph write $fileName -format $fmt
Write photo to string: $ph data -format $fmt

Other tests for format specific options:

Note:
    Image formats BMP, JPEG, PCX, PNG and TIFF support resolution values.
    Testing of the corresponding write option "-resolution" is tested
    in directory dpiTests.

BmpWriteOptions.tcl:
    Write BMP images using different format options.

DtedReadOptions.tcl:
    Read a DTED file using different format options.

FlirReadOptions.tcl:
    Read a FLIR file using different format options.

GifReadOptions.tcl:
    Read the different pages of an animated GIF file.

GifWrite.tcl:
    Create images using 255 and 256 different colors and try to
    write them as GIF files. The 256 color image generates an error.

IcoReadOptions.tcl:
    Read a ICO image using different format options.

JpegReadOptions.tcl:
    Read a JPEG image using different format options.

JpegWriteOptions.tcl:
    Write JPEG images using different format options.

PcxWriteOptions.tcl:
    Write PCX images using different format options.

PngReadOptions.tcl:
    Read a PNG image using different format options.

PngWriteOptions.tcl:
    Write PNG images using different format options.

PpmReadOptions.tcl:
    Read a PPM image using different format options.

PpmWriteOptions.tcl:
    Write PPM images using different format options.

RawReadOptions.tcl:
    Read a RAW image using different format options.

RawWriteOptions.tcl:
    Create an image using the standard Tk method as well as
    the img::raw format handler.

SgiReadOptions.tcl:
    Read a SGI image using different format options.

SgiWriteOptions.tcl:
    Write SGI images using different format options.

SunReadOptions.tcl:
    Read a SUN image using different format options.

SunWriteOptions.tcl: 
    Write SUN images using different format options.

TgaReadOptions.tcl:
    Read a TARGA image using different format options.

TgaWriteOptions.tcl: 
    Write TARGA images using different format options.

TiffReadOptions.tcl:
    Read a TIFF image using different format options.

TiffWriteOptions.tcl: 
    Write TIFF images using different format options.

XbmReadOptions.tcl:
    Display images from a XBM string using the "image create bitmap"
    and "image create photo -format XBM" commands. 
    Both image columns should be identical.

