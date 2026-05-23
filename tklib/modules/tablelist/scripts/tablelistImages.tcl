#==============================================================================
# Contains procedures that create various bitmap and photo images.  The
# argument w specifies a canvas displaying a sort arrow, while the argument win
# stands for a tablelist widget.
#
# Copyright (c) 2006-2024  Csaba Nemethi (E-mail: csaba.nemethi@t-online.de)
#==============================================================================

#------------------------------------------------------------------------------
# tablelist::flat7x4Arrows
#------------------------------------------------------------------------------
proc tablelist::flat7x4Arrows w {
    image create bitmap triangleUpImg$w -data "
#define triangleUp7x4_width 7
#define triangleUp7x4_height 4
static unsigned char triangleUp7x4_bits[] = {
   0x08, 0x1c, 0x3e, 0x7f};"

    image create bitmap triangleDnImg$w -data "
#define triangleDn7x4_width 7
#define triangleDn7x4_height 4
static unsigned char triangleDn7x4_bits[] = {
   0x7f, 0x3e, 0x1c, 0x08};"
}

#------------------------------------------------------------------------------
# tablelist::flat7x7Arrows
#------------------------------------------------------------------------------
proc tablelist::flat7x7Arrows w {
    image create bitmap triangleUpImg$w -data "
#define triangleUp7x7_width 7
#define triangleUp7x7_height 7
static unsigned char triangleUp7x7_bits[] = {
   0x08, 0x1c, 0x1c, 0x3e, 0x3e, 0x7f, 0x7f};"

    image create bitmap triangleDnImg$w -data "
#define triangleDn7x7_width 7
#define triangleDn7x7_height 7
static unsigned char triangleDn7x7_bits[] = {
   0x7f, 0x7f, 0x3e, 0x3e, 0x1c, 0x1c, 0x08};"
}

#------------------------------------------------------------------------------
# tablelist::flat8x4Arrows
#------------------------------------------------------------------------------
proc tablelist::flat8x4Arrows w {
    image create bitmap triangleUpImg$w -data "
#define triangleUp8x4_width 8
#define triangleUp8x4_height 4
static unsigned char triangleUp8x4_bits[] = {
   0x18, 0x3c, 0x7e, 0xff};"

    image create bitmap triangleDnImg$w -data "
#define triangleDn8x4_width 8
#define triangleDn8x4_height 4
static unsigned char triangleDn8x4_bits[] = {
   0xff, 0x7e, 0x3c, 0x18};"
}

#------------------------------------------------------------------------------
# tablelist::flat8x5Arrows
#------------------------------------------------------------------------------
proc tablelist::flat8x5Arrows w {
    image create bitmap triangleUpImg$w -data "
#define triangleUp8x5_width 8
#define triangleUp8x5_height 5
static unsigned char triangleUp8x5_bits[] = {
   0x18, 0x3c, 0x7e, 0xff, 0xff};"

    image create bitmap triangleDnImg$w -data "
#define triangleDn8x5_width 8
#define triangleDn8x5_height 5
static unsigned char triangleDn8x5_bits[] = {
   0xff, 0xff, 0x7e, 0x3c, 0x18};"
}

#------------------------------------------------------------------------------
# tablelist::flat9x5Arrows
#------------------------------------------------------------------------------
proc tablelist::flat9x5Arrows w {
    image create bitmap triangleUpImg$w -data "
#define triangleUp9x5_width 9
#define triangleUp9x5_height 5
static unsigned char triangleUp9x5_bits[] = {
   0x10, 0x00, 0x38, 0x00, 0x7c, 0x00, 0xfe, 0x00, 0xff, 0x01};"

    image create bitmap triangleDnImg$w -data "
#define triangleDn9x5_width 9
#define triangleDn9x5_height 5
static unsigned char triangleDn9x5_bits[] = {
   0xff, 0x01, 0xfe, 0x00, 0x7c, 0x00, 0x38, 0x00, 0x10, 0x00};"
}

#------------------------------------------------------------------------------
# tablelist::flat10x5Arrows
#------------------------------------------------------------------------------
proc tablelist::flat10x5Arrows w {
    image create bitmap triangleUpImg$w -data "
#define triangleUp10x5_width 10
#define triangleUp10x5_height 5
static unsigned char triangleUp10x5_bits[] = {
   0x30, 0x00, 0x78, 0x00, 0xfc, 0x00, 0xfe, 0x01, 0xff, 0x03};"

    image create bitmap triangleDnImg$w -data "
#define triangleDn10x5_width 10
#define triangleDn10x5_height 5
static unsigned char triangleDn10x5_bits[] = {
   0xff, 0x03, 0xfe, 0x01, 0xfc, 0x00, 0x78, 0x00, 0x30, 0x00};"
}

#------------------------------------------------------------------------------
# tablelist::flat11x6Arrows
#------------------------------------------------------------------------------
proc tablelist::flat11x6Arrows w {
    image create bitmap triangleUpImg$w -data "
#define triangleUp11x6_width 11
#define triangleUp11x6_height 6
static unsigned char triangleUp11x6_bits[] = {
   0x20, 0x00, 0x70, 0x00, 0xf8, 0x00, 0xfc, 0x01, 0xfe, 0x03, 0xff, 0x07};"

    image create bitmap triangleDnImg$w -data "
#define triangleDn11x6_width 11
#define triangleDn11x6_height 6
static unsigned char triangleDn11x6_bits[] = {
   0xff, 0x07, 0xfe, 0x03, 0xfc, 0x01, 0xf8, 0x00, 0x70, 0x00, 0x20, 0x00};"
}

#------------------------------------------------------------------------------
# tablelist::flat12x6Arrows
#------------------------------------------------------------------------------
proc tablelist::flat12x6Arrows w {
    image create bitmap triangleUpImg$w -data "
#define triangleUp12x6_width 12
#define triangleUp12x6_height 6
static unsigned char triangleUp12x6_bits[] = {
   0x60, 0x00, 0xf0, 0x00, 0xf8, 0x01, 0xfc, 0x03, 0xfe, 0x07, 0xff, 0x0f};"

    image create bitmap triangleDnImg$w -data "
#define triangleDn12x6_width 12
#define triangleDn12x6_height 6
static unsigned char triangleDn12x6_bits[] = {
   0xff, 0x0f, 0xfe, 0x07, 0xfc, 0x03, 0xf8, 0x01, 0xf0, 0x00, 0x60, 0x00};"
}

#------------------------------------------------------------------------------
# tablelist::flat13x7Arrows
#------------------------------------------------------------------------------
proc tablelist::flat13x7Arrows w {
    image create bitmap triangleUpImg$w -data "
#define triangleUp13x7_width 13
#define triangleUp13x7_height 7
static unsigned char triangleUp13x7_bits[] = {
   0x40, 0x00, 0xe0, 0x00, 0xf0, 0x01, 0xf8, 0x03, 0xfc, 0x07, 0xfe, 0x0f,
   0xff, 0x1f};"

    image create bitmap triangleDnImg$w -data "
#define triangleDn13x7_width 13
#define triangleDn13x7_height 7
static unsigned char triangleDn13x7_bits[] = {
   0xff, 0x1f, 0xfe, 0x0f, 0xfc, 0x07, 0xf8, 0x03, 0xf0, 0x01, 0xe0, 0x00,
   0x40, 0x00};"
}

#------------------------------------------------------------------------------
# tablelist::flat14x7Arrows
#------------------------------------------------------------------------------
proc tablelist::flat14x7Arrows w {
    image create bitmap triangleUpImg$w -data "
#define triangleUp14x7_width 14
#define triangleUp14x7_height 7
static unsigned char triangleUp14x7_bits[] = {
   0xc0, 0x00, 0xe0, 0x01, 0xf0, 0x03, 0xf8, 0x07, 0xfc, 0x0f, 0xfe, 0x1f,
   0xff, 0x3f};"

    image create bitmap triangleDnImg$w -data "
#define triangleDn14x7_width 14
#define triangleDn14x7_height 7
static unsigned char triangleDn14x7_bits[] = {
   0xff, 0x3f, 0xfe, 0x1f, 0xfc, 0x0f, 0xf8, 0x07, 0xf0, 0x03, 0xe0, 0x01,
   0xc0, 0x00};"
}

#------------------------------------------------------------------------------
# tablelist::flat15x8Arrows
#------------------------------------------------------------------------------
proc tablelist::flat15x8Arrows w {
    image create bitmap triangleUpImg$w -data "
#define triangleUp15x8_width 15
#define triangleUp15x8_height 8
static unsigned char triangleUp15x8_bits[] = {
   0x80, 0x00, 0xc0, 0x01, 0xe0, 0x03, 0xf0, 0x07, 0xf8, 0x0f, 0xfc, 0x1f,
   0xfe, 0x3f, 0xff, 0x7f};"

    image create bitmap triangleDnImg$w -data "
#define triangleDn15x8_width 15
#define triangleDn15x8_height 8
static unsigned char triangleDn15x8_bits[] = {
   0xff, 0x7f, 0xfe, 0x3f, 0xfc, 0x1f, 0xf8, 0x0f, 0xf0, 0x07, 0xe0, 0x03,
   0xc0, 0x01, 0x80, 0x00};"
}

#------------------------------------------------------------------------------
# tablelist::flat16x8Arrows
#------------------------------------------------------------------------------
proc tablelist::flat16x8Arrows w {
    image create bitmap triangleUpImg$w -data "
#define triangleUp16x8_width 16
#define triangleUp16x8_height 8
static unsigned char triangleUp16x8_bits[] = {
   0x80, 0x01, 0xc0, 0x03, 0xe0, 0x07, 0xf0, 0x0f, 0xf8, 0x1f, 0xfc, 0x3f,
   0xfe, 0x7f, 0xff, 0xff};"

    image create bitmap triangleDnImg$w -data "
#define triangleDn16x8_width 16
#define triangleDn16x8_height 8
static unsigned char triangleDn16x8_bits[] = {
   0xff, 0xff, 0xfe, 0x7f, 0xfc, 0x3f, 0xf8, 0x1f, 0xf0, 0x0f, 0xe0, 0x07,
   0xc0, 0x03, 0x80, 0x01};"
}

#------------------------------------------------------------------------------
# tablelist::flatAngle7x4Arrows
#------------------------------------------------------------------------------
proc tablelist::flatAngle7x4Arrows w {
    image create bitmap triangleUpImg$w -data "
#define triangleUp7x4_width 7
#define triangleUp7x4_height 4
static unsigned char triangleUp7x4_bits[] = {
   0x08, 0x1c, 0x36, 0x63};"

    image create bitmap triangleDnImg$w -data "
#define triangleDn7x4_width 7
#define triangleDn7x4_height 4
static unsigned char triangleDn7x4_bits[] = {
   0x63, 0x36, 0x1c, 0x08};"
}

#------------------------------------------------------------------------------
# tablelist::flatAngle7x5Arrows
#------------------------------------------------------------------------------
proc tablelist::flatAngle7x5Arrows w {
    image create bitmap triangleUpImg$w -data "
#define triangleUp7x5_width 7
#define triangleUp7x5_height 5
static unsigned char triangleUp7x5_bits[] = {
   0x08, 0x1c, 0x3e, 0x77, 0x63};"

    image create bitmap triangleDnImg$w -data "
#define triangleDn7x5_width 7
#define triangleDn7x5_height 5
static unsigned char triangleDn7x5_bits[] = {
   0x63, 0x77, 0x3e, 0x1c, 0x08};"
}

#------------------------------------------------------------------------------
# tablelist::flatAngle9x5Arrows
#------------------------------------------------------------------------------
proc tablelist::flatAngle9x5Arrows w {
    image create bitmap triangleUpImg$w -data "
#define triangleUp9x5_width 9
#define triangleUp9x5_height 5
static unsigned char triangleUp9x5_bits[] = {
   0x10, 0x00, 0x38, 0x00, 0x6c, 0x00, 0xc6, 0x00, 0x83, 0x01};"

    image create bitmap triangleDnImg$w -data "
#define triangleDn9x5_width 9
#define triangleDn9x5_height 5
static unsigned char triangleDn9x5_bits[] = {
   0x83, 0x01, 0xc6, 0x00, 0x6c, 0x00, 0x38, 0x00, 0x10, 0x00};"
}

#------------------------------------------------------------------------------
# tablelist::flatAngle9x6Arrows
#------------------------------------------------------------------------------
proc tablelist::flatAngle9x6Arrows w {
    image create bitmap triangleUpImg$w -data "
#define triangleUp9x6_width 9
#define triangleUp9x6_height 6
static unsigned char triangleUp9x6_bits[] = {
   0x10, 0x00, 0x38, 0x00, 0x7c, 0x00, 0xee, 0x00, 0xc7, 0x01, 0x83, 0x01};"

    image create bitmap triangleDnImg$w -data "
#define triangleDn9x6_width 9
#define triangleDn9x6_height 6
static unsigned char triangleDn9x6_bits[] = {
   0x83, 0x01, 0xc7, 0x01, 0xee, 0x00, 0x7c, 0x00, 0x38, 0x00, 0x10, 0x00};"
}

#------------------------------------------------------------------------------
# tablelist::flatAngle10x6Arrows
#------------------------------------------------------------------------------
proc tablelist::flatAngle10x6Arrows w {
    image create bitmap triangleUpImg$w -data "
#define triangleUp10x6_width 10
#define triangleUp10x6_height 6
static unsigned char triangleUp10x6_bits[] = {
   0x30, 0x00, 0x78, 0x00, 0xfc, 0x00, 0xce, 0x01, 0x87, 0x03, 0x03, 0x03};"

    image create bitmap triangleDnImg$w -data "
#define triangleDn10x6_width 10
#define triangleDn10x6_height 6
static unsigned char triangleDn10x6_bits[] = {
   0x03, 0x03, 0x87, 0x03, 0xce, 0x01, 0xfc, 0x00, 0x78, 0x00, 0x30, 0x00};"
}

#------------------------------------------------------------------------------
# tablelist::flatAngle11x6Arrows
#------------------------------------------------------------------------------
proc tablelist::flatAngle11x6Arrows w {
    image create bitmap triangleUpImg$w -data "
#define triangleUp11x6_width 11
#define triangleUp11x6_height 6
static unsigned char triangleUp11x6_bits[] = {
   0x20, 0x00, 0x70, 0x00, 0xd8, 0x00, 0x8c, 0x01, 0x06, 0x03, 0x03, 0x06};"

    image create bitmap triangleDnImg$w -data "
#define triangleDn11x6_width 11
#define triangleDn11x6_height 6
static unsigned char triangleDn11x6_bits[] = {
   0x03, 0x06, 0x06, 0x03, 0x8c, 0x01, 0xd8, 0x00, 0x70, 0x00, 0x20, 0x00};"
}

#------------------------------------------------------------------------------
# tablelist::flatAngle13x7Arrows
#------------------------------------------------------------------------------
proc tablelist::flatAngle13x7Arrows w {
    image create bitmap triangleUpImg$w -data "
#define triangleUp13x7_width 13
#define triangleUp13x7_height 7
static unsigned char triangleUp13x7_bits[] = {
   0x40, 0x00, 0xe0, 0x00, 0xb0, 0x01, 0x18, 0x03, 0x0c, 0x06, 0x06, 0x0c,
   0x03, 0x18};"

    image create bitmap triangleDnImg$w -data "
#define triangleDn13x7_width 13
#define triangleDn13x7_height 7
static unsigned char triangleDn13x7_bits[] = {
   0x03, 0x18, 0x06, 0x0c, 0x0c, 0x06, 0x18, 0x03, 0xb0, 0x01, 0xe0, 0x00,
   0x40, 0x00};"
}

#------------------------------------------------------------------------------
# tablelist::flatAngle15x8Arrows
#------------------------------------------------------------------------------
proc tablelist::flatAngle15x8Arrows w {
    image create bitmap triangleUpImg$w -data "
#define triangleUp15x8_width 15
#define triangleUp15x8_height 8
static unsigned char triangleUp15x8_bits[] = {
   0x80, 0x00, 0xc0, 0x01, 0x60, 0x03, 0x30, 0x06, 0x18, 0x0c, 0x0c, 0x18,
   0x06, 0x30, 0x03, 0x60};"

    image create bitmap triangleDnImg$w -data "
#define triangleDn15x8_width 15
#define triangleDn15x8_height 8
static unsigned char triangleDn15x8_bits[] = {
   0x03, 0x60, 0x06, 0x30, 0x0c, 0x18, 0x18, 0x0c, 0x30, 0x06, 0x60, 0x03,
   0xc0, 0x01, 0x80, 0x00};"
}

#------------------------------------------------------------------------------
# tablelist::photo0x0Arrows
#------------------------------------------------------------------------------
proc tablelist::photo0x0Arrows w {
    variable triangleUpData {
<svg width="8" height="4" version="1.1" xmlns="http://www.w3.org/2000/svg">
 <path d="m0 4 4-4 4 4z" fill="#000"/>
</svg>
    }

    variable triangleDnData {
<svg width="8" height="4" version="1.1" xmlns="http://www.w3.org/2000/svg">
 <path d="m0 0 4 4 4-4z" fill="#000"/>
</svg>
    }

    variable svgfmt
    image create photo triangleUpImg$w -format $svgfmt -data $triangleUpData
    image create photo triangleDnImg$w -format $svgfmt -data $triangleDnData
}

#------------------------------------------------------------------------------
# tablelist::setSvgImgForeground
#------------------------------------------------------------------------------
proc tablelist::setSvgImgForeground {imgName color} {
    if {[string match "triangleUpImg*" $imgName]} {
	variable triangleUpData
	set data $triangleUpData
    } else {
	variable triangleDnData
	set data $triangleDnData
    }

    set color [mwutil::normalizeColor $color]
    set idx1 [string first "#000" $data]
    set idx2 [expr {$idx1 + 3}]
    set data [string replace $data $idx1 $idx2 $color]

    $imgName configure -data $data
}

#------------------------------------------------------------------------------
# tablelist::photo7x4Arrows
#------------------------------------------------------------------------------
proc tablelist::photo7x4Arrows w {
    image create photo triangleUpImg$w -format gif -data "
R0lGODlhBwAEAIQRAAAAADxZbDxeckNfb0BidF6IoWGWtlabwIexxZq2xYbI65HL7LXd8rri9MPk
9cTj9Mrm9f///////////////////////////////////////////////////////////yH5BAEK
AB8ALAAAAAAHAAQAAAUS4CcSYikcRRkYypJ8A9IwD+SEADs="

    image create photo triangleDnImg$w -format gif -data "
R0lGODlhBwAEAIQQAAAAADxeclKLq2KauWes03CpxnKrynOy2IO62ZXG4JrH4JrL5pnQ7qbY87Pb
8cTj9P///////////////////////////////////////////////////////////////yH5BAEK
AAAALAAAAAAHAAQAAAUSYDAUBpIogHAwzgO8ROO+70KHADs="
}

#------------------------------------------------------------------------------
# tablelist::photo7x7Arrows
#------------------------------------------------------------------------------
proc tablelist::photo7x7Arrows w {
    image create photo triangleUpImg$w -format png -data "
iVBORw0KGgoAAAANSUhEUgAAAAcAAAAHCAYAAADEUlfTAAAABGdBTUEAALGPC/xhBQAAACBjSFJN
AAB6JgAAgIQAAPoAAACA6AAAdTAAAOpgAAA6mAAAF3CculE8AAAACXBIWXMAAA7DAAAOwwHHb6hk
AAAAGnRFWHRTb2Z0d2FyZQBQYWludC5ORVQgdjMuNS4xMDD0cqEAAABCSURBVBhXXY4BCgAgCAP9
T//R9/Ryc+ZEHCyb40CB3D1n6OAZuQOKi9klPhUsjNJ6VwUp+tOLopOGNkXncToWw6IPjiowJNyp
gu8AAAAASUVORK5CYII="

    image create photo triangleDnImg$w -format png -data "
iVBORw0KGgoAAAANSUhEUgAAAAcAAAAHCAYAAADEUlfTAAAABGdBTUEAALGPC/xhBQAAAAlwSFlz
AAAOwwAADsMBx2+oZAAAABp0RVh0U29mdHdhcmUAUGFpbnQuTkVUIHYzLjUuMTAw9HKhAAAAP0lE
QVQYV22LgQ0AIAjD9g//yD1ejoBoFpRkISsUPsMzPwkOIcARmJlvKMGIJq9jt+Uem51Wscfe1hkq
8VAdWKBfMCRjQcZZAAAAAElFTkSuQmCC"
}

#------------------------------------------------------------------------------
# tablelist::photo9x5Arrows
#------------------------------------------------------------------------------
proc tablelist::photo9x5Arrows w {
    image create photo triangleUpImg$w -format gif -data "
R0lGODlhCQAFAIQTAAAAADxeckBidGaJmlabwG6mw4exxZy9z4bI647M7JvS76HV8KjX8a3a8rPc
8rLe87jf9Lzh9MPk9f///////////////////////////////////////////////////yH5BAEK
AB8ALAAAAAAJAAUAAAUZ4Cd+wWgGhGCSBKIMY1AkSwMdpPEwTiT9IQA7"

    image create photo triangleDnImg$w -format gif -data "
R0lGODlhCQAFAIQSAAAAADxeck90imuUrGKauW2jwWes036xzXOy2IO83YO83o++2JrH4JrK5rPZ
7rPZ77TZ7sTj9P///////////////////////////////////////////////////////yH5BAEK
AB8ALAAAAAAJAAUAAAUaYECMxbEwzCcgSNJA0ScPSuPEsmw8eC43vhAAOw=="
}

#------------------------------------------------------------------------------
# tablelist::photo11x6Arrows
#------------------------------------------------------------------------------
proc tablelist::photo11x6Arrows w {
    image create photo triangleUpImg$w -format gif -data "
R0lGODlhCwAGAKUjAAAAADJdfDJefDFefjRffDhhfC9njDNrjThtjj5xkUJykWuXs2Ogw2ukxHKp
yHusyZrD2o7M7JfQ7qDE2qfH2arJ2aPQ6aLU76Td+6/h/bDi/rrj+bjm/rrn/8Pm+sLr/8Ps/8ro
+szu////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////yH5BAEKAD8ALAAAAAALAAYAAAYqwJ9Q
WBgahQTF4ohMPCyQYwDhuHA2k6Hg0JBkOh8P5TcwMCIYTQckClWCADs="

    image create photo triangleDnImg$w -format gif -data "
R0lGODlhCwAGAKUkAAAAADl1ml+DnlaRtWGZu2ievXaet2+gvXekvmKfw32owXu314Kqwoiswoey
yo21zIa+3JC2zZ26y5DB3ZjG34fE5ZHJ55/J4ZrN6KTC1KjN4qLb+azf+rrV5rDi/rrn/7/m+8Ps
/8vu/9Pw////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////yH5BAEKAD8ALAAAAAALAAYAAAYqQEFg
QCgcEApGQ/IzJBaQCeWi6fyujsrG8wmNruCHhfMRgc8RDOjMzrCDADs="
}

#------------------------------------------------------------------------------
# tablelist::photo13x7Arrows
#------------------------------------------------------------------------------
proc tablelist::photo13x7Arrows w {
    image create photo triangleUpImg$w -format gif -data "
R0lGODlhDQAHAKUwAAAAAC1pjjVmhjJrjzppiD1qiTVtkTpwkTxwkUFsikRuilKPs16Rr1aStFyU
tWeHnGKKo2CWtXGhvXOy1Hu01YKovo2xxIC314S31JGyx5W1x5i2yJG915nE2p/F247K65bF4JbN
7Z3Q7Z7X9abJ3azX76fa9qzb9and+bLb8Lne8rHg+rLi+7fi+bnk+73l+v//////////////////
/////////////////////////////////////////////yH5BAEKAD8ALAAAAAANAAcAAAY4wJ9w
+BgajQoB5IhEMCQV5i9xiGBAHMuxYHBcRKdSJzMsDBqUkGnVSnk0P0JgMfmMUCzXS0XaBAEAOw=="

    image create photo triangleDnImg$w -format gif -data "
R0lGODlhDQAHAKUwAAAAAEaGqlWFpVyav2SVtGCew26tz3OkwXamwnuow36pw3Gv0nSz13iz0361
1IK00oa41Yy815m5zJO+2JjC2Z/D2J7E2obC4o/I5o3J6pTM65jM6J/P6ZzP657X9avH2anP5afS
6q7U6azV66fa9qnZ9Knd+bjV5rrc8bHg+rLi+7fi+b/g8rnk+7zl+sXh8v//////////////////
/////////////////////////////////////////////yH5BAEKAD8ALAAAAAANAAcAAAY4QEGg
YGg4IJEJxVL5/AgDxgWz4YRGotNve1hkPCZVy/XamhENDSm1YpnfCUenhHrbFQ+QfS/ZBwEAOw=="
}

#------------------------------------------------------------------------------
# tablelist::photo15x8Arrows
#------------------------------------------------------------------------------
proc tablelist::photo15x8Arrows w {
    image create photo triangleUpImg$w -format gif -data "
R0lGODlhDwAIAKU/AAAAAB1YfjJefy1pjjVmhjJrjzppiD1qiTVtkTpwkTxwkT18oUFsikRuilKP
s16Rr1aStFyUtWeHnGKKo2CWtXGhvV6dwnOy1Ha02Hu01YKovommuI2xxIC314S31JGyx5W1x5S3
zJi2yJG915nE2p/F24fD44/I5o7K65bF4JbN7ZjM6J/P6Z3Q7Z7X9abJ3anN4KfS6q/U6azV66zX
76fa9qzb9and+bLb8Lne8rHg+rLi+7fi+bnk+73l+v///yH5BAEKAD8ALAAAAAAPAAgAAAZJwJ9w
+JMQj8QGYYI8NhSPiqYpZCQontSI0zwgIp2WjUb6HA8FSEZV0/FwJdDQMHBcUK7brufLvUQ/AgEL
FhgmJyssMTMyMCEbQQA7"

    image create photo triangleDnImg$w -format gif -data "
R0lGODlhDwAIAKU/AAAAACdjiUBtjkKBpkaGqlWFpVaUuFyav2SVtGGdv2Cew2ehwm2jw26tz3Ok
wXOmw3amwnuow3ioxH6pw3Gv0nSz13iz03611ICsxYOux4mtwomxyI2yyIK00oa41Yy815KvwZm5
zJO+2JjC2Z/D2J7E2obC4o/I5o3J6pTM65jM6J/P6ZzP657X9avH2anP5afS6q7U6azV66fa9qnZ
9Knd+bjV5rrc8bHg+rLi+7fi+b/g8rnk+7zl+sXh8v///yH5BAEKAD8ALAAAAAAPAAgAAAZIQEFg
YEgsGA8JJrPhaEC/AkHRsFw8H9GoRHL9vohDxXRSrWCymO3LdlBQrVqO1/Ox7xBLaobT7e6AERcs
NDeAhxMdL4eMIYxBADs="
}

#------------------------------------------------------------------------------
# tablelist::sunken8x7Arrows
#------------------------------------------------------------------------------
proc tablelist::sunken8x7Arrows w {
    image create bitmap triangleUpImg$w -data "
#define triangleUp8x7_width 8
#define triangleUp8x7_height 7
static unsigned char triangleUp8x7_bits[] = {
   0x18, 0x3c, 0x3c, 0x7e, 0x7e, 0xff, 0xff};"

    image create bitmap darkLineUpImg$w -data "
#define darkLineUp8x7_width 8
#define darkLineUp8x7_height 7
static unsigned char darkLineUp8x7_bits[] = {
   0x08, 0x0c, 0x04, 0x06, 0x02, 0x03, 0x00};"

    image create bitmap lightLineUpImg$w -data "
#define lightLineUp8x7_width 8
#define lightLineUp8x7_height 7
static unsigned char lightLineUp8x7_bits[] = {
   0x10, 0x30, 0x20, 0x60, 0x40, 0xc0, 0xff};"

    image create bitmap triangleDnImg$w -data "
#define triangleDn8x7_width 8
#define triangleDn8x7_height 7
static unsigned char triangleDn8x7_bits[] = {
   0xff, 0xff, 0x7e, 0x7e, 0x3c, 0x3c, 0x18};"

    image create bitmap darkLineDnImg$w -data "
#define darkLineDn8x7_width 8
#define darkLineDn8x7_height 7
static unsigned char darkLineDn8x7_bits[] = {
   0xff, 0x03, 0x02, 0x06, 0x04, 0x0c, 0x08};"

    image create bitmap lightLineDnImg$w -data "
#define lightLineDn8x7_width 8
#define lightLineDn8x7_height 7
static unsigned char lightLineDn8x7_bits[] = {
   0x00, 0xc0, 0x40, 0x60, 0x20, 0x30, 0x10};"
}

#------------------------------------------------------------------------------
# tablelist::sunken10x9Arrows
#------------------------------------------------------------------------------
proc tablelist::sunken10x9Arrows w {
    image create bitmap triangleUpImg$w -data "
#define triangleUp10x9_width 10
#define triangleUp10x9_height 9
static unsigned char triangleUp10x9_bits[] = {
   0x30, 0x00, 0x78, 0x00, 0x78, 0x00, 0xfc, 0x00, 0xfc, 0x00, 0xfe, 0x01,
   0xfe, 0x01, 0xff, 0x03, 0xff, 0x03};"

    image create bitmap darkLineUpImg$w -data "
#define darkLineUp10x9_width 10
#define darkLineUp10x9_height 9
static unsigned char darkLineUp10x9_bits[] = {
   0x10, 0x00, 0x18, 0x00, 0x08, 0x00, 0x0c, 0x00, 0x04, 0x00, 0x06, 0x00,
   0x02, 0x00, 0x03, 0x00, 0x00, 0x00};"

    image create bitmap lightLineUpImg$w -data "
#define lightLineUp10x9_width 10
#define lightLineUp10x9_height 9
static unsigned char lightLineUp10x9_bits[] = {
   0x20, 0x00, 0x60, 0x00, 0x40, 0x00, 0xc0, 0x00, 0x80, 0x00, 0x80, 0x01,
   0x00, 0x01, 0x00, 0x03, 0xff, 0x03};"

    image create bitmap triangleDnImg$w -data "
#define triangleDn10x9_width 10
#define triangleDn10x9_height 9
static unsigned char triangleDn10x9_bits[] = {
   0xff, 0x03, 0xff, 0x03, 0xfe, 0x01, 0xfe, 0x01, 0xfc, 0x00, 0xfc, 0x00,
   0x78, 0x00, 0x78, 0x00, 0x30, 0x00};"

    image create bitmap darkLineDnImg$w -data "
#define darkLineDn10x9_width 10
#define darkLineDn10x9_height 9
static unsigned char darkLineDn10x9_bits[] = {
   0xff, 0x03, 0x03, 0x00, 0x02, 0x00, 0x06, 0x00, 0x04, 0x00, 0x0c, 0x00,
   0x08, 0x00, 0x18, 0x00, 0x10, 0x00};"

    image create bitmap lightLineDnImg$w -data "
#define lightLineDn10x9_width 10
#define lightLineDn10x9_height 9
static unsigned char lightLineDn10x9_bits[] = {
   0x00, 0x00, 0x00, 0x03, 0x00, 0x01, 0x80, 0x01, 0x80, 0x00, 0xc0, 0x00,
   0x40, 0x00, 0x60, 0x00, 0x20, 0x00};"
}

#------------------------------------------------------------------------------
# tablelist::sunken12x11Arrows
#------------------------------------------------------------------------------
proc tablelist::sunken12x11Arrows w {
    image create bitmap triangleUpImg$w -data "
#define triangleUp12x11_width 12
#define triangleUp12x11_height 11
static unsigned char triangleUp12x11_bits[] = {
   0x60, 0x00, 0xf0, 0x00, 0xf0, 0x00, 0xf8, 0x01, 0xf8, 0x01, 0xfc, 0x03,
   0xfc, 0x03, 0xfe, 0x07, 0xfe, 0x07, 0xff, 0x0f, 0xff, 0x0f};"

    image create bitmap darkLineUpImg$w -data "
#define darkLineUp12x11_width 12
#define darkLineUp12x11_height 11
static unsigned char darkLineUp12x11_bits[] = {
   0x20, 0x00, 0x30, 0x00, 0x10, 0x00, 0x18, 0x00, 0x08, 0x00, 0x0c, 0x00,
   0x04, 0x00, 0x06, 0x00, 0x02, 0x00, 0x03, 0x00, 0x00, 0x00};"

    image create bitmap lightLineUpImg$w -data "
#define lightLineUp12x11_width 12
#define lightLineUp12x11_height 11
static unsigned char lightLineUp12x11_bits[] = {
   0x40, 0x00, 0xc0, 0x00, 0x80, 0x00, 0x80, 0x01, 0x00, 0x01, 0x00, 0x03,
   0x00, 0x02, 0x00, 0x06, 0x00, 0x04, 0x00, 0x0c, 0xff, 0x0f};"

    image create bitmap triangleDnImg$w -data "
#define triangleDn12x11_width 12
#define triangleDn12x11_height 11
static unsigned char triangleDn12x11_bits[] = {
   0xff, 0x0f, 0xff, 0x0f, 0xfe, 0x07, 0xfe, 0x07, 0xfc, 0x03, 0xfc, 0x03,
   0xf8, 0x01, 0xf8, 0x01, 0xf0, 0x00, 0xf0, 0x00, 0x60, 0x00};"

    image create bitmap darkLineDnImg$w -data "
#define darkLineDn12x11_width 12
#define darkLineDn12x11_height 11
static unsigned char darkLineDn12x11_bits[] = {
   0xff, 0x0f, 0x03, 0x00, 0x02, 0x00, 0x06, 0x00, 0x04, 0x00, 0x0c, 0x00,
   0x08, 0x00, 0x18, 0x00, 0x10, 0x00, 0x30, 0x00, 0x20, 0x00};"

    image create bitmap lightLineDnImg$w -data "
#define lightLineDn12x11_width 12
#define lightLineDn12x11_height 11
static unsigned char lightLineDn12x11_bits[] = {
   0x00, 0x00, 0x00, 0x0c, 0x00, 0x04, 0x00, 0x06, 0x00, 0x02, 0x00, 0x03,
   0x00, 0x01, 0x80, 0x01, 0x80, 0x00, 0xc0, 0x00, 0x40, 0x00};"
}

#------------------------------------------------------------------------------
# tablelist::createSortRankImgs
#------------------------------------------------------------------------------
proc tablelist::createSortRankImgs win {
    variable scalingpct
    if {$scalingpct > 150} {
	variable centerArrows
	if {$centerArrows} {
	    image create bitmap sortRank1Img$win -data "
#define sortRank1_width 5
#define sortRank1_height 8
static unsigned char sortRank1_bits[] = {
   0x08, 0x0c, 0x0a, 0x08, 0x08, 0x08, 0x08, 0x08};"

	    image create bitmap sortRank2Img$win -data "
#define sortRank2_width 5
#define sortRank2_height 8
static unsigned char sortRank2_bits[] = {
   0x0e, 0x11, 0x10, 0x10, 0x08, 0x04, 0x02, 0x1f};"

	    image create bitmap sortRank3Img$win -data "
#define sortRank3_width 5
#define sortRank3_height 8
static unsigned char sortRank3_bits[] = {
   0x0e, 0x11, 0x10, 0x0c, 0x10, 0x10, 0x11, 0x0e};"

	    image create bitmap sortRank4Img$win -data "
#define sortRank4_width 5
#define sortRank4_height 8
static unsigned char sortRank4_bits[] = {
   0x08, 0x0c, 0x0a, 0x09, 0x1f, 0x08, 0x08, 0x08};"

	    image create bitmap sortRank5Img$win -data "
#define sortRank5_width 5
#define sortRank5_height 8
static unsigned char sortRank5_bits[] = {
   0x1f, 0x01, 0x01, 0x0f, 0x10, 0x10, 0x11, 0x0e};"

	    image create bitmap sortRank6Img$win -data "
#define sortRank6_width 5
#define sortRank6_height 8
static unsigned char sortRank6_bits[] = {
   0x0e, 0x11, 0x01, 0x0f, 0x11, 0x11, 0x11, 0x0e};"

	    image create bitmap sortRank7Img$win -data "
#define sortRank7_width 5
#define sortRank7_height 8
static unsigned char sortRank7_bits[] = {
   0x1f, 0x08, 0x08, 0x04, 0x04, 0x02, 0x02, 0x02};"

	    image create bitmap sortRank8Img$win -data "
#define sortRank8_width 5
#define sortRank8_height 8
static unsigned char sortRank8_bits[] = {
   0x0e, 0x11, 0x11, 0x0e, 0x11, 0x11, 0x11, 0x0e};"

	    image create bitmap sortRank9Img$win -data "
#define sortRank9_width 5
#define sortRank9_height 8
static unsigned char sortRank9_bits[] = {
   0x0e, 0x11, 0x11, 0x11, 0x1e, 0x10, 0x11, 0x0e};"

	} else {
	    image create bitmap sortRank1Img$win -data "
#define sortRank1_width 7
#define sortRank1_height 10
static unsigned char sortRank1_bits[] = {
   0x18, 0x1c, 0x1e, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18};"

	    image create bitmap sortRank2Img$win -data "
#define sortRank2_width 7
#define sortRank2_height 10
static unsigned char sortRank2_bits[] = {
   0x3e, 0x7f, 0x63, 0x60, 0x30, 0x18, 0x0c, 0x06, 0x7f, 0x7f};"

	    image create bitmap sortRank3Img$win -data "
#define sortRank3_width 7
#define sortRank3_height 10
static unsigned char sortRank3_bits[] = {
   0x3e, 0x7f, 0x63, 0x60, 0x38, 0x38, 0x60, 0x63, 0x7f, 0x3e};"

	    image create bitmap sortRank4Img$win -data "
#define sortRank4_width 7
#define sortRank4_height 10
static unsigned char sortRank4_bits[] = {
   0x30, 0x38, 0x3c, 0x36, 0x33, 0x7f, 0x7f, 0x30, 0x30, 0x30};"

	    image create bitmap sortRank5Img$win -data "
#define sortRank5_width 7
#define sortRank5_height 10
static unsigned char sortRank5_bits[] = {
   0x7f, 0x7f, 0x03, 0x03, 0x3f, 0x7f, 0x60, 0x63, 0x7f, 0x3e};"

	    image create bitmap sortRank6Img$win -data "
#define sortRank6_width 7
#define sortRank6_height 10
static unsigned char sortRank6_bits[] = {
   0x3e, 0x7f, 0x63, 0x03, 0x3f, 0x7f, 0x63, 0x63, 0x7f, 0x3e};"

	    image create bitmap sortRank7Img$win -data "
#define sortRank7_width 7
#define sortRank7_height 10
static unsigned char sortRank7_bits[] = {
   0x7f, 0x7f, 0x30, 0x30, 0x18, 0x18, 0x0c, 0x0c, 0x06, 0x06};"

	    image create bitmap sortRank8Img$win -data "
#define sortRank8_width 7
#define sortRank8_height 10
static unsigned char sortRank8_bits[] = {
   0x3e, 0x7f, 0x63, 0x63, 0x3e, 0x3e, 0x63, 0x63, 0x7f, 0x3e};"

	    image create bitmap sortRank9Img$win -data "
#define sortRank9_width 7
#define sortRank9_height 10
static unsigned char sortRank9_bits[] = {
   0x3e, 0x7f, 0x63, 0x63, 0x7f, 0x7e, 0x60, 0x63, 0x7f, 0x3e};"
	}

    } else {
	image create bitmap sortRank1Img$win -data "
#define sortRank1_width 4
#define sortRank1_height 6
static unsigned char sortRank1_bits[] = {
   0x04, 0x06, 0x04, 0x04, 0x04, 0x04};"

	image create bitmap sortRank2Img$win -data "
#define sortRank2_width 4
#define sortRank2_height 6
static unsigned char sortRank2_bits[] = {
   0x06, 0x09, 0x08, 0x04, 0x02, 0x0f};"

	image create bitmap sortRank3Img$win -data "
#define sortRank3_width 4
#define sortRank3_height 6
static unsigned char sortRank3_bits[] = {
   0x0f, 0x08, 0x06, 0x08, 0x09, 0x06};"

	image create bitmap sortRank4Img$win -data "
#define sortRank4_width 4
#define sortRank4_height 6
static unsigned char sortRank4_bits[] = {
   0x04, 0x06, 0x05, 0x0f, 0x04, 0x04};"

	image create bitmap sortRank5Img$win -data "
#define sortRank5_width 4
#define sortRank5_height 6
static unsigned char sortRank5_bits[] = {
   0x0f, 0x01, 0x07, 0x08, 0x09, 0x06};"

	image create bitmap sortRank6Img$win -data "
#define sortRank6_width 4
#define sortRank6_height 6
static unsigned char sortRank6_bits[] = {
   0x06, 0x01, 0x07, 0x09, 0x09, 0x06};"

	image create bitmap sortRank7Img$win -data "
#define sortRank7_width 4
#define sortRank7_height 6
static unsigned char sortRank7_bits[] = {
   0x0f, 0x08, 0x04, 0x04, 0x02, 0x02};"

	image create bitmap sortRank8Img$win -data "
#define sortRank8_width 4
#define sortRank8_height 6
static unsigned char sortRank8_bits[] = {
   0x06, 0x09, 0x06, 0x09, 0x09, 0x06};"

	image create bitmap sortRank9Img$win -data "
#define sortRank9_width 4
#define sortRank9_height 6
static unsigned char sortRank9_bits[] = {
   0x06, 0x09, 0x09, 0x0e, 0x08, 0x06};"
    }
}

#------------------------------------------------------------------------------
# tablelist::createCheckbuttonImgs
#------------------------------------------------------------------------------
proc tablelist::createCheckbuttonImgs {} {
    variable svgSupported
    variable winSys
    set onX11 [expr {$winSys eq "x11"}]

    if {$svgSupported} {
	if {$onX11} {
	    set checkedData {
<svg width="16" height="16" version="1.1" xmlns="http://www.w3.org/2000/svg">
 <path d="m0 0v16l1-1v-14h14l1-1h-16z" fill="#888"/>
 <path d="m16 0-1 1v14h-14l-1 1h16v-16z" fill="#fff"/>
 <rect x="1.5" y="1.5" width="13" height="13" fill="#fff" stroke="#e2e2e2"/>
 <path d="m4.5 8 3 3 4-6" fill="none" stroke="#000" stroke-linecap="round" stroke-linejoin="round" stroke-width="2"/>
</svg>
	    }
	    set uncheckedData {
<svg width="16" height="16" version="1.1" xmlns="http://www.w3.org/2000/svg">
 <path d="m0 0v16l1-1v-14h14l1-1h-16z" fill="#888"/>
 <path d="m16 0-1 1v14h-14l-1 1h16v-16z" fill="#fff"/>
 <rect x="1.5" y="1.5" width="13" height="13" fill="#fff" stroke="#e2e2e2"/>
</svg> 
	    }
	    set tristateData {
<svg width="16" height="16" version="1.1" xmlns="http://www.w3.org/2000/svg">
 <path d="m0 0v16l1-1v-14h14l1-1h-16z" fill="#888"/>
 <path d="m16 0-1 1v14h-14l-1 1h16v-16z" fill="#fff"/>
 <rect x="1" y="1" width="14" height="14" fill="#e2e2e2"/>
 <path d="m4.5 8 3 3 4-6" fill="none" stroke="#808080" stroke-linecap="round" stroke-linejoin="round" stroke-width="2"/>
</svg>
	    }
	} else {
	    set checkedData {
<svg width="16" height="16" version="1.1" xmlns="http://www.w3.org/2000/svg">
 <path d="m0 0v15h1v-14h14v-1z" fill="#a0a0a0"/>
 <path d="m1 1v13h1v-12h12v-1z" fill="#696969"/>
 <path d="m14 1v13h-13v1h14v-14z" fill="#e3e3e3"/>
 <path d="m15 0v15h-15v1h16v-16z" fill="#fff"/>
 <rect x="2" y="2" width="12" height="12" fill="#fff"/>
 <path d="m4.5 8 3 3 4-6" fill="none" stroke="#000" stroke-linecap="round" stroke-linejoin="round" stroke-width="2"/>
</svg>
	    }
	    set uncheckedData {
<svg width="16" height="16" version="1.1" xmlns="http://www.w3.org/2000/svg">
 <path d="m0 0v15h1v-14h14v-1z" fill="#a0a0a0"/>
 <path d="m1 1v13h1v-12h12v-1z" fill="#696969"/>
 <path d="m14 1v13h-13v1h14v-14z" fill="#e3e3e3"/>
 <path d="m15 0v15h-15v1h16v-16z" fill="#fff"/>
 <rect x="2" y="2" width="12" height="12" fill="#fff"/>
</svg> 
	    }
	    set tristateData {
<svg width="16" height="16" version="1.1" xmlns="http://www.w3.org/2000/svg">
 <path d="m0 0v15h1v-14h14v-1z" fill="#a0a0a0"/>
 <path d="m1 1v13h1v-12h12v-1z" fill="#696969"/>
 <path d="m14 1v13h-13v1h14v-14z" fill="#e3e3e3"/>
 <path d="m15 0v15h-15v1h16v-16z" fill="#fff"/>
 <rect x="2" y="2" width="12" height="12" fill="#e3e3e3"/>
 <path d="m4.5 8 3 3 4-6" fill="none" stroke="#000" stroke-linecap="round" stroke-linejoin="round" stroke-width="2"/>
</svg>
	    }
	}

	variable svgfmt
	variable checkedImg   [image create photo tablelist_checkedImg \
	    -format $svgfmt -data $checkedData]
	variable uncheckedImg [image create photo tablelist_uncheckedImg \
	    -format $svgfmt -data $uncheckedData]
	variable tristateImg  [image create photo tablelist_tristateImg \
	    -format $svgfmt -data $tristateData]

    } else {
	variable scalingpct
	switch $scalingpct {
	    100 {
		if {$onX11} {
		    set checkedData "
R0lGODlhEAAQAIQTAAAAAAEBAQ0NDRERESYmJkxMTFBQUIiIiJWVlZaWlqGhoampqa2trbOzs7W1
tdfX19jY2OLi4uXl5f///////////////////////////////////////////////////yH5BAEK
AB8ALAAAAAAQABAAAAVT4CGOZAkdUaqu64ROcCzDkVvPeP3i0yI4E91tJhkAGEEbzwAo0JQOQQKm
AAwkz1cjEEAUAYqYEIbgEpqyMTlgxYqVsYRgMVPz3rt7lsVXTR56OCEAOw=="

		    set uncheckedData "
R0lGODlhEAAQAMIEAIiIiNfX19jY2OLi4v///////////////yH5BAEKAAcALAAAAAAQABAAAAMr
CLrcAiPKOQkkOGs8bN9gd4Gb+JGZiWrqynnuO7otDcf1mqMm5UeEQEyTAAA7"

		    set tristateData "
R0lGODlhEAAQAIQQAICAgIWFhYaGhoiIiI+Pj52dnZ+fn7m5ubq6ur6+vsHBwcLCwsXFxdfX19jY
2OLi4v///////////////////////////////////////////////////////////////yH5BAEK
AB8ALAAAAAAQABAAAAVM4CCOZOkMT6quK4SycOrG8UwrASO/sCMAix3NACiobIwAIpUACBzHFwMA
OPgAiRbvQCUUWbYU1wnVshABBSxMi7bBvPcD0oDY7/h8CAA7"
		} else {
		    set checkedData "
R0lGODlhEAAQAIQSAAAAAAEBAQ0NDRERESYmJkxMTFBQUGlpaZWVlZaWlqCgoKGhoampqa2trbOz
s7W1tePj4+Xl5f///////////////////////////////////////////////////////yH5BAEK
AB8ALAAAAAAQABAAAAVSoCKOZCkpR6quKnQeUizPsYvSuGTDOSM8ulcuMgA0gjecAVCoCR+CRGwB
GEScN0cggCACFrJdDLElMGficaB6DQtlCQGDls65k3YsZM/v9/N2IQA7"

		    set uncheckedData "
R0lGODlhEAAQAMIDAGlpaaCgoOPj4////////////////////yH5BAEKAAQALAAAAAAQABAAAAMq
GLrcEyDKKcUDI+udLeTg4GHhNpbmhWrnKqpuu8ooXdohDnpC7/8/FygBADs="

		    set tristateData "
R0lGODlhEAAQAIQSAAAAAAEBAQwMDA8PDyIiIkREREdHR2lpaYWFhYaGho+Pj5aWlpqamp+fn6Cg
oKGhoczMzOPj4////////////////////////////////////////////////////////yH5BAEK
AB8ALAAAAAAQABAAAAVQoCOOZCk5R6quanQeUSzP8kvfsY0vwpOjOMgAwPjBbgZAoQZ8CBIxBWAA
YcIagQBCCFDMdIgsQUnTRcLT6hcoSwgWNzPOOi876mWJfs/vS0IAOw=="
		}
	    }
	    125 {
		if {$onX11} {
		    set checkedData "
R0lGODlhFAAUAKUpAAAAAA4ODg8PDxAQEBoaGhwcHC8vLzAwMEpKSlVVVV5eXl9fX2dnZ3JycnNz
c4iIiIqKiouLi5+fn6urq7CwsLS0tMzMzM7OztfX19jY2Nzc3N3d3d7e3t/f3+Li4uTk5OXl5enp
6erq6uzs7O7u7vDw8Pb29v39/f7+/v//////////////////////////////////////////////
/////////////////////////////////////////////yH5BAEKAD8ALAAAAAAUABQAAAaUwIdw
SCwSMw8LZ8lsOjmb1EMTKlmvWGwIJNWUUuCwWFziTr/jNLjcRatTjQAlxT6/UxUAwEE3e98lBQAC
Hn1tKSgXJmILehJrfl8RAAcjYHkACGF1fxB6BiMkBAADH5uRKScKnwmOZKipq3qZY5xuqnqltbBg
JwwBE2m2d7uHxKddVVnLVltSHSDR0tPUICIpGMdvQQA7"

		    set uncheckedData "
R0lGODlhFAAUAOMMAIiIiMzMzNfX19jY2Nzc3N3d3d7e3t/f3+Xl5enp6erq6vDw8P//////////
/////yH5BAEKAA8ALAAAAAAUABQAAARREMhJKx0gmM27NwUDEMliniiaICKxMHAsyws7vnMO1y2u
z7zbLxd0DYE24zFW9C2bS2bSeYRGGdZo9jm9YrvXYilFNq1EB4R6zW4jFAyBdxYBADs="

		    set tristateData "
R0lGODlhFAAUAKUgAICAgIWFhYaGhoiIiIqKiouLi5KSkpOTk52dnaCgoKSkpKenp6ysrLW1tb29
vcLCwsTExMbGxszMzNDQ0NfX19jY2Nra2tvb29zc3N3d3d7e3t/f3+Hh4eLi4uTk5Orq6v//////
////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////yH5BAEKAD8ALAAAAAAUABQAAAaGwIFw
SCwSKwOJZclsOi0Z0MDSqVqv2I5HSs16q9vp9xvujhkBCJg77kQAAMZa/M0UAAHKvMuZbK4KcA5W
ZVUNAAcXVW8ACFeFHYcABhcYBAACFY9sHRyBkwmCWJCdn3COo5xVnnCZWaSrCwEPXrBte7epdLlz
Gh6/wMHCHh8gFCDIycrLykEAOw=="
		} else {
		    set checkedData "
R0lGODlhFAAUAKUpAAAAAA4ODg8PDxAQEBoaGhwcHC8vLzAwMEpKSlVVVV5eXl9fX2dnZ21tbXJy
cnNzc3Z2doqKiouLi5eXl5+fn6CgoKurq7CwsLKysrS0tL29vc3Nzc7Oztzc3OLi4uTk5Ofn5+vr
6+zs7O7u7vDw8PPz8/b29v39/f7+/v//////////////////////////////////////////////
/////////////////////////////////////////////yH5BAEKAD8ALAAAAAAUABQAAAaTwIpw
SCwONakKpMFsOp8YULIx2VivWGwnNN2kvuBw2MStNLzi9JfcVYMdgUuKbUarMwDAY14+u0kFAAIe
fG0oHCZhC3kUa31eEgAHIl94AAhgdH4ReQYiIwQAAx+ZjyknCp0JjGOmp6l5l2Kadqh5o7OuXycM
ARZptG7AusKOSRgdJsrLzMwhXBogz9PU1c8lxdlBADs="

		    set uncheckedData "
R0lGODlhFAAUAOMMAG1tbXZ2dpeXl6CgoLKysr29vc3Nzdzc3Ofn5+vr6/Pz8/b29v//////////
/////yH5BAEKAA8ALAAAAAAUABQAAARScMhJ6yxsBMC7/wSSAYJhnih6JKPBvHAcL+wAuHL+0q2u
8zacb1a7DWVA4xGWFC6bS2bReYRGGdZo9jm9YrtXIOGwKJvP5wSrgFC733C1wquLAAA7"

		    set tristateData "
R0lGODlhFAAUAKUoAAAAAAwMDA0NDQ4ODhcXFxkZGSoqKisrK0JCQkxMTFRUVFVVVVxcXGVlZWZm
Zm1tbXZ2dnt7e3x8fI6OjpiYmJ2dnaCgoLKysre3t7q6ur29vcnJycvLy9LS0tPT09TU1NbW1tvb
2+Hh4eLi4uPj4+fn5+vr6/Pz8///////////////////////////////////////////////////
/////////////////////////////////////////////yH5BAEKAD8ALAAAAAAUABQAAAaPQItw
SCwONSgL5MFsOp+XUvIxyVivWKzHNM2QvuCwmGt5eMVoMNmcBjcCle/6nLYAAA55tw0qAAQbemVe
IxghYQt3E2p7EgAHHV92AAhhcyQRdwYdHwQAAxyWeyIKmgmKY3skpHd3lamDYKyfobBssgwBFGmX
bWi9vqIWFx7BqRolJsrLzM0mJyjR0tPU1UEAOw=="
		}
	    }
	    150 {
		if {$onX11} {
		    set checkedData "
R0lGODlhGAAYAKUjAAAAAAICAg4ODg8PDyYmJjIyMkJCQkNDQ0REREhISEtLS2JiYnJycoiIiJGR
kZycnJ2dnaCgoKSkpKurq6+vr7+/v8LCwsPDw8TExNbW1tfX19jY2OLi4uvr6+3t7fLy8vX19fb2
9v7+/v//////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////yH5BAEKAD8ALAAAAAAYABgAAAaqwIZw
SCwahZuGxMJsOp/Pzahx4Viv2Gy2M62OvuCwGMzhUjnjtLjcRavf7PMbHDoIKN+4dz5iAAAKeWZ7
bxgBfxGCbXMgBH8IIopyIx8OFWJ+AANuI3puCwABEGCGfw9hnl+goaMhjgAJkWSDbh4Ff6KZm2u0
YLa4hwCnvIu+t3+wsqi9Yb+anMvFzQYCE2qpfGPY2dGT3LNtWuJaZhkd5+jp6uohIxrfb0EAOw=="

		    set uncheckedData "
R0lGODlhGAAYAOMKAIiIiKSkpMLCwsPDw9bW1tfX19jY2OLi4uvr6/b29v//////////////////
/////yH5BAEKAA8ALAAAAAAYABgAAARYEMhJq5UGBMG7/5+hAMNhnmiaImOpvHAswwdLHnMu1y2u
/7zbD2hzDXNB43FX9C1jSefzFZ1Cm1YaNquocr1ZsFU8JT/NS/QxqmqrbASEfE6v1xOKAncWAQA7"

		    set tristateData "
R0lGODlhGAAYAIQeAICAgIGBgYWFhYiIiI+Pj5OTk5mZmZqampycnKSkpKampqysrLi4uLy8vL6+
vsLCwsPDw8nJyczMzNbW1tfX19jY2Nvb293d3d7e3t/f3+Hh4eLi4uvr6/b29v///////yH5BAEK
AB8ALAAAAAAYABgAAAWW4CCOZGmK1ZA8bOu+b+UN0GbfeJ5zc63/Oh4NSLwJfUXgMWnLGATIJXMB
ACCMPaYkUHVgh0UMoXrQfJEXRiRHBQgoOOlGAQg0btvqPZ610et3GWNWZnxgGxYFVXZtb0F9NomL
XAB7O5CRilWEP3I3km5wnZifTw9EnkyGSKqrrY+HrzZCExy2t7i5uR0eFB6/wMHCw78hADs="
		} else {
		    set checkedData "
R0lGODlhGAAYAKUiAAAAAAICAg4ODg8PDyYmJjIyMkJCQkNDQ0REREhISEtLS2JiYmlpaXJycnx8
fI6OjpGRkZycnJ2dnaCgoKurq6+vr7+/v8TExM3Nzd/f3+Li4uPj4+3t7fLy8vX19fb29v39/f7+
/v//////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////yH5BAEKAD8ALAAAAAAYABgAAAaswIlw
SCwaJxnR5OFoOp/QJ4ajdDCu2Kw2u/lUGaKweEwWd7/lNPk8sarfIrYbLvocBJWwHExvAAAKel5t
fG8XAX8TgmhvHgR/CCGLhGEdEBZkfgADGmaDcwsAARJih38RY3thoaKkH48ACZKejBwFf6OanGuf
hba4iACovIxhv3+xs6m9ZMe7ZarNBgIUatF0xJTY2XPbtBMYG+Lj5OXlXhkcH+vs7e7uIN50QQA7"

		    set uncheckedData "
R0lGODlhGAAYAOMKAGlpaXx8fI6OjqCgoM3Nzd/f3+Pj4+3t7fb29v39/f//////////////////
/////yH5BAEKAA8ALAAAAAAYABgAAARbcMhJqx1FDRG6/+BHHFoAnGiqpgZSAkosz7TcvnVO34Op
/wqeD5gTwog1IzLp6h2XtuYQGlNSq9In1XrlbrNXLC7shZaXZ2SayCMY3vC4XO4qHBD4vH6/T4R1
EQA7"

		    set tristateData "
R0lGODlhGAAYAKUkAAAAAAICAgwMDA0NDSIiIi0tLTs7Ozw8PD09PUBAQENDQ1dXV2VlZWlpaXx8
fIGBgYuLi4yMjI6OjpiYmJycnKCgoKqqqq6ursnJyc3NzdPT09fX19ra2tvb29/f3+Li4uPj4+3t
7fb29v39/f//////////////////////////////////////////////////////////////////
/////////////////////////////////////////////yH5BAEKAD8ALAAAAAAYABgAAAaqwIpw
SCwaKx5SReJoOp/QZyakdDSu2Kw2CxJVG6CweEweeyvWsrp8Tq/f3S883DkIKOI2eM4AABR5cnAX
AX4SgWh7axwEfggfiG4bDxZkfQADGGaCCwABEWKEfhBkemGdnqAdjQAJkJuJYRoFfp+XmWyCILO1
hQCkubFivH6tr6W6srSYmmqmZBoGAhNvz3PBbtfIwtqwGd25HiEi5OXm5+cjJOvs7e7v7UEAOw=="
		}
	    }
	    175 {
		if {$onX11} {
		    set checkedData "
R0lGODlhHAAcAKUqAAAAAAcHBwgICA4ODhQUFBgYGCkpKS4uLi8vLzQ0NDU1NT4+PkVFRVVVVVZW
VmlpaYSEhIiIiI6Ojpqampubm6SkpKWlpa6urrCwsNHR0dLS0tPT09XV1dbW1tfX19jY2NnZ2eHh
4eLi4unp6e/v7/Dw8Pb29vv7+/39/f7+/v//////////////////////////////////////////
/////////////////////////////////////////////yH5BAEKAD8ALAAAAAAcABwAAAbcwIhw
SCwajZ+IxMJsOp/QZkcVqYiu2Kx2izVRraOSeEwul0cib1VUUrnf8Hi8lP6y5Xg8XW1t5/9ue3Z+
gG4gBgQYgXVrhIAnCQAACIt8d4UqEJIADpWDmB0CkgMhno2FJwqbFG+CpyofDQ+OmZsMKa2MfW4L
kgokbxsBo6W5ln69vsCQmxNzupcaBJu/mpK3z8dvGdOSB8MApHKuu28dBZuretC03OnY4+xy7uHF
8dpyG4gXf+SXmPc+AQz4aiAcf2HMKDSDxhKXhw/VcDBBsaLFixgrolDhwSCmIAA7"

		    set uncheckedData "
R0lGODlhHAAcAOMNAIiIiI6OjqSkpKWlpdXV1dbW1tfX19jY2OLi4unp6fDw8Pb29v39/f//////
/////yH5BAEKAA8ALAAAAAAcABwAAAR7EMhJq7UHhMG7/2BXNICAnGiqruhCmokiz3RdJ4hbIkrj
/8BgUJF78YRIJFFn6iWfvqXRCU1Kd9Sq8NrUWotYrxLcFQ/JRzOQm1ZH0Vk1O26eu3/2eyN/57v9
cnB6e4J6gHVoMTaLNjhMLJCROgQLlZaXmJmWDA0Gg0gRADs="

		    set tristateData "
R0lGODlhHAAcAKUjAICAgIKCgoODg4WFhYiIiImJiY6Ojo+Pj5KSkpSUlJiYmJqamqCgoKGhoaSk
pKWlpaioqLOzs7u7u8PDw8TExNDQ0NHR0dPT09XV1dbW1tfX19jY2Nzc3N3d3eDg4OHh4eLi4vb2
9v39/f//////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////yH5BAEKAD8ALAAAAAAcABwAAAa8QIJw
SCwajRuC4cFsOp/QZmZEcICu2Kx2iw1Rrdxw2FsVm7Vk8PmcXq/b7uvlQKBk4W5PAgBA3L9xIBF8
AA1/ZW4XAnwDGYdqZnqEEmiAWBcMEB1ag3wLH5WIVwp8CRxYFgGMjqGQpKWnknyUW3ggFgSEpp0A
n1y2IBW5fAiqAI1jllkXBYSTYsBXws6+yaJa08es1pBaFnQTbMqBtePkj+e/5ukg0elkGCHy8/T1
9vMiIxoj/P3+/wABBgEAOw=="
		} else {
		    set checkedData "
R0lGODlhHAAcAKUvAAAAAAcHBwgICA4ODhQUFBgYGCkpKS4uLi8vLzQ0NDU1NT4+PkVFRVVVVVZW
VmlpaYSEhI6OjpeXl5qampubm56enqCgoKGhoa6urrCwsLS0tLq6us3NzdHR0dLS0tPT09bW1tjY
2NnZ2dzc3OHh4ePj4+vr6+/v7/Dw8Pb29vj4+Pn5+fv7+/39/f7+/v//////////////////////
/////////////////////////////////////////////yH5BAEKAD8ALAAAAAAcABwAAAbqQItw
SCwai6qXpRJpOp/QaOSiWSkjj6x2y+0+NqXW9SHhmM/odHoUHnNe8Lh8Pk+1Ldg3fU+3i/EPenyD
L35uhHIiBgQZcIaAgoQsCQAACI53eYhwEJUADph/moggApUDJKGHkgqeFHGPoyENDyhznZUMLrCZ
gXALlQoncR8Bp6m8or4vwMHDk54Tdb16HgSewrgAutPKgh3XlQfGAKh91HIgBZ6ue7HLceDs3Ofe
dPLlyPWrcx+LGIPeRdokRyBBd+gOdlNyYcOIFBAjSpw40cQdDSUyatzIsaNGMSpWtBhJsqTJkyQV
KgwCADs="

		    set uncheckedData "
R0lGODlhHAAcAIQQAGlpaY6OjpeXl56enqCgoKGhobS0tLq6us3Nzdzc3OPj4+vr6/b29vj4+Pn5
+f39/f///////////////////////////////////////////////////////////////yH5BAEK
AB8ALAAAAAAcABwAAAWNICGOZGmWDUQMQeu+cBwUhqMGQK7vfA8ciscNIEAYj8hkMhEcIiDQqHQ6
ZTQJuCd1S7UKsQAtdwzxOslkM1iM7l6zba4aHnd/6XXpPJyvvvl9UXtsfYOBgn+EeYaHZYmNjneA
h4yUj42VgZmFVwUHCQyhoqOkpAtXBgqqq6ytrqtCDQ4PtLW2t7i1kGQhADs="

		    set tristateData "
R0lGODlhHAAcAKUrAAAAAAYGBgcHBwwMDBISEhUVFSQkJCkpKSoqKi4uLi8vLzc3Nz09PUxMTE1N
TV1dXWlpaXZ2domJiYqKio6Ojpubm52dnZ6enqCgoKGhobS0tLq6uru7u7y8vL6+vsDAwMHBwcjI
yNPT09XV1dbW1t/f3+Li4uPj4/j4+Pn5+f39/f//////////////////////////////////////
/////////////////////////////////////////////yH5BAEKAD8ALAAAAAAcABwAAAbWQIxw
SCwai6gV5kJpOp/QKCWjSSkpkKx2y+1CNifVFULZmM/odFoUHoNP8Lh8ThdjsG+6Xm/H7/9zfV+A
ciAGBBZygnmAJQkAAAiKboRwEZAADpN3g4QeApADIZt+jQqYE4GUJx8NDyRzl5AMJqqcbwuQCiNx
HQGho7alubq8jpgSfKscBJi7sgC0yrdxG82QB78AonuLch4FmKh/3nLW4tLdq+bX3OTrch2HFYTl
lerU9/il+nVKGRvY9POHQcNAdShSqFjIsKHDhwxXSJxIsaLFixKDAAA7"
		}
	    }
	    200 {
		if {$onX11} {
		    set checkedData "
R0lGODlhIAAgAIQZAAAAAAQEBAsLCw0NDRoaGhsbG0JCQkREREdHR4iIiI2NjZiYmJmZmaioqKur
q6ysrK6urrKysrOzs9fX19jY2N3d3eDg4OLi4v7+/v///////////////////////////yH5BAEK
AB8ALAAAAAAgACAAAAXOYCKOZGmeI4WubJqJVyzPdG1nb2Lv/IzDF5xwSCwOYz9d0MhkInPPplT4
BE6vmaoSO4wQCBLq0srNWAYAQEGcjF4xh7SaDV1iF3IAg06+nuUGGHxbbwhyAhVHY4QZEl8PRXhy
C0RaUQVpAQ1Df2kHgoptdpiZmxlwcgMWRZZ2DwFymhmSaZSsi24NsJkKaJ6glbh2OA67eQCITsJF
uscAtkatRs1yn03SRsVpydfLTBBfEVPYZdHe5bei6Obq68GiPfE08PL1PxTuUxP5UyEAOw=="

		    set uncheckedData "
R0lGODlhIAAgAMIEAIiIiNfX19jY2OLi4v///////////////yH5BAEKAAcALAAAAAAgACAAAANp
CLrc/kvASSNRI+vNuycX4I3kBmIDqK5su2anmLo0DYd3ras3uv+Engy4E+aILuMMmZz5mM3YEcpz
DqksJTZrnWK126p0GQaHg13y1lxOn0Hstfsd/87PdWoeqiz5OWN/gk4Cby4Bhi4JADs="

		    set tristateData "
R0lGODlhIAAgAIQUAICAgIKCgoSEhIWFhYiIiIqKipmZmZqampubm7a2tru7u8HBwcLCwsPDw8XF
xdXV1dfX19jY2OHh4eLi4v///////////////////////////////////////////////yH5BAEK
AB8ALAAAAAAgACAAAAW6ICGOZGmeY4SubEqJUyzPdG1TL2Hv/IzDvWDtpxMaY8TjMakUMpsTR6Hg
oD2VkAEAULDmoJLDlusFKhVjgKJcPGbHBglbKUGMBY/hdyYtMGpoY2t6ZjEFWwELM29bB3KEbYZj
iTFhYwMQO1cTDAGTioFbgzd7MwueiAlajY+khTKdaXd5PJsyp7JqQba3qKy7pTaxAHhOwTYNU1XG
r1CQzj280EjH0zLS09jQPxE43t/g4eLeEOPm598hADs="
		} else {
		    set checkedData "
R0lGODlhIAAgAIQYAAAAAAQEBAsLCw0NDRoaGhsbG0JCQkREREdHR2lpaY2NjZiYmJmZmaCgoKio
qKurq6ysrK6urrKysrOzs93d3eDg4OPj4/7+/v///////////////////////////////yH5BAEK
AB8ALAAAAAAgACAAAAXXYCOOZGmeIoahbDuqYiLPdG3XlgU3d+/LuZ1MRSwaj8XgipdAOp/KWPNJ
TeqWw6o2ytQaJQTChMjNejGVAQBQIF+lZ8zlsGa7hVPvog5g3LF5VWl1Bhd/cFoXCHUCFFZ4RBNh
EEd7dQtGZXkFawEORYNrB4aPgEScnZ9ydGsDFUeaRBABdZ4YlmuYsG9dRA60nQpqoqSZvGYqD8B8
AI1OsUa/zAC6SNDRywCjUMeBRcprztyQThFhElXXcbvk6+ym7u+I8aUiOff4+fr7vPz+/1foCRxY
JAQAOw=="

		    set uncheckedData "
R0lGODlhIAAgAMIDAGlpaaCgoOPj4////////////////////yH5BAEKAAQALAAAAAAgACAAAANq
GLrc/moMSOuSCujNu++CgAVfaWrhqEls675tOpEAbN9yVt98LM6AXa+Xow2HxeCR+NMteUnh8xWd
2qpWatOYdWG7rC94IAaXu+ds2rqetp/vZfw4R26VY0mdOQr5/4CBgluDhYY/eYldCQA7"

		    set tristateData "
R0lGODlhIAAgAIQYAAAAAAQEBAoKCgwMDBcXFxgYGDs7Oz09PT8/P2lpaX5+foeHh4iIiJaWlpiY
mJmZmZubm56enp+fn6CgoMXFxcfHx+Li4uPj4////////////////////////////////yH5BAEK
AB8ALAAAAAAgACAAAAXJ4CSOZGmeIoahbDuqYiLPdG3X1wVPd+/LuR0wRywaj0ZhAslsBle8pXNa
VFKvOugQe4kQCJKkVoqtDACAgjhGploO6PQ6yl3EAYz5dmqOGyx6bU0WCHECFEdWORJfD0d2cQtI
ihcFaAENRX1oB4CJY0SWl5kXb3EDFUyUDwFxmBeQaJKqoEQNrZcKZ5yek7VEDrh3AIdOlLbCkVPH
yHedy79GwWjF0GxNEF8RV8xcn9feTd3hROPkWSLn4lDqtCrv8PHy8/T19vYhADs="
		}
	    }
	}

	variable checkedImg   [image create photo tablelist_checkedImg \
	    -format gif -data $checkedData]
	variable uncheckedImg [image create photo tablelist_uncheckedImg \
	    -format gif -data $uncheckedData]
	variable tristateImg  [image create photo tablelist_tristateImg \
	    -format gif -data $tristateData]
    }
}

#------------------------------------------------------------------------------
# tablelist::adwaitaTreeImgs
#------------------------------------------------------------------------------
proc tablelist::adwaitaTreeImgs {} {
    foreach mode {collapsed expanded collapsedSel expandedSel
		  collapsedAct expandedAct collapsedSelAct expandedSelAct} {
	variable adwaita_${mode}Img \
		 [image create photo tablelist_adwaita_${mode}Img]
    }

    variable pngSupported
    if {$pngSupported} {
	tablelist_adwaita_collapsedImg put "
iVBORw0KGgoAAAANSUhEUgAAAA4AAAAOCAYAAAAfSC3RAAAAPUlEQVQoz2NgGGgQT67GTcRqZsIi
FkyMZiYc4gQ1M+GRw6uZiYCLfpGjcTkUk6QRryZc0RFJTjxGMgxaAADyZAiN7tZZlQAAAABJRU5E
rkJggg==" -format png

	tablelist_adwaita_expandedImg put "
iVBORw0KGgoAAAANSUhEUgAAAA4AAAAOCAYAAAAfSC3RAAAARUlEQVQoz+3LsQ2AIABE0UdciF0Y
wPFcyIRdqGjEGANorz+57h5/wwIS1offduxsQUZBfIsaNMFddIU9PER32DDsM/SVKvNODk3dEE6A
AAAAAElFTkSuQmCC" -format png

	tablelist_adwaita_collapsedSelImg put "
iVBORw0KGgoAAAANSUhEUgAAAA4AAAAOCAYAAAAfSC3RAAAASUlEQVQoz2NgGFDw////DGLVMqHx
vYjVzIRFjCjNTDjECWpmwiOHVzMTARd9JEfjckZGxuWkasSrCVs8bvr//38kOQkgkmHQAgDrkiAe
os9KvQAAAABJRU5ErkJggg==" -format png

	tablelist_adwaita_expandedSelImg put "
iVBORw0KGgoAAAANSUhEUgAAAA4AAAAOCAYAAAAfSC3RAAAARUlEQVQoz+3PMQrAIBAF0dkzWlnl
ePZecGxCIJgotuLA7/YVC6ffQk3ANbkrEVFeEGCCO/TAAf5EXWpS67289LSal9GmNWXQI7TzaAnf
AAAAAElFTkSuQmCC" -format png

	tablelist_adwaita_collapsedActImg put "
iVBORw0KGgoAAAANSUhEUgAAAA4AAAAOCAYAAAAfSC3RAAAAM0lEQVQoz2NgGGgQT67G/+Rq/k+u
5v/kav5PrGYmAgYpkGNjPTlOrScncOrJiY4GhkELANUCE+t6oO0cAAAAAElFTkSuQmCC" \
	    -format png

	tablelist_adwaita_expandedActImg put "
iVBORw0KGgoAAAANSUhEUgAAAA4AAAAOCAYAAAAfSC3RAAAANElEQVQoz2NgGAV4QTkDA8N/Arie
HM315NhcT46z8WpiRuMfZWBgYGRgYDjIwMDQONIjHwD6aBnQtK1ZdwAAAABJRU5ErkJggg==" \
	    -format png

	tablelist_adwaita_collapsedSelActImg put "
iVBORw0KGgoAAAANSUhEUgAAAA4AAAAOCAYAAAAfSC3RAAAAOklEQVQoz2NgGFDw////DnI1/idL
838E6CBXI2ma/2MCnJqZCJj1gxwbG8hxagM5gdNATnQ0MAxaAAC4z2BIDOZwwgAAAABJRU5ErkJg
gg==" -format png

	tablelist_adwaita_expandedSelActImg put "
iVBORw0KGgoAAAANSUhEUgAAAA4AAAAOCAYAAAAfSC3RAAAAKElEQVQoz2NgGAW4wf///8v/EwYN
5GhuIMfmBnKc3UCqnxtI1jRMAQD9zHJvoaewSgAAAABJRU5ErkJggg==" -format png
    } else {
	tablelist_adwaita_collapsedImg put "
R0lGODlhDgAOAMIEAAAAAE1NTaCgoKampv///////////////yH5BAEKAAAALAAAAAAOAA4AAAMb
CLrc/kvAFuRUoV6Q9ezeAw5fRpbnl07r5m4JADs=" -format gif

	tablelist_adwaita_expandedImg put "
R0lGODlhDgAOAMIEAAAAAE1NTaampqysrP///////////////yH5BAEKAAAALAAAAAAOAA4AAAMa
CLrc/jDKyUa4+Ipmc9hOp0UdGAkmpa7skwAAOw==" -format gif

	tablelist_adwaita_collapsedSelImg put "
R0lGODlhDgAOAKEBAAAAAP///////////yH5BAEKAAAALAAAAAAOAA4AAAIXhI+pe8EZ3DNRvmoX
zhDfOoEhp03mmRQAOw==" -format gif

	tablelist_adwaita_expandedSelImg put "
R0lGODlhDgAOAKEBAAAAAP///////////yH5BAEKAAAALAAAAAAOAA4AAAIUhI+py+2Pgpw00apu
aJhvCIZiUwAAOw==" -format gif

	tablelist_adwaita_collapsedActImg put "
R0lGODlhDgAOAMIEAAAAAH9/f4CAgKCgoP///////////////yH5BAEKAAQALAAAAAAOAA4AAAMc
SLrc/mvABuRUoF6S9ezeAwpfRpbnl07B5r5KAgA7" -format gif

	tablelist_adwaita_expandedActImg put "
R0lGODlhDgAOAMIEAAAAAH9/f4CAgIiIiP///////////////yH5BAEKAAQALAAAAAAOAA4AAAMa
SLrc/jDKyQa4+IpmM9hOp0UdGAUBpa6slAAAOw==" -format gif

	tablelist_adwaita_collapsedSelActImg put "
R0lGODlhDgAOAKEBAAAAAP///////////yH5BAEKAAAALAAAAAAOAA4AAAIXhI+pe8EZ3DNRvmoX
zhDfOoEhp03mmRQAOw==" -format gif

	tablelist_adwaita_expandedSelActImg put "
R0lGODlhDgAOAKEBAAAAAP///////////yH5BAEKAAAALAAAAAAOAA4AAAIUhI+py+2Pgpw00apu
aJhvCIZiUwAAOw==" -format gif
    }
}

#------------------------------------------------------------------------------
# tablelist::ambianceTreeImgs
#------------------------------------------------------------------------------
proc tablelist::ambianceTreeImgs {} {
    foreach mode {collapsed expanded} {
	variable ambiance_${mode}Img \
		 [image create photo tablelist_ambiance_${mode}Img]
    }

    tablelist_ambiance_collapsedImg put "
R0lGODlhEgAQAKUxAAAAADw7N9/Wxd/Wxt/WyODYyeLZyuHazeTdz+Pd0eTd0uXf0+Xf1efg1OXg
1ujh0+jg1Onj1+nj2Ork2O3m3Ozm3e7p4e/q4e7s5u/s6PHs5PHs5fHs5vHu6fPw6vTw6vTw6/bz
7vbz7/b07vb07/b08Pb08fj28/n49Pr59fr59vv5+Pv6+Pr6+vz6+fz7+v39/f//////////////
/////////////////////////////////////////////yH5BAEKAD8ALAAAAAASABAAAAahwJ9w
SCwWD4KkUnkwFjotmHQKa2UKxENmxXK5XmAva4VpCgWmEwqVSqna61NJMBSERKSSyRTYl0gjJHRn
Hx4dHiAgAYkeHh8fgz8CHJQcGhsBGxuVHJECFxcWAaOkAaAXnhUVFKoVAa2tnhMRErUSAbYRExOe
DxC/vwHAEA0PngoIycrLCAuRBwwG0tPUBg5mQgUJBAPd3gMECVhHS+XYQkEAOw==" -format gif

    tablelist_ambiance_expandedImg put "
R0lGODlhEgAQAKUyAAAAADw7N9/Wxd/Wxt/WyODYyeLZyuHazeTdz+Pd0eTd0uXf0+Xf1efg1OXg
1ujh0+jg1Onj1+nj2Ork2O3m3Ozm3e7p4e/q4e7s5u/s6PHs5PHs5fHs5vHu6fPw6vTw6vTw6/bz
7vbz7/b07vb07/b08Pb08fj18fj28/n49Pr59fr59vv5+Pv6+Pr6+vz6+fz7+v39/f//////////
/////////////////////////////////////////////yH5BAEKAD8ALAAAAAASABAAAAabwJ9w
SCwWD4KkUnkwFjqumHQac2UKxEOG1Xq9YGBvi4VpCgUmVCqlUq3aa1RJMBSERKSSyXTal0gjJHRn
Hx4dHiCJiR4eHx+DPwIckxwaGxwbl5SQAhcXFgGhogGeF5wVFRSoq6wVnBMRErKzshETE5wPELu8
vQ0PnAoIw8TFCAuQBwwGzM3OBg5mQgUJBAPX2AMECVhHS9/SQkEAOw==" -format gif
}

#------------------------------------------------------------------------------
# tablelist::aquaTreeImgs
#------------------------------------------------------------------------------
proc tablelist::aquaTreeImgs {} {
    foreach mode {collapsed expanded collapsedSel expandedSel} {
	variable aqua_${mode}Img \
		 [image create photo tablelist_aqua_${mode}Img]
    }

    variable pngSupported
    variable winSys
    ##nagelfar ignore
    scan $::tcl_platform(osVersion) "%d" majorOSVersion
    if {$winSys eq "aqua" && $majorOSVersion > 10} {
	set osVerPost10 1
    } else {
	set osVerPost10 0
    }

    if {$pngSupported} {
	if {$osVerPost10} {
	    tablelist_aqua_collapsedImg put "
iVBORw0KGgoAAAANSUhEUgAAABEAAAAOCAYAAADJ7fe0AAAAhUlEQVQoz2NgGFaAmYGBgaG4uPih
lZXVvePHj98kxxBGqCH/ofxtDAwMub29vfdIMYQJje/FwMBwvbi4uIoSlyCDawwMDFm9vb0HSXUJ
MtBiYGA4UFxcHECJIdcYGBgcent7NxAyhAWL2C8GBobG3t7eNmLDBN0QsmIHZsgjqOZNQzvZAwA+
LCb4qKbYgQAAAABJRU5ErkJggg==" -format png

	    tablelist_aqua_expandedImg put "
iVBORw0KGgoAAAANSUhEUgAAABEAAAAOCAYAAADJ7fe0AAAAiUlEQVQoz+2SsQkCQRREn3t9aO51
sKmZJtYhXDS5HUwzwtnCVqC5NmB+gZgui9wulwlO8vnMZ2b4/8MfJVaSHsB6ZuZpezMnEoChYjRU
kwBIGoH9F/5q+1ATCZnbVHBTSwqADiCl9IoxvoFdxp1tX5oWmzeSbsAWuNvuW68Tiv5U1GWQdPzd
j/0AfOEdPAaC2LoAAAAASUVORK5CYII=" -format png
	} else {
	    tablelist_aqua_collapsedImg put "
iVBORw0KGgoAAAANSUhEUgAAABEAAAAOCAYAAADJ7fe0AAAAe0lEQVQoz2NgGH6gra3tYVtbmx+5
+hmhhvyH8rcxMDDkVlVV3SPFECY0vhcDA8P1tra2KkpcggyuMTAwZFVVVR0k1SXIQIuBgeFAW1tb
ACWGXGNgYHCoqqraQMgQFixivxgYGBqrqqraiA0TdEPIih2YIY+gmjcN7RQPAIgqI+JZClM5AAAA
AElFTkSuQmCC" -format png

	    tablelist_aqua_expandedImg put "
iVBORw0KGgoAAAANSUhEUgAAABEAAAAOCAYAAADJ7fe0AAAAfklEQVQoz+2SsQ2DUAxEX/4gpCeb
hCZzRGKB62huI7IJlJGSMajSJAhZiP9Fh5RrLPusO1s2/BFxsv0Cqo2et6TzlkgC2oxRm50EwHYP
XFf4h6QmJ5IWblPgppIpZhFJT6ALXPetU7TOD7YHoAZGSZfS66SQ30PcB9u3437sB9yMGwQuEm+e
AAAAAElFTkSuQmCC" -format png
	}

	tablelist_aqua_collapsedSelImg put "
iVBORw0KGgoAAAANSUhEUgAAABEAAAAOCAYAAADJ7fe0AAAAR0lEQVQoz2NgGH7g////N////+9I
qSEwsOT///8SlBry/////5/+//+fRakhMHD6////ppQaAgPOA+YSisOEotihPJ0MCgAABqWnCWRA
sV8AAAAASUVORK5CYII=" -format png

	tablelist_aqua_expandedSelImg put "
iVBORw0KGgoAAAANSUhEUgAAABEAAAAOCAYAAADJ7fe0AAAAT0lEQVQoz2NgGAUY4P///zf/4wc3
iTHEkYAhjsS6ZgkOA5aQ4iWJ////f0Iz4NP///8lSA2bLDRDssgN5NNQA05TElOmUENMKY1y56Gb
YAGl/KcJzjuWxQAAAABJRU5ErkJggg==" -format png
    } else {
	if {$osVerPost10} {
	    tablelist_aqua_collapsedImg put "
R0lGODlhEQAOAMIGAAAAAHNzc3Z2doODg4qKipubm////////yH5BAEKAAcALAAAAAARAA4AAAMf
eLrc/jC+IV0Ipa4bhD7cRVQhJ5XjeXnalX3UJ89OAgA7" -format gif

	    tablelist_aqua_expandedImg put "
R0lGODlhEQAOAMIGAAAAAHNzc3Z2doODg4qKipubm////////yH5BAEKAAcALAAAAAARAA4AAAMf
eLrc/jDKqUa4OIyYsSxdMQmYQB3eSQTEqQRuLM9HAgA7" -format gif
	} else {
	    tablelist_aqua_collapsedImg put "
R0lGODlhEQAOAMIGAAAAAIaGhoiIiJSUlJmZmampqf///////yH5BAEKAAcALAAAAAARAA4AAAMf
eLrc/jC+IV0Ipa4bhD7cRVQhJ5XjeXnalX3UJ89OAgA7" -format gif

	    tablelist_aqua_expandedImg put "
R0lGODlhEQAOAMIGAAAAAIaGhoiIiJSUlJmZmampqf///////yH5BAEKAAcALAAAAAARAA4AAAMf
eLrc/jDKqUa4OIyYsSxdMQmYQB3eSQTEqQRuLM9HAgA7" -format gif
	}

	tablelist_aqua_collapsedSelImg put "
R0lGODlhEQAOAKEBAAAAAP///////////yH5BAEKAAAALAAAAAARAA4AAAIZhI+py73hVJjxTFrv
jXq3DjlaBXgZiaZLAQA7" -format gif

	tablelist_aqua_expandedSelImg put "
R0lGODlhEQAOAKEBAAAAAP///////////yH5BAEKAAAALAAAAAARAA4AAAIXhI+py+1vgpyz0Wpv
eBcCDIGhR5ZmUgAAOw==" -format gif
    }
}

#------------------------------------------------------------------------------
# tablelist::aqua11TreeImgs
#------------------------------------------------------------------------------
proc tablelist::aqua11TreeImgs {} {
    foreach mode {collapsed expanded collapsedSel expandedSel} {
	variable aqua11_${mode}Img \
		 [image create photo tablelist_aqua11_${mode}Img]
    }

    tablelist_aqua11_collapsedImg put "
R0lGODlhCQAIAKECAAAAAICAgP///////yH5BAEKAAAALAAAAAAJAAgAAAINhI8RmMumHnTtRXZR
AQA7" -format gif

    tablelist_aqua11_expandedImg put "
R0lGODlhCQAIAKECAAAAAICAgP///////yH5BAEKAAAALAAAAAAJAAgAAAINhI95kQzhXoSyURVV
KgA7" -format gif

    tablelist_aqua11_collapsedSelImg put "
R0lGODlhCQAIAKEBAAAAAP///////////yH5BAEKAAAALAAAAAAJAAgAAAINhI8RmMumHnTtRXZR
AQA7" -format gif

    tablelist_aqua11_expandedSelImg put "
R0lGODlhCQAIAKEBAAAAAP///////////yH5BAEKAAAALAAAAAAJAAgAAAINhI95kQzhXoSyURVV
KgA7" -format gif
}

#------------------------------------------------------------------------------
# tablelist::arcTreeImgs
#------------------------------------------------------------------------------
proc tablelist::arcTreeImgs {} {
    foreach mode {collapsed expanded collapsedSel expandedSel
		  collapsedAct expandedAct collapsedSelAct expandedSelAct} {
	variable arc_${mode}Img \
		 [image create photo tablelist_arc_${mode}Img]
    }

    variable pngSupported
    if {$pngSupported} {
	tablelist_arc_collapsedImg put "
iVBORw0KGgoAAAANSUhEUgAAAA4AAAAKCAYAAACE2W/HAAAAdUlEQVQoz43PMQrCQBAF0LcJBlJJ
GgsxjaVYewQPH+y8goLYeIKAzYILZsl8GBgGHjPDL3ucBdMUfY8jLhHYFv0HHUYMeEQhvDM+rOF2
YVbiLZ5rP5a5Y8YuVxhekXDLF/wlVVCX0av2Y6qgqbZp6dQTNhEEX90gEJ+LSk5oAAAAAElFTkSu
QmCC" -format png

	tablelist_arc_expandedImg put "
iVBORw0KGgoAAAANSUhEUgAAAA4AAAAKCAYAAACE2W/HAAAAdklEQVQoz8XRPQrCYBCE4ccf0oqF
phPxEBbBOuDZ1SOk10ZME2IjNqvIRyQiiFMu8y67M/xDM2x6PEX4nhriignKN1CJKdrX4SjACxZY
oUqgDAecUxAa1AEvA35AO5zSMwYd/65j4Q17HD8Na44t8m+SHv+swzvwkBDQCQf9GAAAAABJRU5E
rkJggg==" -format png

	tablelist_arc_collapsedSelImg put "
iVBORw0KGgoAAAANSUhEUgAAAA4AAAAKCAYAAACE2W/HAAAAWklEQVQoz8XNsQ1AUBRG4fPMYAMD
SERjDCO8SIxhEIUNNLZTHY1CIeE2nOrPTb5cOFM7NfOy4rJLoFcnoqmDuv2Cxydc3B1TSjOwA7Va
RT4u6qq2n6EmgnIEHTdXWJbfx3TnAAAAAElFTkSuQmCC" -format png

	tablelist_arc_expandedSelImg put "
iVBORw0KGgoAAAANSUhEUgAAAA4AAAAKCAYAAACE2W/HAAAAYklEQVQoz73RsQmAQAxG4YeNowg2
h+CGgmMc2NiIjYuJEzwr4RCPs9GUIR9/QuD3UoM6FmYGNaS9CjiARp0yKAItsOdSlztWo7qqfWnl
9cIJ6t7eu6hbMSmD51dJD7j+7I0n6qZe9ie8GDoAAAAASUVORK5CYII=" -format png

	tablelist_arc_collapsedActImg put "
iVBORw0KGgoAAAANSUhEUgAAAA4AAAAKCAYAAACE2W/HAAAAc0lEQVQoz5XQMQrCQBAF0IcpPUTE
Ugi2Se8VBC+Rm2xt9AS5SrC2Fs9hZbPgFkJmf/UZeDAz/DLgIphN0bc4YYzApuivjAfssUQhPDPu
13DzZ1biFo+1G8vM+OCAXQ1MeZsb3tFPJ9xxVJGECV0NOuMaRV+KwQ8YfvQOIwAAAABJRU5ErkJg
gg==" -format png

	tablelist_arc_expandedActImg put "
iVBORw0KGgoAAAANSUhEUgAAAA4AAAAKCAYAAACE2W/HAAAAfklEQVQoz8XRsQnCYBiE4UdFEII7
WFgZnMAurmNn4RLaBDSzxC2SOoV9GsVasAkSfpBIIHjdd9wLx338QyscOjL7JvfRGA8scPoCHbHE
vW1O8MQNG2yRB9AcGaoQhLoFJ7g2UIQzyrDGKLhj7DDFCxcUv44VI8W6z9KzwX74Bj4AEo6rawBK
AAAAAElFTkSuQmCC" -format png

	tablelist_arc_collapsedSelActImg put "
iVBORw0KGgoAAAANSUhEUgAAAA4AAAAKCAYAAACE2W/HAAAASElEQVQoz2NggIL///8H/f//v5eB
VPD////8/xCwgRzNE6Cat9Jd8yRKnP31////P/7//29OiqYnUE2+dNPkQYqmbqi/iNIEAFLCatI7
yC/KAAAAAElFTkSuQmCC" -format png

	tablelist_arc_expandedSelActImg put "
iVBORw0KGgoAAAANSUhEUgAAAA4AAAAKCAYAAACE2W/HAAAAWElEQVQoz2NgoDv4//+/6////w8S
ULPn////zuiCuv/////x////Zzg0PYHKa+Gy9Su6Zqim3/////cl5GS4zUg2eRDr36//IQC/TTg0
vyPKJiyaeWgWjQCS2nBV7y8ibwAAAABJRU5ErkJggg==" -format png
    } else {
	tablelist_arc_collapsedImg put "
R0lGODlhDgAKAOMKAAAAALGxsbOzs7S0tLm5ucfHx8nJydPT09XV1eXl5f//////////////////
/////yH5BAEKAA8ALAAAAAAOAAoAAAQc8L10pL03GMxlKB33hZhGWoNwPoR6tit8IsMZAQA7" \
	    -format gif

	tablelist_arc_expandedImg put "
R0lGODlhDgAKAOMJAAAAALGxsbOzs7S0tLa2tri4uLm5ucPDw8XFxf//////////////////////
/////yH5BAEKAA8ALAAAAAAOAAoAAAQd8MlJq73vXFSHqcZgDcVkCJjwnZg0BGgrEXJtTxEAOw==" \
	    -format gif

	tablelist_arc_collapsedSelImg put "
R0lGODlhDgAKAKECAAAAAMzMzP///////yH5BAEKAAAALAAAAAAOAAoAAAIUBBKmu8hvHGRyqmox
1I/TZB3gVAAAOw==" -format gif

	tablelist_arc_expandedSelImg put "
R0lGODlhDgAKAKECAAAAAMzMzP///////yH5BAEKAAAALAAAAAAOAAoAAAIUhI+pC7GOAjxSVXOt
y4+zyYSiUgAAOw==" -format gif

	tablelist_arc_collapsedActImg put "
R0lGODlhDgAKAOMLAAAAAGNjY2ZmZmhoaGlpaXNzc4+Pj5KSkqenp6qqqsbGxv//////////////
/////yH5BAEKAA8ALAAAAAAOAAoAAAQc8D2FpL03HMxlMB33hZhGWsRwPoWwtq96JsQZAQA7" \
	    -format gif

	tablelist_arc_expandedActImg put "
R0lGODlhDgAKAOMKAAAAAGNjY2ZmZmhoaG1tbXFxcXJycnNzc4iIiIyMjP//////////////////
/////yH5BAEKAA8ALAAAAAAOAAoAAAQd8MlJq70P3VSHqcdgDcV0CJj3hJg0BGgrEXJtTxEAOw==" \
	    -format gif

	tablelist_arc_collapsedSelActImg put "
R0lGODlhDgAKAKEBAAAAAP///////////yH5BAEKAAAALAAAAAAOAAoAAAIUBBKmu8hvHGRyqmox
1I/TZB3gVAAAOw==" -format gif

	tablelist_arc_expandedSelActImg put "
R0lGODlhDgAKAKEBAAAAAP///////////yH5BAEKAAAALAAAAAAOAAoAAAIUhI+pC7GOAjxSVXOt
y4+zyYSiUgAAOw==" -format gif
    }
}

#------------------------------------------------------------------------------
# tablelist::baghiraTreeImgs
#------------------------------------------------------------------------------
proc tablelist::baghiraTreeImgs {} {
    foreach mode {collapsed expanded} {
	variable baghira_${mode}Img \
		 [image create photo tablelist_baghira_${mode}Img]
    }

    tablelist_baghira_collapsedImg put "
R0lGODlhDQAIAIABAAAAAP///yH5BAEKAAEALAAAAAANAAgAAAIQjI8JyQHbzoNxUjajeXr3AgA7" \
	-format gif

    tablelist_baghira_expandedImg put "
R0lGODlhDQAIAIABAAAAAP///yH5BAEKAAEALAAAAAANAAgAAAIOjI+pywcPwYqSwWYqxgUAOw==" \
	-format gif
}

#------------------------------------------------------------------------------
# tablelist::bicolorTreeImgs
#------------------------------------------------------------------------------
proc tablelist::bicolorTreeImgs {} {
    plainTreeImgs "bicolor"

    foreach mode {collapsedSel expandedSel} {
	variable bicolor_${mode}Img \
		 [image create photo tablelist_bicolor_${mode}Img]
    }

    variable svgfmt

    tablelist_bicolor_collapsedSelImg put {
<svg width="16" height="12" version="1.1" xmlns="http://www.w3.org/2000/svg">
 <path d="m3 0.5h1l5 5v1l-5 5h-1z" fill="#fff"/>
</svg>
    } -format $svgfmt

    tablelist_bicolor_expandedSelImg put {
<svg width="16" height="12" version="1.1" xmlns="http://www.w3.org/2000/svg">
 <path d="m0.5 3v1l5 5h1l5-5v-1z" fill="#fff"/>
</svg>
    } -format $svgfmt
}

#------------------------------------------------------------------------------
# tablelist::bicolor100TreeImgs
#------------------------------------------------------------------------------
proc tablelist::bicolor100TreeImgs {} {
    plain100TreeImgs "bicolor100"

    foreach mode {collapsedSel expandedSel} {
	variable bicolor100_${mode}Img \
		 [image create photo tablelist_bicolor100_${mode}Img]
    }

    variable pngSupported
    if {$pngSupported} {
	tablelist_bicolor100_collapsedSelImg put "
iVBORw0KGgoAAAANSUhEUgAAABAAAAAMCAYAAABr5z2BAAAASElEQVQoz2NgQAL///8v////vwID
ueA/BDz8//+/EiUGkG/If1RAuiH/MQFphvzHDu7j08PEQE1AbS9QFIgURSNFCamD1KQMAEZtrJZL
avyiAAAAAElFTkSuQmCC" -format png

	tablelist_bicolor100_expandedSelImg put "
iVBORw0KGgoAAAANSUhEUgAAABAAAAAMCAYAAABr5z2BAAAAPElEQVQoz2NgGPrg////Df+JBw3Y
DJD7////XSI0P/z//78SLlcQMgS3ZiIMIawZjyHEa8ZiCOmahyYAADaaxD2AZ38lAAAAAElFTkSu
QmCC" -format png
    } else {
	tablelist_bicolor100_collapsedSelImg put "
R0lGODlhEAAMAIAAAP///////yH5BAEKAAEALAAAAAAQAAwAAAIajI+JAOrB2ltxnsgsxPLx7nAa
pm3glJVqUAAAOw==" -format gif

	tablelist_bicolor100_expandedSelImg put "
R0lGODlhEAAMAIAAAP///////yH5BAEKAAEALAAAAAAQAAwAAAIWjI+py30Ao4RpzmUpsy7Ibmjg
SJZBAQA7" -format gif
    }
}

#------------------------------------------------------------------------------
# tablelist::bicolor125TreeImgs
#------------------------------------------------------------------------------
proc tablelist::bicolor125TreeImgs {} {
    plain125TreeImgs "bicolor125"

    foreach mode {collapsedSel expandedSel} {
	variable bicolor125_${mode}Img \
		 [image create photo tablelist_bicolor125_${mode}Img]
    }

    variable pngSupported
    if {$pngSupported} {
	tablelist_bicolor125_collapsedSelImg put "
iVBORw0KGgoAAAANSUhEUgAAABQAAAAPCAYAAADkmO9VAAAAg0lEQVQ4y63UsQ3CQAxG4eebIIKO
KSImoECMwpCIGeAWQcoGjwIKCkhyh//Stj4XlgwfUXfqWd2QEfXgK3d122OUH/URuPagZabXhZaF
fjNaVsw0oWXl4hG4qEMWCLB/w2ngDahZYAVOETFlgBU4RsQj4yhN2BLYjM2BXdi35/D3t3kCZ55B
QHw43+QAAAAASUVORK5CYII=" -format png

	tablelist_bicolor125_expandedSelImg put "
iVBORw0KGgoAAAANSUhEUgAAABQAAAAPCAYAAADkmO9VAAAAXElEQVQ4y+3OsQ2AMAwF0e8NItEx
AnMwSOaloWOErHH0QELslHClJT9b+lwGzJKWwO5hZuU2BTKx8uMZIAGbE9uBqfq7E21jTrQP60R9
2AsawyroGHZBVyDpr9UJy6sqgjxpiocAAAAASUVORK5CYII=" -format png
    } else {
	tablelist_bicolor125_collapsedSelImg put "
R0lGODlhFAAPAIAAAP///////yH5BAEKAAEALAAAAAAUAA8AAAIgjI+pB7DPGnxNzlTtNVnf7kGg
s41bAJ5opq7h98LtfBQAOw==" -format gif

	tablelist_bicolor125_expandedSelImg put "
R0lGODlhFAAPAIAAAP///////yH5BAEKAAEALAAAAAAUAA8AAAIcjI+py+0PD5i00mXzZLq6DkBa
FFikcZ3qyrZJAQA7" -format gif
    }
}

#------------------------------------------------------------------------------
# tablelist::bicolor150TreeImgs
#------------------------------------------------------------------------------
proc tablelist::bicolor150TreeImgs {} {
    plain150TreeImgs "bicolor150"

    foreach mode {collapsedSel expandedSel} {
	variable bicolor150_${mode}Img \
		 [image create photo tablelist_bicolor150_${mode}Img]
    }

    variable pngSupported
    if {$pngSupported} {
	tablelist_bicolor150_collapsedSelImg put "
iVBORw0KGgoAAAANSUhEUgAAABgAAAASCAYAAABB7B6eAAAAhklEQVQ4y7XVsQ2DUAxF0ftdkTWY
BdEySlbICBklLUxG91KkQyJ829itrXcsN4ZDSRolTZIGKkrSS79aJT2yefanNwOfLGIX/TRiHTMp
xDrnwog5ZkOIORdyIxY46ww8KwEqTwSwAe8qYAOW1tpeAbjDPUAovBcIh/cAqfArIB1+9g9ufThf
titHHZ+pi7gAAAAASUVORK5CYII=" -format png

	tablelist_bicolor150_expandedSelImg put "
iVBORw0KGgoAAAANSUhEUgAAABgAAAASCAYAAABB7B6eAAAAbklEQVQ4y+2Uuw2AMAwF/RqUKZgl
a7AIQ7AIA1CxDlPQHQ0l5OcCIeU6y9Kd3Nis8zUCRjObnJ5V0vG4ASJ+4msaGIDNId+BkLzPEcnL
HZFyeUOkXl4RaZcXRPzyRKRJrkwkmNl8j4uks/+m/3EBA9mNbpxP1q0AAAAASUVORK5CYII=" \
	    -format png
    } else {
	tablelist_bicolor150_collapsedSelImg put "
R0lGODlhGAASAIAAAP///////yH5BAEKAAEALAAAAAAYABIAAAIqjI+pC72vmoNUTsoswFnzpEnf
EYpjeXHodqJj4L7la4R0bd14Spv6bygAADs=" -format gif

	tablelist_bicolor150_expandedSelImg put "
R0lGODlhGAASAIAAAP///////yH5BAEKAAEALAAAAAAYABIAAAIhjI+py+0Po5wB2IszYLrf5mlP
+EHk5FFVphpYC8fyTDsFADs=" -format gif
    }
}

#------------------------------------------------------------------------------
# tablelist::bicolor175TreeImgs
#------------------------------------------------------------------------------
proc tablelist::bicolor175TreeImgs {} {
    plain175TreeImgs "bicolor175"

    foreach mode {collapsedSel expandedSel} {
	variable bicolor175_${mode}Img \
		 [image create photo tablelist_bicolor175_${mode}Img]
    }

    variable pngSupported
    if {$pngSupported} {
	tablelist_bicolor175_collapsedSelImg put "
iVBORw0KGgoAAAANSUhEUgAAABwAAAAVCAYAAABVAo5cAAAAeklEQVRIx83WwQ2AIBBE0YlleLQD
S6IfSzC2YgmW9D14MQYwAXfiNvAIGXaQMgOMwAQMcgywc81mQW+gB32A8WgGjEULYBxaAWPQF7AL
bT1pkrS2oD1XkyQtTlCSZjd4uELzbVojU/r7d2jdNNZdam0Lax/aGj/sT3MCQKuydZYEktUAAAAA
SUVORK5CYII=" -format png

	tablelist_bicolor175_expandedSelImg put "
iVBORw0KGgoAAAANSUhEUgAAABwAAAAVCAYAAABVAo5cAAAAfUlEQVRIx+3UoRnCMBBA4Xf5MJ2g
CzEGI+FBgekWTFMcUzwMAgNtmgOVZyLuvvxRgV6vslBHYEq88xARj0/DHTAA+0Rw+DYswAyck7Ar
cF/cUkM92dZFLauf1ojWYY3oNmwj2oZVojnYSjQXW0B/g72hRT2qt9dZ+gfd+2tPx45wZ+d7UKkA
AAAASUVORK5CYII=" -format png
    } else {
	tablelist_bicolor175_collapsedSelImg put "
R0lGODlhHAAVAIAAAP///////yH5BAEKAAEALAAAAAAcABUAAAIyjI+pm+AMmXuxmkktxFkr3nkH
GIpkqZ1opa5bK15wPNNnPJJ4zu385PsBgj8iz4g8FAAAOw==" -format gif

	tablelist_bicolor175_expandedSelImg put "
R0lGODlhHAAVAIAAAP///////yH5BAEKAAEALAAAAAAcABUAAAIrjI+py+0Po5w0gYuzzm373X0i
4IweZHJRSk5mFYiwcc60at9tzvf+D4wUAAA7" -format gif
    }
}

#------------------------------------------------------------------------------
# tablelist::bicolor200TreeImgs
#------------------------------------------------------------------------------
proc tablelist::bicolor200TreeImgs {} {
    plain200TreeImgs "bicolor200"

    foreach mode {collapsedSel expandedSel} {
	variable bicolor200_${mode}Img \
		 [image create photo tablelist_bicolor200_${mode}Img]
    }

    variable pngSupported
    if {$pngSupported} {
	tablelist_bicolor200_collapsedSelImg put "
iVBORw0KGgoAAAANSUhEUgAAACAAAAAYCAYAAACbU/80AAAAa0lEQVRIx83UOwKAMAgE0eDF15Jb
Y2mhxm92nAOEVxBa+2u1ljSAQdS2pAFeRB2XNMCDqPOSBoxF1PWSBrxCRA9w66GIeAKY6JP/FWAm
d0DkEor8hiIPkYZvJzq8A5Dtf6LDdwCyXyh0uLMFhtchVmUvc2gAAAAASUVORK5CYII=" \
	    -format png

	tablelist_bicolor200_expandedSelImg put "
iVBORw0KGgoAAAANSUhEUgAAACAAAAAYCAYAAACbU/80AAAAaUlEQVRIx+2UOw7AIAxDnV663dyb
m6kLUkWBhA7kzVH0lI+BJNkdAwBJCmluZq2a4+8JPAJXQO+7q1rSKT84pOwkwam5TUrQZXmDEnS9
oE4JhrzIRwmG/mlDgkvC4kWCSxOrkiCSJHGiAIrBqhVW+u3AAAAAAElFTkSuQmCC" -format png
    } else {
	tablelist_bicolor200_collapsedSelImg put "
R0lGODlhIAAYAIAAAP///////yH5BAEKAAEALAAAAAAgABgAAAI9jI+pywbfYnxQWkTrtVnv1nmf
EorjUZpnqn5se72wJAMnKt/Oq+9p7wsBg5khcebqGHGUJdPm9EVx02qgAAA7" -format gif

	tablelist_bicolor200_expandedSelImg put "
R0lGODlhIAAYAIAAAP///////yH5BAEKAAEALAAAAAAgABgAAAIyjI+py+0Po5y02nuA3rx74Hzi
94wmCJ2kpHJVi74nFpi0Id5ZpyNu74sBh8Si8YiEFAAAOw==" -format gif
    }
}

#------------------------------------------------------------------------------
# tablelist::blueMentaTreeImgs
#------------------------------------------------------------------------------
proc tablelist::blueMentaTreeImgs {} {
    foreach mode {collapsed expanded collapsedSel expandedSel
		  collapsedAct expandedAct collapsedSelAct expandedSelAct} {
	variable blueMenta_${mode}Img \
		 [image create photo tablelist_blueMenta_${mode}Img]
    }

    variable pngSupported
    if {$pngSupported} {
	tablelist_blueMenta_collapsedImg put "
iVBORw0KGgoAAAANSUhEUgAAAAoAAAAKCAYAAACNMs+9AAAAPklEQVQY02NgIAOI45NkQmL7MDAw
ZBKjkAGqMJMYhTgVM+GwKZOBgcGMGIXTGRgYThFSOB2KcYJkfL4mOhwBfAkGjtSLavwAAAAASUVO
RK5CYII=" -format png

	tablelist_blueMenta_expandedImg put "
iVBORw0KGgoAAAANSUhEUgAAAAoAAAAKCAYAAACNMs+9AAAATklEQVQY08XQQQ2AMABD0UdAx1SA
EFzADE0GRjghYS52gstOBAgn6LH9SZvymxoEjA/MgtwhoyBeQKnm2mqs2DGcoHRXM2HD/GZ3/809
B7GOCszzE05qAAAAAElFTkSuQmCC" -format png

	tablelist_blueMenta_collapsedSelImg put "
iVBORw0KGgoAAAANSUhEUgAAAAoAAAAKCAYAAACNMs+9AAAAQUlEQVQY02NgIBX8//9fBp88ExI7
5v///w3EmFjxHwIaCJkIA/XYFDPhsKD+////jsQobGRkZNxPlhvRFTZQHI4AbXUv3nezwkkAAAAA
SUVORK5CYII=" -format png

	tablelist_blueMenta_expandedSelImg put "
iVBORw0KGgoAAAANSUhEUgAAAAoAAAAKCAYAAACNMs+9AAAAP0lEQVQY02NgGDDA+P//f2UGBoYU
PGrmMDIy3mVgYGBg+P//f+1/7KABQxsWxQ047UBS3EDQ0f///7enT/AAAJt8QP+zI+bcAAAAAElF
TkSuQmCC" -format png

	tablelist_blueMenta_collapsedActImg put "
iVBORw0KGgoAAAANSUhEUgAAAAoAAAAKCAYAAACNMs+9AAAAPklEQVQY02NgIAOI45NkQmL7MDAw
ZBKjkAGqMJMYhTgVM+GwKZOBgcGMGIXTGRgYThFSOB2KcYJkfL4mOhwBfAkGjtSLavwAAAAASUVO
RK5CYII=" -format png

	tablelist_blueMenta_expandedActImg put "
iVBORw0KGgoAAAANSUhEUgAAAAoAAAAKCAYAAACNMs+9AAAATklEQVQY08XQQQ2AMABD0UdAx1SA
EFzADE0GRjghYS52gstOBAgn6LH9SZvymxoEjA/MgtwhoyBeQKnm2mqs2DGcoHRXM2HD/GZ3/809
B7GOCszzE05qAAAAAElFTkSuQmCC" -format png

	tablelist_blueMenta_collapsedSelActImg put "
iVBORw0KGgoAAAANSUhEUgAAAAoAAAAKCAYAAACNMs+9AAAAPklEQVQY02NgIAOI45NkQmL7MDAw
ZBKjkAGqMJMYhTgVM+GwKZOBgcGMGIXTGRgYThFSOB2KcYJkfL4mOhwBfAkGjtSLavwAAAAASUVO
RK5CYII=" -format png

	tablelist_blueMenta_expandedSelActImg put "
iVBORw0KGgoAAAANSUhEUgAAAAoAAAAKCAYAAACNMs+9AAAATklEQVQY08XQQQ2AMABD0UdAx1SA
EFzADE0GRjghYS52gstOBAgn6LH9SZvymxoEjA/MgtwhoyBeQKnm2mqs2DGcoHRXM2HD/GZ3/809
B7GOCszzE05qAAAAAElFTkSuQmCC" -format png
    } else {
	tablelist_blueMenta_collapsedImg put "
R0lGODlhCgAKAMIFAAAAAC0tLZaWlpycnMnJyf///////////yH5BAEKAAcALAAAAAAKAAoAAAMU
eLrcfkM8GKQbod4cSMPaF37W5CQAOw==" -format gif

	tablelist_blueMenta_expandedImg put "
R0lGODlhCgAKAKEDAAAAAC0tLZCQkP///yH5BAEKAAMALAAAAAAKAAoAAAIPnI+pe+IvUJhTURaY
3qwAADs=" -format gif

	tablelist_blueMenta_collapsedSelImg put "
R0lGODlhCgAKAKEBAAAAAP///////////yH5BAEKAAAALAAAAAAKAAoAAAIQhI+pELHcVotp0mPV
lO6tAgA7" -format gif

	tablelist_blueMenta_expandedSelImg put "
R0lGODlhCgAKAKEBAAAAAP///////////yH5BAEKAAAALAAAAAAKAAoAAAIOhI+pe+EfEIzpMcqy
VgUAOw==" -format gif

	tablelist_blueMenta_collapsedActImg put "
R0lGODlhCgAKAMIFAAAAAC0tLZaWlpycnMnJyf///////////yH5BAEKAAcALAAAAAAKAAoAAAMU
eLrcfkM8GKQbod4cSMPaF37W5CQAOw==" -format gif

	tablelist_blueMenta_expandedActImg put "
R0lGODlhCgAKAKEDAAAAAC0tLZCQkP///yH5BAEKAAMALAAAAAAKAAoAAAIPnI+pe+IvUJhTURaY
3qwAADs=" -format gif

	tablelist_blueMenta_collapsedSelActImg put "
R0lGODlhCgAKAMIFAAAAAC0tLZaWlpycnMnJyf///////////yH5BAEKAAcALAAAAAAKAAoAAAMU
eLrcfkM8GKQbod4cSMPaF37W5CQAOw==" -format gif

	tablelist_blueMenta_expandedSelActImg put "
R0lGODlhCgAKAKEDAAAAAC0tLZCQkP///yH5BAEKAAMALAAAAAAKAAoAAAIPnI+pe+IvUJhTURaY
3qwAADs=" -format gif
    }
}

#------------------------------------------------------------------------------
# tablelist::classicTreeImgs
#------------------------------------------------------------------------------
proc tablelist::classicTreeImgs {} {
    foreach mode {collapsed expanded} {
	variable classic_${mode}Img \
		 [image create photo tablelist_classic_${mode}Img]
    }

    variable svgfmt

    tablelist_classic_collapsedImg put {
<svg width="16" height="12" version="1.1" xmlns="http://www.w3.org/2000/svg">
 <rect x="1.5" y="1.5" width="10" height="10" rx="1.5" fill="#fff" stroke="#808080"/>
 <path d="m4 6.5h5m-2.5-2.5v5" fill="none" stroke="#000"/>
</svg>
    } -format $svgfmt

    tablelist_classic_expandedImg put {
<svg width="16" height="12" version="1.1" xmlns="http://www.w3.org/2000/svg">
 <rect x="1.5" y="1.5" width="10" height="10" rx="1.5" fill="#fff" stroke="#808080"/>
 <path d="m4 6.5h5" fill="none" stroke="#000"/>
</svg>
    } -format $svgfmt
}

#------------------------------------------------------------------------------
# tablelist::classic100TreeImgs
#------------------------------------------------------------------------------
proc tablelist::classic100TreeImgs {} {
    foreach mode {collapsed expanded} {
	variable classic100_${mode}Img \
		 [image create photo tablelist_classic100_${mode}Img]
    }

    variable pngSupported
    if {$pngSupported} {
	tablelist_classic100_collapsedImg put "
iVBORw0KGgoAAAANSUhEUgAAABAAAAAMCAYAAABr5z2BAAAAo0lEQVQoz61SwQ2EMAxzULIAx7dd
6GaAVRCjgLrCLZQ/LJCq3IsTQrSqxOUVWY6tOAEeFgHANE1vZl7MrM0RRWSLMQ7jOH7OOAMAMy99
37fOuayTqrYhhBlAd8YbADCz4jAAeO9hZq8r3mR3I6rKoHkaIpecj37f93qBg0xExcG/rZAVqHH/
CYjIpqpFoqpCRNbbDGKMQwhhvrvz6RPXlNJwxb9iuTrZH12W5AAAAABJRU5ErkJggg==" \
	    -format png

	tablelist_classic100_expandedImg put "
iVBORw0KGgoAAAANSUhEUgAAABAAAAAMCAYAAABr5z2BAAAAmUlEQVQoz7WSzQ3DIAyFH5G9QNor
LNQZyCoRoyRihS7ke7KAEfSK8oMq0fr46flZfjbQWQYAQggvIlpVdbwTMvOeUprmeX7XnACAiFbv
/WitvZ0kImOMcQHwrPkAAKrabAYA5xxU9XHkQ28G3QZ0StWYk6iU8r1BS/yXFX5jwMy7iDSFIgJm
3i4zSClNMcbl6s7VJ2455+nIP+pMNNaHyJkHAAAAAElFTkSuQmCC" -format png
    } else {
	tablelist_classic100_collapsedImg put "
R0lGODlhEAAMAMIFAAAAAICAgIWFheHh4eLi4v///////////yH5BAEKAAcALAAAAAAQAAwAAAMy
eLrcKyHKIJwgJesyKgtbGDSgBmzjt51aupRAHGeuUmYsTa7oHrYNweDH8TAgk4hRkQAAOw==" \
	    -format gif

	tablelist_classic100_expandedImg put "
R0lGODlhEAAMAMIFAAAAAICAgIWFheHh4eLi4v///////////yH5BAEKAAcALAAAAAAQAAwAAAMt
eLrcKyHKIJwgJesyKgtbGDRgqI2feZIZ4LoZupSqrNCmfeBiIwyqjmUi8SwSADs=" -format gif
    }
}

#------------------------------------------------------------------------------
# tablelist::classic125TreeImgs
#------------------------------------------------------------------------------
proc tablelist::classic125TreeImgs {} {
    foreach mode {collapsed expanded} {
	variable classic125_${mode}Img \
		 [image create photo tablelist_classic125_${mode}Img]
    }

    variable pngSupported
    if {$pngSupported} {
	tablelist_classic125_collapsedImg put "
iVBORw0KGgoAAAANSUhEUgAAABQAAAAPCAYAAADkmO9VAAABI0lEQVQ4y82UPW6DQBCF38IIQYoo
lEgUVnICRJVUlJR0iRIrQj4AZ1h63yEXgBMkxYrCLeIGHAHorOUnFRQJ2Dhykal29DSfZubtLnDl
YOOBc74loldFUW7P1Egp5Zdpmvsoio4/RQKAOI7fGGMfjuOQpmknacMwoCiKp7quHwDsZoGqqm5d
1yXf91eNZdu2liTJ8xxQAQDG2J2u66v3ZBgG+r6/mdOUU4Wcc3ied5EpyrVdpqXOAEAIgbIspzwM
Q2w2m8uBQggAQFmWqKpqyoMg+FuHI4BzDiHElP+fHY4RhuGqMeeAx67rfolLBnRdB8aYXAS2bfuZ
5/mjZVnauQve9z2yLJNEdFgEmqa5b5rmPk3Tl6UXMP0mjLVEdJBSvs/p33DUY64vVZgvAAAAAElF
TkSuQmCC" -format png

	tablelist_classic125_expandedImg put "
iVBORw0KGgoAAAANSUhEUgAAABQAAAAPCAYAAADkmO9VAAABAElEQVQ4y8WUMW6EMBBFZ8zIghSr
dYlEgZITIKrsCSjpNkpWEcoBOIPp9w65AJwgKRDFtoijQLcyNqmSIjJZsiKKq5H/zNP4e2yAlRd+
BlLKAxE9MsY2F2qUUupdCHHM8/z8XSQAgKIonhDxNYoi4pz/SJumCbqu2/V9fwcAL1ag4ziHOI4p
SZJFxwqCgJdlubcBGQAAIm5d113sk+d5YIy5sWls7UtZHUi2TSmlNTnLMgjD8PfAuq6tyWmaXtfh
HPBfPPwz4FlrvbhIaw2IqGY9HMfxrW3be9/3+aUBN8ZA0zSKiE6zQCHEcRiG26qqHuZewNdvgjgS
0Ukp9WzTPwABuUrqqk2YUQAAAABJRU5ErkJggg==" -format png
    } else {
	tablelist_classic125_collapsedImg put "
R0lGODlhFAAPAIQaAA8PDx8fHz8/P39/f4CAgIGBgYKCgoODg4SEhIWFhYaGhouLi52dnbW1tbe3
t7q6uru7u7y8vL+/v8/Pz9XV1dbW1tvb29zc3N3d3d/f3////////////////////////yH5BAEK
AB8ALAAAAAAUAA8AAAVp4CeOZGl+BKKsLFuchdFAdE0/y2Eijub/wIrBlJAAj5oMgWj8DQRAJRP4
jC5LRd/gGdhmkldSViMQBADlCXjqhP6k2KbW7YOL5Un1OzxKRJBAFy8lBQsUGIiJiBYMCScIBgSS
k5IFjiUhADs=" -format gif

	tablelist_classic125_expandedImg put "
R0lGODlhFAAPAIQYAD8/P39/f4CAgIGBgYKCgoODg4SEhIWFhYaGhouLi52dnbW1tbe3t7q6uru7
u7y8vL+/v8/Pz9XV1dbW1tvb29zc3N3d3d/f3////////////////////////////////yH5BAEK
AB8ALAAAAAAUAA8AAAVa4CeOZGl+goGsLDucA7E4dE03SWEaDOb/wAnBdIAAj5iLgGhE/pRM53NZ
KvoC2OwlSSVZMYCwOMKNSsvVphSaPqO9D3flVRokJJa8Pk9RHE4GBAKDhIMDfyUhADs=" \
	    -format gif
    }
}

#------------------------------------------------------------------------------
# tablelist::classic150TreeImgs
#------------------------------------------------------------------------------
proc tablelist::classic150TreeImgs {} {
    foreach mode {collapsed expanded} {
	variable classic150_${mode}Img \
		 [image create photo tablelist_classic150_${mode}Img]
    }

    variable pngSupported
    if {$pngSupported} {
	tablelist_classic150_collapsedImg put "
iVBORw0KGgoAAAANSUhEUgAAABgAAAASCAYAAABB7B6eAAABMElEQVQ4y82UQWrDMBBF30hRClnm
GsHdBApe2eDSM+Quhkrad5MLtBtDD5BbdOs7tDgLN9BdwXY3jQklduyU0A4IaRhp/p+vYeDCJoeO
tfZORK5FRA953DTNuzFmk6bp20kA59wzsBrLUCn1Udf1rXPu5Vh8smcOrJIkIQxDtB5UAGVZkmXZ
bLfbrYHwKIFvFktgVHKA+XzOYrHQwLKzQoC6rq+AUcn3prWmaRrTC3CyE0Rwzp3VRerSbfp3ACLS
LgDvfeuPkWvSFbDWtmfvPVEUEccxQLv/CuCQpfeeOI7P+uj/8cnW2lGyDJKoS66zKhCR1/1sGWtl
WaKU2vZWYIzZVFX1kGXZLAgCPZ1OByUvioI8zwEeh4zrGxFZA8u+2fJjVG+rqnoSkXvn3OexO1/K
YVnzIaqB9AAAAABJRU5ErkJggg==" -format png

	tablelist_classic150_expandedImg put "
iVBORw0KGgoAAAANSUhEUgAAABgAAAASCAYAAABB7B6eAAABB0lEQVQ4y+VUMWrEMBCclU4OXOlv
GKcxBNwZHPKG+4sh2gekuQ8kjSAPuF9c6z8k+ArFkC4gKU0MIdiORHJNMqBC7O7MLAsDnBn0+aO1
viGiSyKSMcMhhBel1KHruudvBZj5EcAu1aEQ4tV7f83Mx7n6ZnIOYNe2Leq6hpRRC8BaC2PMdhzH
PYB61sCHiwpAEjkA5HmOoigkgGpxQwDw3l8ASCKfIKVECEGtCpwTf1iAiBYfM0cLbJYKWuvFoaZp
fi6Q4vKfHvlXBYjoacqWVFhrIYQ4rR5ZKXVwzt0ZY7ZlWcosy6LIh2FA3/cAcB8T11dEtAdQrWXL
l6g+OeceiOiWmd/met4BZJFMcWEB1qgAAAAASUVORK5CYII=" -format png
    } else {
	tablelist_classic150_collapsedImg put "
R0lGODlhGAASAIQPAAAAAD8/P39/f4CAgIGBgYKCgpGRka2trby8vL6+vr+/v8PDw8TExO3t7fz8
/P///////////////////////////////////////////////////////////////////yH5BAEK
ABAALAAAAAAYABIAAAV4ICSOZGmawkCsbDuc4yDPNF3A6eI8fO83BsKJMNj5jjyEEDVAOhUvJhIg
OEJPqWnVd5UeqdZoKcsDmM/gR3fc5AnegMBbwVuTyL50zz7C9/R1YndtPgJ0XIJ9hE57iSIyDYw+
BzcnBQYJDJqbnAcyMBArNTUFAichADs=" -format gif

	tablelist_classic150_expandedImg put "
R0lGODlhGAASAOMOAAAAAH9/f4CAgIGBgYKCgpGRka2trby8vL6+vr+/v8PDw8TExO3t7fz8/P//
/////yH5BAEKAA8ALAAAAAAYABIAAARm8MlJq7VBjM27uJMgjiRJgJnSOGzrMsVwDcLq3uwhYwLu
Jx+eDwe8ZIa3ohDZUlaOLIB0CgiwnBSoI8DtBhLX4LPHDBvJZexEy1RL2Ej3Q8QoOwynC6GAWPj/
gAYiIA8bJSUEARcRADs=" -format gif
    }
}

#------------------------------------------------------------------------------
# tablelist::classic175TreeImgs
#------------------------------------------------------------------------------
proc tablelist::classic175TreeImgs {} {
    foreach mode {collapsed expanded} {
	variable classic175_${mode}Img \
		 [image create photo tablelist_classic175_${mode}Img]
    }

    variable pngSupported
    if {$pngSupported} {
	tablelist_classic175_collapsedImg put "
iVBORw0KGgoAAAANSUhEUgAAABwAAAAVCAYAAABVAo5cAAABkUlEQVRIx92Wv2rCUBTGv5MIgpNT
EHEI2D/glCcwjkJ3J4eAb1A6dPM6OwTfIHf1BTrqG7QUShAfQIlbFxticrqo2FqTGINDz3IPh8v9
3e/jCzfAlYt+D4QQVSK6j6JITX0I0ReAdyHEZ2qgEEIDIAG0M14+BGA3Go3nTqcTntpUOOglgHa9
XkelUjmLxMyYz+fKarV6cl3XAzCMBQohqjtYt9vNJK/ZbNJoNOL1et2LAyrb9QYAarVa5jAUi0Vo
mkYAbuP2KVtLlFwSSHQoIlZhYgkhQESYTqcXXUq59nd4dWAhycZd7ax0HGff67oOy7LyAw4Gg6OZ
lHLfm6aZL3Aymex7x3EgpYRt2zAMAwBQLpfztbTVah1ZahjGj/n/Samu6zBNM5ONqS09LMuyzg7I
SYWqqvoAEIbhRYdtNhsQUZAIjKLoA0A4m83Y9/1MMM/zsFwumZnf0j7AQwBPpVKJNU0jRUmfpyAI
sFgseKvwod/vvyQCx+Ox6rruIzP3ANz99fsR80oEzPxKRCIOBgDflNKNQiMx9KQAAAAASUVORK5C
YII=" -format png

	tablelist_classic175_expandedImg put "
iVBORw0KGgoAAAANSUhEUgAAABwAAAAVCAYAAABVAo5cAAABV0lEQVRIx+2Wz2rCQBDGv0kEwVNO
SxAPgv0DPoR6FHr35EHwDYqH3jKePZQ8gte8QI95hJZCCSEPoMRbLzbEZHpRkNKuaRqEls5ll92Z
+e03DMwCZzb6eMDMTSK6zvPcLJyE6A3AMzO/FgYyswKwBDAs+fgMwH23270bjUbZV061o/0SwLDT
6cC27W+RRARRFBmbzWYWBEEMYKEFMnPzABuPx6Xk9Xo9cl1XttvtVAc09usFALRardLNUK/XoZQi
AJc6P2NfEqOSDiQ6FqFVeDb7+8Ca7pKZtcHtdhuTyaQ64Hw+1wb3+/1qgb7va4Mty6q2pIPB4L9L
fwnQNM0EALIs+1Gy3W4HIkpPAvM8fwGQhWEoSZKUgsVxjPV6LSLyVHQALwDMGo2GKKXIMIpXO01T
rFYr2Su8cRzn4STQ8zwzCIJbEZkCuPrs+6GZEqmIPBIR62AA8A7Mk3QdXCLHCAAAAABJRU5ErkJg
gg==" -format png
    } else {
	tablelist_classic175_collapsedImg put "
R0lGODlhHAAVAIQZAAAAAD8/P19fX39/f4CAgIGBgYKCgoSEhImJiYqKio+Pj5WVlZycnJ2dnZ+f
n6CgoKKioqOjo7q6uru7u7y8vL+/v8/Pz+np6fj4+P///////////////////////////yH5BAEK
AB8ALAAAAAAcABUAAAWe4CeOZGmeZTGsbDsQaEnMdG3P8TdHU+//PcmCUIgRIpmkcrnEIGCnWYVJ
XTqgpte0Wn1gS1rqALBdelFh5risPJ/SyzXVnSWUWQGAYOVof0lwAIKDggF+aHZKFYsCAAqLFodv
iWpkc38jcEpyTHRglFYBkZ2YIppckiYGBBSoVAxFKAQLGK5KFwelIjMJDxC/wMEQDbmxKAU3ycjG
JSEAOw==" -format gif

	tablelist_classic175_expandedImg put "
R0lGODlhHAAVAIQXAAAAAD8/P39/f4CAgIGBgYKCgoSEhImJiYqKipWVlZycnJ2dnZ+fn6CgoKKi
oqOjo7q6uru7u7y8vL+/v8/Pz+np6fj4+P///////////////////////////////////yH5BAEK
AB8ALAAAAAAcABUAAAWN4CeOZGmeJSGsbCsMaDnMdG3P8Tc/Ue//PUhiQIgNHpekcrm0HGCn2YRJ
XTKgpte0Wm1gS1pu90sKi5lelPmsTJ/WLhajTR6tAfg8PkBXD7YXE4KDghR9b39sS25ZiYpJjGCO
j5Flk4qVIwUDEo9JCkUoAwkWjxUGdSMzCA0Orq+wDguooSgEN7i3tSUhADs=" -format gif
    }
}

#------------------------------------------------------------------------------
# tablelist::classic200TreeImgs
#------------------------------------------------------------------------------
proc tablelist::classic200TreeImgs {} {
    foreach mode {collapsed expanded} {
	variable classic200_${mode}Img \
		 [image create photo tablelist_classic200_${mode}Img]
    }

    variable pngSupported
    if {$pngSupported} {
	tablelist_classic200_collapsedImg put "
iVBORw0KGgoAAAANSUhEUgAAACAAAAAYCAYAAACbU/80AAABFElEQVRIx+2WPU7EMBBG38C2uEm1
K+hyAE7ApqJzR8VBltZFqqXILbiAL5A9wV7AJUpHk9rSUEBQREG8yUoRga8aW6Pxmx/JA39d0j84
566BZ2ALrEfGbFT1ICI759xrMkBZljcxxiOQnSm5N+B2CGLVGTHGPZDleY61FmPMqFfbtsV7Twgh
U9U98PiT/0XPvgMmPQ5gjMFa+1Feke2Qfx9g0wWYql6MzSkAs+hkABFBROYDmL0CiwNYpfQ85V5V
F1qB75l1mY/N+H8If98MDM3EolrQdP/5VPViNMkAqnoA8N5PgugWkk/VyTMgIjvgPoSQVVV1rpXs
acjp8gu1rtuiKF5UdS0iGXA1dikFPPCQspS+Azr+W1W366nTAAAAAElFTkSuQmCC" -format png

	tablelist_classic200_expandedImg put "
iVBORw0KGgoAAAANSUhEUgAAACAAAAAYCAYAAACbU/80AAABAklEQVRIx+2WMU7EMBBF37Db4ibV
rqDLATgBm4rOHRUHWVoXqZYit+ACvkD2BFzAJUpHk9rSbAFBrohJVkJAfjWWRt9vRtZ44L9L0oNz
7gp4AnbAZqJnp6pHEdk7516zAeq6vo4xvgDFmYp7A27GINZDEGM8AEVZllhrMcZMurXve7z3hBAK
VT0AD1/lXyTxLTDrcgBjDNba9/aK7MbyU4DtYDBXicf2OwA/ogVgAViPTiqRLCNV/aMdmFrZ8ggX
gF8J0A3/+VwlHl02gKoeAbz3syCGheRDbfYcEJE9cBdCKJqmOddK9jiWtPpEbdu+qqpnVd2ISAFc
Tl1KAQ/c5yylJw9fVU2JFCmBAAAAAElFTkSuQmCC" -format png
    } else {
	tablelist_classic200_collapsedImg put "
R0lGODlhIAAYAMIFAAAAAH9/f4CAgKSkpPHx8f///////////yH5BAEKAAcALAAAAAAgABgAAAN8
eLrc/jDKqYS9ONtAj/7fZA1EYZ4oSgwCF1llKquWZM34Wb9Cnu+Q2wwAwAEfQhnRKLD1hsXZ0ZFM
LaVNHorI7UZN00bV60WFGdXtN3VepE9XWbvyVK7N2WDdetflkXs+eE6CWE4xhSYEcwcBAiSJBSuM
HiCWlAqOlxoSCQA7" -format gif

	tablelist_classic200_expandedImg put "
R0lGODlhIAAYAMIFAAAAAH9/f4CAgKSkpPHx8f///////////yH5BAEKAAcALAAAAAAgABgAAANr
eLrc/jDKqYS9ONtAj/7fZA1EYZ4oSgwCF1llKquWZM34Wb9Cnu+Qm28GfAiHqaLjiNQJbL0mStlg
Aq7Y7PTJQ2W/gC1UKu6STVQGU5perJvtSvQc98zJddiZUA8ISFIrdXYghVwTfoYaEgkAOw==" \
	    -format gif
    }
}

#------------------------------------------------------------------------------
# tablelist::dustTreeImgs
#------------------------------------------------------------------------------
proc tablelist::dustTreeImgs {} {
    foreach mode {collapsed expanded} {
	variable dust_${mode}Img \
		 [image create photo tablelist_dust_${mode}Img]
    }

    tablelist_dust_collapsedImg put "
R0lGODlhEgAQAKU0AAAAADIyMrConLGpncC6scC7ssG8s8K8tMK9tdDMxtDMx9LOyNrVztvVz9vW
ztvWz9vX0NzW0N3Y0d/a0uDd1uHe1+Lf2OPg2uTh2+Xj3efk3+jl4Ojm4enm4unn4+nn5Orn5evo
5Ovo5evq5ezp5e3q5u3q5+7s6O/t6e7t6vDu6/Hv7PHv7fLw7PLw7vT08vf39fj39fn49vn49///
/////////////////////////////////////////////yH5BAEKAD8ALAAAAAASABAAAAakwJ9w
SCwSCQOBcrkcEIiGxQsWk82ushjspTgMB6zSCaVatVYq1GnkGgwFrE6IVDLZS6RQhyV4pzAZGhsc
ARwbGhkYKX1CAiYUFRYXFwGTFhUUJow/AiISnxITAROgEiKbAh0MEQGtrgEPDx2oHbEPDg8BDbay
qB68ucAevsCwvMNvIRHLzM0RIZsDHhDOzRAebkIHCiAi3t/fHwkIR0lMTAMFREEAOw==" \
	-format gif

    tablelist_dust_expandedImg put "
R0lGODlhEgAQAKU0AAAAADIyMrConLGpncS+tcS/tsbBuMfBucfCucfCutfTzdjUztnUz9vWztvW
z9vX0NzW0N3Y0d/a0t/a0+Dd1uHe1+Lf2OPg2uTh2+Xj3efk3+jl4Ojm4enm4unn4+vo5Ovo5evp
5uvq5ezp5e3q5u3q5+7s6O/t6e7t6vDu6/Hv7PLv7fLw7PHw7fLx7vX08vf39fj39fn49vn49///
/////////////////////////////////////////////yH5BAEKAD8ALAAAAAASABAAAAagwJ9w
SCwSCQOBcrkcEIiGxQsWk82ushjspUAMBy2S6ZRSsVSpk0nkGgwFq85nRCrZSaNPZyV4ozAZGhsc
hBsaGRgofUICJRQVFhcXGJIWFRQliz8CIBGeERITEp8RIJoCHQsQAaytAQ4OHacdsA4NsAy1sace
ur6wHry/vsFvHxDIycoQH5oDHw/Lyg8fbkIHDCEg29zdCwlHSUxMAwVEQQA7" -format gif
}

#------------------------------------------------------------------------------
# tablelist::dustSandTreeImgs
#------------------------------------------------------------------------------
proc tablelist::dustSandTreeImgs {} {
    foreach mode {collapsed expanded} {
	variable dustSand_${mode}Img \
		 [image create photo tablelist_dustSand_${mode}Img]
    }

    tablelist_dustSand_collapsedImg put "
R0lGODlhEgAQAKU1AAAAADIyMpuWjJyXjrSxqbWxqre0rbi1rrm2r8K+tsO+t8TAuMXBusbCu8nF
vcnGvsrHv8vHwMnGwcrIwczIwMzIwc3Jw87LxMzKxc/MxdDMxdDMx9HOx9HOyNLPydPPytPQydPQ
y9TRy9TRzNXTzNXSzdfTztbUzNbUzdfVz9nV0NjW0NnW0drY097c2eDe2eXi3uXj3+jm4+nn5Oro
5f///////////////////////////////////////////yH5BAEKAD8ALAAAAAASABAAAAajwJ9w
SCwSCQOBcrkcEIiGCUwmm81oVmpMchgOXqWSSbVirVSm0ug1GApcm85HNKqLPp2NS+BuVSwXGRoB
GhkXFhUtfEICKQ4PEBEUARQREA8OKYs/AiEMnwwNAQ2gDCGbAhwJCgGtrgEKChyoHLGxCQGrtrNu
tbasv7KoHcGwvx2oHgvLzM0LHpsDJc7UJG1CBxgoINzd3ScYCEQFSUxMAwVEQQA7" -format gif

    tablelist_dustSand_expandedImg put "
R0lGODlhEgAQAKU3AAAAADIyMpuWjJyXjrSxqbWxqre0rbi1rrm2r8K+tsO+t8TAuMXBusbCu8bC
vMnFvcnGvsrHv8vHwMnGwcrIwczIwMzIwc3Jw87LxMzKxc/Mxc/MxtDMxdDMx9HOx9HOyNLPydPP
ytPQydPQy9TRy9TRzNXTzNXSzdfTztbUzNbUzdfVz9nV0NjW0NnW0drY097c2eDe2eXi3uXj3+jm
4+nn5Oro5f///////////////////////////////////yH5BAEKAD8ALAAAAAASABAAAAagwJ9w
SCwSCQOBcrkcEIgGioxGq9VsVupschgOYqcTitVytVioUyk2GApgnU+IVKqTQp8OTOB+WS4YGhwb
HBoYFxYvfEICKw8QERIVFhUSERAPK4s/AiMMnwwNDg2gDCObAh4JCgGtrgEKCh6oHrGxCbi2srS6
vbGzbh++vR+oIAvIycoLIJsDJ8vRJm1CBxkqItna2ikZCEQFSUxMAwVEQQA7" -format gif
}

#------------------------------------------------------------------------------
# tablelist::gtkTreeImgs
#------------------------------------------------------------------------------
proc tablelist::gtkTreeImgs {} {
    foreach mode {collapsed expanded collapsedAct expandedAct} {
	variable gtk_${mode}Img \
		 [image create photo tablelist_gtk_${mode}Img]
    }

    variable pngSupported
    if {$pngSupported} {
	tablelist_gtk_collapsedImg put "
iVBORw0KGgoAAAANSUhEUgAAABIAAAAOCAYAAAAi2ky3AAAAUUlEQVQoz8XTwQ2AQAhE0T17+jVQ
h/XRGIV9L5p4FsxSwAuZgbV+nHNEARzBACOijwFWVR8DVPvYA7WxN6Samd4FHHs3GslorLWxO5p6
k0/IBbP6VlQP0oOsAAAAAElFTkSuQmCC" -format png

	tablelist_gtk_expandedImg put "
iVBORw0KGgoAAAANSUhEUgAAABIAAAAOCAYAAAAi2ky3AAAAW0lEQVQoz+3SwQmAQAxE0fHqKTVM
HWt7aWwsKB3Ek4IQYXVBEPzXkJdLgL/XmgA0M1PvQkQsANareSOZkrJKUpJMAK3nWIndRUrsKXLC
3H0IOTAzG0b25m8/5Aai703YBhwgYAAAAABJRU5ErkJggg==" -format png

	tablelist_gtk_collapsedActImg put "
iVBORw0KGgoAAAANSUhEUgAAABIAAAAOCAYAAAAi2ky3AAAAa0lEQVQoz7XSMQqAMAyF4d9OAZeM
OYyeXg/TMZN0qwdQKyltxjz4CI/AxNmGKKpah2CqWs0sjKW3ZSkFMzsiWPoKolhqhRFs+Sj7Me6+
AlfXRQAigrvvLeQXEhFyzjtwdncUQYb+0bzP7kVuCWMmCi7K2XoAAAAASUVORK5CYII=" \
	    -format png

	tablelist_gtk_expandedActImg put "
iVBORw0KGgoAAAANSUhEUgAAABIAAAAOCAYAAAAi2ky3AAAAXUlEQVQoz2NgGAV0A4wMDAyZAgIC
04jV8OHDhywGBobp6OLMDAwMZ378+PGKg4PDm1xDYAYxEGMYPkOwgUwBAYH/6JiBgSGTnHCDG6ak
pES2ISiGUWoIDIgM7QQJACRKJBMon0pJAAAAAElFTkSuQmCC" -format png
    } else {
	tablelist_gtk_collapsedImg put "
R0lGODlhEgAOAMIFAAAAABAQECIiIoaGhsPDw////////////yH5BAEKAAcALAAAAAASAA4AAAMi
eLrc/pCFCIOgLpCLVyhbp3wgh5HFMJ1FKX7hG7/mK95MAgA7" -format gif

	tablelist_gtk_expandedImg put "
R0lGODlhEgAOAMIFAAAAABAQECIiIoaGhsPDw////////////yH5BAEKAAcALAAAAAASAA4AAAMg
eLrc/jDKSWu4OAcoSPkfIUgdKFLlWQnDWCnbK8+0kgAAOw==" -format gif

	tablelist_gtk_collapsedActImg put "
R0lGODlhEgAOAKEDAAAAABAQEBgYGP///yH5BAEKAAMALAAAAAASAA4AAAIdnI+pyxjNgoAqSOrs
xMNq7nlYuFFeaV5ch47raxQAOw==" -format gif

	tablelist_gtk_expandedActImg put "
R0lGODlhEgAOAKEDAAAAABAQECIiIv///yH5BAEKAAMALAAAAAASAA4AAAIYnI+py+0PY5i0Bmar
y/fZOEwCaHTkiZIFADs=" -format gif
    }
}

#------------------------------------------------------------------------------
# tablelist::klearlooksTreeImgs
#------------------------------------------------------------------------------
proc tablelist::klearlooksTreeImgs {} {
    foreach mode {collapsed expanded} {
	variable klearlooks_${mode}Img \
		 [image create photo tablelist_klearlooks_${mode}Img]
    }

    tablelist_klearlooks_collapsedImg put "
R0lGODlhDQAIAIABAAAAAP///yH5BAEKAAEALAAAAAANAAgAAAIPjI8IkL3c1IoSxkcDzjMXADs=" \
	-format gif

    tablelist_klearlooks_expandedImg put "
R0lGODlhDQAIAIABAAAAAP///yH5BAEKAAEALAAAAAANAAgAAAIRjI+pCXCtmpNLwhUoNm57UwAA
Ow==" -format gif
}

#------------------------------------------------------------------------------
# tablelist::mateTreeImgs
#------------------------------------------------------------------------------
proc tablelist::mateTreeImgs {} {
    foreach mode {collapsed expanded collapsedAct expandedAct} {
	variable mate_${mode}Img \
		 [image create photo tablelist_mate_${mode}Img]
    }

    variable pngSupported
    if {$pngSupported} {
	tablelist_mate_collapsedImg put "
iVBORw0KGgoAAAANSUhEUgAAAAwAAAAOCAYAAAAbvf3sAAAAeUlEQVQoz83RLQ7CUBRE4S+vFQQM
Eo/DlB10Y0gEEnwXQMIq2AChFeygSWUNHtOahv4ISDpmMsk9yUwus9Vm6mHU+BVLPMaA0PgKKW5I
pgDwQokjTn01QyfXKLDH5RsUd/IaWzxxRjUE7LDAAXnfhhZ4447s53/4vz4ZeA6wL/7UqwAAAABJ
RU5ErkJggg==" -format png

	tablelist_mate_expandedImg put "
iVBORw0KGgoAAAANSUhEUgAAAAwAAAAOCAYAAAAbvf3sAAAAf0lEQVQoz9XRMQrCYAyG4ccWtdC1
8l/B1at4Cg/iIXqBTr2BOLq4dnEQXJxcnHR3iVBKh64NhDd84UsgYf6xQEKNcqT/xQGvv5CHuMQG
VzwiC5xw6U/IgmesUIW5whrtcGUe/OCOPd7Y4ojn0JD16g437ILdlCMkNMHJkWb26R+bgxLSbl4O
9wAAAABJRU5ErkJggg==" -format png

	tablelist_mate_collapsedActImg put "
iVBORw0KGgoAAAANSUhEUgAAAAwAAAAOCAYAAAAbvf3sAAAAdElEQVQoz83RsQ2CUBQF0AORhoZO
XcHEbZjDECYxhDlMXMDOERxC6WxsbGgwMQTjp/gJt3mveKe4eSw227ngijbkMB3mGztcUIYAeOCF
Gmfs/wED6FCgmeo2BjnWeKLCfQxWX/sGCY44/erwARluOET7Q7z0AZUOkqtBUcIAAAAASUVORK5C
YII=" -format png

	tablelist_mate_expandedActImg put "
iVBORw0KGgoAAAANSUhEUgAAAAwAAAAOCAYAAAAbvf3sAAAAa0lEQVQoz9XRQQqDUAwE0Ke1Z/A2
f+mid/B0nsCFm55I8QBuWnCTDx/BYpcOhGRgYJIJ90eFFsMPTY8lkzrIHHwrCtZSnB0y3vjigwYP
dEe7upjHEFXRx7MbSkx4hsvrSggpVkv/JNfe7NM710YQSDbaCJ8AAAAASUVORK5CYII=" \
	    -format png
    } else {
	tablelist_mate_collapsedImg put "
R0lGODlhDAAOAOMOAAAAAEBAQEdHR0tLS0xMTFRUVFZWVlxcXG9vb3d3d3p6en9/f4aGhpubm///
/////yH5BAEKAA8ALAAAAAAMAA4AAAQe8MlJq70409F0OEUWMAiRXOOiCIY1lqcLZpxm33cEADs=" \
	    -format gif

	tablelist_mate_expandedImg put "
R0lGODlhDAAOAIQQAAAAAEVFRUxMTFBQUFFRUVhYWFlZWVpaWl9fX3V1dXp6en19fYSEhImJiZ6e
nqOjo////////////////////////////////////////////////////////////////yH5BAEK
AAAALAAAAAAMAA4AAAUkICCOZGmeaEoOQdsO5YM0NOKYRsIkBUoshJRCoFAdVMikMhUCADs=" \
	    -format gif

	tablelist_mate_collapsedActImg put "
R0lGODlhDAAOAOMLAAAAADs7O0BAQEJCQkNDQ0xMTE9PT1FRUVZWVlpaWmxsbP//////////////
/////yH5BAEKAA8ALAAAAAAMAA4AAAQf8MlJq70406C0IEMmJEVgXCNyCGE1lqf1tRen3TgeAQA7" \
	    -format gif

	tablelist_mate_expandedActImg put "
R0lGODlhDAAOAOMKAAAAAEVFRUhISElJSUpKSktLS0xMTE5OTlpaWl1dXf//////////////////
/////yH5BAEKAA8ALAAAAAAMAA4AAAQf8MlJq70408B7qElwjAFiBYIhfFdQsBcRDBqs3XhuRQA7" \
	    -format gif
    }
}

#------------------------------------------------------------------------------
# tablelist::mentaTreeImgs
#------------------------------------------------------------------------------
proc tablelist::mentaTreeImgs {} {
    foreach mode {collapsed expanded} {
	variable menta_${mode}Img \
		 [image create photo tablelist_menta_${mode}Img]
    }

    variable pngSupported
    if {$pngSupported} {
	tablelist_menta_collapsedImg put "
iVBORw0KGgoAAAANSUhEUgAAAAoAAAAKCAYAAACNMs+9AAAAPklEQVQY02NgIAOI45NkQmL7MDAw
ZBKjkAGqMJMYhTgVM+GwKZOBgcGMGIXTGRgYThFSOB2KcYJkfL4mOhwBfAkGjtSLavwAAAAASUVO
RK5CYII=" -format png

	tablelist_menta_expandedImg put "
iVBORw0KGgoAAAANSUhEUgAAAAoAAAAKCAYAAACNMs+9AAAATklEQVQY08XQQQ2AMABD0UdAx1SA
EFzADE0GRjghYS52gstOBAgn6LH9SZvymxoEjA/MgtwhoyBeQKnm2mqs2DGcoHRXM2HD/GZ3/809
B7GOCszzE05qAAAAAElFTkSuQmCC" -format png
    } else {
	tablelist_menta_collapsedImg put "
R0lGODlhCgAKAMIFAAAAAC0tLZaWlpycnMnJyf///////////yH5BAEKAAcALAAAAAAKAAoAAAMU
eLrcfkM8GKQbod4cSMPaF37W5CQAOw==" -format gif

	tablelist_menta_expandedImg put "
R0lGODlhCgAKAKEDAAAAAC0tLZCQkP///yH5BAEKAAMALAAAAAAKAAoAAAIPnI+pe+IvUJhTURaY
3qwAADs=" -format gif
    }
}

#------------------------------------------------------------------------------
# tablelist::mintTreeImgs
#------------------------------------------------------------------------------
proc tablelist::mintTreeImgs {} {
    foreach mode {collapsed expanded collapsedSel expandedSel} {
	variable mint_${mode}Img \
		 [image create photo tablelist_mint_${mode}Img]
    }

    variable pngSupported
    if {$pngSupported} {
	tablelist_mint_collapsedImg put "
iVBORw0KGgoAAAANSUhEUgAAAAwAAAAOCAYAAAAbvf3sAAAAU0lEQVQoz73RQQ2AMAwF0JfdZodg
AhEo44gITBAkYGNXDIxmCwv/2PQ1acvf2XrBjT1qSJXaFKEayBFKL4MyZhytoGsHKDixtICCC+uQ
s35+3Pg8G2gLGrFw1rcAAAAASUVORK5CYII=" -format png

	tablelist_mint_expandedImg put "
iVBORw0KGgoAAAANSUhEUgAAAAwAAAAOCAYAAAAbvf3sAAAAVUlEQVQoz+XRsQmAMBRF0SM6gQOl
dgwLB3OWLGCXMuAWljYKQRTTihd+8/591eOHNAiYK9wRscWKBQO6G3HDhHh9BCTk4tKRP1KWXuWy
lGvlk/5Dw+18fA9T93dmqwAAAABJRU5ErkJggg==" -format png

	tablelist_mint_collapsedSelImg put "
iVBORw0KGgoAAAANSUhEUgAAAAwAAAAOCAYAAAAbvf3sAAAATUlEQVQoz2NgoCv4////PFI1vPj/
//9yfGqYsIhZ4NOETQMnPk1MOAyCadpHrAaS/MDAwMDwnYGB4QQjI6MTMaF0n1BIkRSslEUcTQAA
5D0vedmcvmEAAAAASUVORK5CYII=" -format png

	tablelist_mint_expandedSelImg put "
iVBORw0KGgoAAAANSUhEUgAAAAwAAAAOCAYAAAAbvf3sAAAAVUlEQVQoz+WRwQnAIBAEdwPpyTIs
NWXYhV878Dn5JGAkEb+ShfssM3Cw0g9jIEg6JthoO222k6QoqX6A9YYfLRCADJTm8vXBezppDHdS
mYIbaV9ouBPWj0JRP45ECQAAAABJRU5ErkJggg==" -format png
    } else {
	tablelist_mint_collapsedImg put "
R0lGODlhDAAOAMIHAAAAACEhISgoKCoqKkhISFxcXGRkZP///yH5BAEKAAcALAAAAAAMAA4AAAMd
eLrc7uaxUKQKo8qAteOBQDygSHZbZlHWEbVwmwAAOw==" -format gif

	tablelist_mint_expandedImg put "
R0lGODlhDAAOAKEDAAAAACEhISkpKf///yH5BAEKAAMALAAAAAAMAA4AAAIWnI+py+0aopRIzCCU
jXnZzgTPSJZIAQA7" -format gif

	tablelist_mint_collapsedSelImg put "
R0lGODlhDAAOAKEBAAAAAP///////////yH5BAEKAAAALAAAAAAMAA4AAAIXhI+pGovRHIBx0Zou
PtpS94FbJpWmUQAAOw==" -format gif

	tablelist_mint_expandedSelImg put "
R0lGODlhDAAOAKEBAAAAAP///////////yH5BAEKAAAALAAAAAAMAA4AAAIRhI+py+0aopRo0mTZ
1a/7jxQAOw==" -format gif
    }
}

#------------------------------------------------------------------------------
# tablelist::mint2TreeImgs
#------------------------------------------------------------------------------
proc tablelist::mint2TreeImgs {} {
    foreach mode {collapsed expanded collapsedSel expandedSel} {
	variable mint2_${mode}Img \
		 [image create photo tablelist_mint2_${mode}Img]
    }

    variable pngSupported
    if {$pngSupported} {
	tablelist_mint2_collapsedImg put "
iVBORw0KGgoAAAANSUhEUgAAAA0AAAAOCAYAAAD0f5bSAAAAQ0lEQVQoz2NgGCjQRY6mewwMDLMI
KWLCImZHSCM2TWyENDLhEMerkYkcj+PS9IuBgeEQAwNDGrGa8GogO8ipErm0AwAGOwrpO0JShAAA
AABJRU5ErkJggg==" -format png

	tablelist_mint2_expandedImg put "
iVBORw0KGgoAAAANSUhEUgAAAA0AAAAOCAYAAAD0f5bSAAAAVElEQVQoz+3RIQqAQBBA0afd4i08
kXhCryIYDSavYNNsWWEQXDQKfhhYhnlp+QMFGvSoMncbWsxQpkeH9QbsEVxrMGIJM6V9tggfgQiH
N+Cs/vDnHlP2D8ZcM1duAAAAAElFTkSuQmCC" -format png

	tablelist_mint2_collapsedSelImg put "
iVBORw0KGgoAAAANSUhEUgAAAA0AAAAOCAYAAAD0f5bSAAAAUUlEQVQoz2NgGBAwadKk/8SoY0Lm
fP36lSiNTOgCMjIyBDViaHJ3dyeokQmbICGNTOQEGFZNO3fuZHjy5AlDXl4eI1GaCGnAqomQBrIj
l34AADlaJg96+zhqAAAAAElFTkSuQmCC" -format png

	tablelist_mint2_expandedSelImg put "
iVBORw0KGgoAAAANSUhEUgAAAA0AAAAOCAYAAAD0f5bSAAAAT0lEQVQoz+3RsQ3AQAgDQH/Fvgzi
yRjCS1BQkS5CivL6PkGiMicXAP8AABYAkOyqej0yM7j7egQkW1Jn5r2SmmRvayc8AhNGxDmY8GvP
vQB58zr4kXiRVAAAAABJRU5ErkJggg==" -format png
    } else {
	tablelist_mint2_collapsedImg put "
R0lGODlhDQAOAMIFAAAAACEhIScnJ2VlZXV1df///////////yH5BAEKAAcALAAAAAANAA4AAAMc
eLrc/odAFsZUQdgZ8n6dB4XaKI4l90HS5b5HAgA7" -format gif

	tablelist_mint2_expandedImg put "
R0lGODlhDQAOAMIHAAAAACIiIiwsLC0tLS8vLzQ0NDc3N////yH5BAEKAAcALAAAAAANAA4AAAMZ
eLrc/jDKSYK9YbSCg3ic9UHcGBlTqq5RAgA7" -format gif

	tablelist_mint2_collapsedSelImg put "
R0lGODlhDQAOAMIFAAAAAIeHh5KSkq6urvX19f///////////yH5BAEKAAcALAAAAAANAA4AAAMd
eLrc/kdAFuQ8YVgYiJ6dtzXh93TmmZ7j017wlAAAOw==" -format gif

	tablelist_mint2_expandedSelImg put "
R0lGODlhDQAOAMIGAAAAAIeHh46OjszMzODg4PX19f///////yH5BAEKAAcALAAAAAANAA4AAAMa
eLrc/jDKKYK9QTRBiieawxVgJAyhOa1sGyUAOw==" -format gif
    }
}

#------------------------------------------------------------------------------
# tablelist::newWaveTreeImgs
#------------------------------------------------------------------------------
proc tablelist::newWaveTreeImgs {} {
    foreach mode {collapsed expanded collapsedAct expandedAct} {
	variable newWave_${mode}Img \
		 [image create photo tablelist_newWave_${mode}Img]
    }

    variable pngSupported
    if {$pngSupported} {
	tablelist_newWave_collapsedImg put "
iVBORw0KGgoAAAANSUhEUgAAABAAAAAOCAYAAAAmL5yKAAABCUlEQVQoz8WSP0vEQBTE561h0SL2
FgFTZHGrlNY2FvJ6K/Ej2F6hvVjZChZWfgCzJ3YBOxftZSFwrRGuEJKT/LVKIQiXs7lpB37Mm3nA
ukXMvA3giogukiT5XBWwoZTaaprmtm3bE621UEq9Oee6sQABAHVd52maXud5ftD3/SszH60EIKK6
qqoPa+29tfamKIoJM0+ZeW/MCZtd151mWfYAYFGW5Xw2mz0LIb5837/UWiul1Itz7vsvgDckADD/
ZXheQURLu/AAQAjRDIAoinbCMJxIKQWAY2PM+1IAEdVBECy01mdSykMA58aYxzElDgl24zh+AnAH
YN8YU49dwQPQAZj+95HWrx8slWOLxRjWjwAAAABJRU5ErkJggg==" -format png

	tablelist_newWave_expandedImg put "
iVBORw0KGgoAAAANSUhEUgAAABAAAAAOCAYAAAAmL5yKAAABBklEQVQoz9VSPUsDQRB9c7dedeSK
LW7/QLgjbHuV3RUiuD/AJtraWdgFUqS1lPwBA4KN3VjaXe0P2NYrrtAELBT2DrFJIITNRyU4MDBv
5s2D+QD+vZExpgcg2MP7YeZPX0EAuO267tw59+EjRFEkhRCPAK68AkQ0BnBSVdWdc67daD4qy/J6
yfFaaK39yvM8SJLkuK7rVwDfKy+K4jSO4ydmftkmsJp9KqXsK6VCAHMAc6VUKKXsA5juWk4AAMzc
EtFIaz0EsACw0FoPiWjEzO3OK6wDY8xz0zT3AKCUumTms31nFBv4Jk3T2TK+OOQPwnVgrX3PsmxA
RG/M/HCIgPDkJn/6yr/4D0fVv4huoQAAAABJRU5ErkJggg==" -format png

	tablelist_newWave_collapsedActImg put "
iVBORw0KGgoAAAANSUhEUgAAABAAAAAOCAYAAAAmL5yKAAABEElEQVQoz9XRsUoDURAF0DvZl8QQ
iYquy75tLaxsZjv/wMJSEC39AnvBzlIEwc5a/IB0NoKFmGmsRKx3MQGjEkR8u28sRLCRbCrxtsMc
LjPAXydI07QTx/GRtfY6z/O3iQFrbatdw1mTsLMQW5ckiWRZ5qsCNQDoBCi25v172tZ9A71l5rWJ
ABB0qk7F6gyG24s6vdTCOTN3mXm5EkAEDQyVgaFyrkkf6yEeNyKshA3cMPMhM8/+BpjvBoGh4ueA
HOqA6rgG5mufYEytBIBnp+ZioNH9SK8A7IrI3VgABPUBlZd9H/aG/sl5bIpIt8oRDQC8OG2cPJTR
q9MDIjoW6bmqXzAA/KjAKaB7IjLAv8snuPFdR0oRvJ0AAAAASUVORK5CYII=" -format png

	tablelist_newWave_expandedActImg put "
iVBORw0KGgoAAAANSUhEUgAAABAAAAAOCAYAAAAmL5yKAAABDklEQVQoz9VSPUsDQRB9b/fuhKAn
gRA5q/yIq+0s7fwJFtYhbUCxs05pK/4IsbhOcBdNbWOVBUlhDu5E93JjFVC5fFSCAwPz5j0ew8wA
/z6YpmkMQK3R1caYvIkIROSypXASK5k3CfKauqxxBeC00QDAUAHHR3H9GfAnWQlw86YjAMNlo2nn
XNlJ9r3SPOy1WGrNepEP79x5+eCFtfZumYECAJKjccFJSUoQsgpCViUp44ITkqNVy1EAYIzxXjDI
ZmyHkfJhpHw2Y9sLBsYYv8pALwrn3PNWJznobbObz6GzqTxaa8/WnTH4hfu3r3IPAAL0N/kD/R04
56a73WSvqPBkrb3exCBo6J3/6St/AbNWYeq4QB0rAAAAAElFTkSuQmCC" -format png
    } else {
	tablelist_newWave_collapsedImg put "
R0lGODlhEAAOAIQdAAAAAFJSUl5eXl9fX2JiYmZmZmdnZ2lpaWtra2xsbG5ubnBwcHJycnR0dH19
fX9/f5KSkpSUlJqampycnJ2dnaGhoaenp6ysrLm5ucvLy8zMzN3d3ejo6P///////////yH5BAEK
AB8ALAAAAAAQAA4AAAU44CeOZGmeZYSegbCWAsQgr0hYFqU8r4H9mEpBgkJkjpnLgXhabDYaB2/V
4EwUtc8gkRWpuuDwKAQAOw==" -format gif

	tablelist_newWave_expandedImg put "
R0lGODlhEAAOAIQSAAAAAFJSUltbW19fX2xsbHBwcHh4eHl5eX9/f5KSkpSUlJWVlZqamqenp6ys
rLm5ubq6usrKyv///////////////////////////////////////////////////////yH5BAEK
AB8ALAAAAAAQAA4AAAU04CeOZGmeaKqmSiC8cKCcQ7LcSzKkR+M3BxXB8Xg4CCtDJGJYfRAQCML5
KRSoHwYDy6WGAAA7" -format gif

	tablelist_newWave_collapsedActImg put "
R0lGODlhEAAOAKUgAAAAAEA3NUI6N1A9OFE/OVNAOlNCO1BCPFFDPVRCO1VEPF5EO2JJP29IPU1E
QlBIRFdTU1dVU3lWR21tbZVdSJ9dSJdgS6RbRq1iSqpsUrFoTrRuUrlzVrh4WYWFhYyMjP//////
////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////yH5BAEKAAAALAAAAAAQAA4AAAY8QIBw
SCwaj0UP8hhwLIuDSwPyFBIwmMpi8ixovhrK4YM0bM4bC4J8THA4GQZ3qehIIlWA4JEXKvuAgUNB
ADs=" -format gif

	tablelist_newWave_expandedActImg put "
R0lGODlhEAAOAIQSAAAAAD83NU87NlNGP2FIP29KPk1EQldUU21tbZ1oT6JXRKVYRKNiS6xhSrFo
TrdwU4WFhYyMjP///////////////////////////////////////////////////////yH5BAEK
AB8ALAAAAAAQAA4AAAU04CeOZGmeaKqmUCC8cACdhrLci2KkReM3BdWB4XAwDivC40FYfRCJBML5
GQyon0gEy6WGAAA7" -format gif
    }
}

#------------------------------------------------------------------------------
# tablelist::oxygen1TreeImgs
#------------------------------------------------------------------------------
proc tablelist::oxygen1TreeImgs {} {
    foreach mode {collapsed expanded} {
	variable oxygen1_${mode}Img \
		 [image create photo tablelist_oxygen1_${mode}Img]
    }

    tablelist_oxygen1_collapsedImg put "
R0lGODlhDwAGAKECAAAAABQTEv///////yH5BAEKAAAALAAAAAAPAAYAAAINhI95oQ3sVpgwPouq
KwA7" -format gif

    tablelist_oxygen1_expandedImg put "
R0lGODlhDwAGAKECAAAAABQTEv///////yH5BAEKAAAALAAAAAAPAAYAAAIKhI+pyw0BoZtUFQA7" \
	-format gif
}

#------------------------------------------------------------------------------
# tablelist::oxygen2TreeImgs
#------------------------------------------------------------------------------
proc tablelist::oxygen2TreeImgs {} {
    foreach mode {collapsed expanded collapsedAct expandedAct} {
	variable oxygen2_${mode}Img \
		 [image create photo tablelist_oxygen2_${mode}Img]
    }

    variable pngSupported
    if {$pngSupported} {
	tablelist_oxygen2_collapsedImg put "
iVBORw0KGgoAAAANSUhEUgAAAA8AAAAICAYAAAAm06XyAAAAVUlEQVQY063NsQ1AUBhF4S/RSAxi
ARWVRCMS21hF8Sq7WEEMoLGG5i3wvzjNrc49/MCENSpVeVvsaHCW1DtcOPJJmAEvtqjY40ZCHREX
PCVFGDFHpQ9E+QlJi3wOIgAAAABJRU5ErkJggg==" -format png

	tablelist_oxygen2_expandedImg put "
iVBORw0KGgoAAAANSUhEUgAAAA8AAAAICAYAAAAm06XyAAAAUklEQVQY08XQKwqAQAAE0BcXvI5p
TYJlEbyNyZuYPJTYtXgNyybTatBpMzDMhz/Ror9pCV2JOeFAzLzGjqE0fcSGBiump/VnnFjebA+5
QfXJ0xfHZQlg71WjSwAAAABJRU5ErkJggg==" -format png

	tablelist_oxygen2_collapsedActImg put "
iVBORw0KGgoAAAANSUhEUgAAAA8AAAAICAYAAAAm06XyAAAAdklEQVQY06WQLQ6DYBBE3zZwn09U
oUkQJJxhHUnRKI6BxOwdEFwCsWfoHVq7NYjKbjpm1Mv8wL9Sj1Y9hix3u7wGVvVYMrB8pd8BA05g
siKvX5OxIicwAh3wyNRGPRpgA3ZgzRzWq8dTPebM5uryNzBakSMDfwCuvyBR+rjbCQAAAABJRU5E
rkJggg==" -format png

	tablelist_oxygen2_expandedActImg put "
iVBORw0KGgoAAAANSUhEUgAAAA8AAAAICAYAAAAm06XyAAAAcklEQVQY08XQLQ7CQBAG0LcEQThN
BQpHgiGkd5gKLI4jcAX+VB1n6C3Wc5jFrCCYVsGoyZe8Sb7hbxO5bCKX/Ve2i1y2Y3aGBa6Ry7rC
FW5YjuFUwQkdDrjj2TfpPAnXAw+0GPomxZTK84/9iBcuP3n2G9A/HMoKfNhNAAAAAElFTkSuQmCC" 
	    -format png
    } else {
	tablelist_oxygen2_collapsedImg put "
R0lGODlhDwAIAIABAAAAAP///yH5BAEKAAEALAAAAAAPAAgAAAIQjI8ZAOrcXIJysmoo1jviAgA7" \
	    -format gif

	tablelist_oxygen2_expandedImg put "
R0lGODlhDwAIAIABAAAAAP///yH5BAEKAAEALAAAAAAPAAgAAAIRjI+pawDnmHuThRntzfr2fxQA
Ow==" -format gif

	tablelist_oxygen2_collapsedActImg put "
R0lGODlhDwAIAKECAAAAAGDQ/////////yH5BAEKAAAALAAAAAAPAAgAAAIQhI8JEercXIJysmoo
1jviAgA7" -format gif

	tablelist_oxygen2_expandedActImg put "
R0lGODlhDwAIAKECAAAAAGDQ/////////yH5BAEKAAAALAAAAAAPAAgAAAIRhI+paxHnmHuTgRnt
zfr2fxQAOw==" -format gif
    }
}

#------------------------------------------------------------------------------
# tablelist::phaseTreeImgs
#------------------------------------------------------------------------------
proc tablelist::phaseTreeImgs {} {
    foreach mode {collapsed expanded} {
	variable phase_${mode}Img \
		 [image create photo tablelist_phase_${mode}Img]
    }

    tablelist_phase_collapsedImg put "
R0lGODlhDwAKAKECAAAAAMfHx////////yH5BAEKAAAALAAAAAAPAAoAAAIUhI9poQ3BHIJRPmov
lrS6bUHZMhYAOw==" -format gif

    tablelist_phase_expandedImg put "
R0lGODlhDwAKAKECAAAAAMfHx////////yH5BAEKAAAALAAAAAAPAAoAAAIRhI+pyx0P4YqS0WYq
BmH7jxQAOw==" -format gif
}

#------------------------------------------------------------------------------
# tablelist::plainTreeImgs
#------------------------------------------------------------------------------
proc tablelist::plainTreeImgs {{treeStyle "plain"}} {
    foreach mode {collapsed expanded} {
	variable ${treeStyle}_${mode}Img \
		 [image create photo tablelist_${treeStyle}_${mode}Img]
    }

    variable svgfmt

    tablelist_${treeStyle}_collapsedImg put {
<svg width="16" height="12" version="1.1" xmlns="http://www.w3.org/2000/svg">
 <path d="m3 0.5h1l5 5v1l-5 5h-1z" fill="#000" fill-opacity=".5"/>
</svg>
    } -format $svgfmt

    tablelist_${treeStyle}_expandedImg put {
<svg width="16" height="12" version="1.1" xmlns="http://www.w3.org/2000/svg">
 <path d="m0.5 3v1l5 5h1l5-5v-1z" fill="#000" fill-opacity=".5"/>
</svg>
    } -format $svgfmt
}

#------------------------------------------------------------------------------
# tablelist::plain100TreeImgs
#------------------------------------------------------------------------------
proc tablelist::plain100TreeImgs {{treeStyle "plain100"}} {
    foreach mode {collapsed expanded} {
	variable ${treeStyle}_${mode}Img \
		 [image create photo tablelist_${treeStyle}_${mode}Img]
    }

    variable pngSupported
    if {$pngSupported} {
	tablelist_${treeStyle}_collapsedImg put "
iVBORw0KGgoAAAANSUhEUgAAABAAAAAMCAYAAABr5z2BAAAAW0lEQVQoz6XSwQ2AIAwF0BcWUPfx
6B7qZjqhcQPPGtEC/1aavqYJ3DOiV5D0qCesGGoB6LBEkZR5DyPpoxdC0s+CDnMLoOUEOLHXAic2
HDVAaDgHhIffMpV+5Qur9wxrL3tFbQAAAABJRU5ErkJggg==" -format png

	tablelist_${treeStyle}_expandedImg put "
iVBORw0KGgoAAAANSUhEUgAAABAAAAAMCAYAAABr5z2BAAAAWElEQVQoz93NsQmAMBBA0aep3MQx
HNVR3EDs3EIstbIJIsFEW/1wHBz8f3yeCl2cNwxxTmqMWF7IK6b0GLBhRoumIPd3j0LcpUhWvgZy
kaKcBtLI/iT/hANuoReYQXFfZQAAAABJRU5ErkJggg==" -format png
    } else {
	tablelist_${treeStyle}_collapsedImg put "
R0lGODlhEAAMAKECAH9/f4CAgP///////yH5BAEKAAAALAAAAAAQAAwAAAIahI+JEerA2ltxnsgs
xPLx7nAapm3glJUqUAAAOw==" -format gif

	tablelist_${treeStyle}_expandedImg put "
R0lGODlhEAAMAKECAH9/f4CAgP///////yH5BAEKAAIALAAAAAAQAAwAAAIXlI+py30QopwgzRsW
jg07MX0GJ5bmaRQAOw==" -format gif
    }
}

#------------------------------------------------------------------------------
# tablelist::plain125TreeImgs
#------------------------------------------------------------------------------
proc tablelist::plain125TreeImgs {{treeStyle "plain125"}} {
    foreach mode {collapsed expanded} {
	variable ${treeStyle}_${mode}Img \
		 [image create photo tablelist_${treeStyle}_${mode}Img]
    }

    variable pngSupported
    if {$pngSupported} {
	tablelist_${treeStyle}_collapsedImg put "
iVBORw0KGgoAAAANSUhEUgAAABQAAAAPCAYAAADkmO9VAAAAe0lEQVQ4y63UsQ3CQAwF0KejAST6
QM0GDEMFw4WdskJuAoREQ0MDAhIf/p3P1nNh6XjNBgesNGbxVu9wxB4D7lGwfHnvcMY6C2xGy0Q/
jJYZMyG0zFzc4YRlFgjbJ5wGjqhZYMUFtwywosc14yghbAoMY7/AJuxT/v5tHpjnFBT9Aqa3AAAA
AElFTkSuQmCC" -format png

	tablelist_${treeStyle}_expandedImg put "
iVBORw0KGgoAAAANSUhEUgAAABQAAAAPCAYAAADkmO9VAAAAdElEQVQ4y+3MMQ6CQBBA0adY0GDH
AcQLcUZP4FGoDKE3MbEksbKwoSCbBRZa/M0kM5nH7jqgQLnh940+XJ5wRb0BvKMJl0e0eK7EXuhi
hwxfPHDBORG74TMFWoHOYmMwBV3EQnAOTcJiYAxNxpbKUQ3z33Q/nIceQEUhhdwAAAAASUVORK5C
YII=" -format png
    } else {
	tablelist_${treeStyle}_collapsedImg put "
R0lGODlhFAAPAIABAICAgP///yH5BAEKAAEALAAAAAAUAA8AAAIgjI+pB7DPGnxNzlTtNVnf7kGg
s41bAJ5opq7h98LtfBQAOw==" -format gif

	tablelist_${treeStyle}_expandedImg put "
R0lGODlhFAAPAIABAICAgP///yH5BAEKAAEALAAAAAAUAA8AAAIcjI+py+0PD5i00mXzZLq6DkBa
FFikcZ3qyrZJAQA7" -format gif
    }
}

#------------------------------------------------------------------------------
# tablelist::plain150TreeImgs
#------------------------------------------------------------------------------
proc tablelist::plain150TreeImgs {{treeStyle "plain150"}} {
    foreach mode {collapsed expanded} {
	variable ${treeStyle}_${mode}Img \
		 [image create photo tablelist_${treeStyle}_${mode}Img]
    }

    variable pngSupported
    if {$pngSupported} {
	tablelist_${treeStyle}_collapsedImg put "
iVBORw0KGgoAAAANSUhEUgAAABgAAAASCAYAAABB7B6eAAAAgklEQVQ4y7XVuRHCMBAF0DcLFEBM
ZhcBXZDSIa3QgSN34mEogEur44fSzn+aTcR7jpiw1yG7D2cXXHHCgmcLED/uZtxwGAV0QaJgpgmJ
wrlqJBKzVUgkH5RGomKtM84jASNXBCseo4AVd2wjgHR5BqgqLwWqy0uApvJ/QHP5t3T9cF52khcG
pUF3rQAAAABJRU5ErkJggg==" -format png

	tablelist_${treeStyle}_expandedImg put "
iVBORw0KGgoAAAANSUhEUgAAABgAAAASCAYAAABB7B6eAAAAg0lEQVQ4y+3TMQrCMBiG4UftLuLk
ITxBV+/qSXoCoYPgpBdwF+pSQSRpk2aoQ7/ph8D7TGHZ3Fthi2Nh54Jn6KHCDqdC4BED1rjjWhC/
9UBwG3RoccB+QvyM1xBgIjIa/wZykaT4L5CKJMdDwBiSFY8BMSQ7/vloQ6tQ93eTG1/2H3sDR4kk
yV0yRBMAAAAASUVORK5CYII=" -format png
    } else {
	tablelist_${treeStyle}_collapsedImg put "
R0lGODlhGAASAKECAH9/f4CAgP///////yH5BAEKAAIALAAAAAAYABIAAAItlI+pCxELVXOxikkt
c1xL3nkHBooGWYpo6K1ZC6Zw/JirecZ4zuLYPnoBh4ICADs=" -format gif

	tablelist_${treeStyle}_expandedImg put "
R0lGODlhGAASAIABAICAgP///yH5BAEKAAEALAAAAAAYABIAAAIhjI+py+0Po5wB2IszYLrf5mlP
+EHk5FFVphpYC8fyTDsFADs=" -format gif
    }
}

#------------------------------------------------------------------------------
# tablelist::plain175TreeImgs
#------------------------------------------------------------------------------
proc tablelist::plain175TreeImgs {{treeStyle "plain175"}} {
    foreach mode {collapsed expanded} {
	variable ${treeStyle}_${mode}Img \
		 [image create photo tablelist_${treeStyle}_${mode}Img]
    }

    variable pngSupported
    if {$pngSupported} {
	tablelist_${treeStyle}_collapsedImg put "
iVBORw0KGgoAAAANSUhEUgAAABwAAAAVCAYAAABVAo5cAAAAjklEQVRIx73WuRHCMBAF0Mc6ZhhC
ynATDBEFUCYhTTh3A5RhGuDQseiH0tc87SgR77PHETvJmT6s33DBAWsmGD/2Z1wzJ42CTioahb00
NCq6KWhU9rvRaDjThUbjRZvR6HiOGeeRIJxGg8+R4ILHKHDBHdsIsBlrAbuwWrAbqwFTsFIwDSsB
U7Fv+duf5gUUuBnxse4v2gAAAABJRU5ErkJggg==" -format png

	tablelist_${treeStyle}_expandedImg put "
iVBORw0KGgoAAAANSUhEUgAAABwAAAAVCAYAAABVAo5cAAAAhklEQVRIx+3QMQoCMRBA0acuVp7A
co/kQS1svIRgKeglVrCz0CaVmGySTZkPIcWEPBh6vcJW2OHQ8M8jXrHhEM7YEBxSwzUmXBphVzxT
DzbhvofV7hdiJ3xywKVoFvYL1qLZ2D+wFC3CYmAuWoylwDm0CpsDY2g1lgPCA1u8ccO5Fuv1qvoC
+5Airy2iRwAAAAAASUVORK5CYII=" -format png
    } else {
	tablelist_${treeStyle}_collapsedImg put "
R0lGODlhHAAVAKECAH9/f4CAgP///////yH5BAEKAAIALAAAAAAcABUAAAI3lI+pmxHAInNP2kPr
lVnv1XkfEoqjUJpfql5sy70nykJnPdOhPZd83/kBKcIhbETMKRxFpfNQAAA7" -format gif

	tablelist_${treeStyle}_expandedImg put "
R0lGODlhHAAVAKECAH9/f4CAgP///////yH5BAEKAAIALAAAAAAcABUAAAIvlI+py+0Po5w0hYuz
zm373X0i4Ige+ZgZCqkBG5mw9M3TZlNrtQAvDwwKh8RiowAAOw==" -format gif
    }
}

#------------------------------------------------------------------------------
# tablelist::plain200TreeImgs
#------------------------------------------------------------------------------
proc tablelist::plain200TreeImgs {{treeStyle "plain200"}} {
    foreach mode {collapsed expanded} {
	variable ${treeStyle}_${mode}Img \
		 [image create photo tablelist_${treeStyle}_${mode}Img]
    }

    variable pngSupported
    if {$pngSupported} {
	tablelist_${treeStyle}_collapsedImg put "
iVBORw0KGgoAAAANSUhEUgAAACAAAAAYCAYAAACbU/80AAAAgUlEQVRIx83SwQ2AMAxDUcswVg8c
GKyjdRJmYQPUxI5Cr030n6oCzef4uJsALgAngKcKwI2ZAeDuBJQiGJgtQTA4b0cwsWNFMLlnQ1DY
tSAo7ssIGl5RQtD0l0Y3AN2A1QlYnQAprgLkuAKwxLMAWzwDsMajAHs8AiiJ7wLK4r84LyYIFMyI
Z8NpAAAAAElFTkSuQmCC" -format png

	tablelist_${treeStyle}_expandedImg put "
iVBORw0KGgoAAAANSUhEUgAAACAAAAAYCAYAAACbU/80AAAAdUlEQVRIx+3Quw2AMAxF0QtswqQM
RsEszEFBExqUj+04osCvSYN8j4BY7O+b0rsNut+8O3/9Bx7APuD2IfloSe8JXMDqGFcBPBHi+Bvg
gVDFc4AehDpeAlgQpngNoEGY4y2ABNEVlwBqiO64FJBDuMRjsRjADTiXIh29BHTKAAAAAElFTkSu
QmCC" -format png
    } else {
	tablelist_${treeStyle}_collapsedImg put "
R0lGODlhIAAYAKECAH9/f4CAgP///////yH5BAEKAAIALAAAAAAgABgAAAJAlI+pyxYBmpQPzpuq
xVhvTnkR2HjPSCrmmarr1wovG8szTN5PrQf8XbO9gkITsag5IndKoxL5dFSiUh/Vdr0WAAA7" \
	    -format gif

	tablelist_${treeStyle}_expandedImg put "
R0lGODlhIAAYAIABAICAgP///yH5BAEKAAEALAAAAAAgABgAAAIyjI+py+0Po5y02nuA3rx74Hzi
94wmCJ2kpHJVi74nFpi0Id5ZpyNu74sBh8Si8YiEFAAAOw==" -format gif
    }
}

#------------------------------------------------------------------------------
# tablelist::plastikTreeImgs
#------------------------------------------------------------------------------
proc tablelist::plastikTreeImgs {} {
    foreach mode {collapsed expanded} {
	variable plastik_${mode}Img \
		 [image create photo tablelist_plastik_${mode}Img]
    }

    tablelist_plastik_collapsedImg put "
R0lGODlhDgAOAMIDAAAAAHZ2drW1tf///////////////////yH5BAEKAAQALAAAAAAOAA4AAAMp
SLrc/vCJQKlwc2gdLgsbsAUNqIlcOQAsO5BfOKrnzGTb692VFf1ARgIAOw==" -format gif

    tablelist_plastik_expandedImg put "
R0lGODlhDgAOAMIDAAAAAHZ2drW1tf///////////////////yH5BAEKAAQALAAAAAAOAA4AAAMn
SLrc/vCJQKlwc2gdLgtbGDRgyJEDoKrD+JnnC7tLJnrMVHVR7zMJADs=" -format gif
}

#------------------------------------------------------------------------------
# tablelist::plastiqueTreeImgs
#------------------------------------------------------------------------------
proc tablelist::plastiqueTreeImgs {} {
    foreach mode {collapsed expanded} {
	variable plastique_${mode}Img \
		 [image create photo tablelist_plastique_${mode}Img]
    }

    tablelist_plastique_collapsedImg put "
R0lGODlhEQAOAOMLAAAAAHp4eH59fa+trfHx8fPz8/X19ff39/n5+fv7+/39/f//////////////
/////yH5BAEKAA8ALAAAAAARAA4AAAQ+8MlJq7042yG6FwMmKGSpCGKiBmqCXgIiBzLyWsIR7Ptx
VwKDMCA0/CiCgjKgLBwnAoJ0SnhKOJ9OSMPtYiIAOw==" -format gif

    tablelist_plastique_expandedImg put "
R0lGODlhEQAOAOMLAAAAAHp4eH59fa+trfHx8fPz8/X19ff39/n5+fv7+/39/f//////////////
/////yH5BAEKAA8ALAAAAAARAA4AAAQ78MlJq7042yG6FwMmKGSpCGKirgl6CUgsI64lHEGeH3Ul
GMCgoUcRFI7IAnEiIDifhKWE8+mENNgsJgIAOw==" -format gif
}

#------------------------------------------------------------------------------
# tablelist::radianceTreeImgs
#------------------------------------------------------------------------------
proc tablelist::radianceTreeImgs {} {
    foreach mode {collapsed expanded} {
	variable radiance_${mode}Img \
		 [image create photo tablelist_radiance_${mode}Img]
    }

    tablelist_radiance_collapsedImg put "
R0lGODlhEgAQAKUoAAAAAEBAQOTe1eTe1uTf1+bh2ejj2ujk3erl3uvn4Ozo4u3p4+7q5O/r5u/s
5+/t6PDt6PPw7PLw7fXz8Pb08ff18vb18/f28vj28fj28vj28/j39Pj39fj49fn49/n5+Pr6+Pv7
+fz8+fz8+vz8+/39/P39/f7+/f//////////////////////////////////////////////////
/////////////////////////////////////////////yH5BAEKAD8ALAAAAAASABAAAAaZwJ9w
SCwWD4KkUnkwFjAj02k6NY0oBeLBQiKVvuBS19IUCkCgkGjEZotCaMFQ4Kl/7oH7p+6RmzkcGxsc
HQEdgYAcfj8CGhoZGhQVARUVF44aiwIUFBMBn6ABnBSaEhESqBIBqamaEA+wsAGxsBCaC7i5Abm4
DJoJCMHCwwgKiwcNBsrLzAYOZUIFCgQD1dYDBApZR0vd0EJBADs=" -format gif

    tablelist_radiance_expandedImg put "
R0lGODlhEgAQAKUoAAAAAEBAQOTe1eTe1uTf1+bh2ejj2ujk3erl3uvn4Ozo4u3p4+7q5O/r5u/s
5+/t6PDt6PPw7PLw7fXz8Pb08ff18vb18/f28vj28fj28vj28/j39Pj39fj49fn49/n5+Pr6+Pv7
+fz8+fz8+vz8+/39/P39/f7+/f//////////////////////////////////////////////////
/////////////////////////////////////////////yH5BAEKAD8ALAAAAAASABAAAAaTwJ9w
SCwWD4KkUnkwFjAj02k6NY0oBeLBQiKVvuBS19IUCkCgkGjEZotCaMFQ4Kl/7vhP3SM3czgbGxwd
hIB/HH0/AhoaGRoUFRcVkYwaiQIUFBMBnJ0BmRSXEhESpaanEpcQD6ytrg8QlwuztLWzDJcJCLu8
vQgKiQcNBsTFxgYOZUIFCgQDz9ADBApZR0vXykJBADs=" -format gif
}

#------------------------------------------------------------------------------
# tablelist::ubuntuTreeImgs
#------------------------------------------------------------------------------
proc tablelist::ubuntuTreeImgs {} {
    foreach mode {collapsed expanded collapsedSel expandedSel} {
	variable ubuntu_${mode}Img \
		 [image create photo tablelist_ubuntu_${mode}Img]
    }

    variable pngSupported
    if {$pngSupported} {
	tablelist_ubuntu_collapsedImg put "
iVBORw0KGgoAAAANSUhEUgAAAAsAAAAOCAYAAAD5YeaVAAAAgElEQVQoz73ROwrCUBSE4Q8jATtR
AkoWpZCVuA8xO0gr2LgdF+Cj0CJ1bGyuTUhuECTTzTn/FMMwllaxZ9LyFd64dMGTlk9RoEQ+BMMN
sxAohmCoccUmhNYxGBo8QukDsmkETrHEHXs8++A5Fjji/D12wTle2IWyvTph+5cFf9IH6EoSOPaU
kccAAAAASUVORK5CYII=" -format png

	tablelist_ubuntu_expandedImg put "
iVBORw0KGgoAAAANSUhEUgAAAAsAAAAOCAYAAAD5YeaVAAAAiklEQVQoz9XRIQoCYRAF4M8VXCzC
j2lFTJ7H5C02eA+bd9BgEBeP4R3MBrVZNFn+hZ8/qEnwwYThvZl5vOH/0EGFFfpvdE8surjjgSlO
uGTVwxbHIk4ecEXINgbcsIciIZYYoIx9iVDX9Sb1nGKGOc4YYYemJYtM3NqZxPPNp4QqrDH+NtLh
bz/4Au5zF3nYGscDAAAAAElFTkSuQmCC" -format png

	tablelist_ubuntu_collapsedSelImg put "
iVBORw0KGgoAAAANSUhEUgAAAAsAAAAOCAYAAAD5YeaVAAAAiElEQVQoz72SoQoCURREz11YweIv
uFEQo83id+wvWMT/M4nFbhCxLNjXKMixaHks6xPEaQOHO8xw4S9Sp9/AN3WTC9/Vq3roSikSXwIn
YATs05RILwO7lx0CY6AB6og498FvzYAHMC96KgyACXABFhHRdBXcqke1Vde5a1SfpmvVVe7Oy5+9
wxNzbFn4+q5BGgAAAABJRU5ErkJggg==" -format png

	tablelist_ubuntu_expandedSelImg put "
iVBORw0KGgoAAAANSUhEUgAAAAsAAAAOCAYAAAD5YeaVAAAAj0lEQVQoz9WRMQ4BARBF30ejICKa
jUg4z15EOMsewC00nEOhlJAoHEDUT7MrCkQl8ZufmXnF/Bn4P0WdAlug/4G7AWUnyUmtgAVwfAHO
gFWSQ5qOugF6wOUJLIBrkhKg9TSYA0OgW9ddYAQsG+ABJzkDFTAG2rVXSU5vk6hrdV+v9Vlqoe7U
yVf3VAe//eAdhJ0u3C54tZ8AAAAASUVORK5CYII=" -format png
    } else {
	tablelist_ubuntu_collapsedImg put "
R0lGODlhCwAOAKECAAAAAExMTP///////yH5BAEKAAAALAAAAAALAA4AAAIWhI+py8EWYotOUZou
PrrynUmL95RLAQA7" -format gif

	tablelist_ubuntu_expandedImg put "
R0lGODlhCwAOAKECAAAAAExMTP///////yH5BAEKAAAALAAAAAALAA4AAAIThI+pyx0P4Yly0pDo
qor3BoZMAQA7" -format gif

	tablelist_ubuntu_collapsedSelImg put "
R0lGODlhCwAOAKEBAAAAAP///////////yH5BAEKAAAALAAAAAALAA4AAAIWhI+py8EWYotOUZou
PrrynUmL95RLAQA7" -format gif

	tablelist_ubuntu_expandedSelImg put "
R0lGODlhCwAOAKEBAAAAAP///////////yH5BAEKAAAALAAAAAALAA4AAAIThI+pyx0P4Yly0pDo
qor3BoZMAQA7" -format gif
    }
}

#------------------------------------------------------------------------------
# tablelist::ubuntu2TreeImgs
#------------------------------------------------------------------------------
proc tablelist::ubuntu2TreeImgs {} {
    foreach mode {collapsed expanded collapsedSel expandedSel} {
	variable ubuntu2_${mode}Img \
		 [image create photo tablelist_ubuntu2_${mode}Img]
    }

    variable pngSupported
    if {$pngSupported} {
	tablelist_ubuntu2_collapsedImg put "
iVBORw0KGgoAAAANSUhEUgAAAAgAAAAKCAYAAACJxx+AAAAAQ0lEQVQY02NgIAGoEFKwHZsiJiQ2
FwMDwxR0RUxoGjjRFTFhsYqTgYGhB5+C7wwMDCW4FHxnYGDIYWBguEO0LwiGAwABBAfLngO55AAA
AABJRU5ErkJggg==" -format png

	tablelist_ubuntu2_expandedImg put "
iVBORw0KGgoAAAANSUhEUgAAAAgAAAAKCAYAAACJxx+AAAAASElEQVQY073MsRFAQBgF4Y8LVCAU
aUZDAoECjIKc9Oa6kkj+kJAN3+48PqfBgunF54SKAT26EBcObCmGgjGiFif2p8sVs3+5ATBkB+s7
tAL3AAAAAElFTkSuQmCC" -format png

	tablelist_ubuntu2_collapsedSelImg put "
iVBORw0KGgoAAAANSUhEUgAAAAgAAAAKCAYAAACJxx+AAAAAS0lEQVQY02NgIAGwYRNkQmILMzAw
sOJTwAnFrLgUMPz//38nVBE7NuuU/kNAHwMDgwguBccZGBj4cJqATRLZDf8ZGBh+QjFWgNVYAOY5
EusI1YWXAAAAAElFTkSuQmCC" -format png

	tablelist_ubuntu2_expandedSelImg put "
iVBORw0KGgoAAAANSUhEUgAAAAgAAAAKCAYAAACJxx+AAAAARElEQVQY073MsQmAUBBEwblIRAT5
YAPWYG779mNkdEaHiYY60cLC43OBGePLf9SYMnPN24auCqVl5oIhInacT8mG3r8uDt8Ur7bv+awA
AAAASUVORK5CYII=" -format png
    } else {
	tablelist_ubuntu2_collapsedImg put "
R0lGODlhCAAKAMIFAAAAAD4+PkdHR0hISE9PT////////////yH5BAEKAAcALAAAAAAIAAoAAAMS
eLrcO+4E4cJsNhBmKfcMFDUJADs=" -format gif

	tablelist_ubuntu2_expandedImg put "
R0lGODlhCAAKAMIEAAAAAD4+PkNDQ0tLS////////////////yH5BAEKAAAALAAAAAAIAAoAAAMO
CLrcziHKNaJo477NewIAOw==" -format gif

	tablelist_ubuntu2_collapsedSelImg put "
R0lGODlhCAAKAMIGAAAAAN3d3d7e3ubm5uvr6/Hx8f///////yH5BAEKAAcALAAAAAAIAAoAAAMS
eLrcO+6E4oKhzBqSb5uOEDkJADs=" -format gif

	tablelist_ubuntu2_expandedSelImg put "
R0lGODlhCAAKAKECAAAAAN3d3f///////yH5BAEKAAMALAAAAAAIAAoAAAINnI+pGO0nokhx2YtH
AQA7" -format gif
    }
}

#------------------------------------------------------------------------------
# tablelist::ubuntu3TreeImgs
#------------------------------------------------------------------------------
proc tablelist::ubuntu3TreeImgs {} {
    foreach mode {collapsed expanded collapsedSel expandedSel} {
	variable ubuntu3_${mode}Img \
		 [image create photo tablelist_ubuntu3_${mode}Img]
    }

    variable pngSupported
    if {$pngSupported} {
	tablelist_ubuntu3_collapsedImg put "
iVBORw0KGgoAAAANSUhEUgAAAA0AAAAOCAYAAAD0f5bSAAAAXElEQVQoz53SwQnAMAiF4R+7RDtP
5uk0WbIDBHLtJaegz9Z3EYUPRIRCjq1vwASGQrb1F9CB8w9iAQktmEtoYosQWnIoF1rl5Bl6gHvV
T8gFCoUgQhJ4adk3lPMCv1MPZaZLyU8AAAAASUVORK5CYII=" -format png

	tablelist_ubuntu3_expandedImg put "
iVBORw0KGgoAAAANSUhEUgAAAA0AAAAOCAYAAAD0f5bSAAAAXUlEQVQoz93QMQ2AMBBA0dcggLUT
RjCBEdQggwUPOGFCAAJYOkBIKWyEn9xyubcc/yugQ3x4v2IKCQxoCmBBj7XChhkt6hKAKi3v4Akc
UQ5eQK6IMU1889X4FnyoHanvE2re8YhQAAAAAElFTkSuQmCC" -format png

	tablelist_ubuntu3_collapsedSelImg put "
iVBORw0KGgoAAAANSUhEUgAAAA0AAAAOCAYAAAD0f5bSAAAAYElEQVQoz7XQwQ2AMAiF4R/iFJ50
FKdwXEexJ9d43ptCq8Z3g/AlAHyNpH1kzqt6lnRKWp4ggAU4MuhBP4WebBFC79zchP7myz1UgM3M
yihqggyFIEIpAJiq+jKzlT9yA0MWI4rFHgIbAAAAAElFTkSuQmCC" -format png

	tablelist_ubuntu3_expandedSelImg put "
iVBORw0KGgoAAAANSUhEUgAAAA0AAAAOCAYAAAD0f5bSAAAARUlEQVQoz93SsQkAIBAEwftOHuzN
ouxNLGXNBEX0U934JjvpvwzIklJwX82sCHCgca8BPngAziAA9+AAz2ADY2CB/ugjOncZoKZnp+Bb
AAAAAElFTkSuQmCC" -format png
    } else {
	tablelist_ubuntu3_collapsedImg put "
R0lGODlhDQAOAMIFAAAAADw8PFRUVKOjo7y8vP///////////yH5BAEKAAcALAAAAAANAA4AAAMf
eLrcR84NEdkItJ6LNe/RBzZiRgaoeY4SK6kRpM1KAgA7" -format gif

	tablelist_ubuntu3_expandedImg put "
R0lGODlhDQAOAMIFAAAAADY2NlRUVJeXl6+vr////////////yH5BAEKAAcALAAAAAANAA4AAAMd
eLrc/jA+Mqq9RInAOxfM5gVgI36QWKar5L5wlAAAOw==" -format gif

	tablelist_ubuntu3_collapsedSelImg put "
R0lGODlhDQAOAKEBAAAAAP///////////yH5BAEKAAAALAAAAAANAA4AAAIZhI8JoRrczoNxUmer
vXI3/03R8oykuaBoAQA7" -format gif

	tablelist_ubuntu3_expandedSelImg put "
R0lGODlhDQAOAKEBAAAAAP///////////yH5BAEKAAAALAAAAAANAA4AAAIUhI+py70Bo4RmTmRp
skw67YTi6BQAOw==" -format gif
    }
}

#------------------------------------------------------------------------------
# tablelist::ubuntuMateTreeImgs
#------------------------------------------------------------------------------
proc tablelist::ubuntuMateTreeImgs {} {
    foreach mode {collapsed expanded collapsedSel expandedSel} {
	variable ubuntuMate_${mode}Img \
		 [image create photo tablelist_ubuntuMate_${mode}Img]
    }

    variable pngSupported
    if {$pngSupported} {
	tablelist_ubuntuMate_collapsedImg put "
iVBORw0KGgoAAAANSUhEUgAAABAAAAAOCAYAAAAmL5yKAAAAXklEQVQoz2NgoCawsbGRJlUPExo/
1sbGpoESAxgYGBjqSTGECYc40YYw4ZEjyhAmAvIEDWEiwpX1NjY2jpQY0HjkyJH95BrQeOTIEbK9
QFAzPgOI0ozLAKI1UyUvAADOUhxG1dpsVwAAAABJRU5ErkJggg==" -format png

	tablelist_ubuntuMate_expandedImg put "
iVBORw0KGgoAAAANSUhEUgAAABAAAAAOCAYAAAAmL5yKAAAAYUlEQVQoz+3SsQ2AMAxE0Y/Ywx1b
nAS7MAgwCMMgeYt0mYQuUkSIkhqu9n+V4d8gaQLWjuZ095AAAEkbsDfEh7tndyNAjPEyM4ClJ05A
A1KMM6CCvMYPoIBU4+okzR/5xBvrpyg6R2b3OgAAAABJRU5ErkJggg==" -format png

	tablelist_ubuntuMate_collapsedSelImg put "
iVBORw0KGgoAAAANSUhEUgAAABAAAAAOCAYAAAAmL5yKAAAAWklEQVQoz2NgoCb4//+/DKl6mND4
Mf///2+gxAUV/yGggVwXwEA9sYYw4ZEjyhAmAvIEDWEiwpX1////d6TEgEZGRsb95BrQyMjISLYX
CGqmSjrAZkADXfMCAHPpOeamW0O+AAAAAElFTkSuQmCC" -format png

	tablelist_ubuntuMate_expandedSelImg put "
iVBORw0KGgoAAAANSUhEUgAAABAAAAAOCAYAAAAmL5yKAAAASUlEQVQoz2NgGAWM////V2FgYEgh
Qc9cRkbG2ygi////r/9PHGjAaSwRhjQQdBseQxqI9iAWQxpIDlkkQxrIjp7////bj5CUCAC6C463
hFszLQAAAABJRU5ErkJggg==" -format png
    } else {
	tablelist_ubuntuMate_collapsedImg put "
R0lGODlhEAAOAMIFAAAAADw8PJ2dnaOjo83Nzf///////////yH5BAEKAAcALAAAAAAQAA4AAAMg
eLrc/m8I6EaYdNmb1ebZB0JiQFAiRgasuo4ojLpdnQAAOw==" -format gif

	tablelist_ubuntuMate_expandedImg put "
R0lGODlhEAAOAMIFAAAAADw8PJeXl52dnc7Ozv///////////yH5BAEKAAcALAAAAAAQAA4AAAMf
eLrc/jBKKaq9oo3Aex/O5nHgI37SWabBOhFTLM9PAgA7" -format gif

	tablelist_ubuntuMate_collapsedSelImg put "
R0lGODlhEAAOAKEBAAAAAP///////////yH5BAEKAAAALAAAAAAQAA4AAAIbhI+puxGs3INHTmov
yzpy+IEWBYykRBpOyhoFADs=" -format gif

	tablelist_ubuntuMate_expandedSelImg put "
R0lGODlhEAAOAKEBAAAAAP///////////yH5BAEKAAAALAAAAAAQAA4AAAIXhI+py+0eopwh0auu
ZBrOB2xgOJamWQAAOw==" -format gif
    }
}

#------------------------------------------------------------------------------
# tablelist::vistaAeroTreeImgs
#------------------------------------------------------------------------------
proc tablelist::vistaAeroTreeImgs {{treeStyle "vistaAero"}} {
    variable scalingpct
    vistaAeroTreeImgs_$scalingpct $treeStyle
}

#------------------------------------------------------------------------------
# tablelist::vistaAeroTreeImgs_100
#------------------------------------------------------------------------------
proc tablelist::vistaAeroTreeImgs_100 {{treeStyle "vistaAero"}} {
    foreach mode {collapsed expanded collapsedAct expandedAct} {
	variable ${treeStyle}_${mode}Img \
		 [image create photo tablelist_${treeStyle}_${mode}Img]
    }

    variable pngSupported
    if {$pngSupported} {
	tablelist_${treeStyle}_collapsedImg put "
iVBORw0KGgoAAAANSUhEUgAAAAoAAAAOCAYAAAAWo42rAAAAbUlEQVQoz83QsQqCUBQG4I9oayrd
Gpp6COfWBgVBH1Eh6A16myYRX6FF4XJBBXHonw7n/4bD4S+S4TRXHoL5hieSNQgfFLiuwQ5vlLgv
QejRosZ5CV5QocEwLY8RSpHjhW9YxPAx3thv/uP++QGucwwpQjDsiQAAAABJRU5ErkJggg==" \
	    -format png

	tablelist_${treeStyle}_expandedImg put "
iVBORw0KGgoAAAANSUhEUgAAAAoAAAAOCAYAAAAWo42rAAAAOklEQVQoz2NgGLrAkYGBoZwYRVcY
GBhuElQUERHxH10hE5qiyREREdrYTGAiRhEyKIdahYwrh1oMAACO1g8CUDLawwAAAABJRU5ErkJg
gg==" -format png

	tablelist_${treeStyle}_collapsedActImg put "
iVBORw0KGgoAAAANSUhEUgAAAAoAAAAOCAYAAAAWo42rAAAAiklEQVQoz2NgGHggc+T7FJkj3w1x
yTMhseMYGBiWyRz57kxIIQMDA8NMqOJIfFZ/gtJJMke+f5M58j0Jn4kMT2w45zEwMBQyMDDMlTny
XQOnQqhJ/QwMDMlPbDhvwMRZ0BQVMDAwVEIVLUeWY0EzMJ2BgSHqiQ3nXnSbkBUuYmBgmPvEhvM8
fWIOAAwvKe6unLtFAAAAAElFTkSuQmCC" -format png

	tablelist_${treeStyle}_expandedActImg put "
iVBORw0KGgoAAAANSUhEUgAAAAoAAAAOCAYAAAAWo42rAAAAQUlEQVQoz2NgGKJA5sj3Spkj3zci
i7FgU8TAwNCELseETVGaNAuGAUzEKIIrJKQI2Y0WDAwMLLOe/kGW2zTUIgEAh5gVN7Wc7FMAAAAA
SUVORK5CYII=" -format png
    } else {
	tablelist_${treeStyle}_collapsedImg put "
R0lGODlhCgAOAMIHAAAAAIKCgpCQkJubm6enp6ioqMbGxv///yH5BAEKAAcALAAAAAAKAA4AAAMa
eLrc/szAQwokZzx8hONH0HDemG3WI03skwAAOw==" -format gif

	tablelist_${treeStyle}_expandedImg put "
R0lGODlhCgAOAMIGAAAAACYmJisrK1hYWIaGhoiIiP///////yH5BAEKAAcALAAAAAAKAA4AAAMY
eLrc/jCeAkV4YtyWNR/gphRBGRBSqkoJADs=" -format gif

	tablelist_${treeStyle}_collapsedActImg put "
R0lGODlhCgAOAMIGAAAAABzE9ybG9y/J9z/N+Hvc+v///////yH5BAEKAAcALAAAAAAKAA4AAAMa
eLrc/qzAIwgUZzxMHT9Bw30LpnnWI03skwAAOw==" -format gif

	tablelist_${treeStyle}_expandedActImg put "
R0lGODlhCgAOAMIEAAAAAB3E92HW+YLf+////////////////yH5BAEKAAAALAAAAAAKAA4AAAMX
CLrc/jACAUN4YdyWNR/gpgiWRUloGiUAOw==" -format gif
    }
}

#------------------------------------------------------------------------------
# tablelist::vistaAeroTreeImgs_125
#------------------------------------------------------------------------------
proc tablelist::vistaAeroTreeImgs_125 {{treeStyle "vistaAero"}} {
    foreach mode {collapsed expanded collapsedAct expandedAct} {
	variable ${treeStyle}_${mode}Img \
		 [image create photo tablelist_${treeStyle}_${mode}Img]
    }

    variable pngSupported
    if {$pngSupported} {
	tablelist_${treeStyle}_collapsedImg put "
iVBORw0KGgoAAAANSUhEUgAAAA0AAAAQCAYAAADNo/U5AAAAhElEQVQoz9XSMQrCUAwG4A9xL1jE
zcWtR3B3KIgg6OLk0YSOCqXg1rN4ABGF3qCLOJQnvoII/ltIvpAh/FXmSD4NDTr1FDnGfRDUWGLS
B91RYYtZLIIHCqyRxSJocMAGaSxKsMfpefIrwzdghB1KXLrNEEqxwhHX0MYQWuCM21c/4ndpAXQy
EDjRgV+jAAAAAElFTkSuQmCC" -format png

	tablelist_${treeStyle}_expandedImg put "
iVBORw0KGgoAAAANSUhEUgAAAA0AAAAQCAYAAADNo/U5AAAAT0lEQVQoz2NgGHlAkYGBwY9UDUcZ
GBhukqQhMjLyPzZNTDg0LImMjLTCZSITqRrQNRGlAVkT0RoYGBgYGKG0HwMDQzcONQsYGBjah3va
AgAg2BApacIJTgAAAABJRU5ErkJggg==" -format png

	tablelist_${treeStyle}_collapsedActImg put "
iVBORw0KGgoAAAANSUhEUgAAAA0AAAAQCAYAAADNo/U5AAAArUlEQVQoz9XSIQ7CQBCF4T+0Zu8w
l8Cv4wIEV2QrMZBgapBgSEAUWSR1DRfAjecSe4dRTTANomlDcTBusvPNG7HwPyVqhahNP81NOv0c
qEVt9g0COAI3UUtGo+DdBciBUtTWY5MI3l2BLIKTqO1HoRZWDSyAXNTSUUjUkghq4NAmvyseAClQ
NLAJ3p2773EPWAE7IAveVX1L+5K2wDJ49xg6vYvuQBm8e/7GH30BhiMxHhSDo2EAAAAASUVORK5C
YII=" -format png

	tablelist_${treeStyle}_expandedActImg put "
iVBORw0KGgoAAAANSUhEUgAAAA0AAAAQCAYAAADNo/U5AAAAUElEQVQoz2NgGGFA5sj3IJkj3zei
i7Pg08DAwDCHgYFBEF2OCZ+GNGkWQWzyTKRqwNBEjAYUTcRqgGsiRQNy6MUzMDAIznr6B5uaTSMh
eQEAgzAb/lYeOL4AAAAASUVORK5CYII=" -format png
    } else {
	tablelist_${treeStyle}_collapsedImg put "
R0lGODlhDQAQAMIHAAAAAIGBgYuLi5OTk56enqenp8XFxf///yH5BAEKAAcALAAAAAANABAAAAMg
eLrc/tCZuEqh5xJ6z4jdIUDhETzhiCofeWxg+UxYjSUAOw==" -format gif

	tablelist_${treeStyle}_expandedImg put "
R0lGODlhDQAQAMIGAAAAACYmJjo6OllZWYaGhrGxsf///////yH5BAEKAAcALAAAAAANABAAAAMe
eLrc/jDKVqYIUgwM9e5DyDWe6JQmUwRsS0xwLDsJADs=" -format gif

	tablelist_${treeStyle}_collapsedActImg put "
R0lGODlhDQAQAMIHAAAAAB7E9yTG9y/J9zTK9zjL+Hvc+v///yH5BAEKAAcALAAAAAANABAAAAMg
eLrc/tCZuEihh5xB9RGRdwSQOD4iiSpguXUXNWE0lgAAOw==" -format gif

	tablelist_${treeStyle}_expandedActImg put "
R0lGODlhDQAQAMIFAAAAABzE9yvH92HW+YLf+////////////yH5BAEKAAcALAAAAAANABAAAAMe
eLrc/jDKNqYIUhAM9e5EyDWe6JQmMwRsW01wLDcJADs=" -format gif
    }
}

#------------------------------------------------------------------------------
# tablelist::vistaAeroTreeImgs_150
#------------------------------------------------------------------------------
proc tablelist::vistaAeroTreeImgs_150 {{treeStyle "vistaAero"}} {
    foreach mode {collapsed expanded collapsedAct expandedAct} {
	variable ${treeStyle}_${mode}Img \
		 [image create photo tablelist_${treeStyle}_${mode}Img]
    }

    variable pngSupported
    if {$pngSupported} {
	tablelist_${treeStyle}_collapsedImg put "
iVBORw0KGgoAAAANSUhEUgAAABAAAAASCAYAAABSO15qAAAAk0lEQVQ4y93TrwoCQRAH4A+5ZPMP
GCyCr2HVoEXhMPl4JhG0aPFlLAZBjWbLXpH1jtug4LSB+X0Msyx/VyO06gQab30fE3RTAThhil4q
8MAB87BRbQDu2CLHIAUokHVAhilAgeywRDMF6GCBDZ6xgawivAq3OH8aykrCeQhfylaMAW3MsMe1
6hljwBhH3L7yF35fL0eRFD0vdToiAAAAAElFTkSuQmCC" -format png

	tablelist_${treeStyle}_expandedImg put "
iVBORw0KGgoAAAANSUhEUgAAABAAAAASCAYAAABSO15qAAAAVklEQVQ4y2NgGAV0Ae4MDAzllGi+
wsDAcJNszZGRkf/xGcCER3NvZGSkNiFbmCjRjM0AkjSjG0CyZmQDyNLMwMDAwAilyxkYGJLwqFvA
wMDQPpolsAMA67sS7mmtYFoAAAAASUVORK5CYII=" -format png

	tablelist_${treeStyle}_collapsedActImg put "
iVBORw0KGgoAAAANSUhEUgAAABAAAAASCAYAAABSO15qAAAAkklEQVQ4y2NgGF5A5sj36TJHvgeR
oocJjR/NwMAwR+bI92hyDWBgYGCoYmBgmC5z5HsyOV74BKUzZI58/yZz5HsGWQagGVJAlgFkGYJu
AJIh/2WOfHckNhBRNDMwMPQxMDAUPrHh3E+/MKAoFqCaPxGbDhixuOAPAwND7hMbzqXEGMCCxl/K
wMCw+4kN57qhk4MBqw9f8e/1ZzoAAAAASUVORK5CYII=" -format png

	tablelist_${treeStyle}_expandedActImg put "
iVBORw0KGgoAAAANSUhEUgAAABAAAAASCAYAAABSO15qAAAAVklEQVQ4y2NgGAW0BzJHvhfIHPm+
EZc8CyHNDAwM3fjUMRHSHC/JgtcSJkKa2Znwe5GJEs0YBpCqGcUAcjTDDSBXM3I0OjIwMLAsfP4H
l7pNozkCNwAAt+IfTnBR4NgAAAAASUVORK5CYII=" -format png
    } else {
	tablelist_${treeStyle}_collapsedImg put "
R0lGODlhEAASAOMIAAAAAIaGhouLi5CQkJiYmKGhoaioqMPDw///////////////////////////
/////yH5BAEKAAAALAAAAAAQABIAAAQrEMhJq70426OrMd0EFiEAAkR4AkO3AoL2AkH2xvbUylLq
AiTVLMMpGY+ACAA7" -format gif

	tablelist_${treeStyle}_expandedImg put "
R0lGODlhEAASAMIGAAAAACYmJisrK1lZWYaGhoiIiP///////yH5BAEKAAcALAAAAAAQABIAAAMj
eLrc/jDKSWepR4Qqxp6dBw7kB4VlhKbPyjZFIM8Bgd14DiUAOw==" -format gif

	tablelist_${treeStyle}_collapsedActImg put "
R0lGODlhEAASAMIFAAAAABzE9ybG9yvH93jc+v///////////yH5BAEKAAcALAAAAAAQABIAAAMj
eLrc/jA6IpsYdYmzc+8SCELj6JhBVIZa9XlcxmEyJd/4kQAAOw==" -format gif

	tablelist_${treeStyle}_expandedActImg put "
R0lGODlhEAASAMIFAAAAAB3E92HW+Xvd+4Lf+////////////yH5BAEKAAcALAAAAAAQABIAAAMj
eLrc/jDKSaeoJ4Qaxp4d8UWhKJUmhKbOyjKCJmsXZt/4kwAAOw==" -format gif
    }
}

#------------------------------------------------------------------------------
# tablelist::vistaAeroTreeImgs_175
#------------------------------------------------------------------------------
proc tablelist::vistaAeroTreeImgs_175 {{treeStyle "vistaAero"}} {
    foreach mode {collapsed expanded collapsedAct expandedAct} {
	variable ${treeStyle}_${mode}Img \
		 [image create photo tablelist_${treeStyle}_${mode}Img]
    }

    variable pngSupported
    if {$pngSupported} {
	tablelist_${treeStyle}_collapsedImg put "
iVBORw0KGgoAAAANSUhEUgAAABIAAAASCAYAAABWzo5XAAAAlElEQVQ4y+XTrQoCQRAA4A+5ZPMH
DBbB17Bq0KJwmHw8kwhatPgylguCGs2WvSLH3XEbFJw2sPMxO8PwNzFBp0lh6yMfYoZ+LAQXzDGI
hZ44YRk6bAzBA3ukGMVAObYN2DgGyrED1mjHQD2ssMOr7GFSgWzCrK5VX0tKkDQgWZ1hF0FdLHDE
re76i6Apzrh/5dZ+L96mrBQ93arVCgAAAABJRU5ErkJggg==" -format png

	tablelist_${treeStyle}_expandedImg put "
iVBORw0KGgoAAAANSUhEUgAAABIAAAASCAYAAABWzo5XAAAAWElEQVQ4y2NgGAWDCrgzMDCUU8OQ
KwwMDDcpNiQyMvI/MQYx4TGkNzIyUptYW5moYQg2g8gyBN0gsg1BNogiQxgYGBgYoXQ5AwNDEh51
CxgYGNpHsxRlAAAzzRLucI72KAAAAABJRU5ErkJggg==" -format png

	tablelist_${treeStyle}_collapsedActImg put "
iVBORw0KGgoAAAANSUhEUgAAABIAAAASCAYAAABWzo5XAAAAk0lEQVQ4y2NgGBlA5sj36TJHvgeR
o5cJjR/NwMAwR+bI92hKDWJgYGCoYmBgmC5z5HsyJV77BKUzZI58/yZz5HsGRQahGVZAkUEUGYZu
EJJh/2WOfHckNbBRDGFgYOhjYGAofGLDuX/gwogqsQY15BOp6YgRi4v+MDAw5D6x4VxKikEsaPyl
DAwMu5/YcK4b+iUHAMhVX/GmlHueAAAAAElFTkSuQmCC" -format png

	tablelist_${treeStyle}_expandedActImg put "
iVBORw0KGgoAAAANSUhEUgAAABIAAAASCAYAAABWzo5XAAAAXUlEQVQ4y2NgGAWDB8gc+V4gc+T7
RkLqWAgZwsDA0E1IHQMDAwMTIUPiJVlYiHE5EyFD2JmICwImahiCYRC5hqAYRIkhcIMoNQQ5+h0Z
GBhYFj7/g0vdptEcRTkAAKPJH058YP1QAAAAAElFTkSuQmCC" -format png
    } else {
	tablelist_${treeStyle}_collapsedImg put "
R0lGODlhEgASAOMIAAAAAIaGhouLi5CQkJiYmKGhoaioqMPDw///////////////////////////
/////yH5BAEKAAAALAAAAAASABIAAAQsEMhJq704a3m2NYZHhYUohQBhosAgsoDgwUCwwfI9ubOk
voDSirbpmI5ISgQAOw==" -format gif

	tablelist_${treeStyle}_expandedImg put "
R0lGODlhEgASAMIGAAAAACYmJisrK1lZWYaGhoiIiP///////yH5BAEKAAcALAAAAAASABIAAAMk
eLrc/jDKSSssVomQxeCV94VDCUqiOaVqxLZPEcx0QGR4rlsJADs=" -format gif

	tablelist_${treeStyle}_collapsedActImg put "
R0lGODlhEgASAMIFAAAAABzE9ybG9yvH93jc+v///////////yH5BAEKAAcALAAAAAASABIAAAMl
eLrc/jBKRaYTwzJxuO6KZ4miVJYQGkznuKBp+HFwhH0Uru9KAgA7" -format gif

	tablelist_${treeStyle}_expandedActImg put "
R0lGODlhEgASAMIFAAAAAB3E92HW+Xvd+4Lf+////////////yH5BAEKAAcALAAAAAASABIAAAMj
eLrc/jDKSSsUVoWQw+CVR4CTOFLmKaUqxLaOsM0blt14XiUAOw==" -format gif
    }
}

#------------------------------------------------------------------------------
# tablelist::vistaAeroTreeImgs_200
#------------------------------------------------------------------------------
proc tablelist::vistaAeroTreeImgs_200 {{treeStyle "vistaAero"}} {
    foreach mode {collapsed expanded collapsedAct expandedAct} {
	variable ${treeStyle}_${mode}Img \
		 [image create photo tablelist_${treeStyle}_${mode}Img]
    }

    variable pngSupported
    if {$pngSupported} {
	tablelist_${treeStyle}_collapsedImg put "
iVBORw0KGgoAAAANSUhEUgAAABUAAAASCAYAAAC0EpUuAAAAlUlEQVQ4y+3TrwoCQRAH4A+5ZPMP
GCyCr2HVoEXhMPl4JhG0aPFlLAZBjWbLXhEP93CDgr844WNmdpZ/njJA4xOg9qLWxQjtlCgcMEYn
JXrDDtPQeRIUrlgjRy8VWsDLAPdToQW8wRz1VGgLM6xwj0GzCHARdnuMHT97A+YBPFV5qDK0iQm2
OFc9qTJ0iD0uX/P3fycPZOQUPUGGEDQAAAAASUVORK5CYII=" -format png

	tablelist_${treeStyle}_expandedImg put "
iVBORw0KGgoAAAANSUhEUgAAABUAAAASCAYAAAC0EpUuAAAAWUlEQVQ4y2NgGAXDCrgzMDCUU9vA
KwwMDDepamBkZOR/UgxlImBgb2RkpDapLmGitoG4DKXIQGyGUmwguqFUMZCBgYGBEYldzsDAkIRH
7QIGBob20Sw7MAAA1EIS7m4d8XoAAAAASUVORK5CYII=" -format png

	tablelist_${treeStyle}_collapsedActImg put "
iVBORw0KGgoAAAANSUhEUgAAABUAAAASCAYAAAC0EpUuAAAAlUlEQVQ4y2NgGAXIQObI9+kyR74H
UWIGExaxaAYGhjkyR75HU9NQBgYGhioGBobpMke+J1PL+5+gdIbMke/fZI58z6CaoWgGF1DNUKoZ
jG4oksH/ZY58d6QkolAMZGBg6GNgYCh8YsO5f/CFKdVjH2rgJ3LTKSMOl/5hYGDIfWLDuZQcQ1mw
iC1lYGDY/cSGc93wL+kAdJtf8bMQS5gAAAAASUVORK5CYII=" -format png

	tablelist_${treeStyle}_expandedActImg put "
iVBORw0KGgoAAAANSUhEUgAAABUAAAASCAYAAAC0EpUuAAAAXElEQVQ4y2NgGAXDB8gc+V4gc+T7
RmLVsxBjIAMDQzcxamGAiRgD4yVZWEjxGRMxBrIzkRZcTNQ2EKuhlBqIYSg1DEQxlFoGoicpRwYG
BpaFz//gUrtpNMcOHAAAiLgfTviWUiAAAAAASUVORK5CYII=" -format png
    } else {
	tablelist_${treeStyle}_collapsedImg put "
R0lGODlhFQASAOMIAAAAAIaGhouLi5CQkJiYmKGhoaioqMPDw///////////////////////////
/////yH5BAEKAAAALAAAAAAVABIAAAQvEMhJq7046w0Ox4bxWWIxUiJAnFIKDKwLCKcMBKNM5xNc
S6sYwMQChIoSD3LJjAAAOw==" -format gif

	tablelist_${treeStyle}_expandedImg put "
R0lGODlhFQASAMIGAAAAACYmJisrK1lZWYaGhoiIiP///////yH5BAEKAAcALAAAAAAVABIAAAMl
eLrc/jDKSauV5TIRtBJDp4HhOJxiRaLWylLuiwV0HRBeru97AgA7" -format gif

	tablelist_${treeStyle}_collapsedActImg put "
R0lGODlhFQASAMIFAAAAABzE9ybG9yvH93jc+v///////////yH5BAEKAAcALAAAAAAVABIAAAMn
eLrc/jDKeQiFYlwnTt/L94HjeJnmlAYbSoagp6RUR9darFh67y8JADs=" -format gif

	tablelist_${treeStyle}_expandedActImg put "
R0lGODlhFQASAMIFAAAAAB3E92HW+Xvd+4Lf+////////////yH5BAEKAAcALAAAAAAVABIAAAMl
eLrc/jDKSauV4rIQtApDp4GEaJHlhabVyk7uGwlczWVeru96AgA7" -format gif
    }
}

#------------------------------------------------------------------------------
# tablelist::vistaClassicTreeImgs
#------------------------------------------------------------------------------
proc tablelist::vistaClassicTreeImgs {{treeStyle "vistaClassic"}} {
    variable scalingpct
    vistaClassicTreeImgs_$scalingpct $treeStyle
}

#------------------------------------------------------------------------------
# tablelist::vistaClassicTreeImgs_100
#------------------------------------------------------------------------------
proc tablelist::vistaClassicTreeImgs_100 {{treeStyle "vistaClassic"}} {
    foreach mode {collapsed expanded} {
	variable ${treeStyle}_${mode}Img \
		 [image create photo tablelist_${treeStyle}_${mode}Img]
    }

    tablelist_${treeStyle}_collapsedImg put "
R0lGODlhCwAOAKECAAAAAICAgP///////yH5BAEKAAMALAAAAAALAA4AAAIjnI+pm+H/TBC0iiAr
qHhMulHdBJTllYFcKoSoZ60eBDH2UgAAOw==" -format gif

    tablelist_${treeStyle}_expandedImg put "
R0lGODlhCwAOAKECAAAAAICAgP///////yH5BAEKAAMALAAAAAALAA4AAAIfnI+pm+H/TBC0iiBt
xWPqmwGiCHZf6Wlcaq0QxMRLAQA7" -format gif
}

#------------------------------------------------------------------------------
# tablelist::vistaClassicTreeImgs_125
#------------------------------------------------------------------------------
proc tablelist::vistaClassicTreeImgs_125 {{treeStyle "vistaClassic"}} {
    foreach mode {collapsed expanded} {
	variable ${treeStyle}_${mode}Img \
		 [image create photo tablelist_${treeStyle}_${mode}Img]
    }

    tablelist_${treeStyle}_collapsedImg put "
R0lGODlhDgAQAKECAAAAAICAgP///////yH5BAEKAAMALAAAAAAOABAAAAIrnI+pyxoPYzhB2Hun
qRdgPXCWl1EYaYEVwLaeen5mJ29xaWN1KEnNDxwUAAA7" -format gif

    tablelist_${treeStyle}_expandedImg put "
R0lGODlhDgAQAKECAAAAAICAgP///////yH5BAEKAAMALAAAAAAOABAAAAIonI+pyxoPYzhB2Hun
qRjrwXXWF4qkAKQqIJziSL3wJrexTEpSw/dDAQA7" -format gif
}

#------------------------------------------------------------------------------
# tablelist::vistaClassicTreeImgs_150
#------------------------------------------------------------------------------
proc tablelist::vistaClassicTreeImgs_150 {{treeStyle "vistaClassic"}} {
    foreach mode {collapsed expanded} {
	variable ${treeStyle}_${mode}Img \
		 [image create photo tablelist_${treeStyle}_${mode}Img]
    }

    tablelist_${treeStyle}_collapsedImg put "
R0lGODlhEQASAKECAAAAAICAgP///////yH5BAEKAAMALAAAAAARABIAAAI3nI+py60Bo4woiIuz
CFUDzR1W9mWhMWIldg7ptV6tBdS2vXUkqKu86PmhgqaehlWZKFuOpnNQAAA7" -format gif

    tablelist_${treeStyle}_expandedImg put "
R0lGODlhEQASAKECAAAAAICAgP///////yH5BAEKAAMALAAAAAARABIAAAIxnI+py60Bo4woiIuz
CFV7flheBhrieJXDiaoWAMfx1qFpbbv2He50v3NNhiqH8TgoAAA7" -format gif
}

#------------------------------------------------------------------------------
# tablelist::vistaClassicTreeImgs_175
#------------------------------------------------------------------------------
proc tablelist::vistaClassicTreeImgs_175 {{treeStyle "vistaClassic"}} {
    foreach mode {collapsed expanded} {
	variable ${treeStyle}_${mode}Img \
		 [image create photo tablelist_${treeStyle}_${mode}Img]
    }

    tablelist_${treeStyle}_collapsedImg put "
R0lGODlhFAASAKECAAAAAICAgP///////yH5BAEKAAMALAAAAAAUABIAAAI8nI+pyxgPo0xB2Itv
oLnb7XRABx5VNmalcWIptg7t9WqcAOS6/t0u6aMBQ6ihSWRkeZKypYoiiUIaVEUBADs=" \
	-format gif

    tablelist_${treeStyle}_expandedImg put "
R0lGODlhFAASAKECAAAAAICAgP///////yH5BAEKAAMALAAAAAAUABIAAAI2nI+pyxgPo0xB2Itv
oLnb7XgdeFQiRhrm+XFsGwrATNNw+d5qLqTDyvIBT0JeMSeUKCGNpqIAADs=" -format gif
}

#------------------------------------------------------------------------------
# tablelist::vistaClassicTreeImgs_200
#------------------------------------------------------------------------------
proc tablelist::vistaClassicTreeImgs_200 {{treeStyle "vistaClassic"}} {
    foreach mode {collapsed expanded} {
	variable ${treeStyle}_${mode}Img \
		 [image create photo tablelist_${treeStyle}_${mode}Img]
    }

    tablelist_${treeStyle}_collapsedImg put "
R0lGODlhFwASAKECAAAAAICAgP///////yH5BAEKAAMALAAAAAAXABIAAAJHnI+pFu0Pmwqi2ovD
xPzqRGHAyH1IeI1AuYlk1qav16q2XZlHePd53cMJdAyOigUyAlawpItJc8qgFuIA1Wmesh1r5PtQ
FAAAOw==" -format gif

    tablelist_${treeStyle}_expandedImg put "
R0lGODlhFwASAKECAAAAAICAgP///////yH5BAEKAAMALAAAAAAXABIAAAI+nI+pFu0Pmwqi2ovD
xPzqRHXdh4Ritp0oqK5lBcTyDFTkEdK6neo0z2pZbgzhMGUkDkxCJbPlNAJLkapDUQAAOw==" \
	-format gif
}

#------------------------------------------------------------------------------
# tablelist::whiteTreeImgs
#------------------------------------------------------------------------------
proc tablelist::whiteTreeImgs {} {
    foreach mode {collapsed expanded} {
	variable white_${mode}Img \
		 [image create photo tablelist_white_${mode}Img]
    }

    variable svgfmt

    tablelist_white_collapsedImg put {
<svg width="16" height="12" version="1.1" xmlns="http://www.w3.org/2000/svg">
 <path d="m3 0.5h1l5 5v1l-5 5h-1z" fill="#fff"/>
</svg>
    } -format $svgfmt

    tablelist_white_expandedImg put {
<svg width="16" height="12" version="1.1" xmlns="http://www.w3.org/2000/svg">
 <path d="m0.5 3v1l5 5h1l5-5v-1z" fill="#fff"/>
</svg>
    } -format $svgfmt
}

#------------------------------------------------------------------------------
# tablelist::white100TreeImgs
#------------------------------------------------------------------------------
proc tablelist::white100TreeImgs {} {
    foreach mode {collapsed expanded} {
	variable white100_${mode}Img \
		 [image create photo tablelist_white100_${mode}Img]
    }

    variable pngSupported
    if {$pngSupported} {
	tablelist_white100_collapsedImg put "
iVBORw0KGgoAAAANSUhEUgAAABAAAAAMCAYAAABr5z2BAAAASElEQVQoz2NgQAL///8v////vwID
ueA/BDz8//+/EiUGkG/If1RAuiH/MQFphvzHDu7j08PEQE1AbS9QFIgURSNFCamD1KQMAEZtrJZL
avyiAAAAAElFTkSuQmCC" -format png

	tablelist_white100_expandedImg put "
iVBORw0KGgoAAAANSUhEUgAAABAAAAAMCAYAAABr5z2BAAAAPElEQVQoz2NgGPrg////Df+JBw3Y
DJD7////XSI0P/z//78SLlcQMgS3ZiIMIawZjyHEa8ZiCOmahyYAADaaxD2AZ38lAAAAAElFTkSu
QmCC" -format png
    } else {
	tablelist_white100_collapsedImg put "
R0lGODlhEAAMAIAAAP///////yH5BAEKAAEALAAAAAAQAAwAAAIajI+JAOrB2ltxnsgsxPLx7nAa
pm3glJVqUAAAOw==" -format gif

	tablelist_white100_expandedImg put "
R0lGODlhEAAMAIAAAP///////yH5BAEKAAEALAAAAAAQAAwAAAIWjI+py30Ao4RpzmUpsy7Ibmjg
SJZBAQA7" -format gif
    }
}

#------------------------------------------------------------------------------
# tablelist::white125TreeImgs
#------------------------------------------------------------------------------
proc tablelist::white125TreeImgs {} {
    foreach mode {collapsed expanded} {
	variable white125_${mode}Img \
		 [image create photo tablelist_white125_${mode}Img]
    }

    variable pngSupported
    if {$pngSupported} {
	tablelist_white125_collapsedImg put "
iVBORw0KGgoAAAANSUhEUgAAABQAAAAPCAYAAADkmO9VAAAAg0lEQVQ4y63UsQ3CQAxG4eebIIKO
KSImoECMwpCIGeAWQcoGjwIKCkhyh//Stj4XlgwfUXfqWd2QEfXgK3d122OUH/URuPagZabXhZaF
fjNaVsw0oWXl4hG4qEMWCLB/w2ngDahZYAVOETFlgBU4RsQj4yhN2BLYjM2BXdi35/D3t3kCZ55B
QHw43+QAAAAASUVORK5CYII=" -format png

	tablelist_white125_expandedImg put "
iVBORw0KGgoAAAANSUhEUgAAABQAAAAPCAYAAADkmO9VAAAAXElEQVQ4y+3OsQ2AMAwF0e8NItEx
AnMwSOaloWOErHH0QELslHClJT9b+lwGzJKWwO5hZuU2BTKx8uMZIAGbE9uBqfq7E21jTrQP60R9
2AsawyroGHZBVyDpr9UJy6sqgjxpiocAAAAASUVORK5CYII=" -format png
    } else {
	tablelist_white125_collapsedImg put "
R0lGODlhFAAPAIAAAP///////yH5BAEKAAEALAAAAAAUAA8AAAIgjI+pB7DPGnxNzlTtNVnf7kGg
s41bAJ5opq7h98LtfBQAOw==" -format gif

	tablelist_white125_expandedImg put "
R0lGODlhFAAPAIAAAP///////yH5BAEKAAEALAAAAAAUAA8AAAIcjI+py+0PD5i00mXzZLq6DkBa
FFikcZ3qyrZJAQA7" -format gif
    }
}

#------------------------------------------------------------------------------
# tablelist::white150TreeImgs
#------------------------------------------------------------------------------
proc tablelist::white150TreeImgs {} {
    foreach mode {collapsed expanded} {
	variable white150_${mode}Img \
		 [image create photo tablelist_white150_${mode}Img]
    }

    variable pngSupported
    if {$pngSupported} {
	tablelist_white150_collapsedImg put "
iVBORw0KGgoAAAANSUhEUgAAABgAAAASCAYAAABB7B6eAAAAhklEQVQ4y7XVsQ2DUAxF0ftdkTWY
BdEySlbICBklLUxG91KkQyJ829itrXcsN4ZDSRolTZIGKkrSS79aJT2yefanNwOfLGIX/TRiHTMp
xDrnwog5ZkOIORdyIxY46ww8KwEqTwSwAe8qYAOW1tpeAbjDPUAovBcIh/cAqfArIB1+9g9ufThf
titHHZ+pi7gAAAAASUVORK5CYII=" -format png

	tablelist_white150_expandedImg put "
iVBORw0KGgoAAAANSUhEUgAAABgAAAASCAYAAABB7B6eAAAAbklEQVQ4y+2Uuw2AMAwF/RqUKZgl
a7AIQ7AIA1CxDlPQHQ0l5OcCIeU6y9Kd3Nis8zUCRjObnJ5V0vG4ASJ+4msaGIDNId+BkLzPEcnL
HZFyeUOkXl4RaZcXRPzyRKRJrkwkmNl8j4uks/+m/3EBA9mNbpxP1q0AAAAASUVORK5CYII=" \
	    -format png
    } else {
	tablelist_white150_collapsedImg put "
R0lGODlhGAASAIAAAP///////yH5BAEKAAEALAAAAAAYABIAAAIqjI+pC72vmoNUTsoswFnzpEnf
EYpjeXHodqJj4L7la4R0bd14Spv6bygAADs=" -format gif

	tablelist_white150_expandedImg put "
R0lGODlhGAASAIAAAP///////yH5BAEKAAEALAAAAAAYABIAAAIhjI+py+0Po5wB2IszYLrf5mlP
+EHk5FFVphpYC8fyTDsFADs=" -format gif
    }
}

#------------------------------------------------------------------------------
# tablelist::white175TreeImgs
#------------------------------------------------------------------------------
proc tablelist::white175TreeImgs {} {
    foreach mode {collapsed expanded} {
	variable white175_${mode}Img \
		 [image create photo tablelist_white175_${mode}Img]
    }

    variable pngSupported
    if {$pngSupported} {
	tablelist_white175_collapsedImg put "
iVBORw0KGgoAAAANSUhEUgAAABwAAAAVCAYAAABVAo5cAAAAeklEQVRIx83WwQ2AIBBE0YlleLQD
S6IfSzC2YgmW9D14MQYwAXfiNvAIGXaQMgOMwAQMcgywc81mQW+gB32A8WgGjEULYBxaAWPQF7AL
bT1pkrS2oD1XkyQtTlCSZjd4uELzbVojU/r7d2jdNNZdam0Lax/aGj/sT3MCQKuydZYEktUAAAAA
SUVORK5CYII=" -format png

	tablelist_white175_expandedImg put "
iVBORw0KGgoAAAANSUhEUgAAABwAAAAVCAYAAABVAo5cAAAAfUlEQVRIx+3UoRnCMBBA4Xf5MJ2g
CzEGI+FBgekWTFMcUzwMAgNtmgOVZyLuvvxRgV6vslBHYEq88xARj0/DHTAA+0Rw+DYswAyck7Ar
cF/cUkM92dZFLauf1ojWYY3oNmwj2oZVojnYSjQXW0B/g72hRT2qt9dZ+gfd+2tPx45wZ+d7UKkA
AAAASUVORK5CYII=" -format png
    } else {
	tablelist_white175_collapsedImg put "
R0lGODlhHAAVAIAAAP///////yH5BAEKAAEALAAAAAAcABUAAAIyjI+pm+AMmXuxmkktxFkr3nkH
GIpkqZ1opa5bK15wPNNnPJJ4zu385PsBgj8iz4g8FAAAOw==" -format gif

	tablelist_white175_expandedImg put "
R0lGODlhHAAVAIAAAP///////yH5BAEKAAEALAAAAAAcABUAAAIrjI+py+0Po5w0gYuzzm373X0i
4IweZHJRSk5mFYiwcc60at9tzvf+D4wUAAA7" -format gif
    }
}

#------------------------------------------------------------------------------
# tablelist::white200TreeImgs
#------------------------------------------------------------------------------
proc tablelist::white200TreeImgs {} {
    foreach mode {collapsed expanded} {
	variable white200_${mode}Img \
		 [image create photo tablelist_white200_${mode}Img]
    }

    variable pngSupported
    if {$pngSupported} {
	tablelist_white200_collapsedImg put "
iVBORw0KGgoAAAANSUhEUgAAACAAAAAYCAYAAACbU/80AAAAa0lEQVRIx83UOwKAMAgE0eDF15Jb
Y2mhxm92nAOEVxBa+2u1ljSAQdS2pAFeRB2XNMCDqPOSBoxF1PWSBrxCRA9w66GIeAKY6JP/FWAm
d0DkEor8hiIPkYZvJzq8A5Dtf6LDdwCyXyh0uLMFhtchVmUvc2gAAAAASUVORK5CYII=" \
	    -format png

	tablelist_white200_expandedImg put "
iVBORw0KGgoAAAANSUhEUgAAACAAAAAYCAYAAACbU/80AAAAaUlEQVRIx+2UOw7AIAxDnV663dyb
m6kLUkWBhA7kzVH0lI+BJNkdAwBJCmluZq2a4+8JPAJXQO+7q1rSKT84pOwkwam5TUrQZXmDEnS9
oE4JhrzIRwmG/mlDgkvC4kWCSxOrkiCSJHGiAIrBqhVW+u3AAAAAAElFTkSuQmCC" -format png
    } else {
	tablelist_white200_collapsedImg put "
R0lGODlhIAAYAIAAAP///////yH5BAEKAAEALAAAAAAgABgAAAI9jI+pywbfYnxQWkTrtVnv1nmf
EorjUZpnqn5se72wJAMnKt/Oq+9p7wsBg5khcebqGHGUJdPm9EVx02qgAAA7" -format gif

	tablelist_white200_expandedImg put "
R0lGODlhIAAYAIAAAP///////yH5BAEKAAEALAAAAAAgABgAAAIyjI+py+0Po5y02nuA3rx74Hzi
94wmCJ2kpHJVi74nFpi0Id5ZpyNu74sBh8Si8YiEFAAAOw==" -format gif
    }
}

#------------------------------------------------------------------------------
# tablelist::win7AeroTreeImgs
#------------------------------------------------------------------------------
proc tablelist::win7AeroTreeImgs {} {
    vistaAeroTreeImgs "win7Aero"
}

#------------------------------------------------------------------------------
# tablelist::win7ClassicTreeImgs
#------------------------------------------------------------------------------
proc tablelist::win7ClassicTreeImgs {} {
    vistaClassicTreeImgs "win7Classic"
}

#------------------------------------------------------------------------------
# tablelist::win10TreeImgs
#------------------------------------------------------------------------------
proc tablelist::win10TreeImgs {} {
    variable scalingpct
    win10TreeImgs_$scalingpct
}

#------------------------------------------------------------------------------
# tablelist::win10TreeImgs_100
#------------------------------------------------------------------------------
proc tablelist::win10TreeImgs_100 {} {
    foreach mode {collapsed expanded collapsedAct expandedAct} {
	variable win10_${mode}Img \
		 [image create photo tablelist_win10_${mode}Img]
    }

    variable pngSupported
    if {$pngSupported} {
	tablelist_win10_collapsedImg put "
iVBORw0KGgoAAAANSUhEUgAAABEAAAAKCAYAAABSfLWiAAAAZklEQVQoz63QsQmAQAwF0KeClYWF
jRPYOISjO4QD2AkOITYnHGLhnaZKAnmEz881Yso5LKO+Q58DVVG/RlAX5mQkG6oedisGtGHeUzK5
akKNDcubT4oHoA/A/DaT4itwz6TBkQrACcudDrpWA7yXAAAAAElFTkSuQmCC" -format png

	tablelist_win10_expandedImg put "
iVBORw0KGgoAAAANSUhEUgAAABEAAAAKCAYAAABSfLWiAAAARUlEQVQoz2NgGEwgnoGBoQOHXAdU
Hi9gYmBg0GRgYDDHYlAHVFyTWNd0MDAw7EcyCJ3PQJJBPj4+/8k1gIFSF2AL6CEKAFm6Dd7JH9yK
AAAAAElFTkSuQmCC" -format png
    } else {
	tablelist_win10_collapsedImg put "
R0lGODlhEQAKAMIFAAAAAKampqysrL+/v9PT0////////////yH5BAEKAAcALAAAAAARAAoAAAMa
eLrcTMNJNUKcrl7MNG9CQHyURR4emZLQmQAAOw==" -format gif

	tablelist_win10_expandedImg put "
R0lGODlhEQAKAMIFAAAAAEBAQExMTHd3d6CgoP///////////yH5BAEKAAcALAAAAAARAAoAAAMb
eLrc/o6MNggcYSqsHz8ftAVCJjLhuVhq64oJADs=" -format gif
    }

    tablelist_win10_collapsedActImg put "
R0lGODlhEQAKAMIGAAAAAE7Q+VjS+Xra+5vh/Jri/P///////yH5BAEKAAcALAAAAAARAAoAAAMa
eLrcXMNJNUKcrl7MNG9CQHyURR4emZLQmQAAOw==" -format gif

    tablelist_win10_expandedActImg put "
R0lGODlhEQAKAMIGAAAAABzE9yjH+FbS+YDb+4Lc+////////yH5BAEKAAcALAAAAAARAAoAAAMb
eLrc/o6MNgocYSqsHz8ftAVCJjLhuVhq64oJADs=" -format gif
}

#------------------------------------------------------------------------------
# tablelist::win10TreeImgs_125
#------------------------------------------------------------------------------
proc tablelist::win10TreeImgs_125 {} {
    foreach mode {collapsed expanded collapsedAct expandedAct} {
	variable win10_${mode}Img \
		 [image create photo tablelist_win10_${mode}Img]
    }

    variable pngSupported
    if {$pngSupported} {
	tablelist_win10_collapsedImg put "
iVBORw0KGgoAAAANSUhEUgAAABUAAAAMCAYAAACNzvbFAAAAbklEQVQoz73RwQ2AIAyF4R97kBsT
yAYu4sBu4BQcnYANvNTEECTBEnt7JflC+uCHWYHNikxFXoBghaXICYgKR81mdAgsL3sTLI23pMV5
xc+vRT3nLisDR89PXQMMCu69N3WjwRpqBmtFeWC2gAAX6rARzlVu5CMAAAAASUVORK5CYII=" \
	    -format png

	tablelist_win10_expandedImg put "
iVBORw0KGgoAAAANSUhEUgAAABUAAAAMCAYAAACNzvbFAAAAU0lEQVQoz2NgGPEggYGBYT4BNfOh
6ogCTAwMDPYMDAwKeAyeD5W3J9ZQRjSNDxgYGBKxGIguTpSh2Awgy0B0Q5ENhgGSDcRmKAMlLiQE
6kdGwgcAYsgQgI4qe4AAAAAASUVORK5CYII=" -format png
    } else {
	tablelist_win10_collapsedImg put "
R0lGODlhFQAMAMIFAAAAAKamprW1tcTExNLS0v///////////yH5BAEKAAcALAAAAAAVAAwAAAMf
eLrcvkS8yUSQlFqc3+7TBzpBMIzVhS7i2qIvGq1HAgA7" -format gif

	tablelist_win10_expandedImg put "
R0lGODlhFQAMAMIFAAAAAEBAQGBgYICAgJ+fn////////////yH5BAEKAAcALAAAAAAVAAwAAAMg
eLrc/jBKSMQTRIpg2e7Rt4jTIZKlGaxgqrbuMcR0HSUAOw==" -format gif
    }

    tablelist_win10_collapsedActImg put "
R0lGODlhFQAMAMIGAAAAAE7Q+WfV+mjV+oHc+5ri/P///////yH5BAEKAAcALAAAAAAVAAwAAAMg
eLrcvkW8yUSQlFqcnx3d9IVPEBBkdaXLxiruG7/RmwAAOw==" -format gif

    tablelist_win10_expandedActImg put "
R0lGODlhFQAMAMIGAAAAABzE9z7M+F/U+oDb+4Hc+////////yH5BAEKAAcALAAAAAAVAAwAAAMg
eLrc/jBKSMQTRYpg2e7Rt4jTIZKlGaxgqrbuMcR0HSUAOw==" -format gif
}

#------------------------------------------------------------------------------
# tablelist::win10TreeImgs_150
#------------------------------------------------------------------------------
proc tablelist::win10TreeImgs_150 {} {
    foreach mode {collapsed expanded collapsedAct expandedAct} {
	variable win10_${mode}Img \
		 [image create photo tablelist_win10_${mode}Img]
    }

    variable pngSupported
    if {$pngSupported} {
	tablelist_win10_collapsedImg put "
iVBORw0KGgoAAAANSUhEUgAAABsAAAAQCAYAAADnEwSWAAAAi0lEQVQ4y83UIQuAMBCG4XcuGMRg
MS2I3Sj+/+if0LQugt1iENkczN1wbffBHnYHBz84RuJR7agNwAhUgJXEzAUBNKnBJ7ZfQCMButpo
pUDtqYuA+iVLDupAboEOKG/gAWwxWBHIJ6C+3Rdgjf2ZCkD9A5q/zEzlgnyYCOSamZGCfBtEAW1q
KPvWPwGNvhqpmBAh5QAAAABJRU5ErkJggg==" -format png

	tablelist_win10_expandedImg put "
iVBORw0KGgoAAAANSUhEUgAAABsAAAAQCAYAAADnEwSWAAAAk0lEQVQ4y+2Uuw2AMAxEHzAEE9DT
MwBihjTMQJEhmIQNKKnYgo5BoDFShAifyEIUXOVIJ7/48oFfyiqUfV7VwADYC58VXx0CSWSnjawz
IAVGD6iSOgcmYH4KmwWQnQBdEEAPdCGTIY19wCNQGxJj7NStNNpUGWMWLRBAdHE2aIHcGF3tI1UB
cfOa27ceevn/dZ/TCmPKG6Qk5tPpAAAAAElFTkSuQmCC" -format png
    } else {
	tablelist_win10_collapsedImg put "
R0lGODlhGwAQAMIHAAAAAKamprOzs8jIyNLS0t7e3uPj4////yH5BAEKAAcALAAAAAAbABAAAAMx
eLrc/szACUkYNCsTOtbU0F1gOH7lI3optJKtI4xFzLyojdvLzh8+Hof1U1hyRckvAQA7" \
	    -format gif

	tablelist_win10_expandedImg put "
R0lGODlhGwAQAMIHAAAAAEBAQFtbW4mJiZ+fn7i4uMTExP///yH5BAEKAAcALAAAAAAbABAAAAMz
eLrc/jDKSZuJtx4SxhsBURlB6TFgmU1pt7RnBR+zprRC6dqvbvKNGhC1GzYKxqRyOUwAADs=" \
	    -format gif
    }

    tablelist_win10_collapsedActImg put "
R0lGODlhGwAQAMIHAAAAAE7Q+WTV+oje+5ri/K3m/bbo/f///yH5BAEKAAcALAAAAAAbABAAAAMx
eLrc/szACUkYNCsTOtbU0F1gOH7lI3optJKtI4xFzLyojdvLzh8+Hof1U1hyRckvAQA7" \
	-format gif

    tablelist_win10_expandedActImg put "
R0lGODlhGwAQAOMJAAAAABzE9zjK+GnW+oDb+4Hc+5rh/Kfl/ajl/f//////////////////////
/////yH5BAEKAA8ALAAAAAAbABAAAAQ28MlJq704680ryl/3EMFwDUHRHUFrUmh7dHE51S/d2rh4
74JdzveouYiVHjJpW1oMzqh0uowAADs=" -format gif
}

#------------------------------------------------------------------------------
# tablelist::win10TreeImgs_175
#------------------------------------------------------------------------------
proc tablelist::win10TreeImgs_175 {} {
    foreach mode {collapsed expanded collapsedAct expandedAct} {
	variable win10_${mode}Img \
		 [image create photo tablelist_win10_${mode}Img]
    }

    variable pngSupported
    if {$pngSupported} {
	tablelist_win10_collapsedImg put "
iVBORw0KGgoAAAANSUhEUgAAAB4AAAAQCAYAAAABOs/SAAAAiklEQVQ4y83VIQ+AIBCG4RcJBmew
mAjObnT+/+if0ER3bnaLwTGQoAfS7r7w7LgN4GfHSAPa0xuAEagAmwo2FwrQSOIuvF9YI437rtqm
wHWgL47rh0wU15HcAh1Q3vAD2N7CRSSfgPpWL8D6xcQqgvYOOn+1Y5UDDcHiqG/HJgUaerkU0Eqi
WX+nEw2kGqlLMldzAAAAAElFTkSuQmCC" -format png

	tablelist_win10_expandedImg put "
iVBORw0KGgoAAAANSUhEUgAAAB4AAAAQCAYAAAABOs/SAAAAkklEQVQ4y+2UsQmAMBBFnzqEE6S3
dwBxhjTOYJEhnMQNLK3cws5BtDkhiBohhiD4qgscedwPOfiJQPly3yMaYASMo89IX+MrzGSCVs4K
yIHpQlpLXQAzsPiIF5GpG7ktBRiA3ndiRHIlP5N2vlGnVt3JpTu11noNIQVIHG9JCKkdtc0x9tel
PPw6JsZSqf69+nk2EbYbpI72C58AAAAASUVORK5CYII=" -format png
    } else {
	tablelist_win10_collapsedImg put "
R0lGODlhHgAQAMIHAAAAAKamprOzs8jIyNLS0t7e3uPj4////yH5BAEKAAcALAAAAAAeABAAAAM0
eLrc/s/ASQ8Jo+plgs+bNnhYKJKgOY2fSrGlCwlkITtweiv5zvQ+Hiqo6LSIiosOKSEmAAA7" \
	    -format gif

	tablelist_win10_expandedImg put "
R0lGODlhHgAQAMIHAAAAAEBAQFtbW4mJiZ+fn7i4uMTExP///yH5BAEKAAcALAAAAAAeABAAAAM1
eLrc/jDKSesxEdtFwnhDQGxXYH5MaGqW6i0uSsYHTcJmIOTyrbgnn8MmbIR6RUYhyWw6mQkAOw==" \
	    -format gif
    }

    tablelist_win10_collapsedActImg put "
R0lGODlhHgAQAMIHAAAAAE7Q+WTV+oje+5ri/K3m/bbo/f///yH5BAEKAAcALAAAAAAeABAAAAM0
eLrc/s/ASQ8Jo+plgs+bNnhYKJKgOY2fSrGlCwlkITtweiv5zvQ+Hiqo6LSIiosOKSEmAAA7" \
	    -format gif

    tablelist_win10_expandedActImg put "
R0lGODlhHgAQAOMJAAAAABzE9zjK+GnW+oDb+4Hc+5rh/Kfl/ajl/f//////////////////////
/////yH5BAEKAA8ALAAAAAAeABAAAAQ38MlJq7046837QxnoTUQwXENQjM8RvCeVvgc7m9Md2y+u
s7KeoLcDSm4wo+WnXOKaFwN0Sq1OIwA7" -format gif
}

#------------------------------------------------------------------------------
# tablelist::win10TreeImgs_200
#------------------------------------------------------------------------------
proc tablelist::win10TreeImgs_200 {} {
    foreach mode {collapsed expanded collapsedAct expandedAct} {
	variable win10_${mode}Img \
		 [image create photo tablelist_win10_${mode}Img]
    }

    variable pngSupported
    if {$pngSupported} {
	tablelist_win10_collapsedImg put "
iVBORw0KGgoAAAANSUhEUgAAACMAAAASCAYAAADR/2dRAAAAc0lEQVRIx2NgwA10GOgMGPE4BOaY
FQPpGB0soUIXBzFhEbuCRSxiIKMJlwNWDJRj6O4gRiLU0M1BjESqo4uDGElQS3MHMTEMIjDkomnQ
JOBBk7UHTaFHd4fgyk06A+EQBgYGBmYsYq+gtBi9mxAMg6lxBQBTKRAWhaNStgAAAABJRU5ErkJg
gg==" -format png

	tablelist_win10_expandedImg put "
iVBORw0KGgoAAAANSUhEUgAAACMAAAASCAYAAADR/2dRAAAAb0lEQVRIx2NgGAVDDMTTSQ9Rhu6D
YmIBTD3VHMQINQzdQCciHIIMFkIxxY5hwBEiTkQ6hBjHk+QYYi2hmUPQHUPIMpo6BJtjGEhIxE7U
zkWMJKQLmjoEn2PwOYgmDiHkGGwOoplDSC3cRsEoGHQAAKAaEvmT/Wu2AAAAAElFTkSuQmCC" \
	    -format png
    } else {
	tablelist_win10_collapsedImg put "
R0lGODlhIwASAKEDAAAAAKenp9PT0////yH5BAEKAAMALAAAAAAjABIAAAIynC+ny+0SgptUwSir
bjjur3QZ+IkkaJ5bqlZs67zwIs9HbQ+4vc89fPHkGpfhJGE0FAAAOw==" -format gif

	tablelist_win10_expandedImg put "
R0lGODlhIwASAKEDAAAAAEFBQaCgoP///yH5BAEKAAMALAAAAAAjABIAAAI1nI+py+0PozQC1olE
CG5frG3cIgbfVI5Iiq2lK7YJO9AynG43mav7bPspXsKGrohMKpfMRwEAOw==" -format gif
    }

    tablelist_win10_collapsedActImg put "
R0lGODlhIwASAMIFAAAAAE7Q+VHQ+Zrh/Jri/P///////////yH5BAEKAAcALAAAAAAjABIAAAM7
eLqz/jDKEYS82NFQs5cC133kEnJWWZ6cuoqBS7Kx7NF2hucgzPeiX2QndLBSRZMImTxsRs0FARqV
VhMAOw==" -format gif

    tablelist_win10_expandedActImg put "
R0lGODlhIwASAMIEAAAAAB3E94Db+4Hc+////////////////yH5BAEKAAAALAAAAAAjABIAAAM3
CLrc/jDKSatVg+bLRAjSt3HD90FmMF4p2LQcAy9zTKdKbd+tuT+90w+oG758xogwyWw6n1BJAgA7" \
	-format gif
}

#------------------------------------------------------------------------------
# tablelist::winnativeTreeImgs
#------------------------------------------------------------------------------
proc tablelist::winnativeTreeImgs {} {
    foreach mode {collapsed expanded} {
	variable winnative_${mode}Img \
		 [image create photo tablelist_winnative_${mode}Img]
    }

    tablelist_winnative_collapsedImg put "
R0lGODlhDgAOAKECAAAAAICAgP///////yH5BAEKAAMALAAAAAAOAA4AAAIlnI+pyxoPYQqiWhGm
BTYjWnGVd1DAeWJa2K2CqH5X+0VRg+dHAQA7" -format gif

    tablelist_winnative_expandedImg put "
R0lGODlhDgAOAKECAAAAAICAgP///////yH5BAEKAAMALAAAAAAOAA4AAAIinI+pyxoPYQqiWhHm
tRnRjWnAOIYeaB7f1qloa0RyQ9dHAQA7" -format gif
}

#------------------------------------------------------------------------------
# tablelist::winxpBlueTreeImgs
#------------------------------------------------------------------------------
proc tablelist::winxpBlueTreeImgs {} {
    foreach mode {collapsed expanded} {
	variable winxpBlue_${mode}Img \
		 [image create photo tablelist_winxpBlue_${mode}Img]
    }

    tablelist_winxpBlue_collapsedImg put "
R0lGODlhDgAOAIQeAAAAAHiYtbDC08C3psG4p8K4qMO6qsa+rs/Iu9LMv9LMwNbRxtjTydvWzNzY
z9/b0uPg2eTh2eXh2urp4+3t5/Hw6/Dw7PLy7vX18ff28/b29Pf39fz8+vz8+////////yH5BAEK
AB8ALAAAAAAOAA4AAAVJ4CeOZGmeqCkEbBsIZeDNtBfEXQ50XHaTgc1GA9BUJL9RAANoNh9JUeBi
oQAmkEb0E4g4GICFArENJA4FAmFg2K5cLFhqTheFAAA7" -format gif

    tablelist_winxpBlue_expandedImg put "
R0lGODlhDgAOAKUgAAAAAHiYtbDC08C3psG4p8K4qMO6qsa+rs/Iu9LMv9LMwNbRxtfSx9jTydvW
zNzYz9/b0uPg2eTh2eXh2urp4+zr5u3t5/Hw6/Dw7PLy7vX18ff28/b29Pf39fz8+vz8+///////
////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////yH5BAEKAD8ALAAAAAAOAA4AAAZNwJ9w
SCwaj0ijIMBsBgTFAGhKBQWin2zWs7kSA50OZ3yZeIcBDWC9hpyFgQzGUqFEHO9fQPJoMBYKCHkB
CQcFBAQDBnlLTkxQSZGSQkEAOw==" -format gif
}

#------------------------------------------------------------------------------
# tablelist::winxpOliveTreeImgs
#------------------------------------------------------------------------------
proc tablelist::winxpOliveTreeImgs {} {
    foreach mode {collapsed expanded} {
	variable winxpOlive_${mode}Img \
		 [image create photo tablelist_winxpOlive_${mode}Img]
    }

    tablelist_winxpOlive_collapsedImg put "
R0lGODlhDgAOAIQdAAAAAI6ZfcC3psG4p8K4qMO6qsa+rs/Iu9LMv9LMwNbRxtjTydvWzNzYz9/b
0uPg2eTh2eXh2urp4+3t5/Hw6/Dw7PLy7vX18ff28/b29Pf39fz8+vz8+////////////yH5BAEK
AB8ALAAAAAAOAA4AAAVF4CeOZGme6BmsbGAGXSx3LhlwOMBtWD0GGk0GkKFEfKLABcBkOpCfgKUy
AUgeDGgA0lgAFImDFmEgDAaCAjTaWqXecFIIADs=" -format gif

    tablelist_winxpOlive_expandedImg put "
R0lGODlhDgAOAKUfAAAAAI6ZfcC3psG4p8K4qMO6qsa+rs/Iu9LMv9LMwNbRxtfSx9jTydvWzNzY
z9/b0uPg2eTh2eXh2urp4+zr5u3t5/Hw6/Dw7PLy7vX18ff28/b29Pf39fz8+vz8+///////////
////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////yH5BAEKACAALAAAAAAOAA4AAAZJQJBw
SCwaj8hjYMkMGAOfqPTjJAY8WGxHUx0GOJyN2CLpCgMZgFr9MIMCmEuFMoE03IGIg7FQJA54CAYE
AwMCBW5vTUtJjY5EQQA7" -format gif
}

#------------------------------------------------------------------------------
# tablelist::winxpSilverTreeImgs
#------------------------------------------------------------------------------
proc tablelist::winxpSilverTreeImgs {} {
    foreach mode {collapsed expanded} {
	variable winxpSilver_${mode}Img \
		 [image create photo tablelist_winxpSilver_${mode}Img]
    }

    tablelist_winxpSilver_collapsedImg put "
R0lGODlhDgAOAIQXAAAAAJSVosTO2MXP2cbO2svT3NPZ4tXb5Nnf5trg593i6d/l6uDm6+bq7ufr
7+zv8+/y9PLz9vT39/b3+ff4+vn6+v39/f///////////////////////////////////yH5BAEK
AB8ALAAAAAAOAA4AAAVD4CeOZGme6BmsbGAGVyxfLhlYOIBT9RhUFQqAEnH0RIEJYLlkHD8BSQQC
eDQUz0BjkQAgDobsoTAoCwhPaGuVartJIQA7" -format gif

    tablelist_winxpSilver_expandedImg put "
R0lGODlhDgAOAIQYAAAAAJSVosTO2MXP2cbO2svT3NPZ4tXb5Nnf5trg593i6d/l6uDm6+bq7ufr
7+zv8+/x8+/y9PLz9vT39/b3+ff4+vn6+v39/f///////////////////////////////yH5BAEK
AB8ALAAAAAAOAA4AAAVC4CeOZGme6BmsbGAGWCxjLhlceF7VY2BZlaDEwRMFKIBkklH8BCaSCOTR
UDQDjUUigTgYrofCYCwgNJ2tVWrNJoUAADs=" -format gif
}

#------------------------------------------------------------------------------
# tablelist::yuyoTreeImgs
#------------------------------------------------------------------------------
proc tablelist::yuyoTreeImgs {} {
    foreach mode {collapsed expanded} {
	variable yuyo_${mode}Img \
		 [image create photo tablelist_yuyo_${mode}Img]
    }

    tablelist_yuyo_collapsedImg put "
R0lGODlhDwAOAOMKAAAAAIiKhby9ur7AvMDBvsrMyd3e3eHi4OHi4f7+/v//////////////////
/////yH5BAEKAA8ALAAAAAAPAA4AAARA8MlJq72zjM1HqQWSKCSZIN80jORRJgM1lEpAxyptl7g0
E4Fg0KDoPWalHcmIJCmLMpZC8DKGpCYUqMNJYb6PCAA7" -format gif

    tablelist_yuyo_expandedImg put "
R0lGODlhDwAOAOMIAAAAAIiKhb7AvMDBvsrMyd3e3eHi4f7+/v//////////////////////////
/////yH5BAEKAA8ALAAAAAAPAA4AAAQ58MlJq72TiM0FqYRxICR5GN8kjGV5CJTQzrA6t7UkD0Hf
F4jcQ3YjCYnFI2v2ooSWJhSow0lhro8IADs=" -format gif
}

#------------------------------------------------------------------------------
# tablelist::createTreeImgs
#------------------------------------------------------------------------------
proc tablelist::createTreeImgs treeStyle {
    variable ${treeStyle}_collapsedImg
    if {[info exists ${treeStyle}_collapsedImg]} {
	return ""
    }

    ${treeStyle}TreeImgs
    set baseWidth  [image width  tablelist_${treeStyle}_collapsedImg]
    set baseHeight [image height tablelist_${treeStyle}_collapsedImg]
    image create photo tablelist_${treeStyle}_indentedImg \
	-width $baseWidth -height $baseHeight

    variable maxIndentDepths
    set maxIndentDepths($treeStyle) 0
}

#------------------------------------------------------------------------------
# tablelist::setTreeLabelWidths
#------------------------------------------------------------------------------
proc tablelist::setTreeLabelWidths {treeStyle depth} {
    #
    # Get the width of the embedded indentation labels to create for
    # the specified depth and save it in the array treeLabelWidths
    #
    set baseWidth [image width  tablelist_${treeStyle}_collapsedImg]
    set step $baseWidth
    switch -regexp -- $treeStyle {
	^win10$ {
	    variable scalingpct
	    switch $scalingpct {
		100 { incr step -9 }
		125 { incr step -11 }
		150 { incr step -15 }
		175 { incr step -16 }
		200 { incr step -19 }
	    }
	}
	^(vistaAero|win7Aero)$ {
	    variable scalingpct
	    switch $scalingpct {
		100 { incr step  0 }
		125 { incr step -3 }
		150 { incr step -6 }
		175 { incr step -8 }
		200 { incr step -11 }
	    }
	}
	^(vistaClassic|win7Classic)$ {
	    variable scalingpct
	    switch $scalingpct {
		100 { incr step -1 }
		125 { incr step -4 }
		150 { incr step -7 }
		175 { incr step -10 }
		200 { incr step -13 }
	    }
	}
	^ubuntu$					      { incr step -2 }
	^(mate|mint2)$					      { incr step -1 }
	^(blueMenta|menta|mint|newWave|ubuntu2|ubuntuMate)$   { incr step  1 }
	^ubuntu3$					      { incr step  2 }
	^plasti.+$					      { incr step  3 }
	^(adwaita|aqua|arc|.+100)$			      { incr step  4 }
	^(oxygen.|phase|winnative|winxp.+|.+125)$	      { incr step  5 }
	^(aqua11|.+150)$				      { incr step  6 }
	^(baghira|klearlooks|.+175)$			      { incr step  7 }
	^.+200$						      { incr step  8 }
	^(bicolor|classic|plain|white)$ {
	    incr step [expr {$::scaleutil::scalingPct / 25}]
	}
    }
    set width [expr {($depth - 1) * $step + $baseWidth}]
    variable treeLabelWidths
    set treeLabelWidths($treeStyle,$depth) $width
}

#------------------------------------------------------------------------------
# tablelist::pencilCursorData
#------------------------------------------------------------------------------
proc tablelist::pencilCursorData {} {
    return "
AAACAAEAICAAAAoAGQCoEAAAFgAAACgAAAAgAAAAQAAAAAEAIAAAAAAAgBAAAAAAAAAAAAAAAAAA
AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA
AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA
AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA
AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA
AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA
AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA
AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA
AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA
AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA
AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAEAAAAHAAAADwAAAA0A
AAAEAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA
AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA
AgAAABMAAAAsAAAAKAAAABIAAAAEAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA
AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA
AAAAAAAAAAAAAAAAAAADAAAA/wAAAIcAAABHAAAAKwAAABEAAAAEAAAAAQAAAAAAAAAAAAAAAAAA
AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA
AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAQHBwf/AQEB/wEBAYEAAABJAAAALAAAABMAAAAG
AAAAAQAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA
AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABBgYGP+AgID/AwMD/xsb
G4QAAABMAAAAMAAAABUAAAAGAAAAAQAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA
AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAE
Ojo6/7a2tv/o6Oj/AQEB/09PT6MAAABOAAAAMAAAABQAAAAEAAAAAAAAAAAAAAAAAAAAAAAAAAAA
AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA
AAAAAAAAAAAAAAAAAAQiIiL/7e3t//Hx8f/5+fn/AAAA/0pKSqMAAABMAAAALAAAAA4AAAACAAAA
AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA
AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAy8vL//29vb/8PDw//Dw8P/39/f/AAAA/zY2NpMA
AABEAAAAHgAAAAYAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA
AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAACKCgo//Dw8P/t7e3/6Ojo
//39/f/Q0ND/AAAA/wAAAFUAAAAyAAAAEAAAAAIAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA
AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA
AACywcHB//Pz8//u7u7/5eXl//39/f8PDw//KSkpowAAAEUAAAAeAAAABgAAAAAAAAAAAAAAAAAA
AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA
AAAAAAAAAAAAAAAAAAAAAFZ+fn7+/f39//Ly8v/b29v/8fHx/9HR0f8AAAD/AAAAVQAAADIAAAAQ
AAAAAgAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA
AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAEEFBQf/g4OD/9/f3/+Pj4//y8vL//f39/x0d
Hf8pKSmjAAAARwAAACAAAAAHAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA
AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAUYSEhPz9/f3/
8/Pz/9zc3P/y8vL/09PT/wAAAP8AAABWAAAANQAAABEAAAACAAAAAAAAAAAAAAAAAAAAAAAAAAAA
AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA
AAAAAAARLi4u/9vb2//4+Pj/5eXl//Pz8//4+Pj/HR0d/0NDQ7oAAABHAAAAHwAAAAYAAAAAAAAA
AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA
AAAAAAAAAAAAAAAAAAAAAAAAAAAAAABRZ2dn//z8/P/09PT/3d3d//Ly8v/Pz8//AAAA/wAAAFUA
AAAyAAAAEAAAAAIAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA
AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAIAAAD/+vr69vj4+P/m5ub/8/Pz
//r6+v8dHR3/JSUlowAAAEUAAAAeAAAABgAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA
AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAEdO
Tk7I//////z8/P/39/f//Pz8/87Ozv8AAAD/AAAAVQAAADEAAAAPAAAAAgAAAAAAAAAAAAAAAAAA
AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA
AAAAAAAAAAAAAAAAAgAAAP/9/f37+/v7//Ly8v/t7e3/8fHx/x0dHf8iIiKjAAAAQgAAABgAAAAD
AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA
AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAR2hoaL78/Pz/6urq/83Nzf/k5OT/enp6/wAA
AP8AAABJAAAAHAAAAAQAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA
AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAACAAAA//f39+7j4+P/
1tbW/9TU1P+5ubn/AAAA/wAAAEgAAAAbAAAABAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA
AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA
AAAAAABHUFBQrfr6+v/c3Nz/vb29/46Ojv8BAQH/AAAAPgAAABYAAAADAAAAAAAAAAAAAAAAAAAA
AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA
AAAAAAAAAAAAAAAAAAAAAAAAAAIAAAD/ycnJ1MHBwf+lpaX/kJCQ8AEBAf8AAAAtAAAADQAAAAEA
AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA
AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAEMAAAD/AAAA/wAAAP8AAAD/AAAA
JAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA
AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA
AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA
AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA
AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA
AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA
AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA
AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA
AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA
AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA
AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA
AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA////
//////////////////+D////gf///4B///+AP///gB///4Af//+AD///gA///4AH///AB///wAP/
/8AD///gAf//4AH///AA///wAP//+AB///gAf//8AH///AB///4Af//+AH///wP/////////////
//////////////8="
}
