      program testmoc
      implicit none

      include 'AST_PAR'
      include 'SAE_PAR'
      include 'CNF_PAR'

      character mocjson1*47
      parameter( mocjson1 = '{"1":[1,2,4], "2":[12,13,14,21,23,25],'//
     :                      '"8":[]}' )
      character mocjson2*46
      parameter( mocjson2 = '{"1":[1,2,4],"2":[12,13,14,21,23,25],'//
     :                      '"8":[]}' )

      character mocstr1*27
      parameter( mocstr1 = '1/1-2,4 2/12-14,21,23,25 8/' )

      character mocstr2*32
      parameter( mocstr2 = ' 1/1,2,4   2/12-14, 21,23,25 8/ ' )

      integer szmesh1
      parameter( szmesh1 = 868 )

      integer szmesh2
      parameter( szmesh2 = 294 )

      double precision mxres1
      parameter( mxres1 = 824.5167D0 )

      double precision mxres2
      parameter( mxres2 = 12.883D0 )

      integer moc, fc, sf, reg1, status, ival, ip, nb, ln, reg2, reg
      double precision centre(2), point(2), lbnd(2), ubnd(2), d,
     :                 mesh1( szmesh1, 2 ), mesh2( szmesh2, 2 )
      character cval*18, buf*100
      logical there, json
      integer npoint, i, moc2, moc3, dims(2), iwcs, order
      integer*8 npix, size

c      call ast_watchmemory( 2276565 )

      status = sai__ok
      call err_mark( status )
      call ast_begin( status )

      moc = ast_moc( 'maxorder=18,minorder=11', status )
      if( .not. ast_isamoc( moc, status ) ) then
         call stopit( 'Error 1', status )
      else if( .not. ast_isaregion( moc, status ) ) then
         call stopit( 'Error 2', status )
      else if( ast_getc( moc, 'System', status ) .ne. 'ICRS' ) then
         call stopit( 'Error 3', status )
      end if

      sf = ast_skyframe( 'system=icrs', status )

      centre( 1 ) = 1.0D0
      centre( 2 ) = 1.0D0
      point( 1 ) = 0.0002D0
      reg1 = ast_circle( sf, 1, centre, point, AST__NULL, ' ', status )
      call ast_addregion( moc, AST__OR, reg1, status )

      if( abs( ast_getd( moc, 'MocArea', status ) - 1.485D0 )
     :     .gt. 1.0D-3 ) then
         call stopit( 'Error 3b', status )
      end if

      call datacheck( moc, "Error 3A", status )

      moc = ast_moc( 'maxorder=8,minorder=4', status )

      centre( 1 ) = 3.1415927D0
      centre( 2 ) = 0.75D0
      point( 1 ) = 0.5D0
      reg1 = ast_circle( sf, 1, centre, point, AST__NULL, ' ', status )

      call ast_addregion( moc, AST__OR, reg1, status )

      if( abs( ast_getd( moc, 'MaxRes', status ) - mxres1 ) .gt.
     :         1.0D-4 ) then
         call stopit( 'Error 4', status )
      end if

      call ast_getregionbounds( moc, lbnd, ubnd, status );
      if( abs( lbnd(1) - 2.4235144D0 ) .gt. 1.0D-6 .or.
     :    abs( ubnd(1) - 3.8596708D0 ) .gt. 1.0D-6 .or.
     :    abs( lbnd(2) - 0.2499916D0 ) .gt. 1.0D-6 .or.
     :    abs( ubnd(2) - 1.2504847D0 ) .gt. 1.0D-6  ) then
         call stopit( 'Error 5', status )
      endif

      call ast_getregionmesh( moc, .true., 0, 2, npoint, 0.0D0,
     :                        status );
      if( npoint .ne. szmesh1 ) call stopit( 'Error 6', status )

      call ast_getregionmesh( moc, .true., szmesh1, 2, npoint, mesh1,
     :                        status );

      do i = 1, szmesh1
         if( status .eq. sai__ok ) then
            point( 1 ) = mesh1( i, 1 )
            point( 2 ) = mesh1( i, 2 )
            d = ast_distance( sf, centre, point, status )
            if( abs( d - 0.5D0 ) .gt. 0.7*AST__DD2R*mxres1/3600.0 ) then
               call stopit( 'Error 7', status )
            end if
         end if
      end do

      nb = ast_geti( moc, 'moctype', status )
      if( nb .ne. 4 ) call stopit( 'Error 8', status )

      ln = ast_geti( moc, 'moclength', status )
      if( ln .ne. 832 ) call stopit( 'Error 9', status )

      fc = ast_getmocheader( moc, status )
      there = ast_getfitsI( fc, 'NAXIS1', ival, status )
      if( ival .ne. 4 ) call stopit( 'Error 10', status )
      there = ast_getfitsI( fc, 'NAXIS2', ival, status )
      if( ival .ne. ln ) call stopit( 'Error 11', status )
      there = ast_getfitsS( fc, 'TFORM1', cval, status )
      if( cval .ne. '1J' ) call stopit( 'Error 12', status )
      there = ast_getfitsI( fc, 'MOCORDER', ival, status )
      if( ival .ne. 8 ) call stopit( 'Error 13', status )

      call datacheck( moc, "Error 13A", status )

      moc2 = ast_copy( moc, status )
      if( .not. ast_equal( moc, moc2, status ) ) then
         call stopit( 'Error 14', status )
      endif

      if( ast_overlap( moc, reg1, status ) .ne. 5 ) then
         call stopit( 'Error 15', status )
      endif

      centre( 1 ) = 3.1415927D0
      centre( 2 ) = 0.5D0
      point( 1 ) = 0.5D0
      reg1 = ast_circle( sf, 1, centre, point, AST__NULL, ' ', status )
      if( ast_overlap( moc, reg1, status ) .ne. 4 ) then
         call stopit( 'Error 16', status )
      endif

      centre( 1 ) = 3.1415927D0
      centre( 2 ) = -0.5D0
      point( 1 ) = 0.5D0
      reg1 = ast_circle( sf, 1, centre, point, AST__NULL, ' ', status )
      if( ast_overlap( moc, reg1, status ) .ne. 1 ) then
         call stopit( 'Error 17', status )
      endif

      centre( 1 ) = 3.1415927D0
      centre( 2 ) = 0.75D0
      point( 1 ) = 0.3D0
      reg1 = ast_circle( sf, 1, centre, point, AST__NULL, ' ', status )
      if( ast_overlap( moc, reg1, status ) .ne. 3 ) then
         call stopit( 'Error 18', status )
      endif
      if( ast_overlap( reg1, moc, status ) .ne. 2 ) then
         call stopit( 'Error 19', status )
      endif


      moc = ast_moc( 'maxorder=8,minorder=4', status )

      centre( 1 ) = 0.0D0
      centre( 2 ) = 1.57D0
      point( 1 ) = 0.3D0
      reg1 = ast_circle( sf, 1, centre, point, AST__NULL, ' ', status )
      call ast_addregion( moc, AST__OR, reg1, status )

      centre( 1 ) = 0.0D0
      centre( 2 ) = 1.57D0
      point( 1 ) = 0.2D0
      reg2 = ast_circle( sf, 1, centre, point, AST__NULL, ' ', status )
      call ast_negate( reg2, status )
      call ast_addregion( moc, AST__AND, reg2, status )

      if( abs( ast_getd( moc, 'MocArea', status ) - 1.826D6 )
     :     .gt. 0.001D6 ) then
         call stopit( 'Error 20', status )
      end if





      moc2 = ast_moc( 'maxorder=8,minorder=4', status )
      call ast_addregion( moc2, AST__OR, reg1, status )

      moc3 = ast_moc( 'maxorder=8,minorder=4', status )
      call ast_addregion( moc3, AST__OR, reg2, status )

      nb = ast_geti( moc3, 'moctype', status )
      ln = ast_geti( moc3, 'moclength', status )
      call psx_calloc( nb*ln, '_BYTE', ip, status )
      call ast_getmocdata( moc3, nb*ln, %val( cnf_pval( ip ) ), status )
      call ast_addmocdata( moc2, AST__AND, .FALSE., -1, ln, nb,
     :                     %val( cnf_pval( ip ) ), status )
      call psx_free( ip, status )

      if( ast_overlap( moc, moc2, status ) .ne. 5 ) then
         call stopit( 'Error 21', status )
      endif
      if( .not. ast_equal( moc, moc2, status ) ) then
         call stopit( 'Error 22', status )
      endif





      call makeimage( dims, ip, iwcs, status )
      moc = ast_moc( ' ', status )
      call ast_addpixelmaskr( moc, AST__OR, iwcs, 10.0, AST__LT, 0,
     :                        0.0D0, %val( cnf_pval( ip ) ), dims,
     :                        status )
      call psx_free( ip, status )

      if( ast_getc( moc, 'System', status ) .ne. 'ICRS' ) then
         call stopit( 'Error 23A', status )
      end if

      if( abs( ast_getd( moc, 'MaxRes', status ) - mxres2 ) .gt.
     :         1.0D-3 ) then
         write(*,*) ast_getd( moc, 'MaxRes', status )
         call stopit( 'Error 23', status )
      end if

      call ast_getregionmesh( moc, .true., 0, 2, npoint, 0.0D0,
     :                        status );
      if( npoint .ne. szmesh2 ) call stopit( 'Error 24', status )

      call ast_getregionmesh( moc, .true., szmesh2, 2, npoint, mesh2,
     :                        status );

      centre( 1 ) = 35.0D0*AST__DD2R
      centre( 2 ) = 55.0D0*AST__DD2R
      do i = 1, szmesh2
         if( status .eq. sai__ok ) then
            point( 1 ) = mesh2( i, 1 )
            point( 2 ) = mesh2( i, 2 )
            d = ast_distance( sf, centre, point, status )
            if( abs( d - 1.745D-3 ) .gt. AST__DD2R*0.01 ) then
               call stopit( 'Error 25', status )
            end if
         end if
      end do








      centre( 1 ) = 0.0D0
      centre( 2 ) = 1.57D0
      point( 1 ) = 0.3D0
      reg1 = ast_circle( sf, 1, centre, point, AST__NULL, ' ', status )
      moc = ast_moc( 'maxorder=8,minorder=4', status )
      call ast_addregion( moc, AST__OR, reg1, status )

      moc2 = ast_moc( ' ', status )
      call ast_addregion( moc2, AST__OR, moc, status )

      if( .not. ast_equal( moc, moc2, status ) ) then
         call stopit( 'Error 26', status )
      endif

      if( ast_overlap( moc, moc2, status ) .ne. 5 ) then
         call stopit( 'Error 27', status )
      endif

      centre( 1 ) = 0.0D0
      centre( 2 ) = 1.57D0
      point( 1 ) = 0.2D0
      reg2 = ast_circle( sf, 1, centre, point, AST__NULL, ' ', status )
      call ast_negate( reg2, status )
      moc2 = ast_moc( 'maxorder=9,minorder=4', status )
      call ast_addregion( moc2, AST__OR, reg2, status )

      call ast_addregion( moc, AST__AND, moc2, status )
      if( abs( ast_getD( moc, 'MocArea', status ) - 1.843466D6 ) .gt.
     :    1.0D0 ) then
         call stopit( 'Error 28', status )
      end if

      moc2 = ast_moc( 'maxorder=7,minorder=4', status )
      call ast_addregion( moc2, AST__OR, reg2, status )

      call ast_addregion( moc, AST__AND, moc2, status )
      if( abs( ast_getD( moc, 'MocArea', status ) - 1.803054D6 ) .gt.
     :    1.0D0 ) then
         call stopit( 'Error 29', status )
      end if


      moc3 = ast_moc( ' ', status )
      call ast_seti( moc3, 'MaxOrder',
     :               ast_geti( moc, 'MaxOrder', status ), status )
      do i = 1, ast_geti( moc, 'MocLength', status )
         call ast_getcell( moc, i, order, npix, status )
         if( .not. ast_testcell( moc, order, npix, .FALSE.,
     :                           status ) .and.
     :       status .eq. sai__ok ) THEN
            call stopit( 'Error 29B', status )
         end if
         call ast_addcell( moc3, AST__OR, order, npix, status )
      end do

      if( .not. ast_equal( moc, moc3, status ) ) then
         call stopit( 'Error 30', status )
      endif

      if( ast_overlap( moc, moc3, status ) .ne. 5 ) then
         call stopit( 'Error 31', status )
      endif

      if( ast_testcell( moc, 8, 123456_8, .FALSE., status ) ) then
         call stopit( 'Error 32', status )
      end if





      moc = ast_moc( ' ', status )
      call ast_addmocstring( moc, AST__OR, 0, -1, len(mocstr1), mocstr1,
     :                       json, status )
      call ast_getmocstring( moc, .FALSE., 0, ' ', size, status )
      if( size .ne. 27 ) then
         call stopit( 'Error 33', status )
      end if
      call ast_getmocstring( moc, .FALSE., len(buf), buf, size, status )
      if( size .ne. 27 ) then
         call stopit( 'Error 34', status )
      end if
      if( buf( :size ) .ne.  mocstr1( :size ) ) then
         call stopit( 'Error 35', status )
      end if

      moc2 = ast_moc( ' ', status )
      call ast_addmocstring( moc2, AST__OR, 0, -1, len(mocstr2),
     :                       mocstr2, json, status )
      if( .not. ast_equal( moc, moc2, status ) ) then
         call stopit( 'Error 36', status )
      end if
      if( ast_geti( moc, 'MaxOrder', status ) .ne. 8 ) then
         call stopit( 'Error 37', status )
      end if

      moc = ast_moc( ' ', status )
      call ast_addmocstring( moc, AST__OR, 0, -1, len(mocjson1),
     :                       mocjson1, json, status )
      if( .not. json ) then
         call stopit( 'Error 38', status )
      end if
      call ast_getmocstring( moc, .TRUE., 0, ' ', size, status )
      if( size .ne. 44 ) then
         call stopit( 'Error 39', status )
      end if
      call ast_getmocstring( moc, .TRUE., len(buf), buf, size, status )
      if( size .ne. 44 ) then
         call stopit( 'Error 40', status )
      end if
      if( buf( :size ) .ne.  mocjson2( :size ) ) then
         call stopit( 'Error 41', status )
      end if


      do i = 0, 11
         moc = ast_moc( ' ', status )
         call ast_addmocstring( moc, AST__OR, .false., i, 100,
     :                          '4/0-1', json, status )
         call ast_addmocstring( moc, AST__AND, .true., -1, 100,
     :                          '5/0,3', json, status )
         call ast_getmocstring( moc, .false., len(buf), buf,
     :                           size, status )
         if( i .eq. 0 .and. buf(:size) .ne. '0/' ) then
            call stopit( 'Error 42', status )
         else if( i .eq. 1 .and. buf(:size) .ne. '1/' ) then
            call stopit( 'Error 43', status )
         else if( i .eq. 2 .and. buf(:size) .ne. '2/' ) then
            call stopit( 'Error 42', status )
         else if( i .eq. 3 .and. buf(:size) .ne. '3/' ) then
            call stopit( 'Error 42', status )
         else if( i .eq. 4 .and. buf(:size) .ne. '4/1' ) then
            call stopit( 'Error 42', status )
         else if( i .eq. 5 .and. buf(:size) .ne. '4/1 5/1-2' ) then
            call stopit( 'Error 42', status )
         else if( i .eq. 6 .and. buf(:size) .ne. '4/1 5/1-2 6/' ) then
            call stopit( 'Error 42', status )
         else if( i .eq. 7 .and. buf(:size) .ne. '4/1 5/1-2 7/' ) then
            call stopit( 'Error 42', status )
         else if( i .eq. 8 .and. buf(:size) .ne. '4/1 5/1-2 8/' ) then
            call stopit( 'Error 42', status )
         else if( i .eq. 9 .and. buf(:size) .ne. '4/1 5/1-2 9/' ) then
            call stopit( 'Error 42', status )
         else if( i .eq. 10 .and. buf(:size) .ne. '4/1 5/1-2 10/' ) then
            call stopit( 'Error 42', status )
         end if
         call ast_annul( moc, status )
      end do



      call ast_end( status )
      call err_rlse( status )

c      call ast_activememory( 'testmoc' )
      call ast_flushmemory( 1 )

      if( status .eq. sai__ok ) then
         write(*,*) 'All Moc tests passed'
      else
         write(*,*) 'Moc tests failed'
      end if

      end



      subroutine stopit( text, status )
      implicit none
      include 'SAE_PAR'
      integer status
      character text*(*)
      if( status .ne. sai__ok ) return
      status = sai__error
      write(*,*) text
      end



      subroutine mkbintab( n, nb, data, fc, file, status )
      implicit none
      include 'SAE_PAR'
      include 'AST_PAR'
      integer i, status, n, data(n), unit, fstat, bsize, hdutyp, fc, nb
      character errtext*30, card*80,errmess*80, file*(*)

      if( status .ne. sai__ok ) return

c  Uncoimment these lines to create FITS binary files. The linking
c  commands in ast_tester/maketest will need to be moedified to include
c  -lcfitsio
c      fstat = 0
c      call ftgiou( unit, fstat )
c      open(unit=unit, iostat=fstat, file=file, status='old')
c      if( fstat == 0 ) close(unit, status='delete')
c
c      fstat = 0
c      call ftgiou( unit, fstat )
c      call ftinit( unit, file, 1, fstat )
c
c      call ftikyl( unit, 'SIMPLE', .TRUE.,  ' ', fstat )
c      call ftikyj( unit, 'BITPIX', 8,  ' ', fstat )
c      call ftikyj( unit, 'NAXIS', 0,  ' ', fstat )
c      call ftikyl( unit, 'EXTEND', .TRUE.,  ' ', fstat )
c
c      call ftcrhd( unit, fstat )
c
c      call ast_clear( fc, 'Card', status )
c      do while( ast_findfits( fc, '%f', card, .true., status ) )
c         call ftprec( unit, card, fstat )
c      end do
c
c      if( nb .eq. 4 ) then
c         call ftpclj( unit, 1, 1, 1, n, data, fstat )
c      else
c         call ftpclk( unit, 1, 1, 1, n, data, fstat )
c      end if
c      call ftclos( unit, fstat )
c      call ftfiou( unit, fstat )
c
c      if( fstat .gt. 0 ) then
c         call ftgerr( fstat, errtext )
c         write(*,*) 'FITSIO error: ',errtext
c         call ftgmsg(errmess)
c         do while( errmess .ne. ' ' )
c            write(*,*) errmess
c            call ftgmsg(errmess)
c         end do
c         status = SAI__ERROR
c      end if

      end


c  Convert the Moc to FITS binarty table form, and then convert it back
c  to a Moc and compare the before and after Moc.
      subroutine datacheck( moc, text, status )
      implicit none

      include 'SAE_PAR'
      include 'AST_PAR'
      include 'CNF_PAR'

      character text*(*)
      integer moc, moc2, ln, nb, ip, status

      if( status .ne. SAI__OK ) return

      nb = ast_geti( moc, 'moctype', status )
      ln = ast_geti( moc, 'moclength', status )
      call psx_calloc( nb*ln, '_BYTE', ip, status )
      call ast_getmocdata( moc, nb*ln, %val( cnf_pval( ip ) ), status )
      moc2 = ast_moc( ' ', status )
      call ast_addmocdata( moc2, AST__OR, .false., -1, ln, nb,
     :                     %val( cnf_pval( ip ) ), status )

      if( ast_overlap( moc, moc2, status ) .ne. 5 ) then
         call stopit( text//' 1', status )
      endif

      if( .not. ast_equal( moc, moc2, status ) ) then
         call stopit( text//' 2', status )
      endif

      call psx_free( ip, status )
      call ast_annul( moc2, status )

      end



c  Create a FITS binary table from a Moc.
      subroutine tofits( moc, fname, status )
      implicit none
      include 'SAE_PAR'
      include 'AST_PAR'
      include 'CNF_PAR'

      integer moc, status, nb, ln, ip, fc
      character fname*(*)

      if( status .ne. SAI__OK ) return

      nb = ast_geti( moc, 'moctype', status )
      ln = ast_geti( moc, 'moclength', status )
      fc = ast_getmocheader( moc, status )

      call psx_calloc( nb*ln, '_BYTE', ip, status )
      call ast_getmocdata( moc, nb*ln, %val( cnf_pval( ip ) ), status )
      call mkbintab( ln, nb, %val( cnf_pval( ip ) ), fc, fname, status )

      call psx_free( ip, status )
      call ast_annul( fc, status );

      end


      subroutine makeimage( dims, ipdata, iwcs, status )
      implicit none
      include 'SAE_PAR'
      include 'AST_PAR'
      include 'CNF_PAR'

      integer status, dims( 2 ), ipdata, iwcs, fc

      if( status .ne. SAI__OK ) return

      dims( 1 ) = 100
      dims( 2 ) = 100
      call psx_calloc( dims(1)*dims(2), '_REAL', ipdata, status )
      call fillimage( dims(1), dims(2), %val( cnf_pval( ipdata ) ),
     :                status )

      fc = ast_fitschan( AST_NULL, AST_NULL, ' ', status )
      call ast_setfitsf( fc, 'CRVAL1', 35.0D0, ' ', .true., status )
      call ast_setfitsf( fc, 'CRVAL2', 55.0D0, ' ', .true., status )
      call ast_setfitsf( fc, 'CRPIX1', 50.5D0, ' ', .true., status )
      call ast_setfitsf( fc, 'CRPIX2', 50.5D0, ' ', .true., status )
      call ast_setfitsf( fc, 'CDELT1', -0.01D0, ' ', .true., status )
      call ast_setfitsf( fc, 'CDELT2', 0.01D0, ' ', .true., status )
      call ast_setfitss( fc, 'CTYPE1', 'RA---TAN', ' ', .true., status )
      call ast_setfitss( fc, 'CTYPE2', 'DEC--TAN', ' ', .true., status )

      call ast_setfitsf( fc, 'CRVAL3', -22.9D0, ' ', .true., status )
      call ast_setfitsf( fc, 'CRPIX3', 1.0D0, ' ', .true., status )
      call ast_setfitsf( fc, 'CDELT3', 1.27D0, ' ', .true., status )
      call ast_setfitss( fc, 'CTYPE3', 'VRAD    ', ' ', .true., status )
      call ast_setfitss( fc, 'CUNIT3', 'km/s    ', ' ', .true., status )

      call ast_clear( fc, 'Card', status )
      iwcs = ast_read( fc, status )
      call ast_annul( fc, status )

      end

      subroutine fillimage( nx, ny, data, status )
      implicit none
      include 'SAE_PAR'
      include 'AST_PAR'

      integer status, nx, ny, i, j
      real data(nx,ny)
      double precision xc, yc

      if( status .ne. SAI__OK ) return

c  Circular cone with apex (value zero) at image centre, opening upwards.
      xc = ( 1.0D0 + nx )/2
      yc = ( 1.0D0 + ny )/2
      do j = 1, ny
         do i = 1, nx
            data( i, j ) = sqrt( (i - xc)**2 + (j - yc)**2 )
         end do
      end do

      end


