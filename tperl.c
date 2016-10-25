/*
  http://search.cpan.org/~nwclark/perl-5.8.7/pod/perlembed.pod
  gcc -o tperl tperl.c `perl -MExtUtils::Embed -e ccopts -e ldopts`
 */

#include <EXTERN.h>               /* from the Perl distribution     */
#include <perl.h>                 /* from the Perl distribution     */

static PerlInterpreter *my_perl;  /***    The Perl interpreter    ***/

int main(int argc, char **argv, char **env)
{
  STRLEN n_a;
  char *embedding[] = { "", "-e", "0" };
  
  PERL_SYS_INIT3(&argc,&argv,&env);
  my_perl = perl_alloc();
  perl_construct( my_perl );
  
  perl_parse(my_perl, NULL, 3, embedding, NULL);
  PL_exit_flags |= PERL_EXIT_DESTRUCT_END;
  perl_run(my_perl);
  
  /** Treat $a as an integer **/
  eval_pv("$a = 3; $a **= 2", TRUE);
  printf("a = %d\n", SvIV(get_sv("a", FALSE)));
  
  /** Treat $a as a float **/
  eval_pv("$a = 3.14; $a **= 2", TRUE);
  printf("a = %f\n", SvNV(get_sv("a", FALSE)));
  
  /** Treat $a as a string **/
  eval_pv("$a = 'rekcaH lreP rehtonA tsuJ'; $a = reverse($a);", TRUE);
  printf("a = %s\n", SvPV(get_sv("a", FALSE), n_a));
  
  perl_destruct(my_perl);
  perl_free(my_perl);
  PERL_SYS_TERM();
}
