#
# Makefile for misc programs, not good enough for their own directory
#

RM	= rm
RMFLAGS	= -f
MV	= mv
MVFLAGS	= -f
CP	= cp
CPFLAGS	= -p

MANDIR =	../man

all:		dirs files hardcopy

dirs:
		@(if [ ! -d ${MANDIR} ]; then 				\
		    mkdir ${MANDIR}; 					\
		    mkdir ${MANDIR}/man1 ${MANDIR}/man3 ${MANDIR}/mann; \
		fi)

files:
		@(for i in *.html; do \
		    echo processing $$i; \
		    ./html2man ../man < $$i; \
		done)

hardcopy:	
		html2ps -C fb -d -g -n -u -W b -x 1 -o xpa.ps help.html
		ps2pdf xpa.ps xpa.pdf


# NB: sman.conf must be copied to $HOME or else its not found ...
# we also have to figure out where swish-e is located and hardwire it
index:  szlong
	@(cd ..; MANPATH=`pwd`/man; export MANPATH; cd doc; \
	SW=`which swish-e`; \
	SZ_LONG=`./szlong`; \
	sed -e 's#@SW@#'$$SW'#g' < sman_conf.tmpl > $${HOME}/sman.conf; \
	sman-update --clearcache; \
	sman-update --verbose --index=./sman/xpa$${SZ_LONG}.index; \
	rm -f $${HOME}/sman.conf szlong)

szlong: szlong.c
	$(CC) $(CFLAGS) -o szlong szlong.c

clean:
	-$(RM) $(RMFLAGS) *.BAK *.bak *.o core errs ,* *~ *.a \
	foo* goo* tags TAGS html2ps.dbg


