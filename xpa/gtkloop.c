/*
 *	Copyright (c) 2006 Smithsonian Astrophysical Observatory
 */

#include <xpap.h>

#ifdef HAVE_GTK

#include <gtk/gtk.h>
#include <gtk/gtkmain.h>

/*----------------------------------------------------------------------------
 *
 * 			Private Routines and Data
 *
 *----------------------------------------------------------------------------
 */

/* record struct for maintining gtk info in gtk select loop  */
typedef struct xpagtkrec{
  int fd;
  void *client_data;
  int id;
} *XPAGtk, XPAGtkRec;

/*----------------------------------------------------------------------------
 *
 * Routine:	XPAGtkHandler
 *
 * Purpose:	handle one request for an xpaset or xpaget
 *
 * Return:	none
 *
 *----------------------------------------------------------------------------
 */
static gboolean XPAGtkHandler(GIOChannel *gio, GIOCondition condition, 
   gpointer data)
{
  XPAGtk xptr = (XPAGtk)data;
  if( (xptr == NULL) || (xptr->client_data == NULL) )
    return TRUE;
  XPAHandler((XPA)xptr->client_data, xptr->fd);
   return TRUE; 
}

/*----------------------------------------------------------------------------
 *
 * Routine:	XPAGtkEnableOneInput
 *
 * Purpose:	Enable 1 XPA entry from the Xt event loop
 *
 * Results:	none
 *
 *----------------------------------------------------------------------------
 */
static void XPAGtkEnableOneInput (void *client_data)
{
   XPAGtk xptr = (XPAGtk)client_data;
   
   if( xptr && !xptr->id ){
        GIOChannel* ioc = g_io_channel_unix_new(xptr->fd);
	xptr->id =  g_io_add_watch(ioc, (G_IO_IN | G_IO_HUP | G_IO_NVAL),
		       XPAGtkHandler, xptr);
   }
}

/*----------------------------------------------------------------------------
 *
 * Routine:	XPAGtkDisableOneInput
 *
 * Purpose:	Disable 1 XPA entry from the Xt event loop
 *
 * Results:	none
 *
 *----------------------------------------------------------------------------
 */
static void XPAGtkDisableOneInput (void *client_data)
{
   XPAGtk xptr = (XPAGtk)client_data;

   if(xptr && xptr->id){
     g_source_remove(xptr->id); 
     xptr->id = 0;
   }
}

/*----------------------------------------------------------------------------
 *
 * Routine:	XPAGtkAddOneInput
 *
 * Purpose:	Add 1 XPA entry to the gtk event loop
 *
 * Results:	none
 *
 *----------------------------------------------------------------------------
 */
static void* XPAGtkAddOneInput (void *client_data, int fd)
{
  XPAGtk xptr;
  if( fd < 0 )
    return(NULL);
  xptr = (XPAGtk)calloc(1, sizeof(XPAGtkRec));
  xptr->fd = fd;
  xptr->client_data = client_data;
  XPAGtkEnableOneInput(xptr);
  return(xptr);
}

/*----------------------------------------------------------------------------
 *
 * Routine:	XPAGtkDelOneInput
 *
 * Purpose:	Delete 1 XPA entry from the gtk event loop (called by XPAFree)
 *
 * Results:	none
 *
 *----------------------------------------------------------------------------
 */

static void XPAGtkDelOneInput (void *client_data)
{
  XPAGtk xptr = (XPAGtk)client_data;
  if( xptr == NULL)
    return;
  XPAGtkDisableOneInput(xptr);
  free(xptr);
}

/*----------------------------------------------------------------------------
 *
 * 			Public Routines and Data
 *
 *----------------------------------------------------------------------------
 */

/*----------------------------------------------------------------------------
 *
 * Routine:	XPAGtkAddInput
 *
 * Purpose:	Add XPA entries to the Xt event loop
 *
 * Results:	number of xpa entried added
 *
 *----------------------------------------------------------------------------
 */
int XPAGtkAddInput (XPA xpa)
{
  XPA cur;
  int got=0;

  /* if a specific xpa was specified, just add it */
  if( xpa != NULL ){
    /* remove old one */
    if( xpa->seldel && xpa->selptr ){
      (xpa->seldel)(xpa->selptr);
    }
    /* add new one */
    xpa->seldel = XPAGtkDelOneInput;
    xpa->seladd = XPAGtkAddOneInput;
    xpa->selon =  XPAGtkEnableOneInput;
    xpa->seloff = XPAGtkDisableOneInput;
    xpa->selptr = XPAGtkAddOneInput((void *)xpa, xpa->fd);
    got = 1;
  }
  /* otherwise set up all xpa's */
  else{
    for(cur=(XPA)XPAListHead(); cur!=NULL; cur=cur->next){
      /* remove old one */
      if( cur->seldel && cur->selptr ){
	(cur->seldel)(cur->selptr);
      }
      /* add new one */
      cur->seldel = XPAGtkDelOneInput;
      cur->seladd = XPAGtkAddOneInput;
      cur->selon =  XPAGtkEnableOneInput;
      cur->seloff = XPAGtkDisableOneInput;
      cur->selptr = XPAGtkAddOneInput((void *)cur, cur->fd);
      got++;
    }
  }
  return(got);
}

int xpa_gtk = 1;

#else

int xpa_gtk = 0;

#endif
