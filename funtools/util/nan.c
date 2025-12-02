/*
 *	Copyright (c) 1999-2003 Smithsonian Astrophysical Observatory
 */

#include <swap.h>
#include <prsetup.h>

/*
 *
 * getnanf() -- return a float NaN
 *
 */
#ifdef ANSI_FUNC
float getnanf(void)
#else
float getnanf()
#endif
{
  unsigned char nan[4];
  int i;

  for(i=0; i<4; i++)
    nan[i] = 1;

  if( is_bigendian() ){
    nan[0] = 0x7F;
    nan[1] = 0x80;
  }
  else{
    nan[3] = 0x7F;
    nan[2] = 0x80;
  }

  return(*((float *)nan));
}

/*
 *
 * getnand() -- return a double NaN
 *
 */
#ifdef ANSI_FUNC
double getnand(void)
#else
double getnand()
#endif
{
  unsigned char nan[8];
  int i;
  
  for(i=0; i<8; i++)
    nan[i] = 1;

  if( is_bigendian() ){
    nan[0] = 0x7F;
    nan[1] = 0xF0;
  }
  else{
    nan[7] = 0x7F;
    nan[6] = 0xF0;
  }

  return(*((double *)nan));
}

