      program testcmpframe
      implicit none

      include 'AST_PAR'
      include 'AST_ERR'
      include 'SAE_PAR'

      integer status, pfrm, sfrm, cfrm, perm(3), nc, i
      double precision in( 4, 3 ), ra(4), dec(4), px(4)
      double precision out( 4, 3 )

      data ra / 6.1D0, 6.1D0, 0.04D0, 0.04D0 /,
     :     dec / 0.2D0, -0.2D0, -0.2D0, 0.2D0 /,
     :     px / -100.0D0, -10.0D0, 10.0D0, 100.0D0 /

c      call ast_watchmemory(100)

      status = sai__ok
      call err_mark( status )
      call ast_begin( status )


      sfrm = ast_skyframe( ' ', status )
      perm( 1 ) = 2
      perm( 2 ) = 1
      call ast_permaxes( sfrm, perm, status )

      pfrm = ast_frame( 1, "Domain=FPLANE", status )


      cfrm = ast_cmpframe( pfrm, sfrm, ' ', status )
      perm( 1 ) = 3
      perm( 2 ) = 1
      perm( 3 ) = 2
      call ast_permaxes( cfrm, perm, status )

      do i = 1, 4
         in( i, 1 ) = ra( i )
         in( i, 2 ) = px( i )
         in( i, 3 ) = dec( i )
      end do

      call ast_normpoints( cfrm, 4, 3, 4, in, 1, 3, 4, out, status )

      if( out( 1, 1 ) .ne. ra( 1 ) - 2*AST__DPI ) then
         call stopit( status, 'Error 1' )
      else if( out( 2, 1 ) .ne. ra( 2 ) - 2*AST__DPI ) then
         call stopit( status, 'Error 2' )
      else if( out( 3, 1 ) .ne. ra( 3 ) ) then
         call stopit( status, 'Error 3' )
      else if( out( 4, 1 ) .ne. ra( 4 ) ) then
         call stopit( status, 'Error 4' )
      else
         do i = 1, 4
            if( out( i, 2 ) .ne. px( i ) ) then
               call stopit( status, 'Error 5' )
            else if( out( i, 3 ) .ne. dec( i ) ) then
               call stopit( status, 'Error 6' )
            end if
         end do
      end if

      call ast_normpoints( cfrm, 4, 3, 4, in, 0, 3, 4, out, status )

      do i = 1, 4
         if( out( i, 1 ) .ne. ra( i ) ) then
            call stopit( status, 'Error 7' )
         else if( out( i, 2 ) .ne. px( i ) ) then
            call stopit( status, 'Error 8' )
         else if( out( i, 3 ) .ne. dec( i ) ) then
            call stopit( status, 'Error 9' )
         end if
      end do

      call ast_end( status )
      call err_rlse( status )

      call ast_activememory( 'testcmpframe' )
      call ast_flushmemory( 1 );

      if( status .eq. sai__ok ) then
         write(*,*) 'All CmpFrame tests passed'
      else
         write(*,*) 'CmpFrame tests failed'
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

