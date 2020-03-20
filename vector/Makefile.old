SRC	= vector.C vector3d.C vectorstr.C

INCLS	= $(wildcard *.h)
OBJS	= $(SRC:%.C=%.o)

LIB	= libvector.a

all	: $(LIB)

install	: all
	cp -f $(LIB) $(libdir)
	cp -f $(INCLS) $(includedir)

$(LIB)	: $(OBJS)
	$(RM) $@
	$(AR) -cr $@ $(OBJS)

clean	:
	rm -f *.o *.a core *~ *#

distclean : clean

