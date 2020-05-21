#include <mainlib.h>


int funcalc_main _PRx((int argc, char **argv));
int funcen_main _PRx((int argc, char **argv));
int funcnts_main _PRx((int argc, char **argv));
int funcone_main _PRx((int argc, char **argv));
int fundisp_main _PRx((int argc, char **argv));
int funhead_main _PRx((int argc, char **argv));
int funhist_main _PRx((int argc, char **argv));
int funimage_main _PRx((int argc, char **argv));
int funjoin_main _PRx((int argc, char **argv));
int funmerge_main _PRx((int argc, char **argv));
int funsky_main _PRx((int argc, char **argv));
int funtable_main _PRx((int argc, char **argv));

void *funtoolsMainLibInit(void)
{
  MainLib ml;
  if( !(ml=MainLibNew()) )
     return NULL;
  if( !MainLibAdd(ml, "funtools", "funcalc", funcalc_main, MAINLIB_ARGV) )
     return NULL;
  if( !MainLibAdd(ml, "funtools", "funcen", funcen_main, MAINLIB_ARGV) )
     return NULL;
  if( !MainLibAdd(ml, "funtools", "funcnts", funcnts_main, MAINLIB_ARGV) )
     return NULL;
  if( !MainLibAdd(ml, "funtools", "funcone", funcone_main, MAINLIB_ARGV) )
     return NULL;
  if( !MainLibAdd(ml, "funtools", "fundisp", fundisp_main, MAINLIB_ARGV) )
     return NULL;
  if( !MainLibAdd(ml, "funtools", "funhead", funhead_main, MAINLIB_ARGV) )
     return NULL;
  if( !MainLibAdd(ml, "funtools", "funhist", funhist_main, MAINLIB_ARGV) )
     return NULL;
  if( !MainLibAdd(ml, "funtools", "funimage", funimage_main, MAINLIB_ARGV) )
     return NULL;
  if( !MainLibAdd(ml, "funtools", "funjoin", funjoin_main, MAINLIB_ARGV) )
     return NULL;
  if( !MainLibAdd(ml, "funtools", "funmerge", funmerge_main, MAINLIB_ARGV) )
     return NULL;
  if( !MainLibAdd(ml, "funtools", "funsky", funsky_main, MAINLIB_ARGV) )
     return NULL;
  if( !MainLibAdd(ml, "funtools", "funtable", funtable_main, MAINLIB_ARGV) )
     return NULL;
  return ml;
}

