// Copyright (C) 1999-2021
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

// Tcl extension adding one command, asdflz4decompress, used by
// ds9/library/asdf.tcl (see ASDF_NATIVE_SUPPORT_DESIGN.md, TODO.md Phase 2)
// to decompress the lz4-compressed binary blocks real Roman ASDF files use.
// A standalone package rather than code in ds9/*/ds9.C so the logic exists
// once instead of being hand-duplicated across the unix/macos/win copies
// of that file.

#include <stdint.h>
#include <tcl.h>
#include <lz4.h>

// One chunk of ASDF's lz4 block compression: a leading 4-byte little-endian
// uncompressed-size prefix (python-lz4's lz4.block convention) followed by
// the LZ4-compressed bytes. Chunk splitting (each chunk is itself preceded,
// outside this buffer, by a 4-byte big-endian compressed length) is done in
// Tcl (ds9/library/asdf.tcl); this command only does the LZ4 decompression.
static int Asdflz4DecompressCmd(void* clientData, Tcl_Interp* interp,
				 int objc, Tcl_Obj* const objv[])
{
  if (objc != 2) {
    Tcl_WrongNumArgs(interp, 1, objv, "chunk");
    return TCL_ERROR;
  }

  Tcl_Size srcLen;
  unsigned char* src = Tcl_GetByteArrayFromObj(objv[1], &srcLen);
  if (srcLen < 4) {
    Tcl_SetObjResult(interp,
		     Tcl_NewStringObj("asdflz4decompress: chunk too short",-1));
    return TCL_ERROR;
  }

  uint32_t decodedSize = (uint32_t)src[0] | ((uint32_t)src[1]<<8) |
    ((uint32_t)src[2]<<16) | ((uint32_t)src[3]<<24);

  Tcl_Obj* result = Tcl_NewByteArrayObj(NULL, (Tcl_Size)decodedSize);
  unsigned char* dst = Tcl_SetByteArrayLength(result, (Tcl_Size)decodedSize);

  int n = LZ4_decompress_safe((const char*)(src+4), (char*)dst,
			       (int)(srcLen-4), (int)decodedSize);
  if (n < 0 || (uint32_t)n != decodedSize) {
    Tcl_DecrRefCount(result);
    Tcl_SetObjResult(interp,
		     Tcl_NewStringObj("asdflz4decompress: lz4 decompress failed",-1));
    return TCL_ERROR;
  }

  Tcl_SetObjResult(interp, result);
  return TCL_OK;
}

int Tclasdf_Init(Tcl_Interp* interp)
{
  if (Tcl_InitStubs(interp, TCL_PATCH_LEVEL, 0) == NULL)
    return TCL_ERROR;

  if (Tcl_PkgProvide(interp, PACKAGE_NAME, PACKAGE_VERSION) != TCL_OK)
    return TCL_ERROR;

  Tcl_CreateObjCommand(interp, "asdflz4decompress", Asdflz4DecompressCmd,
			NULL, NULL);

  return TCL_OK;
}
