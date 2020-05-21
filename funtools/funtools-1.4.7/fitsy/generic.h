/* generic.h */

typedef unsigned char  _uchar;
typedef unsigned short _ushort;
typedef unsigned int   _uint;

#define DOUBLE_EXPAND(ch, type, FUNCTION)		\
							\
FUNCTION(ch,type,c,char)				\
FUNCTION(ch,type,s,short)				\
FUNCTION(ch,type,i,int)					\
FUNCTION(ch,type,l,longlong)				\
FUNCTION(ch,type,r,float)				\
FUNCTION(ch,type,d,double)				\
FUNCTION(ch,type,t,_uchar)				\
FUNCTION(ch,type,u,_ushort)				\
FUNCTION(ch,type,v,_uint)				\

#define DOUBLE_GENERIC(FUNCTION)			\
							\
DOUBLE_EXPAND(c,char,FUNCTION)				\
DOUBLE_EXPAND(s,short,FUNCTION)				\
DOUBLE_EXPAND(i,int,FUNCTION)				\
DOUBLE_EXPAND(l,longlong,FUNCTION)			\
DOUBLE_EXPAND(r,float,FUNCTION)				\
DOUBLE_EXPAND(d,double,FUNCTION)			\
DOUBLE_EXPAND(t,_uchar,FUNCTION)			\
DOUBLE_EXPAND(u,_ushort,FUNCTION)			\
DOUBLE_EXPAND(v,_uint,FUNCTION)				\

