/*
 *	Copyright (c) 1999-2003 Smithsonian Astrophysical Observatory
 */

/* 
 *
 * zprocess.c -- routines to start up and communicate with a slave process
 *
 * based on zfiopr.c from NOAO IRAF system
 *
 */

#include <zprocess.h>

#ifndef min
#define	min(a,b)	(((a)<(b))?(a):(b))
#endif

/*
 *
 * Private Routines
 *
 *
 */

static int pr_debug = 0;

/* 
 *
 * Process table management code
 *
 */

#define MAXPROCS 512

static struct proctable {
	int	pr_pid;		/* process id				*/
	int	pr_active;	/* if YES, process is still active	*/
	int	pr_inchan;	/* input IPC channel			*/
	int	pr_outchan;	/* output IPC channel			*/
	int	pr_exit_status;	/* process exit_status			*/
} prtable[MAXPROCS];

/* PR_FINDPID -- Search the process table for a process.  NULL is returned if
 * the process cannot be found, otherwise a pointer to the table entry is
 * returned.
 */
#ifdef ANSI_FUNC
static struct proctable *pr_findpid(int pid)
#else
static struct proctable *pr_findpid(pid)
     int pid;
#endif
{
  register int	pr;

  for (pr=0; pr<MAXPROCS; pr++){
    if (prtable[pr].pr_pid == pid)
      return (&prtable[pr]);
  }
  return (NULL);
}

/* PR_ENTER -- Make a new entry in the process table.  Something is very wrong
 * if the table overflows.
 */
#ifdef ANSI_FUNC
static int
pr_enter(int pid, int inchan, int outchan)
#else
static int pr_enter(pid, inchan, outchan)
     int	pid;
     int	inchan, outchan;
#endif
{
  int pr;

  for (pr=0; pr<MAXPROCS; pr++){
    if (prtable[pr].pr_pid == 0){
      prtable[pr].pr_pid = pid;
      prtable[pr].pr_active = 1;
      prtable[pr].pr_inchan = inchan;
      prtable[pr].pr_outchan = outchan;
      return(1);
    }
  }
  return(0);
}

/* PR_GETCHAN -- Get the codes for the IPC channels assigned to a process.
 */
#ifdef ANSI_FUNC
static int pr_getchan (int pid, int *inchan, int *outchan)
#else
static int pr_getchan (pid, inchan, outchan)
     int pid;
     int *inchan, *outchan;
#endif
{
  register struct proctable *pr;

  /* Lookup process in table.  Return an error if there is no entry.
   */
  if ((pr = pr_findpid(pid)) == NULL)
    return(-1);
  else {
    *inchan = pr->pr_inchan;
    *outchan = pr->pr_outchan;
    return (pid);
  }
}

/* PR_RELEASE -- Release the table entry for the process.  Used when a process
 * is killed and we do not wish to wait for process termination.
 */
#ifdef ANSI_FUNC
static void
pr_release (int pid)
#else
static void pr_release (pid)
     int pid;
#endif
{
  register struct proctable *pr;

  if ((pr = pr_findpid (pid)) != NULL){
    pr->pr_pid = 0;
    pr->pr_active = 0;
    pr->pr_inchan = 0;
    pr->pr_outchan = 0;
  }
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	PRSleep
 *
 * Purpose:	sleep for specified milliseconds
 *
 * Returns:	none
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
static void 
PRSleep (int msec)
#else
static void PRSleep(msec)
     int msec;
#endif
{
  struct timeval tv;

  if( msec > 0 ){
    tv.tv_sec = msec / 1000;
    tv.tv_usec = (msec % 1000) * 1000;
    select(1, NULL, NULL, NULL, &tv);
  }
}

/*
 *
 * Public Routines
 *
 *
 */

/* 
 *
 * ProcessOpen --
 * Open a connected subprocess.  Spawn process and open bidirectional
 * IPC channels, implemented with pipes for this version of Berkeley UNIX.
 *
 */
#ifdef ANSI_FUNC
int
ProcessOpen(char *osfn, char **argv, int *inchan, int *outchan, int *pid)
#else
int ProcessOpen(osfn, argv, inchan, outchan, pid)
     char *osfn;		/* name of executable file		*/
     char **argv;		/* argument list */
     int *inchan, *outchan;	/* IPC channels (parent reads inchan)	*/
     int *pid;			/* returned process id */
#endif
{
  int pin[2], pout[2];
  int maxforks = 3;
  char **targv;
  char *args[2];
  char *prog=NULL;
  static char *path;

  if (pr_debug)
    fprintf (stderr, "ProcessOpen: '%s'", (char *)osfn);

  if( path == NULL ){
    path = (char *)getenv("PATH");
  }

  /* Check that the process file exists and is executable.
   */
  if( (prog = Find(osfn, "x", NULL, path)) == NULL ){
    *pid = 0;
    return(0);
  }

  /* open pipes */
  pipe(pin);
  if( pipe(pout) != 0){
    *pid = 0;
    return(0);
  }

  /* Create child process. The child inherits the open stdio files. 
   * The fork can fail if swap space is full or if we have too many processes.
   */
  while ((*pid = fork()) == -1) {
    if (--maxforks == 0) {
      close (pin[0]);  close (pin[1]);
      close (pout[0]); close (pout[1]);
      *pid = 0;
      return(0);
    }
    sleep (2);
  }

  if (*pid == 0) {

    /* New child process.  Make child think the pipe is its stdin/out.
     */
    close (pin[0]);
    close (pout[1]);
    close (0);  dup (pout[0]);  close (pout[0]);
    close (1);  dup (pin[1]);   close (pin[1]);

#ifdef IRAF_ONLY
    /* Disable SIGINT so that child process does not die when the
     * parent process is interrupted. The child should get an EOF
     * on reading or writing and clean itself up.
     */
    signal (SIGINT, SIG_IGN);
#endif

    /* Exec the new process.  Will not return if successful.
     */
    if( argv != NULL ){
      targv = argv;
    }
    else {
      targv = args;
      args[0] = prog;
      args[1] = NULL;
    }
    execv(prog, (void *)targv);
    
    /* If we get here the new process could not be executed for some
     * reason.  Shutdown, calling _exit to avoid flushing parent's
     * io buffers.
     */
    _exit (1);

  } else {

    /* Existing, parent process. */
    close (pin[1]);
    close (pout[0]);
    *inchan  = pin[0];
    *outchan = pout[1];

    /* Save pid in parent's process table.  Entry cleared when
     * CloseProcess is called to wait for process to terminate.  Also save
     * channel numbers in process table since only the pid is passed
     * when the process is closed.
     */
    pr_enter (*pid, pin[0], pout[1]);
    
    if (pr_debug)
      fprintf (stderr, " [%d]\n", *pid);

    /* clean up and return */
    if( prog ) free(prog);
    return(1);

  }
  return(1);
}


/* 
 *
 * ProcessClose --  Close a connected subprocess and
 * wait for subprocess to terminate.
 *
 */
#ifdef ANSI_FUNC
int
ProcessClose(int pid, int *exit_status)
#else
int ProcessClose(pid, exit_status)
     int pid;
     int *exit_status;
#endif
{
  int inchan, outchan;
  int tries=0;

  if (pr_getchan (pid, &inchan, &outchan) == -1)
    *exit_status = 0;
  else {
    close (outchan);
    close (inchan);
    pr_release(pid);
retry:
    if( (waitpid(pid, exit_status, WNOHANG)==0) && (tries<10) ){
      PRSleep(10);
      tries++;
      goto retry;
    }
  }

  if (pr_debug)
    fprintf (stderr, "[%d] terminated, exit code %d\n",
	     pid, *exit_status);
  return(*exit_status);
}


/* 
  *
  * ProcessRead -- Read next record from an IPC channel.
  *
  * Since UNIX pipes are byte streams we must take special measures to
  * transmit data through a pipe in records.  
  * Each block of data is preceded by a header of sizeof(int) consisting
  * containing the number of bytes in the block.
  * To read a block we must read the count and then issue successive read
  * requests until the entire block has been read.
  *
*/
#ifdef ANSI_FUNC
void *
ProcessRead(int fd, void *buf, int maxbytes, int *got)
#else
void *ProcessRead(fd, buf, maxbytes, got)
     int fd;
     void *buf;
     int maxbytes;
     int *got;
#endif
{
  register char *op;
  register int nbytes;
  char *obuf;
  int record_length, status;
  int temp;

  /* no data read as yet */
  *got = 0;

  if (pr_debug)
    fprintf (stderr,
	     "[%d] initiate read for %d bytes from IPC channel %d\n",
	     (int)getpid(), maxbytes, fd);

  /* Get byte count of record.
   */
  if (read (fd, &temp, sizeof(int)) != sizeof(int))
    return NULL;

  record_length = temp;
  if( maxbytes >= 0 )
    nbytes = min(record_length, maxbytes);
  else
    nbytes = record_length;

  /* allocate output buffer, if necessary */
  if( buf )
    obuf = buf;
  else{
    obuf = (char *)malloc(nbytes);
    if( !obuf )
      return NULL;
  }
  op = (char *)obuf;

  /* Now read exactly nbytes of data from channel into user buffer.
   * Return actual byte count if EOF is seen.  If an error is seen, return.
   * If necessary multiple read requests are issued to read the
   * entire record.
   */
  while (nbytes > 0)
    switch (status = read (fd, op, nbytes)) {
    case -1:
      if( !buf ) free(obuf);
      *got = 0;
      return NULL;
    case 0:
      return(obuf);
    default:
      nbytes -= status;
      *got += status;
      op += status;
    }

  if (pr_debug) {
    fprintf (stderr, "[%d] read %d bytes from IPC channel %d:\n",
	     (int)getpid(), (int)(op - (char *)buf), fd);
  }

  /* If the record is larger than maxbytes, we must read and discard
   * the additional bytes.  The method used is inefficient but it is
   * unlikely that we will be called to read less than a full record.
   */
  if( maxbytes >= 0 ){
    for (nbytes = maxbytes;  nbytes < record_length;  nbytes++)
      if (read (fd, &temp, 1) <= 0)
	break;
  }

  return(obuf);
}

/* 
 *
 * ProcessWrite -- Write to an IPC channel.
 * Write the IPC block header followed by the data block.
 *
*/
#ifdef ANSI_FUNC
int
ProcessWrite(int fd, void *buf, int nbytes)
#else
int ProcessWrite(fd, buf, nbytes)
     int fd;
     void *buf;
     int nbytes;
#endif
{
  int got;

  /* write byte count */
  write(fd, &nbytes, sizeof(int));

  /* write data block */
  got = write(fd, buf, nbytes);

  if (pr_debug) {
    fprintf (stderr, "[%d] wrote %d bytes to IPC channel %d:\n",
	     (int)getpid(), (int)nbytes, fd);
  }

  return(got);
}

/* 
 * ProcessGetChan -- Get the codes for the IPC channels assigned to a process.
 */
#ifdef ANSI_FUNC
int
ProcessGetChan (int pid, int *inchan, int *outchan)
#else
int ProcessGetChan (pid, inchan, outchan)
     int pid;
     int *inchan, *outchan;
#endif
{
  return pr_getchan(pid, inchan, outchan);
}
