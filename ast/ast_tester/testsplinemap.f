      program testsplinemap
      implicit none
      include 'SAE_PAR'
      include 'AST_PAR'
      include 'AST_ERR'
      include 'PRM_PAR'

      double precision tol
      integer nx,ny,k, npos
      parameter( nx = 150 )
      parameter( ny = 100 )
      parameter( k = 4 )
      parameter( npos = 10 )
      parameter( tol = 1.0D-10 )
      character srcdir*255
      integer len, chr_len, getenv_status

      integer i, j, status, sm, ch, sm2, cm, map
      double precision at(2), tx(nx+k), ty(ny+k), cu(nx,ny), cv(nx,ny),
     :                 xin(npos), yin(npos), uout(npos), vout(npos),
     :                 uexp(npos), vexp(npos), xrec(npos), yrec(npos),
     :                 dudx(npos), dvdy(npos), rate, cu2(nx,ny),
     :                 cv2(nx,ny), tx2(nx+k), ty2(ny+k), xl, xu, yl, yu

      data xin /  0.0D0, 12.5D0, 12.0D0, 1.0D0, 15.0D0, 1.0D0, 95.0D0,
     :            149.5D0, 151.2D0, 77.77D0 /,
     :     yin / -1.0D0, 8.8D0, 8.0D0, 1.0D0, 15.0D0, 76.0D0,100.0D0,
     :           99.8D0, 82.3D0, 54.3D0 /,
     :     uexp / AST__BAD, 12.049767072857644D0, 11.921107191183193D0,
     :            1.7788366846173009D0, 14.441169003602145D0,
     :            0.30566103317717097D0, 95.244648802952383D0,
     :            147.72545905681767D0, AST__BAD, 77.687090577305952D0 /,
     :     vexp / AST__BAD, 6.4394741329528626D0, 5.7887621206888245D0,
     :            1.5841275134629760D0, 14.580876752701613D0,
     :            77.430109295354242D0, 102.70789955663800D0,
     :            99.947397776299766D0, AST__BAD, 57.237295512435693D0 /,
     :     dudx / AST__BAD, 1.1205416355355413D0, 1.0172250815560844D0,
     :            1.7688561224711190D0, 1.7840611118959484D0,
     :            0.31455878201946674D0, 1.3227752124581624D0,
     :           1.0193992253834900D0, AST__BAD, 1.1068469751823868D0 /,
     :     dvdy / AST__BAD, 1.0903748077645210D0, 1.0129188357051286D0,
     :            1.5766420918533419D0, 1.5880458339219636D0,
     :            0.48621233991696755D0, 1.2413880429334574D0,
     :            1.0146046973243927D0, AST__BAD, 1.0801030494860275D0 /

      status = sai__ok
      call ast_begin( status )

c      call ast_watchmemory( 325 )


c  Load the data defining a SplineMap from text file 2dspline.dat. The
c  parameters nx, ny and k must be set above to the same values they had
c  when this text file was created.
      getenv_status = sai__ok
      call err_mark
      call psx_getenv( 'srcdir', srcdir, getenv_status )
      if ( getenv_status .ne. sai__ok ) then
         call err_annul( getenv_status )
         srcdir = '.'
      end if
      call err_rlse
      len = chr_len( srcdir )
      call loadspline( srcdir(1:len)//
     :                 '/fixtures/programs/testsplinemap/2dspline.dat',
     :                 k, nx, ny, tx, ty, cu, cv, xl, xu, yl, yu )

*  Create a SplineMap using the knots and coefficients read from the file.
      sm = ast_splinemap( k, k, nx, ny, tx, ty, cu, cv, ' ',
     :                    status )

*  Check basic attributes
      if( ast_getl( sm, 'IsLinear', status ) ) then
         call stopit(1001,status)
      else if( ast_geti( sm, 'Nin', status ) .ne. 2 ) then
         call stopit(1002,status)
      else if( ast_geti( sm, 'Nout', status ) .ne. 2 ) then
         call stopit(1003,status)
      else if( ast_geti( sm, 'InvNiter', status ) .ne. 6 ) then
         call stopit(1004,status)
      else if( ast_getd( sm, 'InvTol', status ) .ne. 1.0D-6 ) then
         call stopit(1005,status)
      else if( .not. ast_getl( sm, 'TranForward', status ) ) then
         call stopit(1006,status)
      else if( .not. ast_getl( sm, 'TranInverse', status ) ) then
         call stopit(1007,status)
      else if( ast_geti( sm, 'SplineNx', status ) .ne. nx ) then
         call stopit(1008,status)
      else if( ast_geti( sm, 'SplineNy', status ) .ne. ny ) then
         call stopit(1009,status)
      else if( ast_geti( sm, 'SplineKx', status ) .ne. k ) then
         call stopit(1010,status)
      else if( ast_geti( sm, 'SplineKy', status ) .ne. k ) then
         call stopit(1011,status)
      end if

*  Check an error is reported if you try to set the value of a read-only
*  attribute
      call err_begin( status )
      call ast_seti( sm, 'SplineNx', 100, status )
      if( status .ne. AST__NOWRT ) then
         if( status .ne. SAI__OK ) call err_flush( status )
         call stopit(1012,status)
      else
         call err_annul( status )
      end if
      call err_end( status )

*  Test retrieving the coeffs and knots.
      call ast_splinecoeffs( sm, 1, nx*ny, cu2, status )
      call ast_splinecoeffs( sm, 2, nx*ny, cv2, status )
      do j = 1, ny
         do i = 1, nx
            if( status .eq. sai__ok ) then
               if( cu2(i,j) .ne. cu(i,j) ) then
                  write(*,*) i,j,cu2(i,j),cu(i,j)
                  call stopit(1013,status)
               else if( cv2(i,j) .ne. cv(i,j) ) then
                  write(*,*) i,j,cv2(i,j),cv(i,j)
                  call stopit(1014,status)
               end if
            end if
         end do
      end do

      call ast_splineknots( sm, 1, nx, tx2, status )
      do i = 1, nx
         if( status .eq. sai__ok ) then
            if( tx2(i) .ne. tx(i) ) then
               write(*,*) i,tx2(i),tx(i)
               call stopit(1015,status)
            end if
         end if
      end do

      call ast_splineknots( sm, 2, ny, ty2, status )
      do i = 1, ny
         if( status .eq. sai__ok ) then
            if( ty2(i) .ne. ty(i) ) then
               write(*,*) i,ty2(i),ty(i)
               call stopit(1016,status)
            end if
         end if
      end do

*  Test the copy and equality functions.
      sm2 = ast_copy( sm, status )
      if( .not. ast_equal( sm, sm2, status ) ) then
         call stopit(1,status)
      end if

*  Test simplification of a splinemap and its own inverse.
      call ast_invert( sm2, status )
      cm = ast_cmpmap( sm, sm2, .true., ' ', status )
      call ast_invert( sm2, status )
      map = ast_simplify( cm, status )
      if( .not. ast_isaunitmap( map, status ) ) then
         call stopit( 1008, status )
      else
         call ast_invert( sm2, status )
         cm = ast_cmpmap( sm2, sm, .true., ' ', status )
         call ast_invert( sm2, status )
         map = ast_simplify( cm, status )
         if( .not. ast_isaunitmap( map, status ) ) then
            call stopit( 1009, status )
         end if
      end if

*  Test that writing a SplineMap out to a channel and reading it back
*  again results in no change.
      ch = ast_channel( AST_NULL, AST_NULL,
     :                  'SinkFile=sm.txt,SourceFile=sm.txt', status )
      if( ast_write( ch, sm, status ) .ne. 1 ) then
         call stopit(2,status)
      else
         call ast_clear( ch, 'SinkFile', status )
         sm2 = ast_read( ch, status )
         call ast_clear( ch, 'SourceFile', status )
         if( .not. ast_equal( sm, sm2, status ) ) then
            call ast_set( ch, 'SinkFile=sm2.txt', status )
            if( ast_write( ch, sm2, status ) .ne. 1 ) then
               call stopit(3,status)
            else
               call stopit(4,status)
            end if
         end if
      end if

*  Transform a set of points.
      call ast_tran2( sm, npos, xin, yin, .true., uout, vout, status )

*  Compare to the values generated by CMLIB for the same splines.
      do i = 1, npos
         if( status .eq. SAI__OK ) then
            if( abs( uout(i)-uexp(i) ) > tol*abs(uexp(i)) .or.
     :          abs( vout(i)-vexp(i) ) > tol*abs(vexp(i)) ) then
               write(*,*) i,'(',uout(i),vout(i),') (',uexp(i),vexp(i),
     ;                    ')'
               call stopit(5,status)
            end if
         end if
      end do

*  Apply the inverse transformation and check we get back to the starting
*  positions (except for the out of bounds input positions which will
*  have been transformed to AST__BAD).
      call ast_tran2( sm, npos, uout, vout, .false., xrec, yrec,
     :                status )
      do i = 1, npos
         if( status .eq. SAI__OK ) then
            if( uout(i) .ne. AST__BAD .and. vout(i) .ne. AST__BAD ) then
               if( abs( xrec(i)-xin(i) ) > tol*abs(xin(i)) .or.
     :             abs( yrec(i)-yin(i) ) > tol*abs(yin(i)) ) then
                  write(*,*) i,'(',uout(i),vout(i),')->(',xrec(i),
     :                       yrec(i), ') (',xin(i),yin(i),')'
                  call stopit(6,status)
               end if
            else if( xrec(i) .ne. AST__BAD .or.
     :               yrec(i) .ne. AST__BAD ) then
               write(*,*) i,'(',uout(i),vout(i),')->(',xrec(i),yrec(i),
     :                    ') (',xin(i),yin(i),')'
               call stopit(7,status)
            end if
         end if
      end do

*  Check that bad values are returned by the inverse transformation if it
*  fails to converge. Do this by setting the max number of iterations to 1.
      call ast_seti( sm, 'InvNiter', 1, status )
      if( ast_geti( sm, 'InvNiter', status ) .ne. 1 ) then
         call stopit(8,status)
      end if

      call ast_tran2( sm, npos, uout, vout, .false., xrec, yrec,
     :                status )

*  Point 4 should be the only point that converges. All other
*  points should return AST__BAD.
      do i = 1, npos
         if( status .eq. SAI__OK ) then
            if( i .eq. 4 ) then
               if( abs( xrec(i)-xin(i) ) > tol*abs(xin(i)) .or.
     :             abs( yrec(i)-yin(i) ) > tol*abs(yin(i)) ) then
                  write(*,*) i,'(',uout(i),vout(i),')->(',xrec(i),
     :                       yrec(i), ') (',xin(i),yin(i),')'
                  call stopit(9,status)
               end if
            else
               if( xrec(i) .ne. AST__BAD .or.
     :             yrec(i) .ne. AST__BAD ) then
                  call stopit(10,status)
               end if
            end if
         end if
      end do

*  Reset the max number of iterations.
      call ast_clear( sm, 'InvNiter', status )
      if( ast_geti( sm, 'InvNiter', status ) .ne. 6 ) then
         call stopit(11,status)
      end if

*  Test rate of change function.
      do i = 1, npos
         if( status .eq. SAI__OK ) then
            at( 1 ) = xin(i)
            at( 2 ) = yin(i)
            rate = ast_rate( sm, at, 1, 1, status )
            if( abs( rate-dudx(i) ) > tol*abs(dudx(i)) ) then
               write(*,*) i,rate,dudx(i)
               call stopit(12,status)
            end if
            rate = ast_rate( sm, at, 2, 2, status )
            if( abs( rate-dvdy(i) ) > tol*abs(dvdy(i)) ) then
               write(*,*) i,rate,dvdy(i)
               call stopit(13,status)
            end if
         end if
      end do

*  Test what happens for points on the knots bounding box. These are the
*  mid points of the four edges of the bounding box.
      xin(1) = (xl+xu)/2
      yin(1) = yu-1.0D-6
      xin(2) = (xl+xu)/2
      yin(2) = yu
      xin(3) = (xl+xu)/2
      yin(3) = yu+1.0D-6

      call ast_tran2( sm, 3, xin, yin, .true., uout, vout, status )

      if( uout(1) .eq. AST__BAD .or. vout(1) .eq. AST__BAD ) then
         call stopit(14,status)
      else if( uout(2) .eq. AST__BAD .or. vout(2) .eq. AST__BAD ) then
         call stopit(15,status)
      else if( uout(3) .ne. AST__BAD .or. vout(3) .ne. AST__BAD ) then
         call stopit(16,status)
      end if

      call ast_tran2( sm, 3, uout, vout, .false., xrec, yrec, status )

      do i = 1, 2
         if( abs( xrec(i)-xin(i) ) > tol*abs(xin(i)) .or.
     :       abs( yrec(i)-yin(i) ) > tol*abs(yin(i)) ) then
            write(*,*) i,xrec(i),xin(i),
     :                 abs( xrec(i)-xin(i) )/abs(xin(i))
            write(*,*) i,yrec(i),yin(i),
     :                 abs( yrec(i)-yin(i) )/abs(yin(i))
            call stopit(17,status)
         end if
      end do

* Check points on bottom edge in the same way.
      xin(1) = (xl+xu)/2
      yin(1) = yl+1.0D-6
      xin(2) = (xl+xu)/2
      yin(2) = yl
      xin(3) = (xl+xu)/2
      yin(3) = yl-1.0D-6

      call ast_tran2( sm, 3, xin, yin, .true., uout, vout, status )

      if( uout(1) .eq. AST__BAD .or. vout(1) .eq. AST__BAD ) then
         call stopit(18,status)
      else if( uout(2) .eq. AST__BAD .or. vout(2) .eq. AST__BAD ) then
         call stopit(19,status)
      else if( uout(3) .ne. AST__BAD .or. vout(3) .ne. AST__BAD ) then
         call stopit(20,status)
      end if

      call ast_tran2( sm, 3, uout, vout, .false., xrec, yrec, status )

      do i = 1, 2
         if( abs( xrec(i)-xin(i) ) > tol*abs(xin(i)) .or.
     :       abs( yrec(i)-yin(i) ) > tol*abs(yin(i)) ) then
            write(*,*) i,xrec(i),xin(i),
     :                 abs( xrec(i)-xin(i) )/abs(xin(i))
            write(*,*) i,yrec(i),yin(i),
     :                 abs( yrec(i)-yin(i) )/abs(yin(i))
            call stopit(21,status)
         end if
      end do


* Check points on left edge in the same way.
      xin(1) = xl+1.0D-6
      yin(1) = (yl+yu)/2
      xin(2) = xl
      yin(2) = (yl+yu)/2
      xin(3) = xl-1.0D-6
      yin(3) = (yl+yu)/2

      call ast_tran2( sm, 3, xin, yin, .true., uout, vout, status )

      if( uout(1) .eq. AST__BAD .or. vout(1) .eq. AST__BAD ) then
         call stopit(22,status)
      else if( uout(2) .eq. AST__BAD .or. vout(2) .eq. AST__BAD ) then
         call stopit(23,status)
      else if( uout(3) .ne. AST__BAD .or. vout(3) .ne. AST__BAD ) then
         call stopit(24,status)
      end if

      call ast_tran2( sm, 3, uout, vout, .false., xrec, yrec, status )

      do i = 1, 2
         if( abs( xrec(i)-xin(i) ) > tol*abs(xin(i)) .or.
     :       abs( yrec(i)-yin(i) ) > tol*abs(yin(i)) ) then
            write(*,*) i,xrec(i),xin(i),
     :                 abs( xrec(i)-xin(i) )/abs(xin(i))
            write(*,*) i,yrec(i),yin(i),
     :                 abs( yrec(i)-yin(i) )/abs(yin(i))
            call stopit(25,status)
         end if
      end do


* Check points on right edge in the same way.
      xin(1) = xu-1.0D-6
      yin(1) = (yl+yu)/2
      xin(2) = xu
      yin(2) = (yl+yu)/2
      xin(3) = xu+1.0D-6
      yin(3) = (yl+yu)/2

      call ast_tran2( sm, 3, xin, yin, .true., uout, vout, status )

      if( uout(1) .eq. AST__BAD .or. vout(1) .eq. AST__BAD ) then
         call stopit(22,status)
      else if( uout(2) .eq. AST__BAD .or. vout(2) .eq. AST__BAD ) then
         call stopit(23,status)
      else if( uout(3) .ne. AST__BAD .or. vout(3) .ne. AST__BAD ) then
         call stopit(24,status)
      end if

      call ast_tran2( sm, 3, uout, vout, .false., xrec, yrec, status )

      do i = 1, 2
         if( abs( xrec(i)-xin(i) ) > tol*abs(xin(i)) .or.
     :       abs( yrec(i)-yin(i) ) > tol*abs(yin(i)) ) then
            write(*,*) i,xrec(i),xin(i),
     :                 abs( xrec(i)-xin(i) )/abs(xin(i))
            write(*,*) i,yrec(i),yin(i),
     :                 abs( yrec(i)-yin(i) )/abs(yin(i))
            call stopit(25,status)
         end if
      end do


*  Check the OutUNit attribute.
      xin(1) = (xl+xu)/2
      yin(1) = yu-1.0D-2
      xin(2) = (xl+xu)/2
      yin(2) = yu
      xin(3) = (xl+xu)/2
      yin(3) = yu+1.0D-2
      call ast_setl( sm, 'OutUnit', .true., status )

      call ast_tran2( sm, 3, xin, yin, .true., uout, vout, status )

      if( uout(1) .eq. AST__BAD .or. vout(1) .eq. AST__BAD ) then
         call stopit(26,status)
      else if( uout(2) .eq. AST__BAD .or. vout(2) .eq. AST__BAD ) then
         call stopit(27,status)
      else if( uout(3) .ne. xin(3) .or. vout(3) .ne. yin(3) ) then
         call stopit(28,status)
      end if

      call ast_tran2( sm, 3, uout, vout, .false., xrec, yrec, status )

      do i = 1, 2
         if( abs( xrec(i)-xin(i) ) > tol*abs(xin(i)) .or.
     :       abs( yrec(i)-yin(i) ) > tol*abs(yin(i)) ) then
            write(*,*) i,xrec(i),xin(i),
     :                 abs( xrec(i)-xin(i) )/abs(xin(i))
            write(*,*) i,yrec(i),yin(i),
     :                 abs( yrec(i)-yin(i) )/abs(yin(i))
            call stopit(29,status)
         end if
      end do




      call ast_end( status )
      call ast_activememory( 'testsplinemap' );
      call ast_flushmemory( 1 )

      if( status .eq. sai__ok ) then
         write(*,*) 'All SplineMap tests passed'
      else
         write(*,*) 'SplineMap tests failed'
      end if

      end


      subroutine stopit( i, status )
      implicit none
      include 'SAE_PAR'
      integer i, status
      if( status .eq. sai__ok ) then
         write( *,* ) 'Error ',i
         status = sai__error
      end if
      end




c  Load the spline knot positions and coefficients from the specified file.
      subroutine loadspline( fn, k, nx, ny, tx, ty, cu, cv,
     :                       xl, xu, yl, yu )
      implicit none
      character fn*(*)
      integer k, nx, ny, i, j
      double precision tx(nx+k), ty(ny+k), cu(nx,ny), cv(nx,ny),
     :                 xl, xu, yl, yu

      open( unit=15, file=fn, status='old',
     :      access='sequential', form='formatted', action='read' )

      xl = 1.0D100
      xu = -1.0D100
      do i = 1, nx+k
         read(15,*) tx( i )
         if( tx( i ) .lt. xl ) xl = tx( i )
         if( tx( i ) .gt. xu ) xu = tx( i )
      end do

      yl = 1.0D100
      yu = -1.0D100
      do i = 1, ny+k
         read(15,*) ty( i )
         if( ty( i ) .lt. yl ) yl = ty( i )
         if( ty( i ) .gt. yu ) yu = ty( i )
      end do

      do j = 1, ny
         do i = 1, nx
            read(15,*) cu( i, j )
         end do
      end do

      do j = 1, ny
         do i = 1, nx
            read(15,*) cv( i, j )
         end do
      end do

      close( unit=15 )

      call flush()

      end

