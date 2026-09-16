      program testmocchan
      implicit none
      include 'SAE_PAR'
      include 'AST_PAR'
      include 'testmocchan_com'

      external sink, source

      integer status, i, moc, sf, reg1, ch, obj
      double precision point( 1 ), centre( 2 )

      status = sai__ok

      call ast_begin( status )

      moc = ast_moc( 'maxorder=9', status )
      call ast_addcell( moc, AST__OR, 7, 1000_8, status )
      call ast_addcell( moc, AST__OR, 7, 1001_8, status )
      call ast_addcell( moc, AST__OR, 7, 1002_8, status )
      call ast_addcell( moc, AST__OR, 7, 997_8, status )
      call ast_addcell( moc, AST__OR, 6, 500_8, status )
      ch = ast_mocchan( source, sink, ' ', status )
      ifile = 1
      filelen( ifile ) = 0
      if( ast_write( ch, moc, status ) .ne. 1 ) then
         call stopit( 'Error 1', status )
      end if

      if( files( ifile, 1 ) .ne. '6/500 7/997,1000-1002 9/' ) then
         call stopit( 'Error 2', status )
      endif

      if( ast_test( ch, 'MocFormat', status ) ) then
         call stopit( 'Error 3', status )
      end if

      iline = 1
      obj = ast_read( ch, status )
      if( obj .eq. ast__null ) then
         call stopit( 'Error 4', status )
      end if

      if( .not. ast_equal( obj, moc, status ) ) then
         call stopit( 'Error 5', status )
      end if

      if( .not. ast_test( ch, 'MocFormat', status ) ) then
         call stopit( 'Error 6', status )
      end if

      if( ast_getc( ch, 'MocFormat', status ) .ne. 'STRING') then
         call stopit( 'Error 7', status )
      end if


      call ast_setc( ch, 'MocFormat', 'json', status )
      ifile = 1
      filelen( ifile ) = 0
      if( ast_write( ch, moc, status ) .ne. 1 ) then
         call stopit( 'Error 8', status )
      end if

      if( files( ifile, 1 ) .ne.
     :    '{"6":[500],"7":[997,1000,1001,1002],"9":[]}' ) then
         call stopit( 'Error 9', status )
      endif

      call ast_clear( ch, 'MocFormat', status )

      iline = 1
      obj = ast_read( ch, status )
      if( obj .eq. ast__null ) then
         call stopit( 'Error 10', status )
      end if

      if( .not. ast_equal( obj, moc, status ) ) then
         call stopit( 'Error 11', status )
      end if

      if( ast_getc( ch, 'MocFormat', status ) .ne. 'JSON') then
         call stopit( 'Error 12', status )
      end if

      call ast_clear( ch, 'MocFormat', status )



      moc = ast_moc( 'maxorder=15,minorder=12', status )
      sf = ast_skyframe( 'system=icrs', status )
      centre( 1 ) = 1.0D0
      centre( 2 ) = 1.0D0
      point( 1 ) = 0.01D0
      reg1 = ast_circle( sf, 1, centre, point, AST__NULL, ' ', status )
      call ast_addregion( moc, AST__OR, reg1, status )

      ifile = 1
      filelen( ifile ) = 0
      if( ast_write( ch, moc, status ) .ne. 1 ) then
         call stopit( 'Error 13', status )
      end if

      iline = 1
      obj = ast_read( ch, status )
      if( obj .eq. ast__null ) then
         call stopit( 'Error 14', status )
      end if

      if( .not. ast_equal( obj, moc, status ) ) then
         call stopit( 'Error 15', status )
      end if


      call ast_setc( ch, 'MocFormat', 'json', status )

      ifile = 1
      filelen( ifile ) = 0
      if( ast_write( ch, moc, status ) .ne. 1 ) then
         call stopit( 'Error 16', status )
      end if

      iline = 1
      obj = ast_read( ch, status )
      if( obj .eq. ast__null ) then
         call stopit( 'Error 17', status )
      end if

      if( .not. ast_equal( obj, moc, status ) ) then
         call stopit( 'Error 18', status )
      end if






      call ast_end( status )

      if( status == sai__ok ) then
         write(*,*) 'All MocChan tests passed'
      else
         write(*,*) 'MocChan tests failed'
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

*
*  Reads line "iline" from internal file "ifile" and returns it to AST using
*  the AST_PULINE routine. Then increments "iline" ready for next time.
*
      subroutine source( status )
      implicit none

      include 'testmocchan_com'

      integer status, l, chr_len

      if( iline .le. filelen( ifile ) ) then
         l = chr_len( files(ifile,iline) )
         call ast_putline( files(ifile,iline), l, status )
         iline = iline + 1
      else
         call ast_putline( ' ', -1, status )
      end if

      end

*
*  Append a line obtained using ast_getline function to the end of the
*  internal file indicated by "ifile", and increment the file length.
*
      subroutine sink( status )
      implicit none

      include 'testmocchan_com'

      integer status, l
      character line*(linelen)

      call ast_getline( line, l, status )
      if( l .gt. 0 ) then

         if( filelen( ifile ) .ge. mxline ) then
            stop 'TestMocChan: Too many lines sent to sink function'

         else if( l .ge. linelen ) then
            stop 'TestMocChan: Text probably truncated in sink function'

         else
            filelen( ifile ) = filelen( ifile ) + 1
            files( ifile, filelen( ifile ) ) = line(:l)
         end if

      end if

      end

