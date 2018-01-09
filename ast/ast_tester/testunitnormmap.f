      program testunitnormmap
      implicit none

      include 'AST_PAR'
      include 'SAE_PAR'

      integer status, map, cmpmap, smap, invmap, nin, i
      logical good, differ
      double precision norm, frompos(3), centre(3), topos(4)

      data centre  /-1.0D0, 1.0D0, 2.0D0 /,
     :     frompos /-22.0D0, 3.0D0, 0.5D0/


      status = sai__ok
      call err_mark( status )
      call ast_begin( status )

      do nin = 1, 3
         map = ast_unitnormmap( nin, centre, ' ', status )

         if( .not. ast_isaunitnormmap( map, status ) )
     :       call stopit( status, 'Error 1' )
         if( .not. ast_isamapping( map, status ) )
     :       call stopit( status, 'Error 2' )
         if( ast_geti( map, 'Nin', status ) .ne. nin )
     :       call stopit( status, 'Error 3' )
         if( ast_geti( map, 'Nout', status ) .ne. nin+1 )
     :       call stopit( status, 'Error 4' )
         if( ast_getl( map, 'IsLinear', status ) )
     :       call stopit( status, 'Error 5' )

         call checkdump( map, status )

         call checkroundtrip( map, frompos, good, status )
         if( .not. good )  call stopit( status, 'Error 6' )

         call checkroundtrip( map, centre, good, status )
         if( .not. good )  call stopit( status, 'Error 6' )

         invmap = ast_copy( map, status )
         call ast_invert( invmap, status )
         cmpmap = ast_cmpmap( map, invmap, .true., ' ', status )
         smap = ast_simplify( cmpmap, status )
         if( .not. ast_isaunitmap( smap, status ) )
     :       call stopit( status, 'Error 7' )
         if( ast_geti( smap, 'Nin', status ) .ne. nin )
     :       call stopit( status, 'Error 8' )

         cmpmap = ast_cmpmap( invmap, map, .true., ' ', status )
         smap = ast_simplify( cmpmap, status )
         if( .not. ast_isaunitmap( smap, status ) )
     :       call stopit( status, 'Error 9' )
         if( ast_geti( smap, 'Nin', status ) .ne. nin+1 )
     :       call stopit( status, 'Error 10' )


         call ast_trann( map, 1, nin, 1, frompos, .true., nin+1,
     :                   1, topos, status );

         norm = 0.0D0
         do i = 1, nin
            norm = norm + (frompos(i)-centre(i))**2
         end do
         norm = sqrt( norm )

         if( differ( norm, topos(nin+1) ) )
     :       call stopit( status, 'Error 11' )

         do i = 1, nin
            if( differ( norm*topos(i), frompos(i)-centre(i) ) )
     :         call stopit( status, 'Error 12' )
         end do

      end do

      call testsimplify( status )

      call ast_end( status )
      call err_rlse( status )

c      call ast_activememory( 'testunitnormmap' )
      call ast_flushmemory( 1 )

      if( status .eq. sai__ok ) then
         write(*,*) 'All UnitNormMap tests passed'
      else
         write(*,*) 'UnitNormMap tests failed'
      end if

      end



      subroutine stopit( status, text )
      implicit none
      include 'SAE_PAR'
      integer status
      character text*(*)
      if( status .ne. sai__ok ) return
      status = sai__error
      write(*,*) text
      end





      subroutine checkdump( obj, status )
      implicit none
      include 'SAE_PAR'
      include 'AST_PAR'
      integer obj, status, stat, ch, result, nin, i
      logical differ
      double precision in(3), out1(3), out2(3)

      data in /10.0D0, 5.0D0, -12.0D0 /

      if( status .ne. sai__ok ) return

      ch = ast_channel( AST_NULL, AST_NULL, 'SinkFile=testdmp', status )

      if( ast_write( ch, obj, status ) .ne.1 ) then
         call stopit( status, 'Cannot write supplied object to '//
     :                'channel' )
      end if

      call ast_clear( ch, 'SinkFile', status )
      call ast_setc( ch, 'SourceFile', 'testdmp', status )
      result = ast_read( ch, status )

      if( result .eq. ast__null ) then
         call stopit( status, 'Cannot read object from channel' )
      end if

      if( .not. ast_isaunitnormmap( result, status ) ) then
         call stopit( status, 'Object read from channel is not a '//
     :                'UnitNormMap')
      else if( ast_geti( result, 'Nin', status ) .ne.
     :         ast_geti( obj, 'Nin', status ) ) then
         call stopit( status, 'UnitNormMap have different Nin values' )

      else
         nin = ast_geti( result, 'Nin', status )
         call ast_trann( result, 1, nin, 1, in, .TRUE., nin+1, 1, out1,
     :                   status );
         call ast_trann( obj, 1, nin, 1, in, .TRUE., nin+1, 1, out2,
     :                   status );

         do i = 1, nin
            if( differ( out2(i), out1(i) ) )
     :         call stopit( status, 'Error - Recovered UnitNormMap '//
     :                      'differs from suppled UnitNormMap' )
         end do

      end if

      call ast_annul( result, status )

      open( unit=1234, iostat=stat, file='testdmp', status='old')
      if (stat == 0) close(1234, status='delete')

      end



      subroutine checkroundtrip( map, pos, good, status )

      implicit none

      include 'SAE_PAR'
      include 'AST_PAR'

      logical good, differ
      integer status, map, mapinv, cmp, i, nin, nout
      double precision pos(*), rtol, atol, out(7), in(7)

      good = .true.

      if( status .ne. sai__ok ) return

      nin = ast_geti( map, 'Nin', status )
      nout = ast_geti( map, 'Nout', status )
      call ast_trann( map, 1, nin, 1, pos, .TRUE., nout, 1, out,
     :                status );
      call ast_trann( map, 1, nout, 1, out, .FALSE., nin, 1, in,
     :                status );
      do i = 1, nin
         if( differ( in(i), pos(i) ) ) good = .false.
      end do

      mapinv = ast_copy( map, status )
      call ast_invert( mapinv, status )
      cmp = ast_cmpmap( map, mapinv, .TRUE., ' ', status )

      call ast_trann( cmp, 1, nin, 1, pos, .true., nin, 1, in,
     :                status );
      do i = 1, nin
         if( differ( in(i), pos(i) ) ) good = .false.
      end do

      end



      subroutine testsimplify( status )
      implicit none

      include 'SAE_PAR'
      include 'AST_PAR'

      integer status, unm1, unm1inv, unm2, unm2inv, shiftmap,
     :        winmap1, winmap2, i, j, k, nin, nout, cmpmap,
     :        cmpmap_simp
      double precision centre1(3)
      double precision centre2(3)
      double precision shift(3)
      double precision zeros(3)
      double precision ones(3)
      double precision a(3)
      double precision testpoints(3,4)
      double precision outpoints(3,4)
      double precision outpoints_simp(3,4)

      integer map1(7), map2(7)
      character class(7)*30
      logical differ

      data centre1 /2.0D0, -1.0D0, 0.0D0/,
     :     centre2 /-1.0D0, 6.0D0, 4.0D0/,
     :     shift   /3.0D0, 7.0D0, -9.0D0/,
     :     zeros   /0.0D0, 0.0D0, 0.0D0/,
     :     ones    /1.0D0, 1.0D0, 1.0D0/,
     :     testpoints / 1.0D0, 3.0D0, -5.0D0, 2.0D0, 3.0D0, 99.0D0,
     :                  -6.0D0, -5.0D0, -7.0D0, 30.0D0, 21.0D0, 37.0D0 /

      if( status .ne. sai__ok ) return

      unm1 = ast_unitnormmap( 3, centre1, ' ', status )
      unm1inv = ast_copy( unm1, status )
      call ast_setl( unm1inv, 'Invert', .TRUE., status )

      unm2 = ast_unitnormmap( 3, centre2, ' ', status )
      unm2inv = ast_copy( unm2, status )
      call ast_setl( unm2inv, 'Invert', .TRUE., status )

      shiftmap = ast_shiftmap(3, shift, ' ', status )

      do i = 1, 3
         a(i) = ones(i) + shift(i)
      end do
      winmap1 = ast_winmap( 3, zeros, shift, ones, a, ' ', status )

      do i = 1, 3
         a(i) = 2*ones(i) + shift(i)
      end do
      winmap2 = ast_winmap( 3, zeros, shift, ones, a, ' ', status )

      map1(1) = unm1
      map2(1) = unm2inv
      class(1) = 'WinMap'

      map1(2) = shiftmap
      map2(2) = unm2
      class(2) = 'UnitNormMap'

      map1(3) = winmap1
      map2(3) = unm1
      class(3) = 'UnitNormMap'

      map1(4) = winmap2
      map2(4) = unm1
      class(4) = 'CmpMap'

      map1(5) = unm1inv
      map2(5) = shiftmap
      class(5) = 'UnitNormMap'

      map1(6) = unm1inv
      map2(6) = winmap1
      class(6) = 'UnitNormMap'

      map1(7) = unm1inv
      map2(7) = winmap2
      class(7) = 'CmpMap'

      do i = 1, 7
         cmpmap = ast_cmpmap( map1(i), map2(i), .true.,  ' ', status )
         cmpmap_simp = ast_simplify( cmpmap, status )

         if( ast_getc( cmpmap_simp, 'Class', status ) .ne. class(i) )
     :      call stopit( status, 'Simplify error 1' )

         nin = ast_geti( cmpmap, 'Nin', status )
         if( nin .ne. ast_geti( cmpmap_simp, 'Nin', status ) )
     :      call stopit( status, 'Simplify error 2' )

         nout = ast_geti( cmpmap, 'Nout', status )
         if( nout .ne. ast_geti( cmpmap_simp, 'Nout', status ) )
     :      call stopit( status, 'Simplify error 3' )

         call ast_trann( cmpmap, 3, nin, 3, testpoints, .true., nout,
     :                   3, outpoints, status )
         call ast_trann( cmpmap_simp, 3, nin, 3, testpoints, .true.,
     :                   nout, 3, outpoints_simp, status )

         do j = 1, nout
            do k = 1, 3
               if( differ( outpoints(k,j), outpoints_simp(k,j) ) )
     :            call stopit( status, 'Simplify error 4' )
            end do
         end do
      end do

      end


      logical function differ( aa, bb )
      implicit none
      double precision aa, bb, diff
      differ = abs( (aa) - (bb) ) .gt.
     :         abs( 0.5D0*( (aa) + (bb) ) )*1.0D-14

      end
