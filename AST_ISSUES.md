# AST issues still to report

Three findings in `ast/src/yamlchan.c` and `ast/src/winmap.c` that this project
turned up and did **not** patch, written as text to paste into
`github.com/Starlink/ast` issues. Everything here was measured against upstream
`master` at 9cf7f8ff, not against the vendored copy.

Nine other bugs were found and fixed; those are pull requests rather than
issues, one branch each in the `ast_upstream/` clone, and eight of the nine are
also applied to the vendored `ast/`. `TODO.md`'s "The AST bugs" section is the
full list with the reasoning, and its "Upstream AST patches" section names the
branches.

Why these three are issues and not patches:

| # | finding | why no patch |
|---|---|---|
| 1 | heap overread in `winmap.c`'s `MapMerge` | the obvious bounds guard stops the overread but exposes a second problem behind it, so the fix needs a maintainer's judgement |
| 2 | a projection with no ASDF class reports a confusing internal error | where to report it, and how to name the projection, is a design choice |
| 3 | `gcrs`, `cirs`, `tete` and `precessedgeocentric` are not recognised | mapping an observed or intermediate frame onto an AST SkyFrame System is a design decision |

Issue 1 is the one with real consequences: it is a memory error, and it made a
WCS read succeed on macOS and fail on Linux from identical bytes.

---

## YamlChan: heap-buffer-overflow in winmap.c MapMerge when simplifying

Reading a GWCS whose transform puts **two `planar2d`s in a parallel CmpMap**
reads one element past the end of a heap buffer. What follows that buffer
decides the outcome, so the same file behaves differently on different
platforms: on macOS it builds a FrameSet and on Linux the read fails with

```
astInitCmpMap(CmpMap): The number of output coordinates per point (2) for the
first Mapping supplied does not match the number of input coordinates (1) for
the second Mapping.
Error occurred when reading an ASDF 'concatenate' object.
```

`ReadConcatenate` combines in parallel, which cannot raise that error, and the
context chain stops at `concatenate` rather than naming `fix_inputs`, so the
failing `astCmpMap` is inside the `astSimplify` that `ReadConcatenate` calls.

### AddressSanitizer

Built at 9cf7f8ff with `-fsanitize=address`:

```
ERROR: AddressSanitizer: heap-buffer-overflow
READ of size 8 at ... (0 bytes after a 32-byte region)
    #0 in MapMerge winmap.c:1352
    #1 in astMapMerge_ mapping.c:24281
    #2 in MapMerge shiftmap.c:706
    #3 in astMapMerge_ mapping.c:24281
    #4 in Simplify cmpmap.c:3776
    #5 in astSimplify_ mapping.c:24772
    #6 in MapMerge cmpmap.c:1641
    ...
    #14 in ReadConcatenate yamlchan.c:7528

allocated by thread T0 here:
    #3 in WinTerms winmap.c:3657
    #4 in MapMerge winmap.c:1308
```

### Where

`winmap.c`'s `MapMerge`, in the branch that converts a WinMap next to a
parallel CmpMap into a parallel CmpMap of two series CmpMaps:

```c
(void) astWinTerms( oldwm, 0, &a, &b );       /* return value discarded */
...
nin  = cmlow ? astGetNout( mc[0] ) : astGetNin( mc[0] );
...     (newwm ->a)[i] = a[i];
nin2 = cmlow ? astGetNout( mc[1] ) : astGetNin( mc[1] );
...     (newwm2->a)[i] = a[i + nin];          /* <- reads past the end */
```

`astWinTerms` returns the number of axes, which is the length of both arrays,
and the caller discards it; nothing then relates `nin + nin2` to that length.
Instrumenting the failing case prints

```
nax=1 nin=1 nin2=1 cmlow=1 ser=0 | WinMap Nin=1 Nout=1 | CmpMap Nin=4 Nout=2
   | mc0 MatrixMap Nin=2 Nout=1 | mc1 MatrixMap Nin=2 Nout=1
```

so a one-axis WinMap is being merged with a parallel CmpMap whose output count
is 2, a pair that cannot be series neighbours. The defect therefore looks to be
upstream of the read — the merger is reached with an incompatible pair — and the
overread is how it surfaces.

Adding `if( nin + nin2 == nax )` around the split stops the overread, but then
macOS fails in the same way Linux does, so that guard only removes the accident
that was hiding a second problem. Hence a report rather than a patch.

### What triggers it

A `planar2d` becomes `CmpMap( MatrixMap(2->1), ShiftMap(1), series )`. Two of
them combined in parallel is what leaves a one-axis WinMap (the simplified
ShiftMap) beside a parallel CmpMap whose two components are 2-in/1-out, which
is the case the split below cannot handle. One `planar2d` is fine, and
`polynomial`/`ortho_polynomial` are unaffected because they become PolyMaps,
with no WinMap involved.

Wrapping each `planar2d` in a `fix_inputs` reaches it the same way.

### Reproducing

The shortest form — a `concatenate` of two `planar2d`s, fed by a duplicating
`remap_axes` so the pair has its four inputs. Save as `planar2d_overread.asdf`:

```yaml
#ASDF 1.0.0
%YAML 1.1
%TAG ! tag:stsci.edu:asdf/
--- !core/asdf-1.1.0
wcs: !<tag:stsci.edu:gwcs/wcs-1.0.0>
  name: ''
  steps:
  - !<tag:stsci.edu:gwcs/step-1.0.0>
    frame: !<tag:stsci.edu:gwcs/frame2d-1.0.0>
      axes_names: [x, y]
      axes_order: [0, 1]
      axis_physical_types: ['custom:x', 'custom:y']
      name: detector
      unit: [!unit/unit-1.0.0 deg, !unit/unit-1.0.0 deg]
    transform: !transform/compose-1.1.0
      forward:
      - !transform/remap_axes-1.3.0
        mapping: [0, 1, 0, 1]
        n_inputs: 2
      - !transform/concatenate-1.1.0
        forward:
        - !transform/planar2d-1.0.0 {intercept: 1.0, slope_x: 2.0, slope_y: 3.0}
        - !transform/planar2d-1.0.0 {intercept: -2.0, slope_x: 0.5, slope_y: 1.0}
  - !<tag:stsci.edu:gwcs/step-1.0.0>
    frame: !<tag:stsci.edu:gwcs/celestial_frame-1.0.0>
      axes_names: [lon, lat]
      axes_order: [0, 1]
      axis_physical_types: [pos.eq.ra, pos.eq.dec]
      name: world
      reference_frame: !<tag:astropy.org:astropy/coordinates/frames/icrs-1.1.0>
        frame_attributes: {}
      unit: [!unit/unit-1.0.0 deg, !unit/unit-1.0.0 deg]
    transform: null
```

then `astRead` it through a YamlChan with `SourceFile` set to that file.

The `fix_inputs` form below reaches the same place, and was how it was first
found:

```yaml
#ASDF 1.0.0
%YAML 1.1
%TAG ! tag:stsci.edu:asdf/
--- !core/asdf-1.1.0
wcs: !<tag:stsci.edu:gwcs/wcs-1.0.0>
  name: ''
  steps:
  - !<tag:stsci.edu:gwcs/step-1.0.0>
    frame: !<tag:stsci.edu:gwcs/frame2d-1.0.0>
      axes_names: [x, y]
      axes_order: [0, 1]
      axis_physical_types: ['custom:x', 'custom:y']
      name: detector
      unit: [!unit/unit-1.0.0 deg, !unit/unit-1.0.0 deg]
    transform: !transform/concatenate-1.1.0
      forward:
      - !transform/fix_inputs-1.1.0
        forward:
        - !transform/planar2d-1.0.0 {intercept: 1.0, slope_x: 2.0, slope_y: 3.0}
        - keys: [1]
          values: [5.0]
      - !transform/fix_inputs-1.1.0
        forward:
        - !transform/planar2d-1.0.0 {intercept: 0.0, slope_x: 1.0, slope_y: 2.0}
        - keys: [1]
          values: [4.0]
  - !<tag:stsci.edu:gwcs/step-1.0.0>
    frame: !<tag:stsci.edu:gwcs/celestial_frame-1.0.0>
      axes_names: [lon, lat]
      axes_order: [0, 1]
      axis_physical_types: [pos.eq.ra, pos.eq.dec]
      name: world
      reference_frame: !<tag:astropy.org:astropy/coordinates/frames/icrs-1.1.0>
        frame_attributes: {}
      unit: [!unit/unit-1.0.0 deg, !unit/unit-1.0.0 deg]
    transform: null
```

One `fix_inputs` is clean; as above, it takes two `planar2d`s in a parallel
CmpMap to trigger.

---

## YamlChan: writing a projection with no ASDF class reports a confusing error

`WriteAsdfWcsMap` (yamlchan.c, around line 16970) maps each AST projection type
to an ASDF transform class, ending in

```c
   } else {
      class = NULL;
   }

/* Check the projection class is supported by ASDF. */
   if( class ) {
```

so a projection with no ASDF equivalent is meant to be detected. It is, but the
NULL return is not handled by the caller, and `astWrite` fails with

```
astIsAObject(<NULL>): Invalid Object pointer given (points at address 0x0).
```

which says nothing about the projection, and comes from `WriteAsdfCompose`
calling `astIsAKeyMap` on the NULL it was handed.

Four AST projections have no branch in that chain and so hit this: **ZPN, NCP,
GLS and TPN**. (AZP also did; that is the subject of a separate PR.)

Reporting it where it is detected — naming the projection, e.g. via
`astWcsPrjName( type )` — would make this self-explanatory.

### Reproducing

```c
#include "ast.h"
static const char *cards[] = {
 "CRPIX1  = -6.0", "CRPIX2  =  7.0", "CDELT1  = -6.0", "CDELT2  =  6.0",
 "CTYPE1  = 'RA---ZPN'", "CTYPE2  = 'DEC--ZPN'",
 "CRVAL1  =  0.0", "CRVAL2  = -90.0",
 "PV2_1   =  1.0", "PV2_3   =  0.1", "LONPOLE = 180.0", NULL };
int main( void ){
   AstFitsChan *fc; AstFrameSet *fs; AstYamlChan *ch; int i;
   astBegin;
   fc = astFitsChan( NULL, NULL, " " );
   for( i = 0; cards[i]; i++ ) astPutFits( fc, cards[i], 0 );
   astClear( fc, "Card" );
   fs = (AstFrameSet *) astRead( fc );
   ch = astYamlChan( NULL, NULL, " " );
   astSet( ch, "SinkFile=zpn_out.asdf" );
   astWrite( ch, fs );
   astEnd;
   return 0;
}
```

Note that an application linking the shared library must supply `astPutErr_`,
or AST's own error delivery calls through a null pointer and the program
appears to crash rather than reporting this.

---

## YamlChan: gcrs, cirs, tete and precessedgeocentric are not recognised

`MAKE_TEST(Baseframe, ...)` lists the celestial reference frames a
`celestial_frame` may carry:

```c
MAKE_TEST(Baseframe,astropy/coordinates/frames,1,0,
          IsAFk4(class,status)||
          IsAFk4Noeterms(class,status)||
          IsAFk5(class,status)||
          IsAEcliptic(class,status)||
          IsAAltaz(class,status)||
          IsAGalactic(class,status)||
          IsASuperGalactic(class,status)||
          IsAIcrs(class,status))
```

The current asdf-coordinates-schemas (0.5.1) publishes four more that astropy
will write: **gcrs, cirs, tete and precessedgeocentric**. A WCS using any of
them fails with, for example

```
Property 'reference_frame' in a 'gwcs/celestial_frame-1.2.0' has class
'astropy/coordinates/frames/gcrs-1.2.0' which is not of the required class
'baseframe'.
```

Two of the frames the list does name — `ecliptic` and `supergalactic` — have no
schema in asdf-coordinates-schemas at all, and astropy refuses to serialise
them ("is not serializable by ASDF"), as it does for `altaz`. So the supported
set and the writable set only overlap in icrs, fk4, fk4noeterms, fk5 and
galactic.

This is a feature gap rather than a defect: mapping an observed or intermediate
frame onto an AST SkyFrame System is a design decision (`AST__GAPPT` and
`AST__AZEL` exist, but the correspondence is not one-to-one), so no patch is
offered here.

### Reproducing

Write any GWCS whose `celestial_frame` reference frame is one of the four, e.g.
with astropy:

```python
import asdf
from astropy.coordinates import GCRS
from astropy.modeling import models
import astropy.units as u
from gwcs import coordinate_frames as cf, WCS
det = cf.Frame2D(name="detector", axes_order=(0, 1), unit=(u.pix, u.pix))
sky = cf.CelestialFrame(reference_frame=GCRS(), name="world",
                        unit=(u.deg, u.deg))
w = WCS([(det, models.Identity(2)), (sky, None)])
asdf.AsdfFile({"wcs": w}).write_to("gcrs.asdf", all_array_storage="inline")
```

then `astRead` it through a YamlChan.
