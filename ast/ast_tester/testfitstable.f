      program testfitstable
      implicit none

      include 'AST_PAR'
      include 'AST_ERR'
      include 'SAE_PAR'
      include 'CNF_PAR'

      integer*8 kval, null
      integer status, table, table2, dims( 7 ), header, ival, l, nval,
     :        icard, colsize, pntr, head, clen, oldnull
      byte bytes(2,3),bval
      logical wasset, hasnull
      real rval
      character cval*30, text(3)*10, card*70
      character header1(18)*30
      character header2(20)*30

      data header1 / 'XTENSION= ''BINTABLE''',
     :               'BITPIX  =                    8',
     :               'NAXIS   =                    2',
     :               'NAXIS1  =                   14',
     :               'NAXIS2  =                    0',
     :               'PCOUNT  =                    0',
     :               'GCOUNT  =                    1',
     :               'TFIELDS =                    3',
     :               'TFORM1  = ''6B      ''',
     :               'TTYPE1  = ''BYTECOL ''',
     :               'TUNIT1  = ''ADU     ''',
     :               'TDIM1   = ''(2,3)   ''',
     :               'TFORM2  = ''1K      ''',
     :               'TTYPE2  = ''KINTCOL ''',
     :               'TUNIT2  = ''m       ''',
     :               'TFORM3  = ''0A      ''',
     :               'TTYPE3  = ''STRINGCOL''',
     :               'TDIM3   = ''(0,3)   ''' /


      data header2 / 'XTENSION= ''BINTABLE''',
     :               'BITPIX  =                    8',
     :               'NAXIS   =                    2',
     :               'NAXIS1  =                   44',
     :               'NAXIS2  =                    3',
     :               'PCOUNT  =                    0',
     :               'GCOUNT  =                    1',
     :               'TFIELDS =                    3',
     :               'TFORM1  = ''6B      ''',
     :               'TTYPE1  = ''BYTECOL ''',
     :               'TUNIT1  = ''ADU     ''',
     :               'TNULL1  =                  254',
     :               'TDIM1   = ''(2,3)   ''',
     :               'TFORM2  = ''1K      ''',
     :               'TTYPE2  = ''KINTCOL ''',
     :               'TUNIT2  = ''m       ''',
     :               'TNULL2  =  9223372036854775807',
     :               'TFORM3  = ''30A     ''',
     :               'TTYPE3  = ''STRINGCOL''',
     :               'TDIM3   = ''(10,3)  ''' /

c      call ast_watchmemory(483)

      status = sai__ok
      call err_mark( status )
      call ast_begin( status )

      table = ast_fitstable( AST__NULL, ' ', status )

      header = ast_gettableheader( table, status )
      if( ast_geti( header, 'NCard', status ) .ne. 8 ) then
         call stopit( status, 'FitsTable error 1' )
      else if( .not. ast_getfitsi( header, 'NAXIS', ival, status )) then
         call stopit( status, 'FitsTable error 2' )
      else if( ival .ne. 2 ) then
         call stopit( status, 'FitsTable error 3' )
      else if( .not. ast_getfitsi( header, 'NAXIS1', ival, status)) then
         call stopit( status, 'FitsTable error 4' )
      else if( ival .ne. 0 ) then
         call stopit( status, 'FitsTable error 5' )
      else if( .not. ast_getfitsi( header, 'NAXIS2', ival, status)) then
         call stopit( status, 'FitsTable error 6' )
      else if( ival .ne. 0 ) then
         call stopit( status, 'FitsTable error 7' )
      endif
      call ast_annul( header, status )


      call ast_addcolumn( table, 'JUNK', AST__OBJECTTYPE, 0, 0, 'm',
     :                    status )
      if( status .eq. AST__NAXIN ) then
         call err_annul( status )
      else if( status .eq. sai__ok ) then
         call stopit( status, 'FitsTable error 8' )
      endif

      dims( 1 ) = 2
      dims( 2 ) = 3
      call ast_addcolumn( table, 'BYTECOL', AST__BYTETYPE, 2, dims,
     :                    'ADU', status )

      call ast_addcolumn( table, 'KINTCOL', AST__KINTTYPE, 0, 0, 'm',
     :                    status )

      dims( 1 ) = 3
      call ast_addcolumn( table, 'STRINGCOL', AST__STRINGTYPE, 1, dims,
     :                    ' ', status )


      header = ast_gettableheader( table, status )
      icard = 0
      do while( ast_findfits( header, '%f', card, .true., status ) )
         icard = icard + 1
         if( icard .gt. 18 ) then
            call stopit( status, 'FitsTable error 9' )
         else if( card .ne. header1( icard ) ) then
            call stopit( status, 'FitsTable error 10' )
         end if
      end do
      if( icard .ne. 18 ) call stopit( status, 'FitsTable error 11' )


      table2 = ast_fitstable( header, ' ', status )
      call ast_annul( header, status )

      if( ast_geti( table2, 'Ncolumn', status ) .ne. 3 ) then
         call stopit( status, 'FitsTable error 11a' )
      end if



      if( ast_geti( table2, 'ColumnLength(bytecol)', status )
     :    .ne. 6 ) then
         call stopit( status, 'FitsTable error 11b' )
      endif

      if( ast_geti( table2, 'ColumnNdim(bytecol)', status )
     :    .ne. 2 ) then
         call stopit( status, 'FitsTable error 11c' )
      end if

      if( ast_geti( table2, 'ColumnType(bytecol)', status )
     :    .ne. AST__BYTETYPE ) then
         call stopit( status, 'FitsTable error 11d' )
      end if

      if( ast_getc( table2, 'ColumnUnit(bytecol)', status )
     :    .ne. 'ADU' ) then
         call stopit( status, 'FitsTable error 11e' )
      end if


      if( ast_geti( table2, 'ColumnLength(kintcol)', status )
     :    .ne. 1 ) then
         call stopit( status, 'FitsTable error 11f' )
      endif

      if( ast_geti( table2, 'ColumnNdim(kintcol)', status )
     :    .ne. 0 ) then
         call stopit( status, 'FitsTable error 11g' )
      end if

      if( ast_geti( table2, 'ColumnType(kintcol)', status )
     :    .ne. AST__KINTTYPE ) then
         call stopit( status, 'FitsTable error 11h' )
      end if

      if( ast_getc( table2, 'ColumnUnit(kintcol)', status )
     :    .ne. 'm' ) then
         call stopit( status, 'FitsTable error 11i' )
      end if


      if( ast_geti( table2, 'ColumnLength(StringCol)', status )
     :    .ne. 3 ) then
         call stopit( status, 'FitsTable error 11j' )
      endif

      if( ast_geti( table2, 'ColumnNdim(StringCol)', status )
     :    .ne. 1 ) then
         call stopit( status, 'FitsTable error 11k' )
      end if

      if( ast_geti( table2, 'ColumnType(StringCol)', status )
     :    .ne. AST__STRINGTYPE ) then
         call stopit( status, 'FitsTable error 11l' )
      end if

      if( ast_getc( table2, 'ColumnUnit(StringCol)', status )
     :    .ne. ' ' ) then
         call stopit( status, 'FitsTable error 11m' )
      end if



      bytes(1,1) = 0
      bytes(1,2) = 128
      bytes(1,3) = -127
      bytes(2,1) = 1
      bytes(2,2) = 127
      bytes(2,3) = -1
      call ast_mapput1b( table, 'BYTECOL(1)', 6, bytes, ' ', status )

      bytes(1,1) = 0
      bytes(1,2) = 0
      bytes(1,3) = 0
      bytes(2,1) = 1
      bytes(2,2) = 1
      bytes(2,3) = 1

      call ast_mapput1b( table, 'BYTECOL(2)', 6, bytes, ' ', status )

      kval = 10
      call ast_mapput0k( table, 'KINTCOL(2)', kval, ' ', status )

      kval = -10
      call ast_mapput0k( table, 'KINTCOL(3)', kval, ' ', status )

      text( 1 ) = 'hello'
      text( 2 ) = ' '
      text( 3 ) = 'goodbye'
      call ast_mapput1c( table, 'STRINGCOL(1)', 3, text, ' ', status )

      text( 1 ) = ' '
      text( 2 ) = ' '
      text( 3 ) = ' '
      call ast_mapput1c( table, 'STRINGCOL(3)', 3, text, ' ', status )

      if( ast_geti( table, 'Nrow', status ) .ne. 3 ) then
         call stopit( status, 'FitsTable error 12' )
      endif

      if( ast_geti( table, 'Ncolumn', status ) .ne. 3 ) then
         call stopit( status, 'FitsTable error 13' )
      endif

      head = ast_gettableheader( table, status )
      table2 = ast_fitstable( head, ' ', status )
      call ast_annul( head, status )

      colsize = ast_columnsize( table, 'stringcol', status )
      if( colsize .ne. 90 ) then
         call stopit( status, 'FitsTable error 13a' )
      else
         call psx_malloc( colsize, pntr, status )
         call ast_getcolumndata( table, 'StringCol', 0.0, 0.0D0,
     :                           colsize, %val( cnf_pval(pntr)),
     :                           colsize, status )
         if( colsize .ne. 9 ) call stopit( status,
     :                                     'FitsTable error 13b' )
         call checkstrings( table, %val( CNF_PVAL( pntr ) ), status )

         clen = ast_geti( table, 'ColumnLenC(StringCol)', status )
         if( clen .ne. 10 ) call stopit( status,
     :                                  'FitsTable error 13c' )

         colsize = 90
         call ast_putcolumndata( table2, 'StringCol', 10, colsize,
     :                           %val( CNF_PVAL( pntr ) ), status )
         call ast_getcolumndata( table2, 'StringCol', 0.0, 0.0D0,
     :                           colsize, %val( cnf_pval(pntr)),
     :                           colsize, status )

         if( colsize .ne. 9 ) call stopit( status,
     :                                     'FitsTable error 13d' )
         call checkstrings( table2, %val( CNF_PVAL( pntr ) ), status )

         call psx_free( pntr, status )
      end if

      colsize = ast_columnsize( table, 'bytecol', status )
      if( colsize .ne. 18 ) then
         call stopit( status, 'FitsTable error 13e' )
      else
         call psx_malloc( colsize, pntr, status )
         call ast_getcolumndata( table, 'BYTECOL', 0.0, 0.0D0, colsize,
     :                           %val( cnf_pval( pntr ) ), colsize,
     :                           status )
         if( colsize .ne. 18 ) call stopit( status,
     :                                      'FitsTable error 13f' )

         kval = 0
         null = ast_columnnullk( table, 'BYTECOL', .FALSE., kval,
     :                          wasset, hasnull, status )
         call checkbytes( table, %val( CNF_PVAL( pntr ) ), null,
     :                    status )

         colsize = 18
         call ast_putcolumndata( table2, 'byteCol', 0, colsize,
     :                           %val( CNF_PVAL( pntr ) ), status )
         oldnull = ast_columnnullk( table2, 'BYTECOL', .TRUE., null,
     :                             wasset, hasnull, status )
         call ast_getcolumndata( table2, 'BYTECOL', 0.0, 0.0D0, colsize,
     :                           %val( cnf_pval( pntr ) ), colsize,
     :                           status )
         if( colsize .ne. 18 ) call stopit( status,
     :                                      'FitsTable error 13g' )
         call checkbytes( table2, %val( CNF_PVAL( pntr ) ), null,
     :                    status )

         call psx_free( pntr, status )
      end if

      colsize = ast_columnsize( table, 'kintcol', status )
      if( colsize .ne. 24 ) then
         call stopit( status, 'FitsTable error 13h' )
      else
         call psx_malloc( colsize, pntr, status )
         call ast_getcolumndata( table, 'KINTCOL', 0.0, 0.0D0, colsize,
     :                           %val( cnf_pval( pntr ) ), colsize,
     :                           status )
         if( colsize .ne. 3 ) call stopit( status,
     :                                    'FitsTable error 13i' )
         kval = 0
         call checkints( table, %val( CNF_PVAL( pntr ) ),
     :                    ast_columnnullk( table, 'KINTCOL', .FALSE.,
     :                                     kval, wasset, hasnull,
     :                                     status ),
     :                    status )

         colsize = 24
         call ast_putcolumndata( table2, 'KINTCol', 0, colsize,
     :                           %val( CNF_PVAL( pntr ) ), status )

         call ast_getcolumndata( table2, 'KINTCOL', 0.0, 0.0D0, colsize,
     :                           %val( cnf_pval( pntr ) ), colsize,
     :                           status )
         if( colsize .ne. 3 ) call stopit( status,
     :                                    'FitsTable error 13j' )
         kval = 0
         call checkints( table2, %val( CNF_PVAL( pntr ) ),
     :                    ast_columnnullk( table2, 'KINTCOL', .FALSE.,
     :                                  kval, wasset, hasnull, status ),
     :                    status )

         call psx_free( pntr, status )
      end if


      call ast_addcolumn( table, 'REALCOL', AST__FLOATTYPE, 0, 0, ' ',
     :                    status )
      call ast_addcolumn( table2, 'REALCOL', AST__FLOATTYPE, 0, 0, ' ',
     :                    status )
      call ast_mapput0r( table, 'REALCOL(1)', -10.0, ' ', status )
      call ast_mapput0r( table, 'REALCOL(3)', 10.0, ' ', status )

      colsize = ast_columnsize( table, 'realcol', status )
      if( colsize .ne. 12 ) then
         call stopit( status, 'FitsTable error 13k' )
      else
         call psx_malloc( colsize, pntr, status )
         call ast_getcolumndata( table, 'REALCOL', -1.0, 0.0D0, colsize,
     :                           %val( cnf_pval( pntr ) ), colsize,
     :                           status )
         if( colsize .ne. 3 ) call stopit( status,
     :                                    'FitsTable error 13l' )
         call checkreals( table, %val( CNF_PVAL( pntr ) ), -1.0,
     :                    status )

         colsize = 12
         call ast_putcolumndata( table2, 'realCol', 0, colsize,
     :                           %val( CNF_PVAL( pntr ) ), status )


         call ast_mapremove( table2, 'REALCOL(2)', status )
         call ast_getcolumndata( table2, 'REALCOL', AST__NANR, 0.0D0,
     :                           colsize,
     :                           %val( cnf_pval( pntr ) ), colsize,
     :                           status )
         if( colsize .ne. 3 ) call stopit( status,
     :                                    'FitsTable error 13m' )
         call checkreals( table2, %val( CNF_PVAL( pntr ) ), AST__NANR,
     :                    status )

         call psx_free( pntr, status )
      end if

      call ast_removecolumn( table, 'REALCOL', status )

      call ast_mapremove( table, 'BYTECOL(3)', status )
      call ast_mapremove( table, 'KINTCOL(3)', status )
      call ast_mapremove( table, 'STRINGCOL(3)', status )

      if( ast_geti( table, 'Nrow', status ) .ne. 3 ) then
         call stopit( status, 'FitsTable error 14' )
      endif

      if( ast_geti( table, 'Ncolumn', status ) .ne. 3 ) then
         call stopit( status, 'FitsTable error 15' )
      endif




      header = ast_gettableheader( table, status )
      icard = 0
      do while( ast_findfits( header, '%f', card, .true., status ) )
         icard = icard + 1
         if( icard .gt. 20 ) then
            call stopit( status, 'FitsTable error 16' )
         else if( card .ne. header2( icard ) ) then
            call stopit( status, 'FitsTable error 17' )
         end if
      end do
      call ast_annul( header, status )
      if( icard .ne. 20 ) call stopit( status, 'FitsTable error 18' )



      kval = 0
      if( ast_columnnullk( table, 'BYTECOL', .FALSE., kval, wasset,
     :                    hasnull, status ) .ne. 254 ) then
         call stopit( status, 'FitsTable error 19' )
      else if( wasset ) then
         call stopit( status, 'FitsTable error 20' )
      else if( .not. hasnull ) then
         call stopit( status, 'FitsTable error 21' )
      end if



      call ast_purgerows( table, status )
      if( ast_geti( table, 'Nrow', status ) .ne. 2 ) then
         call stopit( status, 'FitsTable error 22' )
      endif

      if( ast_geti( table, 'Ncolumn', status ) .ne. 3 ) then
         call stopit( status, 'FitsTable error 23' )
      endif

      header = ast_gettableheader( table, status )
      if( ast_getfitsi( header, 'TNULL1', ival, status ) ) then
         call stopit( status, 'FitsTable error 24' )
      endif
      call ast_annul( header, status )

      kval = 11
      if( ast_columnnullk( table, 'BYTECOL', .TRUE., kval, wasset,
     :                    hasnull, status ) .ne. 11 ) then
         call stopit( status, 'FitsTable error 25' )
      else if( wasset ) then
         call stopit( status, 'FitsTable error 26' )
      else if( hasnull ) then
         call stopit( status, 'FitsTable error 27' )
      end if

      kval = 0
      if( ast_columnnullk( table, 'BYTECOL', .FALSE., kval, wasset,
     :                    hasnull, status ) .ne. 11 ) then
         call stopit( status, 'FitsTable error 28' )
      else if( .not. wasset ) then
         call stopit( status, 'FitsTable error 29' )
      else if( hasnull ) then
         call stopit( status, 'FitsTable error 30' )
      end if


      table2 = ast_copy( table, status )

      call ast_end( status )
      call err_rlse( status )

c      call ast_activememory( 'testfitstable' )
      call ast_flushmemory( 1 )

      if( status .eq. sai__ok ) then
         write(*,*) 'All FitsTable tests passed'
      else
         write(*,*) 'FitsTable tests failed'
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



      subroutine checkbytes( table, vals, null, status )
      implicit none
      include 'SAE_PAR'
      integer status, table, null, i
      byte vals( * ), ans( 12 ), bnull

      data ans / 0, 1, 128, 127, -127, -1, 0, 1, 0, 1, 0, 1 /

      if( status .ne. sai__ok ) return

      do i = 1, 12
         if( vals( i ) .ne. ans( i ) ) then
            write(*,*) 'i,vals,ans: ',i,' ',vals(i),' ',ans(i)
            call stopit( status, 'FitsTable error checkbytes 1' )
         end if
      end do

      bnull = null
      do i = 13, 18
         if( vals( i ) .ne. bnull ) then
            call stopit( status, 'FitsTable error checkbytes 2' )
         end if
      end do

      end

      subroutine checkints( table, vals, null, status )
      implicit none
      include 'SAE_PAR'
      integer status, table
      integer*8 vals( * ), null

      if( status .ne. sai__ok ) return

      if( vals( 1 ) .ne. null ) then
         call stopit( status, 'FitsTable error checkints 1' )
      end if

      if( vals( 2 ) .ne. 10 ) then
         call stopit( status, 'FitsTable error checkints 2' )
      end if

      if( vals( 3 ) .ne. -10 ) then
         call stopit( status, 'FitsTable error checkints 3' )
      end if

      end

      subroutine checkreals( table, vals, null, status )
      implicit none
      include 'SAE_PAR'
      include 'AST_PAR'
      integer status, table
      real vals( * ), null

      if( status .ne. sai__ok ) return

      if( vals( 1 ) .ne. -10.0 ) then
         call stopit( status, 'FitsTable error checkreals 1' )
      end if

      if( null .ne. AST__NANR ) then
         if( vals( 2 ) .ne. null ) then
            call stopit( status, 'FitsTable error checkreals 2a' )
         end if
      else
         if( .not. isnan( vals( 2 ) ) ) then
            call stopit( status, 'FitsTable error checkreals 2b' )
         end if
      end if

      if( vals( 3 ) .ne. 10.0 ) then
         call stopit( status, 'FitsTable error checkreals 3' )
      end if

      end

      subroutine checkstrings( table, vals, status )
      implicit none
      include 'SAE_PAR'
      integer status, table, i, start, end, j
      character ans( 9 )*10
      character vals*( * )

      data ans / 'hello', ' ', 'goodbye', '', '', '', ' ', ' ', ' ' /

      if( status .ne. sai__ok ) return

      start = 1
      end = 10

      do i = 1, 9

         do j = 1, 11
            if( vals( start + j - 1 : start + j - 1 ) .lt. ' ' ) then
               vals( start + j - 1 : start + j - 1 ) = ' '
            endif
         end do

         if( vals( start : end ) .ne. ans( i ) ) then
            write(*,*) 'start,end,i : ',start,' ',end,' ',i
            write(*,*) 'vals: ',vals( start : end )
            write(*,*) 'ans: ',ans( i )
            call stopit( status, 'FitsTable error checkstrings 1' )
         end if

         start = start + 10
         end = end + 10

      end do

      end




