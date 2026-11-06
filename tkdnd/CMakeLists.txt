CMAKE_MINIMUM_REQUIRED ( VERSION 3.5 FATAL_ERROR )
if(POLICY CMP0074)
  cmake_policy(SET CMP0074 NEW)
endif()

SET ( TKDND_TOP_DIR "${CMAKE_CURRENT_SOURCE_DIR}" )

## ===========================================================================
##  Project Information
## ===========================================================================
PROJECT ( tkdnd )
## Package version information:
SET ( PKG_NAME          ${PROJECT_NAME} )

# Read the file named VERSION from the top TKDND directory...
FILE ( READ "${TKDND_TOP_DIR}/VERSION" TKDND_VERSION_FROM_FILE )
STRING ( REGEX MATCH "([0-9]+)\.([0-9]+)\.([0-9]+)" _ ${TKDND_VERSION_FROM_FILE} )
SET ( TKDND_MAJOR_VERSION ${CMAKE_MATCH_1} )
SET ( TKDND_MINOR_VERSION ${CMAKE_MATCH_2} )
SET ( TKDND_PATCH_VERSION ${CMAKE_MATCH_3} )
MESSAGE ( STATUS "TKDND version: ${TKDND_MAJOR_VERSION}.${TKDND_MINOR_VERSION}.${TKDND_PATCH_VERSION}" )

SET ( PKG_MAJOR_VERSION ${TKDND_MAJOR_VERSION} )
SET ( PKG_MINOR_VERSION ${TKDND_MINOR_VERSION} )
SET ( PKG_BUILD_VERSION ${TKDND_PATCH_VERSION} )
## Author:
SET ( PKG_VENDOR        "Georgios Petasis" )

## ===========================================================================
##  User options...
## ===========================================================================
set(with-tclsh "" CACHE FILEPATH "location of a working tclsh executable")
set(with-tcl   "" CACHE PATH "directory containing tcl configuration (tclConfig.sh)")

## Ensure that the variable PKG_OS_ARCH exists! If undefined, define it with
## the value "x86_32"
# IF ( NOT PKG_OS_ARCH )
#   SET ( PKG_OS_ARCH x86_32 )
# ENDIF ( NOT PKG_OS_ARCH )

IF ( POLICY CMP0042 )
  CMAKE_POLICY ( SET CMP0042 NEW )
ENDIF ( POLICY CMP0042 )

## ===========================================================================
##  No need to modify below this point!
## ===========================================================================

SET ( NO_MSVCRT ON )

# Check headers
include(CheckIncludeFile)
include(CheckIncludeFiles)

## ===========================================================================
##  Project sources
## ===========================================================================
SET ( PKG_SOURCES generic/TkDND_Cursors.c )
INCLUDE_DIRECTORIES ( generic )

IF ( WIN32 )
  ## True under windows (32bit, 64bit, Cygwin)...
  INCLUDE_DIRECTORIES ( win )
  SET ( CMAKE_SHARED_LIBRARY_PREFIX lib )
  LIST ( APPEND PKG_SOURCES win/TkDND_OleDND.cpp )

  ADD_DEFINITIONS     ( -DUNICODE )
  ADD_DEFINITIONS     ( -D_UNICODE )
  # ADD_DEFINITIONS     ( -D_MBCS )

  check_include_files(Strsafe.h       HAVE_STRSAFE_H)

  IF(HAVE_STRSAFE_H)
    ADD_DEFINITIONS ( -DHAVE_STRSAFE_H )
  ENDIF(HAVE_STRSAFE_H)

ELSE  ( WIN32 )
  ## Unix and OS X...
  IF ( APPLE )
    # SET ( CMAKE_OSX_ARCHITECTURES "x86_64;i386" )
    FIND_LIBRARY ( COCOA_LIBRARY Cocoa )
    INCLUDE_DIRECTORIES ( macosx )
    INCLUDE_DIRECTORIES ( /Library/Frameworks/Tk.framework/Versions/8.6/PrivateHeaders )
    INCLUDE_DIRECTORIES ( /System/Library/Frameworks/Tk.framework/Versions/8.5/Headers/tk-private )
    INCLUDE_DIRECTORIES ( /System/Library/Frameworks/Tk.framework/Versions/8.5/Headers/tk-private )
    ADD_DEFINITIONS     ( -DMAC_TK_COCOA -DMAC_OSX_TK)
    ADD_DEFINITIONS     ( -DMAC_OSX_TK )
    ADD_DEFINITIONS     ( -std=gnu99 )
    ADD_DEFINITIONS     ( -x objective-c )
    # ADD_DEFINITIONS     ( -fobjc-gc  )
    ADD_DEFINITIONS     ( -fobjc-arc )
    LINK_LIBRARIES      ( ${COCOA_LIBRARY} )
    LIST ( APPEND PKG_SOURCES macosx/macdnd.m )
  ELSE ( APPLE )
    INCLUDE_DIRECTORIES ( unix )
    LIST ( APPEND PKG_SOURCES unix/TkDND_XDND.c unix/tkUnixSelect.c unix/Cursors.c )
    MESSAGE ( STATUS "Searching for X11..." )
    #FIND_PACKAGE ( X11 REQUIRED )
    include(FindX11)
    IF ( X11_FOUND )
      INCLUDE_DIRECTORIES ( ${X11_INCLUDE_DIR} )
      LINK_LIBRARIES      ( ${X11_LIBRARIES} )

      IF ( X11_Xkb_FOUND )
        CHECK_INCLUDE_FILE ( "X11/XKBlib.h" HAVE_X11_EXTENSIONS_XKB_H )
        IF ( HAVE_X11_EXTENSIONS_XKB_H )
          ADD_DEFINITIONS ( -DHAVE_X11_EXTENSIONS_XKB_H )
        ENDIF ( HAVE_X11_EXTENSIONS_XKB_H )
        INCLUDE_DIRECTORIES ( ${X11_Xkb_INCLUDE_PATH} )
      ENDIF ( X11_Xkb_FOUND )

      IF ( X11_Xcursor_FOUND )
        # dnf install libXcursor-devel
        CHECK_INCLUDE_FILE ( "X11/Xcursor/Xcursor.h"
                              HAVE_X11_XCURSOR_XCURSOR_H )
        IF ( HAVE_X11_XCURSOR_XCURSOR_H )
          ADD_DEFINITIONS ( -DHAVE_X11_XCURSOR_XCURSOR_H )
        ENDIF ( HAVE_X11_XCURSOR_XCURSOR_H )
        INCLUDE_DIRECTORIES ( ${X11_Xcursor_INCLUDE_PATH} )
        LINK_LIBRARIES      ( ${X11_Xcursor_LIB} )
      ENDIF ( X11_Xcursor_FOUND )

      MESSAGE ( STATUS "  X11_INCLUDE_DIR:         " ${X11_INCLUDE_DIR} )
      MESSAGE ( STATUS "  X11_LIBRARIES:           " ${X11_LIBRARIES} )

    ENDIF ( X11_FOUND )
  ENDIF ( APPLE )
ENDIF ( WIN32 )

##
## If we are building with MINGW, link statically to its libs...
##
IF ( MINGW )
  SET ( NO_MSVCRT OFF )
  INCLUDE ( CheckCCompilerFlag )
  CHECK_C_COMPILER_FLAG ( -static-libgcc    FLAG_static_libgcc    )
  CHECK_C_COMPILER_FLAG ( -static-libstdc++ FLAG_static_libstdcpp )
  IF ( FLAG_static_libgcc )
    MESSAGE ( STATUS " -> MINGW detected: adding -static-libgcc!" )
    SET ( CMAKE_SHARED_LINKER_FLAGS
       "${CMAKE_SHARED_LINKER_FLAGS} -static-libgcc" )
  ENDIF ( FLAG_static_libgcc )
  IF ( FLAG_static_libstdcpp )
    MESSAGE ( STATUS " -> MINGW detected: adding -static-libstdc++!" )
    SET ( CMAKE_SHARED_LINKER_FLAGS
       "${CMAKE_SHARED_LINKER_FLAGS} -static-libstdc++" )
  ENDIF (FLAG_static_libstdcpp )
ENDIF ( MINGW )

## Arange project version information...
SET ( PKG_VERSION
     "${PKG_MAJOR_VERSION}.${PKG_MINOR_VERSION}.${PKG_BUILD_VERSION}" )
#SET ( PKG_VERSION
#     "${PKG_MAJOR_VERSION}.${PKG_MINOR_VERSION}" )
SET ( PKG_NAME_VERSION  ${PKG_NAME}-${PKG_VERSION} )
SET ( PKG_HOME_DIR      ${PROJECT_SOURCE_DIR} )

## Greet the user...
MESSAGE ( STATUS "===========================================================" )
MESSAGE ( STATUS " Welcome to the ${PKG_NAME} ${PKG_VERSION} build system!" )
MESSAGE ( STATUS "  * Selected generator:  ${CMAKE_GENERATOR}" )
MESSAGE ( STATUS "  * Operating System ID: "
        ${CMAKE_SYSTEM_NAME}-${CMAKE_SYSTEM_VERSION}-${CMAKE_SYSTEM_PROCESSOR} )
MESSAGE ( STATUS "  * Installation Directory: " ${CMAKE_INSTALL_PREFIX} )
MESSAGE ( STATUS "===========================================================" )

## Allow additional cmake modules in the modules directory...
SET ( CMAKE_MODULE_PATH cmake/modules )

## ===========================================================================
##  Utilities
## ===========================================================================
SET ( RM           ${CMAKE_COMMAND} -E remove -f )
SET ( RM_FLAGS     )
SET ( RMDIR        ${CMAKE_COMMAND} -E remove_directory )
SET ( RMDIR_FLAGS  )
SET ( MKDIR        ${CMAKE_COMMAND} -E make_directory )
SET ( CP           ${CMAKE_COMMAND} -E copy )

## ===========================================================================
##  Locate Tcl/Tk
## ===========================================================================
MESSAGE ( STATUS "Searching for Tcl/Tk..." )
if (NOT "${with-tcl}" STREQUAL "")
  MESSAGE ( STATUS "  Tcl lib directory manually set by -Dwith-tcl=" ${with-tcl} )
  get_filename_component(TKDND_TCL_ROOT "${with-tcl}" DIRECTORY)
  MESSAGE ( STATUS "  Setting Tcl root to: " ${TKDND_TCL_ROOT} )
  set ( CMAKE_PREFIX_PATH ${CMAKE_PREFIX_PATH} ${TKDND_TCL_ROOT} )
  set (TCL_ROOT ${TKDND_TCL_ROOT})
  set (TclStub_ROOT ${TKDND_TCL_ROOT})
endif ()
if (NOT "${with-tclsh}" STREQUAL "")
  MESSAGE ( STATUS "  Tclsh manually set by -Dwith-tclsh=" ${with-tclsh} )
  set (TCL_TCLSH ${with-tclsh})
endif ()
FIND_PACKAGE ( TCL REQUIRED )
FIND_PACKAGE ( TclStub REQUIRED )

## Tcl/Tk info (useful for debug purposes)...
  MESSAGE ( STATUS "  TCL_TCLSH:               " ${TCL_TCLSH} )
  MESSAGE ( STATUS "  TCL_INCLUDE_PATH:        " ${TCL_INCLUDE_PATH} )
  MESSAGE ( STATUS "  TCL_STUB_LIBRARY:        " ${TCL_STUB_LIBRARY} )
  MESSAGE ( STATUS "  TCL_LIBRARY:             " ${TCL_LIBRARY} )
  MESSAGE ( STATUS "  TK_WISH:                 " ${TK_WISH} )
  MESSAGE ( STATUS "  TK_INCLUDE_PATH:         " ${TK_INCLUDE_PATH} )
  MESSAGE ( STATUS "  TK_STUB_LIBRARY:         " ${TK_STUB_LIBRARY} )
  MESSAGE ( STATUS "  TK_LIBRARY:              " ${TK_LIBRARY} )

## Enable Tcl/Tk stubs globally...
ADD_DEFINITIONS     ( -DUSE_TCL_STUBS )
ADD_DEFINITIONS     ( -DUSE_TK_STUBS )
ADD_DEFINITIONS     ( -DTCL_THREADS )
INCLUDE_DIRECTORIES ( ${TCL_INCLUDE_PATH} )
INCLUDE_DIRECTORIES ( ${TK_INCLUDE_PATH} )
LINK_LIBRARIES      ( ${TCL_STUB_LIBRARY} )
LINK_LIBRARIES      ( ${TK_STUB_LIBRARY} )

IF ( WIN32 AND NO_MSVCRT )
  STRING ( REPLACE /MD  /MT  CMAKE_C_FLAGS_RELEASE   ${CMAKE_C_FLAGS_RELEASE}  )
  STRING ( REPLACE /MDd /MTd CMAKE_C_FLAGS_DEBUG     ${CMAKE_C_FLAGS_DEBUG}    )
  STRING ( REPLACE /MD  /MT  CMAKE_CXX_FLAGS_RELEASE ${CMAKE_CXX_FLAGS_RELEASE})
  STRING ( REPLACE /MDd /MTd CMAKE_CXX_FLAGS_DEBUG   ${CMAKE_CXX_FLAGS_DEBUG}  )
  SET (    CMAKE_EXE_LINKER_FLAGS
        "${CMAKE_EXE_LINKER_FLAGS} /nodefaultlib:MSVCRT.LIB" )
  SET (    CMAKE_EXE_LINKER_FLAGS_RELEASE
        "${CMAKE_EXE_LINKER_FLAGS_RELEASE} LIBCMT.LIB" )
  SET (    CMAKE_EXE_LINKER_FLAGS_DEBUG
        "${CMAKE_EXE_LINKER_FLAGS_DEBUG} LIBCMTD.LIB" )
  SET (    CMAKE_SHARED_LINKER_FLAGS
        "${CMAKE_SHARED_LINKER_FLAGS} /nodefaultlib:MSVCRT.LIB" )
  SET (    CMAKE_SHARED_LINKER_FLAGS_RELEASE
        "${CMAKE_SHARED_LINKER_FLAGS_RELEASE} LIBCMT.LIB" )
  SET (    CMAKE_SHARED_LINKER_FLAGS_DEBUG
        "${CMAKE_SHARED_LINKER_FLAGS_DEBUG}
         /nodefaultlib:LIBCMT.LIB LIBCMTD.LIB" )
  ADD_DEFINITIONS ( -D_STATIC_CPPLIB )
  ADD_DEFINITIONS ( -D_CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES=1 )
  ADD_DEFINITIONS ( -D_CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES_COUNT=1 )
  ADD_DEFINITIONS ( -D_CRT_SECURE_NO_WARNINGS )
ENDIF ( WIN32 AND NO_MSVCRT )

## Package global definitions...
ADD_DEFINITIONS   ( -DPACKAGE_NAME="${PKG_NAME}" )
ADD_DEFINITIONS   ( -DPACKAGE_VERSION="${PKG_VERSION}" )
ADD_DEFINITIONS   ( -DPACKAGE_NAME_VERSION="${PKG_NAME_VERSION}" )
ADD_DEFINITIONS   ( -DTKDND_PACKAGE="${PKG_NAME}" )
ADD_DEFINITIONS   ( -DTKDND_VERSION="${PKG_VERSION}" )

## Package debug definitions...
# ADD_DEFINITIONS   ( -DDEBUG_CLIENTMESSAGE_HANDLER )

## ===========================================================================
##  Declare the package shared library target...
## ===========================================================================
SET ( PKG_TARGET_LIB_NAME ${PKG_NAME}${PKG_VERSION} )
MESSAGE ( STATUS "      + Shared Library: ${PKG_NAME}" )
ADD_LIBRARY ( ${PKG_TARGET_LIB_NAME} SHARED ${PKG_SOURCES} )

## ===========================================================================
##  Generate the pkgIndex.tcl file...
## ===========================================================================
SET ( PACKAGE_VERSION ${PKG_VERSION} )
SET ( PACKAGE_NAME    ${PKG_NAME} )
SET ( PKG_LIB_FILE    "lib${PKG_TARGET_LIB_NAME}[info sharedlibextension]" )
configure_file(pkgIndex.tcl.in library/pkgIndex.tcl @ONLY)

## ===========================================================================
##  Declare the package install targets...
## ===========================================================================
INSTALL ( TARGETS ${PKG_TARGET_LIB_NAME}
          RUNTIME DESTINATION ${PKG_TARGET_LIB_NAME}
          LIBRARY DESTINATION ${PKG_TARGET_LIB_NAME}
          ARCHIVE DESTINATION ${PKG_TARGET_LIB_NAME} )
INSTALL ( FILES ${CMAKE_CURRENT_BINARY_DIR}/library/pkgIndex.tcl
                library/tkdnd.tcl
                library/tkdnd_generic.tcl
                library/tkdnd_compat.tcl
                library/tkdnd_macosx.tcl
                library/tkdnd_unix.tcl
                library/tkdnd_windows.tcl
                library/tkdnd_utils.tcl
          DESTINATION ${PKG_TARGET_LIB_NAME} )
