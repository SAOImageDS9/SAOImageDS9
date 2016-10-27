/* join - join lines of two files on a common field
   Copyright (C) 1991, 1995 Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.

   Written by Mike Haertel, mike@gnu.ai.mit.edu. */

#include <config.h>

/* Get isblank from GNU libc.  */
#define _GNU_SOURCE

#include <xos.h>
#include <xfile.h>
#include <sys/types.h>
#include "system.h"
#include "version.h"

#include <table.h>

int	table = 1; 
File ofile;

char *xmalloc ();
char *xrealloc ();
static void usage ();

#define min(A, B) ((A) < (B) ? (A) : (B))
#define max(A, B) ((A) > (B) ? (A) : (B))

/* An element of the list describing the format of each
   output line. */
struct outlist
  {
    int file;			/* File to take field from (1 or 2). */
    int field;			/* Field number to print. */
    struct outlist *next;
  };

/* A field of a line. */
struct field
  {
    char *beg;			/* First character in field. */
    size_t len;			/* The length of the field. */
  };

/* A line read from an input file.  Newlines are not stored. */
struct line
  {
    char *beg;			/* First character in line. */
    char *lim;			/* Character after last character in line. */
    int nfields;		/* Number of elements in `fields'. */
    int nfields_allocated;	/* Number of elements in `fields'. */
    struct field *fields;
  };

/* One or more consecutive lines read from a file that all have the
   same join field value. */
struct seq
  {
    int count;			/* Elements used in `lines'. */
    int alloc;			/* Elements allocated in `lines'. */
    struct line *lines;
  };

/* The name this program was run with. */
char *program_name;

/* If nonzero, print unpairable lines in file 1 or 2. */
static int print_unpairables_1, print_unpairables_2;

/* If nonzero, print pairable lines. */
static int print_pairables;

/* Empty output field filler. */
static char *empty_filler = NULL;

/* Field to join on. */
static int join_field_1, join_field_2;

/* List of fields to print. */
static struct outlist *outlist;

/* Last element in `outlist', where a new element can be added. */
static struct outlist *outlist_end;

/* Tab character separating fields; if this is NUL fields are separated
   by any nonempty string of white space, otherwise by exactly one
   tab character. */
static char tab = '\t';

/* Used to print non-joining lines */
static struct line uni_blank;
static struct line blank1;
static struct line blank2;

static void
ADD_FIELD (line, field, len)
     struct line *line;
     char *field;
     size_t len;
{
  if (line->nfields >= line->nfields_allocated)
    {
      line->nfields_allocated = (3 * line->nfields_allocated) / 2 + 1;
      line->fields = (struct field *) xrealloc ((char *) line->fields,
						(line->nfields_allocated
						 * sizeof (struct field)));
    }
  line->fields[line->nfields].beg = field;
  line->fields[line->nfields].len = len;
  ++(line->nfields);
}

/* Fill in the `fields' structure in LINE. */

static void
xfields (line)
     struct line *line;
{
  int i;
  register char *ptr, *lim;

  ptr = line->beg;
  lim = line->lim;

  for (i = 0; ptr < lim; ++i)
    {
      if (tab)
	{
	  char *beg, *end;

	  if ( table ) while ( ptr < lim && *ptr == ' ' ) ptr++;
	  beg = ptr;
	  while (ptr < lim && *ptr != tab)
	    ++ptr;
	  if ( table ) {
		end = ptr;
		while (ptr > beg && *(ptr - 1) == ' ' ) ptr--;
		ADD_FIELD (line, beg, ptr - beg);
		ptr = end;
	  } else
		ADD_FIELD (line, beg, ptr - beg);

          if (ptr < lim)
            ++ptr;
	}
      else
	{
	  char *beg;

	  beg = ptr;
	  while (ptr < lim && !ISSPACE (*ptr))
	    ++ptr;
	  ADD_FIELD (line, beg, ptr - beg);
	  while (ptr < lim && ISSPACE (*ptr))
	    ++ptr;
	}
    }

  if ( !table ) {
      if (ptr > line->beg && ((tab && ISSPACE (ptr[-1])) || ptr[-1] == tab))
	{
	  /* Add one more (empty) field because the last character of the
	     line was a delimiter.  */
	  ADD_FIELD (line, NULL, 0);
	}
  } else {
      if ( ptr > line->beg && ptr[-1] == tab ) {
	  ADD_FIELD (line, NULL, 0);
      }
  }
}

/* Read a line from FP into LINE and split it into fields.
   Return 0 if EOF, 1 otherwise. */

int GetCh(fp) 
	FILE	*fp;
{
	int	 c;

	while ( (c = getc(fp)) == '\r' ) ;
	return c;
}

static int
get_line (fp, line)
     FILE *fp;
     struct line *line;
{
  static int linesize = 80;
  int c, i;
  char *ptr;

  if (feof (fp))
    return 0;

  ptr = xmalloc (linesize);

  for (i = 0; (c = GetCh (fp)) != EOF && c != '\n'; ++i)
    {
      if (i == linesize)
	{
	  linesize *= 2;
	  ptr = xrealloc (ptr, linesize);
	}
      ptr[i] = c;
    }

  if (c == EOF && i == 0)
    {
      free (ptr);
      return 0;
    }

  line->beg = ptr;
  line->lim = line->beg + i;
  line->nfields_allocated = 0;
  line->nfields = 0;
  line->fields = NULL;
  xfields (line);
  return 1;
}

static void
freeline (line)
     struct line *line;
{
  free ((char *) line->fields);
  free (line->beg);
  line->beg = NULL;
}

static void
initseq (seq)
     struct seq *seq;
{
  seq->count = 0;
  seq->alloc = 1;
  seq->lines = (struct line *) xmalloc (seq->alloc * sizeof (struct line));
}

/* Read a line from FP and add it to SEQ.  Return 0 if EOF, 1 otherwise. */

static int
getseq (fp, seq)
     FILE *fp;
     struct seq *seq;
{
  if (seq->count == seq->alloc)
    {
      seq->alloc *= 2;
      seq->lines = (struct line *)
	xrealloc ((char *) seq->lines, seq->alloc * sizeof (struct line));
    }

  if (get_line (fp, &seq->lines[seq->count]))
    {
      ++seq->count;
      return 1;
    }
  return 0;
}

static void
delseq (seq)
     struct seq *seq;
{
  int i;
  for (i = 0; i < seq->count; i++)
    if (seq->lines[i].beg)
      freeline (&seq->lines[i]);
  free ((char *) seq->lines);
}

/* Return <0 if the join field in LINE1 compares less than the one in LINE2;
   >0 if it compares greater; 0 if it compares equal. */

static   int Numeric = 0;
static   int Reverse = 0;

static int
keycmp (line1, line2)
     struct line *line1;
     struct line *line2;
{
  char *beg1, *beg2;		/* Start of field to compare in each file. */
  int len1, len2;		/* Length of fields to compare. */
  int diff;

  if (join_field_1 < line1->nfields)
    {
      beg1 = line1->fields[join_field_1].beg;
      len1 = line1->fields[join_field_1].len;
    }
  else
    {
      beg1 = NULL;
      len1 = 0;
    }

  if (join_field_2 < line2->nfields)
    {
      beg2 = line2->fields[join_field_2].beg;
      len2 = line2->fields[join_field_2].len;
    }
  else
    {
      beg2 = NULL;
      len2 = 0;
    }

  if (len1 == 0)
    return len2 == 0 ? 0 : -1;
  if (len2 == 0)
    return 1;

#ifdef SAOMOD
 if ( Numeric ) {
	char chr1 = *(beg1 + len1);
	char chr2 = *(beg2 + len2);

	*(beg1+len1) = '\0';
	*(beg2+len2) = '\0';

	  if ( *beg1 != '+' && *beg1 != '-' && !ISDIGIT(*beg1) )

	    if ( *beg2 != '+' && *beg2 != '-' && !ISDIGIT(*beg2) )
		diff = memcmp (beg1, beg2, min(len1, len2));
	    else
		diff =  1;
	  else
	  if ( *beg2 != '+' && *beg2 != '-' && !ISDIGIT(*beg2) )

	    diff = -1;
	  else
 	  if ( Numeric == 1 ) {
		double	f1 = strtod(beg1, 0);
		double	f2 = strtod(beg2, 0);


             diff = f1 < f2 ? -1 : (f1 == f2 ? 0 : 1);
	  } else {
		double	f1 = SAOstrtod(beg1, 0);
		double	f2 = SAOstrtod(beg2, 0);

     	    diff = f1 < f2 ? -1 : (f1 == f2 ? 0 : 1);
	  }

	*(beg1+len1) = chr1;
	*(beg2+len2) = chr2;

 } else
#endif
  diff = memcmp (beg1, beg2, min (len1, len2));

  if (diff)
#ifndef SAOMOD
	return diff;
#else
        return Reverse ? -diff : diff;

  if ( Numeric ) return diff;
#endif

  return len1 - len2;
}

/* Print field N of LINE if it exists and is nonempty, otherwise
   `empty_filler' if it is nonempty. */

static void
prfield (n, line)
     int n;
     struct line *line;
{
  int len;

  if (n < line->nfields)
    {
      len = line->fields[n].len;
      if (len)
	fwrite (line->fields[n].beg, 1, len, ofile);
      else if (empty_filler)
	fputs (empty_filler, ofile);
    }
  else if (empty_filler)
    fputs (empty_filler, ofile);
}

/* Print the join of LINE1 and LINE2. */

static void
prjoin (line1, line2)
     struct line *line1;
     struct line *line2;
{
  if (outlist)
    {
      struct outlist *o;

      prfield (outlist->field - 1, outlist->file == 1 ? line1 : line2);
      for (o = outlist->next; o; o = o->next)
	{
	  putchar (tab ? tab : ' ');
	  prfield (o->field - 1, o->file == 1 ? line1 : line2);
	}
      putchar ('\n');
    }
  else
    {
      int i;

      if ( line1 == &blank1 )
		prfield (join_field_2, line2);
      else
		prfield (join_field_1, line1);

      for (i = 0; i < join_field_1 && i < line1->nfields; ++i)
	{
	  putchar (tab ? tab : ' ');
	  prfield (i, line1);
	}
      for (i = join_field_1 + 1; i < line1->nfields; ++i)
	{
	  putchar (tab ? tab : ' ');
	  prfield (i, line1);
	}

      for (i = 0; i < join_field_2 && i < line2->nfields; ++i)
	{
	  putchar (tab ? tab : ' ');
	  prfield (i, line2);
	}
      for (i = join_field_2 + 1; i < line2->nfields; ++i)
	{
	  putchar (tab ? tab : ' ');
	  prfield (i, line2);
	}
      putchar ('\n');
    }
}

/* Print the join of the files in FP1 and FP2. */

static void
join (fp1, fp2)
     FILE *fp1;
     FILE *fp2;
{
  struct seq seq1, seq2;
  struct line line;
  int diff, i, j, eof1, eof2;

  /* Read the first line of each file. */
  initseq (&seq1);
  getseq (fp1, &seq1);
  initseq (&seq2);
  getseq (fp2, &seq2);

  while (seq1.count && seq2.count)
    {
      diff = keycmp (&seq1.lines[0], &seq2.lines[0]);
      if (diff < 0)
	{
	  if (print_unpairables_1)
	    prjoin (&seq1.lines[0], &blank2);
	  freeline (&seq1.lines[0]);
	  seq1.count = 0;
	  getseq (fp1, &seq1);
	  continue;
	}
      if (diff > 0)
	{
	  if (print_unpairables_2)
	    prjoin (&blank1, &seq2.lines[0]);
	  freeline (&seq2.lines[0]);
	  seq2.count = 0;
	  getseq (fp2, &seq2);
	  continue;
	}

      /* Keep reading lines from file1 as long as they continue to
         match the current line from file2. */
      eof1 = 0;
      do
	if (!getseq (fp1, &seq1))
	  {
	    eof1 = 1;
	    ++seq1.count;
	    break;
	  }
      while (!keycmp (&seq1.lines[seq1.count - 1], &seq2.lines[0]));

      /* Keep reading lines from file2 as long as they continue to
         match the current line from file1. */
      eof2 = 0;
      do
	if (!getseq (fp2, &seq2))
	  {
	    eof2 = 1;
	    ++seq2.count;
	    break;
	  }
      while (!keycmp (&seq1.lines[0], &seq2.lines[seq2.count - 1]));

      if (print_pairables)
	{
	  for (i = 0; i < seq1.count - 1; ++i)
	    for (j = 0; j < seq2.count - 1; ++j)
	      prjoin (&seq1.lines[i], &seq2.lines[j]);
	}

      for (i = 0; i < seq1.count - 1; ++i)
	freeline (&seq1.lines[i]);
      if (!eof1)
	{
	  seq1.lines[0] = seq1.lines[seq1.count - 1];
	  seq1.count = 1;
	}
      else
	seq1.count = 0;

      for (i = 0; i < seq2.count - 1; ++i)
	freeline (&seq2.lines[i]);
      if (!eof2)
	{
	  seq2.lines[0] = seq2.lines[seq2.count - 1];
	  seq2.count = 1;
	}
      else
	seq2.count = 0;
    }

  if (print_unpairables_1 && seq1.count)
    {
      prjoin (&seq1.lines[0], &blank2);
      freeline (&seq1.lines[0]);
      while (get_line (fp1, &line))
	{
	  prjoin (&line, &blank2);
	  freeline (&line);
	}
    }

  if (print_unpairables_2 && seq2.count)
    {
      prjoin (&blank1, &seq2.lines[0]);
      freeline (&seq2.lines[0]);
      while (get_line (fp2, &line))
	{
	  prjoin (&blank1, &line);
	  freeline (&line);
	}
    }

  delseq (&seq1);
  delseq (&seq2);
}

/* Add a field spec for field FIELD of file FILE to `outlist' and return 1,
   unless either argument is invalid; then just return 0. */

static int
add_field (file, field)
     int file;
     int field;
{
  struct outlist *o;

  if (file < 1 || file > 2 || field < 1)
    return 0;
  o = (struct outlist *) xmalloc (sizeof (struct outlist));
  o->file = file;
  o->field = field;
  o->next = NULL;

  /* Add to the end of the list so the fields are in the right order. */
  if (outlist == NULL)
    outlist = o;
  else
    outlist_end->next = o;
  outlist_end = o;

  return 1;
}

/* Add the comma or blank separated field spec(s) in STR to `outlist'.
   Return the number of fields added. */

static int
add_field_list (str)
     char *str;
{
  int added = 0;
  int file = -1, field = -1;
  int dot_found = 0;

  for (; *str; str++)
    {
      if (*str == ',' || ISBLANK (*str))
	{
	  added += add_field (file, field);
	  uni_blank.nfields = max (uni_blank.nfields, field);
	  file = field = -1;
	  dot_found = 0;
	}
      else if (*str == '.')
	dot_found = 1;
      else if (ISDIGIT (*str))
	{
	  if (!dot_found)
	    {
	      if (file == -1)
		file = 0;
	      file = file * 10 + *str - '0';
	    }
	  else
	    {
	      if (field == -1)
		field = 0;
	      field = field * 10 + *str - '0';
	    }
	}
      else
	return 0;
    }

  uni_blank.nfields = max (uni_blank.nfields, field);
  added += add_field (file, field);
  return added;
}

/* Create a blank line with COUNT fields separated by tabs. */

void
make_blank (blank, count)
     struct line *blank;
     int count;
{
  int i;
  blank->nfields = count;
  blank->beg = xmalloc (blank->nfields + 1);
  blank->fields = (struct field *) xmalloc (sizeof (struct field) * count);
  for (i = 0; i < blank->nfields; i++)
    {
      blank->beg[i] = '\t';
      blank->fields[i].beg = &blank->beg[i];
      blank->fields[i].len = 0;
    }
  blank->beg[i] = '\0';
  blank->lim = &blank->beg[i];
}

char *trim();

main (argc, argv)
     int argc;
     char *argv[];
{
  char *names[2];
  FILE *fp1, *fp2;
  int i, nfiles, val;

  TableHead	T1, T2;

  char	*join_column1 = NULL, *join_column2 = NULL;

  program_name = argv[0];
  ofile = Stdout;

  /* Initialize this before parsing options.  In parsing options,
     it may be increased.  */
  uni_blank.nfields = 1;

  nfiles = 0;
  print_pairables = 1;

for ( i = 1; i < argc; i++ ) {
    if ( argv[i][0] == '-' ) {
      switch (argv[i][1]) {
	case 'a':
	  val = atoi(&argv[i][2]);
	  if (val == 1)
	    print_unpairables_1 = 1;
	  else if (val == 2)
	    print_unpairables_2 = 1;
	  else {
	    fprintf(stderr, "invalid file number for `-a\n");
	    exit(2);
	  }
	  break;

	case 'e': empty_filler = argv[++i]; break;

	case '1': i++; join_column1 = argv[i]; 	break;
	case '2': i++; join_column2 = argv[i]; 	break;

	case 'j':
	    switch ( argv[i][2] ) {
	     case '1': i++; join_column1 = argv[i]; 	break;
	     case '2': i++; join_column2 = argv[i]; 	break;
	     default:
		i++; join_column1 = argv[i];
		     join_column2 = argv[i]; 	break;
	    }; 
	    break;

	case 't': tab = argv[i][2];		break;

	case 'v': val = atoi(&argv[i][2]);

	  if (val == 1)
	    print_unpairables_1 = 1;
	  else if (val == 2)
	    print_unpairables_2 = 1;
	  else {
	    fprintf(stderr, "invalid file number for `-v\n");
	    exit(2);
	  }
	  print_pairables = 0;
	  break;

	case 'A': Numeric = 0;	break;
	case 'n': Numeric = 1;	break;
	case 'h': Numeric = 2;	break;
	case 'r': Reverse = 1;	break;

	case 'o' : i++;
	    if ( (ofile = (!strcmp("-", argv[i]))
		    ? Stdout : Open(argv[i], "w")) == NULL ) {
		FPrint(Stderr, "jointable: can't open output file: %s\n"
			, argv[i]);
		perror("jointable");
		exit(1);
	    }

	case '?':
	  usage (0);

	case 0:
	  if (nfiles > 1)
	    usage (1);

	  names[nfiles++] = argv[i];
	  break;

	}
	continue;
    }
    if (nfiles > 1) usage (1);

    names[nfiles++] = argv[i];
}

  /* Now that we've seen the options, we can construct the blank line
     structure.  */
  make_blank (&uni_blank, uni_blank.nfields);

  if (nfiles != 2)
    usage (1);

  fp1 = Open(names[0], "r");
  if (!fp1) {
      perror(names[0]);
      exit(2);
  }
  fp2 = Open(names[1], "r");
  if (!fp2) {
      perror(names[1]);
      exit(2);
  }
  if (fp1 == fp2) {
      fprintf(stderr, "both files cannot be standard input\n");
      exit(2);
  }

  if ( (T1 = table_header(fp1, 0)) == NULL ) {
        FPrint(Stderr, "jointable: can't read table header from: %s\n", names[0]);
        exit(1);
  }
  if ( (T2 = table_header(fp2, 0)) == NULL ) {
        FPrint(stderr, "jointable: can't read table header from: %s\n", names[1]);
        exit(1);
  }

  if ( join_column1 == NULL ) {
        FPrint(stderr, "jointable: no join column for table 1\n");
        exit(1);
  }

  if ( join_column2 == NULL ) {
        FPrint(stderr, "jointable: no join column for table 2\n");
        exit(1);
  }
	
  if ( !(join_field_1 = table_colnum(T1, join_column1)) ) {
        FPrint(Stderr, "jointable: can't find column: %s in file: %s\n", join_column1, names[0]);
        exit(1);
  }
  if ( !(join_field_2 = table_colnum(T2, join_column2)) ) {
        FPrint(Stderr, "jointable: can't find column: %s in file: %s\n", join_column2, names[1]);
        exit(1);
  }

        FPrint(ofile, "%s%c", T1->header->column[join_field_1]
			, T1->header->ncol == 1 && T2->header->ncol == 1 ? '\n' : '\t');

        for ( i = 1; i <= T1->header->ncol; i++ )
            /* look up column name in the other table.
             */
          if ( i != join_field_1 ) {
		int c2 = table_colnum(T2, trim(table_colval(T1->header, i)));

            hdrfix(ofile, table_colval(T1->header, i)
                 , c2 != 0 && c2 != join_field_2 ? 1 : 0
                 , i == table_ncol(T1) && T2->header->ncol == 1 ? '\n' : '\t');
	  }

        { int lastcol = T2->header->ncol == join_field_2 ? join_field_2 - 1 : T2->header->ncol;

	  if ( lastcol != 0 ) {
            for ( i = 1; i <= lastcol; i++ )
              if ( i != join_field_2 ) {
		    int c1 = table_colnum(T1, trim(table_colval(T2->header, i)));

                hdrfix(ofile, table_colval(T2->header, i)
                     , c1 != 0 && c1 != join_field_1 ? 2 : 0
                     , i == lastcol ? '\n' : '\t');
	      }
	  }
        }

        FPrint(ofile, "%s%c", T1->dashes->column[join_field_1]
			, T1->header->ncol == 1 && T2->header->ncol == 1 ? '\n' : '\t');
        for ( i = 1; i <= table_ncol(T1); i++ )
            if ( i != join_field_1 ) FPrint(ofile, "%s%c"
                                , T1->dashes->column[i]
                                , i == table_ncol(T1) && T2->header->ncol == 1 ? '\n' : '\t');
        { int lastcol = T2->header->ncol == join_field_2 ? join_field_2 - 1 : T2->header->ncol;

	  if ( lastcol != 0 ) {
            for ( i = 1; i <= lastcol; i++ )
                if ( i != join_field_2 ) FPrint(ofile, "%s%c"
                                    , T2->dashes->column[i]
                                    , i == lastcol ? '\n' : '\t');
	  }
        }

    blank1.nfields = T1->header->ncol;
    blank2.nfields = T2->header->ncol;

    table_hdrfree(T1);
    table_hdrfree(T2);

  /* These line are moved from above so that the number of fields in a
     blank line may be set by the table headers.
   */
  /* Now that we've seen the options, we can construct the blank line
     structures.  */
  make_blank(&blank1, blank1.nfields);
  make_blank(&blank2, blank2.nfields);

  join_field_1--;
  join_field_2--;

  join (fp1, fp2);

  if ((fp1 == stdin || fp2 == stdin) && fclose (stdin) == EOF) {
      perror("-");
      exit(2);
  }
  if (ferror (ofile) || fclose (ofile) == EOF) {
      perror("write error");
      exit(2);
  }

  exit (0);
}

static void
usage (status)
     int status;
{
  if (status != 0)
    fprintf (stderr, "jointable -? for more information.\n",
	     program_name);
  else
    {
      printf ("\
Usage: %s [OPTION]... FILE1 FILE2\n\
",
	      program_name);
      printf ("\
For each pair of input lines with identical join fields, write a line to\n\
standard output.  The default join field is the first, delimited\n\
by whitespace.  When FILE1 or FILE2 (not both) is -, read standard input.\n\
\n\
  -a SIDE          print unpairable lines coming from file SIDE\n\
  -e EMPTY         replace missing input fields with EMPTY\n\
  -j FIELD         join on this FIELD for both files\n\
  -[j]SIDE FIELD   join on this FIELD for file SIDE\n\
  -o FORMAT        obey FORMAT while constructing output line\n\
  -t CHAR          use CHAR as input and output field separator\n\
  -v SIDE          like -a SIDE, but suppress joined output lines\n\
  -A               ascii sort order (default)\n\
  -n               numeric sort order\n\
  -h               numeric sort order w/ sexagesmal format accepted\n\
\n\
SIDE is 1 for FILE1 or 2 for FILE2.  Unless -t CHAR is given, leading blanks\n\
separate fields and are ignored, else fields are separated by CHAR.\n\
Any FIELD is a field number counted from 1.  FORMAT is one or more\n\
comma or blank separated specifications, each being `SIDE.FIELD'.\n\
Default FORMAT outputs the join field, the remaining fields from\n\
FILE1, the remaining fields from FILE2, all separated by CHAR.\n\
");
    }
  exit (status);
}
