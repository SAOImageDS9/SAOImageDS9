      program testfitschan
      implicit none
      include 'SAE_PAR'
      include 'AST_PAR'
      include 'AST_ERR'

      integer*8 kval
      integer status, fs, fc, i, val, iwcfrm, map, km
      character cards(10)*80, card*80
      logical there
      double precision xin, yin, xout, yout

      status = sai__ok


c      call ast_watchmemory( 225192 )
      call ast_begin( status )

*  Create a FitsChan that will write its contents out to text file
*  fred.txt when it is deleted.
      fc = ast_fitschan( AST_NULL, AST_NULL, 'SinkFile=./fred.txt',
     :                   status )

      if( .not. ast_getl( fc, 'SipOK', status ) ) then
         call stopit( 776, ' ', status )
      end if


      call test_fitsrounding( fc, status )
      call ast_emptyfits( fc, status )


*  Put a FITS-WCS header into it.
      cards(1) = 'CRPIX1  =                   45'
      cards(2) = 'CRPIX2  =                   45'
      cards(3) = 'CRVAL1  =                   45'
      cards(4) = 'CRVAL2  =                 89.9'
      cards(5) = 'MYNAME  =                     '
      cards(6) = 'CDELT1  =                -0.01'
      cards(7) = 'CDELT2  =                 0.01'
      cards(8) = 'CTYPE1  = ''RA---TAN'''
      cards(9) = 'CTYPE2  = ''DEC--TAN'''
      do i = 1, 9
         call ast_putfits( fc, cards(i), .false., status )
      end do

      call ast_seti( fc, 'Card', 2, status )
      if( .not. ast_getfitsi( fc, '.', val, status ) ) then
         call stopit( 777, ' ', status )
      else if( val .ne. 45 ) then
         call stopit( 778, ' ', status )
      endif

      call ast_seti( fc, 'Card', 2, status )
      if( .not. ast_getfitsk( fc, '.', kval, status ) ) then
         call stopit( 7777, ' ', status )
      else if( kval .ne. 45 ) then
         call stopit( 7778, ' ', status )
      endif

      call ast_seti( fc, 'Card', 1000000000, status )
      kval = 32147483647
      call ast_setfitsk( fc, 'KTEST', kval, ' ', .false., status )
      if( .not. ast_getfitsk( fc, 'KTEST', kval, status ) ) then
         call stopit( 7779, ' ', status )
      else if( kval .ne. 32147483647 ) then
         call stopit( 7780, ' ', status )
      endif

      call ast_seti( fc, 'Card', 5, status )
      if( ast_testfits( fc, '.', there, status ) ) then
         call stopit( 779, ' ', status )
      else if( .not. there ) then
         call stopit( 780, ' ', status )
      endif

      if( .not. ast_testfits( fc, 'CDELT1', there, status ) ) then
         call stopit( 781, ' ', status )
      else if( .not. there ) then
         call stopit( 782, ' ', status )
      endif

      if( ast_testfits( fc, 'ABCDEF', there, status ) ) then
         call stopit( 783, ' ', status )
      else if( there ) then
         call stopit( 784, ' ', status )
      endif

      call ast_seti( fc, 'Card', 11, status )
      if( ast_testfits( fc, '.', there, status ) ) then
         call stopit( 785, ' ', status )
      else if( there ) then
         call stopit( 786, ' ', status )
      endif

      card = ast_getc( fc, 'CardName', status )
      if( card .ne. ' ' ) call stopit( 787, ' ', status )

*  Annul the fitschan. Only 1 ref so this should delete it.
      call ast_annul( fc, status )

*  Create another FitsChan and tell it to read headers from fred.txt.
      fc = ast_fitschan( AST_NULL, AST_NULL, 'SourceFile=./fred.txt',
     :                   status )

*  Check it looks like the original header.
      if( ast_geti( fc, 'NCard', status ) .ne. 10 ) then
         write(*,*) ast_geti( fc, 'NCard', status )
         call stopit( 1000, ' ', status )
      endif

      if( ast_geti( fc, 'Nkey', status ) .ne. 10 ) then
         write(*,*) ast_geti( fc, 'Nkey', status )
         call stopit( 999, ' ', status )
      endif

      call ast_clear( fc, 'Card', status )
      i = 0
      do while( ast_findfits( fc, '%f', card, .true., status ) )
         i = i + 1
         if( i .le. 9 .and. card .ne. cards( i ) ) then
            call stopit( 1001, ' ', status )
         endif
      end do

*  Annul the fitschan.
      call ast_annul( fc, status )

*  Put a simple FITS-WCS header into a FitsChan.
      cards(1) = 'CRPIX1  = 45'
      cards(2) = 'CRPIX2  = 45'
      cards(3) = 'CRVAL1  = 45'
      cards(4) = 'CRVAL2  = 89.9'
      cards(5) = 'CDELT1  = -0.01'
      cards(6) = 'CDELT2  = 0.01'
      cards(7) = 'CTYPE1  = ''RA---TAN'''
      cards(8) = 'CTYPE2  = ''DEC--TAN'''

      fc = ast_fitschan( AST_NULL, AST_NULL, 'Iwc=1', status )
      do i = 1, 8
         call ast_putfits( fc, cards(i), .false., status )
      end do


      call ast_clear( fc, 'Card', status )
      if( ast_geti( fc, 'CardType', status ) .NE. AST__INT ) then
         write(*,*) ast_geti( fc, 'CardType', status ),' should be ',
     :              AST__STRING
         call stopit( 993, ' ', status )
      endif


*  Indicate that the CTYPE1 card should be retained by ast_read.
      if( ast_findfits( fc, 'CTYPE1', card, .FALSE., status ) ) then
         call ast_retainfits( fc, status )
      endif

*  Read a FrameSet from the FitsChan.
      call ast_clear( fc, 'Card', status )
      fs = ast_read( fc, status )
      if( fs .eq. AST__NULL ) then
         call stopit( 1, 'No FrameSet read from FitsChan', status )
      end if

*  Check the CTYPE1 card is still present in the FitsChan.
      call ast_clear( fc, 'Card', status )
      if( .not. ast_findfits( fc, 'CTYPE1', card, .FALSE.,
     :                        status ) ) then
         call stopit( 2, 'CTYPE1 has not been retained', status )
      end if

*  Check the CTYPE2 card is not present in the FitsChan.
      call ast_clear( fc, 'Card', status )
      if( ast_findfits( fc, 'CTYPE2', card, .FALSE., status ) ) then
         call stopit( 3, 'CTYPE2 has been retained', status )
      end if

*  Check the IWC Frame is present and check the reference point
*  transforms to the origin of IWC.
      if( ast_geti( fs, 'Nframe', status ) .ne. 3 ) then
         call stopit( 301, 'Wrong number of Frames', status )
      endif
      if( ast_geti( fs, 'Current', status ) .ne. 2 ) then
         call stopit( 302, 'Wrong current Frame', status )
      endif
      iwcfrm = ast_getframe( fs, 3, status )
      if( ast_getc( iwcfrm, 'Domain', status ) .ne. 'IWC' ) then
         call stopit( 303, 'Wrong Domain in IWC Frame', status )
      endif

      map = ast_getmapping( fs, 1, 3, status )
      xin = 45.0D0
      yin = 45.0D0
      call ast_tran2( map, 1, xin, yin, .true., xout, yout, status )
      if( xout .ne. 0.0D0 .or. yout .ne. 0.0D0 ) then
         call stopit( 304, 'Wrong IWC for CRPIX position', status )
      endif

      xin = xin + 1.0D0
      call ast_tran2( map, 1, xin, yin, .true., xout, yout, status )
      if( xout .ne. -0.01D0 .or. yout .ne. 0.0D0 ) then
         call stopit( 305, 'Wrong IWC for offset CRPIX position',
     :                status )
      endif

      map = ast_getmapping( fs, 2, 3, status )
      xin = 45.0D0*AST__DD2R
      yin = 89.9D0*AST__DD2R
      call ast_tran2( map, 1, xin, yin, .true., xout, yout, status )
      if( abs( xout ) .gt. 1.0D-10 .or. abs( yout ) .gt. 1.0D-10 ) then
         call stopit( 306, 'Wrong IWC for CRVAL position', status )
      endif


*  Do it again, this time with an illegal value for CRPIX2. This will
*  cause ast_read to report an error.
      cards(1) = 'CRPIX1  = 45'
      cards(2) = 'CRPIX2  = ''fred'''
      cards(3) = 'CRVAL1  = 45'
      cards(4) = 'CRVAL2  = 89.9'
      cards(5) = 'CDELT1  = -0.01'
      cards(6) = 'CDELT2  = 0.01'
      cards(7) = 'CTYPE1  = ''RA---TAN'''
      cards(8) = 'CTYPE2  = ''DEC--TAN'''

      fc = ast_fitschan( AST_NULL, AST_NULL, ' ', status )
      do i = 1, 8
         call ast_putfits( fc, cards(i), .false., status )
      end do

*  Set the Clean attribute to true so that used cards are removed from the
*  FitsChan even if an error occurrs in astRead.
c      call ast_setl( fc, 'Clean', .true., status )

*  Indicate that the CTYPE1 card should be retained by ast_read.
      call ast_clear( fc, 'Card', status )
      if( ast_findfits( fc, 'CTYPE1', card, .FALSE., status ) ) then
         call ast_retainfits( fc, status )
      endif

*  Abort if an error has occurred.
      if( status .ne. sai__ok ) go to 999

*  Read a FrameSet from the FitsChan, deferring error reporting. Check an
*  error is reported by ast_read.
      call ast_clear( fc, 'Card', status )

      call err_begin( status )
      fs = ast_read( fc, status )

      if( fs .ne. AST__NULL ) then
         call stopit( 4, 'A FrameSet has been read from the FitsChan',
     :                status )

      else if( status .eq. sai__ok ) then
         call stopit( 5, 'No error has been reported by ast_read',
     :                status )

      else
         call err_annul( status )
      end if

      call err_end( status )

*  Check the CTYPE1 card is still present in the FitsChan.
      call ast_clear( fc, 'Card', status )
      if( .not. ast_findfits( fc, 'CTYPE1', card, .FALSE.,
     :                        status ) ) then
         call stopit( 6, 'CTYPE1 has not been retained', status )
      end if

*  Check the CTYPE2 card is also still present in the FitsChan (because
*  cards are not removed if an error is reported in ast_read unless the
*  Clean attribute is set true).
      call ast_clear( fc, 'Card', status )
      if( .not. ast_findfits( fc, 'CTYPE2', card, .FALSE.,
     :                        status ) ) then
         call stopit( 7, 'CTYPE2 has not been retained', status )
      end if





*  Do it again, again with an illegal value for CRPIX2, but this time
*  setting the Clean attribute true.
      cards(1) = 'CRPIX1  = 45'
      cards(2) = 'CRPIX2  = ''fred'''
      cards(3) = 'CRVAL1  = 45'
      cards(4) = 'CRVAL2  = 89.9'
      cards(5) = 'CDELT1  = -0.01'
      cards(6) = 'CDELT2  = 0.01'
      cards(7) = 'CTYPE1  = ''RA---TAN'''
      cards(8) = 'CTYPE2  = ''DEC--TAN'''

      fc = ast_fitschan( AST_NULL, AST_NULL, 'Clean=1', status )
      do i = 1, 8
         call ast_putfits( fc, cards(i), .false., status )
      end do

*  Indicate that the CTYPE1 card should be retained by ast_read.
      call ast_clear( fc, 'Card', status )
      if( ast_findfits( fc, 'CTYPE1', card, .FALSE., status ) ) then
         call ast_retainfits( fc, status )
      endif

*  Abort if an error has occurred.
      if( status .ne. sai__ok ) go to 999

*  Read a FrameSet from the FitsChan, deferring error reporting. Check an
*  error is reported by ast_read.
      call ast_clear( fc, 'Card', status )

      call err_begin( status )
      fs = ast_read( fc, status )

      if( fs .ne. AST__NULL ) then
         call stopit( 8, 'A FrameSet has been read from the FitsChan',
     :                status )

      else if( status .eq. sai__ok ) then
         call stopit( 9, 'No error has been reported by ast_read',
     :                status )

      else
         call err_annul( status )
      end if

      call err_end( status )

*  Check the CTYPE1 card is still present in the FitsChan (because of the
*  call to ast_retainfits).
      call ast_clear( fc, 'Card', status )
      if( .not. ast_findfits( fc, 'CTYPE1', card, .FALSE.,
     :                        status ) ) then
         call stopit( 10, 'CTYPE1 has not been retained', status )
      end if

*  Check the CTYPE2 card is no longer present in the FitsChan (because
*  the Clean attribute is set true).
      call ast_clear( fc, 'Card', status )
      if( ast_findfits( fc, 'CTYPE2', card, .FALSE., status ) ) then
         call stopit( 11, 'CTYPE2 has been retained', status )
      end if

*  Test -TAB
      call checktab( status )
      call checktab2( status )

*  Read a SIP header and then attempt to write it out. It should fail
*  because the SIP header is non-linear.
      call ast_emptyfits( fc, status )
      call ast_seti( fc, 'SipOK', 0, status )
      call ast_set( fc, 'SourceFile=sip.head', status )
      call ast_clear( fc, 'Card', status )
      fs = ast_read( fc, status )
      call ast_set( fc, 'Encoding=FITS-WCS', status )
      if( fs .eq. AST__NULL ) then
         call stopit( 12, 'Failed to read SIP header', status )
      else if( ast_write( fc, fs, status ) .gt. 0 ) then
         call stopit( 13, 'Test on SIP header non-linearity failed',
     :                status )
      end if


*  Read a header with alternate axis descriptions (set 'C' is badly
*  formed on purpose).
      call ast_setl( fc, 'Clean', .false., status )
      call ast_emptyfits( fc, status )

      if( status .eq. SAI__OK .and.
     :    ast_getl( fc, 'IgnoreBadAlt', status ) ) then
         call stopit( 14, ' ', status )
      end if

      call ast_set( fc, 'SourceFile=alt.header', status )
      call ast_clear( fc, 'Card', status )
      call err_begin( status )
      fs = ast_read( fc, status )

      if( status .ne. AST__BDFTS ) then
         if( status .ne. SAI__OK ) call err_flush( status )
         call stopit( 15, ' ', status )
      else
         call err_annul( status )
      end if
      call err_end( status )

      call ast_setl( fc, 'IgnoreBadAlt', .TRUE., status )
      if( status .eq. SAI__OK .and.
     :    .not. ast_getl( fc, 'IgnoreBadAlt', status ) ) then
         call stopit( 16, ' ', status )
      end if

      call ast_emptyfits( fc, status )
      call ast_set( fc, 'SourceFile=alt.header', status )
      call ast_clear( fc, 'Card', status )
      call err_begin( status )
      fs = ast_read( fc, status )

      if( status .ne. SAI__OK ) then
         call err_flush( status )
         call stopit( 17, ' ', status )
      end if
      call err_end( status )

      if( ast_geti( fs, 'Nframe', status ) .ne. 4 ) then
         call stopit( 18, 'Wrong number of Frames', status )
      endif


      call ast_emptyfits( fc, status )
      call ast_set( fc, 'SourceFile=alt.header', status )
      call ast_set( fc, 'Warnings=BadAlt', status )

      call ast_clear( fc, 'Card', status )
      fs = ast_read( fc, status )

      km = ast_warnings( fc, status )
      if( ast_mapsize( km, status ) .ne. 1 ) then
         call stopit( 19, 'Wrong number of Warnings', status )
      endif



 999  continue

      call ast_end( status )
      call ast_activememory( 'testfitschan' )
      call ast_flushmemory( 1 );


      if( status .eq. sai__ok ) then
         write(*,*) 'All FitsChan tests passed'
      else
         write(*,*) 'FitsChan tests failed'
      end if

      end


      subroutine stopit( errnum, text, status )
      implicit none
      include 'SAE_PAR'
      character text*(*)
      integer errnum, status

      if( status .eq. sai__ok ) then
         status = sai__error
         call msg_seti( 'N', errnum )
         call msg_setc( 'T', text )
         call err_rep( ' ', 'Error ^N: ^T', status )
      end if

      end


      subroutine checktab( status )
      implicit none

      external tabsource

      include 'SAE_PAR'
      include 'AST_PAR'
      include 'AST_ERR'
      include 'PRM_PAR'
      include 'CNF_PAR'
      integer status, sf, mm, fc, fs,gf, tables, table, size, pntr1,
     :        nelem, pntr2, i, lm, sm, fs2, map, fc2, ncard, fs3
      character key*20,card*80
      double precision lut( 100 ), shift, x(3), y(3), y2(3)

      common /tabsrc/ tables

      if( status .ne. sai__ok ) return

      call err_begin( status )
      call ast_begin( status )

      sf = ast_specframe( 'system=freq,unit=MHz', status )
      gf = ast_frame( 1, 'domain=GRID', status )
      mm = ast_mathmap( 1, 1, 1, 'y=1/(x*x)', 1, 'x=1/sqrt(y)', ' ',
     :                  status )
      fs = ast_frameset( gf, ' ', status )
      call ast_addframe( fs, AST__BASE, mm, sf, status )

      fc = ast_fitschan( ast_null, ast_null, 'Encoding=FITS-WCS',
     :                   status )
      call ast_putfits( fc, 'NAXIS   = 1', .false., status )
      call ast_putfits( fc, 'NAXIS1  = 100', .false., status )


      if( ast_write( fc, fs, status ) .ne. 0 ) then
         call stopit( 1000, ' ', status )
      else if( ast_gettables( fc, status ) .ne. AST__NULL ) then
         call stopit( 1001, 'CheckTab', status )
      endif

      call ast_setl( fc, 'TabOK', .true., status )

      if( ast_write( fc, fs, status ) .ne. 1 )
     :    call stopit( 1002, ' ', status )

      tables = ast_gettables( fc, status )
      if( tables .eq. AST__NULL ) then
         call stopit( 1003, ' ', status )
      else if( .not. ast_isakeymap( tables, status ) ) then
         call stopit( 1004, ' ', status )
      else if( ast_mapsize( tables, status ) .ne. 1 ) then
         call stopit( 1005, ' ', status )
      endif

      key = ast_mapkey( tables, 1, status )
      if( key .ne. 'WCS-TAB' ) then
         call stopit( 1006, ' ', status )
      endif

      if( .not. ast_mapget0a( tables, 'WCS-TAB', table,
     :                        status ) ) then
         call stopit( 1007, ' ', status )
      else if( .not. ast_isafitstable( table, status ) ) then
         call stopit( 1004, ' ', status )
      endif

      if( ast_geti( table, 'NColumn', status ) .ne. 2 ) then
         call stopit( 1005, ' ', status )
      else if( ast_geti( table, 'NRow', status ) .ne. 1 ) then
         call stopit( 1006, ' ', status )
      else if( ast_geti( table, 'ColumnLength(coords1)', status ) .ne.
     :         197 ) then
         call stopit( 1007, ' ', status )
      else if( ast_geti( table, 'ColumnLength(index1)', status ) .ne.
     :         197 ) then
         call stopit( 1008, ' ', status )
      end if

      size = ast_columnsize( table, 'COORDS1', status )
      if( size .ne. VAL__NBD*197 ) call stopit( 1009, ' ', status )
      call psx_malloc( size, pntr1, status )
      call ast_getcolumndata( table, 'Coords1', 0.0, AST__BAD, size,
     :                        %val( cnf_pval( pntr1 ) ), nelem,
     :                        status )
      if( nelem .ne. 197 ) call stopit( 1010, ' ', status )

      size = ast_columnsize( table, 'INDEX1', status )
      if( size .ne. VAL__NBD*197 ) call stopit( 1011, ' ', status )
      call psx_malloc( size, pntr2, status )
      call ast_getcolumndata( table, 'inDex1', 0.0, AST__BAD, size,
     :                        %val( cnf_pval( pntr2 ) ), nelem,
     :                        status )
      if( nelem .ne. 197 ) call stopit( 1012, ' ', status )

      call checkft( 197, %val( cnf_pval( pntr1 ) ),
     :              %val( cnf_pval( pntr2 ) ), status )

      call psx_free( pntr1, status )
      call psx_free( pntr2, status )

c --------------------------------------------------------------------
      do i = 1, 100
         lut( i ) = 1.0D0/dble(i*i)
      end do

      lm = ast_lutmap( 100, lut, -49.0D0, 1.0D0, ' ', status )

      call ast_set( sf, 'System=Wave,Unit=m', status )
      call ast_removeframe( fs, AST__CURRENT, status )
      call ast_addframe( fs, AST__BASE, lm, sf, status )
      call ast_set( fs, 'System=freq', status )

      shift = 50.0D0
      sm = ast_shiftmap( 1, shift, ' ', status )
      call ast_remapframe( fs, AST__BASE, sm, status )

      call ast_removetables( fc, 'WCS-TAB', status )
      call ast_purgewcs( fc, status )

      if( ast_write( fc, fs, status ) .ne. 1 )
     :    call stopit( 1013, ' ', status )
      tables = ast_gettables( fc, status )

      if( tables .eq. AST__NULL ) then
         call stopit( 1014, ' ', status )
      else if( .not. ast_isakeymap( tables, status ) ) then
         call stopit( 1015, ' ', status )
      else if( ast_mapsize( tables, status ) .ne. 1 ) then
         call stopit( 1016, ' ', status )
      endif

      key = ast_mapkey( tables, 1, status )
      if( key .ne. 'WCS-TAB' ) then
         call stopit( 1017, ' ', status )
      endif

      if( .not. ast_mapget0a( tables, 'WCS-TAB', table,
     :                        status ) ) then
         call stopit( 1018, ' ', status )
      else if( .not. ast_isafitstable( table, status ) ) then
         call stopit( 1019, ' ', status )
      endif

      if( ast_geti( table, 'NColumn', status ) .ne. 1 ) then
         call stopit( 1020, ' ', status )
      else if( ast_geti( table, 'NRow', status ) .ne. 1 ) then
         call stopit( 1021, ' ', status )
      else if( ast_geti( table, 'ColumnLength(coords1)', status ) .ne.
     :         100 ) then
         call stopit( 1022, ' ', status )
      end if

      size = ast_columnsize( table, 'COORDS1', status )
      if( size .ne. VAL__NBD*100 ) call stopit( 1024, ' ', status )
      call psx_malloc( size, pntr1, status )
      call ast_getcolumndata( table, 'Coords1', 0.0, AST__BAD, size,
     :                        %val( cnf_pval( pntr1 ) ), nelem,
     :                        status )
      if( nelem .ne. 100 ) call stopit( 1025, ' ', status )

      call checkft2( 100, %val( cnf_pval( pntr1 ) ), status )

      call psx_free( pntr1, status )

c --------------------------------------------------------------------

      call ast_removetables( fc, ' ', status )
      fc2 = ast_copy( fc, status )
      call ast_puttables( fc, tables, status )
      call ast_clear( fc, 'Card', status )

      fs2 = ast_read( fc, status )
      if( fs2 .eq. ast__null ) call stopit( 1028, ' ', status )

      if( .not. ast_equal( ast_getframe( fs, ast__current, status ),
     :                     ast_getframe( fs2, ast__current, status ),
     :                     status ) ) then
         call stopit( 1029, ' ', status )
      endif

      map = ast_cmpmap( ast_getmapping( fs, ast__base, ast__current,
     :                                  status ),
     :                  ast_getmapping( fs2, ast__current, ast__base,
     :                                  status ), .TRUE., ' ', status )

      x(1) = 1.0D0;
      x(2) = 50.0D0;
      x(3) = 100.0D0;
      call ast_tran1( map, 3, x, .true., y, status )

      if( abs( y(1) - x(1) ) .gt. 1.0D-4 .OR.
     :    abs( y(2) - x(2) ) .gt. 1.0D-4 .OR.
     :    abs( y(3) - x(3) ) .gt. 1.0D-4 ) then
         call stopit( 1030, ' ', status )
      end if


c --------------------------------------------------------------------
      if( .not. ast_getl( fc2, 'TabOK', status ) ) then
         call stopit( 1031, ' ', status )
      endif
      ncard = ast_geti( fc2, 'Ncard', status )

      call ast_clear( fc2, 'Card', status )
      fs2 = ast_read( fc2, status )
      if( status .ne. AST__NOTAB ) then
         if( status .ne. SAI__OK ) call err_flush( status )
         call stopit( 1032, ' ', status )
      else
         call err_annul( status )
      end if

      call ast_setl( fc2, 'TabOK', .false., status )
      call ast_clear( fc2, 'Card', status )
      fs2 = ast_read( fc2, status )
      if( status .ne. AST__BDFTS ) then
         if( status .ne. SAI__OK ) call err_flush( status )
         call stopit( 1032, ' ', status )
      else
         call err_annul( status )
      end if
      call ast_setl( fc2, 'TabOK', .true., status )

      if( ncard .ne. ast_geti( fc2, 'Ncard', status ) ) then
         call stopit( 1034, ' ', status )
      endif

      call ast_tablesource( fc2, tabsource, status )
      call ast_clear( fc2, 'Card', status )
      fs2 = ast_read( fc2, status )
      if( fs2 .eq. ast__null ) call stopit( 1035, ' ', status )

      if( .not. ast_equal( ast_getframe( fs, ast__current, status ),
     :                     ast_getframe( fs2, ast__current, status ),
     :                     status ) ) then
         call stopit( 1036, ' ', status )
      endif

      map = ast_cmpmap( ast_getmapping( fs, ast__base, ast__current,
     :                                  status ),
     :                  ast_getmapping( fs2, ast__current, ast__base,
     :                                  status ), .TRUE., ' ', status )

      x(1) = 1.0D0;
      x(2) = 50.0D0;
      x(3) = 100.0D0;
      call ast_tran1( map, 3, x, .true., y, status )

      if( abs( y(1) - x(1) ) .gt. 1.0D-4 .OR.
     :    abs( y(2) - x(2) ) .gt. 1.0D-4 .OR.
     :    abs( y(3) - x(3) ) .gt. 1.0D-4 ) then
         call stopit( 1037, ' ', status )
      end if

c --------------------------------------------------------------------
      call readobj( 'sparse.ast', fs, status )

      fc = ast_fitschan( ast_null, ast_null,
     :                   'Encoding=FITS-WCS,TabOK=1', status )

      call ast_putfits( fc, 'NAXIS   = 2', .false., status )
      call ast_putfits( fc, 'NAXIS1  = 2000', .false., status )
      call ast_putfits( fc, 'NAXIS2  = 1', .false., status )

      if( ast_write( fc, fs, status ) .ne. 1 ) then
         call stopit( 1038, ' ', status )
      end if

      call ast_clear( fc, 'Card', status )
      fs2 = ast_read( fc, status )

      call ast_invert( fs, status )
      call ast_invert( fs2, status )
      fs3 = ast_convert( fs, fs2, 'SKY-DSBSPECTRUM', status )
      if( fs3 .eq. AST__NULL ) then
         call stopit( 1039, ' ', status )
      endif

      if( ast_getc( ast_getframe( fs, AST__BASE, status ), 'Domain',
     :              status ) .ne. 'SKY-DSBSPECTRUM' ) then
         call stopit( 1040, ' ', status )
      endif

      if( ast_getc( ast_getframe( fs2, AST__BASE, status ), 'Domain',
     :              status ) .ne. 'SKY-DSBSPECTRUM' ) then
         call stopit( 1041, ' ', status )
      endif

      call ast_invert( fs, status )
      call ast_invert( fs2, status )

      x( 1 ) = 1.0
      x( 2 ) = 1.0
      x( 3 ) = 1.0
      call ast_trann( fs, 1, 3, 1, x, .true., 3, 1, y, status )
      call ast_trann( fs2, 1, 3, 1, x, .true., 3, 1, y2, status )

      do i = 1, 3
         if( abs( y(i) - y2(i) ) .gt. 1.0E-8 ) then
            call stopit( 1042, ' ', status )
         endif
      enddo

      x( 1 ) = 10.0
      x( 2 ) = 1.0
      x( 3 ) = 1000.0
      call ast_trann( fs, 1, 3, 1, x, .true., 3, 1, y, status )
      call ast_trann( fs2, 1, 3, 1, x, .true., 3, 1, y2, status )

      do i = 1, 3
         if( abs( y(i) - y2(i) ) .gt. 1.0E-8 ) then
            call stopit( 1042, ' ', status )
         endif
      enddo


c --------------------------------------------------------------------

      sf = ast_frame( 1, 'domain=voltage,unit=V', status )
      gf = ast_frame( 1, 'domain=GRID', status )
      mm = ast_mathmap( 1, 1, 1, 'y=1/(x*x)', 1, 'x=1/sqrt(y)', ' ',
     :                  status )
      fs = ast_frameset( gf, ' ', status )
      call ast_addframe( fs, AST__BASE, mm, sf, status )

      call ast_emptyfits( fc, status )
      call ast_putfits( fc, 'NAXIS   = 1', .false., status )
      call ast_putfits( fc, 'NAXIS1  = 100', .false., status )

      if( ast_write( fc, fs, status ) .ne. 1 )
     :    call stopit( 1043, ' ', status )

      if( ast_getfitss( fc, 'CTYPE1', card, status ) ) then
         if( card .ne. 'VOLT-TAB' ) call stopit( 1059, ' ', status )
      else
         call stopit( 1060, ' ', status )
      endif

      tables = ast_gettables( fc, status )
      if( tables .eq. AST__NULL ) then
         call stopit( 1044, ' ', status )
      else if( .not. ast_isakeymap( tables, status ) ) then
         call stopit( 1045, ' ', status )
      else if( ast_mapsize( tables, status ) .ne. 1 ) then
         call stopit( 1046, ' ', status )
      endif

      key = ast_mapkey( tables, 1, status )
      if( key .ne. 'WCS-TAB' ) then
         call stopit( 1047, ' ', status )
      endif

      if( .not. ast_mapget0a( tables, 'WCS-TAB', table,
     :                        status ) ) then
         call stopit( 1048, ' ', status )
      else if( .not. ast_isafitstable( table, status ) ) then
         call stopit( 1049, ' ', status )
      endif

      if( ast_geti( table, 'NColumn', status ) .ne. 2 ) then
         call stopit( 1050, ' ', status )
      else if( ast_geti( table, 'NRow', status ) .ne. 1 ) then
         call stopit( 1051, ' ', status )
      else if( ast_geti( table, 'ColumnLength(coords1)', status ) .ne.
     :         197 ) then
         call stopit( 1052, ' ', status )
      else if( ast_geti( table, 'ColumnLength(index1)', status ) .ne.
     :         197 ) then
         call stopit( 1053, ' ', status )
      end if

      size = ast_columnsize( table, 'COORDS1', status )

      if( size .ne. VAL__NBD*197 ) call stopit( 1054, ' ', status )
      call psx_malloc( size, pntr1, status )
      call ast_getcolumndata( table, 'Coords1', 0.0, AST__BAD, size,
     :                        %val( cnf_pval( pntr1 ) ), nelem,
     :                        status )
      if( nelem .ne. 197 ) call stopit( 1055, ' ', status )

      size = ast_columnsize( table, 'INDEX1', status )
      if( size .ne. VAL__NBD*197 ) call stopit( 1056, ' ', status )
      call psx_malloc( size, pntr2, status )
      call ast_getcolumndata( table, 'inDex1', 0.0, AST__BAD, size,
     :                        %val( cnf_pval( pntr2 ) ), nelem,
     :                        status )
      if( nelem .ne. 197 ) call stopit( 1057, ' ', status )

      call checkft( 197, %val( cnf_pval( pntr1 ) ),
     :              %val( cnf_pval( pntr2 ) ), status )

      call psx_free( pntr1, status )
      call psx_free( pntr2, status )


      call ast_clear( fc, 'Card', status )
      fs2 = ast_read( fc, status )
      if( fs2 .eq. AST__NULL )
     :    call stopit( 1058, ' ', status )

      call ast_invert( fs, status )
      call ast_invert( fs2, status )
      fs3 = ast_convert( fs2, fs, ' ', status )
      if( fs3 .eq. AST__NULL ) then
         call stopit( 1061, ' ', status )
      endif

      if( ast_getc( ast_getframe( fs, AST__BASE, status ), 'Domain',
     :              status ) .ne. 'VOLTAGE' ) then
         call stopit( 1062, ' ', status )
      endif

      if( ast_getc( ast_getframe( fs2, AST__BASE, status ), 'Domain',
     :              status ) .ne. 'VOLTAGE' ) then
         call stopit( 1063, ' ', status )
      endif

      x(1) = 1.0
      x(2) = 10.0
      x(3) = 100.0
      call ast_tran1( fs3, 3, x, .true., y, status )
      if( abs( y(1) - x(1) ) .gt. 1.0D-2 .OR.
     :    abs( y(2) - x(2) ) .gt. 1.0D-2 .OR.
     :    abs( y(3) - x(3) ) .gt. 1.0D-2 ) then
         call stopit( 1064, ' ', status )
      end if



      call ast_end( status )
      call err_end( status )

      end


      subroutine checkft( nelem, coords, indx, status )
      implicit none
      include 'SAE_PAR'
      integer nelem, status
      double precision coords( nelem ), indx( nelem )

      if( status .ne. sai__ok ) return

      if( indx( 1 ) .ne. 1.0D0 ) then
         call stopit( 2001, ' ', status )

      else if( coords( 1 ) .ne. 1.0D0 ) then
         call stopit( 2002, ' ', status )

      else if( indx( nelem ) .ne. 1.0D2 ) then
         call stopit( 2003, ' ', status )

      else if( coords( nelem ) .ne. 1.0D-4 ) then
         call stopit( 2004, ' ', status )

      else if( abs( coords( nelem/2 ) -
     :         indx( nelem/2 )**(-2) ) .gt. 1D-20 ) then
         call stopit( 2005, ' ', status )
      end if

      end

      subroutine checkft2( nelem, coords, status )
      implicit none
      include 'SAE_PAR'
      integer nelem, status
      double precision coords( nelem )

      if( status .ne. sai__ok ) return

      if( abs( coords( 1 ) - 299.792458 ) .gt. 1.0D-5 ) then
         call stopit( 3002, ' ', status )

      else if( abs( coords( nelem ) - 2997924.58 ) .gt. 1.0D-1 ) then
         call stopit( 3004, ' ', status )

      end if

      end

      subroutine tabsource( fc, extnam, extver, extlevel, status )
      implicit none
      include 'AST_PAR'

      integer fc, status, tables, table, extver, extlevel
      character extnam*(*)

      common /tabsrc/ tables

      if( extnam .ne. 'WCS-TAB' ) then
         call stopit( 1035, ' ', status )

      else if( .not. ast_mapget0a( tables, extnam, table,
     :                             status ) ) then
         call stopit( 1036, ' ', status )

      else if( .not. ast_isafitstable( table, status ) ) then
         call stopit( 1037, ' ', status )

      else if( extver .ne. 1 ) then
         write(*,*) 'EXTVER=',extver
         call stopit( 1065, ' ', status )

      else if( extlevel .ne. 1 ) then
         call stopit( 1066, ' ', status )

      else
         call ast_puttables( fc, tables, status )

      endif

      call ast_annul( table, status )

      end



      subroutine readobj( file, iobj, status )
      implicit none

      include 'AST_PAR'
      include 'SAE_PAR'

      external chsource
      integer iobj, status, ch
      character file*(*)

      open( 10, status='old', file=file )

      ch = ast_channel( chsource, AST_NULL, ' ', status )
      iobj = ast_read( ch, status )
      call ast_annul( ch, status )

      close( 10 )

      end

      subroutine chsource( status )
      implicit none

      include 'AST_PAR'
      include 'SAE_PAR'

      integer status
      character line*200

      read( 10, '(A)', end=99 ) line

      call ast_putline( line, len( line ), status )
      return

 99   call ast_putline( line, -1, status )

      end




      subroutine checktab2( status )
      implicit none

      include 'SAE_PAR'
      include 'AST_PAR'
      integer status, sf, mmm, mm, fc, fs, fs2, gf

      if( status .ne. sai__ok ) return

      call err_begin( status )
      call ast_begin( status )

      sf = ast_skyframe( ' ', status )
      call ast_setd( sf, 'SkyRef(1)', 0.0001D0, status )
      call ast_setd( sf, 'SkyRef(2)', 0.0001D0, status )

      gf = ast_frame( 2, 'domain=GRID', status )

      mm = ast_mathmap( 1, 1, 1, 'y=(x+50)**(-2)', 1, 'x=-50+1/sqrt(y)',
     :                  ' ', status )
      mmm = ast_cmpmap( mm, mm, .false., ' ', status )

      fs = ast_frameset( gf, ' ', status )
      call ast_addframe( fs, AST__BASE, mmm, sf, status )

      fc = ast_fitschan( ast_null, ast_null, 'Encoding=FITS-WCS,'//
     :                   'TabOK=1', status )
      call ast_putfits( fc, 'NAXIS   = 2', .false., status )
      call ast_putfits( fc, 'NAXIS1  = 100', .false., status )
      call ast_putfits( fc, 'NAXIS2  = 100', .false., status )

      if( ast_write( fc, fs, status ) .ne. 1 ) then
         call stopit( 2000, ' ', status )
      endif

      call ast_clear( fc, 'Card', status )
      fs2 = ast_read( fc, status )
      if( fs2 .eq. AST__NULL )
     :    call stopit( 2001, ' ', status )

      if( abs( ast_getd( fs2, 'SkyRef(1)', status ) - 0.0001 ) .gt.
     :    1E-7 ) call stopit( 2001, ' ', status )
      if( abs( ast_getd( fs2, 'SkyRef(2)', status ) - 0.0001 ) .gt.
     :    1E-7 ) call stopit( 2001, ' ', status )

      call ast_end( status )
      call err_end( status )

      end


      subroutine test_fitsrounding( fc, status )
      implicit none

      include 'SAE_PAR'
      include 'AST_PAR'

      integer fc
      integer status
      character cards(10)*80

      if( status .ne. SAI__OK ) return

      if( ast_geti( fc, 'FitsRounding', status ) .ne. 10 ) then
         call stopit( 12314, ' ', status )
      end if

      cards(1) = 'DUMMY   =  1.0000010001'
      call ast_putfits( fc, cards(1), .false., status )
      call ast_clear( fc, 'Card', status )
      if( ast_findfits( fc, 'DUMMY', cards(1), .false., status ) ) then
         if( cards(1) .ne. 'DUMMY   =         1.0000010001' ) then
            call stopit( 12310, ' ', status )
         end if
      else
         call stopit( 12311, ' ', status )
      end if

      cards(1) = 'DUMMY   =  1.00000100001'
      call ast_putfits( fc, cards(1), .false., status )
      call ast_clear( fc, 'Card', status )
      if( ast_findfits( fc, 'DUMMY', cards(1), .false., status ) ) then
         if( cards(1) .ne. 'DUMMY   =             1.000001' ) then
            call stopit( 12312, ' ', status )
         end if
      else
         call stopit( 12313, ' ', status )
      end if

      cards(1) = 'DUMMY   =  1.0000019991'
      call ast_putfits( fc, cards(1), .false., status )
      call ast_clear( fc, 'Card', status )
      if( ast_findfits( fc, 'DUMMY', cards(1), .false., status ) ) then
         if( cards(1) .ne. 'DUMMY   =         1.0000019991' ) then
            call stopit( 12314, ' ', status )
         end if
      else
         call stopit( 12315, ' ', status )
      end if

      cards(1) = 'DUMMY   =  1.00000199991'
      call ast_putfits( fc, cards(1), .false., status )
      call ast_clear( fc, 'Card', status )
      if( ast_findfits( fc, 'DUMMY', cards(1), .false., status ) ) then
         if( cards(1) .ne. 'DUMMY   =             1.000002' ) then
            call stopit( 12316, ' ', status )
         end if
      else
         call stopit( 12317, ' ', status )
      end if

      cards(1) = 'DUMMY   =  -1.0000010000001'
      call ast_putfits( fc, cards(1), .false., status )
      call ast_clear( fc, 'Card', status )
      if( ast_findfits( fc, 'DUMMY', cards(1), .false., status ) ) then
         if( cards(1) .ne. 'DUMMY   =            -1.000001' ) then
            call stopit( 12318, ' ', status )
         end if
      else
         call stopit( 12319, ' ', status )
      end if

      call ast_seti( fc, 'FitsRounding', 5, status )
      call ast_clear( fc, 'Card', status )
      if( ast_findfits( fc, 'DUMMY', cards(1), .false., status ) ) then
         if( cards(1) .ne. 'DUMMY   =                 -1.0' ) then
            call stopit( 12320, ' ', status )
         end if
      else
         call stopit( 12321, ' ', status )
      end if

      call ast_clear( fc, 'FitsRounding', status )
      if( ast_geti( fc, 'FitsRounding', status ) .ne. 10 ) then
         call stopit( 12322, ' ', status )
      end if

      cards(1) = 'DUMMY   =  1.9999969999993E-02'
      call ast_putfits( fc, cards(1), .false., status )
      call ast_clear( fc, 'Card', status )
      if( ast_findfits( fc, 'DUMMY', cards(1), .false., status ) ) then
         if( cards(1) .ne. 'DUMMY   =           0.01999997' ) then
            call stopit( 12323, ' ', status )
         end if
      else
         call stopit( 12324, ' ', status )
      end if

      call ast_seti( fc, 'FitsRounding', 5, status )
      call ast_clear( fc, 'Card', status )
      if( ast_findfits( fc, 'DUMMY', cards(1), .false., status ) ) then
         if( cards(1) .ne. 'DUMMY   =                 0.02' ) then
            call stopit( 12325, ' ', status )
         end if
      else
         call stopit( 12326, ' ', status )
      end if

      call ast_seti( fc, 'FitsRounding', 10, status )
      cards(1) = 'DUMMY   =  1.9999969999993E-08'
      call ast_putfits( fc, cards(1), .false., status )
      call ast_clear( fc, 'Card', status )
      if( ast_findfits( fc, 'DUMMY', cards(1), .false., status ) ) then
         if( cards(1) .ne. 'DUMMY   =          1.999997E-8' ) then
            write(*,*) cards(1)
            call stopit( 12327, ' ', status )
         end if
      else
         call stopit( 12328, ' ', status )
      end if

      call ast_seti( fc, 'FitsRounding', 5, status )
      call ast_clear( fc, 'Card', status )
      if( ast_findfits( fc, 'DUMMY', cards(1), .false., status ) ) then
         if( cards(1) .ne. 'DUMMY   =               2.0E-8' ) then
            write(*,*) cards(1)
            call stopit( 12329, ' ', status )
         end if
      else
         call stopit( 12330, ' ', status )
      end if


      cards(1) = 'DUMMY   =  9.999999E-6'
      call ast_putfits( fc, cards(1), .false., status )
      call ast_clear( fc, 'Card', status )
      if( ast_findfits( fc, 'DUMMY', cards(1), .false., status ) ) then
         if( cards(1) .ne. 'DUMMY   =              10.0E-6' ) then
            write(*,*) cards(1)
            call stopit( 12331, ' ', status )
         end if
      else
         call stopit( 12332, ' ', status )
      end if

      cards(1) = 'DUMMY   =  -9.999999'
      call ast_putfits( fc, cards(1), .false., status )
      call ast_clear( fc, 'Card', status )
      if( ast_findfits( fc, 'DUMMY', cards(1), .false., status ) ) then
         if( cards(1) .ne. 'DUMMY   =                -10.0' ) then
            write(*,*) cards(1)
            call stopit( 12333, ' ', status )
         end if
      else
         call stopit( 12334, ' ', status )
      end if

      call ast_clear( fc, 'FitsROunding', status )
      call ast_clear( fc, 'Card', status )
      if( ast_findfits( fc, 'DUMMY', cards(1), .false., status ) ) then
         if( cards(1) .ne. 'DUMMY   =            -9.999999' ) then
            write(*,*) cards(1)
            call stopit( 12335, ' ', status )
         end if
      else
         call stopit( 12336, ' ', status )
      end if

      call ast_seti( fc, 'FitsROunding', 6, status )
      call ast_clear( fc, 'Card', status )
      if( ast_findfits( fc, 'DUMMY', cards(1), .false., status ) ) then
         if( cards(1) .ne. 'DUMMY   =                -10.0' ) then
            write(*,*) cards(1)
            call stopit( 12337, ' ', status )
         end if
      else
         call stopit( 12338, ' ', status )
      end if

      call ast_seti( fc, 'FitsROunding', 7, status )
      call ast_clear( fc, 'Card', status )
      if( ast_findfits( fc, 'DUMMY', cards(1), .false., status ) ) then
         if( cards(1) .ne. 'DUMMY   =            -9.999999' ) then
            write(*,*) cards(1)
            call stopit( 12339, ' ', status )
         end if
      else
         call stopit( 12340, ' ', status )
      end if

      call ast_seti( fc, 'fitsrounding', 6, status )
      cards(1) = 'DUMMY   =  -0.0019999912'
      call ast_putfits( fc, cards(1), .false., status )
      call ast_clear( fc, 'Card', status )
      if( ast_findfits( fc, 'DUMMY', cards(1), .false., status ) ) then
         if( cards(1) .ne. 'DUMMY   =        -0.0019999912' ) then
            write(*,*) cards(1)
            call stopit( 12341, ' ', status )
         end if
      else
         call stopit( 12342, ' ', status )
      end if

      call ast_seti( fc, 'fitsrounding', 5, status )
      call ast_clear( fc, 'Card', status )
      if( ast_findfits( fc, 'DUMMY', cards(1), .false., status ) ) then
         if( cards(1) .ne. 'DUMMY   =               -0.002' ) then
            write(*,*) cards(1)
            call stopit( 12343, ' ', status )
         end if
      else
         call stopit( 12344, ' ', status )
      end if








      call ast_clear( fc, 'FitsRounding', status )

      end
