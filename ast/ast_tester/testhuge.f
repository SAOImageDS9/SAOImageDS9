      program testhuge
      implicit none

*  WARNING: this test can take 30-60 minutes to run !!!

      include 'AST_PAR'
      include 'SAE_PAR'
      include 'CNF_PAR'

*  Image dimensions: NX*NY is bigger than will fit into an INTEGER
      integer*8 NX
      parameter( NX = 60001 )

      integer*8 NY
      parameter( NY = 60001 )

      integer status, map, ip1, ip2, poly, moc, wcs
      integer*8 ubnd(2), lbnd(2), lbnd2(2), ubnd2(2), nbad, inside(2),
     :          dims(2)
      double precision shifts(2), plbnd(2), pubnd(2), x(4), y(4)
      real val

c      call ast_watchmemory( 2276565 )

      status = sai__ok
      call err_mark( status )
      call ast_begin( status )

      call psx_calloc8( NX*NY, '_REAL', ip1, status )
      call psx_calloc8( NX*NY, '_REAL', ip2, status )


      write(*,'(A,I6,A,I6,A)') '   Test array dimensions (',
     :                          NX,',',NY,')'
      write(*,*) '   Filling...'
      call fill( NX, NY, %val(cnf_pval(ip1)), status )

      shifts(1) = 0.5D0
      shifts(2) = 0.5D0
      map = ast_shiftmap( 2, shifts, ' ', status )

      lbnd(1) = -10
      ubnd(1) = lbnd(1) - 1 + NX
      lbnd(2) = -10
      ubnd(2) = lbnd(2) - 1 + NY

      lbnd2(1) = lbnd(1) + 100
      ubnd2(1) = ubnd(1) - 100
      lbnd2(2) = lbnd(2) + 100
      ubnd2(2) = ubnd(2) - 100

      write(*,*) '   Resampling...'
      nbad = ast_resample8R( map, 2, lbnd, ubnd, %val(cnf_pval(ip1)),
     :                       shifts, AST__LINEAR, AST_NULL, shifts,
     :                       AST__USEBAD, 0.1, 50, 0.0, 2, lbnd, ubnd,
     :                       lbnd2, ubnd2, %val(cnf_pval(ip2)), shifts,
     :                       status )

      if( nbad .ne. 1 ) call stopit( 'Error 1', status )

c      call dump( NX, NY, %val(cnf_pval(ip1)), 'input.asc', status )
c      call dump( NX, NY, %val(cnf_pval(ip2)), 'output.asc', status )

      write(*,*) '   Testing...'
      call test( NX, NY, %val(cnf_pval(ip1)), %val(cnf_pval(ip2)),
     :           status )


      write(*,*) '   Finding outline polygon...'
      inside( 1 ) = lbnd( 1 ) - 1
      inside( 2 ) = lbnd( 2 ) - 1
      val = 2 + nx/2 + ny/2
      poly = ast_outline8R( val, AST__GE, %val(cnf_pval(ip2)), lbnd,
     :                      ubnd, 1.0, 10, inside, .false., status )

      call ast_getregionbounds( poly, plbnd, pubnd, status )
      if( abs( plbnd(1) - lbnd2(1) ) .gt. 1.0 ) then
         call stopit( 'Error 8', status )
      else if( abs( plbnd(2) - lbnd2(2) ) .gt. 1.0 ) then
         call stopit( 'Error 9', status )
      else if( abs( pubnd(1) - ubnd2(1) ) .gt. 1.0 ) then
         call stopit( 'Error 10', status )
      else if( abs( pubnd(2) - ubnd2(2) ) .gt. 1.0 ) then
         call stopit( 'Error 11', status )
      end if

      x( 1 ) = NX/4 - 2 + lbnd( 1 ) - 1
      y( 1 ) = 3*NY/4 - 2 + lbnd( 1 ) - 1
      x( 2 ) = NX/4 + 2 + lbnd( 1 ) - 1
      y( 2 ) = 3*NY/4 + 2 + lbnd( 1 ) - 1
      x( 3 ) = 3*NX/4 - 2 + lbnd( 1 ) - 1
      y( 3 ) = NY/4 - 2 + lbnd( 1 ) - 1
      x( 4 ) = 3*NX/4 + 2 + lbnd( 1 ) - 1
      y( 4 ) = NY/4 + 2 + lbnd( 1 ) - 1

      call ast_tran28( poly, 4_8, x, y, .true., x, y, status )

      if( x(1) .ne. AST__BAD ) then
         call stopit( 'Error 12', status )
      else if( x(2) .eq. AST__BAD ) then
         call stopit( 'Error 13', status )
      else if( x(3) .ne. AST__BAD ) then
         call stopit( 'Error 14', status )
      else if( x(4) .eq. AST__BAD ) then
         call stopit( 'Error 15', status )
      end if


      write(*,*) '   Masking using polygon...'
      nbad = ast_mask8R( poly, AST__NULL, .FALSE., 2, lbnd, ubnd,
     :                 %val(cnf_pval(ip1)), -999.0, status )


      write(*,*) '   Creating MOC from mask...'
      moc = ast_moc( ' ', status )

      dims(1) = ubnd( 1 ) - lbnd( 1 ) + 1
      dims(2) = ubnd( 2 ) - lbnd( 2 ) + 1
      call makewcs( dims, wcs, status )
      call ast_addpixelmask8R( moc, AST__OR, wcs, -999.0, AST__NE, 0,
     :                         0.0, %val(cnf_pval(ip1)), dims, status )
      if( abs( ast_getd( moc, 'MocArea', status )
     :        - 177458.13535844377D0 ) .gt. 1.0D-3 ) then
         call stopit( 'Error 15', status )
      endif


      if( .not. ast_testcell( moc, 20, 4854871195359_8, .false.,
     :                        status ) ) then
         call stopit( 'Error 16', status )

      else if( ast_testcell( moc, 20, 4854871195530_8, .false.,
     :                        status ) ) then
         call stopit( 'Error 17', status )

      else if( ast_testcell( moc, 5, 4525_8, .false., status ) ) then
         call stopit( 'Error 18', status )

      else if( .not. ast_testcell( moc, 5, 4523_8, .false.,
     :                             status ) ) then
         call stopit( 'Error 19', status )
      end if


      call psx_free( ip1, status )
      call psx_free( ip2, status )

      call ast_end( status )
      call err_rlse( status )

c      call ast_activememory( 'testhuge' )
      call ast_flushmemory( 1 )

      if( status .eq. sai__ok ) then
         write(*,*) 'All Huge tests passed'
      else
         write(*,*) 'Huge tests failed'
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


      subroutine fill( nx, ny, array, status )
      implicit none
      include 'SAE_PAR'
      integer status
      integer*8 nx, ny, ix, iy
      real array(nx,ny)

      if( status .ne. sai__ok ) return

      do iy = 1, ny
         do ix = 1, nx
            array( ix, iy ) = ix + iy
         end do
      end do

      array( 1 + nx/2, 1 + ny/2 ) = 0.0

      end

      subroutine test( nx, ny, in, out, status )
      implicit none
      include 'SAE_PAR'
      integer status
      integer*8 nx, ny, ux, uy, ix, iy
      real in(nx,ny), out(nx,ny)

      if( status .ne. sai__ok ) return

      ux = nx - 99
      uy = ny - 99

      if( out( 1 + nx/2, 1 + ny/2 ) .ne. 0.0 ) then
         call stopit( 'error 2', status )
      else if( out( 100, 100 ) .ne. 0.0 ) then
         call stopit( 'error 3', status )
      else if( in( 101, 101 ) - out( 101, 101 ) .ne. 1.0 ) then
         call stopit( 'error 4', status )
      else if( in( ux-1, uy-1 ) - out( ux-1, uy-1 ) .ne. 1.0 ) then
         call stopit( 'error 5', status )
      else if( out( ux, uy ) .ne. 0.0 ) then
         call stopit( 'error 6', status )

      else
         do iy = 1, ny
            do ix = 1, nx
               if( out( ix, iy ) .ne. 0.0 ) then
                  if( in( ix, iy ) -  out( ix, iy ) .ne. 1.0 ) then
                     if( abs( ix - 1 - nx/2 ) .gt. 1 .or.
     :                   abs( iy - 1 - ny/2 ) .gt. 1 ) then
                        write(*,*) ix, iy, in( ix, iy ), out( ix, iy )
                        call stopit( 'error 7', status )
                        goto 10
                     end if
                  end if
               end if
            end do
         end do
 10      continue
      end if

      end



      subroutine dump( nx, ny, array, fname, status )
      implicit none
      include 'SAE_PAR'
      integer status
      integer*8 nx, ny, ix, iy
      real array(nx,ny)
      character fname*(*)

      if( status .ne. sai__ok ) return

      write(*,*) 'Writing ',fname
      open( 10, file=fname, status='new' )

      write(10,*) '# ix iy array'
      do iy = 1, ny
         do ix = 1, nx
            write(10,*) ix, iy, array( ix, iy )
         end do
      end do

      close(10)

      end


      subroutine makewcs( dims, wcs, status )
      implicit none
      include 'SAE_PAR'
      include 'AST_PAR'
      integer wcs, status, fc, icard
      integer*8 dims(2)
      character cards(6)*80
      double precision v

      data cards / 'NAXIS   = 2',
     :             'RADECSYS= ''ICRS    ''',
     :             'CRVAL1  = 0.0',
     :             'CRVAL2  = 0.0',
     :             'CTYPE1  = ''RA---TAN''',
     :             'CTYPE2  = ''DEC--TAN''' /

      if( status .ne. sai__ok ) return

      fc = ast_fitschan( AST_NULL, AST_NULL, ' ', status )
      do icard=1,6
         call ast_putfits( fc, cards(icard), .false., status )
      end do
      call ast_setfitsi( fc, 'NAXIS1', dims(1), ' ', .false., status )
      call ast_setfitsi( fc, 'NAXIS2', dims(1), ' ', .false., status )

      v = 0.5D0*(1.0+dims(1))
      call ast_setfitsf( fc, 'CRPIX1', v, ' ', .false., status )
      v = 0.5D0*(1.0+dims(2))
      call ast_setfitsf( fc, 'CRPIX2', v, ' ', .false., status )
      v = 10.0D0/dims(1)
      call ast_setfitsf( fc, 'CDELT1', v, ' ', .false., status )
      v = 10.0D0/dims(2)
      call ast_setfitsf( fc, 'CDELT2', v, ' ', .false., status )

      call ast_clear( fc, 'Card', status )
      wcs = ast_read( fc, status )

      end
