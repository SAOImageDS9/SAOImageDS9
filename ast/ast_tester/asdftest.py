#!/usr/bin/python3

#  This script can be used to perform additional tests of the AST
#  YamlChan class. It requires the asdf and gwcs python packages.
#  It should be run after the basic YamlChan tests within testyamlchan.f
#  have been run (testyamlchan creates the required "tanSipWcs.asdf" file).

import math
import asdf
from gwcs import wcs

def tester( label, wcsobj, xylist, ab_targets, xy_targets=None):
   ok = True

   for i in range(len(xylist)):
      (x,y) = xylist[ i ]
      (a,b) = wcsobj( x, y )

      a_target = math.degrees(ab_targets[ i ][ 0 ])
      b_target = math.degrees(ab_targets[ i ][ 1 ])

      if abs( a - a_target ) > 1E-12:
         ok = False
         print("Point {0}: a={1} (expected {2})".format(i,a,a_target))
         break
      elif abs( b - b_target ) > 1E-12:
         ok = False
         print("Point {0}: b={1} (expected {2})".format(i,b,b_target))
         break

      (xi,yi) = wcsobj.invert( a, b )

      if xy_targets:
         (x,y) = xy_targets[ i ]

      if abs( xi - x ) > 1E-8:
         ok = False
         print("Point {0}: xi={1} (expected {2})".format(i,xi,x))
         break
      elif abs( yi - y ) > 1E-8:
         ok = False
         print("Point {0}: yi={1} (expected {2})".format(i,yi,y))
         break


   if not ok:
      print( label+" tests failed" )

   return ok




asdf_file = asdf.open("tanSipWcs.asdf")
wcsobj = asdf_file.tree['wcs']

ab_targets = ( (0.74087499500083731, 0.76582017043755046),
               (0.73971051729252979, 0.76580407766915781),
               (0.74040832140984847, 0.76461426513798736),
               (0.74111042497286139, 0.76572737656088874),
               (0.74200902465461160, 0.76703478086374388),
               (0.74167589835205705, 0.76703043529783410) )

xylist = ((-25.0,0.0), (-200.0,0.0), (-100.0,-250.0), (10.0,-20.0),
          (150.0,250.0), (100.0,250.0) )

ok1 = tester( "tanSipWcs.asdf", wcsobj, xylist, ab_targets)


asdf_file = asdf.open("lsst_wcs.asdf")
wcsobj = asdf_file.tree['wcs']

ab_targets = ( (-0.68002205662756510, -4.1998780406813565E-003),
               (-0.68001844058522842, -4.0634054703541523E-003),
               (-0.67984076946953054, -4.1364172318512022E-003),
               (-0.68000838899999727, -4.2267581819871438E-003),
               (-0.68020619362925006, -4.3413745317878076E-003),
               (-0.68020514110703811, -4.3023678909600398E-003) )

xylist = ((-25.0, 0.0), (-200.0, 0.0), (-100.0, -250.0), (10.0, -20.0),
          (150.0, 250.0), (100.0, 250.0) )

xy_targets = ( (-24.998392568123336, 1.7931517687429732E-002),
               (-199.99699269870484, 1.8179880021762074E-002),
               (-99.997723635572470, -249.96599011174021),
               (10.001346182917246, -19.981073964730513),
               (150.00062462341475, 250.00813617022914),
               (100.00081481061738, 250.00816727408937))

ok2 = tester( "lsst_wcs.asdf", wcsobj, xylist, ab_targets, xy_targets )



if ok1 and ok2:
   print( "asdftest: all test passed" )
else:
   print( "asdftest: tests failed" )
