#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#include "iis.h"
#include "xim.h"

/* Definitions for the supported ISM Modules. */
int	  ism_nmodules  = 0;

ismModule ism_modules[] = {
   {"wcspix", "", NULL, NULL, NULL, 0},
};

/* BSWAP2 - Move bytes from array "a" to array "b", swapping successive
 * pairs of bytes.  The two arrays may be the same but may not be offset
 * and overlapping.
 */
void bswap2 (char* a, char* b, int nbytes)
{
	register char *ip=a, *op=b, *otop;
	register unsigned temp;

	/* Swap successive pairs of bytes.
	 */
	for (otop = op + (nbytes & ~1);  op < otop;  ) {
	    temp  = *ip++;
	    *op++ = *ip++;
	    *op++ = temp;
	}

	/* If there is an odd byte left, move it to the output array.
	 */
	if (nbytes & 1)
	    *op = *ip;
}

/* GET_FBCONFIG -- Read the XIMTOOL startup file to get the set of possible
 * frame buffer sizes.
 *
 * File format:		configno nframes width height [extra fields]
 *	e.g.,			1  2  512  512
 *				2  2  800  800
 *				3  1 1024 1024		# comment
 */
void get_fbconfig (register XimDataPtr xim)
{
	register char	*ip;
	register FILE	*fp = NULL;
	int	config, nframes, width, height, i;
	char	lbuf[SZ_LINE+1], *fname;
	static char *fb_paths[] = {
		"/usr/local/lib/imtoolrc",
		"/opt/local/lib/imtoolrc",
		"/iraf/iraf/dev/imtoolrc",
		"/local/lib/imtoolrc",
		"/usr/iraf/dev/imtoolrc",
		"/usr/local/iraf/dev/imtoolrc",
		NULL};

	/* Initialize the config table. */
	xim->fb_configno = 1;
	for (i=0;  i < MAX_FBCONFIG;  i++) {
	    xim->fb_config[i].nframes = 1;
	    xim->fb_config[i].width = DEF_FRAME_WIDTH;
	    xim->fb_config[i].height = DEF_FRAME_HEIGHT;
	}

	/* Now add in some defaults for commonly used sizes based on the
 	 * standard IRAF imtoolrc file, we'll avoid any instrument specific
	 * configurations.
	 */
	xim->fb_config[0].width = xim->fb_config[0].height =  512;
	xim->fb_config[1].width = xim->fb_config[1].height =  800;
	xim->fb_config[2].width = xim->fb_config[2].height = 1024;
	xim->fb_config[3].width = xim->fb_config[3].height = 1600;
	xim->fb_config[4].width = xim->fb_config[4].height = 2048;
	xim->fb_config[5].width = xim->fb_config[5].height = 4096;

	/* Attempt to open the config file. */
	if ((fname=getenv(FBCONFIG_ENV1)) || (fname=getenv(FBCONFIG_ENV2)))
	    fp = fopen (fname, "r");
	if (!fp && (fname = getenv ("HOME"))) {
	    sprintf (lbuf, "%s/%s", fname, FBCONFIG_1);
	    fp = fopen (fname = lbuf, "r");
	    if (fp) {
	      if (xim->imtoolrc)
		free(xim->imtoolrc);
	      xim->imtoolrc = (char *) calloc (SZ_LINE, sizeof(char));
	      strncpy (xim->imtoolrc, fname, strlen(fname));
	    }
	}
	if (!fp)
	    fp = fopen (fname = xim->imtoolrc, "r");
 	for (i=0; !fp && fb_paths[i]; i++) {
	    if ((fp = fopen (fname = fb_paths[i], "r"))) {
	      if (xim->imtoolrc)
		free(xim->imtoolrc);
	      
	      xim->imtoolrc = calloc(strlen(fb_paths[i])+1,sizeof(char));
	      strncpy (xim->imtoolrc, fb_paths[i],strlen(fb_paths[i]));
	      break;
	    }
	}
	if (!fp) {
	  default_imtoolrc(xim);
	    return;
	}

	/* Scan the frame buffer configuration file.
	 */
	while (fgets (lbuf, SZ_LINE, fp) != NULL) {
	    /* Skip comment lines and blank lines. */
	    for (ip=lbuf;  *ip == ' ' || *ip == '\t';  ip++)
		;
	    if (*ip == '\n' || *ip == '#')
		continue;
	    if (!isdigit (*ip))
		continue;
	    switch (sscanf (ip, "%d%d%d%d", &config,&nframes,&width,&height)) {
	    case 4:
		break;			/* normal case */
	    case 3:
		height = width;		/* default to square format */
		break;
	    default:
		fprintf (stderr, "ximtool: bad config `%s'\n", ip);
		continue;
	    }

	    nframes = max (1, nframes);
	    width   = max (1, width);
	    height  = max (1, height);

	    /* Since the frame buffer is stored in a memory pixrect
	     * (effectively), the line length should be an integral number
	     * of 16 bit words.
	     */
	    if (width & 1) {
		fprintf (stderr, "imtool warning: fb config %d [%d-%dx%d] - ",
		    config, nframes, width, height);
		fprintf (stderr, "frame width should be even, reset to %d\n",
		    --width);
	    }

	    config = max(1, min(MAX_FBCONFIG, config)) - 1;
	    xim->fb_config[config].nframes = nframes;
	    xim->fb_config[config].width   = width;
	    xim->fb_config[config].height  = height;
	}

	if (fp) fclose (fp);
}

/* 
 * Default imtoolrc file-- if a valid imtoolrc file can not be found, 
 * then fill out a default fb_config
 */

void default_imtoolrc(XimDataPtr xim)
{
  /* 1  2  512  512 # imt1|imt512 */
  xim->fb_config[0].nframes = 2;
  xim->fb_config[0].width = 512;
  xim->fb_config[0].height = 512;
  /* 2  2  800  800 # imt2|imt800 */
  xim->fb_config[1].nframes = 2;
  xim->fb_config[1].width = 800;
  xim->fb_config[1].height = 800;
  /* 3  2 1024 1024 # imt3|imt1024 */
  xim->fb_config[2].nframes = 2;
  xim->fb_config[2].width = 1024;
  xim->fb_config[2].height = 1024;
  /* 4  1 1600 1600 # imt4|imt1600 */
  xim->fb_config[3].nframes = 1;
  xim->fb_config[3].width = 1600;
  xim->fb_config[3].height = 1600;
  /* 5  1 2048 2048 # imt5|imt2048 */
  xim->fb_config[4].nframes = 1;
  xim->fb_config[4].width = 2048;
  xim->fb_config[4].height = 2048;
  /* 6  1 4096 4096 # imt6|imt4096 */
  xim->fb_config[5].nframes = 1;
  xim->fb_config[5].width = 4096;
  xim->fb_config[5].height = 4096;
  /* 7  1 8192 8192 # imt7|imt8192 */
  xim->fb_config[6].nframes = 1;
  xim->fb_config[6].width = 8192;
  xim->fb_config[6].height = 8192;
  /* 8  1 1024 4096 # imt8|imt1x4 */
  xim->fb_config[7].nframes = 1;
  xim->fb_config[7].width = 1024;
  xim->fb_config[7].height = 4096;
  /* 9  2 1144  880 # imt9|imtfs full screen (1152x900 minus frame) */
  xim->fb_config[8].nframes = 2;
  xim->fb_config[8].width = 1144;
  xim->fb_config[8].height = 880;
  /* 10  2 1144  764 # imt10|imtfs35 full screen at 35mm film aspect */
  xim->fb_config[9].nframes = 2;
  xim->fb_config[9].width = 1144;
  xim->fb_config[9].height = 764;
  /* 11  2  128  128 # imt11|imt128 */
  xim->fb_config[10].nframes = 2;
  xim->fb_config[10].width = 128;
  xim->fb_config[10].height = 128;
  /* 12  2  256  256 # imt12|imt256 */
  xim->fb_config[11].nframes = 2;
  xim->fb_config[11].width = 256;
  xim->fb_config[11].height = 256;
  /* 13  2  128 1056 # imt13|imttall128 tall & narrow for spectro. */
  xim->fb_config[12].nframes = 2;
  xim->fb_config[12].width = 128;
  xim->fb_config[12].height = 1056;
  /* 14  2  256 1056 # imt14|imttall256 tall & wider for spectro. */
  xim->fb_config[13].nframes = 2;
  xim->fb_config[13].width = 256;
  xim->fb_config[13].height = 1056;
  /* 15  2 1056  128 # imt15|imtwide128 wide & thin for spectro. */
  xim->fb_config[14].nframes = 2;
  xim->fb_config[14].width = 1056;
  xim->fb_config[14].height = 128;
  /* 16  2 1056  256 # imt16|imtwide256 wide & fatter for spectro. */
  xim->fb_config[15].nframes = 2;
  xim->fb_config[15].width = 1056;
  xim->fb_config[15].height = 256;
  /* 17  2 1008  648 # imt17|imtssy Solitaire fmt w/ imtool border */
  xim->fb_config[16].nframes = 2;
  xim->fb_config[16].width = 1008;
  xim->fb_config[16].height = 648;
  /* 18  2 1024  680 # imt18|imtssn Solitaire fmt w/out imtool border */
  xim->fb_config[17].nframes = 2;
  xim->fb_config[17].width = 1024;
  xim->fb_config[17].height = 680;
  /* 19  1 4096 1024 # imt19|imt4x1 */
  xim->fb_config[18].nframes = 1;
  xim->fb_config[18].width = 4096;
  xim->fb_config[18].height = 1024;
}

void wcspix_message (XimDataPtr xim, char* message) {}
void ism_message (XimDataPtr xim, char* object, char* command) {}
