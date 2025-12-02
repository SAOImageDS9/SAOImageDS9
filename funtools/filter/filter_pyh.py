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

