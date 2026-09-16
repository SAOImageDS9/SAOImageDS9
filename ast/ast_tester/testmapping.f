      program testmapping
      implicit none

      include 'AST_PAR'
      include 'SAE_PAR'

      integer status, pm
      double precision  coeff(20), fit(6), lbnd(2), ubnd(2)

      data coeff / 1.0, 1.0, 0.0, 0.0,
     :             2.0, 1.0, 1.0, 0.0,
     :             1.0, 2.0, 0.0, 0.0,
     :             3.0, 2.0, 0.0, 1.0,
     :             3.0, 1.0, 0.0, 2.0 /



      status = sai__ok
      call err_mark( status )
      call ast_begin( status )

      pm = ast_polymap( 2, 2, 4, coeff, 0, coeff, ' ', status )

      lbnd( 1 ) = -1.0D0
      lbnd( 2 ) = -1.0D0
      ubnd( 1 ) = 1.0D0
      ubnd( 2 ) = 1.0D0
      if( ast_linearapprox(pm, lbnd, ubnd, 0.001D0, fit, status) ) then
         if( fit(1) .ne. 1.0D0 .or. fit(2) .ne. 1.0D0 .or.
     :       fit(3) .ne. 2.0D0 .or. fit(4) .ne. 0.0D0 .or.
     :       fit(5) .ne. 0.0D0 .or. fit(6) .ne. 3.0D0 ) then
            call stopit( status, 'Error 0' )
         end if
      else
         call stopit( status, 'Error 1' )
      end if

      coeff( 13 ) = AST__BAD
      pm = ast_polymap( 2, 2, 4, coeff, 0, coeff, ' ', status )

      if( ast_linearapprox(pm, lbnd, ubnd, 0.001D0, fit, status) ) then
         if( fit(1) .ne. 1.0D0 .or. fit(2) .ne. AST__BAD .or.
     :       fit(3) .ne. 2.0D0 .or. fit(4) .ne. 0.0D0 .or.
     :       fit(5) .ne. AST__BAD .or. fit(6) .ne. AST__BAD ) then
            call stopit( status, 'Error 2' )
         end if
      else
         call stopit( status, 'Error 3' )
      end if

      pm = ast_polymap( 2, 2, 5, coeff, 0, coeff, ' ', status )

      if( ast_linearapprox(pm, lbnd, ubnd, 0.001D0, fit, status) ) then
         write(*,*) fit
         call stopit( status, 'Error 4' )
      end if




      call ast_end( status )
      call err_rlse( status )

      if( status .eq. sai__ok ) then
         write(*,*) 'All Mapping tests passed'
      else
         write(*,*) 'Mapping tests failed'
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



