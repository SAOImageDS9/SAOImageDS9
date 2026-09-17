// Copyright (C) 1999-2021
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

// Tcl extension used by ds9/library/asdf.tcl (see
// ASDF_NATIVE_SUPPORT_DESIGN.md, TODO.md Phases 2 and 3). A standalone
// package rather than code in ds9/*/ds9.C so the logic exists once instead
// of being hand-duplicated across the unix/macos/win copies of that file.
//
// Three commands, all here for the same reason: they are the parts of the
// ASDF read path that are too slow to do in Tcl over millions of elements.
//   asdflz4decompress - decompress one lz4 block chunk
//   asdfconvert       - widen an ndarray to a datatype fitsy can represent
//   asdfmaskblank     - resolve a masked integer array to FITS BLANK form

#include <stdint.h>
#include <string.h>
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

// fitsy accepts exactly these BITPIX values: 8, 16, -16, 32, 64, -32, -64
// (FitsFile::validParams, fitsy/file.C), where -16 is its own private code
// for unsigned 16-bit. Real Roman arrays use two datatypes outside that
// set - float16 (roman.err, var_poisson, chisq, dumo) and uint32
// (roman.dq, dq_border_ref_pix_*) - so they must be widened before the
// array/var load path can take them. Both widenings below are exactly
// lossless, which is the only reason they are acceptable at all: a
// narrowing or sign-changing coercion would silently alter pixel values.
//
//   float16 -> float32  half has an 11-bit significand and 5-bit exponent,
//                       every value of which (subnormals, inf and nan
//                       included) is representable exactly in single.
//   uint32  -> int64    zero extension; int64's positive range covers all
//                       of uint32.
//
// Output is always little-endian regardless of the input's byteorder, so
// the caller passes a fixed arch=little to fitsy rather than tracking it.

static uint32_t AsdfHalfToFloatBits(uint16_t h)
{
  uint32_t sign = (uint32_t)(h >> 15) << 31;
  uint32_t exp = (uint32_t)((h >> 10) & 0x1f);
  uint32_t mant = (uint32_t)(h & 0x3ff);

  // inf / nan: exponent all ones is preserved as such
  if (exp == 0x1f)
    return sign | 0x7f800000u | (mant << 13);

  // normalized: rebias 15 -> 127, mantissa 10 bits -> 23
  if (exp != 0)
    return sign | ((exp + 112u) << 23) | (mant << 13);

  // zero
  if (mant == 0)
    return sign;

  // subnormal half, which is a *normalized* float. With p the index of the
  // high set bit of mant, the value is 2^(p-24) * (1 + r/2^p), so the float
  // exponent is p+103 and the mantissa is r shifted up to 23 bits.
  int p = 9;
  while (!(mant & (1u << p)))
    p--;
  uint32_t r = mant & ((1u << p) - 1);

  return sign | ((uint32_t)(p + 103) << 23) | (r << (23 - p));
}

static int AsdfConvertCmd(void* clientData, Tcl_Interp* interp,
			   int objc, Tcl_Obj* const objv[])
{
  if (objc != 5) {
    Tcl_WrongNumArgs(interp, 1, objv, "bytes fromType fromByteorder toType");
    return TCL_ERROR;
  }

  Tcl_Size srcLen;
  unsigned char* src = Tcl_GetByteArrayFromObj(objv[1], &srcLen);
  const char* from = Tcl_GetString(objv[2]);
  const char* order = Tcl_GetString(objv[3]);
  const char* to = Tcl_GetString(objv[4]);

  int big = !strcmp(order, "big");

  int srcSize;
  int dstSize;
  if (!strcmp(from, "float16") && !strcmp(to, "float32")) {
    srcSize = 2;
    dstSize = 4;
  }
  else if (!strcmp(from, "uint32") && !strcmp(to, "int64")) {
    srcSize = 4;
    dstSize = 8;
  }
  else {
    Tcl_SetObjResult(interp, Tcl_ObjPrintf(
      "asdfconvert: unsupported conversion %s -> %s", from, to));
    return TCL_ERROR;
  }

  if (srcLen % srcSize) {
    Tcl_SetObjResult(interp, Tcl_ObjPrintf(
      "asdfconvert: %s buffer length %" TCL_SIZE_MODIFIER "d is not a multiple of %d",
      from, srcLen, srcSize));
    return TCL_ERROR;
  }

  Tcl_Size nn = srcLen / srcSize;
  Tcl_Obj* result = Tcl_NewByteArrayObj(NULL, nn * dstSize);
  unsigned char* dst = Tcl_SetByteArrayLength(result, nn * dstSize);
  if (!dst) {
    Tcl_DecrRefCount(result);
    Tcl_SetObjResult(interp,
		     Tcl_NewStringObj("asdfconvert: out of memory", -1));
    return TCL_ERROR;
  }

  for (Tcl_Size ii = 0; ii < nn; ii++) {
    const unsigned char* ss = src + ii * srcSize;
    unsigned char* dd = dst + ii * dstSize;

    if (srcSize == 2) {
      uint16_t hh = big ? (uint16_t)((ss[0] << 8) | ss[1])
			: (uint16_t)((ss[1] << 8) | ss[0]);
      uint32_t bits = AsdfHalfToFloatBits(hh);
      dd[0] = (unsigned char)(bits);
      dd[1] = (unsigned char)(bits >> 8);
      dd[2] = (unsigned char)(bits >> 16);
      dd[3] = (unsigned char)(bits >> 24);
    }
    else {
      uint32_t uu = big
	? ((uint32_t)ss[0] << 24) | ((uint32_t)ss[1] << 16) |
	  ((uint32_t)ss[2] << 8) | (uint32_t)ss[3]
	: ((uint32_t)ss[3] << 24) | ((uint32_t)ss[2] << 16) |
	  ((uint32_t)ss[1] << 8) | (uint32_t)ss[0];
      uint64_t vv = (uint64_t)uu;
      for (int bb = 0; bb < 8; bb++)
	dd[bb] = (unsigned char)(vv >> (8 * bb));
    }
  }

  Tcl_SetObjResult(interp, result);
  return TCL_OK;
}

// asdf serializes a numpy masked array as an explicit boolean `mask:`
// ndarray beside the data, where FITS marks nulls with a BLANK keyword
// naming a sentinel *value*. This converts the former to the latter so
// that DS9's existing integer-null machinery does the work: FitsData
// keeps the native integer storage and only substitutes NAN at the
// getValueFloat() boundary, and minmax skips blank pixels
// (tksao/frame/fitsdata.C). No promotion to float anywhere.
//
// Returns {blank bigEndianData}, or {} when nothing is masked. FITS is
// big-endian, so the data is byte-swapped here as part of the same pass
// the mask scan already needs.
//
// Choosing the sentinel, in order of preference:
//  1. If every masked pixel holds the same value AND no *unmasked* pixel
//     holds it, that value is BLANK and the data is unchanged. This is the
//     exact case a FITS->ASDF conversion produces (the mask was computed
//     as data == BLANK), so the original BLANK is recovered losslessly.
//  2. Otherwise pick the type's extreme value, provided no unmasked pixel
//     uses it, and write it into the masked pixels. Still integer - the
//     point of the whole exercise - but it does alter those pixels, which
//     were undefined by construction anyway.
//  3. If neither extreme is free, refuse rather than corrupt a real value.

static int AsdfLoadInt(const unsigned char* pp, int sz, int isSigned, int big,
			int64_t* out)
{
  uint64_t uu = 0;
  for (int ii = 0; ii < sz; ii++) {
    unsigned char bb = big ? pp[ii] : pp[sz - 1 - ii];
    uu = (uu << 8) | bb;
  }

  if (isSigned && sz < 8) {
    uint64_t sign = (uint64_t)1 << (sz * 8 - 1);
    if (uu & sign)
      uu |= ~((sign << 1) - 1);
  }

  *out = (int64_t)uu;
  return 1;
}

static int AsdfMaskBlankCmd(void* clientData, Tcl_Interp* interp,
			     int objc, Tcl_Obj* const objv[])
{
  if (objc != 5) {
    Tcl_WrongNumArgs(interp, 1, objv, "data mask datatype byteorder");
    return TCL_ERROR;
  }

  Tcl_Size dataLen, maskLen;
  unsigned char* data = Tcl_GetByteArrayFromObj(objv[1], &dataLen);
  unsigned char* mask = Tcl_GetByteArrayFromObj(objv[2], &maskLen);
  const char* type = Tcl_GetString(objv[3]);
  const char* order = Tcl_GetString(objv[4]);

  int big = !strcmp(order, "big");

  int sz, isSigned;
  int64_t tmin, tmax;
  if (!strcmp(type, "uint8")) {
    sz = 1; isSigned = 0; tmin = 0; tmax = 255;
  }
  else if (!strcmp(type, "int16")) {
    sz = 2; isSigned = 1; tmin = -32768; tmax = 32767;
  }
  else if (!strcmp(type, "int32")) {
    sz = 4; isSigned = 1; tmin = -2147483648LL; tmax = 2147483647LL;
  }
  else if (!strcmp(type, "int64")) {
    sz = 8; isSigned = 1; tmin = INT64_MIN; tmax = INT64_MAX;
  }
  else {
    Tcl_SetObjResult(interp, Tcl_ObjPrintf(
      "asdfmaskblank: unsupported datatype %s", type));
    return TCL_ERROR;
  }

  if (dataLen != maskLen * sz) {
    Tcl_SetObjResult(interp, Tcl_ObjPrintf(
      "asdfmaskblank: data length %" TCL_SIZE_MODIFIER "d does not match %"
      TCL_SIZE_MODIFIER "d mask elements of %d bytes", dataLen, maskLen, sz));
    return TCL_ERROR;
  }

  Tcl_Size nn = maskLen;
  int64_t common = 0;
  Tcl_Size nmasked = 0;
  int uniq = 1;
  int commonUsed = 0, minUsed = 0, maxUsed = 0;

  for (Tcl_Size ii = 0; ii < nn; ii++) {
    int64_t vv;
    AsdfLoadInt(data + ii * sz, sz, isSigned, big, &vv);
    if (mask[ii]) {
      if (!nmasked)
	common = vv;
      else if (vv != common)
	uniq = 0;
      nmasked++;
    }
    else {
      if (vv == tmin) minUsed = 1;
      if (vv == tmax) maxUsed = 1;
    }
  }

  if (!nmasked) {
    Tcl_SetObjResult(interp, Tcl_NewListObj(0, NULL));
    return TCL_OK;
  }

  // a second pass is only needed to test the candidate itself
  if (uniq) {
    for (Tcl_Size ii = 0; ii < nn; ii++) {
      if (mask[ii])
	continue;
      int64_t vv;
      AsdfLoadInt(data + ii * sz, sz, isSigned, big, &vv);
      if (vv == common) {
	commonUsed = 1;
	break;
      }
    }
  }

  int64_t blank;
  int rewrite;
  if (uniq && !commonUsed) {
    blank = common;
    rewrite = 0;
  }
  else {
    int64_t c0 = isSigned ? tmin : tmax;
    int64_t c1 = isSigned ? tmax : tmin;
    int u0 = isSigned ? minUsed : maxUsed;
    int u1 = isSigned ? maxUsed : minUsed;

    if (!u0)
      blank = c0;
    else if (!u1)
      blank = c1;
    else {
      Tcl_SetObjResult(interp, Tcl_NewStringObj(
        "asdfmaskblank: no unused value available for BLANK", -1));
      return TCL_ERROR;
    }
    rewrite = 1;
  }

  Tcl_Obj* out = Tcl_NewByteArrayObj(NULL, dataLen);
  unsigned char* dst = Tcl_SetByteArrayLength(out, dataLen);
  if (!dst) {
    Tcl_DecrRefCount(out);
    Tcl_SetObjResult(interp,
		     Tcl_NewStringObj("asdfmaskblank: out of memory", -1));
    return TCL_ERROR;
  }

  for (Tcl_Size ii = 0; ii < nn; ii++) {
    int64_t vv;
    if (rewrite && mask[ii])
      vv = blank;
    else
      AsdfLoadInt(data + ii * sz, sz, isSigned, big, &vv);

    uint64_t uu = (uint64_t)vv;
    unsigned char* dd = dst + ii * sz;
    for (int bb = 0; bb < sz; bb++)
      dd[sz - 1 - bb] = (unsigned char)(uu >> (8 * bb));
  }

  Tcl_Obj* res[2];
  res[0] = Tcl_NewWideIntObj((Tcl_WideInt)blank);
  res[1] = out;
  Tcl_SetObjResult(interp, Tcl_NewListObj(2, res));
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

  Tcl_CreateObjCommand(interp, "asdfconvert", AsdfConvertCmd, NULL, NULL);

  Tcl_CreateObjCommand(interp, "asdfmaskblank", AsdfMaskBlankCmd, NULL, NULL);

  return TCL_OK;
}
