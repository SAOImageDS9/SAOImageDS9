#==============================================================================
# Contains procedures that create various bitmap and photo images.  The
# argument w specifies a canvas displaying a sort arrow, while the argument win
# stands for a tablelist widget.
#
# Copyright (c) 2006-2019  Csaba Nemethi (E-mail: csaba.nemethi@t-online.de)
#==============================================================================

#------------------------------------------------------------------------------
# tablelist::flat5x3Arrows
#------------------------------------------------------------------------------
proc tablelist::flat5x3Arrows w {
    image create bitmap triangleUp$w -data "
#define triangleUp5x3_width 5
#define triangleUp5x3_height 3
static unsigned char triangleUp5x3_bits[] = {
   0x04, 0x0e, 0x1f};
"
    image create bitmap triangleDn$w -data "
#define triangleDn5x3_width 5
#define triangleDn5x3_height 3
static unsigned char triangleDn5x3_bits[] = {
   0x1f, 0x0e, 0x04};
"
}

#------------------------------------------------------------------------------
# tablelist::flat5x4Arrows
#------------------------------------------------------------------------------
proc tablelist::flat5x4Arrows w {
    image create bitmap triangleUp$w -data "
#define triangleUp5x4_width 5
#define triangleUp5x4_height 4
static unsigned char triangleUp5x4_bits[] = {
   0x04, 0x0e, 0x1f, 0x1f};
"
    image create bitmap triangleDn$w -data "
#define triangleDn5x4_width 5
#define triangleDn5x4_height 4
static unsigned char triangleDn5x4_bits[] = {
   0x1f, 0x1f, 0x0e, 0x04};
"
}

#------------------------------------------------------------------------------
# tablelist::flat6x4Arrows
#------------------------------------------------------------------------------
proc tablelist::flat6x4Arrows w {
    image create bitmap triangleUp$w -data "
#define triangleUp6x4_width 6
#define triangleUp6x4_height 4
static unsigned char triangleUp6x4_bits[] = {
   0x0c, 0x1e, 0x3f, 0x3f};
"
    image create bitmap triangleDn$w -data "
#define triangleDn6x4_width 6
#define triangleDn6x4_height 4
static unsigned char triangleDn7x4_bits[] = {
   0x3f, 0x3f, 0x1e, 0x0c};
"
}

#------------------------------------------------------------------------------
# tablelist::flat7x4Arrows
#------------------------------------------------------------------------------
proc tablelist::flat7x4Arrows w {
    image create bitmap triangleUp$w -data "
#define triangleUp7x4_width 7
#define triangleUp7x4_height 4
static unsigned char triangleUp7x4_bits[] = {
   0x08, 0x1c, 0x3e, 0x7f};
"
    image create bitmap triangleDn$w -data "
#define triangleDn7x4_width 7
#define triangleDn7x4_height 4
static unsigned char triangleDn7x4_bits[] = {
   0x7f, 0x3e, 0x1c, 0x08};
"
}

#------------------------------------------------------------------------------
# tablelist::flat7x5Arrows
#------------------------------------------------------------------------------
proc tablelist::flat7x5Arrows w {
    image create bitmap triangleUp$w -data "
#define triangleUp7x5_width 7
#define triangleUp7x5_height 5
static unsigned char triangleUp7x5_bits[] = {
   0x08, 0x1c, 0x3e, 0x7f, 0x7f};
"
    image create bitmap triangleDn$w -data "
#define triangleDn7x5_width 7
#define triangleDn7x5_height 5
static unsigned char triangleDn7x5_bits[] = {
   0x7f, 0x7f, 0x3e, 0x1c, 0x08};
"
}

#------------------------------------------------------------------------------
# tablelist::flat7x7Arrows
#------------------------------------------------------------------------------
proc tablelist::flat7x7Arrows w {
    image create bitmap triangleUp$w -data "
#define triangleUp7x7_width 7
#define triangleUp7x7_height 7
static unsigned char triangleUp7x7_bits[] = {
   0x08, 0x1c, 0x1c, 0x3e, 0x3e, 0x7f, 0x7f};
"
    image create bitmap triangleDn$w -data "
#define triangleDn7x7_width 7
#define triangleDn7x7_height 7
static unsigned char triangleDn7x7_bits[] = {
   0x7f, 0x7f, 0x3e, 0x3e, 0x1c, 0x1c, 0x08};
"
}

#------------------------------------------------------------------------------
# tablelist::flat8x4Arrows
#------------------------------------------------------------------------------
proc tablelist::flat8x4Arrows w {
    image create bitmap triangleUp$w -data "
#define triangleUp8x4_width 8
#define triangleUp8x4_height 4
static unsigned char triangleUp8x4_bits[] = {
   0x18, 0x3c, 0x7e, 0xff};
"
    image create bitmap triangleDn$w -data "
#define triangleDn8x4_width 8
#define triangleDn8x4_height 4
static unsigned char triangleDn8x4_bits[] = {
   0xff, 0x7e, 0x3c, 0x18};
"
}

#------------------------------------------------------------------------------
# tablelist::flat8x5Arrows
#------------------------------------------------------------------------------
proc tablelist::flat8x5Arrows w {
    image create bitmap triangleUp$w -data "
#define triangleUp8x5_width 8
#define triangleUp8x5_height 5
static unsigned char triangleUp8x5_bits[] = {
   0x18, 0x3c, 0x7e, 0xff, 0xff};
"
    image create bitmap triangleDn$w -data "
#define triangleDn8x5_width 8
#define triangleDn8x5_height 5
static unsigned char triangleDn8x5_bits[] = {
   0xff, 0xff, 0x7e, 0x3c, 0x18};
"
}

#------------------------------------------------------------------------------
# tablelist::flat9x5Arrows
#------------------------------------------------------------------------------
proc tablelist::flat9x5Arrows w {
    image create bitmap triangleUp$w -data "
#define triangleUp9x5_width 9
#define triangleUp9x5_height 5
static unsigned char triangleUp9x5_bits[] = {
   0x10, 0x00, 0x38, 0x00, 0x7c, 0x00, 0xfe, 0x00, 0xff, 0x01};
"
    image create bitmap triangleDn$w -data "
#define triangleDn9x5_width 9
#define triangleDn9x5_height 5
static unsigned char triangleDn9x5_bits[] = {
   0xff, 0x01, 0xfe, 0x00, 0x7c, 0x00, 0x38, 0x00, 0x10, 0x00};
"
}

#------------------------------------------------------------------------------
# tablelist::flat9x6Arrows
#------------------------------------------------------------------------------
proc tablelist::flat9x6Arrows w {
    image create bitmap triangleUp$w -data "
#define triangleUp9x6_width 9
#define triangleUp9x6_height 6
static unsigned char triangleUp9x6_bits[] = {
   0x10, 0x00, 0x38, 0x00, 0x7c, 0x00, 0xfe, 0x00, 0xff, 0x01, 0xff, 0x01};
"
    image create bitmap triangleDn$w -data "
#define triangleDn9x6_width 9
#define triangleDn9x6_height 6
static unsigned char triangleDn9x6_bits[] = {
   0xff, 0x01, 0xff, 0x01, 0xfe, 0x00, 0x7c, 0x00, 0x38, 0x00, 0x10, 0x00};
"
}

#------------------------------------------------------------------------------
# tablelist::flat11x6Arrows
#------------------------------------------------------------------------------
proc tablelist::flat11x6Arrows w {
    image create bitmap triangleUp$w -data "
#define triangleUp11x6_width 11
#define triangleUp11x6_height 6
static unsigned char triangleUp11x6_bits[] = {
   0x20, 0x00, 0x70, 0x00, 0xf8, 0x00, 0xfc, 0x01, 0xfe, 0x03, 0xff, 0x07};
"
    image create bitmap triangleDn$w -data "
#define triangleDn11x6_width 11
#define triangleDn11x6_height 6
static unsigned char triangleDn11x6_bits[] = {
   0xff, 0x07, 0xfe, 0x03, 0xfc, 0x01, 0xf8, 0x00, 0x70, 0x00, 0x20, 0x00};
"
}

#------------------------------------------------------------------------------
# tablelist::flat15x8Arrows
#------------------------------------------------------------------------------
proc tablelist::flat15x8Arrows w {
    image create bitmap triangleUp$w -data "
#define triangleUp15x8_width 15
#define triangleUp15x8_height 8
static unsigned char triangleUp15x8_bits[] = {
   0x80, 0x00, 0xc0, 0x01, 0xe0, 0x03, 0xf0, 0x07, 0xf8, 0x0f, 0xfc, 0x1f,
   0xfe, 0x3f, 0xff, 0x7f};
"
    image create bitmap triangleDn$w -data "
#define triangleDn15x8_width 15
#define triangleDn15x8_height 8
static unsigned char triangleDn15x8_bits[] = {
   0xff, 0x7f, 0xfe, 0x3f, 0xfc, 0x1f, 0xf8, 0x0f, 0xf0, 0x07, 0xe0, 0x03,
   0xc0, 0x01, 0x80, 0x00};
"
}

#------------------------------------------------------------------------------
# tablelist::flatAngle7x4Arrows
#------------------------------------------------------------------------------
proc tablelist::flatAngle7x4Arrows w {
    image create bitmap triangleUp$w -data "
#define triangleUp7x4_width 7
#define triangleUp7x4_height 4
static unsigned char triangleUp7x4_bits[] = {
   0x08, 0x1c, 0x36, 0x63};
"
    image create bitmap triangleDn$w -data "
#define triangleDn7x4_width 7
#define triangleDn7x4_height 4
static unsigned char triangleDn7x4_bits[] = {
   0x63, 0x36, 0x1c, 0x08};
"
}

#------------------------------------------------------------------------------
# tablelist::flatAngle7x5Arrows
#------------------------------------------------------------------------------
proc tablelist::flatAngle7x5Arrows w {
    image create bitmap triangleUp$w -data "
#define triangleUp7x5_width 7
#define triangleUp7x5_height 5
static unsigned char triangleUp7x5_bits[] = {
   0x08, 0x1c, 0x3e, 0x77, 0x63};
"
    image create bitmap triangleDn$w -data "
#define triangleDn7x5_width 7
#define triangleDn7x5_height 5
static unsigned char triangleDn7x5_bits[] = {
   0x63, 0x77, 0x3e, 0x1c, 0x08};
"
}

#------------------------------------------------------------------------------
# tablelist::flatAngle9x5Arrows
#------------------------------------------------------------------------------
proc tablelist::flatAngle9x5Arrows w {
    image create bitmap triangleUp$w -data "
#define triangleUp9x5_width 9
#define triangleUp9x5_height 5
static unsigned char triangleUp9x5_bits[] = {
   0x10, 0x00, 0x38, 0x00, 0x6c, 0x00, 0xc6, 0x00, 0x83, 0x01};
"
    image create bitmap triangleDn$w -data "
#define triangleDn9x5_width 9
#define triangleDn9x5_height 5
static unsigned char triangleDn9x5_bits[] = {
   0x83, 0x01, 0xc6, 0x00, 0x6c, 0x00, 0x38, 0x00, 0x10, 0x00};
"
}

#------------------------------------------------------------------------------
# tablelist::flatAngle9x6Arrows
#------------------------------------------------------------------------------
proc tablelist::flatAngle9x6Arrows w {
    image create bitmap triangleUp$w -data "
#define triangleUp9x6_width 9
#define triangleUp9x6_height 6
static unsigned char triangleUp9x6_bits[] = {
   0x10, 0x00, 0x38, 0x00, 0x7c, 0x00, 0xee, 0x00, 0xc7, 0x01, 0x83, 0x01};
"
    image create bitmap triangleDn$w -data "
#define triangleDn9x6_width 9
#define triangleDn9x6_height 6
static unsigned char triangleDn9x6_bits[] = {
   0x83, 0x01, 0xc7, 0x01, 0xee, 0x00, 0x7c, 0x00, 0x38, 0x00, 0x10, 0x00};
"
}

#------------------------------------------------------------------------------
# tablelist::flatAngle9x7Arrows
#------------------------------------------------------------------------------
proc tablelist::flatAngle9x7Arrows w {
    image create bitmap triangleUp$w -data "
#define triangleUp9x7_width 9
#define triangleUp9x7_height 7
static unsigned char triangleUp9x7_bits[] = {
   0x10, 0x00, 0x38, 0x00, 0x7c, 0x00, 0xfe, 0x00, 0xef, 0x01, 0xc7, 0x01,
   0x83, 0x01};
"
    image create bitmap triangleDn$w -data "
#define triangleDn9x7_width 9
#define triangleDn9x7_height 7
static unsigned char triangleDn9x7_bits[] = {
   0x83, 0x01, 0xc7, 0x01, 0xef, 0x01, 0xfe, 0x00, 0x7c, 0x00, 0x38, 0x00,
   0x10, 0x00};
"
}

#------------------------------------------------------------------------------
# tablelist::flatAngle10x6Arrows
#------------------------------------------------------------------------------
proc tablelist::flatAngle10x6Arrows w {
    image create bitmap triangleUp$w -data "
#define triangleUp10x6_width 10
#define triangleUp10x6_height 6
static unsigned char triangleUp10x6_bits[] = {
   0x30, 0x00, 0x78, 0x00, 0xfc, 0x00, 0xce, 0x01, 0x87, 0x03, 0x03, 0x03};
"
    image create bitmap triangleDn$w -data "
#define triangleDn10x6_width 10
#define triangleDn10x6_height 6
static unsigned char triangleDn10x6_bits[] = {
   0x03, 0x03, 0x87, 0x03, 0xce, 0x01, 0xfc, 0x00, 0x78, 0x00, 0x30, 0x00};
"
}

#------------------------------------------------------------------------------
# tablelist::flatAngle10x7Arrows
#------------------------------------------------------------------------------
proc tablelist::flatAngle10x7Arrows w {
    image create bitmap triangleUp$w -data "
#define triangleUp10x7_width 10
#define triangleUp10x7_height 7
static unsigned char triangleUp10x7_bits[] = {
   0x30, 0x00, 0x78, 0x00, 0xfc, 0x00, 0xfe, 0x01, 0xcf, 0x03, 0x87, 0x03,
   0x03, 0x03};
"
    image create bitmap triangleDn$w -data "
#define triangleDn10x7_width 10
#define triangleDn10x7_height 7
static unsigned char triangleDn10x6_bits[] = {
   0x03, 0x03, 0x87, 0x03, 0xcf, 0x03, 0xfe, 0x01, 0xfc, 0x00, 0x78, 0x00,
   0x30, 0x00};
"
}

#------------------------------------------------------------------------------
# tablelist::flatAngle11x6Arrows
#------------------------------------------------------------------------------
proc tablelist::flatAngle11x6Arrows w {
    image create bitmap triangleUp$w -data "
#define triangleUp11x6_width 11
#define triangleUp11x6_height 6
static unsigned char triangleUp11x6_bits[] = {
   0x20, 0x00, 0x70, 0x00, 0xd8, 0x00, 0x8c, 0x01, 0x06, 0x03, 0x03, 0x06};
"
    image create bitmap triangleDn$w -data "
#define triangleDn11x6_width 11
#define triangleDn11x6_height 6
static unsigned char triangleDn11x6_bits[] = {
   0x03, 0x06, 0x06, 0x03, 0x8c, 0x01, 0xd8, 0x00, 0x70, 0x00, 0x20, 0x00};
"
}

#------------------------------------------------------------------------------
# tablelist::flatAngle15x8Arrows
#------------------------------------------------------------------------------
proc tablelist::flatAngle15x8Arrows w {
    image create bitmap triangleUp$w -data "
#define triangleUp15x8_width 15
#define triangleUp15x8_height 8
static unsigned char triangleUp15x8_bits[] = {
   0x80, 0x00, 0xc0, 0x01, 0x60, 0x03, 0x30, 0x06, 0x18, 0x0c, 0x0c, 0x18,
   0x06, 0x30, 0x03, 0x60};
"
    image create bitmap triangleDn$w -data "
#define triangleDn15x8_width 15
#define triangleDn15x8_height 8
static unsigned char triangleDn15x8_bits[] = {
   0x03, 0x60, 0x06, 0x30, 0x0c, 0x18, 0x18, 0x0c, 0x30, 0x06, 0x60, 0x03,
   0xc0, 0x01, 0x80, 0x00};
"
}

#------------------------------------------------------------------------------
# tablelist::photo7x4Arrows
#------------------------------------------------------------------------------
proc tablelist::photo7x4Arrows w {
    foreach dir {Up Dn} {
	image create photo triangle$dir$w
    }

    triangleUp$w put "
R0lGODlhBwAEAIQRAAAAADxZbDxeckNfb0BidF6IoWGWtlabwIexxZq2xYbI65HL7LXd8rri9MPk
9cTj9Mrm9f///////////////////////////////////////////////////////////yH5BAEK
AB8ALAAAAAAHAAQAAAUS4CcSYikcRRkYypJ8A9IwD+SEADs=
"
    triangleDn$w put "
R0lGODlhBwAEAIQQAAAAADxeclKLq2KauWes03CpxnKrynOy2IO62ZXG4JrH4JrL5pnQ7qbY87Pb
8cTj9P///////////////////////////////////////////////////////////////yH5BAEK
AAAALAAAAAAHAAQAAAUSYDAUBpIogHAwzgO8ROO+70KHADs=
"
}

#------------------------------------------------------------------------------
# tablelist::photo7x7Arrows
#------------------------------------------------------------------------------
proc tablelist::photo7x7Arrows w {
    foreach dir {Up Dn} {
	image create photo triangle$dir$w
    }

    triangleUp$w put "
iVBORw0KGgoAAAANSUhEUgAAAAcAAAAHCAYAAADEUlfTAAAABGdBTUEAALGPC/xhBQAAACBjSFJN
AAB6JgAAgIQAAPoAAACA6AAAdTAAAOpgAAA6mAAAF3CculE8AAAACXBIWXMAAA7DAAAOwwHHb6hk
AAAAGnRFWHRTb2Z0d2FyZQBQYWludC5ORVQgdjMuNS4xMDD0cqEAAABCSURBVBhXXY4BCgAgCAP9
T//R9/Ryc+ZEHCyb40CB3D1n6OAZuQOKi9klPhUsjNJ6VwUp+tOLopOGNkXncToWw6IPjiowJNyp
gu8AAAAASUVORK5CYII=
"
    triangleDn$w put "
iVBORw0KGgoAAAANSUhEUgAAAAcAAAAHCAYAAADEUlfTAAAABGdBTUEAALGPC/xhBQAAAAlwSFlz
AAAOwwAADsMBx2+oZAAAABp0RVh0U29mdHdhcmUAUGFpbnQuTkVUIHYzLjUuMTAw9HKhAAAAP0lE
QVQYV22LgQ0AIAjD9g//yD1ejoBoFpRkISsUPsMzPwkOIcARmJlvKMGIJq9jt+Uem51Wscfe1hkq
8VAdWKBfMCRjQcZZAAAAAElFTkSuQmCC
"
}

#------------------------------------------------------------------------------
# tablelist::photo9x5Arrows
#------------------------------------------------------------------------------
proc tablelist::photo9x5Arrows w {
    foreach dir {Up Dn} {
	image create photo triangle$dir$w
    }

    triangleUp$w put "
R0lGODlhCQAFAIQTAAAAADxeckBidGaJmlabwG6mw4exxZy9z4bI647M7JvS76HV8KjX8a3a8rPc
8rLe87jf9Lzh9MPk9f///////////////////////////////////////////////////yH5BAEK
AB8ALAAAAAAJAAUAAAUZ4Cd+wWgGhGCSBKIMY1AkSwMdpPEwTiT9IQA7
"
    triangleDn$w put "
R0lGODlhCQAFAIQSAAAAADxeck90imuUrGKauW2jwWes036xzXOy2IO83YO83o++2JrH4JrK5rPZ
7rPZ77TZ7sTj9P///////////////////////////////////////////////////////yH5BAEK
AB8ALAAAAAAJAAUAAAUaYECMxbEwzCcgSNJA0ScPSuPEsmw8eC43vhAAOw==
"
}

#------------------------------------------------------------------------------
# tablelist::photo11x6Arrows
#------------------------------------------------------------------------------
proc tablelist::photo11x6Arrows w {
    foreach dir {Up Dn} {
	image create photo triangle$dir$w
    }

    triangleUp$w put "
R0lGODlhCwAGAKUjAAAAADJdfDJefDFefjRffDhhfC9njDNrjThtjj5xkUJykWuXs2Ogw2ukxHKp
yHusyZrD2o7M7JfQ7qDE2qfH2arJ2aPQ6aLU76Td+6/h/bDi/rrj+bjm/rrn/8Pm+sLr/8Ps/8ro
+szu////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////yH5BAEKAD8ALAAAAAALAAYAAAYqwJ9Q
WBgahQTF4ohMPCyQYwDhuHA2k6Hg0JBkOh8P5TcwMCIYTQckClWCADs=
"
    triangleDn$w put "
R0lGODlhCwAGAKUkAAAAADl1ml+DnlaRtWGZu2ievXaet2+gvXekvmKfw32owXu314Kqwoiswoey
yo21zIa+3JC2zZ26y5DB3ZjG34fE5ZHJ55/J4ZrN6KTC1KjN4qLb+azf+rrV5rDi/rrn/7/m+8Ps
/8vu/9Pw////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////yH5BAEKAD8ALAAAAAALAAYAAAYqQEFg
QCgcEApGQ/IzJBaQCeWi6fyujsrG8wmNruCHhfMRgc8RDOjMzrCDADs=
"
}

#------------------------------------------------------------------------------
# tablelist::photo15x8Arrows
#------------------------------------------------------------------------------
proc tablelist::photo15x8Arrows w {
    foreach dir {Up Dn} {
	image create photo triangle$dir$w
    }

    triangleUp$w put "
R0lGODlhDwAIAKU/AAAAAB1YfjJefy1pjjVmhjJrjzppiD1qiTVtkTpwkTxwkT18oUFsikRuilKP
s16Rr1aStFyUtWeHnGKKo2CWtXGhvV6dwnOy1Ha02Hu01YKovommuI2xxIC314S31JGyx5W1x5S3
zJi2yJG915nE2p/F24fD44/I5o7K65bF4JbN7ZjM6J/P6Z3Q7Z7X9abJ3anN4KfS6q/U6azV66zX
76fa9qzb9and+bLb8Lne8rHg+rLi+7fi+bnk+73l+v///yH5BAEKAD8ALAAAAAAPAAgAAAZJwJ9w
+JMQj8QGYYI8NhSPiqYpZCQontSI0zwgIp2WjUb6HA8FSEZV0/FwJdDQMHBcUK7brufLvUQ/AgEL
FhgmJyssMTMyMCEbQQA7
"
    triangleDn$w put "
R0lGODlhDwAIAKU/AAAAACdjiUBtjkKBpkaGqlWFpVaUuFyav2SVtGGdv2Cew2ehwm2jw26tz3Ok
wXOmw3amwnuow3ioxH6pw3Gv0nSz13iz03611ICsxYOux4mtwomxyI2yyIK00oa41Yy815KvwZm5
zJO+2JjC2Z/D2J7E2obC4o/I5o3J6pTM65jM6J/P6ZzP657X9avH2anP5afS6q7U6azV66fa9qnZ
9Knd+bjV5rrc8bHg+rLi+7fi+b/g8rnk+7zl+sXh8v///yH5BAEKAD8ALAAAAAAPAAgAAAZIQEFg
YEgsGA8JJrPhaEC/AkHRsFw8H9GoRHL9vohDxXRSrWCymO3LdlBQrVqO1/Ox7xBLaobT7e6AERcs
NDeAhxMdL4eMIYxBADs=
"
}

#------------------------------------------------------------------------------
# tablelist::sunken8x7Arrows
#------------------------------------------------------------------------------
proc tablelist::sunken8x7Arrows w {
    image create bitmap triangleUp$w -data "
#define triangleUp8x7_width 8
#define triangleUp8x7_height 7
static unsigned char triangleUp8x7_bits[] = {
   0x18, 0x3c, 0x3c, 0x7e, 0x7e, 0xff, 0xff};
"
    image create bitmap darkLineUp$w -data "
#define darkLineUp8x7_width 8
#define darkLineUp8x7_height 7
static unsigned char darkLineUp8x7_bits[] = {
   0x08, 0x0c, 0x04, 0x06, 0x02, 0x03, 0x00};
"
    image create bitmap lightLineUp$w -data "
#define lightLineUp8x7_width 8
#define lightLineUp8x7_height 7
static unsigned char lightLineUp8x7_bits[] = {
   0x10, 0x30, 0x20, 0x60, 0x40, 0xc0, 0xff};
"
    image create bitmap triangleDn$w -data "
#define triangleDn8x7_width 8
#define triangleDn8x7_height 7
static unsigned char triangleDn8x7_bits[] = {
   0xff, 0xff, 0x7e, 0x7e, 0x3c, 0x3c, 0x18};
"
    image create bitmap darkLineDn$w -data "
#define darkLineDn8x7_width 8
#define darkLineDn8x7_height 7
static unsigned char darkLineDn8x7_bits[] = {
   0xff, 0x03, 0x02, 0x06, 0x04, 0x0c, 0x08};
"
    image create bitmap lightLineDn$w -data "
#define lightLineDn8x7_width 8
#define lightLineDn8x7_height 7
static unsigned char lightLineDn8x7_bits[] = {
   0x00, 0xc0, 0x40, 0x60, 0x20, 0x30, 0x10};
"
}

#------------------------------------------------------------------------------
# tablelist::sunken10x9Arrows
#------------------------------------------------------------------------------
proc tablelist::sunken10x9Arrows w {
    image create bitmap triangleUp$w -data "
#define triangleUp10x9_width 10
#define triangleUp10x9_height 9
static unsigned char triangleUp10x9_bits[] = {
   0x30, 0x00, 0x78, 0x00, 0x78, 0x00, 0xfc, 0x00, 0xfc, 0x00, 0xfe, 0x01,
   0xfe, 0x01, 0xff, 0x03, 0xff, 0x03};
"
    image create bitmap darkLineUp$w -data "
#define darkLineUp10x9_width 10
#define darkLineUp10x9_height 9
static unsigned char darkLineUp10x9_bits[] = {
   0x10, 0x00, 0x18, 0x00, 0x08, 0x00, 0x0c, 0x00, 0x04, 0x00, 0x06, 0x00,
   0x02, 0x00, 0x03, 0x00, 0x00, 0x00};
"
    image create bitmap lightLineUp$w -data "
#define lightLineUp10x9_width 10
#define lightLineUp10x9_height 9
static unsigned char lightLineUp10x9_bits[] = {
   0x20, 0x00, 0x60, 0x00, 0x40, 0x00, 0xc0, 0x00, 0x80, 0x00, 0x80, 0x01,
   0x00, 0x01, 0x00, 0x03, 0xff, 0x03};
"
    image create bitmap triangleDn$w -data "
#define triangleDn10x9_width 10
#define triangleDn10x9_height 9
static unsigned char triangleDn10x9_bits[] = {
   0xff, 0x03, 0xff, 0x03, 0xfe, 0x01, 0xfe, 0x01, 0xfc, 0x00, 0xfc, 0x00,
   0x78, 0x00, 0x78, 0x00, 0x30, 0x00};
"
    image create bitmap darkLineDn$w -data "
#define darkLineDn10x9_width 10
#define darkLineDn10x9_height 9
static unsigned char darkLineDn10x9_bits[] = {
   0xff, 0x03, 0x03, 0x00, 0x02, 0x00, 0x06, 0x00, 0x04, 0x00, 0x0c, 0x00,
   0x08, 0x00, 0x18, 0x00, 0x10, 0x00};
"
    image create bitmap lightLineDn$w -data "
#define lightLineDn10x9_width 10
#define lightLineDn10x9_height 9
static unsigned char lightLineDn10x9_bits[] = {
   0x00, 0x00, 0x00, 0x03, 0x00, 0x01, 0x80, 0x01, 0x80, 0x00, 0xc0, 0x00,
   0x40, 0x00, 0x60, 0x00, 0x20, 0x00};
"
}

#------------------------------------------------------------------------------
# tablelist::sunken12x11Arrows
#------------------------------------------------------------------------------
proc tablelist::sunken12x11Arrows w {
    image create bitmap triangleUp$w -data "
#define triangleUp12x11_width 12
#define triangleUp12x11_height 11
static unsigned char triangleUp12x11_bits[] = {
   0x60, 0x00, 0xf0, 0x00, 0xf0, 0x00, 0xf8, 0x01, 0xf8, 0x01, 0xfc, 0x03,
   0xfc, 0x03, 0xfe, 0x07, 0xfe, 0x07, 0xff, 0x0f, 0xff, 0x0f};
"
    image create bitmap darkLineUp$w -data "
#define darkLineUp12x11_width 12
#define darkLineUp12x11_height 11
static unsigned char darkLineUp12x11_bits[] = {
   0x20, 0x00, 0x30, 0x00, 0x10, 0x00, 0x18, 0x00, 0x08, 0x00, 0x0c, 0x00,
   0x04, 0x00, 0x06, 0x00, 0x02, 0x00, 0x03, 0x00, 0x00, 0x00};
"
    image create bitmap lightLineUp$w -data "
#define lightLineUp12x11_width 12
#define lightLineUp12x11_height 11
static unsigned char lightLineUp12x11_bits[] = {
   0x40, 0x00, 0xc0, 0x00, 0x80, 0x00, 0x80, 0x01, 0x00, 0x01, 0x00, 0x03,
   0x00, 0x02, 0x00, 0x06, 0x00, 0x04, 0x00, 0x0c, 0xff, 0x0f};
"
    image create bitmap triangleDn$w -data "
#define triangleDn12x11_width 12
#define triangleDn12x11_height 11
static unsigned char triangleDn12x11_bits[] = {
   0xff, 0x0f, 0xff, 0x0f, 0xfe, 0x07, 0xfe, 0x07, 0xfc, 0x03, 0xfc, 0x03,
   0xf8, 0x01, 0xf8, 0x01, 0xf0, 0x00, 0xf0, 0x00, 0x60, 0x00};
"
    image create bitmap darkLineDn$w -data "
#define darkLineDn12x11_width 12
#define darkLineDn12x11_height 11
static unsigned char darkLineDn12x11_bits[] = {
   0xff, 0x0f, 0x03, 0x00, 0x02, 0x00, 0x06, 0x00, 0x04, 0x00, 0x0c, 0x00,
   0x08, 0x00, 0x18, 0x00, 0x10, 0x00, 0x30, 0x00, 0x20, 0x00};
"
    image create bitmap lightLineDn$w -data "
#define lightLineDn12x11_width 12
#define lightLineDn12x11_height 11
static unsigned char lightLineDn12x11_bits[] = {
   0x00, 0x00, 0x00, 0x0c, 0x00, 0x04, 0x00, 0x06, 0x00, 0x02, 0x00, 0x03,
   0x00, 0x01, 0x80, 0x01, 0x80, 0x00, 0xc0, 0x00, 0x40, 0x00};
"
}

#------------------------------------------------------------------------------
# tablelist::createSortRankImgs
#------------------------------------------------------------------------------
proc tablelist::createSortRankImgs win {
    image create bitmap sortRank1$win -data "
#define sortRank1_width 4
#define sortRank1_height 6
static unsigned char sortRank1_bits[] = {
   0x04, 0x06, 0x04, 0x04, 0x04, 0x04};
"
    image create bitmap sortRank2$win -data "
#define sortRank2_width 4
#define sortRank2_height 6
static unsigned char sortRank2_bits[] = {
   0x06, 0x09, 0x08, 0x04, 0x02, 0x0f};
"
    image create bitmap sortRank3$win -data "
#define sortRank3_width 4
#define sortRank3_height 6
static unsigned char sortRank3_bits[] = {
   0x0f, 0x08, 0x06, 0x08, 0x09, 0x06};
"
    image create bitmap sortRank4$win -data "
#define sortRank4_width 4
#define sortRank4_height 6
static unsigned char sortRank4_bits[] = {
   0x04, 0x06, 0x05, 0x0f, 0x04, 0x04};
"
    image create bitmap sortRank5$win -data "
#define sortRank5_width 4
#define sortRank5_height 6
static unsigned char sortRank5_bits[] = {
   0x0f, 0x01, 0x07, 0x08, 0x09, 0x06};
"
    image create bitmap sortRank6$win -data "
#define sortRank6_width 4
#define sortRank6_height 6
static unsigned char sortRank6_bits[] = {
   0x06, 0x01, 0x07, 0x09, 0x09, 0x06};
"
    image create bitmap sortRank7$win -data "
#define sortRank7_width 4
#define sortRank7_height 6
static unsigned char sortRank7_bits[] = {
   0x0f, 0x08, 0x04, 0x04, 0x02, 0x02};
"
    image create bitmap sortRank8$win -data "
#define sortRank8_width 4
#define sortRank8_height 6
static unsigned char sortRank8_bits[] = {
   0x06, 0x09, 0x06, 0x09, 0x09, 0x06};
"
    image create bitmap sortRank9$win -data "
#define sortRank9_width 4
#define sortRank9_height 6
static unsigned char sortRank9_bits[] = {
   0x06, 0x09, 0x09, 0x0e, 0x08, 0x06};
"
}

#------------------------------------------------------------------------------
# tablelist::createCheckbuttonImgs
#------------------------------------------------------------------------------
proc tablelist::createCheckbuttonImgs {} {
    variable checkedImg [image create bitmap tablelist_checkedImg -data "
#define checked_width 9
#define checked_height 9
static unsigned char checked_bits[] = {
   0x00, 0x00, 0x80, 0x00, 0xc0, 0x00, 0xe2, 0x00, 0x76, 0x00, 0x3e, 0x00,
   0x1c, 0x00, 0x08, 0x00, 0x00, 0x00};
"]

    variable uncheckedImg [image create bitmap tablelist_uncheckedImg -data "
#define unchecked_width 9
#define unchecked_height 9
static unsigned char unchecked_bits[] = {
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
"]
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
iVBORw0KGgoAAAANSUhEUgAAAA4AAAAOCAYAAAAfSC3RAAAABGdBTUEAALGPC/xhBQAAAAlwSFlz
AAAOwgAADsIBFShKgAAAABp0RVh0U29mdHdhcmUAUGFpbnQuTkVUIHYzLjUuMTAw9HKhAAAAUklE
QVQ4T52LsQ3AMAzD9Gan/NgHXRgZYqJGImTgQAlURFzRjg4UaVTfQZFeN6bM0IopKzzGFIbbmPIP
n/pXKGaUUMwooZhRQjGjpB0d2vFM6AMkZwGtV+hP7wAAAABJRU5ErkJggg==
"
	tablelist_adwaita_expandedImg put "
iVBORw0KGgoAAAANSUhEUgAAAA4AAAAOCAYAAAAfSC3RAAAABGdBTUEAALGPC/xhBQAAAAlwSFlz
AAAOwgAADsIBFShKgAAAABp0RVh0U29mdHdhcmUAUGFpbnQuTkVUIHYzLjUuMTAw9HKhAAAAUUlE
QVQ4T53LUQrAMAgEUe+Yr14zF7RaQiA4rUsDD+LCmLv/gqMCRwWOChwV+UaYjauEq/6KS/Q0+8Mx
Ruk8zvg1SnWIoIsSjgocFTgqcOy53bmYAXcYbKcDAAAAAElFTkSuQmCC
"
	tablelist_adwaita_collapsedSelImg put "
iVBORw0KGgoAAAANSUhEUgAAAA4AAAAOCAYAAAAfSC3RAAAABGdBTUEAALGPC/xhBQAAAAlwSFlz
AAAOwgAADsIBFShKgAAAABp0RVh0U29mdHdhcmUAUGFpbnQuTkVUIHYzLjUuMTAw9HKhAAAAU0lE
QVQ4T52LQQrAMAzD8s39oO/bB7N4UCgiW00POlhYkZlHtNKBYmB/QnEXVkyh0IopZriNKdbwN6Zg
eBX8vFBYkaCwIkFhRYLCikQrHVq5J+MBfENbgN9EUrEAAAAASUVORK5CYII=
"
	tablelist_adwaita_expandedSelImg put "
iVBORw0KGgoAAAANSUhEUgAAAA4AAAAOCAYAAAAfSC3RAAAABGdBTUEAALGPC/xhBQAAAAlwSFlz
AAAOwgAADsIBFShKgAAAABp0RVh0U29mdHdhcmUAUGFpbnQuTkVUIHYzLjUuMTAw9HKhAAAATUlE
QVQ4T53LsQ0AIAwDQXakYk0WDLhD8BCL4iLlJZeI+ILRgdGB0YHRoVOnnmjTMczGx0jWh8Y4kj2s
4+tIKGrwHAlGB0YHRgfGXJQByYxbHYdyNm0AAAAASUVORK5CYII=
"
	tablelist_adwaita_collapsedActImg put "
iVBORw0KGgoAAAANSUhEUgAAAA4AAAAOCAYAAAAfSC3RAAAABGdBTUEAALGPC/xhBQAAAAlwSFlz
AAAOwQAADsEBuJFr7QAAABp0RVh0U29mdHdhcmUAUGFpbnQuTkVUIHYzLjUuMTAw9HKhAAAAU0lE
QVQ4T52LQQ6AMAzD8tM9BX5eqDisFmWLOPjgRFZE/KIdHSjSqL6CcqsbU57Qiikz3MYUhslnTHmH
R/0rFDNKKGaUUMwooUhn9RXt6NCOe0IXeqwIcNEv1OkAAAAASUVORK5CYII=
"
	tablelist_adwaita_expandedActImg put "
iVBORw0KGgoAAAANSUhEUgAAAA4AAAAOCAYAAAAfSC3RAAAABGdBTUEAALGPC/xhBQAAAAlwSFlz
AAAOwQAADsEBuJFr7QAAABp0RVh0U29mdHdhcmUAUGFpbnQuTkVUIHYzLjUuMTAw9HKhAAAAUklE
QVQ4T53LUQqAMAwE0dzaT715dKUU2kzrYuFBOrCRmb9gdGB0YHRgdOgdD107Zxm29W5cRu+mHzzG
kYyfcbwcSQ0Rl8x9htGB0YHRgfFbxg0RwQjxGF3ifAAAAABJRU5ErkJggg==
"
	tablelist_adwaita_collapsedSelActImg put "
iVBORw0KGgoAAAANSUhEUgAAAA4AAAAOCAYAAAAfSC3RAAAABGdBTUEAALGPC/xhBQAAAAlwSFlz
AAAOwQAADsEBuJFr7QAAABp0RVh0U29mdHdhcmUAUGFpbnQuTkVUIHYzLjUuMTAw9HKhAAAAUElE
QVQ4T52LQQoAIAgEe3rHfm1tEMSgKS3MwcFpZvaFKytQDNwhFFoppjhLY4p7z5iCC2MKri/4s6G4
F0aC4uwZCQotjQRFKRKurODKHGsTLGRi5/Yt6JoAAAAASUVORK5CYII=
"
	tablelist_adwaita_expandedSelActImg put "
iVBORw0KGgoAAAANSUhEUgAAAA4AAAAOCAYAAAAfSC3RAAAABGdBTUEAALGPC/xhBQAAAAlwSFlz
AAAOwQAADsEBuJFr7QAAABp0RVh0U29mdHdhcmUAUGFpbnQuTkVUIHYzLjUuMTAw9HKhAAAAS0lE
QVQ4T53LQQoAIAwDQX/t1Z9XcxO72qAwQhfSIuILRgdGB0YHRoe+vlRvLGlYjdNI9oPGOJIz7OPr
SChq8BwJRgdGB0YHxlq0CSfbYptH4iuzAAAAAElFTkSuQmCC
"
    } else {
	tablelist_adwaita_collapsedImg put "
R0lGODlhDgAOAMIEAAAAAE1NTaCgoKampv///////////////yH5BAEKAAAALAAAAAAOAA4AAAMb
CLrc/kvAFuRUoV6Q9ezeAw5fRpbnl07r5m4JADs=
"
	tablelist_adwaita_expandedImg put "
R0lGODlhDgAOAMIEAAAAAE1NTaampqysrP///////////////yH5BAEKAAAALAAAAAAOAA4AAAMa
CLrc/jDKyUa4+Ipmc9hOp0UdGAkmpa7skwAAOw==
"
	tablelist_adwaita_collapsedSelImg put "
R0lGODlhDgAOAKEBAAAAAP///////////yH5BAEKAAAALAAAAAAOAA4AAAIXhI+pe8EZ3DNRvmoX
zhDfOoEhp03mmRQAOw==
"
	tablelist_adwaita_expandedSelImg put "
R0lGODlhDgAOAKEBAAAAAP///////////yH5BAEKAAAALAAAAAAOAA4AAAIUhI+py+2Pgpw00apu
aJhvCIZiUwAAOw==
"
	tablelist_adwaita_collapsedActImg put "
R0lGODlhDgAOAMIEAAAAAH9/f4CAgKCgoP///////////////yH5BAEKAAQALAAAAAAOAA4AAAMc
SLrc/mvABuRUoF6S9ezeAwpfRpbnl07B5r5KAgA7
"
	tablelist_adwaita_expandedActImg put "
R0lGODlhDgAOAMIEAAAAAH9/f4CAgIiIiP///////////////yH5BAEKAAQALAAAAAAOAA4AAAMa
SLrc/jDKyQa4+IpmM9hOp0UdGAUBpa6slAAAOw==
"
	tablelist_adwaita_collapsedSelActImg put "
R0lGODlhDgAOAKEBAAAAAP///////////yH5BAEKAAAALAAAAAAOAA4AAAIXhI+pe8EZ3DNRvmoX
zhDfOoEhp03mmRQAOw==
"
	tablelist_adwaita_expandedSelActImg put "
R0lGODlhDgAOAKEBAAAAAP///////////yH5BAEKAAAALAAAAAAOAA4AAAIUhI+py+2Pgpw00apu
aJhvCIZiUwAAOw==
"
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
DxC/vwHAEA0PngoIycrLCAuRBwwG0tPUBg5mQgUJBAPd3gMECVhHS+XYQkEAOw==
"
    tablelist_ambiance_expandedImg put "
R0lGODlhEgAQAKUyAAAAADw7N9/Wxd/Wxt/WyODYyeLZyuHazeTdz+Pd0eTd0uXf0+Xf1efg1OXg
1ujh0+jg1Onj1+nj2Ork2O3m3Ozm3e7p4e/q4e7s5u/s6PHs5PHs5fHs5vHu6fPw6vTw6vTw6/bz
7vbz7/b07vb07/b08Pb08fj18fj28/n49Pr59fr59vv5+Pv6+Pr6+vz6+fz7+v39/f//////////
/////////////////////////////////////////////yH5BAEKAD8ALAAAAAASABAAAAabwJ9w
SCwWD4KkUnkwFjqumHQac2UKxEOG1Xq9YGBvi4VpCgUmVCqlUq3aa1RJMBSERKSSyXTal0gjJHRn
Hx4dHiCJiR4eHx+DPwIckxwaGxwbl5SQAhcXFgGhogGeF5wVFRSoq6wVnBMRErKzshETE5wPELu8
vQ0PnAoIw8TFCAuQBwwGzM3OBg5mQgUJBAPX2AMECVhHS9/SQkEAOw==
"
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
    scan $::tcl_platform(osVersion) "%d" majorOSVersion
    if {[string compare $winSys "aqua"] == 0 && $majorOSVersion > 10} {
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
LCb4qKbYgQAAAABJRU5ErkJggg==
"
	    tablelist_aqua_expandedImg put "
iVBORw0KGgoAAAANSUhEUgAAABEAAAAOCAYAAADJ7fe0AAAAiUlEQVQoz+2SsQkCQRREn3t9aO51
sKmZJtYhXDS5HUwzwtnCVqC5NmB+gZgui9wulwlO8vnMZ2b4/8MfJVaSHsB6ZuZpezMnEoChYjRU
kwBIGoH9F/5q+1ATCZnbVHBTSwqADiCl9IoxvoFdxp1tX5oWmzeSbsAWuNvuW68Tiv5U1GWQdPzd
j/0AfOEdPAaC2LoAAAAASUVORK5CYII=
"
	} else {
	    tablelist_aqua_collapsedImg put "
iVBORw0KGgoAAAANSUhEUgAAABEAAAAOCAYAAADJ7fe0AAAAe0lEQVQoz2NgGH6gra3tYVtbmx+5
+hmhhvyH8rcxMDDkVlVV3SPFECY0vhcDA8P1tra2KkpcggyuMTAwZFVVVR0k1SXIQIuBgeFAW1tb
ACWGXGNgYHCoqqraQMgQFixivxgYGBqrqqraiA0TdEPIih2YIY+gmjcN7RQPAIgqI+JZClM5AAAA
AElFTkSuQmCC
"
	    tablelist_aqua_expandedImg put "
iVBORw0KGgoAAAANSUhEUgAAABEAAAAOCAYAAADJ7fe0AAAAfklEQVQoz+2SsQ2DUAxEX/4gpCeb
hCZzRGKB62huI7IJlJGSMajSJAhZiP9Fh5RrLPusO1s2/BFxsv0Cqo2et6TzlkgC2oxRm50EwHYP
XFf4h6QmJ5IWblPgppIpZhFJT6ALXPetU7TOD7YHoAZGSZfS66SQ30PcB9u3437sB9yMGwQuEm+e
AAAAAElFTkSuQmCC
"
	}

	tablelist_aqua_collapsedSelImg put "
iVBORw0KGgoAAAANSUhEUgAAABEAAAAOCAYAAADJ7fe0AAAAR0lEQVQoz2NgGH7g////N////+9I
qSEwsOT///8SlBry/////5/+//+fRakhMHD6////ppQaAgPOA+YSisOEotihPJ0MCgAABqWnCWRA
sV8AAAAASUVORK5CYII=
"
	tablelist_aqua_expandedSelImg put "
iVBORw0KGgoAAAANSUhEUgAAABEAAAAOCAYAAADJ7fe0AAAAT0lEQVQoz2NgGAUY4P///zf/4wc3
iTHEkYAhjsS6ZgkOA5aQ4iWJ////f0Iz4NP///8lSA2bLDRDssgN5NNQA05TElOmUENMKY1y56Gb
YAGl/KcJzjuWxQAAAABJRU5ErkJggg==
"
    } else {
	if {$osVerPost10} {
	    tablelist_aqua_collapsedImg put "
R0lGODlhEQAOAMIGAAAAAHNzc3Z2doODg4qKipubm////////yH5BAEKAAcALAAAAAARAA4AAAMf
eLrc/jC+IV0Ipa4bhD7cRVQhJ5XjeXnalX3UJ89OAgA7
"
	    tablelist_aqua_expandedImg put "
R0lGODlhEQAOAMIGAAAAAHNzc3Z2doODg4qKipubm////////yH5BAEKAAcALAAAAAARAA4AAAMf
eLrc/jDKqUa4OIyYsSxdMQmYQB3eSQTEqQRuLM9HAgA7
"
	} else {
	    tablelist_aqua_collapsedImg put "
R0lGODlhEQAOAMIGAAAAAIaGhoiIiJSUlJmZmampqf///////yH5BAEKAAcALAAAAAARAA4AAAMf
eLrc/jC+IV0Ipa4bhD7cRVQhJ5XjeXnalX3UJ89OAgA7
"
	    tablelist_aqua_expandedImg put "
R0lGODlhEQAOAMIGAAAAAIaGhoiIiJSUlJmZmampqf///////yH5BAEKAAcALAAAAAARAA4AAAMf
eLrc/jDKqUa4OIyYsSxdMQmYQB3eSQTEqQRuLM9HAgA7
"
	}

	tablelist_aqua_collapsedSelImg put "
R0lGODlhEQAOAKEBAAAAAP///////////yH5BAEKAAAALAAAAAARAA4AAAIZhI+py73hVJjxTFrv
jXq3DjlaBXgZiaZLAQA7
"
	tablelist_aqua_expandedSelImg put "
R0lGODlhEQAOAKEBAAAAAP///////////yH5BAEKAAAALAAAAAARAA4AAAIXhI+py+1vgpyz0Wpv
eBcCDIGhR5ZmUgAAOw==
"
    }
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
iVBORw0KGgoAAAANSUhEUgAAAA4AAAAKCAYAAACE2W/HAAAAAXNSR0IArs4c6QAAAARnQU1BAACx
jwv8YQUAAAAJcEhZcwAADsMAAA7DAcdvqGQAAAAadEVYdFNvZnR3YXJlAFBhaW50Lk5FVCB2My41
LjEwMPRyoQAAAGxJREFUKFONj0EKgDAMBPcVIl69iV7FF3hR/P9v4kYqSWlKGxhINh1IISIfrIms
/9zCGmAmD9n9gxr5AGxJPnweUQadchyaXD07DBXWRW4yhPswBM4kjdFeKYMOSckHk8LzPNYAC9F/
NSURwQtLqlH7qKJBUAAAAABJRU5ErkJggg==
"
	tablelist_arc_expandedImg put "
iVBORw0KGgoAAAANSUhEUgAAAA4AAAAKCAYAAACE2W/HAAAAAXNSR0IArs4c6QAAAARnQU1BAACx
jwv8YQUAAAAJcEhZcwAADsMAAA7DAcdvqGQAAAAadEVYdFNvZnR3YXJlAFBhaW50Lk5FVCB2My41
LjEwMPRyoQAAAHRJREFUKFOdjUsKgDAMBbNwqzs/ZxHXFVG8/21i0iaaaECxMLSZl/IAEX8Ryi/w
aYkpChU6I+/dHDTESiQbmIUkee28hNzK4ezC8mkjButzdj4AOlnKzXzL3OuOxQ9X806ETcpTlOaF
CJuUWAJUkbeE8h2EA9B0S9ShJNYAAAAAAElFTkSuQmCC
"
	tablelist_arc_collapsedSelImg put "
iVBORw0KGgoAAAANSUhEUgAAAA4AAAAKCAYAAACE2W/HAAAAAXNSR0IArs4c6QAAAARnQU1BAACx
jwv8YQUAAAAJcEhZcwAADsMAAA7DAcdvqGQAAAAadEVYdFNvZnR3YXJlAFBhaW50Lk5FVCB2My41
LjEwMPRyoQAAAGdJREFUKFON0cEJgDAQRNH0YgfixSIsQgTLsBQbEC82OJmFRMa4xhzeYT/MaQOA
bKRZ7io9Jrpok/apDAs1jb3YNHYjrVQduzE56KRO2u0Vkp1sNEh78OLvyJQhj3ppLj3s+U0jACEC
E06wdZnzTFcAAAAASUVORK5CYII=
"
	tablelist_arc_expandedSelImg put "
iVBORw0KGgoAAAANSUhEUgAAAA4AAAAKCAYAAACE2W/HAAAAAXNSR0IArs4c6QAAAARnQU1BAACx
jwv8YQUAAAAJcEhZcwAADsMAAA7DAcdvqGQAAAAadEVYdFNvZnR3YXJlAFBhaW50Lk5FVCB2My41
LjEwMPRyoQAAAHBJREFUKFOdzsEJgDAQRNHc7ELsQAQ7FCxD8OJFvNjgOiNu2IQBxcML5Ou6JjP7
RcYvePQwxyhMwPdy49HBAavHygJ83oaWf5Vf26Ee9qExtFu8cDhu9qHhuRfq4JtPkJucihzeQG5y
MkIjWkHGd5YueOiwF1W1TAUAAAAASUVORK5CYII=
"
	tablelist_arc_collapsedActImg put "
iVBORw0KGgoAAAANSUhEUgAAAA4AAAAKCAYAAACE2W/HAAAAAXNSR0IArs4c6QAAAARnQU1BAACx
jwv8YQUAAAAJcEhZcwAADsMAAA7DAcdvqGQAAAAadEVYdFNvZnR3YXJlAFBhaW50Lk5FVCB2My41
LjEwMPRyoQAAAHNJREFUKFONz10KgCAQBOA5SheInnvvCkEdIuggPRdBd91m+2EVV1T4wB0dUIjI
g6un6Z9LbAMMdNESXsiJB2D+ymuYe9KgsuyHVs4+2w0V104HNe65GwIbndR55yoNKkoqHt6SPq8N
c49tgJH0X8WSiOAGGZpYKjZmcSEAAAAASUVORK5CYII=
"
	tablelist_arc_expandedActImg put "
iVBORw0KGgoAAAANSUhEUgAAAA4AAAAKCAYAAACE2W/HAAAAAXNSR0IArs4c6QAAAARnQU1BAACx
jwv8YQUAAAAJcEhZcwAADsMAAA7DAcdvqGQAAAAadEVYdFNvZnR3YXJlAFBhaW50Lk5FVCB2My41
LjEwMPRyoQAAAHRJREFUKFOdjUsKgDAMRLP0DHoDRTycCy+hLtxIwbvG6Sc21YBi4EH7JkOImX9h
yi/4acFkhQJm9Hs3Rw3YwaIDtTCnvC58CrsUrkUYSw4M2ofseuRyuIyRS73saMpPLh/AvCQ8RSxv
wLwk2JKosrzGlO8wnchaUd6BhPzVAAAAAElFTkSuQmCC
"
	tablelist_arc_collapsedSelActImg put "
iVBORw0KGgoAAAANSUhEUgAAAA4AAAAKCAYAAACE2W/HAAAAAXNSR0IArs4c6QAAAARnQU1BAACx
jwv8YQUAAAAJcEhZcwAADsMAAA7DAcdvqGQAAAAadEVYdFNvZnR3YXJlAFBhaW50Lk5FVCB2My41
LjEwMPRyoQAAAG5JREFUKFONz8EJgDAQRNF0ZQtevNiIhYggVuLFjmxB8LbOQiKTOBoX3mG/LJhg
ZkkPE+2feBnAZwXuUhlm8Nmg/JZR8dexjLCAz+tvyxgdcEJD7fYI0Q5+1FHLqFg9cmVIRy01iZcR
/F3VIzMLF8edtpTOwib0AAAAAElFTkSuQmCC
"
	tablelist_arc_expandedSelActImg put "
iVBORw0KGgoAAAANSUhEUgAAAA4AAAAKCAYAAACE2W/HAAAAAXNSR0IArs4c6QAAAARnQU1BAACx
jwv8YQUAAAAJcEhZcwAADsMAAA7DAcdvqGQAAAAadEVYdFNvZnR3YXJlAFBhaW50Lk5FVCB2My41
LjEwMPRyoQAAAHJJREFUKFOdzsEJgDAQRNEUYCWCVYjgxY692It49CYIHtYZcWUTBhSFF8iXZZPM
7BcZv+DRwRSjMEIbG48Gdlg8Fmbg/zq056ncukE5zKEDhtAu8cLhuNk39fc9UwbfzE9ucipyeAW5
yckIlWgZGd9ZOgFo1rYdzDp3awAAAABJRU5ErkJggg==
"
    } else {
	tablelist_arc_collapsedImg put "
R0lGODlhDgAKAOMKAAAAALGxsbOzs7S0tLm5ucfHx8nJydPT09XV1eXl5f//////////////////
/////yH5BAEKAA8ALAAAAAAOAAoAAAQc8L10pL03GMxlKB33hZhGWoNwPoR6tit8IsMZAQA7
"
	tablelist_arc_expandedImg put "
R0lGODlhDgAKAOMJAAAAALGxsbOzs7S0tLa2tri4uLm5ucPDw8XFxf//////////////////////
/////yH5BAEKAA8ALAAAAAAOAAoAAAQd8MlJq73vXFSHqcZgDcVkCJjwnZg0BGgrEXJtTxEAOw==
"
	tablelist_arc_collapsedSelImg put "
R0lGODlhDgAKAKECAAAAAMzMzP///////yH5BAEKAAAALAAAAAAOAAoAAAIUBBKmu8hvHGRyqmox
1I/TZB3gVAAAOw==
"
	tablelist_arc_expandedSelImg put "
R0lGODlhDgAKAKECAAAAAMzMzP///////yH5BAEKAAAALAAAAAAOAAoAAAIUhI+pC7GOAjxSVXOt
y4+zyYSiUgAAOw==
"
	tablelist_arc_collapsedActImg put "
R0lGODlhDgAKAOMLAAAAAGNjY2ZmZmhoaGlpaXNzc4+Pj5KSkqenp6qqqsbGxv//////////////
/////yH5BAEKAA8ALAAAAAAOAAoAAAQc8D2FpL03HMxlMB33hZhGWsRwPoWwtq96JsQZAQA7
"
	tablelist_arc_expandedActImg put "
R0lGODlhDgAKAOMKAAAAAGNjY2ZmZmhoaG1tbXFxcXJycnNzc4iIiIyMjP//////////////////
/////yH5BAEKAA8ALAAAAAAOAAoAAAQd8MlJq70P3VSHqcdgDcV0CJj3hJg0BGgrEXJtTxEAOw==
"
	tablelist_arc_collapsedSelActImg put "
R0lGODlhDgAKAKEBAAAAAP///////////yH5BAEKAAAALAAAAAAOAAoAAAIUBBKmu8hvHGRyqmox
1I/TZB3gVAAAOw==
"
	tablelist_arc_expandedSelActImg put "
R0lGODlhDgAKAKEBAAAAAP///////////yH5BAEKAAAALAAAAAAOAAoAAAIUhI+pC7GOAjxSVXOt
y4+zyYSiUgAAOw==
"
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
R0lGODlhDQAIAIABAAAAAP///yH5BAEKAAEALAAAAAANAAgAAAIQjI8JyQHbzoNxUjajeXr3AgA7
"
    tablelist_baghira_expandedImg put "
R0lGODlhDQAIAIABAAAAAP///yH5BAEKAAEALAAAAAANAAgAAAIOjI+pywcPwYqSwWYqxgUAOw==
"
}

#------------------------------------------------------------------------------
# tablelist::bicolor1TreeImgs
#------------------------------------------------------------------------------
proc tablelist::bicolor1TreeImgs {} {
    foreach mode {collapsed expanded collapsedSel expandedSel} {
	variable bicolor1_${mode}Img \
		 [image create photo tablelist_bicolor1_${mode}Img]
    }

    variable pngSupported
    if {$pngSupported} {
	tablelist_bicolor1_collapsedImg put "
iVBORw0KGgoAAAANSUhEUgAAAAwAAAAKCAYAAACALL/6AAAABmJLR0QA/wD/AP+gvaeTAAAACXBI
WXMAAAsTAAALEwEAmpwYAAAAB3RJTUUH4AUKEwYtcCg47AAAACpJREFUGNNjYKAA1BOjiIlUTUyk
2sREqvOYSPUTPg2NpGhoJMVJjVSNBwD8+gSMwdvvHwAAAABJRU5ErkJggg==
"
	tablelist_bicolor1_expandedImg put "
iVBORw0KGgoAAAANSUhEUgAAAAwAAAAKCAYAAACALL/6AAAABmJLR0QA/wD/AP+gvaeTAAAACXBI
WXMAAAsTAAALEwEAmpwYAAAAB3RJTUUH4AUKEwkTNtE5iAAAAC9JREFUGNNjYBh0gJGBgaGeCHWN
yBoYCGhqRLeBAY+mRmxOYsChqZFYf9UPbLACACL9BIS+a6kZAAAAAElFTkSuQmCC
"
    } else {
	tablelist_bicolor1_collapsedImg put "
R0lGODlhDAAKAIABAH9/f////yH5BAEKAAEALAAAAAAMAAoAAAIUjI8IybB83INypmqjhGFzxxkZ
UgAAOw==
"
	tablelist_bicolor1_expandedImg put "
R0lGODlhDAAKAIABAH9/f////yH5BAEKAAEALAAAAAAMAAoAAAIQjI+py+D/EIxpNscMyLyHAgA7
"
    }

    tablelist_bicolor1_collapsedSelImg put "
R0lGODlhDAAKAIAAAP///////yH5BAEKAAEALAAAAAAMAAoAAAIUjI8IybB83INypmqjhGFzxxkZ
UgAAOw==
"
    tablelist_bicolor1_expandedSelImg put "
R0lGODlhDAAKAIAAAP///////yH5BAEKAAEALAAAAAAMAAoAAAIQjI+py+D/EIxpNscMyLyHAgA7
"
}

#------------------------------------------------------------------------------
# tablelist::bicolor2TreeImgs
#------------------------------------------------------------------------------
proc tablelist::bicolor2TreeImgs {} {
    foreach mode {collapsed expanded collapsedSel expandedSel} {
	variable bicolor2_${mode}Img \
		 [image create photo tablelist_bicolor2_${mode}Img]
    }

    variable pngSupported
    if {$pngSupported} {
	tablelist_bicolor2_collapsedImg put "
iVBORw0KGgoAAAANSUhEUgAAAA4AAAAMCAYAAABSgIzaAAAABmJLR0QA/wD/AP+gvaeTAAAACXBI
WXMAAAsTAAALEwEAmpwYAAAAB3RJTUUH4AUKEwwFv3J4nAAAADJJREFUKM9jYKASaCJWIRO5mpnI
tZmJXGczketnJnIDjBiNdeRorCPHqXXkBE4dzVIOAPKWBZkKDbb3AAAAAElFTkSuQmCC
"
	tablelist_bicolor2_expandedImg put "
iVBORw0KGgoAAAANSUhEUgAAAA4AAAAMCAYAAABSgIzaAAAABmJLR0QA/wD/AP+gvaeTAAAACXBI
WXMAAAsTAAALEwEAmpwYAAAAB3RJTUUH4AUKEw4I8/VmowAAADZJREFUKM9jYBgygJGBgaGeBPWN
yBoZiNTciG4jAxGaG7E5lYGA5kZcfmTAo7mR1ECrZxg+AAC4iAWFJSdDXQAAAABJRU5ErkJggg==
"
    } else {
	tablelist_bicolor2_collapsedImg put "
R0lGODlhDgAMAIABAH9/f////yH5BAEKAAEALAAAAAAOAAwAAAIXjI9poA3c0IMxTOpuvS/yPVVW
J5KlWAAAOw==
"
	tablelist_bicolor2_expandedImg put "
R0lGODlhDgAMAIABAH9/f////yH5BAEKAAEALAAAAAAOAAwAAAIUjI+pywoPI0AyuspkC3Cb6YWi
WAAAOw==
"
    }

    tablelist_bicolor2_collapsedSelImg put "
R0lGODlhDgAMAIAAAP///////yH5BAEKAAEALAAAAAAOAAwAAAIXjI9poA3c0IMxTOpuvS/yPVVW
J5KlWAAAOw==
"
    tablelist_bicolor2_expandedSelImg put "
R0lGODlhDgAMAIAAAP///////yH5BAEKAAEALAAAAAAOAAwAAAIUjI+pywoPI0AyuspkC3Cb6YWi
WAAAOw==
"
}

#------------------------------------------------------------------------------
# tablelist::bicolor3TreeImgs
#------------------------------------------------------------------------------
proc tablelist::bicolor3TreeImgs {} {
    foreach mode {collapsed expanded collapsedSel expandedSel} {
	variable bicolor3_${mode}Img \
		 [image create photo tablelist_bicolor3_${mode}Img]
    }

    variable pngSupported
    if {$pngSupported} {
	tablelist_bicolor3_collapsedImg put "
iVBORw0KGgoAAAANSUhEUgAAABEAAAAOCAYAAADJ7fe0AAAABmJLR0QA/wD/AP+gvaeTAAAACXBI
WXMAAAsTAAALEwEAmpwYAAAAB3RJTUUH4AUKExAQNNjBKgAAADtJREFUKM9jYKABqCdHExM1DGKi
houYqOE1JmqEERM1ApuJGrFGrCGNlBrSSKl3GikN2EZKo7iR7nkHAKniBpTspddsAAAAAElFTkSu
QmCC
"
	tablelist_bicolor3_expandedImg put "
iVBORw0KGgoAAAANSUhEUgAAABEAAAAOCAYAAADJ7fe0AAAABmJLR0QA/wD/AP+gvaeTAAAACXBI
WXMAAAsTAAALEwEAmpwYAAAAB3RJTUUH4AUKExIRcemTPgAAAD5JREFUKM/t0jsOACAIRMHnycne
3J6IgJa6PRN+8OMzADuok0doQlp1QgNSNA5FSLudUICULZYE0s3l7NGPnffUBoaD5FpzAAAAAElF
TkSuQmCC
"
    } else {
	tablelist_bicolor3_collapsedImg put "
R0lGODlhEQAOAIABAH9/f////yH5BAEKAAEALAAAAAARAA4AAAIdjI+ZoH3AnIJRPmovznTL7jVg
5YBZ0J0opK4tqhYAOw==
"
	tablelist_bicolor3_expandedImg put "
R0lGODlhEQAOAIABAH9/f////yH5BAEKAAEALAAAAAARAA4AAAIYjI+py+1vgJx0pooXtmy/CgVc
CITmiR4FADs=
"
    }

    tablelist_bicolor3_collapsedSelImg put "
R0lGODlhEQAOAIAAAP///////yH5BAEKAAEALAAAAAARAA4AAAIdjI+ZoH3AnIJRPmovznTL7jVg
5YBZ0J0opK4tqhYAOw==
"
    tablelist_bicolor3_expandedSelImg put "
R0lGODlhEQAOAIAAAP///////yH5BAEKAAEALAAAAAARAA4AAAIYjI+py+1vgJx0pooXtmy/CgVc
CITmiR4FADs=
"
}

#------------------------------------------------------------------------------
# tablelist::bicolor4TreeImgs
#------------------------------------------------------------------------------
proc tablelist::bicolor4TreeImgs {} {
    foreach mode {collapsed expanded collapsedSel expandedSel} {
	variable bicolor4_${mode}Img \
		 [image create photo tablelist_bicolor4_${mode}Img]
    }

    variable pngSupported
    if {$pngSupported} {
	tablelist_bicolor4_collapsedImg put "
iVBORw0KGgoAAAANSUhEUgAAABcAAAASCAYAAACw50UTAAAABmJLR0QA/wD/AP+gvaeTAAAACXBI
WXMAAAsTAAALEwEAmpwYAAAAB3RJTUUH4AUKExUCuhZEJwAAAEdJREFUOMu91IsNACAIQ0HSxU03
dwf1ZIBH6IeZz7NegSIXRF4QKVGkB5EmR6YoMqaRPTiBV8GrZKkytCqKVSWqqv8VmP/zDd6/CJzv
kRcqAAAAAElFTkSuQmCC
"
	tablelist_bicolor4_expandedImg put "
iVBORw0KGgoAAAANSUhEUgAAABcAAAASCAYAAACw50UTAAAABmJLR0QA/wD/AP+gvaeTAAAACXBI
WXMAAAsTAAALEwEAmpwYAAAAB3RJTUUH4AUKExY6uTmvegAAAExJREFUOMvtlNsNACAIA8/JSTd3
ApWHfmjsAD1SCvD1lBpgG3w0MqcI0GxyCgCtYiEJkCdzEgB5F0oQoEhbCAAUrSJOgE7cgv13cI86
Y04IiOwcRtoAAAAASUVORK5CYII=
"
    } else {
	tablelist_bicolor4_collapsedImg put "
R0lGODlhFwASAIABAH9/f////yH5BAEKAAEALAAAAAAXABIAAAIojI+pCusL2pshSgotznoj23kV
GIkjeWFoSK1pi5qxDJpGbZ/5/cp5AQA7
"
	tablelist_bicolor4_expandedImg put "
R0lGODlhFwASAIABAH9/f////yH5BAEKAAEALAAAAAAXABIAAAIijI+py+0Po3Sg2ovrylyzjj2g
J3YTNxlhqpJsALzyTNdKAQA7
"
    }

    tablelist_bicolor4_collapsedSelImg put "
R0lGODlhFwASAIAAAP///////yH5BAEKAAEALAAAAAAXABIAAAIojI+pCusL2pshSgotznoj23kV
GIkjeWFoSK1pi5qxDJpGbZ/5/cp5AQA7
"
    tablelist_bicolor4_expandedSelImg put "
R0lGODlhFwASAIAAAP///////yH5BAEKAAEALAAAAAAXABIAAAIijI+py+0Po3Sg2ovrylyzjj2g
J3YTNxlhqpJsALzyTNdKAQA7
"
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
iVBORw0KGgoAAAANSUhEUgAAAAoAAAAKCAYAAACNMs+9AAAAAXNSR0IArs4c6QAAAARnQU1BAACx
jwv8YQUAAAAJcEhZcwAADsMAAA7DAcdvqGQAAAAadEVYdFNvZnR3YXJlAFBhaW50Lk5FVCB2My41
LjEwMPRyoQAAAEJJREFUKFNj+P//P1EYwWBgEEeWQMcIBgNDMhBnIksiYwQDovASLsUIBkIhVsW4
FIKwGTEKiTKRKDcS5Ws84fifAQDpge0RK469/gAAAABJRU5ErkJggg==
"
	tablelist_blueMenta_expandedImg put "
iVBORw0KGgoAAAANSUhEUgAAAAoAAAAKCAYAAACNMs+9AAAAAXNSR0IArs4c6QAAAARnQU1BAACx
jwv8YQUAAAAJcEhZcwAADsMAAA7DAcdvqGQAAAAadEVYdFNvZnR3YXJlAFBhaW50Lk5FVCB2My41
LjEwMPRyoQAAAEtJREFUKFONjNEJACAIBZ3EKRqqvtq1hcwkDPMRBQd5HpKIfAElAkrEeqz0B2zh
rqsyAM0v+ifHHoXQhhOHyHZJEJXbmUcSAWVGaALoU+1uRfEIrwAAAABJRU5ErkJggg==
"
	tablelist_blueMenta_collapsedSelImg put "
iVBORw0KGgoAAAANSUhEUgAAAAoAAAAKCAYAAACNMs+9AAAAAXNSR0IArs4c6QAAAARnQU1BAACx
jwv8YQUAAAAJcEhZcwAADsMAAA7DAcdvqGQAAAAadEVYdFNvZnR3YXJlAFBhaW50Lk5FVCB2My41
LjEwMPRyoQAAAENJREFUKFNj+P//P1EYmSODxMbAyJwKIG5A4qNgZA5IIQhgVYzMgSkEAQzFyBxk
hSDgCMQEFRJlIlFuJMrXeMLxPwMAd106nOlvcTEAAAAASUVORK5CYII=
"
	tablelist_blueMenta_expandedSelImg put "
iVBORw0KGgoAAAANSUhEUgAAAAoAAAAKCAYAAACNMs+9AAAAAXNSR0IArs4c6QAAAARnQU1BAACx
jwv8YQUAAAAJcEhZcwAADsMAAA7DAcdvqGQAAAAadEVYdFNvZnR3YXJlAFBhaW50Lk5FVCB2My41
LjEwMPRyoQAAAElJREFUKFNj+P//P1EYqyA2jFUQGwYRykDcjgeD5OEm1gIxNtAAxHATcSmGKwJh
ZIUgDFOMogiEUThQbI9FDKtCrBirICb+zwAAb6M7CAs6hmIAAAAASUVORK5CYII=
"
	tablelist_blueMenta_collapsedActImg put "
iVBORw0KGgoAAAANSUhEUgAAAAoAAAAKCAYAAACNMs+9AAAAAXNSR0IArs4c6QAAAARnQU1BAACx
jwv8YQUAAAAJcEhZcwAADsMAAA7DAcdvqGQAAAAadEVYdFNvZnR3YXJlAFBhaW50Lk5FVCB2My41
LjEwMPRyoQAAAEJJREFUKFNj+P//P1EYwWBgEEeWQMcIBgNDMhBnIksiYwQDovASLsUIBkIhVsW4
FIKwGTEKiTKRKDcS5Ws84fifAQDpge0RK469/gAAAABJRU5ErkJggg==
"
	tablelist_blueMenta_expandedActImg put "
iVBORw0KGgoAAAANSUhEUgAAAAoAAAAKCAYAAACNMs+9AAAAAXNSR0IArs4c6QAAAARnQU1BAACx
jwv8YQUAAAAJcEhZcwAADsMAAA7DAcdvqGQAAAAadEVYdFNvZnR3YXJlAFBhaW50Lk5FVCB2My41
LjEwMPRyoQAAAEtJREFUKFONjNEJACAIBZ3EKRqqvtq1hcwkDPMRBQd5HpKIfAElAkrEeqz0B2zh
rqsyAM0v+ifHHoXQhhOHyHZJEJXbmUcSAWVGaALoU+1uRfEIrwAAAABJRU5ErkJggg==
"
	tablelist_blueMenta_collapsedSelActImg put "
iVBORw0KGgoAAAANSUhEUgAAAAoAAAAKCAYAAACNMs+9AAAAAXNSR0IArs4c6QAAAARnQU1BAACx
jwv8YQUAAAAJcEhZcwAADsMAAA7DAcdvqGQAAAAadEVYdFNvZnR3YXJlAFBhaW50Lk5FVCB2My41
LjEwMPRyoQAAAEJJREFUKFNj+P//P1EYwWBgEEeWQMcIBgNDMhBnIksiYwQDovASLsUIBkIhVsW4
FIKwGTEKiTKRKDcS5Ws84fifAQDpge0RK469/gAAAABJRU5ErkJggg==
"
	tablelist_blueMenta_expandedSelActImg put "
iVBORw0KGgoAAAANSUhEUgAAAAoAAAAKCAYAAACNMs+9AAAAAXNSR0IArs4c6QAAAARnQU1BAACx
jwv8YQUAAAAJcEhZcwAADsMAAA7DAcdvqGQAAAAadEVYdFNvZnR3YXJlAFBhaW50Lk5FVCB2My41
LjEwMPRyoQAAAEtJREFUKFONjNEJACAIBZ3EKRqqvtq1hcwkDPMRBQd5HpKIfAElAkrEeqz0B2zh
rqsyAM0v+ifHHoXQhhOHyHZJEJXbmUcSAWVGaALoU+1uRfEIrwAAAABJRU5ErkJggg==
"
    } else {
	tablelist_blueMenta_collapsedImg put "
R0lGODlhCgAKAMIFAAAAAC0tLZaWlpycnMnJyf///////////yH5BAEKAAcALAAAAAAKAAoAAAMU
eLrcfkM8GKQbod4cSMPaF37W5CQAOw==
"
	tablelist_blueMenta_expandedImg put "
R0lGODlhCgAKAKEDAAAAAC0tLZCQkP///yH5BAEKAAMALAAAAAAKAAoAAAIPnI+pe+IvUJhTURaY
3qwAADs=
"
	tablelist_blueMenta_collapsedSelImg put "
R0lGODlhCgAKAKEBAAAAAP///////////yH5BAEKAAAALAAAAAAKAAoAAAIQhI+pELHcVotp0mPV
lO6tAgA7
"
	tablelist_blueMenta_expandedSelImg put "
R0lGODlhCgAKAKEBAAAAAP///////////yH5BAEKAAAALAAAAAAKAAoAAAIOhI+pe+EfEIzpMcqy
VgUAOw==
"
	tablelist_blueMenta_collapsedActImg put "
R0lGODlhCgAKAMIFAAAAAC0tLZaWlpycnMnJyf///////////yH5BAEKAAcALAAAAAAKAAoAAAMU
eLrcfkM8GKQbod4cSMPaF37W5CQAOw==
"
	tablelist_blueMenta_expandedActImg put "
R0lGODlhCgAKAKEDAAAAAC0tLZCQkP///yH5BAEKAAMALAAAAAAKAAoAAAIPnI+pe+IvUJhTURaY
3qwAADs=
"
	tablelist_blueMenta_collapsedSelActImg put "
R0lGODlhCgAKAMIFAAAAAC0tLZaWlpycnMnJyf///////////yH5BAEKAAcALAAAAAAKAAoAAAMU
eLrcfkM8GKQbod4cSMPaF37W5CQAOw==
"
	tablelist_blueMenta_expandedSelActImg put "
R0lGODlhCgAKAKEDAAAAAC0tLZCQkP///yH5BAEKAAMALAAAAAAKAAoAAAIPnI+pe+IvUJhTURaY
3qwAADs=
"
    }
}

#------------------------------------------------------------------------------
# tablelist::classic1TreeImgs
#------------------------------------------------------------------------------
proc tablelist::classic1TreeImgs {} {
    foreach mode {collapsed expanded} {
	variable classic1_${mode}Img \
		 [image create photo tablelist_classic1_${mode}Img]
    }

    tablelist_classic1_collapsedImg put "
R0lGODlhDAAKAKECAAAAAICAgP///////yH5BAEKAAMALAAAAAAMAAoAAAIgnI8Xy4EhohTOwAhk
HVfkuEHAOFKK9JkWqp0T+DQLUgAAOw==
"
    tablelist_classic1_expandedImg put "
R0lGODlhDAAKAKECAAAAAICAgP///////yH5BAEKAAMALAAAAAAMAAoAAAIcnI8Xy4EhohTOwBnr
uFhDAIKUgmVk6ZWj0ixIAQA7
"
}

#------------------------------------------------------------------------------
# tablelist::classic2TreeImgs
#------------------------------------------------------------------------------
proc tablelist::classic2TreeImgs {} {
    foreach mode {collapsed expanded} {
	variable classic2_${mode}Img \
		 [image create photo tablelist_classic2_${mode}Img]
    }

    tablelist_classic2_collapsedImg put "
R0lGODlhDgAMAKECAAAAAICAgP///////yH5BAEKAAMALAAAAAAOAAwAAAInnI8Zy4whopThQAlm
NTdmak1ftA0QgKZZ2QmjwIpaiM3chJdm0yAFADs=
"
    tablelist_classic2_expandedImg put "
R0lGODlhDgAMAKECAAAAAICAgP///////yH5BAEKAAMALAAAAAAOAAwAAAIinI8Zy4whopThwDmr
uTjqwXUfBJQmIIwdZa1e66rx0zRIAQA7
"
}

#------------------------------------------------------------------------------
# tablelist::classic3TreeImgs
#------------------------------------------------------------------------------
proc tablelist::classic3TreeImgs {} {
    foreach mode {collapsed expanded} {
	variable classic3_${mode}Img \
		 [image create photo tablelist_classic3_${mode}Img]
    }

    tablelist_classic3_collapsedImg put "
R0lGODlhEQAOAKECAAAAAICAgP///////yH5BAEKAAMALAAAAAARAA4AAAIwnI95we2Rgpi0Cris
xkZWYHGDR4GVSE4mharAC0/tFyKpsMq2lV+7dvoBdbbHI1EAADs=
"
    tablelist_classic3_expandedImg put "
R0lGODlhEQAOAKECAAAAAICAgP///////yH5BAEKAAMALAAAAAARAA4AAAIrnI95we2Rgpi0Cris
xkbqyg3eN4UjaU7AygIlcn4p+Wb0Bd+4TYfi80gUAAA7
"
}

#------------------------------------------------------------------------------
# tablelist::classic4TreeImgs
#------------------------------------------------------------------------------
proc tablelist::classic4TreeImgs {} {
    foreach mode {collapsed expanded} {
	variable classic4_${mode}Img \
		 [image create photo tablelist_classic4_${mode}Img]
    }

    tablelist_classic4_collapsedImg put "
R0lGODlhFwASAKECAAAAAICAgP///////yH5BAEKAAMALAAAAAAXABIAAAJGXI6pMe0hopxUMGeq
lvdpAGhdA1WgiGVmWI0qdbZpCbOUW4L6rkd4xAuyfisUhjaJ3WYf24RYM3qKsuNmA70+U4aF98At
AAA7
"
    tablelist_classic4_expandedImg put "
R0lGODlhFwASAKECAAAAAICAgP///////yH5BAEKAAMALAAAAAAXABIAAAI9XI6pMe0hopxUMGeq
lvft3TXQV4UZSZkjymEnG6kRQNc2HbvjzQM5toLJYD8P0aI7IoHKIdEpdBkW1IO0AAA7
"
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
qB68ucAevsCwvMNvIRHLzM0RIZsDHhDOzRAebkIHCiAi3t/fHwkIR0lMTAMFREEAOw==
"
    tablelist_dust_expandedImg put "
R0lGODlhEgAQAKU0AAAAADIyMrConLGpncS+tcS/tsbBuMfBucfCucfCutfTzdjUztnUz9vWztvW
z9vX0NzW0N3Y0d/a0t/a0+Dd1uHe1+Lf2OPg2uTh2+Xj3efk3+jl4Ojm4enm4unn4+vo5Ovo5evp
5uvq5ezp5e3q5u3q5+7s6O/t6e7t6vDu6/Hv7PLv7fLw7PHw7fLx7vX08vf39fj39fn49vn49///
/////////////////////////////////////////////yH5BAEKAD8ALAAAAAASABAAAAagwJ9w
SCwSCQOBcrkcEIiGxQsWk82ushjspUAMBy2S6ZRSsVSpk0nkGgwFq85nRCrZSaNPZyV4ozAZGhsc
hBsaGRgofUICJRQVFhcXGJIWFRQliz8CIBGeERITEp8RIJoCHQsQAaytAQ4OHacdsA4NsAy1sace
ur6wHry/vsFvHxDIycoQH5oDHw/Lyg8fbkIHDCEg29zdCwlHSUxMAwVEQQA7
"
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
tbasv7KoHcGwvx2oHgvLzM0LHpsDJc7UJG1CBxgoINzd3ScYCEQFSUxMAwVEQQA7
"
    tablelist_dustSand_expandedImg put "
R0lGODlhEgAQAKU3AAAAADIyMpuWjJyXjrSxqbWxqre0rbi1rrm2r8K+tsO+t8TAuMXBusbCu8bC
vMnFvcnGvsrHv8vHwMnGwcrIwczIwMzIwc3Jw87LxMzKxc/Mxc/MxtDMxdDMx9HOx9HOyNLPydPP
ytPQydPQy9TRy9TRzNXTzNXSzdfTztbUzNbUzdfVz9nV0NjW0NnW0drY097c2eDe2eXi3uXj3+jm
4+nn5Oro5f///////////////////////////////////yH5BAEKAD8ALAAAAAASABAAAAagwJ9w
SCwSCQOBcrkcEIgGioxGq9VsVupschgOYqcTitVytVioUyk2GApgnU+IVKqTQp8OTOB+WS4YGhwb
HBoYFxYvfEICKw8QERIVFhUSERAPK4s/AiMMnwwNDg2gDCObAh4JCgGtrgEKCh6oHrGxCbi2srS6
vbGzbh++vR+oIAvIycoLIJsDJ8vRJm1CBxkqItna2ikZCEQFSUxMAwVEQQA7
"
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
k0/IBbP6VlQP0oOsAAAAAElFTkSuQmCC
"
	tablelist_gtk_expandedImg put "
iVBORw0KGgoAAAANSUhEUgAAABIAAAAOCAYAAAAi2ky3AAAAW0lEQVQoz+3SwQmAQAxE0fHqKTVM
HWt7aWwsKB3Ek4IQYXVBEPzXkJdLgL/XmgA0M1PvQkQsANareSOZkrJKUpJMAK3nWIndRUrsKXLC
3H0IOTAzG0b25m8/5Aai703YBhwgYAAAAABJRU5ErkJggg==
"
	tablelist_gtk_collapsedActImg put "
iVBORw0KGgoAAAANSUhEUgAAABIAAAAOCAYAAAAi2ky3AAAAa0lEQVQoz7XSMQqAMAyF4d9OAZeM
OYyeXg/TMZN0qwdQKyltxjz4CI/AxNmGKKpah2CqWs0sjKW3ZSkFMzsiWPoKolhqhRFs+Sj7Me6+
AlfXRQAigrvvLeQXEhFyzjtwdncUQYb+0bzP7kVuCWMmCi7K2XoAAAAASUVORK5CYII=
"
	tablelist_gtk_expandedActImg put "
iVBORw0KGgoAAAANSUhEUgAAABIAAAAOCAYAAAAi2ky3AAAAXUlEQVQoz2NgGAV0A4wMDAyZAgIC
04jV8OHDhywGBobp6OLMDAwMZ378+PGKg4PDm1xDYAYxEGMYPkOwgUwBAYH/6JiBgSGTnHCDG6ak
pES2ISiGUWoIDIgM7QQJACRKJBMon0pJAAAAAElFTkSuQmCC
"
    } else {
	tablelist_gtk_collapsedImg put "
R0lGODlhEgAOAMIFAAAAABAQECIiIoaGhsPDw////////////yH5BAEKAAcALAAAAAASAA4AAAMi
eLrc/pCFCIOgLpCLVyhbp3wgh5HFMJ1FKX7hG7/mK95MAgA7
"
	tablelist_gtk_expandedImg put "
R0lGODlhEgAOAMIFAAAAABAQECIiIoaGhsPDw////////////yH5BAEKAAcALAAAAAASAA4AAAMg
eLrc/jDKSWu4OAcoSPkfIUgdKFLlWQnDWCnbK8+0kgAAOw==
"
	tablelist_gtk_collapsedActImg put "
R0lGODlhEgAOAKEDAAAAABAQEBgYGP///yH5BAEKAAMALAAAAAASAA4AAAIdnI+pyxjNgoAqSOrs
xMNq7nlYuFFeaV5ch47raxQAOw==
"
	tablelist_gtk_expandedActImg put "
R0lGODlhEgAOAKEDAAAAABAQECIiIv///yH5BAEKAAMALAAAAAASAA4AAAIYnI+py+0PY5i0Bmar
y/fZOEwCaHTkiZIFADs=
"
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
R0lGODlhDQAIAIABAAAAAP///yH5BAEKAAEALAAAAAANAAgAAAIPjI8IkL3c1IoSxkcDzjMXADs=
"
    tablelist_klearlooks_expandedImg put "
R0lGODlhDQAIAIABAAAAAP///yH5BAEKAAEALAAAAAANAAgAAAIRjI+pCXCtmpNLwhUoNm57UwAA
Ow==
"
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
RU5ErkJggg==
"
	tablelist_mate_expandedImg put "
iVBORw0KGgoAAAANSUhEUgAAAAwAAAAOCAYAAAAbvf3sAAAAf0lEQVQoz9XRMQrCYAyG4ccWtdC1
8l/B1at4Cg/iIXqBTr2BOLq4dnEQXJxcnHR3iVBKh64NhDd84UsgYf6xQEKNcqT/xQGvv5CHuMQG
VzwiC5xw6U/IgmesUIW5whrtcGUe/OCOPd7Y4ojn0JD16g437ILdlCMkNMHJkWb26R+bgxLSbl4O
9wAAAABJRU5ErkJggg==
"
	tablelist_mate_collapsedActImg put "
iVBORw0KGgoAAAANSUhEUgAAAAwAAAAOCAYAAAAbvf3sAAAAdElEQVQoz83RsQ2CUBQF0AORhoZO
XcHEbZjDECYxhDlMXMDOERxC6WxsbGgwMQTjp/gJt3mveKe4eSw227ngijbkMB3mGztcUIYAeOCF
Gmfs/wED6FCgmeo2BjnWeKLCfQxWX/sGCY44/erwARluOET7Q7z0AZUOkqtBUcIAAAAASUVORK5C
YII=
"
	tablelist_mate_expandedActImg put "
iVBORw0KGgoAAAANSUhEUgAAAAwAAAAOCAYAAAAbvf3sAAAAa0lEQVQoz9XRQQqDUAwE0Ke1Z/A2
f+mid/B0nsCFm55I8QBuWnCTDx/BYpcOhGRgYJIJ90eFFsMPTY8lkzrIHHwrCtZSnB0y3vjigwYP
dEe7upjHEFXRx7MbSkx4hsvrSggpVkv/JNfe7NM710YQSDbaCJ8AAAAASUVORK5CYII=
"
    } else {
	tablelist_mate_collapsedImg put "
R0lGODlhDAAOAOMOAAAAAEBAQEdHR0tLS0xMTFRUVFZWVlxcXG9vb3d3d3p6en9/f4aGhpubm///
/////yH5BAEKAA8ALAAAAAAMAA4AAAQe8MlJq70409F0OEUWMAiRXOOiCIY1lqcLZpxm33cEADs=
"
	tablelist_mate_expandedImg put "
R0lGODlhDAAOAIQQAAAAAEVFRUxMTFBQUFFRUVhYWFlZWVpaWl9fX3V1dXp6en19fYSEhImJiZ6e
nqOjo////////////////////////////////////////////////////////////////yH5BAEK
AAAALAAAAAAMAA4AAAUkICCOZGmeaEoOQdsO5YM0NOKYRsIkBUoshJRCoFAdVMikMhUCADs=
"
	tablelist_mate_collapsedActImg put "
R0lGODlhDAAOAOMLAAAAADs7O0BAQEJCQkNDQ0xMTE9PT1FRUVZWVlpaWmxsbP//////////////
/////yH5BAEKAA8ALAAAAAAMAA4AAAQf8MlJq70406C0IEMmJEVgXCNyCGE1lqf1tRen3TgeAQA7
"
	tablelist_mate_expandedActImg put "
R0lGODlhDAAOAOMKAAAAAEVFRUhISElJSUpKSktLS0xMTE5OTlpaWl1dXf//////////////////
/////yH5BAEKAA8ALAAAAAAMAA4AAAQf8MlJq70408B7qElwjAFiBYIhfFdQsBcRDBqs3XhuRQA7
"
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
iVBORw0KGgoAAAANSUhEUgAAAAoAAAAKCAYAAACNMs+9AAAAAXNSR0IArs4c6QAAAARnQU1BAACx
jwv8YQUAAAAJcEhZcwAADsMAAA7DAcdvqGQAAAAadEVYdFNvZnR3YXJlAFBhaW50Lk5FVCB2My41
LjEwMPRyoQAAAEJJREFUKFNj+P//P1EYwWBgEEeWQMcIBgNDMhBnIksiYwQDovASLsUIBkIhVsW4
FIKwGTEKiTKRKDcS5Ws84fifAQDpge0RK469/gAAAABJRU5ErkJggg==
"
	tablelist_menta_expandedImg put "
iVBORw0KGgoAAAANSUhEUgAAAAoAAAAKCAYAAACNMs+9AAAAAXNSR0IArs4c6QAAAARnQU1BAACx
jwv8YQUAAAAJcEhZcwAADsMAAA7DAcdvqGQAAAAadEVYdFNvZnR3YXJlAFBhaW50Lk5FVCB2My41
LjEwMPRyoQAAAEtJREFUKFONjNEJACAIBZ3EKRqqvtq1hcwkDPMRBQd5HpKIfAElAkrEeqz0B2zh
rqsyAM0v+ifHHoXQhhOHyHZJEJXbmUcSAWVGaALoU+1uRfEIrwAAAABJRU5ErkJggg==
"
    } else {
	tablelist_menta_collapsedImg put "
R0lGODlhCgAKAMIFAAAAAC0tLZaWlpycnMnJyf///////////yH5BAEKAAcALAAAAAAKAAoAAAMU
eLrcfkM8GKQbod4cSMPaF37W5CQAOw==
"
	tablelist_menta_expandedImg put "
R0lGODlhCgAKAKEDAAAAAC0tLZCQkP///yH5BAEKAAMALAAAAAAKAAoAAAIPnI+pe+IvUJhTURaY
3qwAADs=
"
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
s35+3Pg8G2gLGrFw1rcAAAAASUVORK5CYII=
"
	tablelist_mint_expandedImg put "
iVBORw0KGgoAAAANSUhEUgAAAAwAAAAOCAYAAAAbvf3sAAAAVUlEQVQoz+XRsQmAMBRF0SM6gQOl
dgwLB3OWLGCXMuAWljYKQRTTihd+8/591eOHNAiYK9wRscWKBQO6G3HDhHh9BCTk4tKRP1KWXuWy
lGvlk/5Dw+18fA9T93dmqwAAAABJRU5ErkJggg==
"
	tablelist_mint_collapsedSelImg put "
iVBORw0KGgoAAAANSUhEUgAAAAwAAAAOCAYAAAAbvf3sAAAATUlEQVQoz2NgoCv4////PFI1vPj/
//9yfGqYsIhZ4NOETQMnPk1MOAyCadpHrAaS/MDAwMDwnYGB4QQjI6MTMaF0n1BIkRSslEUcTQAA
5D0vedmcvmEAAAAASUVORK5CYII=
"
	tablelist_mint_expandedSelImg put "
iVBORw0KGgoAAAANSUhEUgAAAAwAAAAOCAYAAAAbvf3sAAAAVUlEQVQoz+WRwQnAIBAEdwPpyTIs
NWXYhV878Dn5JGAkEb+ShfssM3Cw0g9jIEg6JthoO222k6QoqX6A9YYfLRCADJTm8vXBezppDHdS
mYIbaV9ouBPWj0JRP45ECQAAAABJRU5ErkJggg==
"
    } else {
	tablelist_mint_collapsedImg put "
R0lGODlhDAAOAMIHAAAAACEhISgoKCoqKkhISFxcXGRkZP///yH5BAEKAAcALAAAAAAMAA4AAAMd
eLrc7uaxUKQKo8qAteOBQDygSHZbZlHWEbVwmwAAOw==
"
	tablelist_mint_expandedImg put "
R0lGODlhDAAOAKEDAAAAACEhISkpKf///yH5BAEKAAMALAAAAAAMAA4AAAIWnI+py+0aopRIzCCU
jXnZzgTPSJZIAQA7
"
	tablelist_mint_collapsedSelImg put "
R0lGODlhDAAOAKEBAAAAAP///////////yH5BAEKAAAALAAAAAAMAA4AAAIXhI+pGovRHIBx0Zou
PtpS94FbJpWmUQAAOw==
"
	tablelist_mint_expandedSelImg put "
R0lGODlhDAAOAKEBAAAAAP///////////yH5BAEKAAAALAAAAAAMAA4AAAIRhI+py+0aopRo0mTZ
1a/7jxQAOw==
"
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
iVBORw0KGgoAAAANSUhEUgAAAA0AAAAOCAYAAAD0f5bSAAAAAXNSR0IArs4c6QAAAARnQU1BAACx
jwv8YQUAAAAJcEhZcwAADr4AAA6+AepCscAAAAAHdElNRQfgBQkTHSnMxpiBAAAAGnRFWHRTb2Z0
d2FyZQBQYWludC5ORVQgdjMuNS4xMDD0cqEAAABRSURBVChTpZGxCQAgDAR/fkdwMitXiYqFPsRE
Y3HFPRwEhYg8o44eLEDa/QQLUDt53zRYZlS8kGVGbsiyIjNk+Yyezws9hBkMWCKfe4s62gga8dTd
YGVViS0AAAAASUVORK5CYII=
"
	tablelist_mint2_expandedImg put "
iVBORw0KGgoAAAANSUhEUgAAAA0AAAAOCAYAAAD0f5bSAAAABGdBTUEAALGPC/xhBQAAAAlwSFlz
AAAOvgAADr4B6kKxwAAAABp0RVh0U29mdHdhcmUAUGFpbnQuTkVUIHYzLjUuMTAw9HKhAAAAYklE
QVQoU5XLQQqAMAxE0ZzBW/T+lxDciK49S5rUGiidZrDwFh3yRVV/gyMDRwaODBwZf8Wc5klcpkTU
Sw8Pg4LbRBBREk5Bux0+YwiDdjcNb7ivAodHkQ3tHzgycGTgmFOpl2jLGnIdx90AAAAASUVORK5C
YII=
"
	tablelist_mint2_collapsedSelImg put "
iVBORw0KGgoAAAANSUhEUgAAAA0AAAAOCAYAAAD0f5bSAAAABGdBTUEAALGPC/xhBQAAAAlwSFlz
AAAOvAAADrwBlbxySQAAAAd0SU1FB+AFCRMdKczGmIEAAAAadEVYdFNvZnR3YXJlAFBhaW50Lk5F
VCB2My41LjEwMPRyoQAAAFVJREFUKFOlkDEKwDAMA/N7736If+dZjYcOAlPF6XCEEzkIWQDGtKOC
xN33wRc6SMwMJyFJRREhQ5KKMlOGJG+kQpJf0fh5Vx+hgoLkJCjaUdGO32A9XVwfc0mdLjYAAAAA
SUVORK5CYII=
"
	tablelist_mint2_expandedSelImg put "
iVBORw0KGgoAAAANSUhEUgAAAA0AAAAOCAYAAAD0f5bSAAAABGdBTUEAALGPC/xhBQAAAAlwSFlz
AAAOvQAADr0BR/uQrQAAABp0RVh0U29mdHdhcmUAUGFpbnQuTkVUIHYzLjUuMTAw9HKhAAAAW0lE
QVQoU5XLwQ3AIAxDUbbPjckyRJbIOcg9VG1xsHp4SHzwqKrfaFRoVGhUaFSuY85ZZtbC+zYCPERE
ZeYN9+8AXpfnsBvAFvDR3dsB0HgaAI0KjQqNCo1nNRZ9ViCcGRAOXQAAAABJRU5ErkJggg==
"
    } else {
	tablelist_mint2_collapsedImg put "
R0lGODlhDQAOAMIFAAAAACEhIScnJ2VlZXV1df///////////yH5BAEKAAcALAAAAAANAA4AAAMc
eLrc/odAFsZUQdgZ8n6dB4XaKI4l90HS5b5HAgA7
"
	tablelist_mint2_expandedImg put "
R0lGODlhDQAOAMIHAAAAACIiIiwsLC0tLS8vLzQ0NDc3N////yH5BAEKAAcALAAAAAANAA4AAAMZ
eLrc/jDKSYK9YbSCg3ic9UHcGBlTqq5RAgA7
"
	tablelist_mint2_collapsedSelImg put "
R0lGODlhDQAOAMIFAAAAAIeHh5KSkq6urvX19f///////////yH5BAEKAAcALAAAAAANAA4AAAMd
eLrc/kdAFuQ8YVgYiJ6dtzXh93TmmZ7j017wlAAAOw==
"
	tablelist_mint2_expandedSelImg put "
R0lGODlhDQAOAMIGAAAAAIeHh46OjszMzODg4PX19f///////yH5BAEKAAcALAAAAAANAA4AAAMa
eLrc/jDKKYK9QTRBiieawxVgJAyhOa1sGyUAOw==
"
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
YN8YU49dwQPQAZj+95HWrx8slWOLxRjWjwAAAABJRU5ErkJggg==
"
	tablelist_newWave_expandedImg put "
iVBORw0KGgoAAAANSUhEUgAAABAAAAAOCAYAAAAmL5yKAAABBklEQVQoz9VSPUsDQRB9c7dedeSK
LW7/QLgjbHuV3RUiuD/AJtraWdgFUqS1lPwBA4KN3VjaXe0P2NYrrtAELBT2DrFJIITNRyU4MDBv
5s2D+QD+vZExpgcg2MP7YeZPX0EAuO267tw59+EjRFEkhRCPAK68AkQ0BnBSVdWdc67daD4qy/J6
yfFaaK39yvM8SJLkuK7rVwDfKy+K4jSO4ydmftkmsJp9KqXsK6VCAHMAc6VUKKXsA5juWk4AAMzc
EtFIaz0EsACw0FoPiWjEzO3OK6wDY8xz0zT3AKCUumTms31nFBv4Jk3T2TK+OOQPwnVgrX3PsmxA
RG/M/HCIgPDkJn/6yr/4D0fVv4huoQAAAABJRU5ErkJggg==
"
	tablelist_newWave_collapsedActImg put "
iVBORw0KGgoAAAANSUhEUgAAABAAAAAOCAYAAAAmL5yKAAABEElEQVQoz9XRsUoDURAF0DvZl8QQ
iYquy75tLaxsZjv/wMJSEC39AnvBzlIEwc5a/IB0NoKFmGmsRKx3MQGjEkR8u28sRLCRbCrxtsMc
LjPAXydI07QTx/GRtfY6z/O3iQFrbatdw1mTsLMQW5ckiWRZ5qsCNQDoBCi25v172tZ9A71l5rWJ
ABB0qk7F6gyG24s6vdTCOTN3mXm5EkAEDQyVgaFyrkkf6yEeNyKshA3cMPMhM8/+BpjvBoGh4ueA
HOqA6rgG5mufYEytBIBnp+ZioNH9SK8A7IrI3VgABPUBlZd9H/aG/sl5bIpIt8oRDQC8OG2cPJTR
q9MDIjoW6bmqXzAA/KjAKaB7IjLAv8snuPFdR0oRvJ0AAAAASUVORK5CYII=
"
	tablelist_newWave_expandedActImg put "
iVBORw0KGgoAAAANSUhEUgAAABAAAAAOCAYAAAAmL5yKAAABDklEQVQoz9VSPUsDQRB9b/fuhKAn
gRA5q/yIq+0s7fwJFtYhbUCxs05pK/4IsbhOcBdNbWOVBUlhDu5E93JjFVC5fFSCAwPz5j0ew8wA
/z6YpmkMQK3R1caYvIkIROSypXASK5k3CfKauqxxBeC00QDAUAHHR3H9GfAnWQlw86YjAMNlo2nn
XNlJ9r3SPOy1WGrNepEP79x5+eCFtfZumYECAJKjccFJSUoQsgpCViUp44ITkqNVy1EAYIzxXjDI
ZmyHkfJhpHw2Y9sLBsYYv8pALwrn3PNWJznobbObz6GzqTxaa8/WnTH4hfu3r3IPAAL0N/kD/R04
56a73WSvqPBkrb3exCBo6J3/6St/AbNWYeq4QB0rAAAAAElFTkSuQmCC
"
    } else {
	tablelist_newWave_collapsedImg put "
R0lGODlhEAAOAIQdAAAAAFJSUl5eXl9fX2JiYmZmZmdnZ2lpaWtra2xsbG5ubnBwcHJycnR0dH19
fX9/f5KSkpSUlJqampycnJ2dnaGhoaenp6ysrLm5ucvLy8zMzN3d3ejo6P///////////yH5BAEK
AB8ALAAAAAAQAA4AAAU44CeOZGmeZYSegbCWAsQgr0hYFqU8r4H9mEpBgkJkjpnLgXhabDYaB2/V
4EwUtc8gkRWpuuDwKAQAOw==
"
	tablelist_newWave_expandedImg put "
R0lGODlhEAAOAIQSAAAAAFJSUltbW19fX2xsbHBwcHh4eHl5eX9/f5KSkpSUlJWVlZqamqenp6ys
rLm5ubq6usrKyv///////////////////////////////////////////////////////yH5BAEK
AB8ALAAAAAAQAA4AAAU04CeOZGmeaKqmSiC8cKCcQ7LcSzKkR+M3BxXB8Xg4CCtDJGJYfRAQCML5
KRSoHwYDy6WGAAA7
"
	tablelist_newWave_collapsedActImg put "
R0lGODlhEAAOAKUgAAAAAEA3NUI6N1A9OFE/OVNAOlNCO1BCPFFDPVRCO1VEPF5EO2JJP29IPU1E
QlBIRFdTU1dVU3lWR21tbZVdSJ9dSJdgS6RbRq1iSqpsUrFoTrRuUrlzVrh4WYWFhYyMjP//////
////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////yH5BAEKAAAALAAAAAAQAA4AAAY8QIBw
SCwaj0UP8hhwLIuDSwPyFBIwmMpi8ixovhrK4YM0bM4bC4J8THA4GQZ3qehIIlWA4JEXKvuAgUNB
ADs=
"
	tablelist_newWave_expandedActImg put "
R0lGODlhEAAOAIQSAAAAAD83NU87NlNGP2FIP29KPk1EQldUU21tbZ1oT6JXRKVYRKNiS6xhSrFo
TrdwU4WFhYyMjP///////////////////////////////////////////////////////yH5BAEK
AB8ALAAAAAAQAA4AAAU04CeOZGmeaKqmUCC8cACdhrLci2KkReM3BdWB4XAwDivC40FYfRCJBML5
GQyon0gEy6WGAAA7
"
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
KwA7
"
    tablelist_oxygen1_expandedImg put "
R0lGODlhDwAGAKECAAAAABQTEv///////yH5BAEKAAAALAAAAAAPAAYAAAIKhI+pyw0BoZtUFQA7
"
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
iVBORw0KGgoAAAANSUhEUgAAAA8AAAAICAYAAAAm06XyAAAABmJLR0QA/wD/AP+gvaeTAAAACXBI
WXMAAAsTAAALEwEAmpwYAAAAB3RJTUUH4AsDFBwlCamtawAAAFVJREFUGNOtzbENQFAYReEv0UgM
YgEVlUQjEttYRfEqu1hBDKCxhuYt8L84za3OPfzAhDUqVXlb7GhwltQ7XDjySZgBL7ao2ONGQh0R
FzwlRRgxR6UPRPkJSYt8DiIAAAAASUVORK5CYII=
"
	tablelist_oxygen2_expandedImg put "
iVBORw0KGgoAAAANSUhEUgAAAA8AAAAICAYAAAAm06XyAAAABmJLR0QA/wD/AP+gvaeTAAAACXBI
WXMAAAsTAAALEwEAmpwYAAAAB3RJTUUH4AsDFB8qsjvjOQAAAFJJREFUGNPF0CsKgEAABNAXF7yO
aU2CZRG8jcmbmDyU2LV4Dcsm02rQaTMwzIc/0aK/aQldiTnhQMy8xo6hNH3EhgYrpqf1Z5xY3mwP
uUH1ydMXx2UJYO9Vo0sAAAAASUVORK5CYII=
"
	tablelist_oxygen2_collapsedActImg put "
iVBORw0KGgoAAAANSUhEUgAAAA8AAAAICAYAAAAm06XyAAAABmJLR0QA/wD/AP+gvaeTAAAACXBI
WXMAAAsTAAALEwEAmpwYAAAAB3RJTUUH4AsDFB4pMimDwgAAAHZJREFUGNOlkC0Og2AQRN82cJ9P
VKFJECScYR1J0SiOgcTsHRBcArFn6B1auzWIym46ZtTL/MC/Uo9WPYYsd7u8Blb1WDKwfKXfAQNO
YLIir1+TsSInMAId8MjURj0aYAN2YM0c1qvHUz3mzObq8jcwWpEjA38Arr8gUfq42wkAAAAASUVO
RK5CYII=
"
	tablelist_oxygen2_expandedActImg put "
iVBORw0KGgoAAAANSUhEUgAAAA8AAAAICAYAAAAm06XyAAAABmJLR0QA/wD/AP+gvaeTAAAACXBI
WXMAAAsTAAALEwEAmpwYAAAAB3RJTUUH4AsDFCA0EOr0ZgAAAHJJREFUGNPF0C0OwkAQBtC3BEE4
TQUKR4IhpHeYCiyOI3AF/lQdZ+gt1nOYxawgmFbBqMmXvEm+4W8TuWwil/1XtotctmN2hgWukcu6
whVuWI7hVMEJHQ6449k36TwJ1wMPtBj6JsWUyvOP/YgXLj959hvQPxzKCnzYTQAAAABJRU5ErkJg
gg==
"
    } else {
	tablelist_oxygen2_collapsedImg put "
R0lGODlhDwAIAIABAAAAAP///yH5BAEKAAEALAAAAAAPAAgAAAIQjI8ZAOrcXIJysmoo1jviAgA7
"
	tablelist_oxygen2_expandedImg put "
R0lGODlhDwAIAIABAAAAAP///yH5BAEKAAEALAAAAAAPAAgAAAIRjI+pawDnmHuThRntzfr2fxQA
Ow==
"
	tablelist_oxygen2_collapsedActImg put "
R0lGODlhDwAIAKECAAAAAGDQ/////////yH5BAEKAAAALAAAAAAPAAgAAAIQhI8JEercXIJysmoo
1jviAgA7
"
	tablelist_oxygen2_expandedActImg put "
R0lGODlhDwAIAKECAAAAAGDQ/////////yH5BAEKAAAALAAAAAAPAAgAAAIRhI+paxHnmHuTgRnt
zfr2fxQAOw==
"
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
lrS6bUHZMhYAOw==
"
    tablelist_phase_expandedImg put "
R0lGODlhDwAKAKECAAAAAMfHx////////yH5BAEKAAAALAAAAAAPAAoAAAIRhI+pyx0P4YqS0WYq
BmH7jxQAOw==
"
}

#------------------------------------------------------------------------------
# tablelist::plain1TreeImgs
#------------------------------------------------------------------------------
proc tablelist::plain1TreeImgs {} {
    foreach mode {collapsed expanded} {
	variable plain1_${mode}Img \
		 [image create photo tablelist_plain1_${mode}Img]
    }

    variable pngSupported
    if {$pngSupported} {
	tablelist_plain1_collapsedImg put "
iVBORw0KGgoAAAANSUhEUgAAAAwAAAAKCAYAAACALL/6AAAABmJLR0QA/wD/AP+gvaeTAAAACXBI
WXMAAAsTAAALEwEAmpwYAAAAB3RJTUUH4AUKEwYtcCg47AAAACpJREFUGNNjYKAA1BOjiIlUTUyk
2sREqvOYSPUTPg2NpGhoJMVJjVSNBwD8+gSMwdvvHwAAAABJRU5ErkJggg==
"
	tablelist_plain1_expandedImg put "
iVBORw0KGgoAAAANSUhEUgAAAAwAAAAKCAYAAACALL/6AAAABmJLR0QA/wD/AP+gvaeTAAAACXBI
WXMAAAsTAAALEwEAmpwYAAAAB3RJTUUH4AUKEwkTNtE5iAAAAC9JREFUGNNjYBh0gJGBgaGeCHWN
yBoYCGhqRLeBAY+mRmxOYsChqZFYf9UPbLACACL9BIS+a6kZAAAAAElFTkSuQmCC
"
    } else {
	tablelist_plain1_collapsedImg put "
R0lGODlhDAAKAIABAH9/f////yH5BAEKAAEALAAAAAAMAAoAAAIUjI8IybB83INypmqjhGFzxxkZ
UgAAOw==
"
	tablelist_plain1_expandedImg put "
R0lGODlhDAAKAIABAH9/f////yH5BAEKAAEALAAAAAAMAAoAAAIQjI+py+D/EIxpNscMyLyHAgA7
"
    }
}

#------------------------------------------------------------------------------
# tablelist::plain2TreeImgs
#------------------------------------------------------------------------------
proc tablelist::plain2TreeImgs {} {
    foreach mode {collapsed expanded} {
	variable plain2_${mode}Img \
		 [image create photo tablelist_plain2_${mode}Img]
    }

    variable pngSupported
    if {$pngSupported} {
	tablelist_plain2_collapsedImg put "
iVBORw0KGgoAAAANSUhEUgAAAA4AAAAMCAYAAABSgIzaAAAABmJLR0QA/wD/AP+gvaeTAAAACXBI
WXMAAAsTAAALEwEAmpwYAAAAB3RJTUUH4AUKEwwFv3J4nAAAADJJREFUKM9jYKASaCJWIRO5mpnI
tZmJXGczketnJnIDjBiNdeRorCPHqXXkBE4dzVIOAPKWBZkKDbb3AAAAAElFTkSuQmCC
"
	tablelist_plain2_expandedImg put "
iVBORw0KGgoAAAANSUhEUgAAAA4AAAAMCAYAAABSgIzaAAAABmJLR0QA/wD/AP+gvaeTAAAACXBI
WXMAAAsTAAALEwEAmpwYAAAAB3RJTUUH4AUKEw4I8/VmowAAADZJREFUKM9jYBgygJGBgaGeBPWN
yBoZiNTciG4jAxGaG7E5lYGA5kZcfmTAo7mR1ECrZxg+AAC4iAWFJSdDXQAAAABJRU5ErkJggg==
"
    } else {
	tablelist_plain2_collapsedImg put "
R0lGODlhDgAMAIABAH9/f////yH5BAEKAAEALAAAAAAOAAwAAAIXjI9poA3c0IMxTOpuvS/yPVVW
J5KlWAAAOw==
"
	tablelist_plain2_expandedImg put "
R0lGODlhDgAMAIABAH9/f////yH5BAEKAAEALAAAAAAOAAwAAAIUjI+pywoPI0AyuspkC3Cb6YWi
WAAAOw==
"
    }
}

#------------------------------------------------------------------------------
# tablelist::plain3TreeImgs
#------------------------------------------------------------------------------
proc tablelist::plain3TreeImgs {} {
    foreach mode {collapsed expanded} {
	variable plain3_${mode}Img \
		 [image create photo tablelist_plain3_${mode}Img]
    }

    variable pngSupported
    if {$pngSupported} {
	tablelist_plain3_collapsedImg put "
iVBORw0KGgoAAAANSUhEUgAAABEAAAAOCAYAAADJ7fe0AAAABmJLR0QA/wD/AP+gvaeTAAAACXBI
WXMAAAsTAAALEwEAmpwYAAAAB3RJTUUH4AUKExAQNNjBKgAAADtJREFUKM9jYKABqCdHExM1DGKi
houYqOE1JmqEERM1ApuJGrFGrCGNlBrSSKl3GikN2EZKo7iR7nkHAKniBpTspddsAAAAAElFTkSu
QmCC
"
	tablelist_plain3_expandedImg put "
iVBORw0KGgoAAAANSUhEUgAAABEAAAAOCAYAAADJ7fe0AAAABmJLR0QA/wD/AP+gvaeTAAAACXBI
WXMAAAsTAAALEwEAmpwYAAAAB3RJTUUH4AUKExIRcemTPgAAAD5JREFUKM/t0jsOACAIRMHnycne
3J6IgJa6PRN+8OMzADuok0doQlp1QgNSNA5FSLudUICULZYE0s3l7NGPnffUBoaD5FpzAAAAAElF
TkSuQmCC
"
    } else {
	tablelist_plain3_collapsedImg put "
R0lGODlhEQAOAIABAH9/f////yH5BAEKAAEALAAAAAARAA4AAAIdjI+ZoH3AnIJRPmovznTL7jVg
5YBZ0J0opK4tqhYAOw==
"
	tablelist_plain3_expandedImg put "
R0lGODlhEQAOAIABAH9/f////yH5BAEKAAEALAAAAAARAA4AAAIYjI+py+1vgJx0pooXtmy/CgVc
CITmiR4FADs=
"
    }
}

#------------------------------------------------------------------------------
# tablelist::plain4TreeImgs
#------------------------------------------------------------------------------
proc tablelist::plain4TreeImgs {} {
    foreach mode {collapsed expanded} {
	variable plain4_${mode}Img \
		 [image create photo tablelist_plain4_${mode}Img]
    }

    variable pngSupported
    if {$pngSupported} {
	tablelist_plain4_collapsedImg put "
iVBORw0KGgoAAAANSUhEUgAAABcAAAASCAYAAACw50UTAAAABmJLR0QA/wD/AP+gvaeTAAAACXBI
WXMAAAsTAAALEwEAmpwYAAAAB3RJTUUH4AUKExUCuhZEJwAAAEdJREFUOMu91IsNACAIQ0HSxU03
dwf1ZIBH6IeZz7NegSIXRF4QKVGkB5EmR6YoMqaRPTiBV8GrZKkytCqKVSWqqv8VmP/zDd6/CJzv
kRcqAAAAAElFTkSuQmCC
"
	tablelist_plain4_expandedImg put "
iVBORw0KGgoAAAANSUhEUgAAABcAAAASCAYAAACw50UTAAAABmJLR0QA/wD/AP+gvaeTAAAACXBI
WXMAAAsTAAALEwEAmpwYAAAAB3RJTUUH4AUKExY6uTmvegAAAExJREFUOMvtlNsNACAIA8/JSTd3
ApWHfmjsAD1SCvD1lBpgG3w0MqcI0GxyCgCtYiEJkCdzEgB5F0oQoEhbCAAUrSJOgE7cgv13cI86
Y04IiOwcRtoAAAAASUVORK5CYII=
"
    } else {
	tablelist_plain4_collapsedImg put "
R0lGODlhFwASAIABAH9/f////yH5BAEKAAEALAAAAAAXABIAAAIojI+pCusL2pshSgotznoj23kV
GIkjeWFoSK1pi5qxDJpGbZ/5/cp5AQA7
"
	tablelist_plain4_expandedImg put "
R0lGODlhFwASAIABAH9/f////yH5BAEKAAEALAAAAAAXABIAAAIijI+py+0Po3Sg2ovrylyzjj2g
J3YTNxlhqpJsALzyTNdKAQA7
"
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
SLrc/vCJQKlwc2gdLgsbsAUNqIlcOQAsO5BfOKrnzGTb692VFf1ARgIAOw==
"
    tablelist_plastik_expandedImg put "
R0lGODlhDgAOAMIDAAAAAHZ2drW1tf///////////////////yH5BAEKAAQALAAAAAAOAA4AAAMn
SLrc/vCJQKlwc2gdLgtbGDRgyJEDoKrD+JnnC7tLJnrMVHVR7zMJADs=
"
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
VwKDMCA0/CiCgjKgLBwnAoJ0SnhKOJ9OSMPtYiIAOw==
"
    tablelist_plastique_expandedImg put "
R0lGODlhEQAOAOMLAAAAAHp4eH59fa+trfHx8fPz8/X19ff39/n5+fv7+/39/f//////////////
/////yH5BAEKAA8ALAAAAAARAA4AAAQ78MlJq7042yG6FwMmKGSpCGKirgl6CUgsI64lHEGeH3Ul
GMCgoUcRFI7IAnEiIDifhKWE8+mENNgsJgIAOw==
"
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
DJoJCMHCwwgKiwcNBsrLzAYOZUIFCgQD1dYDBApZR0vd0EJBADs=
"
    tablelist_radiance_expandedImg put "
R0lGODlhEgAQAKUoAAAAAEBAQOTe1eTe1uTf1+bh2ejj2ujk3erl3uvn4Ozo4u3p4+7q5O/r5u/s
5+/t6PDt6PPw7PLw7fXz8Pb08ff18vb18/f28vj28fj28vj28/j39Pj39fj49fn49/n5+Pr6+Pv7
+fz8+fz8+vz8+/39/P39/f7+/f//////////////////////////////////////////////////
/////////////////////////////////////////////yH5BAEKAD8ALAAAAAASABAAAAaTwJ9w
SCwWD4KkUnkwFjAj02k6NY0oBeLBQiKVvuBS19IUCkCgkGjEZotCaMFQ4Kl/7vhP3SM3czgbGxwd
hIB/HH0/AhoaGRoUFRcVkYwaiQIUFBMBnJ0BmRSXEhESpaanEpcQD6ytrg8QlwuztLWzDJcJCLu8
vQgKiQcNBsTFxgYOZUIFCgQDz9ADBApZR0vXykJBADs=
"
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
kccAAAAASUVORK5CYII=
"
	tablelist_ubuntu_expandedImg put "
iVBORw0KGgoAAAANSUhEUgAAAAsAAAAOCAYAAAD5YeaVAAAAiklEQVQoz9XRIQoCYRAF4M8VXCzC
j2lFTJ7H5C02eA+bd9BgEBeP4R3MBrVZNFn+hZ8/qEnwwYThvZl5vOH/0EGFFfpvdE8surjjgSlO
uGTVwxbHIk4ecEXINgbcsIciIZYYoIx9iVDX9Sb1nGKGOc4YYYemJYtM3NqZxPPNp4QqrDH+NtLh
bz/4Au5zF3nYGscDAAAAAElFTkSuQmCC
"
	tablelist_ubuntu_collapsedSelImg put "
iVBORw0KGgoAAAANSUhEUgAAAAsAAAAOCAYAAAD5YeaVAAAAiElEQVQoz72SoQoCURREz11YweIv
uFEQo83id+wvWMT/M4nFbhCxLNjXKMixaHks6xPEaQOHO8xw4S9Sp9/AN3WTC9/Vq3roSikSXwIn
YATs05RILwO7lx0CY6AB6og498FvzYAHMC96KgyACXABFhHRdBXcqke1Vde5a1SfpmvVVe7Oy5+9
wxNzbFn4+q5BGgAAAABJRU5ErkJggg==
"
	tablelist_ubuntu_expandedSelImg put "
iVBORw0KGgoAAAANSUhEUgAAAAsAAAAOCAYAAAD5YeaVAAAAj0lEQVQoz9WRMQ4BARBF30ejICKa
jUg4z15EOMsewC00nEOhlJAoHEDUT7MrCkQl8ZufmXnF/Bn4P0WdAlug/4G7AWUnyUmtgAVwfAHO
gFWSQ5qOugF6wOUJLIBrkhKg9TSYA0OgW9ddYAQsG+ABJzkDFTAG2rVXSU5vk6hrdV+v9Vlqoe7U
yVf3VAe//eAdhJ0u3C54tZ8AAAAASUVORK5CYII=
"
    } else {
	tablelist_ubuntu_collapsedImg put "
R0lGODlhCwAOAKECAAAAAExMTP///////yH5BAEKAAAALAAAAAALAA4AAAIWhI+py8EWYotOUZou
PrrynUmL95RLAQA7
"
	tablelist_ubuntu_expandedImg put "
R0lGODlhCwAOAKECAAAAAExMTP///////yH5BAEKAAAALAAAAAALAA4AAAIThI+pyx0P4Yly0pDo
qor3BoZMAQA7
"
	tablelist_ubuntu_collapsedSelImg put "
R0lGODlhCwAOAKEBAAAAAP///////////yH5BAEKAAAALAAAAAALAA4AAAIWhI+py8EWYotOUZou
PrrynUmL95RLAQA7
"
	tablelist_ubuntu_expandedSelImg put "
R0lGODlhCwAOAKEBAAAAAP///////////yH5BAEKAAAALAAAAAALAA4AAAIThI+pyx0P4Yly0pDo
qor3BoZMAQA7
"
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
iVBORw0KGgoAAAANSUhEUgAAAAgAAAAKCAYAAACJxx+AAAAABmJLR0QA/wD/AP+gvaeTAAAACXBI
WXMAAA7DAAAOwwHHb6hkAAAAB3RJTUUH4AsDFAkb/31W1AAAAFhJREFUGNONj7sNgDAMBc/uwhwZ
j5IxKLMLy7BHykdDRGLxO8mF9U7PsnEiiYiZ4d2S+WADsiTaAFcDMAElNnloSVHym1MJWN+ECixP
QgVmSfvvL3qGsAkHUqArtr/xO8MAAAAASUVORK5CYII=
"
	tablelist_ubuntu2_expandedImg put "
iVBORw0KGgoAAAANSUhEUgAAAAgAAAAKCAYAAACJxx+AAAAABmJLR0QA/wD/AP+gvaeTAAAACXBI
WXMAAA7DAAAOwwHHb6hkAAAAB3RJTUUH4AsDFBAHcHyjgwAAAEhJREFUGNO9zLERQEAYBeGPC1Qg
FGlGQwKBAoyCnPTmupJI/pCQDd/uPD6nwYLpxeeEigE9uhAXDmwphoIxohYn9qfLFbN/uQEwZAfr
O7QC9wAAAABJRU5ErkJggg==
"
	tablelist_ubuntu2_collapsedSelImg put "
iVBORw0KGgoAAAANSUhEUgAAAAgAAAAKCAYAAACJxx+AAAAABmJLR0QA/wD/AP+gvaeTAAAACXBI
WXMAAA7DAAAOwwHHb6hkAAAAB3RJTUUH4AsDFAw3sNLOcgAAAF9JREFUGNN9kLENgDAQA89IEKWh
gQkYmH2YgJmoTEGCwgvF1cu+4vSyTS9DPSRNXQBYJI09IAM5Qi2A7aNAqS0popuf7MD69gE4gRlI
v0AcbX8cDFy2r9ZL9VGSUhwBbiXCRsSA6M6gAAAAAElFTkSuQmCC
"
	tablelist_ubuntu2_expandedSelImg put "
iVBORw0KGgoAAAANSUhEUgAAAAgAAAAKCAYAAACJxx+AAAAABmJLR0QA/wD/AP+gvaeTAAAACXBI
WXMAAA7DAAAOwwHHb6hkAAAAB3RJTUUH4AsDFBELYNHe6QAAAE1JREFUGNO9zCEKgFAABNFZEAwi
iOAFPIPd63sai+FjGosfk1FfnWXhcwEmoH/pByrAoC4+VqBVyT0gyajOQJdkU0+Apn6pexKAUuNP
LsjVKWqydBSbAAAAAElFTkSuQmCC
"
    } else {
	tablelist_ubuntu2_collapsedImg put "
R0lGODlhCAAKAMIFAAAAAD4+PkdHR0hISE9PT////////////yH5BAEKAAcALAAAAAAIAAoAAAMS
eLrcO+4E4cJsNhBmKfcMFDUJADs=
"
	tablelist_ubuntu2_expandedImg put "
R0lGODlhCAAKAMIEAAAAAD4+PkNDQ0tLS////////////////yH5BAEKAAAALAAAAAAIAAoAAAMO
CLrcziHKNaJo477NewIAOw==
"
	tablelist_ubuntu2_collapsedSelImg put "
R0lGODlhCAAKAMIGAAAAAN3d3d7e3ubm5uvr6/Hx8f///////yH5BAEKAAcALAAAAAAIAAoAAAMS
eLrcO+6E4oKhzBqSb5uOEDkJADs=
"
	tablelist_ubuntu2_expandedSelImg put "
R0lGODlhCAAKAKECAAAAAN3d3f///////yH5BAEKAAMALAAAAAAIAAoAAAINnI+pGO0nokhx2YtH
AQA7
"
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
iVBORw0KGgoAAAANSUhEUgAAAA0AAAAOCAYAAAD0f5bSAAAABGdBTUEAALGPC/xhBQAAAAlwSFlz
AAAOwgAADsIBFShKgAAAABp0RVh0U29mdHdhcmUAUGFpbnQuTkVUIHYzLjUuMTAw9HKhAAAAWUlE
QVQoU2P4//8/yRiVw8DgDMQSyGLYMCqHgSEGiFcT0ojKgWg6TEgjKgehCa9GVA6qJpwaUTmYmrBq
pIkmkp1HckDg1ADCqByIJrwaQBiVQ04yIg7/ZwAAgQKZuDdqxHAAAAAASUVORK5CYII=
"
	tablelist_ubuntu3_expandedImg put "
iVBORw0KGgoAAAANSUhEUgAAAA0AAAAOCAYAAAD0f5bSAAAABGdBTUEAALGPC/xhBQAAAAlwSFlz
AAAOwgAADsIBFShKgAAAABp0RVh0U29mdHdhcmUAUGFpbnQuTkVUIHYzLjUuMTAw9HKhAAAAXUlE
QVQoU5XLwQ3AIAxDUcZgLMbobkzCVGmSFhCKhQHpH7DykohcB0cWHFlwZNkr2nNY6ShrVWsku8mO
fsngAAMRuIAF+SfCAPwuDBNC4Ddw/CAEFhxZcGTBcZ+kF8WCmsIy4DnwAAAAAElFTkSuQmCC
"
	tablelist_ubuntu3_collapsedSelImg put "
iVBORw0KGgoAAAANSUhEUgAAAA0AAAAOCAYAAAD0f5bSAAAABGdBTUEAALGPC/xhBQAAAAlwSFlz
AAAOwgAADsIBFShKgAAAABp0RVh0U29mdHdhcmUAUGFpbnQuTkVUIHYzLjUuMTAw9HKhAAAAXUlE
QVQoU62SywnAIBAFLSVdWYcVp5TNziGweX5wgw/m4MCAiMXM0qioch6iojm3cwXXoYKILUMVb8Sm
oYoYsWH4OTgasS6MARyJ0tdLP8Q0ABVEywBU/PpGG1h5AHZuQvcmAx5DAAAAAElFTkSuQmCC
"
	tablelist_ubuntu3_expandedSelImg put "
iVBORw0KGgoAAAANSUhEUgAAAA0AAAAOCAYAAAD0f5bSAAAABGdBTUEAALGPC/xhBQAAAAlwSFlz
AAAOwgAADsIBFShKgAAAABp0RVh0U29mdHdhcmUAUGFpbnQuTkVUIHYzLjUuMTAw9HKhAAAAXUlE
QVQoU5XOgQmAMBAEwZRidfZilZby/koSjDlyKozg8QuWiPhNjo4cHTk6vPZ0fMTtHW3pTO7hhtv+
ey7sAVq0CocAzwjvcAowfFQtlAGmoeJYBpCjI0dHjmtRLiHfREV2rBj7AAAAAElFTkSuQmCC
"
    } else {
	tablelist_ubuntu3_collapsedImg put "
R0lGODlhDQAOAMIFAAAAADw8PFRUVKOjo7y8vP///////////yH5BAEKAAcALAAAAAANAA4AAAMf
eLrcR84NEdkItJ6LNe/RBzZiRgaoeY4SK6kRpM1KAgA7
"
	tablelist_ubuntu3_expandedImg put "
R0lGODlhDQAOAMIFAAAAADY2NlRUVJeXl6+vr////////////yH5BAEKAAcALAAAAAANAA4AAAMd
eLrc/jA+Mqq9RInAOxfM5gVgI36QWKar5L5wlAAAOw==
"
	tablelist_ubuntu3_collapsedSelImg put "
R0lGODlhDQAOAKEBAAAAAP///////////yH5BAEKAAAALAAAAAANAA4AAAIZhI8JoRrczoNxUmer
vXI3/03R8oykuaBoAQA7
"
	tablelist_ubuntu3_expandedSelImg put "
R0lGODlhDQAOAKEBAAAAAP///////////yH5BAEKAAAALAAAAAANAA4AAAIUhI+py70Bo4RmTmRp
skw67YTi6BQAOw==
"
    }
}

#------------------------------------------------------------------------------
# tablelist::ubuntuMateTreeImgs
#------------------------------------------------------------------------------
proc tablelist::ubuntuMateTreeImgs {} {
    foreach mode {collapsed expanded collapsedSel expandedSel
		  collapsedAct expandedAct collapsedSelAct expandedSelAct} {
	variable ubuntuMate_${mode}Img \
		 [image create photo tablelist_ubuntuMate_${mode}Img]
    }

    variable pngSupported
    if {$pngSupported} {
	tablelist_ubuntuMate_collapsedImg put "
iVBORw0KGgoAAAANSUhEUgAAAAcAAAAICAYAAAA1BOUGAAAAAXNSR0IArs4c6QAAAARnQU1BAACx
jwv8YQUAAAAJcEhZcwAADsMAAA7DAcdvqGQAAAAadEVYdFNvZnR3YXJlAFBhaW50Lk5FVCB2My41
LjEwMPRyoQAAADNJREFUGFdj+P//P04MIRgYRNElwOJggoEhBoiT8EkeRleALgnCRrgkcerEaScW
1/5nAAAEbX5FmgjJygAAAABJRU5ErkJggg==
"
	tablelist_ubuntuMate_expandedImg put "
iVBORw0KGgoAAAANSUhEUgAAAAcAAAAICAYAAAA1BOUGAAAAAXNSR0IArs4c6QAAAARnQU1BAACx
jwv8YQUAAAAJcEhZcwAADsMAAA7DAcdvqGQAAAAadEVYdFNvZnR3YXJlAFBhaW50Lk5FVCB2My41
LjEwMPRyoQAAADxJREFUGFdj+P//P06MVRCGsQrCMAgEAHEGGg6ASUoA8WogPgzFILYEWBKqAqYA
LgGXRFIAl0CRxMT/GQDUC3iRKcgrYgAAAABJRU5ErkJggg==
"
	tablelist_ubuntuMate_collapsedSelImg put "
iVBORw0KGgoAAAANSUhEUgAAAAcAAAAICAYAAAA1BOUGAAAAAXNSR0IArs4c6QAAAARnQU1BAACx
jwv8YQUAAAAJcEhZcwAADsMAAA7DAcdvqGQAAAAadEVYdFNvZnR3YXJlAFBhaW50Lk5FVCB2My41
LjEwMPRyoQAAADRJREFUGFdj+P//P04MY8ggC8IwjFEGxHUwQRhGlgQBFAXokiDgAMRYJXHqxGkn
Ftf+ZwAAuNGwE9a6YwIAAAAASUVORK5CYII=
"
	tablelist_ubuntuMate_expandedSelImg put "
iVBORw0KGgoAAAANSUhEUgAAAAcAAAAICAYAAAA1BOUGAAAAAXNSR0IArs4c6QAAAARnQU1BAACx
jwv8YQUAAAAJcEhZcwAADsMAAA7DAcdvqGQAAAAadEVYdFNvZnR3YXJlAFBhaW50Lk5FVCB2My41
LjEwMPRyoQAAAD5JREFUGFdj+P//P06MVRCGsQrCMIgoA+LJaBgkBpY0AeKHQAwDIDZIDG4sTAFc
AoRhkjAFcAkQRpZEw/8ZACqWsUulTWk4AAAAAElFTkSuQmCC
"
	tablelist_ubuntuMate_collapsedActImg put "
iVBORw0KGgoAAAANSUhEUgAAAAcAAAAICAYAAAA1BOUGAAAAAXNSR0IArs4c6QAAAARnQU1BAACx
jwv8YQUAAAAJcEhZcwAADsMAAA7DAcdvqGQAAAAadEVYdFNvZnR3YXJlAFBhaW50Lk5FVCB2My41
LjEwMPRyoQAAADNJREFUGFdj+P//P04MIRgYRNElwOJggoEhBoiT8EkeRleALgnCRrgkcerEaScW
1/5nAAAEbX5FmgjJygAAAABJRU5ErkJggg==
"
	tablelist_ubuntuMate_expandedActImg put "
iVBORw0KGgoAAAANSUhEUgAAAAcAAAAICAYAAAA1BOUGAAAAAXNSR0IArs4c6QAAAARnQU1BAACx
jwv8YQUAAAAJcEhZcwAADsMAAA7DAcdvqGQAAAAadEVYdFNvZnR3YXJlAFBhaW50Lk5FVCB2My41
LjEwMPRyoQAAADxJREFUGFdj+P//P06MVRCGsQrCMAgEAHEGGg6ASUoA8WogPgzFILYEWBKqAqYA
LgGXRFIAl0CRxMT/GQDUC3iRKcgrYgAAAABJRU5ErkJggg==
"
	tablelist_ubuntuMate_collapsedSelActImg put "
iVBORw0KGgoAAAANSUhEUgAAAAcAAAAICAYAAAA1BOUGAAAAAXNSR0IArs4c6QAAAARnQU1BAACx
jwv8YQUAAAAJcEhZcwAADsMAAA7DAcdvqGQAAAAadEVYdFNvZnR3YXJlAFBhaW50Lk5FVCB2My41
LjEwMPRyoQAAADNJREFUGFdj+P//P04MIRgYRNElwOJggoEhBoiT8EkeRleALgnCRrgkcerEaScW
1/5nAAAEbX5FmgjJygAAAABJRU5ErkJggg==
"
	tablelist_ubuntuMate_expandedSelActImg put "
iVBORw0KGgoAAAANSUhEUgAAAAcAAAAICAYAAAA1BOUGAAAAAXNSR0IArs4c6QAAAARnQU1BAACx
jwv8YQUAAAAJcEhZcwAADsMAAA7DAcdvqGQAAAAadEVYdFNvZnR3YXJlAFBhaW50Lk5FVCB2My41
LjEwMPRyoQAAADxJREFUGFdj+P//P06MVRCGsQrCMAgEAHEGGg6ASUoA8WogPgzFILYEWBKqAqYA
LgGXRFIAl0CRxMT/GQDUC3iRKcgrYgAAAABJRU5ErkJggg==
"
    } else {
	tablelist_ubuntuMate_collapsedImg put "
R0lGODlhBwAIAMIFAAAAADw8PJ2dnaOjo83Nzf///////////yH5BAEKAAcALAAAAAAHAAgAAAMO
eLrcIy7ANUIgVLLXegIAOw==
"
	tablelist_ubuntuMate_expandedImg put "
R0lGODlhBwAIAMIFAAAAADw8PFRUVJeXl6+vr////////////yH5BAEKAAcALAAAAAAHAAgAAAMO
eLrcTiMOokQIgons+koAOw==
"
	tablelist_ubuntuMate_collapsedSelImg put "
R0lGODlhBwAIAKEBAAAAAP///////////yH5BAEKAAAALAAAAAAHAAgAAAIMhG+BqRjvXgMyrmkK
ADs=
"
	tablelist_ubuntuMate_expandedSelImg put "
R0lGODlhBwAIAKEBAAAAAP///////////yH5BAEKAAAALAAAAAAHAAgAAAIKhI+pwW0dEFMUFQA7
"
	tablelist_ubuntuMate_collapsedActImg put "
R0lGODlhBwAIAMIFAAAAADw8PJ2dnaOjo83Nzf///////////yH5BAEKAAcALAAAAAAHAAgAAAMO
eLrcIy7ANUIgVLLXegIAOw==
"
	tablelist_ubuntuMate_expandedActImg put "
R0lGODlhBwAIAMIFAAAAADw8PFRUVJeXl6+vr////////////yH5BAEKAAcALAAAAAAHAAgAAAMO
eLrcTiMOokQIgons+koAOw==
"
	tablelist_ubuntuMate_collapsedSelActImg put "
R0lGODlhBwAIAMIFAAAAADw8PJ2dnaOjo83Nzf///////////yH5BAEKAAcALAAAAAAHAAgAAAMO
eLrcIy7ANUIgVLLXegIAOw==
"
	tablelist_ubuntuMate_expandedSelActImg put "
R0lGODlhBwAIAMIFAAAAADw8PFRUVJeXl6+vr////////////yH5BAEKAAcALAAAAAAHAAgAAAMO
eLrcTiMOokQIgons+koAOw==
"
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
iVBORw0KGgoAAAANSUhEUgAAAAoAAAAOCAYAAAAWo42rAAAABGdBTUEAALGPC/xhBQAAAAlwSFlz
AAAOwgAADsIBFShKgAAAABp0RVh0U29mdHdhcmUAUGFpbnQuTkVUIHYzLjUuMTAw9HKhAAAAZElE
QVQoU2P4//8/A1GApgotgZgbwsQCkBRGAHE4EAuDeegATaEoEKcAsTRIAAUgK4SyQSbmA7EqiAMH
6AqhfAkgrgViQRAHDLCYKATE+E0EYhEgJuxGICbK10SHI35AnEIGBgDfPzypQe1LowAAAABJRU5E
rkJggg==
"
	tablelist_${treeStyle}_expandedImg put "
iVBORw0KGgoAAAANSUhEUgAAAAoAAAAOCAYAAAAWo42rAAAABGdBTUEAALGPC/xhBQAAAAlwSFlz
AAAOwgAADsIBFShKgAAAABp0RVh0U29mdHdhcmUAUGFpbnQuTkVUIHYzLjUuMTAw9HKhAAAASklE
QVQoU2P4//8/A1Fg8Cl0BOJyCBMKsCgEKboCxDfBPBhAUwhWFBERARLEqRCuCJ9CFEX4FIIcDpJA
xpVAjABYPIMdDJRCBgYA0sVCxaUivcEAAAAASUVORK5CYII=
"
	tablelist_${treeStyle}_collapsedActImg put "
iVBORw0KGgoAAAANSUhEUgAAAAoAAAAOCAYAAAAWo42rAAAABGdBTUEAALGPC/xhBQAAAAlwSFlz
AAAOwgAADsIBFShKgAAAABp0RVh0U29mdHdhcmUAUGFpbnQuTkVUIHYzLjUuMTAw9HKhAAAAY0lE
QVQoU2P4//8/A1GAdgpljnyfAsSGYA42gKTwExBfB2JnsAA6QFNYAMQvgTgSLIgMkBWC2EA6CYi/
gWiwBAygK4QqTgfi/0CsAZYEAbJMBGLi3AjERPmauHAkCIhTyMAAAJhFf793qI06AAAAAElFTkSu
QmCC
"
	tablelist_${treeStyle}_expandedActImg put "
iVBORw0KGgoAAAANSUhEUgAAAAoAAAAOCAYAAAAWo42rAAAABGdBTUEAALGPC/xhBQAAAAlwSFlz
AAAOwgAADsIBFShKgAAAABp0RVh0U29mdHdhcmUAUGFpbnQuTkVUIHYzLjUuMTAw9HKhAAAARklE
QVQoU2P4//8/A1FgkCmUOfK9Eog3QrkQgK4Qqug3EKNKICuEKWq6//s/ToXIinAqRFeET+FGkAQa
xu8ZnGCgFDIwAAAYyHMZpMy2ogAAAABJRU5ErkJggg==
"
    } else {
	tablelist_${treeStyle}_collapsedImg put "
R0lGODlhCgAOAMIHAAAAAIKCgpCQkJubm6enp6ioqMbGxv///yH5BAEKAAcALAAAAAAKAA4AAAMa
eLrc/szAQwokZzx8hONH0HDemG3WI03skwAAOw==
"
	tablelist_${treeStyle}_expandedImg put "
R0lGODlhCgAOAMIGAAAAACYmJisrK1hYWIaGhoiIiP///////yH5BAEKAAcALAAAAAAKAA4AAAMY
eLrc/jCeAkV4YtyWNR/gphRBGRBSqkoJADs=
"
	tablelist_${treeStyle}_collapsedActImg put "
R0lGODlhCgAOAMIGAAAAABzE9ybG9y/J9z/N+Hvc+v///////yH5BAEKAAcALAAAAAAKAA4AAAMa
eLrc/qzAIwgUZzxMHT9Bw30LpnnWI03skwAAOw==
"
	tablelist_${treeStyle}_expandedActImg put "
R0lGODlhCgAOAMIEAAAAAB3E92HW+YLf+////////////////yH5BAEKAAAALAAAAAAKAA4AAAMX
CLrc/jACAUN4YdyWNR/gpgiWRUloGiUAOw==
"
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
iVBORw0KGgoAAAANSUhEUgAAAA0AAAAQCAYAAADNo/U5AAAABGdBTUEAALGPC/xhBQAAAAlwSFlz
AAAOwQAADsEBuJFr7QAAABp0RVh0U29mdHdhcmUAUGFpbnQuTkVUIHYzLjUuMTAw9HKhAAAAfElE
QVQ4T6XSSwqAMAwE0NygYBUP4M4jeBK37l269upx0AgZKdag8NCZNogfUdWwYllTLGs4iEyQfFfC
QWQ2ne+fOFwDGRbo/ZrHAUN2bmCFwa/fONiQXSfYYPR7zjUKbshyCztk6in8uROO2DNB/O2Z0HeK
/xFfFct3Kgd7BgT8X0rnFQAAAABJRU5ErkJggg==
"
	tablelist_${treeStyle}_expandedImg put "
iVBORw0KGgoAAAANSUhEUgAAAA0AAAAQCAYAAADNo/U5AAAABGdBTUEAALGPC/xhBQAAAAlwSFlz
AAAOwgAADsIBFShKgAAAABp0RVh0U29mdHdhcmUAUGFpbnQuTkVUIHYzLjUuMTAw9HKhAAAAX0lE
QVQ4T5WLwQ3AIAzEWIWF+GcUBuwQnSaECqQqOTiI5Ed8clLVa6BkQMmAkgHlxC4bJXgvJiN4jDds
XnxyBCLSHx79g6PIBzRCwTZaBSwqfVxQYXQLlAwoGVDu0dQApYwcjGzIaS0AAAAASUVORK5CYII=
"
	tablelist_${treeStyle}_collapsedActImg put "
iVBORw0KGgoAAAANSUhEUgAAAA0AAAAQCAYAAADNo/U5AAAABGdBTUEAALGPC/xhBQAAAAlwSFlz
AAAOwQAADsEBuJFr7QAAABp0RVh0U29mdHdhcmUAUGFpbnQuTkVUIHYzLjUuMTAw9HKhAAAAjElE
QVQ4T5XSzQ1AQBAFYIVI1KAGFTi67tVFFSpQkj5cXDTAcbxJduWNbNg5fNl9wyN+KhFxyw7/ZId/
TKjXa4GWZzkmoLDDBh3P30yIpREOGPgYM0FLcQ1wwsTHExNSKe6HZr0E68znKBO4FHMPWgw8fzaK
S9j77qRXhvJnAv/bA/d38v8RpbLDb1LdInxaO2Da/xgAAAAASUVORK5CYII=
"
	tablelist_${treeStyle}_expandedActImg put "
iVBORw0KGgoAAAANSUhEUgAAAA0AAAAQCAYAAADNo/U5AAAABGdBTUEAALGPC/xhBQAAAAlwSFlz
AAAOwgAADsIBFShKgAAAABp0RVh0U29mdHdhcmUAUGFpbnQuTkVUIHYzLjUuMTAw9HKhAAAAZUlE
QVQ4T5WQsQ2AMAwEMwhTMVI2yg7swQa0FCmMkbAURx+/Ka74s65xEZHfQMmAkgElA0pjO+5dabN3
Y+QLLkWnv7lhWFDPLqloDFLRHNAIBWG0CljU3uOC/MsjoGRAyYAyRsoDbx1o4rZ56f0AAAAASUVO
RK5CYII=
"
    } else {
	tablelist_${treeStyle}_collapsedImg put "
R0lGODlhDQAQAMIHAAAAAIGBgYuLi5OTk56enqenp8XFxf///yH5BAEKAAcALAAAAAANABAAAAMg
eLrc/tCZuEqh5xJ6z4jdIUDhETzhiCofeWxg+UxYjSUAOw==
"
	tablelist_${treeStyle}_expandedImg put "
R0lGODlhDQAQAMIGAAAAACYmJjo6OllZWYaGhrGxsf///////yH5BAEKAAcALAAAAAANABAAAAMe
eLrc/jDKVqYIUgwM9e5DyDWe6JQmUwRsS0xwLDsJADs=
"
	tablelist_${treeStyle}_collapsedActImg put "
R0lGODlhDQAQAMIHAAAAAB7E9yTG9y/J9zTK9zjL+Hvc+v///yH5BAEKAAcALAAAAAANABAAAAMg
eLrc/tCZuEihh5xB9RGRdwSQOD4iiSpguXUXNWE0lgAAOw==
"
	tablelist_${treeStyle}_expandedActImg put "
R0lGODlhDQAQAMIFAAAAABzE9yvH92HW+YLf+////////////yH5BAEKAAcALAAAAAANABAAAAMe
eLrc/jDKNqYIUhAM9e5EyDWe6JQmMwRsW01wLDcJADs=
"
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
iVBORw0KGgoAAAANSUhEUgAAABAAAAASCAYAAABSO15qAAAABGdBTUEAALGPC/xhBQAAAAlwSFlz
AAAOwgAADsIBFShKgAAAABp0RVh0U29mdHdhcmUAUGFpbnQuTkVUIHYzLjUuMTAw9HKhAAAAkklE
QVQ4T63Tqw6AMAwF0GocjwSBIdlv8B84LBKD4evHHVS0S3ltLDmB20JDYJD3PotZ/MIsfqED0QCl
rD3RgWhkjazf0eG8uYIJWtm7ogMG8LGGGTrZt+jAA/g8DFmgl9fEdBADOIchKzhZl3SIBnDNwQZF
3Dv6Kvz5BFjp7wAr/StA3j5gyTsx719IYRbf87QDkkXd7AZZ8UwAAAAASUVORK5CYII=
"
	tablelist_${treeStyle}_expandedImg put "
iVBORw0KGgoAAAANSUhEUgAAABAAAAASCAYAAABSO15qAAAABGdBTUEAALGPC/xhBQAAAAlwSFlz
AAAOwgAADsIBFShKgAAAABp0RVh0U29mdHdhcmUAUGFpbnQuTkVUIHYzLjUuMTAw9HKhAAAAaklE
QVQ4T6WM0QnAIAwF3a4zOIl0z/50mjSBBkSukkeF+/D0XjOzX6BUQKmAUgGlAsoZP4cz6C1Ambzx
5dz0HqAMMu69x0UbmGN5YI2lAYrLA19xaWAXB5WBEZ82nGuYoFRAqYBSAWUdaw84XP55BTs9TwAA
AABJRU5ErkJggg==
"
	tablelist_${treeStyle}_collapsedActImg put "
iVBORw0KGgoAAAANSUhEUgAAABAAAAASCAYAAABSO15qAAAABGdBTUEAALGPC/xhBQAAAAlwSFlz
AAAOwgAADsIBFShKgAAAABp0RVh0U29mdHdhcmUAUGFpbnQuTkVUIHYzLjUuMTAw9HKhAAAAkklE
QVQ4T6WTuw2AMAxEMwjLsAItJQ0l27AQ81BQQGlsyZF8kSG/4sncmTtFIgQi6sI1a3DNGkAMx7Mz
k/VygODwxZzMbP0/QGjBqnOxuy9ASFCnlNwy7d4DRCzQ51iy2XdSQNgC1dkSEGmBelJCzJjuBBBp
gYbbTlASFkDEAhOu/woabr8HTNdN7PsXWnDNcii8/8FGqvnrvTkAAAAASUVORK5CYII=
"
	tablelist_${treeStyle}_expandedActImg put "
iVBORw0KGgoAAAANSUhEUgAAABAAAAASCAYAAABSO15qAAAABGdBTUEAALGPC/xhBQAAAAlwSFlz
AAAOwgAADsIBFShKgAAAABp0RVh0U29mdHdhcmUAUGFpbnQuTkVUIHYzLjUuMTAw9HKhAAAAcElE
QVQ4T6WSsQ2AIBQFGcQh7e3ciB1cwziGBcX3k0hCzEn+0+IKDu5VJDP7BUoFlAooFVAqoOyZtnN2
Mt1VUDbuuDh+5DcoKy1e9mLyQB+vhzjwjKUBisMDb3FoYBRHB3J9NODbP4iAUgGlAso4li4fLlnw
8CctEgAAAABJRU5ErkJggg==
"
    } else {
	tablelist_${treeStyle}_collapsedImg put "
R0lGODlhEAASAOMIAAAAAIaGhouLi5CQkJiYmKGhoaioqMPDw///////////////////////////
/////yH5BAEKAAAALAAAAAAQABIAAAQrEMhJq70426OrMd0EFiEAAkR4AkO3AoL2AkH2xvbUylLq
AiTVLMMpGY+ACAA7
"
	tablelist_${treeStyle}_expandedImg put "
R0lGODlhEAASAMIGAAAAACYmJisrK1lZWYaGhoiIiP///////yH5BAEKAAcALAAAAAAQABIAAAMj
eLrc/jDKSWepR4Qqxp6dBw7kB4VlhKbPyjZFIM8Bgd14DiUAOw==
"
	tablelist_${treeStyle}_collapsedActImg put "
R0lGODlhEAASAMIFAAAAABzE9ybG9yvH93jc+v///////////yH5BAEKAAcALAAAAAAQABIAAAMj
eLrc/jA6IpsYdYmzc+8SCELj6JhBVIZa9XlcxmEyJd/4kQAAOw==
"
	tablelist_${treeStyle}_expandedActImg put "
R0lGODlhEAASAMIFAAAAAB3E92HW+Xvd+4Lf+////////////yH5BAEKAAcALAAAAAAQABIAAAMj
eLrc/jDKSaeoJ4Qaxp4d8UWhKJUmhKbOyjKCJmsXZt/4kwAAOw==
"
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
iVBORw0KGgoAAAANSUhEUgAAABUAAAASCAYAAAC0EpUuAAAABGdBTUEAALGPC/xhBQAAAAlwSFlz
AAAOwAAADsABataJCQAAAAd0SU1FB98IEBUWORalREAAAAAadEVYdFNvZnR3YXJlAFBhaW50Lk5F
VCB2My41LjEwMPRyoQAAAJNJREFUOE+10zsKgDAQBNCt7fyAhY2Qa3gPO1tLGxtPHye4RdgNJpI1
8DBOwiBqyHtvLhnWSoa1dEC0QCvzL3RAtLJBrpXSwVPYwQajXC+hA5TytYcdJrknRwdcyvNQfMAc
78nRQVTK96H4BBfnb3QgSjlzcEEj11J08PeTYti+Uwzbrw/2/ykzPVH2Z99CMqzj6QYGRertj0pe
+AAAAABJRU5ErkJggg==
"
	tablelist_${treeStyle}_expandedImg put "
iVBORw0KGgoAAAANSUhEUgAAABUAAAASCAYAAAC0EpUuAAAABGdBTUEAALGPC/xhBQAAAAlwSFlz
AAAOwAAADsABataJCQAAAAd0SU1FB98IEBUeBx8d0+MAAAAadEVYdFNvZnR3YXJlAFBhaW50Lk5F
VCB2My41LjEwMPRyoQAAAGtJREFUOE+tzMEJwCAQRFG7Sw1biaTPXFLNxoUIi3w9OArv4Ii/uPtx
OKpwVOGowlGF46idq6n0RnDM/uDTvPROcOx60Mziokdz8Eh0DMpRCkrRWXA7ugqG3WiNjwt3/riC
owpHFY4qHDVePsGgC4kbm9dDAAAAAElFTkSuQmCC
"
	tablelist_${treeStyle}_collapsedActImg put "
iVBORw0KGgoAAAANSUhEUgAAABUAAAASCAYAAAC0EpUuAAAABGdBTUEAALGPC/xhBQAAAAlwSFlz
AAAOwAAADsABataJCQAAAAd0SU1FB98IEBUVIS7kj9UAAAAadEVYdFNvZnR3YXJlAFBhaW50Lk5F
VCB2My41LjEwMPRyoQAAAJNJREFUOE+tkzEKgDAMRT2Il/EKro4ujt7GC3keBwcdYwIplPxAW5vh
UX0pj4J2IKJwXNmLK3sBMZ7vwczWtwCCgzdzMYud1QJCo5uuq53XAEJiukr4kdXuKQEiRfU5hfd8
TwkQeVTfm8MgbFSdhImZ7MwDhI1qMO6kf4ICiBTNgjFfX4Ox/ykTfqPi734EruyDhg9wSVOrXMoi
bgAAAABJRU5ErkJggg==
"
	tablelist_${treeStyle}_expandedActImg put "
iVBORw0KGgoAAAANSUhEUgAAABUAAAASCAYAAAC0EpUuAAAABGdBTUEAALGPC/xhBQAAAAlwSFlz
AAAOwAAADsABataJCQAAAAd0SU1FB98IEBUbEg+3w00AAAAadEVYdFNvZnR3YXJlAFBhaW50Lk5F
VCB2My41LjEwMPRyoQAAAHJJREFUOE+t0rENgCAURVEGcUh7OzdiB9cwjmFB8cVEEvJzpeD94hQ+
5FYkMwuHowpHFY4qHFU4estxr1WmM4Jj7wuWqn7yPx6OTQtuZ7GQaB/cr4CoD8pRCkrRv+B0dBRU
ovm9OBD3TmfgqMJRhaPG0gNGBmbxSYGdJwAAAABJRU5ErkJggg==
"
    } else {
	tablelist_${treeStyle}_collapsedImg put "
R0lGODlhFQASAOMIAAAAAIaGhouLi5CQkJiYmKGhoaioqMPDw///////////////////////////
/////yH5BAEKAAAALAAAAAAVABIAAAQvEMhJq7046w0Ox4bxWWIxUiJAnFIKDKwLCKcMBKNM5xNc
S6sYwMQChIoSD3LJjAAAOw==
"
	tablelist_${treeStyle}_expandedImg put "
R0lGODlhFQASAMIGAAAAACYmJisrK1lZWYaGhoiIiP///////yH5BAEKAAcALAAAAAAVABIAAAMl
eLrc/jDKSauV5TIRtBJDp4HhOJxiRaLWylLuiwV0HRBeru97AgA7
"
	tablelist_${treeStyle}_collapsedActImg put "
R0lGODlhFQASAMIFAAAAABzE9ybG9yvH93jc+v///////////yH5BAEKAAcALAAAAAAVABIAAAMn
eLrc/jDKeQiFYlwnTt/L94HjeJnmlAYbSoagp6RUR9darFh67y8JADs=
"
	tablelist_${treeStyle}_expandedActImg put "
R0lGODlhFQASAMIFAAAAAB3E92HW+Xvd+4Lf+////////////yH5BAEKAAcALAAAAAAVABIAAAMl
eLrc/jDKSauV4rIQtApDp4GEaJHlhabVyk7uGwlczWVeru96AgA7
"
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
qHhMulHdBJTllYFcKoSoZ60eBDH2UgAAOw==
"
    tablelist_${treeStyle}_expandedImg put "
R0lGODlhCwAOAKECAAAAAICAgP///////yH5BAEKAAMALAAAAAALAA4AAAIfnI+pm+H/TBC0iiBt
xWPqmwGiCHZf6Wlcaq0QxMRLAQA7
"
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
qRdgPXCWl1EYaYEVwLaeen5mJ29xaWN1KEnNDxwUAAA7
"
    tablelist_${treeStyle}_expandedImg put "
R0lGODlhDgAQAKECAAAAAICAgP///////yH5BAEKAAMALAAAAAAOABAAAAIonI+pyxoPYzhB2Hun
qRjrwXXWF4qkAKQqIJziSL3wJrexTEpSw/dDAQA7
"
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
CFUDzR1W9mWhMWIldg7ptV6tBdS2vXUkqKu86PmhgqaehlWZKFuOpnNQAAA7
"
    tablelist_${treeStyle}_expandedImg put "
R0lGODlhEQASAKECAAAAAICAgP///////yH5BAEKAAMALAAAAAARABIAAAIxnI+py60Bo4woiIuz
CFV7flheBhrieJXDiaoWAMfx1qFpbbv2He50v3NNhiqH8TgoAAA7
"
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
FAAAOw==
"
    tablelist_${treeStyle}_expandedImg put "
R0lGODlhFwASAKECAAAAAICAgP///////yH5BAEKAAMALAAAAAAXABIAAAI+nI+pFu0Pmwqi2ovD
xPzqRHXdh4Ritp0oqK5lBcTyDFTkEdK6neo0z2pZbgzhMGUkDkxCJbPlNAJLkapDUQAAOw==
"
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
iVBORw0KGgoAAAANSUhEUgAAABAAAAAKCAYAAAC9vt6cAAAAAXNSR0IArs4c6QAAAARnQU1BAACx
jwv8YQUAAAAJcEhZcwAADsMAAA7DAcdvqGQAAAAadEVYdFNvZnR3YXJlAFBhaW50Lk5FVCB2My41
LjEwMPRyoQAAAExJREFUKFNj+P//P0UYwWBg0AFiB2RJYjCCAdQMxJGkGoLKIcMQTAESDcEuyMAQ
DDVEB5s8MsYUoMQFpGoGYQSDDM0gjGCQlQ7+MwAAiH+aQTbAbFoAAAAASUVORK5CYII=
"
	tablelist_win10_expandedImg put "
iVBORw0KGgoAAAANSUhEUgAAABAAAAAKCAYAAAC9vt6cAAAAAXNSR0IArs4c6QAAAARnQU1BAACx
jwv8YQUAAAAJcEhZcwAADsMAAA7DAcdvqGQAAAAadEVYdFNvZnR3YXJlAFBhaW50Lk5FVCB2My41
LjEwMPRyoQAAAFRJREFUKFNj+P//P0UYqyApGATigbgDh2QHSB6bHAzDFO0H0WgSWMXRMYRAU4zO
x4cRDKgmHx8fEIcozSCMyiHBZhjGFCAQaOgYqyApGKsg8fg/AwClVaMkbFpt/wAAAABJRU5ErkJg
gg==
"
    } else {
	tablelist_win10_collapsedImg put "
R0lGODlhEAAKAMIGAAAAAKampqysrL+/v9LS0tTU1P///////yH5BAEKAAcALAAAAAAQAAoAAAMZ
eLrcS8PJM0KcrV68NGdCUHyURXof+kFkAgA7
"
	tablelist_win10_expandedImg put "
R0lGODlhEAAKAMIHAAAAAEBAQExMTHd3d5+fn6CgoKGhof///yH5BAEKAAcALAAAAAAQAAoAAAMb
eLrc/oyMNsobYSqsHT8fBAZCJi7hqRhq6z4JADs=
"
    }

    tablelist_win10_collapsedActImg put "
R0lGODlhEAAKAMIGAAAAAE7Q+VjS+Xra+5vh/Jri/P///////yH5BAEKAAcALAAAAAAQAAoAAAMZ
eLrcW8PJM0KcrV68NGdCQHyURXof+kFkAgA7
"
    tablelist_win10_expandedActImg put "
R0lGODlhEAAKAMIGAAAAABzE9yjH+FbS+YDb+4Lc+////////yH5BAEKAAcALAAAAAAQAAoAAAMb
eLrc/oyMNsobYSqsHT8fBAZCJi7hqVhq6zoJADs=
"
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
iVBORw0KGgoAAAANSUhEUgAAABoAAAAMCAYAAAB8xa1IAAAAAXNSR0IArs4c6QAAAARnQU1BAACx
jwv8YQUAAAAJcEhZcwAADsMAAA7DAcdvqGQAAAAadEVYdFNvZnR3YXJlAFBhaW50Lk5FVCB2My41
LjEwMPRyoQAAAF1JREFUOE+9lMEJwDAMA71QJ+gG3aD7D+JK0EKN9QlYCdxDl8eRTyIzt1BHxAGu
v5uiDkTA7Yh1YYppaYhJSaZjUn68IXKq+xWkJDj+F01HSBeGCKnDFCF12H6GjAdLF1EmW/vAagAA
AABJRU5ErkJggg==
"
	tablelist_win10_expandedImg put "
iVBORw0KGgoAAAANSUhEUgAAABoAAAAMCAYAAAB8xa1IAAAAAXNSR0IArs4c6QAAAARnQU1BAACx
jwv8YQUAAAAJcEhZcwAADsMAAA7DAcdvqGQAAAAadEVYdFNvZnR3YXJlAFBhaW50Lk5FVCB2My41
LjEwMPRyoQAAAGNJREFUOE+9j4EJwCAMBDNqN3GUjuJosY8Eqf0UqUmFU3MfIoqq/gKVGVCZAdZx
cbLQQI4+lq1iQypOp+E1X6VvzjDPf2FcpqFzvcu9GMONkEfAUwT/xOBSpDC/A5UZUBmPSgPj7VvG
j4QeDgAAAABJRU5ErkJggg==
"
    } else {
	tablelist_win10_collapsedImg put "
R0lGODlhGgAMAMIFAAAAAKamprW1tcTExNLS0v///////////yH5BAEKAAcALAAAAAAaAAwAAAMi
eLrc/ocISJ8Is2p1867dp4UiFQRDaWGqQ7bLCx/yLM1KAgA7
"
	tablelist_win10_expandedImg put "
R0lGODlhGgAMAMIHAAAAAEBAQEFBQWBgYICAgJ+fn6CgoP///yH5BAEKAAcALAAAAAAaAAwAAAMi
eLrc/jDKSct4w9A1wmXdtx0h543gWaKpcLLNCjfEbN9oAgA7
"
    }

    tablelist_win10_collapsedActImg put "
R0lGODlhGgAMAMIGAAAAAE7Q+WfV+mjV+oHc+5ri/P///////yH5BAEKAAcALAAAAAAaAAwAAAMj
eLrc/qcISJ8Is2p1867X8GnhWAUBYVrY6nRuA8fLTCvSfSQAOw==
"
    tablelist_win10_expandedActImg put "
R0lGODlhGgAMAMIGAAAAABzE9z7M+F/U+oDb+4Hc+////////yH5BAEKAAcALAAAAAAaAAwAAAMi
eLrc/jDKSYl4otAlwmXdtx0h543gWaJpcLLNCjfDbN9oAgA7
"
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
iVBORw0KGgoAAAANSUhEUgAAAB8AAAAQCAYAAADu+KTsAAAAAXNSR0IArs4c6QAAAARnQU1BAACx
jwv8YQUAAAAJcEhZcwAADsMAAA7DAcdvqGQAAAAadEVYdFNvZnR3YXJlAFBhaW50Lk5FVCB2My41
LjEwMPRyoQAAAIZJREFUSEvNlbENgDAMBD0IDQNQswQLsP8gxi8R5OCvkOMQ6YocSOc0iajqNLgU
WZjPJgqRzTiN/f0tm35jJ77DjaEDRGFBFx86AJdFA1AJEHTxIQNQ2UDQxdMHoNJj63BxsLL/vkBl
w9ackyPkoulhwGVBGERRFAb95gc33Jy7/ZElr5rKBVezH+eTfDdNAAAAAElFTkSuQmCC
"
	tablelist_win10_expandedImg put "
iVBORw0KGgoAAAANSUhEUgAAAB8AAAAQCAYAAADu+KTsAAAAAXNSR0IArs4c6QAAAARnQU1BAACx
jwv8YQUAAAAJcEhZcwAADsMAAA7DAcdvqGQAAAAadEVYdFNvZnR3YXJlAFBhaW50Lk5FVCB2My41
LjEwMPRyoQAAAJVJREFUSEvFkNkNgCAQRLcvCrAIfqzC9iwNmXiwukPiASvJ43i7YVBJKf0GlV5Q
6UXZiARdqHG37w7rJDJm5sx0bdCgvvWNrP4UjLBduEMfAK96wOc/sE724tMDcFY1U39L2VQCsCp3
+BacD5egGCNkl2Bghf3SLsGAS/uA5sGASoDAnsGAyp08BuZbQaUXVHpBpQ9JFsLONZHqquN4AAAA
AElFTkSuQmCC
"
    } else {
	tablelist_win10_collapsedImg put "
R0lGODlhHwAQAOMIAAAAAKamprOzs8jIyNLS0t7e3uPj4+Tk5P//////////////////////////
/////yH5BAEKAAAALAAAAAAfABAAAAQ3EMhJq7344M0lCUMnUkZghuM4mGCqsqjLrafc0a29CWyh
X7jYbxIcVopGIiw5KdWYk48QCtBAIwA7
"
	tablelist_win10_expandedImg put "
R0lGODlhHwAQAOMJAAAAAEBAQFtbW4mJiZ+fn6CgoLi4uMTExMXFxf//////////////////////
/////yH5BAEKAA8ALAAAAAAfABAAAAQ58MlJq7046807RRnoUUQwXENQjNIRvCeVvgf7zOaEx/Z+
vzmbDigA8oQSHAxp8TGbwafFIK1ar9IIADs=
"
    }

    tablelist_win10_collapsedActImg put "
R0lGODlhHwAQAMIHAAAAAE7Q+WTV+oje+5ri/K3m/bbo/f///yH5BAEKAAcALAAAAAAfABAAAAM0
eLrc/tDASRUJo2pmgs/bNnhYKJKgSY2fWrGlOwlkIT9wei/53vQ+Hiq46LSIi4sOeZAgEwA7
"
    tablelist_win10_expandedActImg put "
R0lGODlhHwAQAOMJAAAAABzE9zjK+GnW+oDb+4Hc+5rh/Kfl/ajl/f//////////////////////
/////yH5BAEKAA8ALAAAAAAfABAAAAQ58MlJq7046807RRnoUUQwXENQjNIRvCeVvgf7zOaEx/Z+
vzmbDigA8oQSHAxp8TGbwafFIK1ar9IIADs=
"
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
iVBORw0KGgoAAAANSUhEUgAAACgAAAASCAYAAAApH5ymAAAAAXNSR0IArs4c6QAAAARnQU1BAACx
jwv8YQUAAAAJcEhZcwAADsMAAA7DAcdvqGQAAAAadEVYdFNvZnR3YXJlAFBhaW50Lk5FVCB2My41
LjEwMPRyoQAAAJJJREFUSEvV1rENwCAMRFEGykDZfxGHKyyh45fYIpFe8+PiSkZEoPk91LtxnOOm
V+h/pz0s45LfdOJoA4XuOmAUHyh0Vw1j8oFCd5Uwrnyg0F0VjM4HCt1VwEh8oNDdaRiJjxO6Ow2j
82FCdxUwrnyY0F0VjMmHCd1Vwig+TOiuGsdLxskefvJYuPe5lTSSeq8YH+NamKxWvX/LAAAAAElF
TkSuQmCC
"
	tablelist_win10_expandedImg put "
iVBORw0KGgoAAAANSUhEUgAAACgAAAASCAYAAAApH5ymAAAAAXNSR0IArs4c6QAAAARnQU1BAACx
jwv8YQUAAAAJcEhZcwAADsMAAA7DAcdvqGQAAAAadEVYdFNvZnR3YXJlAFBhaW50Lk5FVCB2My41
LjEwMPRyoQAAAJFJREFUSEvNzgEKgCAMhWFv2k272nKItdZvWDRa8Ik9J74iIqlhmAmGmRybUhZ7
MOPNnafaUh+qVuUHRvp8FVpSv71cR4OWn6/CSrbl+uCwpJ9TNPeVYzPxsD9XfuZr55+bAj5X9m6U
awBFiL8XhUMoZNGdKBgqX6qj2UgYdn+XUxhaf5ZTGGaCYSYYZoJhHlI2JrC2jqb+LJ4AAAAASUVO
RK5CYII=
"
    } else {
	tablelist_win10_collapsedImg put "
R0lGODlhKAASAMIHAAAAAKampqenp6ioqNLS0tPT09TU1P///yH5BAEKAAcALAAAAAAoABIAAANB
eLq1/jDKV4KYOEMT+tUgJnRWaEajd67LQH7s6ZLxOne1TAZ5ePO9zC8o3BExN9gRklxKUiUnpKKS
RghR61W7SAAAOw==
"
	tablelist_win10_expandedImg put "
R0lGODlhKAASAMIGAAAAAEBAQEJCQp+fn6CgoKGhof///////yH5BAEKAAcALAAAAAAoABIAAAM/
eLrc/jDKSau9qlCN4QiCJARE5xBBGj5jyplLCzryCjM1ns43va+5HusXFA53KqMIaVNCWk3nMyqt
Wq/YrCUBADs=
"
    }

    tablelist_win10_collapsedActImg put "
R0lGODlhKAASAMIFAAAAAE7Q+VHQ+Zrh/Jri/P///////////yH5BAEKAAcALAAAAAAoABIAAAM9
eLqz/jDKN4KYOMMarP6Z0HlgCYndZa4K2rGsG8CrTJv2/eU6xveSH/A0mg2DI9WRmFpGOCQnhBCV
Tq2LBAA7
"
    tablelist_win10_expandedActImg put "
R0lGODlhKAASAMIEAAAAAB3E94Db+4Hc+////////////////yH5BAEKAAAALAAAAAAoABIAAAM6
CLrc/jDKSau9alCNoQiBBHIdM4AghAZkqaxhA7vOvNi0vL57/sA4Xw0YE6qCxh8qSUkxn9CodFpK
AAA7
"
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
BTYjWnGVd1DAeWJa2K2CqH5X+0VRg+dHAQA7
"
    tablelist_winnative_expandedImg put "
R0lGODlhDgAOAKECAAAAAICAgP///////yH5BAEKAAMALAAAAAAOAA4AAAIinI+pyxoPYQqiWhHm
tRnRjWnAOIYeaB7f1qloa0RyQ9dHAQA7
"
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
oQAmkEb0E4g4GICFArENJA4FAmFg2K5cLFhqTheFAAA7
"
    tablelist_winxpBlue_expandedImg put "
R0lGODlhDgAOAKUgAAAAAHiYtbDC08C3psG4p8K4qMO6qsa+rs/Iu9LMv9LMwNbRxtfSx9jTydvW
zNzYz9/b0uPg2eTh2eXh2urp4+zr5u3t5/Hw6/Dw7PLy7vX18ff28/b29Pf39fz8+vz8+///////
////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////yH5BAEKAD8ALAAAAAAOAA4AAAZNwJ9w
SCwaj0ijIMBsBgTFAGhKBQWin2zWs7kSA50OZ3yZeIcBDWC9hpyFgQzGUqFEHO9fQPJoMBYKCHkB
CQcFBAQDBnlLTkxQSZGSQkEAOw==
"
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
AUgeDGgA0lgAFImDFmEgDAaCAjTaWqXecFIIADs=
"
    tablelist_winxpOlive_expandedImg put "
R0lGODlhDgAOAKUfAAAAAI6ZfcC3psG4p8K4qMO6qsa+rs/Iu9LMv9LMwNbRxtfSx9jTydvWzNzY
z9/b0uPg2eTh2eXh2urp4+zr5u3t5/Hw6/Dw7PLy7vX18ff28/b29Pf39fz8+vz8+///////////
////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////yH5BAEKACAALAAAAAAOAA4AAAZJQJBw
SCwaj8hjYMkMGAOfqPTjJAY8WGxHUx0GOJyN2CLpCgMZgFr9MIMCmEuFMoE03IGIg7FQJA54CAYE
AwMCBW5vTUtJjY5EQQA7
"
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
eDQUz0BjkQAgDobsoTAoCwhPaGuVartJIQA7
"
    tablelist_winxpSilver_expandedImg put "
R0lGODlhDgAOAIQYAAAAAJSVosTO2MXP2cbO2svT3NPZ4tXb5Nnf5trg593i6d/l6uDm6+bq7ufr
7+zv8+/x8+/y9PLz9vT39/b3+ff4+vn6+v39/f///////////////////////////////yH5BAEK
AB8ALAAAAAAOAA4AAAVC4CeOZGme6BmsbGAGWCxjLhlceF7VY2BZlaDEwRMFKIBkklH8BCaSCOTR
UDQDjUUigTgYrofCYCwgNJ2tVWrNJoUAADs=
"
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
E4Fg0KDoPWalHcmIJCmLMpZC8DKGpCYUqMNJYb6PCAA7
"
    tablelist_yuyo_expandedImg put "
R0lGODlhDwAOAOMIAAAAAIiKhb7AvMDBvsrMyd3e3eHi4f7+/v//////////////////////////
/////yH5BAEKAA8ALAAAAAAPAA4AAAQ58MlJq72TiM0FqYRxICR5GN8kjGV5CJTQzrA6t7UkD0Hf
F4jcQ3YjCYnFI2v2ooSWJhSow0lhro8IADs=
"
}

#------------------------------------------------------------------------------
# tablelist::createTreeImgs
#------------------------------------------------------------------------------
proc tablelist::createTreeImgs {treeStyle depth} {
    set baseWidth  [image width  tablelist_${treeStyle}_collapsedImg]
    set baseHeight [image height tablelist_${treeStyle}_collapsedImg]

    #
    # Get the width of the images to create for the specified depth and
    # the destination x coordinate for copying the base images into them
    #
    set width [expr {$depth * $baseWidth}]
    set x [expr {($depth - 1) * $baseWidth}]
    switch -regexp -- $treeStyle {
	^win10$ {
	    variable scalingpct
	    switch $scalingpct {
		100 { set factor -8 }
		125 { set factor -16 }
		150 { set factor -19 }
		200 { set factor -24 }
	    }
	}
	^(vistaAero|win7Aero)$ {
	    variable scalingpct
	    switch $scalingpct {
		100 { set factor  0 }
		125 { set factor -3 }
		150 { set factor -6 }
		200 { set factor -11 }
	    }
	}
	^(vistaClassic|win7Classic)$ {
	    variable scalingpct
	    switch $scalingpct {
		100 { set factor -1 }
		125 { set factor -4 }
		150 { set factor -7 }
		200 { set factor -13 }
	    }
	}
	^ubuntu$					{ set factor -2 }
	^(mate|mint2)$					{ set factor -1 }
	^(blueMenta|menta|mint|newWave|ubuntu2)$	{ set factor  1 }
	^(ubuntu3|ubuntuMate)$				{ set factor  2 }
	^plasti.+$					{ set factor  3 }
	^(adwaita|aqua|arc)$				{ set factor  4 }
	^(oxygen.|phase|winnative|winxp.+)$		{ set factor  5 }
	^(baghira|klearlooks)$				{ set factor  7 }
	default						{ set factor  0 }
    }
    set delta [expr {($depth - 1) * $factor}]
    incr width $delta
    incr x $delta

    foreach mode {indented collapsed expanded} {
	image create photo tablelist_${treeStyle}_${mode}Img$depth \
	    -width $width -height $baseHeight
    }

    foreach mode {collapsed expanded} {
	tablelist_${treeStyle}_${mode}Img$depth copy \
	    tablelist_${treeStyle}_${mode}Img -to $x 0

	foreach modif {Sel Act SelAct} {
	    variable ${treeStyle}_${mode}${modif}Img
	    if {[info exists ${treeStyle}_${mode}${modif}Img]} {
		image create photo \
		    tablelist_${treeStyle}_${mode}${modif}Img$depth \
		    -width $width -height $baseHeight
		tablelist_${treeStyle}_${mode}${modif}Img$depth copy \
		    tablelist_${treeStyle}_${mode}${modif}Img -to $x 0
	    }
	}
    }
}
