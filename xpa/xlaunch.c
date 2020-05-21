/*
 *	Copyright (c) 1999-2007 Smithsonian Astrophysical Observatory
 */

#include <xlaunch.h>

/*
 *----------------------------------------------------------------------------
 *
 *
 * 			Private Routines and Data
 *
 *
 *----------------------------------------------------------------------------
 */

static pid_t pid=0;

#if HAVE_MINGW32==0

/* wait for child process to start, using waitpid() */
#ifdef ANSI_FUNC
static int launch_pipes(int *pipes, int flag)
#else
static int launch_pipes(pipes, flag)
     int *pipes;
     int flag;
#endif
{
  int i;
  char tbuf[SZ_LINE];
  if( pipes ){
    for(i=0; i<4; i++){
      pipes[i] = -1;
    }
    if( (pipe(&pipes[0]) < 0) || (pipe(&pipes[2]) < 0) ) return -1;
    if( flag ){
#if HAVE_SETENV
      snprintf(tbuf, SZ_LINE-1, "%d,%d,%d,%d", 
	       pipes[0], pipes[1], pipes[2], pipes[3]);
      setenv("LAUNCH_PIPES", tbuf, 1);
#else
      snprintf(tbuf, SZ_LINE-1, "LAUNCH_PIPES=%d,%d,%d,%d", 
	       pipes[0], pipes[1], pipes[2], pipes[3]);
      putenv(xstrdup(tbuf));
#endif
    }
  }
  return 0;
}

#ifdef ANSI_FUNC
static int cleanup_pipes(int *pipes)
#else
static int cleanup_pipes(pipes)
     int *pipes;
#endif
{
  if( pipes ){
    /* close child pipes */
    close(pipes[1]);
    close(pipes[2]);
    /* move parent write into slot 1 */
    pipes[1] = pipes[3];
    /* set unused pipes to impossible value */
    pipes[2] = -1;
    pipes[3] = -1;
  }
  return 0;
}

#if LAUNCH_USE_WAITPID
/* wait for child process to start, using waitpid() */
#ifdef ANSI_FUNC
static int launch_waitstart(pid_t pid)
#else
static int launch_waitstart(pid)
     pid_t pid;
#endif
{
  int i, got;
  int status=0;
  struct timeval tv;
  /* wait up to LAUNCH_WAIT_TRIES millisec to make sure the child started,
     but if we get an error, we can exit immediately */
  for(i=0; i<LAUNCH_WAIT_TRIES; i++){
    errno = 0;
    got=waitpid(pid, &status, WNOHANG);
    /* look for error termination */
    if( (got < 0) || ((got == 0) && xerrno) ){
      got = -1;
      /* make sure status shows error */
      if( status == 0 )
	status = -1;
      break;
    }
    /* look for normal termination */
    else if( got > 0 ){
      break;
    }
    /* no termination, sleep and wait some more */
    else{
      tv.tv_sec = 0;
      tv.tv_usec = LAUNCH_WAIT_MSEC;
      xselect(1, NULL, NULL, NULL, &tv);
    }
  }
  /* no termination means the child is still running */
  if( got == 0 ) status = 0;
  /* return the news */
  return status;
}
#endif

/* 
 *  standard unix version of launch:
 *  adapted from the system() code in:
 *  W. Richard Stevens
 *  "Advanced Programming in the Unix Environment" 
 *  Addison-Wesley Publishing Co, 1992
 *  p. 314
 */
#ifdef ANSI_FUNC
static int launch_fork_exec(char *cmdstring, int attach, 
			    char **stdfiles, int *pipes)
#else
  static int launch_fork_exec(cmdstring, attach, stdfiles, pipes)
     char *cmdstring;
     int attach;
     char **stdfiles;
     int *pipes;
#endif
{
  int status;
  int tpipes[4];
  struct sigaction ignore, saveintr, savequit;
  sigset_t chldmask, savemask;
#if LAUNCH_USE_PIPE
  int fd[2];
#endif

  /* return false if no command is specified */
  if( !cmdstring || !*cmdstring ) return -1;

  ignore.sa_handler = SIG_IGN;	/* ignore SIGINT and SIGQUIT */
  sigemptyset(&ignore.sa_mask);
  ignore.sa_flags = 0;
  if (sigaction(SIGINT, &ignore, &saveintr) < 0)
    return -1;
  if (sigaction(SIGQUIT, &ignore, &savequit) < 0)
    return -1;
  
  sigemptyset(&chldmask);	/* now block SIGCHLD */
  sigaddset(&chldmask, SIGCHLD);
  if (sigprocmask(SIG_BLOCK, &chldmask, &savemask) < 0)
    return -1;
  
#if LAUNCH_USE_PIPE
  /* open a pipe so parent can hear if the child fails to exec */
  if( !attach ){
    if( pipe(fd) < 0 )
      return -1;
    xfcntl(fd[0], F_SETFD, FD_CLOEXEC);
    xfcntl(fd[1], F_SETFD, FD_CLOEXEC);
  }
#endif

  /* create temp ipc pipes if necessary */
  if( pipes ){
    if( launch_pipes(tpipes, 0) < 0 ) return -1;
  }

  /* start new process */
  if( (pid = fork()) < 0 ){
#if LAUNCH_USE_PIPE
    if( !attach ){
      close(fd[0]);
      close(fd[1]);
    }
#endif
    if( pipes ){
      close(tpipes[0]);
      close(tpipes[1]);
      close(tpipes[2]);
      close(tpipes[3]);
    }
    status = -1;		/* ERROR: probably out of processes */
  } else if( pid == 0 ){	/* child */
    int i, j, len;
    char *argv[LAUNCH_ARGS+1];
    char *path=NULL;
    char *s=NULL, *t=NULL;

    /* reset pipes, if necessary */
    if( pipes ){
      /* close parent's read/write pipes */
      close(tpipes[0]);
      close(tpipes[3]);
      /* change child's stdin/stdout to use the passed pipes to parent */
      dup2(tpipes[2], 0);  close(tpipes[2]);
      dup2(tpipes[1], 1);  close(tpipes[1]);
    }

    /* close and reopen stdio files, if necessary */
    if( stdfiles ){
      for(i=0; i<3; i++){
	if( stdfiles[i] ){
	  close(i);
	  switch(i){
	  case 0:
	    if( open(stdfiles[i], O_RDONLY) < 0){
	      _exit(-1);
	    }
	    break;
	  case 1:
	    if( open(stdfiles[i], O_CREAT|O_WRONLY|O_TRUNC, 0600) < 0){
	      _exit(-1);
	    }
	    break;
	  case 2:
	    /* if stderr is the same as stdout, just dup */
	    if( stdfiles[1] && !strcmp(stdfiles[1], stdfiles[i]) ){
	      if( dup(1) < 0 ){
		_exit(-1);
	      }
	    }
	    else{
	      if( open(stdfiles[i], O_CREAT|O_WRONLY|O_TRUNC, 0600) < 0){
		_exit(-1);
	      }
	    }
	    break;
	  }
	}
      }
    }

    /* restore previous signal actions & reset signal mask, but only if
       parent is waiting for completion (i.e., we are "attached") */
    if( attach ){
      sigaction(SIGINT, &saveintr, NULL);
      sigaction(SIGQUIT, &savequit, NULL);
      sigprocmask(SIG_SETMASK, &savemask, NULL);
    }
#if LAUNCH_USE_PIPE
    /* child closes reader -- only writes status */
    else{
      close(fd[0]);
    }
#endif

    /* package up the arguments for new process */
    t = (char *)xstrdup(cmdstring);
    for(i=0, s=(char *)strtok(t, " \t"); s;
	i++, s=(char *)strtok(NULL," \t")){
      if( i < LAUNCH_ARGS ){ 
	/* save argument */
	argv[i] = xstrdup(s);
	/* change back special char to spaces, if necessary */
	len = strlen(argv[i]);
	for(j=0; j<len; j++){
	  if( argv[i][j] == LAUNCH_SPACE){
	    argv[i][j] = ' ';
	  }
	}
	argv[i+1] = NULL;
	/* save program name */
	if( i == 0 ) path = argv[i];
      }
    }
    if( t ) xfree(t);
#ifndef HAVE_CYGWIN
    /* this call is broken in cygwin */
    /* for unattached processes, start a new session (with new process id),
       so that we do not inherit signals from parent (particularly SIGTERM) */
    if( !attach )
      setsid();
#endif
    /* start up the new program */
    if( execvp(path, argv) ){
      status = 127;
#if LAUNCH_USE_PIPE
      if( !attach ){
	if( write(fd[1], &status, 4) >= 0 ){
	  close(fd[1]);
	}
      }
#endif
      _exit(status);		/* exec error */
    }
  } else {			/* parent */
    /* wait for program termination from attached process */
    if( attach ){
      while( waitpid(pid, &status, 0) < 0 ){
	if( xerrno != EINTR ){
	  status = -1; /* error other than EINTR from waitpid() */
	  break;
	}
      }
    }
    else{
#if LAUNCH_USE_WAITPID
      status = launch_waitstart(pid);
#endif
#if LAUNCH_USE_PIPE
      close(fd[1]);
      if( read(fd[0], &status, 4) == 0 ){
	status = 0;
      }
      close(fd[0]);
#endif
    }
  }
  
  /* cleanup temp ipc pipes and move into user space */
  if( pipes ){
    cleanup_pipes(tpipes);
    pipes[0] = tpipes[0];
    pipes[1] = tpipes[1];
  }

  /* restore previous signal actions & reset signal mask */
  if( sigaction(SIGINT, &saveintr, NULL) < 0 )        return -1;
  if( sigaction(SIGQUIT, &savequit, NULL) < 0 )       return -1;
  if( sigprocmask(SIG_SETMASK, &savemask, NULL) < 0 ) return -1;
  
  /* return the news */
  return status;
}

#endif

#if HAVE_POSIX_SPAWN

#if defined(HAVE__NSGETENVIRON) && defined(HAVE_CRT_EXTERNS_H)
#include <crt_externs.h>
#define environ (*_NSGetEnviron())
#else
extern char **environ;
#endif

/* spawn calls POSIX posix_spawn */
#ifdef ANSI_FUNC
static int launch_posix_spawn(char *cmdstring, int attach, 
			      char **stdfiles, int *pipes)
#else
  static int launch_posix_spawn(cmdstring, attach, stdfiles, pipes)
     char *cmdstring;
     int attach;
     char **stdfiles;
     int *pipes;
#endif
{
  int i, j, len;
  int status=0;
  int got=0;
  int tpipes[4];
  char *argv[LAUNCH_ARGS+1];
  char *path=NULL;
  char *s=NULL, *t=NULL;
  posix_spawn_file_actions_t act;
  posix_spawn_file_actions_t *pact=NULL;

  /* return false if no command is specified */
  if( !cmdstring || !*cmdstring )
    return -1;

  /* create temp ipc pipes if necessary */
  if( pipes ){
    if( launch_pipes(tpipes, 1) < 0 ) return -1;
  }

  /* package up the arguments for new process */
  t = (char *)xstrdup(cmdstring);
  for(i=0, s=(char *)strtok(t, " \t"); s;
      i++, s=(char *)strtok(NULL," \t")){
    if( i < LAUNCH_ARGS ){ 
      /* save argument */
      argv[i] = xstrdup(s);
      /* change back special char to spaces, if necessary */
      len = strlen(argv[i]);
      for(j=0; j<len; j++){
	if( argv[i][j] == LAUNCH_SPACE){
	  argv[i][j] = ' ';
	}
      }
      /* last arg is always a NULL */
      argv[i+1] = NULL;
      /* save program name */
      if( i == 0 ) path = argv[i];
      /* inc arg count */
      got++;
    }
  }
  if( t ) xfree(t);
  /* arrange stdfiles files, if necessary */
  if( stdfiles ){
    if( posix_spawn_file_actions_init(&act) != 0) 
      return -1;
    /* stdin */
    if(stdfiles[0] && 
       posix_spawn_file_actions_addopen(&act, 0, stdfiles[0], O_RDONLY, 0))
      return -1;
    /* stdout */
    if(stdfiles[1] && 
       posix_spawn_file_actions_addopen(&act, 1, stdfiles[1], O_CREAT|O_WRONLY|O_TRUNC, 0600))
      return -1;
    /* stderr */
    if(stdfiles[2] && 
       posix_spawn_file_actions_addopen(&act, 2, stdfiles[2], O_CREAT|O_WRONLY|O_TRUNC, 0600))
      return -1;
    pact = &act;
  }
  /* start the new process */
  if( (status = posix_spawnp(&pid, path, pact, NULL, argv, environ)) )
    return status;
  /* wait for program termination from attached process */
  if( attach ){
    while( waitpid(pid, &status, 0) < 0 ){
      if( xerrno != EINTR ){
	status = -1; /* error other than EINTR from waitpid() */
	break;
      }
    }
  }
#if BIG_DELAY_WHEN_USING_THIS
  /* wait for child process to start */
  else{
    status = launch_waitstart(pid);
  }
#endif
  /* clean up */
  if( stdfiles ) posix_spawn_file_actions_destroy(&act);
  /* cleanup temp ipc pipes and move into user space */
  if( pipes ){
    cleanup_pipes(tpipes);
    pipes[0] = tpipes[0];
    pipes[1] = tpipes[1];
  }
  for(i=0; i<got; i++){
    if( argv[i] ) xfree((char *)argv[i]);
  }
  /* return status */
  return status;
}

#endif

#if HAVE_SPAWNVP

#ifdef ANSI_FUNC
static int launch_spawnvp(char *cmdstring, int attach, 
			  char **stdfiles, int *pipes)
#else
  static int launch_spawnvp(cmdstring, attach, stdfiles, pipes)
     char *cmdstring;
     int attach;
     char **stdfiles;
     int *pipes;
#endif
{
  int i, j;
  int len;
  int got;
  int status;
  int tpipes[4];
  char *argv[LAUNCH_ARGS+1];
  char *path=NULL;
  char *s=NULL, *t=NULL;
  struct timeval tv;

  /* return false if no command is specified */
  if( !cmdstring || !*cmdstring ) return -1;

  /* for now, we can't support stdfiles */
  if( stdfiles ) return -1;

  /* create temp ipc pipes if necessary */
  if( pipes ){
#if HAVE_MINGW32==0
    if( launch_pipes(tpipes, 1) < 0 ) return -1;
#else
    fprintf(stderr, "ERROR: launch_pipes() not available in mingw\n");
    exit(1);
#endif
  }


  /* package up the arguments for new process */
  t = (char *)xstrdup(cmdstring);
  for(i=0, got=0, s=(char *)strtok(t, " \t"); s;
      i++, s=(char *)strtok(NULL," \t")){
    if( i < LAUNCH_ARGS ){ 
      /* save argument */
      argv[i] = xstrdup(s);
      /* change back special char to spaces, if necessary */
      len = strlen(argv[i]);
      for(j=0; j<len; j++){
	if( argv[i][j] == LAUNCH_SPACE){
	  argv[i][j] = ' ';
	}
      }
      /* last arg is always a NULL */
      argv[i+1] = NULL;
      /* save program name */
      if( i == 0 ) path = (char *)argv[i];
      /* inc arg count */
      got++;
    }
  }
  if( t ) xfree(t);
  if( attach )
    i = _P_WAIT;
  else
    i = _P_NOWAIT;
  if((status = spawnvp(i, path, (void *)argv)) != -1){
    status = 0;
    /* wait for child to start */
    tv.tv_sec = 0;
    tv.tv_usec = LAUNCH_WAIT_MSEC;
    xselect(1, NULL, NULL, NULL, &tv);
  }
  /* clean up */
  for(i=0; i<got; i++){
    if( argv[i] ) xfree((char *)argv[i]);
  }
  /* cleanup temp ipc pipes and move into user space */
  if( pipes ){
#if HAVE_MINGW32==0
    cleanup_pipes(tpipes);
    pipes[0] = tpipes[0];
    pipes[1] = tpipes[1];
#else
    fprintf(stderr, "ERROR: launch_pipes() not available in mingw\n");
    exit(1);
#endif
  }
  return status;
}

#endif

/*
 *----------------------------------------------------------------------------
 *
 *
 * 			Public Routines and Data
 *
 *
 *----------------------------------------------------------------------------
 */

/*
 *
 * LaunchPid() -- return pid of last  launched process 
 *
 */
#ifdef ANSI_FUNC
pid_t LaunchPid(void)
#else
pid_t LaunchPid()
#endif
{
  return pid;
}

#ifdef ANSI_FUNC
int Launch(char *cmdstring, int attach, char **stdfiles, int *pipes)
#else
int Launch(cmdstring, attach, stdfiles, piles)
     char *cmdstring;
     int attach;
     char **stdfiles;
     int *pipes;
#endif
{
  static int which_launch=0;
  static int which_debug=0;
  char *s=NULL;

  /* return false if no command is specified */
  if( !cmdstring || !*cmdstring ) return -1;

  /* sanity check: don't specify stdfiles and pipes simultaneously */
  if( stdfiles && pipes ){
    fprintf(stderr, 
	    "ERROR: stdfiles and pipes are mutually exclusive in Launch()\n");
    return -1;
  }

  /* if pipes are specified, we don't attach */
  if( pipes ) attach = 0;

  /* determine launch method */
  if( !which_launch ){
    which_launch = LAUNCH_DEFAULT_WHICH;
    if( (s=getenv("LAUNCH_ROUTINE")) ){
      /* fork_exec */
      if( !strncasecmp(s, "f", 1) ){
	which_launch = 1;
	if( *s == 'F' ) which_debug = 1;
      }
      /* posix_spawn */
      else if( !strncasecmp(s, "p", 1) ){
	which_launch = 2;
	if( *s == 'P' ) which_debug = 1;
      }
      /* spawnvp */
      else if( !strncasecmp(s, "s", 1) ){
	which_launch = 3;
	if( *s == 'S' ) which_debug = 1;
      }
      else if( *s == 'V' ) {
	which_debug = 1;
      }
    }
  }
  /* call the correct launch method */
  switch(which_launch){
  case 1:
#if HAVE_MINGW32==0
    if( which_debug ) fprintf(stderr, "launch_fork_exec: %s\n", cmdstring);
    return launch_fork_exec(cmdstring, attach, stdfiles, pipes);
#else
    fprintf(stderr, "ERROR: fork_exec() not available on this host\n");
    exit(1);
#endif
    break;
  case 2:
#if HAVE_POSIX_SPAWN
    if( which_debug ) fprintf(stderr, "launch_posix_spawn: %s\n", cmdstring);
    return launch_posix_spawn(cmdstring, attach, stdfiles, pipes);
#else
    fprintf(stderr, "ERROR: posix_spawn() not available on this host\n");
    exit(1);
#endif
    break;
  case 3:
#if HAVE_SPAWNVP
    if( which_debug ) fprintf(stderr, "launch_spawnvp: %s\n", cmdstring);
    return launch_spawnvp(cmdstring, attach, stdfiles, pipes);
#else
    fprintf(stderr, "ERROR: spawnvp() not available on this host\n");
    exit(1);
#endif
    break;
  default:
#if HAVE_MINGW32==0
    if( which_debug ) fprintf(stderr, "launch_fork_exec: %s\n", cmdstring);
    return launch_fork_exec(cmdstring, attach, stdfiles, pipes);
#else
    fprintf(stderr, "ERROR: no launch techniques available on this host\n");
    exit(1);
#endif
    break;
  }
  /* can't happen */
  return -1;
}

