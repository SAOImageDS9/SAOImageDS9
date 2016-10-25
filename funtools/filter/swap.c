#if __DARWIN_BYTE_ORDER
#define XBYTE_ORDER __DARWIN_BYTE_ORDER
#else
#define XBYTE_ORDER 0
#endif

#ifndef MYBYTE_ORDER
#define MYBYTE_ORDER XBYTE_ORDER
#endif

#ifndef DO_FILTER_SWAP
#if (XBYTE_ORDER !=0) && (XBYTE_ORDER != MYBYTE_ORDER)
#define DO_FILTER_SWAP 1
#endif
#endif

#if DO_FILTER_SWAP
char *_sw2(char *s, int n, char *_swf, int off)
{
  char c;
  char *t=s;
  size_t i;
  if( !_swf || !_swf[off]++ ){
    for (i=0; i<n; i += 2, s += 2) {
      c      = *s;
      *(s)   = *(s+1);
      *(s+1) = c;
    }
  }
  return t;
}

char *_sw4(char *s, int n, char *_swf, int off)
{
  char c;
  char *t=s;
  size_t i;
  if( !_swf || !_swf[off]++ ){
    for (i=0; i<n; i += 4, s += 4) {
      c      = *s;
      *s     = *(s+3);
      *(s+3) = c;
      c      = *(s+1);
      *(s+1) = *(s+2);
      *(s+2) = c;
    }
  }
  return t;
}

char *_sw8(char *s, int n, char *_swf, int off)
{
  char c;
  char *t=s;
  size_t i;
  if( !_swf || !_swf[off]++ ){
    for (i=0; i<n; i += 8, s += 8) {
      c      = *(s+0);
      *(s+0) = *(s+7);
      *(s+7) = c;
      c      = *(s+1);
      *(s+1) = *(s+6);
      *(s+6) = c;
      c      = *(s+2);
      *(s+2) = *(s+5);
      *(s+5) = c;
      c      = *(s+3);
      *(s+3) = *(s+4);
      *(s+4) = c;
    }
  }
  return t;
}

#define SW1(a,n,b,i) a
#define SW2(a,n,b,i) _sw2(a,n,b,i)
#define SW4(a,n,b,i) _sw4(a,n,b,i)
#define SW8(a,n,b,i) _sw8(a,n,b,i)

#if defined(FILTER_PTYPE) && (FILTER_PTYPE != c)
#error "FILTER_PTYPE environment variable must be 'c' when running with Rosetta"
#endif

#else

#define SW1(a,n,b,i) a
#define SW2(a,n,b,i) a
#define SW4(a,n,b,i) a
#define SW8(a,n,b,i) a

#endif

