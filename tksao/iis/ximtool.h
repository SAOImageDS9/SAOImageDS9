#ifndef __ximtool_h__
#define __ximtool_h__

#define XtPointer void *
#define Boolean   int
#define String    char *
#define Widget	  void *
#define	PSImagePtr void *

/* Default values, size limiting values.
 */
#define	MAX_FBCONFIG		128	/* max possible frame buf sizes	*/
#define	MAX_FRAMES		16	/* max number of frames		*/
#define	MAX_MAPPINGS		100	/* max number of mappings/frame	*/
#define	MAX_CLIENTS		8	/* max display server clients	*/
#define	MAX_ISM			8	/* max ISM module clients	*/
#define	MAX_COLORMAPS		256	/* max number of colormaps	*/
#define	MAX_COLORS		256	/* max size colormap		*/
#define	MAX_PRINTERS		128	/* max number of printers	*/
#define	FIRST_COLOR		10	/* first allocatable color	*/
#define	DEF_NCOLORS		201	/* default number of colors	*/
#define	DEF_COLORMAP		1	/* default colormap		*/
#define	DEF_NFRAMES		1	/* save memory; only one frame	*/
#define	DEF_FRAME_WIDTH		512	/* 512 square frame		*/
#define	DEF_FRAME_HEIGHT	512	/* 512 square frame		*/
#define	DEF_FRAME_DEPTH		8	/* 8 bits deep			*/
#define	DEF_WIN_WIDTH		512	/* default size window		*/
#define	DEF_WIN_HEIGHT		512	/* default size window		*/
#define	DEF_TILE_BORDER		3	/* border width for tileFrames	*/
#define DEF_BORDER_COLOR        "9"	/* border highlight color	*/
#define	SZ_CMAPNAME		32	/* colormap name buffer		*/
#define	SZ_NAME			80	/* object name buffer		*/
#define	SZ_LABEL		256	/* main frame label string	*/
#define	SZ_IMTITLE		128	/* image title string		*/
#define	SZ_WCTEXT		80	/* WCS box text 		*/
#define	SZ_OLD_WCSBUF		320	/* old WCS text buffer size	*/
#define	SZ_WCSBUF		1024	/* WCS text buffer size		*/
#define	SZ_MSGBUF		8192	/* message buffer size		*/
#define	SZ_COLORBAR		11	/* height of colorbar in pixels	*/
#define	SZ_FIFOBUF		4000	/* transfer size for FIFO i/o	*/

#define	SZ_FNAME		256
#define	SZ_LINE			256
#define	ERR			(-1)
#define	OK			0
#define	EOS			'\0'

#define	M_UNITARY		0	/* xim_setmapping		*/
#define	M_ASPECT		1
#define	M_FILL			2

/* Magic numbers. */
#define DEF_PORT	   5137			/* default tcp/ip socket      */
#define	I_DEVNAME	   "/dev/imt1o"		/* pseudo device names        */
#define	O_DEVNAME	   "/dev/imt1i"		/* our IN is client's OUT     */
#define	DEF_UNIXADDR	   "/tmp/.IMT%d"	/* default unix socket        */
#define DEF_ANTIALIASTYPE  "boxcar"		/* default antialiasing       */
#define	FBCONFIG_1	   ".imtoolrc"
#define	FBCONFIG_2	   "/usr/local/lib/imtoolrc"
#define	CMAPCONFIG	   "/usr/local/lib/imtoolcmap"
#define	FBCONFIG_ENV1	   "imtoolrc"
#define	FBCONFIG_ENV2	   "IMTOOLRC"
#define	PRINTCONFIG	   "/usr/local/lib/ximprint.cfg"

#define	DEF_ISM_ADDR	   "/tmp/.ISM%d"	/* default ISM unix socket    */
#define	DEF_ISM_TEMPLATE   "/tmp/.ISM%d_%d"	/* ISM client socket template */
#define DEF_ISM_TASK	   "wcspix"
#define DEF_ISM_CMD	   "ism_wcspix.e wcspix &"
#define	SZ_ISMBUF	   4096

/* WCS definitions. */
#define	W_UNITARY	0
#define	W_LINEAR	1
#define	W_LOG		2
#define	W_USER		3
#define	W_DEFFORMAT	" %7.2f %7.2f %7.1f%c"

/* Rotation matrix defining world coordinate system (WCS) of a frame.  */
typedef struct {
	int valid;			/* has WCS been set?		*/
	float a, b;			/* x, y scale factors		*/
	float c, d;			/* x, y cross factors		*/
	float tx, ty;			/* x, y translation		*/
	float z1, z2;			/* greyscale range		*/
	int zt;				/* greyscale mapping		*/
	char format[32];		/* wcs output format		*/
	char imtitle[SZ_IMTITLE+1];	/* image title from WCS		*/
} Ctran, *CtranPtr;

/* Coordinate mappings on each frame buffer. */
typedef struct {
	int   id;			/* object id			*/
	Ctran ctran;			/* world coordinate system	*/
	char  ref[SZ_FNAME+1];		/* image reference from WCS	*/
	int   regid;			/* region id			*/
	char  region[SZ_FNAME+1];	/* region name from WCS		*/
	float sx, sy;			/* source rect			*/
	int   snx, sny;			
	int   dx, dy;			/* destination rect		*/
	int   dnx, dny;			
} Mapping, *MappingPtr;

/* The frame buffers. */
typedef struct {
	int frameno;			/* frame number			*/
	int raster;			/* frame buffer raster		*/
	int zoomras;			/* zoom/pan raster		*/
	int zoommap;			/* zoom/pan mapping		*/
	int dispmap;			/* mapping used for display	*/
	int colormap;			/* greyscale transformation	*/
	float offset, scale;		/* transfer function 		*/
	float xscale, yscale;		/* scaling at [xy]mag==1.0	*/
	float xmag, ymag;		/* zoom/dezoom factors		*/ 
	float xcen, ycen; 		/* center of zoomed region	*/
	float xoff, yoff; 		/* offset of zoomed region	*/
	int xflip, yflip;		/* flip in X or Y?		*/
	char label[SZ_LABEL+1];		/* frame label string		*/
	Ctran ctran;			/* world coordinate system	*/
	char wcsbuf[SZ_WCSBUF];		/* wcs info string		*/
	Mapping mapping[MAX_MAPPINGS];	/* coordinate mappings		*/
	int	nmaps;			/* number of defined mappings	*/
} FrameBuf, *FrameBufPtr;

/* Possible frame buffer sizes. */
typedef struct {
	int nframes;			/* number of frames		*/
	int width;			/* frame buffer width		*/
	int height;			/* frame buffer height		*/
} FbConfig, *FbConfigPtr;


/* Predefined colormaps. */
typedef struct {
	int mapno;			/* widget colormap number 	*/
	char name[SZ_CMAPNAME+1];	/* colormap name 		*/
} ColorMap, *ColorMapPtr;

/* Predefined lookup tables. */
typedef struct {
	float red, green, blue;
} Triplet, *TripletPtr;

typedef struct {
	int	lutlen;
	Triplet hue[MAX_COLORS];
} Lut, *LutPtr;


/* Client IIS I/O channel. */
typedef struct {
	XtPointer xim;			/* backpointer to xim descriptor */
	int id;			/* input callback id 		 */
	int type;			/* channel type 		 */
	int datain;			/* input channel 		 */
	int dataout;			/* output channel 		 */
	int keepalive;			/* used to keep input fifo ready */
	char path[SZ_FNAME+1];		/* for unix sockets 		 */
	int reference_frame;		/* reference (cmd i/o) frame 	 */
	int version;			/* flags capability of client	 */
	FrameBufPtr rf_p;		/* reference frame descriptor 	 */
} IoChan, *IoChanPtr;

#define	IO_FIFO		1
#define	IO_INET		2
#define	IO_UNIX		3


/* Client ISM I/O channel. */
typedef struct {
	XtPointer xim;			/* backpointer to xim descriptor */
	XtPointer id;			/* input callback id 		 */
	int datain;			/* input channel 		 */
	int dataout;			/* output channel 		 */
	int connected;			/* client connected? 		 */
	char name[SZ_FNAME+1];		/* client name 			 */
	char path[SZ_FNAME+1];		/* for unix sockets 		 */
	char msgbuf[SZ_ISMBUF+1];	/* incomplete message buffer 	 */
} IsmIoChan, *IsmIoChanPtr;


/* Definitions for the supported ISM Modules. */
typedef void (*IsmFunc)();

typedef struct {
        char    name[SZ_FNAME];         /* name of the module           */
        char    command[SZ_LINE];       /* cmd to execute for module    */
        IsmFunc startupCB;              /* connection callback func     */
        IsmFunc shutdownCB;             /* shutdown callback func       */
        IsmFunc commandCB;              /* client command callback func */
        int     connected;              /* client is connected          */
        int     ref_count;              /* reference count		*/
        IsmIoChanPtr chan;              /* i/o channel			*/
} ismModule, *IsmModule;


/* Printer list. */
typedef struct {
	char printerName[SZ_FNAME+1];	/* printer name 		*/
	char printCmd[SZ_FNAME+1];	/* printer dispose command 	*/
} Printer, *PrinterPtr;


/* Printer configuration struct. */
typedef struct {
	int  printno;			/* printer number 		*/
	int  seqno;			/* sequence number 		*/
	int  diskfile;			/* print to diskfile? 		*/
	char printFile[SZ_FNAME+1];	/* disk filename template 	*/
	char printCmd[SZ_FNAME+1];	/* dispose command 		*/
} PrintCfg, *PrintCfgPtr;

/* File save definitions and structure. */
typedef struct {
	int  seqno;			/* sequence number 		 */
	int  format;			/* save format 			 */
	int  colorType;			/* save color type 		 */
	int  w, h, d;			/* dimensions of last file saved */
	char fname[SZ_FNAME+1];		/* save filename 		 */
} fileSave, *fileSavePtr;

#define	XIM_GRAYSCALE	0		/* save color options 		 */
#define	XIM_PSEUDOCOLOR	1
#define	XIM_RGB		2

#define	XIM_RAS		0		/* save format options 		 */
#define	XIM_GIF		1
#define	XIM_TIFF	2
#define	XIM_JPEG	3
#define	XIM_X11		4
#define	XIM_FITS	5
#define	XIM_RAW		6
#define	XIM_EPS		7
#define	XIM_OIF		8


/* File load struct. */
typedef struct {
	int  nfiles;			/* number of files in directory */
	char **FileList;		/* list of directory contents 	*/
	char curdir[SZ_FNAME+1];	/* current directory 		*/
	char homedir[SZ_FNAME+1];	/* home directory 		*/
	char pattern[SZ_NAME+1];	/* file pattern to match 	*/
	int  gray;			/* load as a grayscale image? 	*/
	int  zscale;			/* zscale the image		*/
	int  zrange;			/* use full data range		*/
	float  z1, z2;			/* user-supplied zrange limits	*/
	int  nsample;			/* number of zscale sample pts  */
} fileLoad, *fileLoadPtr;

/*
 * Application resources and runtime descriptor.
 * ----------------------------------------------
 */
typedef struct {
	/* Resources. */
	Boolean autoscale;		/* is XY autoscaling enabled 	     */
	Boolean antialias;		/* apply antialiasing when dezooming */
	Boolean tileFrames;		/* tile rather than overlay frames   */
	Boolean highlightFrames;	/* highlight tiled frames 	     */
	Boolean invert;			/* use inverted colormap 	     */
	int def_config;			/* default FB config 		     */
	int def_nframes;		/* default number of frames 	     */
	int ncolors;			/* number of image pixel colors      */
	int tileBorder;			/* image border when tiling frames   */
	String borderColor;		/* border color for tileFrames 	     */
	String gui;			/* GUI file name 		     */
	String imtoolrc;		/* imtoolrc file name 		     */
	String memModel;		/* FB memory model 		     */
	String userCMap1;		/* user colormap file 		     */
	String userCMap2;		/* user colormap file 		     */
	String userCMapDir1;		/* user colormap directory 	     */
	String userCMapDir2;		/* user colormap directory 	     */
	String antialiasType;		/* type of antialiasing 	     */
	String printConfig;		/* printer configuration file 	     */
	String input_fifo;		/* client's output, e.g. /dev/imt1o  */
	String output_fifo;		/* client's input, e.g. /dev/imt1i   */
	String unixaddr;		/* format for unix socket path 	     */
	String ism_addr;		/* format for ISM unix socket path   */
	String ism_task;		/* image support module taskname     */
	int port;			/* port for INET socket	 	     */

	/* Internal state. */
	XtPointer obm;			/* object manager 		*/
	IoChanPtr cursor_chan;		/* cursor mode channel 		*/
	IoChan chan[MAX_CLIENTS];	/* client i/o descriptors 	*/
	IsmIoChan ism_chan;		/* image support module channel */
	IsmIoChan ism_client[MAX_ISM];	/* ISM client i/o descriptors 	*/
	Widget toplevel;		/* dummy toplevel app shell 	*/
	Widget gt;			/* imagewin gterm-image widget 	*/
	Widget cb;			/* colorbar gterm-image widget 	*/
	XtPointer gm_border;		/* border marker for tileFrames */
	int tileFramesList;		/* frames to be tiled (bitmask) */
	int nTileFrames;		/* number of frames to be tiled */
	int tileRows;			/* number of tile rows	        */
	int tileCols;			/* number of tile cols		*/
	Boolean tileByRows;		/* fill tiles by row vs cols 	*/
	Boolean tileTopDown;		/* fill tiles by top to bottom	*/
	Boolean tileLabels;		/* label frame tiles		*/
	int rop;			/* rasterop for mappings 	*/
	int display_frame;		/* currently displayed frame 	*/
	FrameBufPtr df_p;		/* display frame descriptor 	*/
	FrameBuf frames[MAX_FRAMES];	/* array of frame descriptors 	*/
	int fb_configno;		/* current config number 	*/
	int nframes;			/* current number of frame bufs */
	int width, height;		/* current width, height 	*/
	FbConfig fb_config[MAX_FBCONFIG];	/* fb config table 	*/
	int *clientPrivate;		/* used by imtool client code 	*/

	PSImagePtr psim;		/* EPS image struct pointer 	*/
	PrintCfgPtr pcp;		/* printer config pointer 	*/
	fileLoadPtr flp;		/* load disk file pointer 	*/
	fileSavePtr fsp;		/* save disk file pointer 	*/

} XimData, *XimDataPtr;


/* Functions.
 */
#ifndef abs
#define	abs(a)		(((a)<0)?(-(a)):(a))
#endif
#ifndef min
#define min(a,b)	((a)<(b)?(a):(b))
#endif
#ifndef max
#define max(a,b)	((a)<(b)?(b):(a))
#endif

void xim_iisio(); 

#endif
