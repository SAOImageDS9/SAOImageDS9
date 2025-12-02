/*
 *	Copyright (c) 2004 Smithsonian Astrophysical Observatory
 */

/*
 *
 * parse.h - include file for the indexed man pager
 *
 */

#ifndef	__parse_h
#define	__parse_h

#if HAVE_CONFIG_H
#include "conf.h"
#endif

#include <stdio.h>
#ifdef HAVE_UNISTD_H
#include <unistd.h>
#endif
#ifdef HAVE_STRING_H
#include <string.h>
#endif
#ifdef HAVE_STDLIB_H
#include <stdlib.h>
#endif
#ifdef HAVE_MALLOC_H
#include <malloc.h>
#endif
#ifdef HAVE_GETOPT_H
#include <getopt.h>
#endif
#include <ctype.h>

#include "prsetup.h"
#include "strtod.h"
#include "xalloc.h"
#include "word.h"
#include "gio.h"
#include "longlong.h"

#define PARSE_DEBUG 1
#if PARSE_DEBUG
#define FPRINTF(x) fprintf x
#define PERROR(x)  perror x
#else
#define FPRINTF(x)
#define PERROR(x)
#endif

#define PARSE_TABLE_SIZE 	256
#define PARSE_TOKEN_INCR	1024
#define PARSE_DEFAULT_DELIMS	" \t\n"
#define PARSE_DEFAULT_COMCHARS	"#\n"
#define PARSE_DEFAULT_CONVERT	1
#define PARSE_DEFAULT_NULLVALUES "nullvalue=false"
#define PARSE_DEFAULT_WHITESPACE "whitespace=true"
#define PARSE_DEFAULT_UNITS      "units=false"
#define PARSE_DEFAULT_COMEOT     "comeot=1"
#define PARSE_DEFAULT_LAZYEOT    "lazyeot=1"
#define PARSE_DEFAULT_ALEN      16

/* token types */
#define PARSE_COMMENT 'c'
#define PARSE_DASH    'd'
#define PARSE_EOL     'e'
#define PARSE_FLOAT   'f'
#define PARSE_HEXINT  'h'
#define PARSE_INTEGER 'i'
#define PARSE_NULL    'n'
#define PARSE_STRING  's'
#define PARSE_EOT     'z'


/* machine states */
#define PARSE_STATE_INITIAL 	1
#define PARSE_STATE_STRING  	2
#define PARSE_STATE_DATA    	4
#define PARSE_STATE_BADMATCH    8
#define PARSE_STATE_BADMAX	16
#define PARSE_STATE_BADTYPE	32
#define PARSE_STATE_NEXTLINE	64
#define PARSE_STATE_REDOLINE	128
#define PARSE_STATE_UNKNOWN	256
#define PARSE_STATE_EOT		512

/* define if a change from numeric columns to an ascii column signals EOT,
   instead of BADTYPE */
#define PARSE_LOOSELY 1

#define PARSE_STATE_BAD		(PARSE_STATE_BADMATCH|PARSE_STATE_BADMAX|PARSE_STATE_BADTYPE|PARSE_STATE_UNKNOWN)
#define PARSE_ISCOMMENT(line)	(line->types[0] == PARSE_COMMENT)

typedef struct parsedtokenRec{
  char *sval;
  double dval;
  longlong lval;
  int type;
  int delim;
} *ParsedToken, ParsedTokenRec;

typedef struct parsedlineRec{
  int state;
  int ntoken;
  char *types;
  int ntypes[PARSE_TABLE_SIZE];
  int maxtoken;
  ParsedToken tokens;
} *ParsedLine, ParsedLineRec;

typedef struct eotRec{
  int nline;
  int maxline;
  int ncur;
  char **lines;
} *ParsedEOT, ParsedEOTRec;

typedef struct parseRec{
  char *delims;
  char *comchars;
  char *mode;
  int debug;
  int delimtab[PARSE_TABLE_SIZE];
  int comtab[PARSE_TABLE_SIZE];
  ParsedEOT eot;
  int nullvalues;
  int whitespace;
  int needheader;
  int needunits;
  int comeot;
  int lazyeot;
  int i2f;
  int convert;
  int nline;
  ParsedLine prev2;
  ParsedLine prev;
  ParsedLine cur;
  ParsedLine header;
  ParsedLine units;
  ParsedLine data1;
  int state;
  int ntoken;
  int data;
  char *types;
  ParsedToken tokens;
} *Parse, ParseRec;

_PRbeg

Parse ParseNew _PRx((char *delims, char *comchars, char *eot, char *mode));
	
ParsedLine ParseLineDup _PRx((Parse parse, ParsedLine line));

int  ParseWord _PRx((int *delims, int *comtab, int nullvalues, int whitespace,
  	             char *lbuf, void *token, int tmax,
		     int *lptr, int *lastd));

int ParseLine _PRx((Parse parse, char *lbuf, char *mode));

int ParseAnalyze _PRx((Parse *parsers, int nparser, char *lbuf));

int ParseReset _PRx((Parse parse, ParsedLine line, int state));

int ParseFree _PRx((Parse parse));

int ParseDataType _PRx((char *s, double *dval, longlong *ival));

_PRend

#endif /* __parse.h */
