      program draw3d

*  Usage:
*     draw3d [[file=]file (<stdin>)] [[device=]device (/xserve)]
*            [[prompt=y(es)|n(o)] (no)]

*  Description:
*     An interactive tool that uses the AST 3D plotting facilities
*     (layed on pgplot) to allow the user to draw various 3D graphics
*     related to spherical geometry. If run without command line options,
*     the user is prompted repeatedly for new commands, which are
*     executed immediately. There is a help command:
*
*     % draw3d
*     draw3d> help
*     ...
*
*     Alternatively, commands can be read from a text file:
*
*     % draw3d draw3d-test1.txt



      implicit none
      include 'SAE_PAR'
      include 'AST_PAR'

      integer coms
      common /coms/ coms

      integer status, unit, model, pars
      integer chr_len, pgbeg
      real lbnd(3), ubnd(3), eye(3), up(3)
      character get_argc*50
      character device*30, file*60
      logical get_argl,pg3d_setup,pg3d_seteye,pg3d_autocamera


*  Initialise inherited status and start a new AST context.
      status = sai__ok
      call ast_begin( status )

*  Parse any command line arguments and store them in a KeyMap (stored
*  within common).
      call read_command_line( status )

*  Get the graphics device name from the args KeyMap and open it with
*  PGPLOT.
      device = get_argc( 'DEVICE', '/XSERVE', status )
      if( pgbeg( 0, device, 1, 1 ) .ne. 1 ) then
         write(*,*) 'Failed to open PGPLOT device ',device
         return
      end if

*  Stop PGPLOT prompting before creating a new plot.
      call pgask( .false. )

*  Start with a clean sheet.
      call pgpage

*  Ensure the 2D graphics surface is a unit square.
      call pgwnad( 0.0, 1.0, 0.0, 1.0 )

*  Set up a default camera for viewing a unit box in 3D world coords.
      lbnd( 1 ) = -1.0
      lbnd( 2 ) = -1.0
      lbnd( 3 ) = -1.0
      ubnd( 1 ) = 1.0
      ubnd( 2 ) = 1.0
      ubnd( 3 ) = 1.0
      if( .not. pg3d_autocamera( lbnd, ubnd ) ) then
         write(*,*) 'Failed to set up the 3D auto-camera'
         return
      end if

*  Get the name of the file holding the drawing instructions, and decide
*  what unit to use when reading from it.
      file = get_argc( 'FILE', '<stdin>', status )
      if( file .ne. '<stdin>' ) then
         unit = 10
      else
         unit = 5
      end if

*  Create a KeyMap to hold the list of commands that have been executed.
      model = ast_keymap( ' ', status )

*  Create a KeyMap to hold current variable values.
      pars = ast_keymap( ' ', status )

*  Create a KeyMap to hold command definitions
      coms = ast_keymap( ' ', status )

*  Read and execute commands from the file.
      call read_file( file, unit, model, pars, status )

*  If requested, continue reading commands from stdin.
      if( unit .ne. 5 .and.
     :    get_argl( 'PROMPT', .false., status ) ) then
         call read_file( ' ', 5, model, pars, status )
      endif

*  Close down PGPLOT and the AST context
      call pgend
      call ast_end( status )

      end



      subroutine g3d_line( pars, bad, n, x, y, z, status )
      implicit none
      include 'SAE_PAR'
      include 'PRM_PAR'
      integer pars, n, status, geti, icol, istart, iend, nn
      logical junk, ast_g3dline, bad
      real x(n), y(n), z(n)

      if( status .ne. sai__ok ) return

      icol = geti( pars, 'LINE_COL', 1, status )
      if( icol .ge. 1 ) then
         call pgsci( icol )
         call pgslw( geti( pars, 'LINE_WID', 3, status ) )

         if( bad ) then

            istart = 1
            do while( istart .lt. n )
               do while( ( x( istart ) .eq. VAL__BADR .or.
     :                     y( istart ) .eq. VAL__BADR .or.
     :                     z( istart ) .eq. VAL__BADR ) .and.
     :                   istart .lt. n )
                  istart = istart + 1
               end do

               iend = istart + 1
               do while( x( iend ) .ne. VAL__BADR .and.
     :                   y( iend ) .ne. VAL__BADR .and.
     :                   z( iend ) .ne. VAL__BADR .and.
     :                   iend .le. n )
                  iend = iend + 1
               end do
               iend = iend - 1

               nn = iend - istart + 1
               if( nn .gt. 1 ) then
                  junk = ast_g3dline( nn, x(istart), y(istart),
     :                                z(istart) )
               end if

               istart = iend + 1
            end do

         else
            junk = ast_g3dline( n, x, y, z )
         end if

      end if

      end



      subroutine g3d_text( pars, t, r, j, u, n, status )
      implicit none
      include 'SAE_PAR'
      character*(*) t, j
      real r(3), u(3), n(3)
      integer pars, junk, ast_g3dtext, status, geti, icol
      if( status .ne. sai__ok ) return

      icol = geti( pars, 'TEXT_COL', 1, status )
      if( icol .ge. 1 ) then
         call pgsci( icol )
         call pgslw( geti( pars, 'TEXT_WID', 3, status ) )
         junk = ast_g3dtext( t, r, j, u, n )
      end if

      end


      subroutine g3d_mark( pars, x, y, z, itype, status )
      implicit none
      include 'SAE_PAR'
      real x, y, z, norm(3)
      integer pars, ast_g3dtext, status, geti, icol, itype
      logical junk, ast_g3dmark

      if( status .ne. sai__ok ) return

      icol = geti( pars, 'MARK_COL', 1, status )
      if( icol .ge. 1 ) then
         call pgsci( icol )
         call pgslw( geti( pars, 'MARK_WID', 3, status ) )
         norm(1) = x
         norm(2) = y
         norm(3) = z
         junk = ast_g3dmark( 1, x, y, z, itype, norm )
      end if

      end


      subroutine pos_key( ipos, key )
      implicit none
      integer ipos, iat
      character key*(*)
      key = ' '
      key( : 4 ) = 'ITEM'
      iat = 4
      call chr_puti( ipos, key, iat )
      end


      subroutine read_command_line( status )
      implicit none
      include 'SAE_PAR'
      include 'AST_PAR'

      integer args
      common /args/ args

      integer status, i, npos, equals
      character arg*80, key*30

      args = AST__NULL
      if( status .ne. sai__ok ) return

      args = ast_keymap ( ' ', status )

      npos = 0

      do i = 1, iargc()
         call getarg( i, arg )
         equals = index( arg, '=' )

         if( equals .gt. 1 ) then
            key = arg( : equals - 1 )
            call chr_ucase( key )
         else
            npos = npos + 1
            call pos_key( npos, key )
         end if

         call ast_mapput0c( args, key, arg( equals + 1 : ),
     :                      ' ', status )

      end do

      call fix_keys( args, "FILE DEVICE PROMPT", 1, status )

      end


      integer function get_argi( name, def, status )
      implicit none
      include 'SAE_PAR'

      integer args
      common /args/ args

      integer status
      integer def, geti
      character name*(*)

      get_argi = geti( args, name, def, status )

      end


      real function get_argr( name, def, status )
      implicit none
      include 'SAE_PAR'

      integer args
      common /args/ args

      integer status
      real def, getr
      character name*(*)

      get_argr = getr( args, name, def, status )

      end

      character*(*) function get_argc( name, def, status )
      implicit none
      include 'SAE_PAR'

      integer args
      common /args/ args

      integer status
      character def*(*), getc*120
      character name*(*)

      get_argc = getc( args, name, def, status )


      end

      logical function get_argl( name, def, status )
      implicit none
      include 'SAE_PAR'

      integer args
      common /args/ args

      integer status
      logical def, getl
      character name*(*)

      get_argl = getl( args, name, def, status )

      end


      integer function myindex( text, substring, start, text_length )
*+
*  Purpose:
*     Returns the index of the first occurence of "substring" in "text",
*     starting the search at index "start". If no match is found, the value
*     "text_length + 1 " is returned.
*-
      implicit none
      character text*(*), substring*(*)
      integer start, text_length

      myindex = index( text( start : ), substring )
      if( myindex .eq. 0 ) then
         myindex = text_length + 1
      else
         myindex = myindex + start - 1
      end if

      end


      integer function getchoice( km, name, list, def, status )
     :        result(ival)
      implicit none
      include 'SAE_PAR'

      integer km, status
      character name*(*), list*(*), def*(*)
      character cval*80, getc*80

      ival = 0
      if( status .ne. sai__ok ) return

      cval = getc( km, name, def, status )
      call find( cval, list, 'option', ival, status )

      end


      recursive integer function geti( km, name, def, status )
     :     result(ival)
      implicit none
      include 'SAE_PAR'
      include 'AST_PAR'

      integer km, status, pars, pars_km
      integer def
      character name*(*), cdef*10, cval*30, getc*30

      ival = def
      if( status .ne. sai__ok ) return

      cdef = '##@@;l:~'
      cval = getc( km, name, cdef, status )

      if( cval .eq. cdef ) then
         ival = def

      else if( status .eq. sai__ok ) then
         call chr_ctoi( cval, ival, status )
         if( status .ne. sai__ok ) then
            status = sai__ok
            pars = pars_km( km, status )
            if( pars .ne. ast__null ) then
               call chr_ucase( cval )
               ival = geti( pars, cval, def, status )
               call ast_annul( pars, status )
            else
               ival = def
            end if
         end if
      end if

      end

      recursive real function getr( km, name, def, status )
     :     result(rval)
      implicit none
      include 'SAE_PAR'
      include 'AST_PAR'

      integer km, status, pars, pars_km
      real def
      character name*(*), cdef*10, cval*30, getc*30

      rval = def
      if( status .ne. sai__ok ) return

      cdef = '##@@;l:~'
      cval = getc( km, name, cdef, status )

      if( cval .eq. cdef ) then
         rval = def

      else if( status .eq. sai__ok ) then
         call chr_ctor( cval, rval, status )
         if( status .ne. sai__ok ) then
            status = sai__ok
            pars = pars_km( km, status )
            if( pars .ne. ast__null ) then
               call chr_ucase( cval )
               rval = getr( pars, cval, def, status )
               call ast_annul( pars, status )
            else
               rval = def
            end if
         end if
      end if

      end


      recursive logical function getl( km, name, def, status )
     :     result(lval)
      implicit none
      include 'SAE_PAR'
      include 'AST_PAR'

      integer km, status, pars, pars_km
      logical def
      character name*(*), cdef*10, cval*30, getc*30

      lval = def
      if( status .ne. sai__ok ) return

      cdef = '##@@;l:~'
      cval = getc( km, name, cdef, status )

      if( cval .eq. cdef ) then
         lval = def

      else if( status .eq. sai__ok ) then
         call chr_ctol( cval, lval, status )
         if( status .ne. sai__ok ) then
            status = sai__ok
            pars = pars_km( km, status )
            if( pars .ne. ast__null ) then
               call chr_ucase( cval )
               lval = getl( pars, cval, def, status )
               call ast_annul( pars, status )
            else
               lval = def
            end if
         end if
      end if

      end


      character*(*) function getc( km, name, def, status )
      implicit none
      include 'SAE_PAR'
      include 'AST_PAR'

      integer km, status, l
      character name*(*), def*(*)

      getc = def

      if( status .ne. sai__ok ) return

      if( .not. ast_mapget0c( km, name, getc, l, status ) ) then
         getc = def
      end if

      end



      recursive subroutine fix_keys( km, list, first, status )
      implicit none
      include 'SAE_PAR'
      include 'AST_PAR'

      integer coms
      common /coms/ coms

      integer km, status, ipos, i, j, llen, chr_len, type, l, aval,
     :        first, myindex, nkey, ikey, tkm, ckm, k
      character list*(*), c*1, pname*30, key*20, cval*120, getc*30
      logical add

*  Check inherited status
      if( status .ne. sai__ok ) return

*  Create a temporary KeyMap to hold the supplied parameter names.
      tkm = ast_keymap( ' ', status )

*  Initialise the index of the first positional value to use in the
*  keymap.
      ipos = first

*  If the coms keymap does not yet hold a definition of this command,
*  create a new keymap in which a deifnition can be stored.
      add = .false.
      if( first .gt. 1 ) then
         cval = getc( km, 'COMMAND', ' ', status )
         if( cval .ne. ' '. and.
     :      .not. ast_maphaskey( coms, cval, status ) ) then
            ckm = ast_keymap( ' ', status )
            call ast_mapput0a( coms, cval, ckm, ' ', status )
            add = .true.
         end if
      end if

*  Loop round all characters in the supplied list of parameter names.
      k = 1
      i = 1
      llen = chr_len( list )
      do while( i .le. llen )
         c = list( i : i )

*  Skip spaces.
         if( c .ne. ' ' ) then

*  Now we have found a non-blank character, find the next space.
            j = myindex( list, ' ', i, llen )

*  Store the parameter name.
            pname = list( i : j - 1 )
            call ast_mapput0c( tkm, list( i : j - 1 ), ' ', ' ',
     :                         status )

*  Also add it to the command definition if required. Each entry has a
*  key "ITEM<n>" and a value equal to the name of the n'th position
*  parameter.
            if( add ) then
               call pos_key( k, key )
               call ast_mapput0c( ckm, key, list( i : j - 1 ), ' ',
     :                            status )
               k = k + 1
            end if

*  Start the next search at the end of the parameter name.
            i = j - 1

*  If the KeyMap does not hold a value for this parameter name...
            if( .not. ast_maphaskey( km, pname, status ) ) then

*  We will use the next positional value in the keymap as the parameter
*  value. Get the key used for for the next positional value.
               call pos_key( ipos, key )
               ipos = ipos + 1

*  If the KeyMap contains a value for this positional key, get its data
*  type.
               if( ast_maphaskey( km, key, status ) ) then
                  type = ast_maptype( km, key, status )

*  If the value is another KeyMap, get a pointer to the KeyMap and store
*  it in the supplied keymap with the correct parameter name.
                  if( type .eq. AST__OBJECTTYPE ) then
                     if( ast_mapget0a( km, key, aval, status ) ) then
                        call putkm( km, pname, aval, status )
                        call ast_annul( aval, status )
                     end if

*  Do the same for other data types, accessing the value as a string.
                  else
                     if( ast_mapget0c( km, key, cval, l, status ) ) then
                        call ast_mapput0c( km, pname, cval( : l ), ' ',
     :                                     status )
                     end if
                  end if

*  Remove the entry for the positional key.
                  call ast_mapremove( km, key, status )
               end if
            end if
         end if

*  Move on to the next character in the supplied list of parameter names.
         i = i + 1
      end do

*  Check that every key in the KeyMap is a known parameter.
      if( first .gt. 1 ) then
         nkey = ast_mapsize( km, status )
         do ikey = 1, nkey
            key = ast_mapkey( km, ikey, status )
            if( key .ne. 'COMMAND' .and. key .ne. 'PARS' ) then
               if( .not. ast_maphaskey( tkm, key, status ) .and.
     :             status .eq. sai__ok ) then
                  status = sai__error
                  call msg_setc( 'N', key )
                  call err_rep( ' ', 'Unknown paramater ''^N'' '//
     :                          'supplied.', status )
               end if
            end if
         end do
      end if

      call ast_annul( tkm, status )

*  NITEM holds the number of parameters that the command has.
      if( add ) then
         call ast_mapput0i( ckm, 'NITEM', k, ' ', status )
         call ast_annul( ckm, status )
      end if

      end


      subroutine find( value, list, w, icom, status )
      implicit none
      include 'SAE_PAR'

      character value*(*), list*(*), c*1, name*30, w*(*),
     :          matches*120
      integer icom, status, i, j, k, llen, myindex, chr_len, nmatch,
     :        vlen, imatches

      icom = 0
      if( status .ne. sai__ok ) return

      call chr_ucase( value )

      nmatch = 0
      imatches = 0
      matches = ' '
      k = 1
      i = 1
      llen = chr_len( list )
      vlen = chr_len( value )
      do while( i .le. llen )
         c = list( i : i )
         if( c .ne. ' ' ) then
            j = myindex( list, ' ', i, llen )
            name = list( i : j - 1 )

            if( index( name, value(:vlen) ) .eq. 1 ) then
               nmatch = nmatch + 1
               icom = k
               if( imatches .gt. 0 ) imatches = imatches + 1
               call chr_appnd( name, matches, imatches )
            end if

            i = j - 1
            k = k + 1
         end if
         i = i + 1
      end do

      if( nmatch .eq. 0 ) then
         icom = 0
         write( *, * ) 'Unknown ',w,': ', value( : chr_len( value ) )
      else if( nmatch .gt. 1 ) then
         icom = 0
         write( *, * ) 'Ambiguous ',w,': ', value( : chr_len( value ) )
         write( *, * ) '   ',matches( : imatches)
      else
         value = matches( : imatches)
      end if

      end


      subroutine clean( line, status )
      implicit none
      include 'SAE_PAR'

      character line*(*)
      integer status, hash, iw, ir, tlen, equal,chr_len
      logical skip

      if( status .ne. sai__ok ) return

*  Remove any trailing comment from the line of text.
      hash = index( line, '#' )
      if( hash .gt. 0 ) line( hash : ) = ' '

*  Remove any leading blanks from the line of text.
      call chr_ldblk( line )

*  Remove spaces from both sides of all equal signs
      tlen = chr_len( line )
      iw = 1
      ir = 1
      skip = .false.

      do while( ir .le. tlen )
         if( line( ir : ir ) .eq. '=' ) then
            skip = .true.
            line( iw : iw ) = line( ir : ir )
            iw = iw + 1

         else if( line( ir : ir ) .eq. ' ' ) then
            if( .not. skip ) then
               equal = index( line( ir : ), '=' )
               if( equal .ne. 0 ) then
                  if( line( ir : equal + ir - 2 ) .eq. ' ' ) then
                     ir = equal + ir - 2
                  else
                    line( iw : iw ) = line( ir : ir )
                    iw = iw + 1
                  end if
               else
                  line( iw : iw ) = line( ir : ir )
                  iw = iw + 1
               end if
            end if

         else
            skip = .false.
            line( iw : iw ) = line( ir : ir )
            iw = iw + 1
         end if

         ir = ir + 1

      end do

      line( iw : ) = ' '

      end


      subroutine axes( km, origin, axlen, tx, ty, tz, order, phi,
     :                 theta, psi, status )
*+
*  Purpose:
*    Draw a set of annotated axes with arbitrary origin and axis
*    orientations.
*
*  Arguments:
*    km = integer
*       Top level KeyMap holding global parameters
*    origin = real(3)
*       Coords of the position at which to place the axes origin.
*    axlen = real
*       Length of the axis arrows.
*    tx = character*(*)
*       Label for x axis. If blank then the x axis arrow is not drawn.
*    ty = character*(*)
*       Label for y axis. If blank then the y axis arrow is not drawn.
*    tz = character*(*)
*       Label for z axis. If blank then the z axis arrow is not drawn.
*    order = character*(*)
*       The name of a pre-defined spherical coord system set up using the
*       SPHSYS command. If no system is defined with the supplied name,
*       then the string should be up to 3 characters being some combination
*       of 'X', 'Y' and 'Z', indicating the axis to which each of the phi,
*       theta and psi angles refer.
*    phi = real
*       The first rotation angle. Ignored if 'order' is the name of a
*       pre-defined spherical coordinate system.
*    theta = real
*       The second rotation angle. Ignored if 'order' is the name of a
*       pre-defined spherical coordinate system.
*    psi = real
*       The third rotation angle. Ignored if 'order' is the name of a
*       pre-defined spherical coordinate system.
*-
      implicit none
      include 'SAE_PAR'

      character order*(*),tx*(*), ty*(*), tz*(*), src*30
      real phi, theta, psi
      double precision rmat(3,3),va,vb
      real axlen, a1, a2, mat(3,3),x(10),y(10),z(10),r(3),u(3),n(3),
     :     origin(3)
      integer km, status
      logical ok

*  Check inherited status.
      if( status .ne. sai__ok ) return

*  Set arrow head displacements.
      a1 = 0.05
      a2 = a1*0.6

*  Attempt to get the 3x3 rotation matrix that transforms from the named
*  spherical coordinate system to the default Cartesian system.
      call sphsysmat( km, .true., order, ok, rmat, src, status )

*  If no definition was found with the requested name, treat the name as
*  a set of X/Y/Z characters indicating the order of rotations. Find the
*  rotation matrix that implements the requested rotations.
      if( .not. ok ) then
         call deuler( order, dble(phi), dble(theta), dble(psi), rmat,
     :                ok )
         if( .not. ok ) return
      end if
      mat(1,1) = rmat(1,1)
      mat(1,2) = rmat(1,2)
      mat(1,3) = rmat(1,3)
      mat(2,1) = rmat(2,1)
      mat(2,2) = rmat(2,2)
      mat(2,3) = rmat(2,3)
      mat(3,1) = rmat(3,1)
      mat(3,2) = rmat(3,2)
      mat(3,3) = rmat(3,3)

* Draw the X axis so long as the label is not blank.
      if( tx .ne. ' ' ) then

*  Axis the line
         x(1) = axlen
         y(1) = 0.0
         z(1) = 0.0
         x(2) = -axlen
         y(2) = 0.0
         z(2) = 0.0
         call mxv( mat, 2, x, y, z, origin )
         call g3d_line( km, .false., 2, x, y, z, status )

*  Draw the arrow head.
         x(1) = axlen - a1
         y(1) = -a2
         z(1) = 0.0
         x(2) = axlen
         y(2) = 0.0
         z(2) = 0.0
         x(3) = axlen - a1
         y(3) = a2
         z(3) = 0.0
         call mxv( mat, 3, x, y, z, origin )
         call g3d_line( km, .false., 3, x, y, z, status )

*  Draw the label.
         r(1) = axlen + a1
         r(2) = 0.0
         r(3) = a2
         u(1) = 0.0
         u(2) = 0.0
         u(3) = 1.0
         n(1) = 0.0
         n(2) = 0.0
         n(3) = 0.0

         call mxv2( mat, r, .true., origin )
         call g3d_text( km, tx, r, 'BR', u, n, status )
      end if

* Draw the Y axis in the same way.
      if( ty .ne. ' ' ) then

         x(1) = 0.0
         y(1) = -axlen
         z(1) = 0.0
         x(2) = 0.0
         y(2) = axlen
         z(2) = 0.0
         call mxv( mat, 2, x, y, z, origin )
         call g3d_line( km, .false., 2, x, y, z, status )

         x(1) = -a2
         y(1) = axlen - a1
         z(1) = 0.0
         x(2) = 0.0
         y(2) = axlen
         z(2) = 0.0
         x(3) = a2
         y(3) = axlen - a1
         z(3) = 0.0
         call mxv( mat, 3, x, y, z, origin )
         call g3d_line( km, .false., 3, x, y, z, status )

         r(1) = 0.0
         r(2) = axlen + a1
         r(3) = a2
         u(1) = 0.0
         u(2) = 0.0
         u(3) = 1.0
         n(1) = 0.0
         n(2) = 0.0
         n(3) = 0.0

         call mxv2( mat, r, .true., origin )
         call g3d_text( km, ty, r, 'BR', u, n, status )
      end if

* Draw the Y axis in the same way.
      if( tz .ne. ' ' ) then
         x(1) = 0.0
         y(1) = 0.0
         z(1) = axlen
         x(2) = 0.0
         y(2) = 0.0
         z(2) = 0.0
         call mxv( mat, 2, x, y, z, origin )
         call g3d_line( km, .false., 2, x, y, z, status )

         x(1) = -a2
         y(1) = 0.0
         z(1) = axlen - a1
         x(2) = 0.0
         y(2) = 0.0
         z(2) = axlen
         x(3) = a2
         y(3) = 0.0
         z(3) = axlen - a1
         call mxv( mat, 3, x, y, z, origin )
         call g3d_line( km, .false., 3, x, y, z, status )

         r(1) = 0.0
         r(2) = 0.0
         r(3) = axlen + a1
         u(1) = 0.0
         u(2) = 0.0
         u(3) = 1.0
         n(1) = 0.0
         n(2) = 0.0
         n(3) = 0.0

         call mxv2( mat, r, .true., origin )
         call g3d_text( km, tz, r, 'CR', u, n, status )
      end if
      end



*  Attempt to get the 3x3 rotation matrix that transforms from the named
*  spherical coordinate system to the default Cartesian system.
      recursive subroutine sphsysmat( pars, defsrc, name, there, mat,
     :                                src, status )
      implicit none
      include 'SAE_PAR'
      include 'AST_PAR'

      logical defsrc, there
      character name*(*), src*(*), newsrc*30
      double precision mat(9), smat(9), rmat(9)
      integer pars, km_defs, km_def, nval, l, i, status, chr_len

      if( status .ne. SAI__OK ) return

*  Get the KeyMap holding spherical coord system definitions out of the
*  pars keymap. Create it if it is not already there.
      there = .false.
      if( ast_mapget0a( pars, 'SphSysDefs', km_defs, status ) ) then

*  attempt to get the KeyMap holding the definition of the requested spherical
*  coord system.
         if( ast_mapget0a( km_defs, name, km_def, status ) ) then

* Get the corresponding matrix and source system.
            if( ast_mapget1d( km_def, 'MATRIX', 9, nval, mat, status )
     :          .and. ast_mapget0c( km_def, 'SRC', src, l, status )
     :          ) then
               there = .true.

*  If we just want the matrix that describes the transformation from the
*  source system to the defined system then we are done. But if we want the
*  transformation all the way from the default system then we need to
*  multiply this matrix with the matrix for the source system.
               if( defsrc .and. src .ne. ' ' ) then
                  call sphsysmat( pars, .true., src, there, smat,
     :                            newsrc, status )
                  if( .not. there ) then
                     write(*,*) 'Cannot find definition of system ''',
     :                          src(:chr_len(src)),
     :                          ''' used in definition of system ''',
     :                           name(:chr_len(name)),''''

                  else
                     call sla_dmxm( mat, smat, rmat )
                     do i = 1, 9
                        mat(i) = rmat(i)
                     end do
                  endif
               endif
            endif

            call ast_annul( km_def, status )
         end if

         call ast_annul( km_defs, status )
      end if

      end


      subroutine deuler( order, phi, theta, psi, rmat, ok )
      implicit none
      character order*(*)
      double precision phi, theta, psi, rmat(3,3), t(3), smat(3,3)
      double precision ang, v(3), ux(3), uy(3), uz(3), tmat(3,3),
     :                 axvec(3)
      integer n, i, j, chr_len
      logical ok

      ok = .true.

      n = chr_len( order )
      do i = 1, 3
         ux(i) = 0.0D0
         uy(i) = 0.0D0
         uz(i) = 0.0D0
         do j = 1, 3
            rmat(i,j) = 0.0
         end do
         rmat(i,i) = 1.0
      end do
      ux(1) = 1.0D0
      uy(2) = 1.0D0
      uz(3) = 1.0D0
      do i = 1, 3
         if( i .le. n ) then
            if( i .eq. 1 ) then
               ang = phi
            else if( i .eq. 2 ) then
               ang = theta
            else
               ang = psi
            end if
            if( order( i : i ) .eq. 'X' .or.
     :          order( i : i ) .eq. 'x' ) then
               do j = 1, 3
                  axvec(j) = -ux(j)*ang
               end do
            else if( order( i : i ) .eq. 'Y' .or.
     :               order( i : i ) .eq. 'y' ) then
               do j = 1, 3
                  axvec(j) = -uy(j)*ang
               end do
            else if( order( i : i ) .eq. 'Z' .or.
     :               order( i : i ) .eq. 'z' ) then
               do j = 1, 3
                  axvec(j) = -uz(j)*ang
               end do
            else
               write(*,*) 'Bad axis label (',order(i:i),') in deuler!!!'
               ok = .false.
            end if
            call sla_dav2m( axvec, tmat )
            do j = 1, 3
               smat(1,j) = rmat(1,j)
               smat(2,j) = rmat(2,j)
               smat(3,j) = rmat(3,j)
            end do
            call sla_dmxm( tmat, smat, rmat )
            call sla_dmxv( tmat, ux, v )
            ux(1) = v(1)
            ux(2) = v(2)
            ux(3) = v(3)
            call sla_dmxv( tmat, uy, v )
            uy(1) = v(1)
            uy(2) = v(2)
            uy(3) = v(3)
            call sla_dmxv( tmat, uz, v )
            uz(1) = v(1)
            uz(2) = v(2)
            uz(3) = v(3)
         end if
      end do
      end

      subroutine mxv( mat, n, x, y, z, origin )
      implicit none
      integer n, i
      real x(n), y(n), z(n), mat(3,3), va(3),vb(3),origin(3)
      do i = 1, n
         va(1)= x(i)
         va(2)= y(i)
         va(3)= z(i)
         call sla_mxv( mat, va, vb )
         x(i) = vb(1) + origin(1)
         y(i) = vb(2) + origin(2)
         z(i) = vb(3) + origin(3)
      end do
      end

      subroutine mxv2( mat, r, move, origin )
      implicit none
      real r(3), mat(3,3), vb(3), origin(3)
      logical move
      call sla_mxv( mat, r, vb )
      if( move ) then
         r(1) = vb(1) + origin(1)
         r(2) = vb(2) + origin(2)
         r(3) = vb(3) + origin(3)
      else
         r(1) = vb(1)
         r(2) = vb(2)
         r(3) = vb(3)
      end if
      end

      subroutine cross( a, b, c )
      implicit none
      real a(3), b(3), c(3)
      c(1) = a(2)*b(3) - a(3)*b(2)
      c(2) = - a(1)*b(3) + a(3)*b(1)
      c(3) = a(1)*b(2) - a(2)*b(1)
      end

      subroutine sub( a, b, c )
      implicit none
      real a(3), b(3), c(3)
      c(1) = a(1) - b(1)
      c(2) = a(2) - b(2)
      c(3) = a(3) - b(3)
      end

      subroutine add( a, b, c )
      implicit none
      real a(3), b(3), c(3)
      c(1) = a(1) + b(1)
      c(2) = a(2) + b(2)
      c(3) = a(3) + b(3)
      end

      subroutine dot( a, b, c )
      implicit none
      real a(3), b(3), c
      c = a(1)*b(1) + a(2)*b(2) + a(3)*b(3)
      end

      subroutine mod( a, c )
      implicit none
      real a(3), c
      c = sqrt( a(1)*a(1) + a(2)*a(2) + a(3)*a(3) )
      end

      subroutine copy( a, b )
      implicit none
      real a(3), b(3)
      b(1) = a(1)
      b(2) = a(2)
      b(3) = a(3)
      end

      subroutine norm( a )
      implicit none
      real a(3), b
      call mod( a, b )
      if( b .ne. 0.0 ) then
         a(1) = a(1)/b
         a(2) = a(2)/b
         a(3) = a(3)/b
      end if
      end

      subroutine s2c( lon, lat, r, p )
      implicit none
      double precision v(3)
      real lon, lat, r, p(3)

      call sla_dcs2c( dble(lon), dble(lat), v )
      p( 1 ) = v( 1 )*r
      p( 2 ) = v( 2 )*r
      p( 3 ) = v( 3 )*r

      end

      subroutine c2s( p, lon, lat, r )
      implicit none
      real lon, lat, r, p(3), k
      double precision v(3), dlon, dlat

      v( 1 ) = p( 1 )
      v( 2 ) = p( 2 )
      v( 3 ) = p( 3 )
      call sla_dcc2s( v, dlon, dlat )
      lon = dlon
      lat = dlat
      r = sqrt( v( 1 )*v( 1 ) + v( 2 )*v( 2 ) + v( 3 )*v( 3 ) )

      end

      subroutine empty_km( km, status )
      implicit none
      include 'SAE_PAR'
      include 'AST_PAR'

      integer km, status, n, i, j
      character key*80

      if( status .ne. sai__ok ) return

      n = ast_mapsize( km, status )
      do i = 1, n
         key = ast_mapkey( km, 1, status )
         call ast_mapremove( km, key, status )
      end do

      end

      subroutine putkm( parent_km, key, child_km, status )
      implicit none
      include 'SAE_PAR'
      include 'AST_PAR'
      integer parent_km, child_km, status
      character key*(*)
      if( status .ne. sai__ok ) return
      call ast_mapput0a( parent_km, key, child_km, ' ', status )
      end



      subroutine arc( km, cen, normal, start, ang, arrow, status )
*+
*  Purpose:
*     Draw an arc of a circle
*
*  Arguments:
*     km = integer
*        The KeyMap
*     cen( 3 ) = real
*        The centre of the circle.
*     normal( 3 ) = real
*        A vector normal to the plane containing the circle.
*     start( 3 ) = real
*        The position of the start of the arc. The projection of this
*        position onto the plane of the circle is used.
*     ang = real
*        The angle subtended by the arc. Positive rotation is from +ve x
*        through +ve y when looking along the +ve z axis.
*     arrow = real
*        The arrow head size.
*-
      implicit none
      include 'SAE_PAR'
      real cen(3), normal(3), start(3), ang, arrow, ut(3), ur(3)
      integer np
      parameter( NP = 50 )
      integer i, km, status
      real v1(3), v2( 3 ), v1l, v2l, x(NP), y(NP), z(NP), a, ca, sa,
     :     t1(3), t2(3), n(3)

      if( status .ne. sai__ok ) return

      call copy( normal, n )
      call norm( n )
      call sub( start, cen, v1 )
      call cross( n, v1, t1 )
      call cross( t1, n, v1 )
      call mod( v1, v1l )
      call cross( v1, n, v2 )
      call mod( v2, v2l )

      do i = 1, 3
         v1( i ) = v1(i)/v1l
         v2( i ) = v2(i)/v2l
      end do

      do i = 1, NP
         a = -ang*( i - 1 )/( NP - 1 )
         ca = cos(a)
         sa = sin(a)
         x(i) = v1l*( v1(1)*ca + v2(1)*sa ) + cen(1)
         y(i) = v1l*( v1(2)*ca + v2(2)*sa ) + cen(2)
         z(i) = v1l*( v1(3)*ca + v2(3)*sa ) + cen(3)
      end do
      call g3d_line( km, .false., NP, x, y, z, status )

      if( arrow .ne. 0.0 ) then
         ca = cos(ang)
         sa = sin(ang)
         do i = 1, 3
            ut(i) = -sa*v1(i)-ca*v2(i)
            ur(i) = ca*v1(i)-sa*v2(i)
         end do
         x(1) = x(NP) - arrow*( ut(1) - 0.5*ur(1) )
         y(1) = y(NP) - arrow*( ut(2) - 0.5*ur(2) )
         z(1) = z(NP) - arrow*( ut(3) - 0.5*ur(3) )
         x(2) = x(NP)
         y(2) = y(NP)
         z(2) = z(NP)
         x(3) = x(NP) - arrow*( ut(1) + 0.5*ur(1) )
         y(3) = y(NP) - arrow*( ut(2) + 0.5*ur(2) )
         z(3) = z(NP) - arrow*( ut(3) + 0.5*ur(3) )
         call g3d_line( km, .false., 3, x, y, z, status )
      end if
      end



      subroutine line( km, np, x, y, z, radius, status )
*+
*  Purpose:
*     Draw a polyline, optionally projected onto a sphere.
*
*  Arguments:
*     km = integer
*        The KeyMap
*     np = integer
*        Number of points on polyline
*     x( np ) = real
*        The x coords at the polyline vertices
*     y( np ) = real
*        The y coords at the polyline vertices
*     z( np ) = real
*        The z coords at the polyline vertices
*     radius = real
*        The radius of the sphere on which to project the line. The lines
*         are drawn unprojected if radius is zero or negative.
*     statius = integer
*        The inherited status
*-
      implicit none
      include 'SAE_PAR'

      integer nsamp
      parameter( nsamp = 50 )

      integer km, np, status
      real x(np), y(np), z(np), radius

      integer i,j
      real xs(nsamp), ys(nsamp), zs(nsamp),v(3),vc(3),dx,dy,dz

*  Check inherited status
      if( status .ne. sai__ok ) return

*  If radius is unusable, draw the points as supplied.
      if( radius .le. 0.0 ) then
         call g3d_line( km, .false., np, x, y, z, status )

*  Otherwise, draw each line projected onto the sphere.
      else

*  Loop round each edge in the polyline. The edge ends at vertex number
*  "i".
         do i = 2, np
            v(1) = x( i - 1 )
            v(2) = y( i - 1 )
            v(3) = z( i - 1 )
            dx = ( x( i ) - v( 1 ) ) /( nsamp - 1 )
            dy = ( y( i ) - v( 2 ) ) /( nsamp - 1 )
            dz = ( z( i ) - v( 3 ) ) /( nsamp - 1 )

*  Draw the edge as a set of "nsamp" points.
            do j = 1, nsamp

*  Normalise the position vector of the current sample.
               vc(1) = v(1)
               vc(2) = v(2)
               vc(3) = v(3)
               call norm( vc )

*  Scale the vector to the required length and store.
               xs( j ) = vc(1)*radius
               ys( j ) = vc(2)*radius
               zs( j ) = vc(3)*radius

*  Move to next position on line
               v(1) = v(1) + dx
               v(2) = v(2) + dy
               v(3) = v(3) + dz
            end do

*  Draw the projected edge.
            call g3d_line( km, .false., nsamp, xs, ys, zs, status )
         end do
      end if

      end



      subroutine putr( km, name, value, status )
      implicit none
      include 'SAE_PAR'
      include 'AST_PAR'
      integer km, status, pars, pars_km, iat
      character name*(*), var_name*30, getc*30, text*80
      real value
      logical getl

      if( status .ne. sai__ok ) return

      pars = pars_km( km, status )
      if( pars .eq. ast__null ) return

      var_name = getc( km, name, ' ', status )
      if( var_name .ne. ' ' ) then
         call chr_ucase( var_name )
         call ast_mapput0r( pars, var_name, value, ' ', status )

         if( getl( pars, 'VERBOSE', .true., status ) ) then
            text = '   Setting'
            iat = 11
            call chr_appnd( var_name, text, iat )
            call chr_appnd( ' to', text, iat )
            iat = iat + 1
            call chr_putr( value, text, iat )
            write(*,*) text( : iat )
         end if

      else if( getl( pars, 'VERBOSE', .true., status ) ) then
         text = '   '
         iat = 3
         call chr_appnd( name, text, iat )
         call chr_appnd( ' =', text, iat )
         iat = iat + 1
         call chr_putr( value, text, iat )
         write(*,*) text( : iat )
      end if

      call ast_annul( pars, status )

      end

      subroutine puti( km, name, value, status )
      implicit none
      include 'SAE_PAR'
      include 'AST_PAR'
      integer km, status, pars, pars_km
      character name*(*), var_name*30, getc*30
      integer value

      if( status .ne. sai__ok ) return

      var_name = getc( km, name, ' ', status )
      if( var_name .ne. ' ' ) then
         pars = pars_km( km, status )
         if( pars .ne. ast__null ) then
            call chr_ucase( var_name )
            call ast_mapput0i( pars, var_name, value, ' ', status )
            call ast_annul( pars, status )
         end if
      end if

      end


      integer function pars_km( km, status )
      implicit none
      include 'SAE_PAR'
      include 'AST_PAR'
      integer km, status

      pars_km = ast__null

      if( status .ne. sai__ok ) return

      if( .not. ast_mapget0a( km, 'PARS', pars_km, status ) ) then
         pars_km = ast__null
      end if

      end


      recursive subroutine read_file( file, unit, model, pars, status )
      implicit none
      include 'SAE_PAR'

      integer MAX_TEXT
      parameter( MAX_TEXT = 2024 )

      character file*(*)
      character text*(MAX_TEXT), line*120
      integer unit, model, pars, status, stat, iat, llen, chr_len,
     :        first, last, depth
      logical more

*  Check inherited status
      if( status .ne. sai__ok ) return

*  Open the file.
      if( unit .ne. 5 ) then
         open( unit, file=file, iostat=stat, status='old',
     :         action='read' )
         if( stat .ne. 0 ) then
            status = sai__error
            call msg_setc( 'F', file )
            call msg_seti( 'U', unit )
            call err_rep( ' ', 'Failed to open input file ^F '//
     :                   ' on unit ^U.', status )
         end if
      end if

*  Read the first line from the input file
      more = .true.
      call get_line( file, unit, line, .true., more, status )

*  Process each line of input.
      depth = 0
      iat = 0
      do while( more .and. status .eq. sai__ok )

*  Clean the line.
         call clean( line, status )

*  Get the remaining length.
         llen = chr_len( line )
         if( llen .gt. 0 ) then

*  Append the new line to the complete command text.
            if( iat .gt. 0 ) call chr_appnd( ' ', text, iat )
            call chr_appnd( line( : llen ), text, iat )
            if( iat .gt. MAX_TEXT ) then
               status = sai__error
               call err_rep( ' ', 'Command too long.', status )

*  See how deep the brace nesting is at the end of the command text, and
*  find the first opening brace and the last closing brace.
            else
               call nesting( text( : iat ), '{', '}', first, last,
     :                       depth, status )
            end if

*  If the end of the command text is at zero level of brace nesting...
            if( depth .eq. 0 ) then

*  Check for junk at the start or end of the command text.
               if( first .gt. 1 ) then
                  if( status .eq. sai__ok ) then
                     status = sai__error
                     call err_rep( ' ', 'Junk before opening brace.',
     :                             status )
                  end if

               else if( last .gt. 0 .and. last .lt. iat ) then
                  if( status .eq. sai__ok ) then
                     status = sai__error
                     call msg_setc( 'C', text( last : iat ) )
                     call err_rep( ' ', 'Junk after closing brace.',
     :                             status )
                  end if

*  Remove the opening and closing braces (if any), remove leading
*  blanks, and process the text.
               else
                  if( last .gt. 0 ) text( last : last ) = ' '
                  if( first .gt. 0 ) text( : first ) = ' '
                  call chr_ldblk( text( : iat ) )
                  call process_text( text( : iat ), model, pars,
     :                               unit, more, status )
                  iat = 0
               end if

*  Report an error if too many "}"'s
            else if( depth .le. 0 ) then
               status = sai__error
               call err_rep( ' ', 'Too many closing braces.', status )
            end if

*  Add a context message to any error report.
            if( status .ne. sai__ok ) then
               if( iat .gt. 20 ) then
                  call msg_setc( 'T', text( : 20 ) )
                  call msg_setc( 'T', '...' )
               else
                  call msg_setc( 'T', text( : iat ) )
               end if
               call err_rep( ' ', 'Failed to interpret ''^T''.',
     :                       status )
            end if
         end if

*  Read the next line from the input file
         if( more ) call get_line( file, unit, line, ( depth .eq. 0 ),
     :                             more, status )
      end do

*  Report incomplete commands
      if( iat .gt. 0 .and. status .eq. sai__ok ) then
         status = sai__error
         call err_rep( ' ', 'Incomplete command at end of file',
     :                 status )
      end if

*  Close the file.
      if( unit .ne. 5 ) close( unit )

*  Context message.
      if( status .ne. sai__ok ) then
         if( unit .eq. 5 ) then
            call err_rep( ' ', 'Failed to read text from standard '//
     :                    'input', status )
         else
            call msg_setc( 'F', file )
            call err_rep( ' ', 'Failed to read text from file ^F',
     :                    status )
         end if
      end if

      end


      subroutine get_line( file, unit, line, prompt, more, status )
      implicit none
      include 'SAE_PAR'
      character file*(*), line*(*)
      integer unit, status, stat, chr_len
      logical prompt, more

      if( status .ne. sai__ok ) return

      if( unit .eq. 5 ) then
         if( prompt ) then
            call read_line( 'draw3d> ', line )
         else
            call read_line( '        ', line )
         end if
      else
         read( unit, '(A120)', iostat=stat ) line
         if( stat .gt. 0 ) then
            status = sai__error
            call err_rep( ' ', 'Failed to read input file',
     :                    status )
         else if( stat .lt. 0 ) then
            more = .false.
         end if
      end if

      end


      subroutine nesting( text, op, cl, first, last, depth, status )
*+
*  Purpose:
*    Identify the depth of nesting at the end of a string, and locate the
*    opening and closing characters. Opening and closing characters
*    within quoted strings are ignored.
*
*  Arguments:
*    text = character*(*) (Given)
*      The text to search
*    op = character*1 (Given)
*       The character that starts a new nesting level.
*    cl = character*1 (Given)
*       The character that ends a nesting level.
*    first = integer (Returned)
*       The index of the first "op" character found in "text".
*    last = integer (Returned)
*       The index of the last "cl" character found in "text".
*    depth = integer (Returned)
*       The depth of nesting at the end of "text".
*-
      implicit none
      include 'SAE_PAR'

      character text*(*), op*1, cl*1, c*1
      integer first, last, depth, status, i, llen
      logical quoted

      first = 0
      last = 0
      depth = 0
      quoted = .false.

      if( status .ne. sai__ok ) return

      llen = len( text )
      do i = 1, llen
         c = text( i : i )

         if( quoted ) then
            if( c .eq. '"' ) quoted = .false.

         else if( c .eq. op ) then
            if( first .eq. 0 ) first = i
            depth = depth + 1

         else if( c .eq. cl ) then
            last = i
            depth = depth - 1

         else if( c .eq. '"' ) then
            quoted = .true.
         end if

      end do

      end


      recursive subroutine process_text( text, model, pars,
     :                                   unit, more, status )
*+
*  Purpose:
*     Process text describing one or more atomic commands. The text may
*     contain sub-commands within opening and closing braces. This routine
*     identifies the atomic command strings, and passes them to
*     process_command for parsing and execution.
*
*  Arguments:
*     text = character*(*) (Given)
*        The text to be processed (should not cintain any braces).
*     model = integer (Given)
*        A KeyMap containing a list of all previously executed commands.
*        The contents of the KeyMap will be updated by this routine.
*     pars = integer (Given)
*        A KeyMap containing a list of variable names and values that
*        control the operation of this program. The contents of the
*        KeyMap may be updated by this routine.
*     unit = integer (Given)
*        The fortran unit number from which the text was obtained.
*     more = logical (Returned)
*        Return .false. if the supplied command is one of the exit
*        commands.
*     status = integer (Given and Returned)
*        The inherited status value.
*-
      implicit none
      include 'SAE_PAR'

      character text*(*), sbuf*30
      integer model, pars, unit, status, tlen, op, cl, depth, n, geti,
     :        chr_len, i, myindex
      logical more, clear, getl
      real sleep, getr

*  Check inherited status
      if( status .ne. sai__ok ) return

*  Remove leading blanks.
      call chr_ldblk( text )
      tlen = chr_len( text )

*  Repeat the command the required number of times.
      clear = getl( pars, 'REP_CLEAR', .true., status )
      sleep = getr( pars, 'REP_SLEEP', 10.0, status )
      if( sleep .gt. 0.0 ) then
         write( sbuf, * ) 'SLEEP ',sleep
      else
         sbuf = ' '
      end if

      n = geti( pars, 'REPEAT', 1, status )
      call ast_mapremove( pars, 'REPEAT', status )
      do i = 1, n

*  If the first character is not an opening brace, this is an atomic
*  command and so call process_command to parse and execute it.
         if( text( 1 : 1 ) .ne. '{' ) then
            call process_command( text, model, pars, unit, more,
     :                            status )

*  Otherwise, loop to process each braced sub-string.
         else
            op = 1
            do while( op .le. tlen .and. status .eq. sai__ok )

*  Find the closing brace that matches the opening brace.
               cl = op + 1
               depth = 1
               do while( depth .gt. 0 .and. cl .lt. tlen )
                  cl = cl + 1
                  if( text( cl : cl ) .eq. '{' ) then
                     depth = depth + 1
                  else if( text( cl : cl ) .eq. '}' ) then
                     depth = depth - 1
                  end if
               end do

*  Report an error if no matching } was found.
               if( depth .gt. 0 ) then
                  status = sai__error
                  call msg_setc( 'T', text( : min( 20, tlen ) ) )
                  call err_rep( ' ', 'Unmatched braces in ''^T...''.',
     :                          status )

*  Otherwise use this routine to process the contents of the braces.
               else if( cl .gt. op + 1 ) then
                  call process_text( text( op + 1 : cl - 1 ), model,
     :                               pars, unit, more, status )

*  Find the next opening brace.
                  op = myindex( text, '{', cl + 1, tlen )
               end if
            end do
         end if

         if( i .lt. n ) then
            if( sbuf .ne. ' ' ) call process_command( sbuf, model, pars,
     :                                                -1, more, status )
            if( clear ) call process_command( 'CLEAR S', model, pars,
     :                                         -1, more, status )
         end if

      end do

      end


      recursive subroutine process_command( text, model, pars,
     :                                      unit, more, status )
*+
*  Purpose:
*     Process text describing a single atomic command. The text should not
*     contain any braces. The processing involves parsing the text to
*     locate the command name and any other keyword/value pairs supplied in
*     the text, and storing them in a local KeyMap, which is then passed to
*     the "execute" routine, which executes the command.
*
*  Arguments:
*     text = character*(*) (Given)
*        The text to be processed (should not cintain any braces).
*     model = integer (Given)
*        A KeyMap containing a list of all previously excecuted commands.
*        The contents of the KeyMap will be updated by this routine.
*     pars = integer (Given)
*        A KeyMap containing a list of variable names and values that
*        control the operation of this program.. The contents of the
*        KeyMap may be updated by this routine.
*     unit = integer (Given)
*        The fortran unit number from which the text was obtained.
*     more = logical (Returned)
*        Return .false. if the supplied command is one of the exit
*        commands.
*     status = integer (Given and Returned)
*        The inherited status value.
*-
      implicit none
      include 'SAE_PAR'
      include 'AST_PAR'

      character text*(*), c*1, key*40
      integer model, pars, status, tlen, i, stage, km, ipos, equals,
     :        space, unit, chr_len, myindex, quote
      logical more, getl

*  Check inherited status
      if( status .ne. sai__ok ) return

*  Create a KeyMap to store the values read from the supplied text.
      km = ast_keymap( ' ', status )

*  Store a refernece to "pars" in "km" (in case some of the command
*  parameters refer to global variables defined in "pars").
      call ast_mapput0a( km, 'PARS', pars, ' ', status )

*  We first read all the keyword values out of the supplied command
*  text, and store them in the above KeyMap. The text is split into words
*  using space characters as the word delimiters (ignoring spaces within
*  quoted strings). Each word is then split into keyword name and value
*  using the first equals sign as the split point. If a word has no
*  equals sign, it is assumed to be a keyword value, and a keyword name
*  is generated automatically for it. These auto keyword names are "ITEM1",
*  "ITEM2", etc, with the integer part incrementing for each of these
*  "positional" keyword values found in the supplied command text.
*
*   So now we loop round all characters in the supplied command text.
      stage = 1
      tlen = chr_len( text )
      ipos = 1
      i = 1

      do while( more .and. i .le. tlen .and. status .eq. sai__ok )
         c = text( i : i )

*  If we are looking for the start of a keyword name, or the
*  start of a positional value...
         if( stage .eq. 1 ) then

*  Skip over spaces.
            if( c .ne. ' ' ) then

*  If the current character is a double quote, we have found the start of
*  a positional value. Create the next positional key. Back up a character
*  so that the current character (the quote) will be re-read on the next
*  loop. Indicate we are about to store a positional value.
               if( c .eq. '"' ) then
                  call pos_key( ipos, key )
                  ipos = ipos + 1
                  i = i - 1
                  stage = 2

*  Otherwise, find the next equals character and the next space.
               else
                  equals = myindex( text, '=', i, tlen )
                  space = myindex( text, ' ', i, tlen )

*  If the next equals occurs before the next space, then we have found a
*  keyword name. Copy it into a buffer, advance to the equals character,
*  and indicate we are about to store a keyword value.
                  if( equals .lt. space ) then
                     key = text( i : equals - 1 )
                     call chr_ucase( key )
                     i = equals
                     stage = 2

*  If the space occurs first, we have found the start of a positional
*  value. Create the next positional key. Back up a character so that the
*  current character will be re-read on the next loop. Indicate we are
*  about to store a positional value.
                  else
                     call pos_key( ipos, key )
                     ipos = ipos + 1
                     i = i - 1
                     stage = 2
                  end if
               end if
            end if

*  If we are pointing at the first character in a value...
         else if( stage .eq. 2 ) then

*  If the first character is a double quote, the value starts at the
*  following character and ends just before the next double quote.
            if( c .eq. '"' ) then
               quote = myindex( text, '"', i + 1, tlen )
               if( quote .gt. tlen ) then
                  status = sai__error
                  call msg_setc( 'S', text( i : min( tlen, i+10 ) ) )
                  call err_rep( ' ', 'Unterminated string (^S) '//
     :                          ' found in input.', status )
                  more = .false.
               end if

*  Store the value and key in the KeyMap.
               call ast_mapput0c( km, key, text( i + 1 : quote - 1 ),
     :                            ' ', status )

*  Skip over the value.
               i = quote

*  If the first character is not a double quote, the value starts at the
*  current character and ends just before the next space or closing brace
            else
               space = myindex( text, ' ', i, tlen )

*  Store the value and key in the KeyMap.
               call ast_mapput0c( km, key, text( i : space - 1 ),
     :                            ' ', status )

*  Skip over the value.
               i = space - 1
            end if

*  Indicate we are looking for the start of a new keyword/value.
            stage = 1
         end if

*  Move on to the next character.
         i = i + 1
      end do

*  Now that the keywords have been stored in "km", execute the command.
      call execute( km, model, pars, unit, .false., more, status )

*  Flush any error so that we can continue to execute other commands.
      if( status .ne. sai__ok ) then
         call msg_setc( 'C', text )
         call err_rep( ' ', 'Failed to execute command: ^C', status )
         call err_flush( status )

*  If ok, echo the command if required.
      else if( getl( pars, 'ECHO', .false., status ) ) then
         write(*,*) text( : tlen )
      end if

*  Annul local AST objects.
      call ast_annul( km, status )

      end


      recursive subroutine execute( km, model, pars, unit, redraw, more,
     :                              status )
      implicit none
      include 'SAE_PAR'

      integer km, model, pars, unit, status, icom, type, iat
      logical redraw, more, record
      character com*30, getc*30, text*300
      real getr

*  Check inherited status
      if( status .ne. sai__ok ) return

*  Assume we should go round for another command once the current command
*  has been executed.
      more = .true.

*  Ensure that the KeyMap has a value for key 'COMMAND', giving this key to
*  the first positional value if the KeyMap does not already contain the
*  key.
      call fix_keys( km, 'COMMAND', 1, status )

*  Get the command name, and check it is not null.
      com = getc( km, 'COMMAND', ' ', status )
      if( com .eq. ' ' ) then
         status = sai__error
         call err_rep( ' ', 'No command name specified', status )
      end if

*  Find the commands index within a list of recognised command names. The
*  'find' subroutine reports an error if the command is not known.
      call find( com,
     :           'END QUIT LOGOUT EXIT HELP LINE AXES SPHERE INCLUDE '//
     :           'TEXT ARC QUADRANT REVOLVE GREAT MOVE REDRAW CLEAR '//
     :           'SHOW SET RERUN EYE INCREMENT OFFSET2 DELETE DUMP '//
     :           'INTERSECT RADIUS SLEEP FITSBOX MARK ROLL PITCH '//
     :           'YAW FORWARD BACKWARD RESET SPHSYS SPHTRAN '//
     :           'SPH2CART', 'command', icom, status )

*  Replace the potentially abbreviated command name in the KeyMap with
*  the full form.
      call ast_mapput0c( km, 'COMMAND', com, ' ', status )

*  Initialise a flag indicating if the command should bre recorded in
*  "model"
      record = .true.

*  Invoke the appropriate routine to execute the command...

*  Termination commands
      if( icom .ge. 1 .and. icom .le. 4 ) then
         call do_quit( km, pars, status )
         more = .false.
         record = .false.

*  Help
      else if( icom .eq. 5 ) then
         call do_help( km, pars, status )
         record = .false.

*  Line
      else if( icom .eq. 6 ) then
         call do_line( km, pars, status )

*  Axes
      else if( icom .eq. 7 ) then
         call do_axes( km, pars, status )

*  Sphere
      else if( icom .eq. 8 ) then
         call do_sphere( km, pars, status )

*  Include
      else if( icom .eq. 9 ) then
         call do_include( km, model, pars, unit, status )
         record = .false.

*  Text
      else if( icom .eq. 10 ) then
         call do_text( km, pars, status )

*  Arc
      else if( icom .eq. 11 ) then
         call do_arc( km, pars, status )

*  Quadrant
      else if( icom .eq. 12 ) then
         call do_quadrant( km, pars, status )

*  Revolve
      else if( icom .eq. 13 ) then
         if( .not. redraw ) call do_revolve( km, model, pars,
     :                                       status )

*  Great
      else if( icom .eq. 14 ) then
         call do_great( km, pars, status )

*  Move
      else if( icom .eq. 15 ) then
         if( .not. redraw ) call do_move( km, model, pars, status )

*  Redraw
      else if( icom .eq. 16 ) then
         call do_redraw( km, model, pars, status )
         record = .false.

*  Clear
      else if( icom .eq. 17 ) then
         call do_clear( km, model, pars, record, status )

*  Show
      else if( icom .eq. 18 ) then
         call do_show( km, model, pars, status )
         record = .false.

*  Set
      else if( icom .eq. 19 ) then
         call do_set( km, pars, status )

*  Rerun
      else if( icom .eq. 20 ) then
         call do_rerun( km, model, pars, status )
         record = .false.

*  Eye
      else if( icom .eq. 21 ) then
         if( .not. redraw ) call do_eye( km, model, pars, status )

*  Increment
      else if( icom .eq. 22 ) then
         call do_increment( km, pars, status )

*  Offset2
      else if( icom .eq. 23 ) then
         call do_offset2( km, pars, status )

*  Delete
      else if( icom .eq. 24 ) then
         call do_delete( km, model, pars, status )
         record = .false.

*  Dump
      else if( icom .eq. 25 ) then
         call do_dump( km, model, pars, status )
         record = .false.

*  Intersect
      else if( icom .eq. 26 ) then
         call do_intersect( km, pars, status )

*  Radius
      else if( icom .eq. 27 ) then
         call do_radius( km, pars, status )

*  Sleep
      else if( icom .eq. 28 ) then
         call do_sleep( km, pars, status )

*  FITSBox
      else if( icom .eq. 29 ) then
         call do_fitsbox( km, pars, status )

*  Mark
      else if( icom .eq. 30 ) then
         call do_mark( km, pars, status )

*  Roll
      else if( icom .eq. 31 ) then
         if( .not. redraw ) call do_rpy( km, model, pars, 3, status )

*  Pitch
      else if( icom .eq. 32 ) then
         if( .not. redraw ) call do_rpy( km, model, pars, 1, status )

*  Yaw
      else if( icom .eq. 33 ) then
         if( .not. redraw ) call do_rpy( km, model, pars, 2, status )

*  Forward
      else if( icom .eq. 34 ) then
         if( .not. redraw ) call do_fb( km, model, pars, .true.,
     :                                  status )

*  Backward
      else if( icom .eq. 35 ) then
         if( .not. redraw ) call do_fb( km, model, pars, .false.,
     :                                  status )

*  Reset
      else if( icom .eq. 36 ) then
         if( .not. redraw ) call do_reset( km, model, pars, status )

*  SphSys
      else if( icom .eq. 37 ) then
         call do_sphsys( km, pars, status )

*  SphTran
      else if( icom .eq. 38 ) then
         call do_sphtran( km, pars, status )

*  Sph2Cart
      else if( icom .eq. 39 ) then
         call do_sph2cart( km, pars, status )

      else
         record = .false.
      end if

*  Add the command into the list of executed commands.
      if( record ) call add_model( km, model, status )

      end




      recursive subroutine do_include( km, model, pars, unit, status )
      implicit none
      include 'SAE_PAR'
      include 'AST_PAR'

      integer km, model, pars, unit, new_unit, status
      character file*200, getc*200

*  Check inherited status
      if( status .ne. sai__ok ) return

*  If required display help info.
      if( km .le. ast__null + 10 ) then
         if( km .eq. ast__null ) then
            call echo( 0, 'INCLUDE [FILE=]<file>' )
            call echo( 3, 'Read commands from a specified file' )
         end if
         return
      end if

*  Ensure the second positional keyword is called FILE (the first
*  positional keyword is the command name).
      call fix_keys( km, 'FILE', 2, status )

*  Get the name of the file holding the extra commands.
      file = getc( km, 'FILE', ' ', status )

*  Report an error if no file was supplied.
      if( file .eq. ' ' ) then
         if( status .eq. sai__ok ) then
            status = sai__error
            call err_rep( ' ', 'No file name supplied.', status )
         end if

*  Otherwise, choose the unit number to use for reading the file.
      else
         if( unit .eq. 5 ) then
            new_unit = 10
         else
            new_unit = unit + 1
         end if

*  Read and execute commands from the file.
         call read_file( file, new_unit, model, pars, status )
      end if

      end


      subroutine do_increment( km, pars, status )
      implicit none
      include 'SAE_PAR'
      include 'AST_PAR'

      integer km, pars, status, nkey, ikey, ipar, chr_len
      real val, incr
      character key*30, cval*200
      logical verb, getl

*  Check inherited status
      if( status .ne. sai__ok ) return

*  If required display help info.
      if( km .le. ast__null + 10 ) then
         if( km .eq. ast__null ) then
            call echo( 0, 'INCREMENT <var_name>=<inc> [<var_name=<inc'//
     :                    '>...]' )
            call echo( 3, 'Increment a draw3d parameter value.' )
         end if
         return
      end if

*  Give verbose commentary?
      verb = getl( pars, 'VERBOSE', .true., status )

*  Loop round all keys in the supplied keymap.
      nkey = ast_mapsize( km, status )
      do ikey = 1, nkey
         key = ast_mapkey( km, ikey, status )

*  Skip the COMMAND and PARS keys.
         if( key .ne. 'COMMAND' .and. key .ne. 'PARS' ) then

*  Identify the variable name.
            call find_par( key, ipar, status )

*  If OK, get the increment, and store it in the pars keymap.
            if( ipar .gt. 0 .and. ast_mapget0r( km, key, incr,
     :                                          status ) ) then
               if( ast_mapget0r( pars, key, val, status ) ) then
                  val = val + incr
                  call ast_mapput0r( pars, key, val, ' ', status )
                  if( verb ) then
                     write(*,*) '   Setting ',key(:chr_len(key)),' to ',
     :                          val
                  end if
               end if
            end if
         end if
      end do

      end


      subroutine do_set( km, pars, status )
      implicit none
      include 'SAE_PAR'
      include 'AST_PAR'

      integer km, pars, status, nkey, ikey, ipar, l, chr_len
      character key*30, cval*200, par*30
      logical verb, getl

*  Check inherited status
      if( status .ne. sai__ok ) return

*  If required display help info.
      if( km .le. ast__null + 10 ) then
         if( km .eq. ast__null ) then
            call echo( 0, 'SET <var_name>=<value> [<var_name=<value>'//
     :                    '...]' )
            call echo( 3, 'Set a draw3d parameter value. Type "help '//
     :                    'param" for a list of parameters.' )

         else if( km .eq. ast__null + 1 ) then
            call echo( 0, 'Parameter Names:' )
            call echo( 3, 'ECHO: If true, each succesful command is '//
     :                    'written to standard output after it has '//
     :                    'been executed. [NO]' )
            call echo( 3, 'LINE_COL: Colour index for subsequent '//
     :                    'lines. [1]' )
            call echo( 3, 'LINE_WID: Width for subsequent lines. [3]' )
            call echo( 3, 'REPEAT: The number of times to execute the'//
     :                    ' following command (resets to 1 after use'//
     :                    '). [1]' )
            call echo( 3, 'REP_CLEAR: Should the screen be '//
     :                    'cleared between repeats? [YES]' )
            call echo( 3, 'REP_SLEEP: Time in ms to sleep between '//
     :                    'repeats. [10]' )
            call echo( 3, 'TEXT_COL: Colour index for subsequent '//
     :                    'text. [1]' )
            call echo( 3, 'TEXT_WID: Line width for subsequent text. '//
     :                    '[3]' )
            call echo( 3, 'MARK_COL: Colour index for subsequent '//
     :                    'markers. [1]' )
            call echo( 3, 'MARK_WID: Line width for subsequent '//
     :                    'markers. [3]' )
            call echo( 3, 'DEGREES: If true, angles should be '//
     :                    'supplied in degrees (otherwise radians). '//
     :                    '[YES]' )
            call echo( 3, 'VERBOSE: If true, commands display extra '//
     :                    'information. [YES]' )
            call echo( 3, 'FR_DIST: The default distance for the '//
     :                    'FORWARD and BACKWARD commands. [0]' )
            call echo( 3, 'RPY_ANGLE: The default angle for the '//
     :                    'ROLL, PITCH and YAW commands. [10 degs]' )
            call echo( 3, ' ' )
            call echo( 3, 'In addition, any two character name in '//
     :                    'which the first character is a letter and '//
     :                    'the second character is a digit can be '//
     :                    'used as variable for passing values '//
     :                    'between commands.')
         end if
         return
      end if


*  Give verbose commentary?
      verb = getl( pars, 'VERBOSE', .true., status )

*  Loop round all keys in the supplied keymap.
      nkey = ast_mapsize( km, status )
      do ikey = 1, nkey
         key = ast_mapkey( km, ikey, status )

*  Skip the COMMAND and PARS keys.
         if( key .ne. 'COMMAND' .and. key .ne. 'PARS' ) then

*  Identify the variable name.
            par = key
            call find_par( par, ipar, status )

*  If OK, get the new value, and store it in the pars keymap.
            if( ipar .gt. 0 .and. ast_mapget0c( km, key, cval, l,
     :                                          status ) ) then

               if( verb .and. par .ne. 'VERBOSE' ) then
                  write(*,*) '   Setting ',par(:chr_len(par)),' to ',
     :                        cval( : l )
               end if

               call ast_mapput0c( pars, par, cval( : l ), ' ',
     :                            status )
            end if
         end if
      end do

      end

      subroutine do_sphsys( km, pars, status )
      implicit none
      include 'SAE_PAR'
      include 'AST_PAR'

      double precision mat(3,3)
      real phi, theta, psi, getr
      integer km, pars, km_defs, km_new, status, chr_len
      character name*30, order*3, src*30, getc*200
      logical getl, ok

*  Check inherited status
      if( status .ne. sai__ok ) return
      ok = .true.

*  If required display help info.
      if( km .le. ast__null + 10 ) then
         if( km .eq. ast__null ) then
            call echo( 0, 'SPHSYS NAME ORDER PHI THETA PSI SRC' )
            call echo( 3, 'Define a new spherical coord system with '//
     :                 'name NAME derived from pre-existing system '//
     :                 'SRC (defaults to built-in system if omitted) '//
     :                 'using Euler angle PHI THETA PSI about axes '//
     :                 'given by ORDER (X, Y or Z) - see sla_deuler.' )
         end if
         return
      end if

*  Ensure the positional keywords have their required names.
      call fix_keys( km, 'NAME ORDER PHI THETA PSI SRC', 2, status )

*  Get the parameter values from the KeyMap.
      name = getc( km, 'NAME', 'NEW', status )
      order = getc( km, 'ORDER', ' ', status )
      phi = getr( km, 'PHI', 0.0, status )
      theta = getr( km, 'THETA', 0.0, status )
      psi = getr( km, 'PSI', 0.0, status )
      src = getc( km, 'SRC', ' ', status )

      if( name .eq. ' ' ) then
         write(*,*) 'NAME is blank - Cannot redefine the built-in '//
     :              'system.'
         ok = .false.
      end if

*  If required convert from degs to rads
      if( getl( pars, 'DEGREES', .true., status ) ) then
         phi = phi*AST__DD2R
         theta = theta*AST__DD2R
         psi = psi*AST__DD2R
      end if

*  Calculate the 3x3 rotation matrix corresponding to the supplied Euler
*  angles.
      call deuler( order, dble(phi), dble(theta), dble(psi), mat, ok )

*  Get the KeyMap holding spherical coord system definitions out of the
*  pars keymap. Create it if it is not already there.
      if( .not. ast_mapget0a( pars, 'SphSysDefs', km_defs,
     :                        status ) ) then
         km_defs = ast_keymap( 'KeyCase=0', status )
         call ast_mapput0a( pars, 'SphSysDefs', km_defs, ' ', status )
      end if

*  Check the source system exists in this keymap (the default built-in
*  system has a blank name and has no definition in the KeyMap).
      if( ok .and. src .ne. ' ' ) then
         if( .not. ast_maphaskey( km_defs, src, status ) ) then
            write(*,*) 'Source system ''',src(:chr_len(src)),
     :                 ''' has not been defined.'
            ok = .false.
         end if
      end if

*  Create a KeyMap holding a definition of the new coordinate system.
      if( ok ) then
         km_new = ast_keymap( ' ', status )
         call ast_mapput0c( km_new, 'NAME', name, ' ', status )
         call ast_mapput0c( km_new, 'ORDER', order, ' ', status )
         call ast_mapput0c( km_new, 'SRC', src, ' ', status )
         call ast_mapput0r( km_new, 'PHI', phi, ' ', status )
         call ast_mapput0r( km_new, 'THETA', theta, ' ', status )
         call ast_mapput0r( km_new, 'PSI', psi, ' ', status )
         call ast_mapput1d( km_new, 'MATRIX', 9, mat, ' ', status )

*  Store the new system definition in the keymap holding all such
*  definitions. Use its name as the key. This will replace any previously
*  stored definition with the same key.
         call ast_mapput0a( km_defs, name, km_new, ' ', status )
         call ast_annul( km_new, status )
      endif

      call ast_annul( km_defs, status )

      end


      subroutine do_sphtran( km, pars, status )
      implicit none
      include 'SAE_PAR'
      include 'AST_PAR'

      double precision mat(3,3), lonin, lonout, latin, latout, v(3),
     :                 det
      real phi, theta, psi, getr
      integer km, pars, km_defs, km_new, status, chr_len, work(3), jf
      character name*30, order*3, src*30, getc*200
      logical getl, ok, fwd

*  Check inherited status
      if( status .ne. sai__ok ) return
      ok = .true.

*  If required display help info.
      if( km .le. ast__null + 10 ) then
         if( km .eq. ast__null ) then
            call echo( 0, 'SPHTRAN LONIN LATIN NAME FWD LONOUT LATOUT' )
            call echo( 3, 'Transform a (lon,lat) pair from the '//
     :                 'default system to the NAME system (if FWD is '//
     :                 'true) or from the NAME system to the default '//
     :                 'system (if FWD is false). The NAME system '//
     :                 'should have been defined using the SPHSYS '//
     :                 'command.' )
         end if
         return
      end if

*  Ensure the positional keywords have their required names.
      call fix_keys( km, 'LONIN LATIN NAME FWD LONOUT LATOUT', 2,
     :               status )

*  Get the parameter values from the KeyMap.
      lonin = getr( km, 'LONIN', 0.0, status )
      latin = getr( km, 'LATIN', 0.0, status )
      name = getc( km, 'NAME', ' ', status )
      fwd = getl( km, 'FWD', .true., status )

*  If required convert from degs to rads
      if( getl( pars, 'DEGREES', .true., status ) ) then
         lonin = lonin*AST__DD2R
         latin = latin*AST__DD2R
      end if

*  Attempt to get the 3x3 rotation matrix that transforms from the named
*  spherical coordinate system to the default Cartesian system.
      call sphsysmat( pars, .true., name, ok, mat, src, status )
      if( .not. ok ) then
         write(*,*) 'System ''',name(:chr_len(name)),''' has not '//
     :              'been defined using the SPHSYS command.'
         return
      end if

*  Convert inputs from spherical to Cartesian.
      call sla_dcs2c( lonin, latin, v )

*  Apply the matrix in the approipriate direction.
      if( .not. fwd ) then
         call sla_dmxv( mat, v, v )
      else
         call sla_dmat( 3, mat, v, det, jf, work )
      end if

*  Convert outputs from Cartesian to spherical.
      call sla_dcc2s( v, lonout, latout )

*  Store the returned values in the requested global variables.
      call putr( km, 'LONOUT', real( lonout*AST__DR2D ), status )
      call putr( km, 'LATOUT', real( latout*AST__DR2D ), status )

      end






      subroutine do_sph2cart( km, pars, status )
      implicit none
      include 'SAE_PAR'
      include 'AST_PAR'

      real in(3), out(3), getr
      integer km, pars, status, chr_len
      logical getl, fwd, degs

*  Check inherited status
      if( status .ne. sai__ok ) return

*  If required display help info.
      if( km .le. ast__null + 10 ) then
         if( km .eq. ast__null ) then
            call echo( 0, 'SPH2CART IN1 IN2 IN3 FWD OUT1 OUT2 OUT3' )
            call echo( 3, 'Transform a point from (lon,lat,radius) '//
     :                 'to (x,y,z) (if FWD is true) or from (x,y,z) '//
     :                 'to (lon,lat,radius) (if FWD is true).' )
         end if
         return
      end if

*  Ensure the positional keywords have their required names.
      call fix_keys( km, 'IN1 IN2 IN3 FWD OUT1 OUT2 OUT3', 2,
     :               status )

*  Get the parameter values from the KeyMap.
      in( 1 ) = getr( km, 'IN1', 0.0, status )
      in( 2 ) = getr( km, 'IN2', 0.0, status )
      in( 3 ) = getr( km, 'IN3', 1.0, status )
      fwd = getl( km, 'FWD', .true., status )

*  If required convert from degs to rads
      degs = getl( pars, 'DEGREES', .true., status )
      if( fwd .and. degs ) then
         in( 1 ) = in( 1 )*AST__DD2R
         in( 2 ) = in( 2 )*AST__DD2R
      end if

* Do the required conversion.
      if( fwd ) then
         call s2c( in( 1 ), in( 2 ), in( 3 ), out )
      else
         call c2s( in, out( 1 ), out( 2 ), out( 3 ) )
         if( degs ) then
            out( 1 ) = out( 1 )*AST__DR2D
            out( 2 ) = out( 2 )*AST__DR2D
         end if
      endif

*  Store the returned values in the requested global variables.
      call putr( km, 'OUT1', out( 1 ), status )
      call putr( km, 'OUT2', out( 2 ), status )
      call putr( km, 'OUT3', out( 3 ), status )

      end



      subroutine do_sleep( km, pars, status )
      implicit none
      include 'SAE_PAR'
      include 'AST_PAR'

      integer km, pars, status
      real time, getr

*  Check inherited status
      if( status .ne. sai__ok ) return

*  If required display help info.
      if( km .le. ast__null + 10 ) then
         if( km .eq. ast__null ) then
            call echo( 0, 'SLEEP TIME' )
            call echo( 3, 'Sleep for TIME milliseconds.' )
         end if
         return
      end if

*  Ensure the second positional keyword is called TIME (the first
*  positional keyword is the command name).
      call fix_keys( km, 'TIME', 2, status )

*  Get the time delay.
      time = getr( km, 'TIME', 10.0, status )

*  Go to sleep
      if( time .gt. 0.0 ) call lpg1_sleep( time*0.001, status )

      end


      subroutine do_quit( km, pars, status )
      implicit none
      include 'SAE_PAR'
      include 'AST_PAR'

      integer km, pars, status

      if( status .ne. sai__ok ) return

      if( km .le. ast__null + 10 ) then
         if( km .eq. ast__null ) then
            call echo( 0, 'QUIT' )
            call echo( 3, 'Terminate the application (EXIT or END '//
     :                    'can also be used).' )
         end if
         return
      end if

      end


      recursive subroutine do_help( km, pars, status )
      implicit none
      include 'SAE_PAR'
      include 'AST_PAR'

      integer km, pars, status, km_arg, itopic
      character topic*30, getc*30
      logical record

*  Check inherited status
      if( status .ne. sai__ok ) return

*  If required display help info.
      if( km .le. ast__null + 10 ) then
         if( km .eq. ast__null ) then
            call echo( 0, 'HELP [[TOPIC=]<topic>]' )
            call echo( 3, 'Display help information. TOPIC can '//
     :                 'be any command name, or PARAMETERS. '//
     :                 'Abbreviations can be used. If no topic is '//
     :                 'given, help on all commands is displayed.' )
         end if
         return
      end if

         record = .false.
*  Ensure the second positional keyword is called TOPIC (the first
*  positional keyword is the command name).
      call fix_keys( km, 'TOPIC', 2, status )

*  Get the topic to be displayed.
      topic = getc( km, 'TOPIC', ' ', status )

*  Basic help is displayed if the "km" argument is set to AST__NULL.
      km_arg = AST__NULL

*  If not blank, identify the help topic, and update the "km" arg
*  to indicate the topic required.
      if( topic .ne. ' ' ) then

* SLEEP = 26
         call find( topic, 'PARAMETERS ARC AXES CLEAR EYE GREAT '//
     :              'HELP INCLUDE INCREMENT LINE MOVE OFFSET2 '//
     :              'QUADRANT QUIT REDRAW RERUN REVOLVE SET '//
     :              'SHOW SPHERE TEXT DELETE DUMP INTERSECT RADIUS '//
     :              'SLEEP FITSBOX MARK ROLL PITCH YAW FORWARD '//
     :              'BACKWARD RESET SPHSYS SPHTRAN SPH2CART',
     :              'help topic', itopic, status )

      else
         itopic = 0
      end if

*  Set a special km value to trigger parameters help.
      if( itopic .eq. 1 ) then
         km_arg = km_arg + itopic
         call do_set( km_arg, pars, status )
      end if

*  Otherwise call the command routines (in alphabetical order) to
*  display their help info.
      if( itopic .eq. 0 .or. itopic .eq. 2 ) then
         call do_arc( km_arg, pars, status )
      end if

      if( itopic .eq. 0 .or. itopic .eq. 3 ) then
         call do_axes( km_arg, pars, status )
      end if

      if( itopic .eq. 0 .or. itopic .eq. 4 ) then
         call do_clear( km_arg, ast__null, pars, record, status )
      end if

      if( itopic .eq. 0 .or. itopic .eq. 22 ) then
         call do_delete( km_arg, ast__null, pars, status )
      end if

      if( itopic .eq. 0 .or. itopic .eq. 23 ) then
         call do_dump( km_arg, ast__null, pars, status )
      end if

      if( itopic .eq. 0 .or. itopic .eq. 5 ) then
         call do_eye( km_arg, ast__null, pars, status )
      end if

      if( itopic .eq. 0 .or. itopic .eq. 6 ) then
         call do_great( km_arg, pars, status )
      end if

      if( itopic .eq. 0 .or. itopic .eq. 7 ) then
         call do_help( km_arg, pars, status )
      end if

      if( itopic .eq. 0 .or. itopic .eq. 8 ) then
         call do_include( km_arg, ast__null, pars, -1, status )
      end if

      if( itopic .eq. 0 .or. itopic .eq. 9 ) then
         call do_increment( km_arg, pars, status )
      end if

      if( itopic .eq. 0 .or. itopic .eq. 24 ) then
         call do_intersect( km_arg, pars, status )
      end if

      if( itopic .eq. 0 .or. itopic .eq. 10 ) then
         call do_line( km_arg, pars, status )
      end if

      if( itopic .eq. 0 .or. itopic .eq. 11 ) then
         call do_move( km_arg, ast__null, pars, status )
      end if

      if( itopic .eq. 0 .or. itopic .eq. 12 ) then
         call do_offset2( km_arg, pars, status )
      end if

      if( itopic .eq. 0 .or. itopic .eq. 13 ) then
         call do_quadrant( km_arg, pars, status )
      end if

      if( itopic .eq. 0 .or. itopic .eq. 14 ) then
         call do_quit( km_arg, pars, status )
      end if

      if( itopic .eq. 0 .or. itopic .eq. 25 ) then
         call do_radius( km_arg, pars, status )
      end if

      if( itopic .eq. 0 .or. itopic .eq. 15 ) then
         call do_redraw( km_arg, ast__null, pars, status )
      end if

      if( itopic .eq. 0 .or. itopic .eq. 16 ) then
         call do_rerun( km_arg, ast__null, pars, status )
      end if

      if( itopic .eq. 0 .or. itopic .eq. 17 ) then
         call do_revolve( km_arg, ast__null, pars, status )
      end if

      if( itopic .eq. 0 .or. itopic .eq. 18 ) then
         call do_set( km_arg, pars, status )
      end if

      if( itopic .eq. 0 .or. itopic .eq. 19 ) then
         call do_show( km_arg, ast__null, pars, status )
      end if

      if( itopic .eq. 0 .or. itopic .eq. 26 ) then
         call do_sleep( km_arg, pars, status )
      end if

      if( itopic .eq. 0 .or. itopic .eq. 20 ) then
         call do_sphere( km_arg, pars, status )
      end if

      if( itopic .eq. 0 .or. itopic .eq. 21 ) then
         call do_text( km_arg, pars, status )
      end if

      if( itopic .eq. 0 .or. itopic .eq. 27 ) then
         call do_fitsbox( km_arg, pars, status )
      end if

      if( itopic .eq. 0 .or. itopic .eq. 28 ) then
         call do_mark( km_arg, pars, status )
      end if

      if( itopic .eq. 0 .or. itopic .eq. 29 ) then
         call do_rpy( km_arg, ast__null, pars, 3, status )
      end if

      if( itopic .eq. 0 .or. itopic .eq. 30 ) then
         call do_rpy( km_arg, ast__null, pars, 1, status )
      end if

      if( itopic .eq. 0 .or. itopic .eq. 31 ) then
         call do_rpy( km_arg, ast__null, pars, 2, status )
      end if

      if( itopic .eq. 0 .or. itopic .eq. 32 ) then
         call do_fb( km_arg, ast__null, pars, .true., status )
      end if

      if( itopic .eq. 0 .or. itopic .eq. 33 ) then
         call do_fb( km_arg, ast__null, pars, .false., status )
      end if

      if( itopic .eq. 0 .or. itopic .eq. 34 ) then
         call do_reset( km_arg, ast__null, pars, status )
      end if

      if( itopic .eq. 0 .or. itopic .eq. 35 ) then
         call do_sphsys( km_arg, pars, status )
      end if

      if( itopic .eq. 0 .or. itopic .eq. 36 ) then
         call do_sphtran( km_arg, pars, status )
      end if

      if( itopic .eq. 0 .or. itopic .eq. 37 ) then
         call do_sph2cart( km_arg, pars, status )
      end if

      end



      subroutine echo( indent, text )
      implicit none
      integer indent, chr_len, tlen, i, j, k
      character text*(*), blank*40

      blank = ' '

      tlen = chr_len( text )
      i = 1

      do while( i .le. tlen )
         j = tlen - i + 1
         if( j + indent .gt. 70 ) then
            k = i + 70 - indent
            do while( text( k : k ) .ne. ' ' )
               k = k - 1
            end do
            if( k .le. i ) k = i + 70
         else
            k = tlen
         end if
         write(*,*) blank( : indent ),text( i : k )
         i = k + 1
      end do

      if( tlen .eq. 0 ) write(*,*) ' '

      end



      subroutine do_redraw( km, model, pars, status )
      implicit none
      include 'SAE_PAR'
      include 'AST_PAR'

      integer km, model, pars, status, ncom, icom, km_new,
     :        model_new, pars_new, geti, km_copy
      character key*30
      logical more

*  Check inherited status
      if( status .ne. sai__ok ) return

*  If required display help info.
      if( km .le. ast__null + 10 ) then
         if( km .eq. ast__null ) then
            call echo( 0, 'REDRAW' )
            call echo( 3, 'Re-draw the current scene.')
         end if
         return
      end if

*  Do it.
      call reexecute( model, .true., status )

      end


      subroutine do_rerun( km, model, pars, status )
      implicit none
      include 'SAE_PAR'
      include 'AST_PAR'

      integer km, model, pars, status, ncom, icom, km_new,
     :        model_new, pars_new, geti
      character key*30
      logical more

*  Check inherited status
      if( status .ne. sai__ok ) return

*  If required display help info.
      if( km .le. ast__null + 10 ) then
         if( km .eq. ast__null ) then
            call echo( 0, 'RERUN')
            call echo( 3, 'Re-run all stored commands.')
         end if
         return
      end if

*  Do it.
      call reexecute( model, .false., status )

      end


      subroutine reexecute( model, redraw, status )
      implicit none
      include 'SAE_PAR'
      include 'AST_PAR'

      integer model, status, ncom, icom, km_new, km_copy,
     :        model_new, pars_new, geti, ilo, tpars
      character key*30
      real getr
      logical more, redraw

*  Check inherited status
      if( status .ne. sai__ok ) return

*  Create a temporary KeyMap to use as the command store.
      model_new = ast_keymap( ' ', status )

*  Clear the screen.
      call pgpage

*  If we are re-drawing (rather than re-running), re-establish the
*  environment at the previous screen clear command.
      if( redraw ) then
         ilo = geti( model, 'RESET_ICOM', 0, status ) + 1
         if( .not. ast_mapget0a( model, 'RESET_PARS', tpars,
     :                           status ) ) then
            pars_new = ast_keymap( ' ', status )
         else
            pars_new = ast_copy( tpars, status )
            call ast_annul( tpars, status )
         end if
      else
         ilo = 1
         pars_new = ast_keymap( ' ', status )
      end if

*  Switch verbose mode off by default.
      call ast_mapput0c( pars_new, 'VERBOSE', 'NO', ' ', status )

*  Loop round executing all commands in the model.
      more = .true.
      ncom = geti( model, 'NCOM', 0, status ) + 1
      do icom = ilo, ncom
         call pos_key( icom, key )
         if( ast_mapget0a( model, key, km_new, status ) ) then
            km_copy = ast_copy( km_new, status )
            call ast_mapput0a( km_copy, 'PARS', pars_new, ' ', status )
            call execute( km_copy, model_new, pars_new, -1,
     :                    redraw, more, status )
            call ast_annul( km_copy, status )
            call ast_annul( km_new, status )
         end if
      end do

*  Annul temporary AST objects.
      call ast_annul( model_new, status )
      call ast_annul( pars_new, status )

      end



      subroutine do_arc( km, pars, status )
      implicit none
      include 'SAE_PAR'
      include 'AST_PAR'

      integer km, pars, status, geti
      real getr, cen(3), norm(3), start(3), ang, arrow
      logical degs, getl

*  Check inherited status
      if( status .ne. sai__ok ) return

*  If required display help info.
      if( km .le. ast__null + 10 ) then
         if( km .eq. ast__null ) then
            call echo( 0, 'ARC CX CY CZ NX NY NZ SX SY SZ ANG ARROW' )
            call echo( 3, 'Draw an arc of a circle centred at (CX,CY,'//
     :                 'CZ) with normal vector (NX,NY,NZ). The arc '//
     :                 'starts at (SX,SY,SZ) and subtends an angle '//
     :                 'of ANG.' )
         end if
         return
      end if

*  Ensure the positional keywords have their required names.
      call fix_keys( km, 'CX CY CZ NX NY NZ SX SY SZ ANG ARROW',
     :               2, status )

*  See if angles are supplied in degrees.
      degs = getl( pars, 'DEGREES', .true., status )

*  Set default for ang.
      if( degs ) then
         ang = 90.0
      else
         ang = AST__DPIBY2
      end if

*  Get the parameter values from the KeyMap.
      cen( 1 ) = getr( km, 'CX', 0.0, status )
      cen( 2 ) = getr( km, 'CY', 0.0, status )
      cen( 3 ) = getr( km, 'CZ', 0.0, status )
      norm( 1 ) = getr( km, 'NX', 0.0, status )
      norm( 2 ) = getr( km, 'NY', 0.0, status )
      norm( 3 ) = getr( km, 'NZ', 1.0, status )
      start( 1 ) = getr( km, 'SX', 1.0, status )
      start( 2 ) = getr( km, 'SY', 0.0, status )
      start( 3 ) = getr( km, 'SZ', 0.0, status )
      ang = getr( km, 'ANG', ang, status )
      arrow = getr( km, 'ARROW', 0.08, status )

*  Convert ang from degrees to radians if required.
      if( degs ) ang = ang*AST__DD2R

*  Draw the arc.
      call arc( pars, cen, norm, start, ang, arrow, status )

      end



      subroutine do_great( km, pars, status )
      implicit none
      include 'SAE_PAR'
      include 'AST_PAR'

      integer km, pars, status
      real getr, lon1, lat1, lon2, lat2, length, radius, start(3),
     :     end(3), norm(3), cen(3), arrow
      double precision sla_sep
      logical short, getl, degs

*  Check inherited status
      if( status .ne. sai__ok ) return

*  If required display help info.
      if( km .le. ast__null + 10 ) then
         if( km .eq. ast__null ) then
            call echo( 0, 'GREAT LON1 LAT1 LON2 LAT2 ARROW RADIUS '//
     :                 'SHORT' )
            call echo( 3, 'Draw an arc of a great circle from '//
     :                 '(LON1,LAT1) to (LON2,LAT2) with the given '//
     :                 'RADIUS. If SHORT is YES (the default) the '//
     :                 'shorter of the two possible arcs is drawn.' )
         end if
         return
      end if

*  Ensure the positional keywords have their required names.
      call fix_keys( km, 'LON1 LAT1 LON2 LAT2 ARROW RADIUS SHORT', 2,
     :               status )

*  See if angles are supplied in degrees.
      degs = getl( pars, 'DEGREES', .true., status )

*  Set default for lat2.
      if( degs ) then
         lat2 = 90.0
      else
         lat2 = AST__DPIBY2
      end if

*  Get the parameter values from the KeyMap.
      lon1 = getr( km, 'LON1', 0.0, status )
      lat1 = getr( km, 'LAT1', 0.0, status )
      lon2 = getr( km, 'LON2', 0.0, status )
      lat2 = getr( km, 'LAT2', lat2, status )
      radius = getr( km, 'RADIUS', 1.0, status )
      short = getl( km, 'SHORT', .true., status )
      arrow = getr( km, 'ARROW', 0.0, status )

*  Convert angles from degrees to radians if required.
      if( degs ) then
         lon1 = lon1*AST__DD2R
         lat1 = lat1*AST__DD2R
         lon2 = lon2*AST__DD2R
         lat2 = lat2*AST__DD2R
      end if

*  Draw the great circle.
      call s2c( lon1, lat1, radius, start )
      call s2c( lon2, lat2, radius, end )
      call cross( start, end, norm )
      length = sla_sep( lon1, lat1, lon2, lat2 )
      if( .not. short ) then
         length = 2*AST__DPI - length
         norm( 1 ) = -norm( 1 )
         norm( 2 ) = -norm( 2 )
         norm( 3 ) = -norm( 3 )
      end if
      cen(1) = 0.0
      cen(2) = 0.0
      cen(3) = 0.0

      call arc( pars, cen, norm, start, length, arrow, status )

      end


      subroutine do_fitsbox( km, pars, status )
      implicit none
      include 'SAE_PAR'
      include 'AST_PAR'

      external fsource, myline
      integer km, pars, status, i, fs, fc, stat, ival, border, geti,
     :        plot, grfcon, icol
      character file*100, getc*100
      real getr, lbnd1, ubnd1, lbnd2, ubnd2, radius, delta, x, y,
     :     gbox(4)
      real*8 bbox(4)
      logical grid, getl

*  Check inherited status
      if( status .ne. sai__ok ) return

*  If required display help info.
      if( km .le. ast__null + 10 ) then
         if( km .eq. ast__null ) then
            call echo( 0, 'FITSBOX HEADER LBND1 UBND1 LBND2 UBND2 '//
     :                 'RADIUS DELTA GRID BORDER' )
            call echo( 3, 'Draw the outline on the sphere of a '//
     :                 'rectangular area within the grid coords of a '//
     :                 'given FITS projection. RADIUS is the radius '//
     :                 'of the spehere (default 1), and DELTA is the '//
     :                 'grid coord increment between vertices in each'//
     :                 ' polyline (default 0.1).' )
            call echo( 3, 'If GRID is true (default false), a grid of'//
     :                 ' lines is draw outlining each pixel that has '//
     :                 'a centre within the supplied box.' )
            call echo( 3, 'If BORDER is non-zero (default 0), a '//
     :                 'border will be drawn around the areas '//
     :                 'containing valid WCS coords. The non-zero '//
     :                 'value supplied indicates the pen number to '//
     :                 'use.' )
         end if
         return
      end if

*  Ensure the positional keywords have their required names.
      call fix_keys( km, 'HEADER LBND1 UBND1 LBND2 UBND2 RADIUS '//
     :               'DELTA GRID BORDER', 2, status )

* Attempt to read a FrameSet from the FITS header.
      fs = AST__NULL
      file = getc( km, 'HEADER', ' ', status )
      if( file .ne. ' ' ) then
         open( 11, file=file, iostat=stat, status='old',
     :         action='read' )
         if( stat .ne. 0 ) then
            call msg_setc( 'F', file )
            call msg_out( ' ', 'Failed to open input file ^F.', status )
         else
            fc = ast_fitschan( fsource, AST_NULL, ' ', status )
            fs = ast_read( fc, status )
            if( fs .eq. AST__NULL ) then
               call msg_setc( 'F', file )
               call msg_out( ' ', 'Failed to read a FrameSet from '//
     :                       'input file ^F.', status )
            endif

*  Get any NAXIS1/2 values from the header and use as defaults.
            if( ast_getfitsi( fc, 'NAXIS1', ival, status ) ) then
               ubnd1 = ival
            else
               ubnd1 = 100.0
            end if
            if( ast_getfitsi( fc, 'NAXIS2', ival, status ) ) then
               ubnd2 = ival
            else
               ubnd2 = 100.0
            end if

            call ast_annul( fc, status )
            close( 11 )
         end if
      end if

*  Only do rest if a FrameSet was obtained.
      if( fs .ne. AST__NULL ) then

*  Get the other parameter values from the KeyMap.
         lbnd1 = getr( km, 'LBND1', 0.5, status )
         ubnd1 = getr( km, 'UBND1', ubnd1 + 0.5, status )
         lbnd2 = getr( km, 'LBND2', 0.5, status )
         ubnd2 = getr( km, 'UBND2', ubnd2 + 0.5, status )
         radius = getr( km, 'RADIUS', 1.0, status )
         delta = getr( km, 'DELTA', 0.1, status )
         grid = getl( km, 'GRID', .false., status )
         border = geti( km, 'BORDER', 0, status )

*  Draw the outline of the box (only need to do this if not drawing a
*  border).
         if( border .eq. 0 ) then
            call fitsline( pars, fs, lbnd1, lbnd2, lbnd1, ubnd2, delta,
     :                     radius, status )
            call fitsline( pars, fs, lbnd1, ubnd2, ubnd1, ubnd2, delta,
     :                     radius, status )
            call fitsline( pars, fs, ubnd1, ubnd2, ubnd1, lbnd2, delta,
     :                     radius, status )
            call fitsline( pars, fs, ubnd1, lbnd2, lbnd1, lbnd2, delta,
     :                     radius, status )
         end if

*  If required, draw the grid of pixel outlines.
         if( grid ) then

            do i =  nint( lbnd1 - 0.5 ),nint( ubnd1 - 0.5 )
               x =  real(i) + 0.5
               if( x .gt. lbnd1 .and. x .lt. ubnd1 ) then
                  call fitsline( pars, fs, x, lbnd2, x, ubnd2,
     :                           delta, radius, status )
               endif
            end do

            do i =  nint( lbnd2 - 0.5 ),nint( ubnd2 - 0.5 )
               y =  real(i) + 0.5
               if( y .gt. lbnd2 .and. y .lt. ubnd2 ) then
                  call fitsline( pars, fs, lbnd1, y, ubnd1, y,
     :                           delta, radius, status )
               endif
            end do

         end if

*  If required, draw the border.
         if( border .gt. 0 ) then
            gbox( 1 ) = lbnd1
            gbox( 2 ) = lbnd2
            gbox( 3 ) = ubnd1
            gbox( 4 ) = ubnd2
            bbox( 1 ) = lbnd1
            bbox( 2 ) = lbnd2
            bbox( 3 ) = ubnd1
            bbox( 4 ) = ubnd2
            plot = ast_plot( fs, gbox, bbox, 'grf=1,tol=0.05', status )
            grfcon = ast_getgrfcontext( plot, status )
            call ast_mapput0a( grfcon, 'MAP', fs, ' ', status )
            call ast_mapput0a( grfcon, 'KM', pars, ' ', status )
            call ast_mapput0r( grfcon, 'RADIUS', radius, ' ', status )
            call ast_grfset( plot, 'Line', myline, status )

            icol = geti( pars, 'LINE_COL', 1, status )
            call ast_mapput0i( pars, 'LINE_COL', border, ' ', status )

            grid = ast_border( plot, status )

            call ast_mapput0i( pars, 'LINE_COL', icol, ' ', status )

            call ast_annul( grfcon, status )
            call ast_annul( plot, status )
         end if

         call ast_annul( fs, status )
      end if

      end


      subroutine do_offset2( km, pars, status )
      implicit none
      include 'SAE_PAR'
      include 'AST_PAR'

      integer km, pars, status, fr
      real getr, lon, lat, pa, length, new_ang
      double precision p1(2), p2(2)
      logical degs, getl

*  Check inherited status
      if( status .ne. sai__ok ) return

*  If required display help info.
      if( km .le. ast__null + 10 ) then
         if( km .eq. ast__null ) then
            call echo( 0, 'OFFSET2 LON LAT PA LENGTH NEWLON NEWLAT '//
     :                    'NEWPA' )
            call echo( 3, 'Offset away from (LON,LAT) along a great '//
     :                    'circle at position angle PA for a distance'//
     :                    ' LENGTH, and return the end point in '//
     : 		          '(NEWLON,NEWLAT). The position angle of the'//
     :		          ' great circle at the end point is returned'//
     :   		  ' in NEWPA. See astOffset2. ' )
         end if
         return
      end if

*  Ensure the positional keywords have their required names.
      call fix_keys( km, 'LON LAT PA LENGTH NEWLON NEWLAT NEWPA', 2,
     :               status )

*  See if angles are supplied in degrees.
      degs = getl( pars, 'DEGREES', .true., status )

*  Set default for length.
      if( degs ) then
         length = 180.0
      else
         length = AST__DPI
      end if

*  Get the parameter values from the KeyMap.
      lon = getr( km, 'LON', 0.0, status )
      lat = getr( km, 'LAT', 0.0, status )
      pa = getr( km, 'PA', 0.0, status )
      length = getr( km, 'LENGTH', length, status )

*  Calculate the returned values.
      if( degs ) then
         lon = lon*AST__DD2R
         lat = lat*AST__DD2R
         pa = pa*AST__DD2R
         length = length*AST__DD2R
      end if

      p1(1) = dble( lon )
      p1(2) = dble( lat )
      fr = ast_skyframe( ' ', status )
      new_ang = real( ast_offset2( fr, p1, dble(pa), dble(length), p2,
     :                             status ))
      if( degs ) then
         new_ang = new_ang*AST__DR2D
         p2(1) = p2(1)*AST__DR2D
         p2(2) = p2(2)*AST__DR2D
      end if
      call ast_annul( fr, status )

*  Store the returned values in the requested global variables.
      call putr( km, 'NEWLON', real( p2(1) ), status )
      call putr( km, 'NEWLAT', real( p2(2) ), status )
      call putr( km, 'NEWPA', new_ang, status )

      end


      subroutine do_intersect( km, pars, status )
      implicit none
      include 'SAE_PAR'
      include 'AST_PAR'

      integer km, pars, status, fr, l
      real getr
      double precision a1(2), a2(2), b1(2), b2(2), cross(2)
      character cval*10
      logical degs, getl

*  Check inherited status
      if( status .ne. sai__ok ) return

*  If required display help info.
      if( km .le. ast__null + 10 ) then
         if( km .eq. ast__null ) then
            call echo( 0, 'INTERSECT LONA1 LATA1 LONA2 LATA2 '//
     :                    'LONB1 LATB1 LONB2 LATB2 NEWLON NEWLAT' )
            call echo( 3, 'Find the intersection between two great '//
     :                    'circles, one passing through A1 and A2, '//
     :                    'and the other passing through B1 and B2.' )
         end if
         return
      end if

*  Ensure the positional keywords have their required names.
      call fix_keys( km, ' LONA1 LATA1 LONA2 LATA2 LONB1 LATB1 '//
     :               'LONB2 LATB2 NEWLON NEWLAT', 2, status )

*  See if angles are supplied in degrees.
      degs = getl( pars, 'DEGREES', .true., status )

*  Set defaults
      a1( 2 ) = -45.0
      a2( 2 ) = 45.0
      b1( 1 ) = -45.0
      b2( 1 ) = 45.0
      if( .not. degs ) then
         a1( 2 ) = a1( 2 )*AST__DD2R
         a2( 2 ) = a2( 2 )*AST__DD2R
         b1( 1 ) = b1( 1 )*AST__DD2R
         b2( 1 ) = b2( 1 )*AST__DD2R
      end if

*  Get the parameter values from the KeyMap.
      a1( 1 ) = dble( getr( km, 'LONA1', 0.0, status ) )
      a1( 2 ) = dble( getr( km, 'LATA1', real(a1(2)), status ) )
      a2( 1 ) = dble( getr( km, 'LONA2', 0.0, status ) )
      a2( 2 ) = dble( getr( km, 'LATA2', real(a2(2)), status ) )
      b1( 1 ) = dble( getr( km, 'LONB1', real(b1(1)), status ) )
      b1( 2 ) = dble( getr( km, 'LATB1', 0.0, status ) )
      b2( 1 ) = dble( getr( km, 'LONB2', real(b2(1)), status ) )
      b2( 2 ) = dble( getr( km, 'LATB2', 0.0, status ) )

*  Convert from degs to radians if required.
      if( degs ) then
         a1( 1 ) = a1( 1 )*AST__DD2R
         a1( 2 ) = a1( 2 )*AST__DD2R
         a2( 1 ) = a2( 1 )*AST__DD2R
         a2( 2 ) = a2( 2 )*AST__DD2R
         b1( 1 ) = b1( 1 )*AST__DD2R
         b1( 2 ) = b1( 2 )*AST__DD2R
         b2( 1 ) = b2( 1 )*AST__DD2R
         b2( 2 ) = b2( 2 )*AST__DD2R
      end if

*  Calculate the returned values.
      fr = ast_skyframe( ' ', status )
      call ast_intersect( fr, a1, a2, b1, b2, cross, status )
      call ast_annul( fr, status )

*  Store the returned values in the requested global variables.
      if( cross(1) .ne. AST__BAD .and. cross(2) .ne. AST__BAD ) then
         call putr( km, 'NEWLON', real( cross(1)*AST__DR2D ), status )
         call putr( km, 'NEWLAT', real( cross(2)*AST__DR2D ), status )
      else
         status = sai__error
         call err_rep( ' ', 'No intersection found', status )
      end if

      end



      subroutine do_quadrant( km, pars, status )
      implicit none
      include 'SAE_PAR'
      include 'AST_PAR'

      integer km, pars, status, geti
      character getc*3, quad*3
      real getr, radius, cen(3), start(3), norm(3), ang

*  Check inherited status
      if( status .ne. sai__ok ) return

*  If required display help info.
      if( km .le. ast__null + 10 ) then
         if( km .eq. ast__null ) then
            call echo( 0, 'QUADRANT QUAD RADIUS' )
            call echo( 3, 'Draw a quadrant. QUAD is a string of 3 '//
     :                 'pluses or minuses (one for each axis) '//
     :                 'indicating which quadrant to draw.' )
         end if
         return
      end if

*  Ensure the positional keywords have their required names.
      call fix_keys( km, 'QUAD RADIUS', 2, status )

*  Get the parameter values from the KeyMap.
      quad = getc( km, 'QUAD', '+++', status )
      radius = getr( km, 'RADIUS', 1.0, status )

*  Draw the 3 arcs making up the quadrant.
      ang = 90.0*AST__DD2R

      cen(1) = 0.0
      cen(2) = 0.0
      cen(3) = 0.0

      start(2) = 0.0
      start(3) = 0.0

      norm(1) = 0.0
      norm(2) = 0.0
      norm(3) = 1.0

      if( quad( 1 : 1 ) .eq. '+' ) then
         start(1) = radius
         if( quad( 2 : 2 ) .ne. '+' ) ang = -ang
      else
         start(1) = -radius
         if( quad( 2 : 2 ) .eq. '+' ) ang = -ang
      end if

      call arc( pars, cen, norm, start, ang, 0.0, status )

      ang = 90.0*AST__DD2R

      start(1) = 0.0
      start(3) = 0.0

      norm(1) = 1.0
      norm(2) = 0.0
      norm(3) = 0.0

      if( quad( 2 : 2 ) .eq. '+' ) then
         start(2) = radius
         if( quad( 3 : 3 ) .ne. '+' ) ang = -ang
      else
         start(2) = -radius
         if( quad( 3 : 3 ) .eq. '+' ) ang = -ang
      end if

      call arc( pars, cen, norm, start, ang, 0.0, status )

      ang = 90.0*AST__DD2R

      start(1) = 0.0
      start(3) = 0.0

      norm(1) = 0.0
      norm(2) = 1.0
      norm(3) = 0.0

      if( quad( 3 : 3 ) .eq. '+' ) then
         start(3) = radius
         if( quad( 1 : 1 ) .ne. '+' ) ang = -ang
      else
         start(3) = -radius
         if( quad( 1 : 1 ) .eq. '+' ) ang = -ang
      end if

      call arc( pars, cen, norm, start, ang, 0.0, status )

      end

      subroutine do_axes( km, pars, status )
      implicit none
      include 'SAE_PAR'
      include 'AST_PAR'

      integer km, pars, status
      real getr, origin(3), axlen, phi, theta, psi
      character getc*30, tx*30, ty*30, tz*30, order*30
      logical getl

*  Check inherited status
      if( status .ne. sai__ok ) return

*  If required display help info.
      if( km .le. ast__null + 10 ) then
         if( km .eq. ast__null ) then
            call echo( 0, 'AXES OX OY OZ AXLEN TX TY TZ ORDER PHI '//
     :              'THETA PSI' )
            call echo( 3, 'Draw axes centred at (OX,OY,OZ), each of '//
     :                 'length AXLEN. TX, TY and TZ are the axis '//
     :                 'labels. ORDER is either a set of X/Y/Z chars '//
     :                 'indicating the rotation axes for the '//
     :                 'following angles, or the name of a '//
     :                 'pre-defined spherical coordinate system '//
     :                 '(see command SPHSYS - the following angles '//
     :                 'are ignored in this case). PHI, THETA and PSI'//
     :                 ' are angles that indicate how the axes '//
     :                 'should be oriented (see sla_deuler).' )
         end if
         return
      end if

*  Ensure the positional keywords have their required names.
      call fix_keys( km, 'OX OY OZ AXLEN TX TY TZ ORDER PHI THETA PSI',
     :               2, status )

*  Get the parameter values from the KeyMap.
      origin( 1 ) = getr( km, 'OX', 0.0, status )
      origin( 2 ) = getr( km, 'OY', 0.0, status )
      origin( 3 ) = getr( km, 'OZ', 0.0, status )
      axlen = getr( km, 'AXLEN', 1.0, status )
      tx = getc( km, 'TX', 'X', status )
      ty = getc( km, 'TY', 'Y', status )
      tz = getc( km, 'TZ', 'Z', status )
      order = getc( km, 'ORDER', ' ', status )
      phi = getr( km, 'PHI', 0.0, status )
      theta = getr( km, 'THETA', 0.0, status )
      psi = getr( km, 'PSI', 0.0, status )

*  If required convert from degs to rads
      if( getl( pars, 'DEGREES', .true., status ) ) then
         phi = phi*AST__DD2R
         theta = theta*AST__DD2R
         psi = psi*AST__DD2R
      end if

*  Draw the axes.
      call axes( pars, origin, axlen, tx, ty, tz, order, phi,
     :           theta, psi, status )

      end


      subroutine do_text( km, pars, status )
      implicit none
      include 'SAE_PAR'
      include 'AST_PAR'

      integer km, pars, status
      real getr, r(3), u(3), n(3)
      character getc*30, t*80, j*5

*  Check inherited status
      if( status .ne. sai__ok ) return

*  If required display help info.
      if( km .le. ast__null + 10 ) then
         if( km .eq. ast__null ) then
            call echo( 0, 'TEXT X Y Z JUST UX UY UZ NX NY NZ' )
            call echo( 3, 'Draw a string with its reference point '//
     :                 '(given by JUST) at (X,Y,Z). (NX,NY,NZ) '//
     :                 'is a vector normal to the text plane, '//
     :                 'and up vector is the projection of '//
     :                 '(UX,UY,UZ) onto the text plane.' )
         end if
         return
      end if

*  Ensure the positional keywords have their required names.
      call fix_keys( km, 'STRING X Y Z JUST UX UY UZ NX NY NZ',
     :               2, status )

*  Get the parameter values from the KeyMap.
      t = getc( km, 'STRING', '<null text>', status )
      r( 1 ) = getr( km, 'X', 0.0, status )
      r( 2 ) = getr( km, 'Y', 0.0, status )
      r( 3 ) = getr( km, 'Z', 0.0, status )
      j = getc( km, 'JUST', 'CC', status )
      u( 1 ) = getr( km, 'UX', 0.0, status )
      u( 2 ) = getr( km, 'UY', 0.0, status )
      u( 3 ) = getr( km, 'UZ', 1.0, status )
      n( 1 ) = getr( km, 'NX', 0.0, status )
      n( 2 ) = getr( km, 'NY', 0.0, status )
      n( 3 ) = getr( km, 'NZ', 0.0, status )

*  Draw the text.
      call g3d_text( pars, t, r, j, u, n, status )

      end

      subroutine do_mark( km, pars, status )
      implicit none
      include 'SAE_PAR'
      include 'AST_PAR'

      integer km, pars, status, l, itype, geti
      real getr, pos(3), lon, lat, radius
      character text*20
      logical degs, getl

*  Check inherited status
      if( status .ne. sai__ok ) return

*  If required display help info.
      if( km .le. ast__null + 10 ) then
         if( km .eq. ast__null ) then
            call echo( 0, 'MARK LON LAT TYPE RADIUS' )
            call echo( 3, 'Draw a marker at the specified position.' )
         end if
         return
      end if

*  Ensure the positional keywords have their required names.
      call fix_keys( km, 'LON LAT TYPE RADIUS', 2, status )

*  See if angles are supplied in degrees.
      degs = getl( pars, 'DEGREES', .true., status )

*  Set defaults.
      if( degs ) then
         lon = 45.0
         lat = 45.0
      else
         lon = 0.5*AST__DPIBY2
         lat = 0.5*AST__DPIBY2
      end if

*  Get the coords.
      lon = getr( km, 'LON', lon, status )
      lat = getr( km, 'LAT', lat, status )
      itype = geti( km, 'TYPE', 1, status )
      radius = getr( km, 'RADIUS', 1.0, status )

*  Convert ang from degrees to radians if required.
      if( degs ) then
         lon = lon*AST__DD2R
         lat = lat*AST__DD2R
      end if

*  Draw the marker.
      call s2c( lon, lat, radius, pos )
      call g3d_mark( pars, pos(1), pos(2), pos(3), itype, status )

      end


      subroutine do_sphere( km, pars, status )
      implicit none
      include 'SAE_PAR'
      include 'AST_PAR'

      integer km, pars, status
      real getr
      character getc*30

*  Check inherited status
      if( status .ne. sai__ok ) return

*  If required display help info.
      if( km .le. ast__null + 10 ) then
         if( km .eq. ast__null ) then
            call echo( 0, 'SPHERE' )
            call echo( 3, 'Draw a sphere. NOT YET IMPLEMENTED.' )
         end if
         return
      end if

*  Ensure the positional keywords have their required names.
      call fix_keys( km, ' ',
     :               2, status )

*  Get the parameter values from the KeyMap.

*  Draw the sphere.

      end



      subroutine do_line( km, pars, status )
      implicit none
      include 'SAE_PAR'
      include 'AST_PAR'

      integer km, pars, status
      real getr, x(2), y(2), z(2)

*  Check inherited status
      if( status .ne. sai__ok ) return

*  If required display help info.
      if( km .le. ast__null + 10 ) then
         if( km .eq. ast__null ) then
            call echo( 0, 'LINE X1 Y1 Z1 X2 Y2 Z2' )
            call echo( 3, 'Draw a line from (X1,Y1,Z1) to (X2,Y2,Z2).' )
         end if
         return
      end if

*  Ensure the positional keywords have their required names.
      call fix_keys( km, 'X1 Y1 Z1 X2 Y2 Z2', 2, status )

*  Get the coords.
      x( 1 ) = getr( km, 'X1', 0.0, status )
      y( 1 ) = getr( km, 'Y1', 0.0, status )
      z( 1 ) = getr( km, 'Z1', 0.0, status )
      x( 2 ) = getr( km, 'X2', 1.0, status )
      y( 2 ) = getr( km, 'Y2', 1.0, status )
      z( 2 ) = getr( km, 'Z2', 1.0, status )

*  Draw the line.
      call g3d_line( pars, .false., 2, x, y, z, status )

      end

      subroutine do_radius( km, pars, status )
      implicit none
      include 'SAE_PAR'
      include 'AST_PAR'

      integer km, pars, status, l
      real getr, x(2), y(2), z(2), end(3), lon, lat, radius
      character text*20
      logical degs, getl

*  Check inherited status
      if( status .ne. sai__ok ) return

*  If required display help info.
      if( km .le. ast__null + 10 ) then
         if( km .eq. ast__null ) then
            call echo( 0, 'RADIUS LON LAT RADIUS' )
            call echo( 3, 'Draw a radius vector to the '//
     :                 'specified position.' )
         end if
         return
      end if

*  Ensure the positional keywords have their required names.
      call fix_keys( km, 'LON LAT RADIUS', 2, status )

*  See if angles are supplied in degrees.
      degs = getl( pars, 'DEGREES', .true., status )

*  Set defaults.
      if( degs ) then
         lon = 45.0
         lat = 45.0
      else
         lon = 0.5*AST__DPIBY2
         lat = 0.5*AST__DPIBY2
      end if

*  Get the coords.
      lon = getr( km, 'LON', lon, status )
      lat = getr( km, 'LAT', lat, status )
      radius = getr( km, 'RADIUS', 1.0, status )

*  Convert ang from degrees to radians if required.
      if( degs ) then
         lon = lon*AST__DD2R
         lat = lat*AST__DD2R
      end if

*  Draw the line.
      call s2c( lon, lat, radius, end )
      x(1) = 0.0
      y(1) = 0.0
      z(1) = 0.0
      x(2) = end( 1 )
      y(2) = end( 2 )
      z(2) = end( 3 )
      call g3d_line( pars, .false., 2, x, y, z, status )

      end



      subroutine do_revolve( km, model, pars, status )
      implicit none
      include 'SAE_PAR'
      include 'AST_PAR'

      integer km, model, pars, status, idir, n, i
      real getr, step, sleep
      character getc*20, dir*20

*  Check inherited status
      if( status .ne. sai__ok ) return

*  If required display help info.
      if( km .le. ast__null + 10 ) then
         if( km .eq. ast__null ) then
            call echo( 0, 'REVOLVE DIRECTION STEP SLEEP' )
            call echo( 3, 'Rotate the display through a whole '//
     :                 'revolution, in a given direction (LEFT, '//
     :                 'RIGHT, UP or DOWN). The angular step (in '//
     :                 'degs) is given by STEP and the sleep time '//
     :                 'between frames (in ms) is given by SLEEP.' )
         end if
         return
      end if

*  Ensure the positional keywords have their required names.
      call fix_keys( km, 'DIRECTION STEP SLEEP', 2, status )

*  Get the parameter values.
      dir = getc( km, 'DIRECTION', 'LEFT', status )
      call find( dir, 'RIGHT LEFT UP DOWN', 'direction', idir, status )
      if( idir .eq. 1 ) then
         idir = 4
      else if( idir .eq. 2 ) then
         idir = 3
      else if( idir .eq. 3 ) then
         idir = 1
      else
         idir = 2
      end if

      step = getr( km, 'STEP', 1.0, status )
      sleep = getr( km, 'SLEEP', 10.0, status )*0.001

*  Number of steps required.
      n = nint( 360.0/step )

*  Re-draw the scene the required number of times, rotating the eye
*  each time.
      do i = 1, n
         call pg3d_rotateeye( idir, step )
         call reexecute( model, .true., status )
         if( sleep .gt. 0.0 ) call lpg1_sleep( sleep, status )
      end do

      end


      subroutine do_eye( km, model, pars, status )
      implicit none
      include 'SAE_PAR'
      include 'AST_PAR'

      integer km, model, pars, status
      real getr, eye( 3 ), target(3), up(3), screen
      logical pg3d_seteye

*  Check inherited status
      if( status .ne. sai__ok ) return

*  If required display help info.
      if( km .le. ast__null + 10 ) then
         if( km .eq. ast__null ) then
            call echo( 0, 'EYE X Y Z' )
            call echo( 3, 'Set the eye position to (X,Y,Z).' )
         end if
         return
      end if

*  Ensure the positional keywords have their required names.
      call fix_keys( km, 'X Y Z', 2, status )

*  Get the parameter values.
      eye( 1 ) = getr( km, 'X', 4.0, status )
      eye( 2 ) = getr( km, 'Y', 3.0, status )
      eye( 3 ) = getr( km, 'Z', 2.0, status )

*  Set the eye position and redraw if succesful.
      if( .not. pg3d_seteye( eye ) ) then
         status = sai__error
         call err_rep( ' ', 'Failed to set the eye position.', status )
      else
         call ast_mapput1r( pars, 'EYE', 3, eye, ' ', status )
         call reexecute( model, .true., status )
      end if

      end



      subroutine do_clear( km, model, pars, record, status )
      implicit none
      include 'SAE_PAR'
      include 'AST_PAR'

      integer km, model, pars, status, ncom, new_pars, geti
      logical record
      character what*5, getc*5

*  Check inherited status
      if( status .ne. sai__ok ) return

*  If required display help info.
      if( km .le. ast__null + 10 ) then
         if( km .eq. ast__null ) then
            call echo( 0, 'CLEAR WHAT' )
            call echo( 3, 'Clear things. WHAT is a string containing '//
     :                 'any combination S (for Screen), P (for '//
     :                 'Parameters) or H (for command History).')
         end if
         return
      end if

*  Ensure the positional keywords have their required names.
      call fix_keys( km, 'WHAT', 2, status )

*  Get the parameter values.
      what = getc( km, 'WHAT', 'SHP', status )
      call chr_ucase( what )

*  We record the clear command in the history by default.
      record = .true.

*  Clear the parameters if needed.
      if( index( what, 'P' ) .ne. 0 ) call empty_km( pars, status )

*  Clear the command history if needed.
      if( index( what, 'H' ) .ne. 0 ) then
         call empty_km( model, status )
         record = .false.
      end if

*  Clear the screen if needed.
      if( index( what, 'S' ) .ne. 0 ) then
         call pgpage

*  If we are clearing the screen but not the command history, store the
*  index within the model of this "clear" command, and store a deep copy of
*  the parameters. This is so that we can re-establish the current
*  environment for any subsequent "redraw" operation.
         if( record ) then
            ncom = geti( model, 'NCOM', 0, status ) + 1
            call ast_mapput0i( model, 'RESET_ICOM', ncom, ' ', status )
            new_pars = ast_copy( pars, status )
            call putkm( model, 'RESET_PARS', new_pars, status )
            call ast_annul( new_pars, status )
         end if
      end if

      end

      subroutine do_delete( km, model, pars, status )
      implicit none
      include 'SAE_PAR'
      include 'AST_PAR'

      integer km, model, pars, status, ncom, ndel, icom, geti, iat,
     :        tkm
      character key*20, text *1024
      logical getl,verbose

*  Check inherited status
      if( status .ne. sai__ok ) return

*  If required display help info.
      if( km .le. ast__null + 10 ) then
         if( km .eq. ast__null ) then
            call echo( 0, 'DELETE NDEL' )
            call echo( 3, 'Delete the previous NDEL items from the '//
     :                    'command history and re-draw.' )
         end if
         return
      end if

*  Ensure the positional keywords have their required names.
      call fix_keys( km, 'NDEL', 2, status )

*  Get the number of items in the command history.
      ncom = geti( model, 'NCOM', 0, status )

*  Get the number to be deleted.
      ndel = min( ncom, geti( km, 'NDEL', 1, status ) )

*  Initial text output
      verbose = getl( pars, 'VERBOSE', .true., status )
      if( verbose ) then
         if( ndel .eq. 0 ) then
            write(*,*) 'No commands to delete'
         else
            text = 'Deleted command:'
         end if
      end if

*  Loop round deleting the required items.
      do icom = ncom, ncom - ndel + 1, -1
         call pos_key( icom, key )

         if( verbose ) then
            if( ast_mapget0a( model, key, tkm, status ) ) then
               iat = 17
               call append_command( tkm, text, iat, status )
               if( iat .gt. 3 ) write(*,*) text( : iat )
               call ast_annul( tkm, status )
            end if
         end if

         call ast_mapremove( model, key, status )
      end do

*  Update the number of commands in the model.
      call ast_mapput0i( model, 'NCOM', ncom - ndel, ' ', status )

*  Re-draw the remaining items.
      call reexecute( model, .true., status )

      end


      subroutine do_show( km, model, pars, status )
      implicit none
      include 'SAE_PAR'
      include 'AST_PAR'

      integer km, model, pars, status, ikeymap, npar, ipar, chr_len,
     :        km_defs, km_def, isys, nsys
      character getc*80, keymap*10, par*20, val*80, what*20, name*20
      logical degs, getl
      real getr, rval

*  Check inherited status
      if( status .ne. sai__ok ) return

*  If required display help info.
      if( km .le. ast__null + 10 ) then
         if( km .eq. ast__null ) then
            call echo( 0, 'SHOW WHAT' )
            call echo( 3, 'Show current information. WHAT can be a '//
     :                 'parameter name, or ALL to display all '//
     :                 'currently set parameters, or HISTORY to '//
     :                 'show the current command history, or PARS '//
     :                 'or MODEL to dump the internal pars or model '//
     :                 'KeyMap, or SPHSYS to display all currently '//
     :                 'defined spherical coordinate systems.' )
         end if
         return
      end if

*  Ensure the positional keywords have their required names.
      call fix_keys( km, 'WHAT', 2, status )

*  Get the parameter values.
      what = getc( km, 'WHAT', 'ALL', status )
      call chr_ucase( what )

*  Show the required information.
      if( what .eq. 'PARS' ) then
         call ast_show( pars, status )

      else if( what .eq. 'MODEL' ) then
         call ast_show( model, status )

      else if( what .eq. 'ALL' ) then
         npar = ast_mapsize( pars, status )
         if( npar .gt. 0 ) then
            do ipar = 1, npar
               par = ast_mapkey( pars, ipar, status )
               val = getc( pars, par, '<unset>', status )
               write(*,*) '   ',par( : chr_len( par ) ),' = ',
     :                    val( : chr_len( val ) )
            end do
         else
            write(*,*) '   No parameters have yet been set'
         end if

      else if( what .eq. 'SPHSYS' ) then
         nsys = 0
         if( ast_mapget0a( pars, 'SphSysDefs', km_defs, status ) ) then
            nsys = ast_mapsize( km_defs, status )
            if( nsys .gt. 0 ) then
               degs = getl( pars, 'DEGREES', .true., status )

               do isys = 1, nsys
                  name = ast_mapkey( km_defs, isys, status )
                  if( ast_mapget0a( km_defs, name, km_def,
     :                              status ) ) then
                     write(*,*) '   NAME = ',name(:chr_len(name))
                     val = getc( km_def, 'ORDER', '<unset>', status )
                     write(*,*) '   ORDER = ',val(:chr_len(val))

                     rval = getr( km_def, 'PHI', 0.0, status )
                     if( degs ) rval = rval*AST__DR2D
                     write(*,*) '   PHI = ',rval

                     rval = getr( km_def, 'THETA', 0.0, status )
                     if( degs ) rval = rval*AST__DR2D
                     write(*,*) '   THETA = ',rval

                     rval = getr( km_def, 'PSI', 0.0, status )
                     if( degs ) rval = rval*AST__DR2D
                     write(*,*) '   PSI = ',rval

                     val = getc( km_def, 'SRC', ' ', status )
                     if( val .ne. ' ' ) then
                        write(*,*) '   SRC = ',val(:chr_len(val))
                     endif
                     write(*,*) '   '

                     call ast_annul( km_def, status )
                  end if
               end do

            end if
            call ast_annul( km_defs, status )

         endif

         if( nsys .eq. 0 ) then
            write(*,*) '   No spherical coordinate systems are defined'
         end if

      else if( what .eq. 'HISTORY' ) then
         call dump_model( model, 6, .false., status )

      else
         call find_par( what, ipar, status )
         if( ipar .gt. 0 ) then
            val = getc( pars, what, '<unset>', status )
            write(*,*) '   ',what( : chr_len( what ) ),' = ',
     :                       val( : chr_len( val ) )
         end if
      end if

      end


      subroutine do_dump( km, model, pars, status )
      implicit none
      include 'SAE_PAR'
      include 'AST_PAR'

      integer km, model, pars, status, stat
      character getc*120, to*120
      logical cmp, getl

*  Check inherited status
      if( status .ne. sai__ok ) return

*  If required display help info.
      if( km .le. ast__null + 10 ) then
         if( km .eq. ast__null ) then
            call echo( 0, 'DUMP TO CMP' )
            call echo( 3, 'Write the current command history to '//
     :                 'a file. If CMP is true, then the commands '//
     :                 'are written out as a compound command.')
         end if
         return
      end if

*  Ensure the positional keywords have their required names.
      call fix_keys( km, 'TO CMP', 2, status )

*  Get the parameter values.
      to = getc( km, 'TO', 'draw3d.txt', status )
      cmp = getl( km, 'CMP', .false., status )

*  Open the output file on unit 7
      open( 7, file=to, iostat=stat, status='replace', action='write' )
      if( stat .ne. 0 ) then
         status = sai__error
         call msg_setc( 'F', to )
         call err_rep( ' ', 'Failed to open output file ^F.',
     :                 status )
      end if

*  Dump the command history
      call dump_model( model, 7, cmp, status )

*  Close the file.
      close( 7 )

      end



      subroutine do_move( km, model, pars, status )
      implicit none
      include 'SAE_PAR'
      include 'AST_PAR'

      logical pg3d_forward, ok
      integer km, model, pars, status, idir, nstep, i, geti
      real getr, step, sleep
      character getc*20, dir*20

*  Check inherited status
      if( status .ne. sai__ok ) return

*  If required display help info.
      if( km .le. ast__null + 10 ) then
         if( km .eq. ast__null ) then
            call echo( 0, 'MOVE DIRECTION STEP NSTEP SLEEP' )
            call echo( 3, 'Move the eye a distance STEP in a given  '//
     :                 'direction (FORWARDS, BACKWARDS, LEFT, '//
     :                 'RIGHT, UP or DOWN). NSTEP steps are '//
     :                 'taken with a sleep of SLEEP ms between each.' )
         end if
         return
      end if

*  Ensure the positional keywords have their required names.
      call fix_keys( km, 'DIRECTION STEP NSTEP SLEEP', 2, status )

*  Get the parameter values.
      dir = getc( km, 'DIRECTION', 'LEFT', status )
      call find( dir, 'RIGHT LEFT UP DOWN FORWARDS BACKWARDS',
     :           'direction', idir, status )
      if( idir .eq. 1 ) then
         idir = 4
      else if( idir .eq. 2 ) then
         idir = 3
      else if( idir .eq. 3 ) then
         idir = 1
      else  if( idir .eq. 4 ) then
         idir = 2
      end if

      nstep = geti( km, 'NSTEP', 1, status )
      step = getr( km, 'STEP', 1.0, status )
      sleep = getr( km, 'SLEEP', 10.0, status )*0.001

*  Re-draw the scene the required number of times, moving the eye
*  each time.
      do i = 1, nstep
         if( idir .eq. 5 ) then
            ok = pg3d_forward( 0.1*step )
         else if( idir .eq. 6 ) then
            ok= pg3d_forward( -0.1*step )
         else
            call pg3d_rotateeye( idir, step )
         end if
         call reexecute( model, .true., status )
         if( sleep .gt. 0.0 ) call lpg1_sleep( sleep, status )
      end do

      end

      subroutine do_rpy( km, model, pars, rpy, status )
      implicit none
      include 'SAE_PAR'
      include 'AST_PAR'

      logical pg3d_rotatetarget
      integer getchoice

      integer km, model, pars, status, rpy, icho
      real getr, angle
      character getc*20, text1*60, text2*40, text3*40, text4*10,
     :          text5*10
      logical getl, degs

*  Check inherited status
      if( status .ne. sai__ok ) return

*  Decide what we are doing - roll, pitch or yaw.
      if( rpy .eq. 1 ) then
         text1 = 'Pitch the camera by an angle ANGLE up or down.'
         text2 = 'PITCH DIR ANGLE'
         text3 = 'Failed to pitch the camera.'
         text4 = 'UP DOWN'
         text5 = 'UP'
      else if( rpy .eq. 2 ) then
         text1 = 'Yaw the camera by an angle ANGLE left or right.'
         text2 = 'YAW DIR ANGLE'
         text3 = 'Failed to yaw the camera.'
         text4 = 'LEFT RIGHT'
         text5 = 'LEFT'
      else
         text1 = 'Roll the camera by an angle ANGLE left or right.'
         text2 = 'ROLL DIR ANGLE'
         text3 = 'Failed to roll the camera.'
         text4 = 'LEFT RIGHT'
         text5 = 'LEFT'
      end if

*  If required display help info.
      if( km .le. ast__null + 10 ) then
         if( km .eq. ast__null ) then
            call echo( 0, text2 )
            call echo( 3, text1 )
         end if
         return
      end if

*  Ensure the positional keywords have their required names.
      call fix_keys( km, 'DIR ANGLE', 2, status )

*  Is the user using rads or degs?
      degs = getl( pars, 'DEGREES', .true., status )

*  Get the default angle value from the parameters keymap.
      if( .not. ast_mapget0r( pars, 'RPY_ANGLE', angle, status ) ) then
         angle = 10.0
         if( .not. degs ) angle = angle*AST__DD2R
      end if

*  Get the parameter values from the command line
      icho = getchoice( km, 'DIR', text4, text5, status )
      angle = getr( km, 'ANGLE', angle, status )

*  Update the default angle value in the parameters keymap.
      call ast_mapput0r( pars, 'RPY_ANGLE', angle, ' ', status )

*  Rotate the camera and redraw if succesful.
      if( .not. degs ) angle = angle*AST__DR2D
      if( icho .eq. 2 ) angle = -angle
      if( .not. pg3d_rotatetarget( rpy, angle ) ) then
         status = sai__error
         call err_rep( ' ', text3, status )
      else
         call reexecute( model, .true., status )
      end if

      end


      subroutine do_fb( km, model, pars, forward, status )
      implicit none
      include 'SAE_PAR'
      include 'AST_PAR'

      logical pg3d_forward

      integer km, model, pars, status, rpy
      real getr, dist
      character getc*20, text1*60, text2*40, text3*40
      logical forward

*  Check inherited status
      if( status .ne. sai__ok ) return

*  Decide what we are doing - forward or bacxkwards.
      if( forward ) then
         text1 = 'Move the camera forward by a distance DIST.'
         text2 = 'FORWARD DIST'
         text3 = 'Failed to move the camera forward.'
      else
         text1 = 'Move the camera backwards by a distance DIST.'
         text2 = 'BACKWARD DIST'
         text3 = 'Failed to move the camera backwards.'
      end if

*  If required display help info.
      if( km .le. ast__null + 10 ) then
         if( km .eq. ast__null ) then
            call echo( 0, text2 )
            call echo( 3, text1 )
         end if
         return
      end if

*  Ensure the positional keywords have their required names.
      call fix_keys( km, 'DIST', 2, status )

*  Get the default distance value from the parameters keymap.
      if( .not. ast_mapget0r( pars, 'FR_DIST', dist, status ) ) then
         dist = 0.0
      end if

*  Get the parameter values.
      dist = getr( km, 'DIST', dist, status )

*  Update the default distance value in the parameters keymap.
      call ast_mapput0r( pars, 'FR_DIST', dist, ' ', status )

*  Move the camera and redraw if succesful.
      if( .not. forward ) dist = -dist
      if( .not. pg3d_forward( dist ) ) then
         status = sai__error
         call err_rep( ' ', text3, status )
      else
         call reexecute( model, .true., status )
      end if

      end


      subroutine do_reset( km, model, pars, status )
      implicit none
      include 'SAE_PAR'
      include 'AST_PAR'

      logical pg3d_autocamera
      real lbnd(3), ubnd(3)
      integer km, model, pars, status

*  Check inherited status
      if( status .ne. sai__ok ) return

*  If required display help info.
      if( km .le. ast__null + 10 ) then
         if( km .eq. ast__null ) then
            call echo( 0, 'RESET' )
            call echo( 3, 'Reset the camera to its initial state' )
         end if
         return
      end if

*  Reset the camera and redraw if succesful.
      lbnd( 1 ) = -1.0
      lbnd( 2 ) = -1.0
      lbnd( 3 ) = -1.0
      ubnd( 1 ) = 1.0
      ubnd( 2 ) = 1.0
      ubnd( 3 ) = 1.0
      if( .not. pg3d_autocamera( lbnd, ubnd ) ) then
         status = sai__error
         call err_rep( ' ', 'Failed to reset the camera', status )
      else
         call reexecute( model, .true., status )
      end if

      end



      subroutine add_model( km, model, status )
      implicit none
      include 'SAE_PAR'
      include 'AST_PAR'

      integer km, model, status, ncom, geti, km_pars, new_km, pars_km
      character key*30

*  Check inherited status.
      if( status .ne. sai__ok ) return

*  Temporarily remove the "pars" reference form within "km" so that it
*  does not get included in "model".
      km_pars = pars_km( km, status )
      if( km_pars .ne. ast__null ) then
         call ast_mapremove( km, 'PARS', status )
      else
         km_pars = ast__null
      end if

*  Put a deep copy of "km" into "model"
      ncom = geti( model, 'NCOM', 0, status ) + 1
      call pos_key( ncom, key )
      new_km = ast_copy( km, status )
      call putkm( model, key, new_km, status )
      call ast_annul( new_km, status )
      call ast_mapput0i( model, 'NCOM', ncom, ' ', status )

*  Re-instate the "pars" reference in "km"
      if( km_pars .ne. ast__null ) then
         call ast_mapput0a( km, 'PARS', km_pars, ' ', status )
         call ast_annul( km_pars, status )
      end if

      end


      subroutine find_par( name, ipar, status )
      implicit none
      include 'SAE_PAR'

      integer ipar, status
      character name*(*)

      call chr_ucase( name )
      if( name( 1 : 1 ) .le. 'Z' .and. name( 1 : 1 ) .ge. 'A' .and.
     :    name( 2 : 2 ) .le. '9' .and. name( 1 : 1 ) .ge. '0' .and.
     :    name( 3 : 3 ) .eq. ' ' ) then
         ipar = 10000
      else
         call find( name, 'REPEAT ECHO TEXT_WID '//
     :              'LINE_WID TEXT_COL LINE_COL '//
     :              'REP_SLEEP REP_CLEAR VERBOSE '//
     :              'MARK_COL MARK_WID DEGREES FR_DIST '//
     :              'RPY_ANGLE', 'parameter', ipar, status )
      end if

      end


      subroutine dump_model( model, unit, cmp, status )
      implicit none
      include 'SAE_PAR'
      include 'AST_PAR'

      integer model, unit, status, ncom, icom, km, iat, nkey, ikey, l,
     :        geti, chr_len
      logical cmp
      character key*20, text*1024, val*120

      if( status .ne. sai__ok ) return

      if( cmp ) write(unit,*) '{'

      ncom = geti( model, 'NCOM', 0, status ) + 1
      do icom = 1, ncom
         call pos_key( icom, key )
         if( ast_mapget0a( model, key, km, status ) ) then
            if( cmp ) then
               text = '   {'
               iat = 4
            else
               text = ' '
               iat = 0
            end if

            call append_command( km, text, iat, status )

            if( cmp ) then
               call chr_appnd( '}', text, iat )
               if( iat .gt. 2 ) write(unit,*) text( : iat )

            else if( iat .gt. 0 ) then
               write(unit,*) text( : iat )
            end if

            call ast_annul( km, status )
         end if
      end do

      if( cmp ) write(unit,*) '}'

      end


      subroutine append_command( km, text, iat, status )
      implicit none
      include 'SAE_PAR'
      include 'AST_PAR'

      integer coms
      common /coms/ coms

      integer km, iat, status, npar, ipar, l, geti, chr_len, ckm
      character key*20, text*(*), val*120, getc*20

      if( status .ne. sai__ok ) return

      if( ast_mapget0c( km, 'COMMAND', val, l, status ) ) then
         call chr_appnd( val, text, iat )
         if( ast_mapget0a( coms, val, ckm, status ) ) then
            npar = geti( ckm, 'NITEM', 0, status )
            do ipar = 1, npar
               call pos_key( ipar, key )
               key = getc( ckm, key, ' ', status )
               if( key .ne. ' ' ) then
                  if( ast_mapget0c( km, key, val, l, status ) ) then
                     iat = iat + 1
                     call chr_appnd( key, text, iat )
                     call chr_appnd( '=', text, iat )
                     if( index( val( : l ), ' ' ) .gt. 0 ) then
                        call chr_appnd( '"', text, iat )
                        call chr_appnd( val, text, iat )
                        call chr_appnd( '"', text, iat )
                     else
                        call chr_appnd( val, text, iat )
                     end if
                  end if
               end if
            end do
            call ast_annul( ckm, status )

         else

            npar = ast_mapsize( km, status )
            do ipar = 1, npar
               key = ast_mapkey( km, ipar, status )
               if( key .ne. 'COMMAND' .and.
     :             key .ne. 'PARS' ) then
                  if( ast_mapget0c( km, key, val, l, status ) ) then
                     iat = iat + 1
                     call chr_appnd( key, text, iat )
                     call chr_appnd( '=', text, iat )
                     if( index( val( : l ), ' ' ) .gt. 0 ) then
                        call chr_appnd( '"', text, iat )
                        call chr_appnd( val, text, iat )
                        call chr_appnd( '"', text, iat )
                     else
                        call chr_appnd( val, text, iat )
                     end if
                  end if
               end if
            end do

         end if
      end if

      end



      integer function fsource( text, status )
      implicit none

      include 'SAE_PAR'
      include 'AST_PAR'

      character text*80
      integer status, stat

      fsource = 0

      if( status .ne. sai__ok ) return

      read( 11, '(A80)', iostat=stat ) text

      if( stat .gt. 0 ) then
         status = sai__error
         call err_rep( ' ', 'Failed to read input file',
     :                 status )

      else if( stat .eq. 0 ) then
         fsource = 1

      end if

      end


      subroutine fitsline( km, map, x1, y1, x2, y2, delta, radius,
     :                     status )
*+
*  Purpose:
*     Draw a straight line between two grid positions, projected onto a
*     sphere.
*
*  Arguments:
*     km = integer
*        The KeyMap holding parameter describing the pen
*     map = integer
*        Point to a (2-in,2-out) Mapping from grid coords to spherical
*        (lon,lat) coords.
*     x1 = real
*        Grid X coord at start of line
*     y1 = real
*        Grid Y coord at start of line
*     x2 = real
*        Grid X coord at end of line
*     y2 = real
*        Grid Y coord at end of line
*     delta = real
*        Increment in grid pixels between adjacent points in the polyline.
*     radius = real
*        Radius of projection sphere.
*     status = integer
*        Inherited status
*-
      implicit none

      include 'SAE_PAR'
      include 'AST_PAR'
      include 'PRM_PAR'

      integer BATCH_SIZE
      parameter ( BATCH_SIZE = 1000 )

      real x1, y1, x2, y2, delta, radius, p(3)
      integer km, map, status, np, nbatch, ilo, ihi, size, ip, ibatch
      real xs( BATCH_SIZE ), ys( BATCH_SIZE ), zs( BATCH_SIZE )
      real*8 linelen, xin( BATCH_SIZE ), yin( BATCH_SIZE )
      real*8 xout( BATCH_SIZE ), yout( BATCH_SIZE ), dx, dy, xc, yc
      real xp( 2 ), yp( 2 ), zp( 2 )
      logical bad

      if( status .ne. sai__ok ) return


      linelen = sqrt( dble( x1 - x2 )**2 + dble( y1 - y2 )**2 )
      np = int( linelen/delta )
      if( np*delta .lt. linelen ) np = np + 1
      np = np + 1

      nbatch = np/BATCH_SIZE
      if( nbatch*BATCH_SIZE .lt. np ) nbatch = nbatch + 1

      dx = ( x2 - x1 )/( np - 1 )
      dy = ( y2 - y1 )/( np - 1 )
      xc = x1
      yc = y1

      ilo = 1
      do ibatch = 1, nbatch
         ihi = ilo + BATCH_SIZE - 1
         if( ihi > np ) ihi = np
         size = ihi - ilo + 1

         do ip = 1, size
            xin( ip ) = xc
            yin( ip ) = yc
            xc = xc + dx
            yc = yc + dy
         end do


         call ast_tran2( map, size, xin, yin, .true., xout, yout,
     :                   status )

         if( ibatch .gt. 1 ) then
            xp( 1 ) = p( 1 )
            yp( 1 ) = p( 2 )
            zp( 1 ) = p( 3 )
         endif

         bad = .false.
         do ip = 1, size
            if(  xout( ip ) .ne. ast__bad .and.
     :           yout( ip ) .ne. ast__bad ) then
               call s2c( real( xout( ip )), real( yout( ip )), radius,
     :                   p )
               xs( ip ) = p( 1 )
               ys( ip ) = p( 2 )
               zs( ip ) = p( 3 )
            else
               xs( ip ) = VAL__BADR
               ys( ip ) = VAL__BADR
               zs( ip ) = VAL__BADR
               bad = .true.
            end if
         end do

         if( ibatch .gt. 1 ) then
            xp( 2 ) = xs( 1 )
            yp( 2 ) = ys( 1 )
            zp( 2 ) = zs( 1 )
            if( xp( 1 ) .ne. val__badr .and.
     :          xp( 2 ) .ne. val__badr .and.
     :          yp( 1 ) .ne. val__badr .and.
     :          yp( 2 ) .ne. val__badr .and.
     :          zp( 1 ) .ne. val__badr .and.
     :          zp( 2 ) .ne. val__badr ) then
               call g3d_line( km, .false., 2, xp, yp, zp, status )
            end if
         end if

         call g3d_line( km, bad, size, xs, ys, zs, status )

         ilo = ihi + 1
      end do

      end




      integer function myline( grfcon, np, x, y )
      implicit none

      include 'SAE_PAR'
      include 'AST_PAR'
      include 'PRM_PAR'

      integer BATCH_SIZE
      parameter ( BATCH_SIZE = 1000 )

      real p(3)
      integer grfcon, map, status, np, nbatch, ilo, ihi, size, ip,
     :        km, ibatch
      real xs( BATCH_SIZE ), ys( BATCH_SIZE ), zs( BATCH_SIZE ), radius
      real*8 xout( BATCH_SIZE ), yout( BATCH_SIZE )
      real*8 xin( BATCH_SIZE ), yin( BATCH_SIZE )
      real x(np), y(np)
      real xp( 2 ), yp( 2 ), zp( 2 )
      logical bad

      myline = 1
      status = sai__ok

      if( .not. ast_mapget0a( grfcon, 'MAP', map, status ) ) then
         status = sai__error
         call err_rep( ' ', 'No mapping in grfcon  keyMap in myline',
     :                 status )

      else if( .not. ast_mapget0a( grfcon, 'KM', km, status ) ) then
         status = sai__error
         call err_rep( ' ', 'No pars in grfcon  keyMap in myline',
     :                 status )

      else if( .not. ast_mapget0r( grfcon, 'RADIUS', radius,
     :                             status ) ) then
         status = sai__error
         call err_rep( ' ', 'No radius in grfcon  keyMap in myline',
     :                 status )

      else

         nbatch = np/BATCH_SIZE
         if( nbatch*BATCH_SIZE .lt. np ) nbatch = nbatch + 1

         ilo = 1
         do ibatch = 1, nbatch
            ihi = ilo + BATCH_SIZE - 1
            if( ihi > np ) ihi = np
            size = ihi - ilo + 1

            do ip = 1, size
               xin( ip ) = dble( x( ilo + ip - 1 ) )
               yin( ip ) = dble( y( ilo + ip - 1 ) )
            end do

            call perturb( map, size, xin, yin, .true., xout, yout,
     :                    status )

            if( ibatch .gt. 1 ) then
               xp( 1 ) = p( 1 )
               yp( 1 ) = p( 2 )
               zp( 1 ) = p( 3 )
            endif

            bad = .false.
            do ip = 1, size
               if(  xout( ip ) .ne. ast__bad .and.
     :              yout( ip ) .ne. ast__bad ) then
                  call s2c( real( xout( ip )), real( yout( ip )),
     :                      radius, p )
                  xs( ip ) = p( 1 )
                  ys( ip ) = p( 2 )
                  zs( ip ) = p( 3 )
               else
                  xs( ip ) = VAL__BADR
                  ys( ip ) = VAL__BADR
                  zs( ip ) = VAL__BADR
                  bad = .true.
               end if
            end do

            if( ibatch .gt. 1 ) then
               xp( 2 ) = xs( 1 )
               yp( 2 ) = ys( 1 )
               zp( 2 ) = zs( 1 )
               if( xp( 1 ) .ne. val__badr .and.
     :             xp( 2 ) .ne. val__badr .and.
     :             yp( 1 ) .ne. val__badr .and.
     :             yp( 2 ) .ne. val__badr .and.
     :             zp( 1 ) .ne. val__badr .and.
     :             zp( 2 ) .ne. val__badr ) then
                  call g3d_line( km, .false., 2, xp, yp, zp, status )
               end if
            end if

            call g3d_line( km, bad, size, xs, ys, zs, status )

            ilo = ihi + 1
         end do

         call ast_annul( map, status )
         call ast_annul( km, status )
      end if

      if( status .ne. sai__ok ) myline = 0;

      end



      subroutine perturb( map, n, xin, yin, forward, xout, yout,
     :                    status )

      implicit none
      include 'SAE_PAR'
      include 'AST_PAR'

      integer map, n, status, i, j
      real*8 xin(n), yin(n), xout(n), yout(n), xp(4), yp(4), xq(4),
     :       yq(4)
      logical forward

      if( status .ne. sai__ok ) return

      call ast_tran2( map, n, xin, yin, forward, xout, yout, status )

      do i = 1, n
         if( xout( i ) .eq. AST__BAD .or. yout( i ) .eq. AST__BAD ) then

            xp( 1 ) = 0.99*xin( i )
            xp( 2 ) = 1.01*xin( i )
            xp( 3 ) = xp( 1 )
            xp( 4 ) = xp( 2 )
            yp( 1 ) = 0.99*yin( i )
            yp( 2 ) = 1.01*yin( i )
            yp( 3 ) = yp( 2 )
            yp( 4 ) = yp( 1 )
            call ast_tran2( map, 4, xp, yp, forward, xq, yq, status )

            do j = 1, 4
               if( xq( j ) .ne. AST__BAD .and.
     :             yq( j ) .ne. AST__BAD ) then
                  xout( i ) = xq( j )
                  yout( i ) = yq( j )
                  goto 1
               end if
            end do

 1          continue

         end if
      end do


      end


