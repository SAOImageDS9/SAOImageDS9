# load the funtools routines
_libname = './libfuntools.so.1.0'
libfuntools=cdll.LoadLibrary(_libname)
libc=cdll.LoadLibrary(None)

# region definitions
imannulusi=libfuntools.imannulusi
imboxi=libfuntools.imboxi
imcirclei=libfuntools.imcirclei
imellipsei=libfuntools.imellipsei
imfieldi=libfuntools.imfieldi
imlinei=libfuntools.imlinei
impiei=libfuntools.impiei
imqtpiei=libfuntools.imqtpiei
impointi=libfuntools.impointi
impandai=libfuntools.impandai
imnannulusi=libfuntools.imnannulusi
imnboxi=libfuntools.imnboxi
imnellipsei=libfuntools.imnellipsei
imnpiei=libfuntools.imnpiei
impolygoni=libfuntools.impolygoni
imvannulusi=libfuntools.imvannulusi
imvboxi=libfuntools.imvboxi
imvellipsei=libfuntools.imvellipsei
imvpiei=libfuntools.imvpiei
imvpointi=libfuntools.imvpointi
imannulus=libfuntools.imannulus
imbox=libfuntools.imbox
imcircle=libfuntools.imcircle
imellipse=libfuntools.imellipse
imfield=libfuntools.imfield
imline=libfuntools.imline
impie=libfuntools.impie
imqtpie=libfuntools.imqtpie
impoint=libfuntools.impoint
impanda=libfuntools.impanda
imnannulus=libfuntools.imnannulus
imnbox=libfuntools.imnbox
imnellipse=libfuntools.imnellipse
imnpie=libfuntools.imnpie
impolygon=libfuntools.impolygon
imvannulus=libfuntools.imvannulus
imvbox=libfuntools.imvbox
imvellipse=libfuntools.imvellipse
imvpie=libfuntools.imvpie
imvpoint=libfuntools.imvpoint

evannulus=libfuntools.evannulus
evbox=libfuntools.evbox
evcircle=libfuntools.evcircle
evellipse=libfuntools.evellipse
evfield=libfuntools.evfield
evline=libfuntools.evline
evpie=libfuntools.evpie
evqtpie=libfuntools.evqtpie
evpoint=libfuntools.evpoint
evnannulus=libfuntools.evnannulus
evnbox=libfuntools.evnbox
evnellipse=libfuntools.evnellipse
evnpie=libfuntools.evnpie
evpanda=libfuntools.evpanda
evpolygon=libfuntools.evpolygon
evvannulus=libfuntools.evvannulus
evvbox=libfuntools.evvbox
evvellipse=libfuntools.evvellipse
evvpie=libfuntools.evvpie
evvpoint=libfuntools.evvpoint

evvcircle=libfuntools.evvannulus
evncircle=libfuntools.evnannulus
evcpanda=libfuntools.evpanda

imvcirclei=libfuntools.imvannulusi
imncirclei=libfuntools.imnannulusi
imvcircle=libfuntools.imvannulus
imncircle=libfuntools.imnannulus
imcpandai=libfuntools.impandai
imcpanda=libfuntools.impanda

# from regions.h -- no idea what it is ...
xsno=3

#  ... but its important!
maxshapes=(nshape*(xsno+1))+1

# ctypes struct definitions (taken from filter.h)
class filtmask(Structure):
    _fields_ = [('region', c_int), ('y', c_int), ('xstart', c_int), ('xstop', c_int)]

class scanrec(Structure):
    pass

# this is how you add a forward pointer
scanrec._fields_ = [ ('next', POINTER(scanrec)), ('x', c_int) ]

class shaperec(Structure):
    _fields_ = [ ('init', c_int), ('ystart', c_double), ('ystop', c_double),	 ('scanlist', c_void_p), ('nv', c_int), ('xv', c_void_p), ('r1sq', c_double), ('r2sq', c_double), ('angl', c_double), ('sinangl', c_double), ('cosangl', c_double), ('cossq', c_double), ('sinsq', c_double), ('xradsq', c_double), ('yradsq', c_double), ('a', c_double), ('npt', c_int), ('pts', c_void_p), ('xonly', c_int), ('x1', c_double), ('x2', c_double), ('y1', c_double), ('invslope', c_double)]

class gfiltrec(Structure):
    _fields_ = [('nshapes', c_int), ('maxshapes', c_int), ('shapes', POINTER(shaperec * maxshapes)), ('rid', c_int), ('usebinsiz', c_int), ('evsect', c_char_p), ('tlminx', c_double), ('tlminy', c_double), ('binsizx', c_double), ('binsizy', c_double), ('tloff', c_double), ('xmin', c_int), ('xmax', c_int), ('ymin', c_int), ('ymax', c_int), ('block', c_int), ('x0', c_int), ('x1', c_int), ('y0', c_int), ('y1', c_int), ('ybuf', POINTER(c_int)), ('x0s', POINTER(c_int)), ('x1s', POINTER(c_int)), ('nmask', c_int), ('maskdim', c_int), ('masks', POINTER(filtmask))]

# taken from the code in evfilter.c that initializes the g struct
# allocate shape record
shapearr = (shaperec * maxshapes)()
# allocate g record
grec = gfiltrec()
# fill in g record
grec.nshapes = nshape
grec.maxshapes = maxshapes
grec.shapes = pointer(shapearr)
# pointer to g record
g=pointer(grec)

# # processing loop
# while True:
#     rvals = ''
#     buf = sys.stdin.read(4)
#     if not buf: break
#     vals = struct.unpack('=i', buf)
#     nev = vals[0]/evsize
#     for i in range(nev):
#         evbuf = sys.stdin.read(evsize)
#         rvals += struct.pack('=i', xfilter(evdef, evbuf))
#     sys.stdout.write(struct.pack('=i', nev*4))
#     sys.stdout.write(rvals)
#     sys.stdout.flush()

# processing loop
obytes = 0
while True:
    # get byte count
    nval = c_int(0)
    if libc.read(0, byref(nval), 4) != 4: break
    bytes = nval.value
    nev =  bytes / evsize

    # create a new data buffer, if necessary
    if obytes != bytes:
        evbuf = create_string_buffer(bytes)
        pevbuf = addressof(evbuf)
	rvals = (c_int * nev)()
	obytes = bytes

    # read data
    if libc.read(0, evbuf, bytes) != bytes: break

    # process data
    ioff = 0
    for i in range(nev):
        rvals[i] = xfilter(evdef, evbuf[ioff:ioff+evsize])
	ioff += evsize

    # write result byte count and result data
    nval = c_int(nev*4)
    libc.write(1, byref(nval), 4)
    libc.write(1, rvals, nval)
