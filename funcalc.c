/*
 *	Copyright (c) 1999-2003 Smithsonian Astrophysical Observatory
 */

#if HAVE_CONFIG_H
#include <conf.h>
#endif
#include <funtools.h>
#include <file.h>
#include <find.h>
#include <word.h>
#ifdef USE_LAUNCH
#include <xlaunch.h>
#endif
#include <mkrtemp.h>
#include <calc.h>

extern char *optarg;
extern int optind;

#ifndef FUN_INCLUDE
#define FUN_INCLUDE "-I."
#endif

#ifndef FUN_LIB
#define FUN_LIB "-L. -lfuntools -lsocket -ldl -lm"
#endif

#ifdef ANSI_FUNC
static void
usage (char *fname)
#else
static void usage(fname)
     char *fname;
#endif
{
  fprintf(stderr,
  "usage: %s [-n] [-a 'args'] [-e expr] [-f file] [-l libs] [-p prog] [-u] iname [oname [columns]]\n",
  fname);
  fprintf(stderr, "optional switches:\n");
  fprintf(stderr, "  -a 'args'     # arguments to add to program command line\n");
  fprintf(stderr, "  -e 'expr'     # funcalc expression to execute\n");
  fprintf(stderr, "  -f [filename] # filename containing funcalc expression\n");
  fprintf(stderr, "  -l [libs]     # extra libraries to link\n");
  fprintf(stderr, "  -n            # write program to stdout instead of executing it \n");
  fprintf(stderr, "  -p [prog]     # create prog instead of executing it\n");
  fprintf(stderr, "  -u            # no auto-define: die if variable is undefined\n");
  fprintf(stderr, "\n(version: %s)\n", FUN_VERSION);
  exit(1);
}

#ifdef ANSI_FUNC
int 
main (int argc, char **argv)
#else
int
main(argc, argv)
     int argc;
     char **argv;
#endif
{
  int i, j=0;
  int dosave = 0;
  int c, args;
  int got, len, doexe;
  int exprlen, autolen;
  int tries;
  int error;
  int fd;
  char *s=NULL;
  char *cc, *cflags, *funpath;
  char *expr, *argstr, *libs, *autodefs, *codestr=NULL;
  char *tmpdir;
  char *iname=NULL, *oname=NULL;
  char prefix[SZ_LINE];
  char code[SZ_LINE], prog[SZ_LINE], log[SZ_LINE];
  char cmd[SZ_LINE], cmd2[SZ_LINE];
  char tbuf[SZ_LINE];
  char **nargv;
#ifdef USE_LAUNCH
  char *stdfiles[3];
#endif
  FILE *fp;

  /* exit on gio errors */
  if( !getenv("GERROR")  )
    setgerror(2);
  
  /* init */
  tries = 0;
  doexe = 1;
  expr = NULL;
  argstr = NULL;
  autodefs = xstrdup("");
  libs = xstrdup("");
  error = 0;
  *prog = '\0';

  /* we want the args in the same order in which they arrived, and
     gnu getopt sometimes changes things without this */
  putenv("POSIXLY_CORRECT=true");

  /* process switch arguments */
  while ((c = getopt(argc, argv, "a:1e:f:hl:np:u")) != -1){
    switch(c){
    case '1':
      tries = 1;
      break;
    case 'a':
      argstr = xstrdup(optarg);
      break;
    case 'e':
      expr = xstrdup(optarg);
      break;
    case 'f':
      expr = FileContents(optarg, 0, NULL);
      if( !expr || !*expr )
	gerror(stderr, "invalid funcalc expression file: %s\n", optarg);
      break;
    case 'h':
      usage(argv[0]);
      break;
    case 'l':
      libs = xstrdup(optarg);
      break;
    case 'n':
      doexe = 0;
      break;
    case 'p':
      strncpy(prog, optarg, SZ_LINE-1);
      doexe = 0;
      dosave = 1;
      break;
    case 'u':
      tries = 1;
      break;
    }
  }

  /* check for required arguments */
  args = argc - optind;
  if( args == 0 ) usage(argv[0]);
  iname = argv[optind+0];
  if( args >= 2 )
    oname = argv[optind+1];

  /* if an expression has not been supplied, read stdin */
  if( !expr || !*expr ){
    exprlen=0;
    while( fgets(tbuf, SZ_LINE-1, stdin) )
      _CalcCat(tbuf, &expr, &exprlen);
  }

  /* make sure we have something to work with */
  if( !expr || !*expr ) usage(argv[0]);

  /* generate code and exec */
  funpath = (char *)getenv("PATH");
  if( !(cc = xstrdup(getenv("FUNCALC_CC")))			&&
      !(cc = xstrdup(FUNCALC_CC))				&&
      !(cc = xstrdup(getenv("CC"))) 	        		&&
      !(cc = Find("gcc", "x", NULL, funpath))   		&&
      !(cc = Find("cc", "x", NULL, "."))  			&&
      !(cc = Find("cc", "x", NULL, FUNCALC_PATH)) 		){
    gerror(stderr, "no compiler for program generation\n");
  }
  
  /* get cflags */
  if( !(cflags = xstrdup(getenv("FUNCALC_CFLAGS")))	&&
      !(cflags = xstrdup(FUNCALC_CFLAGS))		)
    cflags = xstrdup(" ");

  /* get prefix for filter source and program */
  if( !(tmpdir = (char *)getenv("FUNCALC_TMPDIR")) &&
      !(tmpdir = (char *)getenv("TMPDIR"))         &&
      !(tmpdir = (char *)getenv("TMP"))             )
    tmpdir = DEFAULT_FUNCALC_TMPDIR;
  if( !*tmpdir )
    tmpdir = ".";
  snprintf(prefix, SZ_LINE-1, "%s/c", tmpdir);

again:
  /* make up name of C source file we will generate */
  if( (fd=mkrtemp(prefix, ".c", code, SZ_LINE, 1)) < 0 ){
    fprintf(stderr, "ERROR: could not generate C funcalc source name: %s\n",
	    prefix);
    error = 1;
    goto endgame;
  }

  /* make up the name of the program we will compile into.
     we make this different from the .c file name to make interception
     by an intruder harder */
  if( !*prog ){
    if( mkrtemp(prefix, NULL, prog, SZ_LINE, 0) < 0 ){
      fprintf(stderr, "ERROR: could not generate C funcalc program name: %s\n",
	      prefix);
      error = 1;
      goto endgame;
    }
  }

  /* make up the command strings */
  snprintf(cmd, SZ_LINE-1, "%s %s %s -o %s %s %s %s", 
	   cc, cflags, FUN_INCLUDE, prog, code, libs, FUN_LIB);
  snprintf(cmd2, SZ_LINE-1, "%s %s %s -o <prog> <this file>.c %s %s",
	   cc, cflags, FUN_INCLUDE, libs, FUN_LIB);

  /* parse expression */
  if(!(codestr = FunCalcParse(iname, oname, cmd2, expr, autodefs, args))){
    fprintf(stderr, "ERROR: no program generated!\n");
    error = 1;
    goto endgame;
  }

  /* get stdio handle and output the generated code */
  if( !(fp = fdopen(fd, "w+b")) ){
    fprintf(stderr, "ERROR: could not open funcalc source file: %s\n", code);
    error = 1;
    goto endgame;
  }
  fprintf(fp, "%s\n", codestr);
  fclose(fp);

  /* make log file name */
  snprintf(log, SZ_LINE-1, "%s.log", prog);

  /* issue the shell command to compile the program */
#ifdef USE_LAUNCH
  stdfiles[0] = NULL;
  stdfiles[1] = "/dev/null";
  stdfiles[2] = log;
  got = Launch(cmd, 1, stdfiles, NULL);
#else
  snprintf(tbuf, SZ_LINE-1, " 1>/dev/null 2>%s", log);
  strcat(cmd, tbuf);
  got = system(cmd);
#endif
  /* now we can see if we succeeded in issuing the command */
  if( got < 0 ){
    fprintf(stderr, "could not run funcalc compilation\n");
    error = 1;
    goto endgame;
  }
  
  /* if we have no executable program, we failed */
  if( !(s=Find(prog, "x", NULL, funpath)) ){
    if( autodefs ){
      xfree(autodefs);
      autodefs = NULL;
    }
    autolen = 0;
    if( s ){
      xfree(s);
      s = NULL;
    }
    /* first time through, see if we can auto-define undefined variables */
    if( !tries ){
      if( (s=Find(FUNCALC_SED, "r", NULL, funpath)) ){
	snprintf(tbuf, SZ_LINE-1,
		 "sed -n -f %s %s | awk '{print \"double\",$1\"=0.0;\"}'\n", 
		 s, log);
	if( (fp = popen(tbuf, "r")) ){
	  while( fgets(tbuf, SZ_LINE, fp) )
	    _CalcCat(tbuf, &autodefs, &autolen);
	  pclose(fp);
	  /* clean up from previous attempt */
	  if( s ){
	    xfree(s);
	    s = NULL;
	  }
	  if( codestr ){
	    xfree(codestr);
	    codestr = NULL;
	  }
	  unlink(code);
	  unlink(log);
	  tries++;
	  goto again;
	}
      }
    }
    fprintf(stderr, "ERROR: funcalc compilation failed\n");
    if( s ){
      xfree(s);
      s = NULL;
    }
    s = FileContents(log, 0, &len);
    if( s && *s && len )
      fprintf(stderr, "Compilation error message:\n%s\n", s);
    error = 1;
    goto endgame;
  }
  
endgame:
  /* done with the expression */
  if( autodefs ) xfree(autodefs);
  if( expr )     xfree(expr);
  if( s )        xfree(s);
  if( libs )     xfree(libs);
  if( cc )       xfree(cc);
  if( cflags )   xfree(cflags);
  if( argstr && !doexe )   xfree(argstr);

  /* delete the program body */
  if( !(s=getenv("FUNCALC_KEEP")) || !istrue(s) )
    unlink(code);

  /* Sun cc can leave an extraneous .o around, which we don't want */
  strcpy(tbuf, code);
  /* change .c to .o */
  tbuf[strlen(tbuf)-1] = 'o';
  unlink(tbuf);
  /* ... actually its usually left in the current directory */
  if( (s = strrchr(tbuf, '/')) )
    unlink(s+1);

  /* Sun cc can leave an extraneous .o around, which we don't want */
  snprintf(tbuf, SZ_LINE-1, "%s.o", prog);
  unlink(tbuf);
  /* ... actually its usually left in the current directory */
  if( (s = strrchr(tbuf, '/')) )
    unlink(s+1);
  
  /* delete log file */
  unlink(log);

  /* finally -- we have an executable and no errors, execute it */
  if( doexe ){
    if( codestr ) xfree(codestr);
    if( !error ){
      nargv = xcalloc(args+6, sizeof(char *));
      nargv[0] = prog;
      nargv[1] = "-d";
      if( argstr && *argstr ){
	nargv[2] = "-a";
	nargv[3] = argstr;
	j = 2;
      }
      for(i=0; i<args; i++){
	nargv[i+j+2] = argv[optind+i];
	nargv[i+j+3] = NULL;
      }
      execv(prog, (void *)nargv);
    }
  }
  else{
    /* output and delete program, if necesssary */
    if( !dosave ){
      /* output generated code */
      fprintf(stdout, "%s\n", codestr);
      /* delete executable */
      unlink(prog);
    }
    if( codestr ) xfree(codestr);
  }
  return(0);
}
