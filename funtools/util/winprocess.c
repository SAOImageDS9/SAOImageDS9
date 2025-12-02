/*
 *	Copyright (c) 2009 Smithsonian Astrophysical Observatory
 */

/* 
 *
 * winprocess.c -- routines to start up and communicate with a slave process
 *
 * this is the windows version, see zprocess.c for original code
 *
 */

#include <winprocess.h> 

#if defined(HAVE_CYGWIN) || defined(WIN32)

#include <windows.h>

#ifndef min
#define	min(a,b)	(((a)<(b))?(a):(b))
#endif

/*
 *
 * Private Routines
 *
 *
 */

#define MAXPROCS 512

typedef struct wproctable {
  HANDLE hIchan;
  HANDLE hOchan;
  HANDLE hProcess;
} WPROC;


static WPROC wprtable[MAXPROCS];

/* WPR_FINDPROCESS -- Search the process table for a process */
static WPROC *wpr_findprocess(HANDLE process)
{
  register int wpr;
  for(wpr=0; wpr<MAXPROCS; wpr++){
    if(wprtable[wpr].hProcess == process){
      return (&wprtable[wpr]);
    }
  }
  return (NULL);
}

/* WPR_ENTER -- Make a new entry in the process table. */
static int wpr_enter(HANDLE process, HANDLE ichan, HANDLE ochan)
{
  register int wpr;

  for(wpr=0; wpr<MAXPROCS; wpr++){
    if(wprtable[wpr].hProcess == 0){
      wprtable[wpr].hProcess = process;
      wprtable[wpr].hIchan = ichan;
      wprtable[wpr].hOchan = ochan;
      return(1);
    }
  }
  return(0);
}

/* WPR_GETCHAN -- Get the codes for the IPC channels assigned to a process */
static HANDLE wpr_getchan (HANDLE process, HANDLE *ichan, HANDLE *ochan)
{
  register WPROC *wpr;

  /* Lookup process in table.  Return an error if there is no entry */
  if ((wpr = wpr_findprocess(process)) == NULL){
    return(NULL);
  }
  else{
    *ichan = wpr->hIchan;
    *ochan = wpr->hOchan;
    return (process);
  }
}

/* WPR_RELEASE -- Release the table entry for the process.  Used when a process
 * is killed and we do not wish to wait for process termination */
static void wpr_release (HANDLE process)
{
  register WPROC *wpr;

  if ((wpr = wpr_findprocess (process)) != NULL){
    wpr->hProcess = 0;
    wpr->hIchan = 0;
    wpr->hOchan = 0;
  }
}

/*
 *
 * Public Routines
 *
 *
 */

int WinProcessOpen(char *cmd, HANDLE *ichan, HANDLE *ochan, HANDLE *process)
{
  HANDLE g_hChildStd_IN_Rd = NULL;
  HANDLE g_hChildStd_IN_Wr = NULL;
  HANDLE g_hChildStd_OUT_Rd = NULL;
  HANDLE g_hChildStd_OUT_Wr = NULL;

  SECURITY_ATTRIBUTES saAttr; 
  PROCESS_INFORMATION piProcInfo; 
  STARTUPINFO siStartInfo;
  BOOL bSuccess = FALSE; 
  
  // Set the bInheritHandle flag so pipe handles are inherited. 
  saAttr.nLength = sizeof(SECURITY_ATTRIBUTES); 
  saAttr.bInheritHandle = TRUE; 
  saAttr.lpSecurityDescriptor = NULL; 
  
  // Create a pipe for the child process's STDOUT. 
  if ( !CreatePipe(&g_hChildStd_OUT_Rd, &g_hChildStd_OUT_Wr, &saAttr, 0) ) 
    return 0;
  
  // Ensure the read handle to the pipe for STDOUT is not inherited.
  if ( !SetHandleInformation(g_hChildStd_OUT_Rd, HANDLE_FLAG_INHERIT, 0) )
    return 0;
  
  // Create a pipe for the child process's STDIN. 
  if (!CreatePipe(&g_hChildStd_IN_Rd, &g_hChildStd_IN_Wr, &saAttr, 0)) 
    return 0;
  
  // Ensure the write handle to the pipe for STDIN is not inherited. 
  if ( !SetHandleInformation(g_hChildStd_IN_Wr, HANDLE_FLAG_INHERIT, 0) )
    return 0;
  
  // Set up members of the PROCESS_INFORMATION structure. 
  ZeroMemory( &piProcInfo, sizeof(PROCESS_INFORMATION) );
  
  // Set up members of the STARTUPINFO structure. 
  // This structure specifies the STDIN and STDOUT handles for redirection.
  ZeroMemory( &siStartInfo, sizeof(STARTUPINFO) );
  siStartInfo.cb = sizeof(STARTUPINFO); 
  siStartInfo.hStdError = g_hChildStd_OUT_Wr;
  siStartInfo.hStdOutput = g_hChildStd_OUT_Wr;
  siStartInfo.hStdInput = g_hChildStd_IN_Rd;
  siStartInfo.dwFlags |= STARTF_USESTDHANDLES;
  
  // Create the child process. 
  bSuccess = CreateProcess(NULL,
			   cmd,		  // command line 
			   NULL,          // process security attributes 
			   NULL,          // primary thread security attributes 
			   TRUE,          // handles are inherited 
			   0,             // creation flags 
			   NULL,          // use parent's environment 
			   NULL,          // use parent's current directory 
			   &siStartInfo,  // STARTUPINFO pointer 
			   &piProcInfo);  // receives PROCESS_INFORMATION 
  
  // check for errors and configure return values
  if( bSuccess ) {
    /* save process info for later */
    wpr_enter (piProcInfo.hProcess, g_hChildStd_OUT_Rd, g_hChildStd_OUT_Rd);
    // Close handles to the child process and its primary thread.
    // Some applications might keep these handles to monitor the status
    // of the child process, for example. 
    // CloseHandle(piProcInfo.hProcess);
    CloseHandle(piProcInfo.hThread);
    // close unused sides of the pipe
    CloseHandle(g_hChildStd_OUT_Wr);
    CloseHandle(g_hChildStd_IN_Rd);
    /* package up process info for return */
    *ichan = (void *)g_hChildStd_OUT_Rd;
    *ochan = (void *)g_hChildStd_IN_Wr;
    *process = (void *)piProcInfo.hProcess;
    /* success */
    return 1;
  } else {
    /* failure */
    *ichan = NULL;
    *ochan = NULL;
    *process = NULL;
    return 0;
  }
}

/* 
 *
 * WinProcessClose --  Close a connected subprocess
 *
 */
int WinProcessClose(void *vprocess, int *exit_status)
{
  HANDLE ichan, ochan;
  HANDLE process = (HANDLE)vprocess;


  *exit_status = 0;
  if( wpr_getchan(process, &ichan, &ochan) != NULL ){
    CloseHandle(ochan);
    CloseHandle(ichan);
    CloseHandle(process);
    wpr_release(process);
  }
  return(*exit_status);
}


/* 
  *
  * WinProcessRead -- Read next record from an IPC channel.
  *
  * Since UNIX pipes are byte streams we must take special measures to
  * transmit data through a pipe in records.  
  * Each block of data is preceded by a header of sizeof(int) consisting
  * containing the number of bytes in the block.
  * To read a block we must read the count and then issue successive read
  * requests until the entire block has been read.
  *
*/
void *WinProcessRead(void *vfd, void *buf, int maxbytes, int *got)
{
  register char *op;
  register int nbytes;
  char *obuf;
  int record_length;
  int temp;
  DWORD tgot;
  HANDLE fd = (HANDLE)vfd;

  /* no data read as yet */
  *got = 0;

  /* Get byte count of record.
   */
  if((ReadFile(fd, &temp, sizeof(int), &tgot, NULL) == FALSE) || 
     (tgot != sizeof(int)))
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
    if( !obuf ) return NULL;
  }
  op = (char *)obuf;

  /* Now read exactly nbytes of data from channel into user buffer.
   * Return actual byte count if EOF is seen.  If an error is seen, return.
   * If necessary multiple read requests are issued to read the
   * entire record.
   */
  while (nbytes > 0){
    if( ReadFile(fd, op, nbytes, &tgot, NULL) == FALSE ){
      if( !buf ) free(obuf);
      *got = 0;
      return NULL;
    } else if( tgot == 0 ){
      return(obuf);
    } else {
      nbytes -= tgot;
      *got += tgot;
      op += tgot;
    }
  }

  /* If the record is larger than maxbytes, we must read and discard
   * the additional bytes.  The method used is inefficient but it is
   * unlikely that we will be called to read less than a full record.
   */
  if( maxbytes >= 0 ){
    for (nbytes = maxbytes;  nbytes < record_length;  nbytes++){
      if( (ReadFile(fd, &temp, 1, &tgot, NULL) == FALSE) || (tgot == 0) ){
	break;
      }
    }
  }
  return(obuf);
}

/* 
 *
 * ProcessWrite -- Write to an IPC channel.
 * Write the IPC block header followed by the data block.
 *
*/
int WinProcessWrite(void *vfd, void *buf, int nbytes)
{
  DWORD tgot;
  BOOL got;
  HANDLE fd = (HANDLE)vfd;

  /* write byte count */
  WriteFile(fd, &nbytes, sizeof(int), &tgot, NULL);

  /* write data block */
  got = WriteFile(fd, buf, nbytes, &tgot, NULL);
  if( got == FALSE ){
    return(-1);
  } else {
    return((int)tgot);
  }
}

#else

int have_winprocess=0;

#endif
