      program testyamlchan
      implicit none
      include 'SAE_PAR'
      include 'AST_PAR'

      integer status
      integer obj, ch, obj2, ch2

      status = sai__ok

      call ast_begin( status )

c      call ast_watchmemory( 8200 );

      ch = ast_yamlchan( AST_NULL, AST_NULL, ' ', status )

      if( ast_getc( ch, 'YamlEncoding', status ) .ne. 'ASDF' ) then
         call stopit( -1, status )
      end if

      if( ast_test( ch, 'YamlEncoding', status ) ) then
         call stopit( -2, status )
      end if

      call ast_setc( ch, 'YamlEncoding', 'ASDF', status )

      if( .not. ast_test( ch, 'YamlEncoding', status ) ) then
         call stopit( -3, status )
      end if

      if( ast_getc( ch, 'YamlEncoding', status ) .ne. 'ASDF' ) then
         call stopit( -4, status )
      end if

      call ast_clear( ch, 'YamlEncoding', status )

      if( ast_test( ch, 'YamlEncoding', status ) ) then
         call stopit( -5, status )
      end if

      if( ast_getc( ch, 'YamlEncoding', status ) .ne. 'ASDF' ) then
         call stopit( -6, status )
      end if

      call ast_set( ch, 'SourceFile=imaging_wcs.asdf,'//
     :                  'SinkFile=yamltest.asdf', status )

      obj = ast_read( ch, status )
      call test1( obj, 'Read tests failed for imaging_wcs.asdf',
     :            status )

      if( ast_write( ch, obj, status ) .ne. 1 ) then
         call stopit( 13, status )
      end if

      call ast_clear( ch, 'SourceFile,SinkFile', status )
      call ast_set( ch, 'SourceFile=yamltest.asdf', status )
      call ast_clear( ch, 'YamlEncoding', status )

      obj2 = ast_read( ch, status )
      if( ast_getc( ch, 'YamlEncoding', status ) .ne. 'ASDF' ) then
         call stopit( 131, status )
      end if
      call test1( obj, 'Read tests failed for yamltest.asdf',
     :            status )



      ch2 = ast_channel( AST_NULL, AST_NULL, ' ', status )
      call ast_set( ch2, 'SourceFile=tanSipWcs.txt', status )
      obj = ast_read( ch2, status )
      call test2( obj, 'Read tests failed for tanSipWcs.txt',
     :            status )

      call ast_clear( ch, 'SourceFile,SinkFile', status )
      call ast_set( ch, 'SinkFile=tanSipWcs.asdf', status )
      if( ast_write( ch, obj, status ) .ne. 1 ) then
         call stopit( 14, status )
      end if

      call ast_clear( ch, 'SourceFile,SinkFile', status )
      call ast_set( ch, 'SourceFile=tanSipWcs.asdf', status )
      obj2 = ast_read( ch, status )

      call test2( obj2, 'Read tests failed for tanSipWcs.asdf',
     :            status )








      call ast_set( ch2, 'SourceFile=lsst_wcs.txt', status )
      obj = ast_read( ch2, status )

      call ast_set( ch, 'SinkFile=lsst_wcs.asdf', status )
      if( ast_write( ch, obj, status ) .ne. 1 ) then
         call stopit( 15, status )
      end if

      call ast_clear( ch, 'SinkFile', status )
      call ast_set( ch, 'SourceFile=lsst_wcs.asdf', status )
      obj2 = ast_read( ch, status )

      if( obj2 .eq. AST__NULL ) then
         call stopit( 16, status )
      end if

      call test3( obj, obj2, 'Tests failed for lsst_wcs.txt',
     :            status )





* Test NATIVE encoding.
      ch = ast_yamlchan( AST_NULL, AST_NULL, 'YamlEncoding=NATIVE ',
     :                   status )

      if( ast_getc( ch, 'YamlEncoding', status ) .ne. 'NATIVE' ) then
         call stopit( 17, status )
      end if

      if( .NOT. ast_test( ch, 'YamlEncoding', status ) ) then
         call stopit( 18, status )
      end if

      call ast_set( ch, 'SinkFile=nativetest.yaml', status )

      if( ast_write( ch, obj, status ) .ne. 1 ) then
         call stopit( 19, status )
      end if

      call ast_clear( ch, 'YamlEncoding', status )
      call ast_clear( ch, 'SinkFile', status )
      call ast_set( ch, 'SourceFile=nativetest.yaml', status )

      obj2 = ast_read( ch, status )

      if( obj2 .eq. AST__NULL ) then
         call stopit( 20, status )
      end if

      if( .not. ast_equal( obj2, obj, status )) then
         call stopit( 21, status )
      end if

      if( ast_getc( ch, 'YamlEncoding', status ) .ne. 'NATIVE' ) then
         call stopit( 22, status )
      end if




      call ast_end( status )
      call ast_activememory( ' ' )
      call ast_flushmemory( 1 )

      if( status .eq. sai__ok ) then
         call msg_out( ' ', ' All YamlChan tests passed', status )
      else
         call err_rep( ' ', 'YamlChan tests failed', status )
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



      subroutine test1( obj, text, status )

      implicit none
      include 'SAE_PAR'
      include 'AST_PAR'

      character text*(*)
      integer obj, status

      double precision xout( 6 ), yout( 6 )
      double precision xin( 6 ), yin( 6 )

      data xin / -0.25, -2.0, -1.0,  0.1, 1.5, 1.0 /,
     :     yin /   0.0,  0.0, -2.5, -0.2, 2.5, 2.5 /

      if( status .ne. sai__ok ) return

      call ast_tran2( obj, 6, xin, yin, .true., xout, yout, status )

      if( abs( xout( 1 ) - 0.0964300052D0 ) .gt. 1D-10) then
         call stopit( 1, status )
      else if( abs( xout( 2 ) - 0.0964301088D0 ) .gt. 1D-10) then
         call stopit( 2, status )
      else if( abs( xout( 3 ) - 0.0964301532D0 ) .gt. 1D-10) then
         call stopit( 3, status )
      else if( abs( xout( 4 ) - 0.0964299927D0 ) .gt. 1D-10) then
         call stopit( 4, status )
      else if( abs( xout( 5 ) - 0.0964297983D0 ) .gt. 1D-10) then
         call stopit( 5, status )
      else if( abs( xout( 6 ) - 0.0964298276D0 ) .gt. 1D-10) then
         call stopit( 6, status )
      else if( abs( yout( 1 ) - (-1.25754386340D0) ) .gt. 1D-10) then
         call stopit( 7, status )
      else if( abs( yout( 2 ) - (-1.25754399404D0) ) .gt. 1D-10) then
         call stopit( 8, status )
      else if( abs( yout( 3 ) - (-1.25754387354D0) ) .gt. 1D-10) then
         call stopit( 9, status )
      else if( abs( yout( 4 ) - (-1.25754383357D0) ) .gt. 1D-10) then
         call stopit( 10, status )
      else if( abs( yout( 5 ) - (-1.25754377796D0) ) .gt. 1D-10) then
         call stopit( 11, status )
      else if( abs( yout( 6 ) - (-1.25754381562D0) ) .gt. 1D-10) then
         call stopit( 12, status )
      end if

      if( status .ne. SAI__OK ) THEN
         call err_rep( ' ', text, status )
      end if

      end



      subroutine test2( obj, text, status )

      implicit none
      include 'SAE_PAR'
      include 'AST_PAR'

      character text*(*)
      integer obj, status, i

      double precision xout( 6 ), yout( 6 )
      double precision xin( 6 ), yin( 6 )
      double precision xrec( 6 ), yrec( 6 )
      double precision xout_t( 6 ), yout_t( 6 )

      data xin / -25.0, -200.0, -100.0,  10.0, 150.0, 100.0 /,
     :     yin /   0.0,  0.0, -250.0, -20.0, 250.0, 250.0 /

      data xout_t / 0.74087499500083731D0,  0.73971051729252979D0,
     :              0.74040832140984847D0,  0.74111042497286139D0,
     :              0.74200902465461160D0,  0.74167589835205705D0 /

      data yout_t / 0.76582017043755046D0,  0.76580407766915781D0,
     :              0.76461426513798736D0,  0.76572737656088874D0,
     :              0.76703478086374388D0,  0.76703043529783410D0 /

      if( status .ne. sai__ok ) return

      call ast_tran2( obj, 6, xin, yin, .true., xout, yout, status )
      do i = 1, 6
         if( abs( xout( i ) - xout_t( i ) ) .gt. 1D-12) then
            if(status.eq.SAI__OK) write(*,*) xout( i ), xout_t( i ),
     :                 abs( xout( i ) - xout_t( i ) )
            call stopit( i, status )
         else if( abs( yout( i ) - yout_t( i ) ) .gt. 1D-12) then
            if(status.eq.SAI__OK) write(*,*) yout( i ), yout_t( i ),
     :                 abs( yout( i ) - yout_t( i ) )
            call stopit( 6 + i, status )
         end if
      end do


      call ast_tran2( obj, 6, xout, yout, .false., xrec, yrec,
     :                status )
      do i = 1, 6
         if( abs( xin( i ) - xrec( i ) ) .gt. 1D-8) then
         if(status.eq.SAI__OK) write(*,*) xin( i ), xrec( i ),
     :                 abs( xin( i ) - xrec( i ) )
            call stopit( 12 + i, status )
         else if( abs( yin( i ) - yrec( i ) ) .gt. 1D-8) then
            if(status.eq.SAI__OK) write(*,*) yin( i ), yrec( i ),
     :                 abs( yin( i ) - yrec( i ) )
            call stopit( 18 + i, status )
         end if
      end do

      if( status .ne. SAI__OK ) THEN
         call err_rep( ' ', text, status )
      end if

      end



      subroutine test3( obj, obj2, text, status )

      implicit none
      include 'SAE_PAR'
      include 'AST_PAR'

      character text*(*)
      integer obj, obj2, status, i

      double precision xout( 6 ), yout( 6 )
      double precision xout2( 6 ), yout2( 6 )
      double precision xin( 6 ), yin( 6 )
      double precision xrec( 6 ), yrec( 6 )
      double precision xrec2( 6 ), yrec2( 6 )

      data xin / -25.0, -200.0, -100.0,  10.0, 150.0, 100.0 /,
     :     yin /   0.0,  0.0, -250.0, -20.0, 250.0, 250.0 /

      if( status .ne. sai__ok ) return

      call ast_tran2( obj, 6, xin, yin, .true., xout, yout, status )
      call ast_tran2( obj2, 6, xin, yin, .true., xout2, yout2, status )

      do i = 1, 6
         if( abs( xout( i ) - xout2( i ) ) .gt. 1D-12) then
            if(status.eq.SAI__OK) write(*,*) xout( i ), xout2( i ),
     :                 abs( xout( i ) - xout2( i ) )
            call stopit( i, status )
         else if( abs( yout( i ) - yout2( i ) ) .gt. 1D-12) then
            if(status.eq.SAI__OK) write(*,*) yout( i ), yout2( i ),
     :                 abs( yout( i ) - yout2( i ) )
            call stopit( 6 + i, status )
         end if
      end do


      call ast_tran2( obj, 6, xout, yout, .false., xrec, yrec,
     :                status )
      call ast_tran2( obj, 6, xout2, yout2, .false., xrec2, yrec2,
     :                status )

      do i = 1, 6
         if( abs( xrec( i ) - xrec2( i ) ) .gt. 1D-8) then
            if(status.eq.SAI__OK) write(*,*) xrec( i ), xrec2( i ),
     :                 abs( xrec( i ) - xrec2( i ) )
            call stopit( 12 + i, status )
         else if( abs( yrec( i ) - yrec2( i ) ) .gt. 1D-8) then
            if(status.eq.SAI__OK) write(*,*) yrec( i ), yrec2( i ),
     :                 abs( yrec( i ) - yrec2( i ) )
            call stopit( 18 + i, status )
         end if
      end do


      if( status .ne. SAI__OK ) THEN
         call err_rep( ' ', text, status )
      end if

      end



