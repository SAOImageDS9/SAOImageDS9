// Copyright (C) 1999-2021
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

// Tcl extension used by ds9/library/asdf.tcl (see
// ASDF_NATIVE_SUPPORT_DESIGN.md, TODO.md Phases 2 and 3). A standalone
// package rather than code in ds9/*/ds9.C so the logic exists once instead
// of being hand-duplicated across the unix/macos/win copies of that file.
//
// Four commands, all here for the same reason: they are the parts of the
// ASDF read path that are too slow to do in Tcl over millions of elements,
// or need a codec Tcl has no binding for.
//   asdflz4decompress - decompress one lz4 block chunk
//   asdfbz2decompress - decompress one whole bzp2 block payload
//   asdfconvert       - widen an ndarray to a datatype fitsy can represent
//   asdfmask          - resolve an asdf mask to FITS BLANK / NaN form

#include <stdint.h>
#include <limits.h>
#include <string.h>
#include <tcl.h>
#include <lz4.h>
#include <bzlib.h>

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

// ASDF's bzp2 block compression. Unlike lz4 (which has no stream format,
// so asdf frames it as length-prefixed chunks) a bzp2 block payload is one
// plain bzip2 stream - verified against Tests/asdf/fixtures/bzp2/, whose
// payloads start with the "BZh9" magic at byte 0 and whose `used` header
// field is the whole compressed length. So this command takes the entire
// payload, not a chunk, and the caller passes the block header's `decoded`
// size, which is the exact expected output length.
//
// The streaming API is used rather than the one-shot
// BZ2_bzBuffToBuffDecompress for two reasons: that one takes `unsigned int`
// lengths, and it cannot span concatenated streams. asdf's own writer emits
// a single stream (Python's BZ2Compressor), and its reader would likewise
// stop at the first stream end, but tolerating a concatenation costs one
// re-init here and means a block from another writer isn't silently
// truncated - the same reason the lz4 path loops over chunks.
static int Asdfbz2DecompressCmd(void* clientData, Tcl_Interp* interp,
				int objc, Tcl_Obj* const objv[])
{
  if (objc != 3) {
    Tcl_WrongNumArgs(interp, 1, objv, "payload decodedsize");
    return TCL_ERROR;
  }

  Tcl_Size srcLen;
  unsigned char* src = Tcl_GetByteArrayFromObj(objv[1], &srcLen);

  Tcl_WideInt decodedSize;
  if (Tcl_GetWideIntFromObj(interp, objv[2], &decodedSize) != TCL_OK)
    return TCL_ERROR;
  if (decodedSize < 0) {
    Tcl_SetObjResult(interp,
		     Tcl_NewStringObj("asdfbz2decompress: negative size",-1));
    return TCL_ERROR;
  }

  Tcl_Obj* result = Tcl_NewByteArrayObj(NULL, (Tcl_Size)decodedSize);
  unsigned char* dst = Tcl_SetByteArrayLength(result, (Tcl_Size)decodedSize);

  // bz_stream counts in unsigned int, so a >4GB block (none exist today,
  // but nothing in the format forbids one) has to be fed in slices. Track
  // progress with Tcl_Size and hand bzip2 at most UINT_MAX at a time.
  bz_stream strm;
  memset(&strm, 0, sizeof(strm));
  if (BZ2_bzDecompressInit(&strm, 0, 0) != BZ_OK) {
    Tcl_DecrRefCount(result);
    Tcl_SetObjResult(interp,
		     Tcl_NewStringObj("asdfbz2decompress: init failed",-1));
    return TCL_ERROR;
  }

  Tcl_Size inDone = 0, outDone = 0;
  const char* err = NULL;
  int done = 0;

  while (!done) {
    Tcl_Size inLeft = srcLen - inDone;
    Tcl_Size outLeft = (Tcl_Size)decodedSize - outDone;

    strm.next_in = (char*)(src + inDone);
    strm.avail_in = inLeft > (Tcl_Size)UINT_MAX ? UINT_MAX : (unsigned)inLeft;
    strm.next_out = (char*)(dst + outDone);
    strm.avail_out = outLeft > (Tcl_Size)UINT_MAX ? UINT_MAX : (unsigned)outLeft;

    unsigned inBefore = strm.avail_in, outBefore = strm.avail_out;
    int rc = BZ2_bzDecompress(&strm);

    inDone += inBefore - strm.avail_in;
    outDone += outBefore - strm.avail_out;

    if (rc == BZ_STREAM_END) {
      if (inDone >= srcLen || outDone >= (Tcl_Size)decodedSize) {
	done = 1;
      } else {
	// A concatenated stream follows: finish this one and start the next.
	BZ2_bzDecompressEnd(&strm);
	memset(&strm, 0, sizeof(strm));
	if (BZ2_bzDecompressInit(&strm, 0, 0) != BZ_OK) {
	  err = "asdfbz2decompress: bzip2 re-init failed";
	  done = 1;
	}
      }
      continue;
    }

    if (rc != BZ_OK) {
      err = "asdfbz2decompress: bzip2 decompress failed";
      break;
    }

    // BZ_OK means "not finished yet". If it also made no progress, then
    // the payload disagrees with the block header's decoded size: either
    // the input ran out early, or the stream wants to emit more than
    // `decoded` bytes.
    if (inBefore == strm.avail_in && outBefore == strm.avail_out) {
      err = outDone >= (Tcl_Size)decodedSize
	? "asdfbz2decompress: bzip2 output exceeds block decoded size"
	: "asdfbz2decompress: truncated bzip2 stream";
      break;
    }
  }

  BZ2_bzDecompressEnd(&strm);

  if (!err && outDone != (Tcl_Size)decodedSize)
    err = "asdfbz2decompress: short bzip2 decompress";

  if (err) {
    Tcl_DecrRefCount(result);
    Tcl_SetObjResult(interp, Tcl_NewStringObj(err,-1));
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

// asdf-standard's core/ndarray lets `mask` be either an explicit boolean
// ndarray OR a scalar number, in which case "that number is used to
// represent missing values" - which is precisely the FITS BLANK
// convention. Both forms are documented in every schema version
// (ndarray-1.0.0/1.1.0/1.2.0) and the scalar form is the schema's own
// headline example, on float64 data. Note asdf's Python library only
// *reads* the scalar form; its writer always emits a boolean array. So
// files carrying a scalar mask come from other writers, and a reader has
// to handle both.
//
// This maps either form onto what FITS already does, so DS9's existing
// machinery does the work with no promotion of integer data to float:
//   integer data -> a BLANK sentinel value. FitsData keeps native integer
//                   storage and substitutes NAN only at the
//                   getValueFloat() boundary; minmax skips blank pixels.
//   float data   -> NaN written into the masked pixels directly, which is
//                   the FITS convention for float nulls and costs nothing
//                   since the data is already floating point.
//
// Returns {blank bigEndianData}: `blank` is the BLANK value for an integer
// type, or empty for a float type (where NaN carries the information
// instead). Output is always big-endian because the caller hands it to
// DS9 as a real FITS file. {} means nothing was masked.
//
// Scalar matching is exact, deliberately unlike numpy's
// ma.masked_values(), which matches within rtol=1e-5/atol=1e-8. A fill
// value is stored exactly in practice, and exact equality is both
// predictable and what FITS BLANK means. A scalar mask of NaN is special
// cased the same way asdf's reader does it: it means "NaN values are
// missing", so the test is isnan() rather than equality.

static int64_t AsdfLoadInt(const unsigned char* pp, int sz, int isSigned, int big)
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

  return (int64_t)uu;
}

static void AsdfStoreBE(unsigned char* dd, uint64_t uu, int sz)
{
  for (int bb = 0; bb < sz; bb++)
    dd[sz - 1 - bb] = (unsigned char)(uu >> (8 * bb));
}

static int AsdfMaskCmd(void* clientData, Tcl_Interp* interp,
			int objc, Tcl_Obj* const objv[])
{
  if (objc != 6) {
    Tcl_WrongNumArgs(interp, 1, objv, "data datatype byteorder mask scalar");
    return TCL_ERROR;
  }

  Tcl_Size dataLen;
  unsigned char* data = Tcl_GetByteArrayFromObj(objv[1], &dataLen);
  const char* type = Tcl_GetString(objv[2]);
  const char* order = Tcl_GetString(objv[3]);

  Tcl_Size maskLen = 0;
  unsigned char* mask = NULL;
  if (Tcl_GetCharLength(objv[4]) > 0)
    mask = Tcl_GetByteArrayFromObj(objv[4], &maskLen);

  int haveScalar = Tcl_GetCharLength(objv[5]) > 0;
  double scalar = 0.0;
  if (haveScalar && Tcl_GetDoubleFromObj(interp, objv[5], &scalar) != TCL_OK)
    return TCL_ERROR;

  if ((mask == NULL) == (haveScalar == 0)) {
    Tcl_SetObjResult(interp, Tcl_NewStringObj(
      "asdfmask: exactly one of mask or scalar must be given", -1));
    return TCL_ERROR;
  }

  int big = !strcmp(order, "big");

  int sz, isFloat, isSigned = 0;
  int64_t tmin = 0, tmax = 0;
  if (!strcmp(type, "uint8")) {
    sz = 1; isFloat = 0; isSigned = 0; tmin = 0; tmax = 255;
  }
  else if (!strcmp(type, "int16")) {
    sz = 2; isFloat = 0; isSigned = 1; tmin = -32768; tmax = 32767;
  }
  else if (!strcmp(type, "int32")) {
    sz = 4; isFloat = 0; isSigned = 1; tmin = -2147483648LL; tmax = 2147483647LL;
  }
  else if (!strcmp(type, "int64")) {
    sz = 8; isFloat = 0; isSigned = 1; tmin = INT64_MIN; tmax = INT64_MAX;
  }
  else if (!strcmp(type, "float32")) {
    sz = 4; isFloat = 1;
  }
  else if (!strcmp(type, "float64")) {
    sz = 8; isFloat = 1;
  }
  else {
    Tcl_SetObjResult(interp, Tcl_ObjPrintf(
      "asdfmask: unsupported datatype %s", type));
    return TCL_ERROR;
  }

  if (dataLen % sz) {
    Tcl_SetObjResult(interp, Tcl_ObjPrintf(
      "asdfmask: data length %" TCL_SIZE_MODIFIER "d is not a multiple of %d",
      dataLen, sz));
    return TCL_ERROR;
  }

  Tcl_Size nn = dataLen / sz;

  // The mask must be broadcastable to the data's shape. Only the
  // degenerate cases are accepted here: one element per pixel, or a
  // single element covering everything. Anything else is refused rather
  // than guessed at, since getting a partial broadcast wrong would
  // mismark real pixels.
  if (mask && maskLen != nn && maskLen != 1) {
    Tcl_SetObjResult(interp, Tcl_ObjPrintf(
      "asdfmask: mask of %" TCL_SIZE_MODIFIER "d elements is not broadcastable to %"
      TCL_SIZE_MODIFIER "d pixels", maskLen, nn));
    return TCL_ERROR;
  }

  int scalarIsNan = haveScalar && scalar != scalar;

  // decide what is masked, and for integers pick the BLANK value
  int64_t blank = 0;
  int rewrite = 0;
  int haveBlank = 0;

  if (!isFloat) {
    int64_t iscalar = (int64_t)scalar;
    int64_t common = 0;
    Tcl_Size nmasked = 0;
    int uniq = 1, commonUsed = 0, minUsed = 0, maxUsed = 0;

    for (Tcl_Size ii = 0; ii < nn; ii++) {
      int64_t vv = AsdfLoadInt(data + ii * sz, sz, isSigned, big);
      int mm = mask ? (maskLen == 1 ? mask[0] : mask[ii]) != 0 : (vv == iscalar);
      if (mm) {
	if (!nmasked)
	  common = vv;
	else if (vv != common)
	  uniq = 0;
	nmasked++;
      }
      else {
	if (vv == tmin) minUsed = 1;
	if (vv == tmax) maxUsed = 1;
	if (vv == common && nmasked) commonUsed = 1;
      }
    }

    if (!nmasked) {
      Tcl_SetObjResult(interp, Tcl_NewListObj(0, NULL));
      return TCL_OK;
    }

    // a scalar mask names the sentinel outright, so there is nothing to
    // choose and nothing to rewrite
    if (haveScalar) {
      blank = iscalar;
      haveBlank = 1;
      rewrite = 0;
    }
    else {
      // recheck commonUsed properly - the single pass above can miss an
      // unmasked occurrence that precedes the first masked pixel
      commonUsed = 0;
      if (uniq) {
	for (Tcl_Size ii = 0; ii < nn; ii++) {
	  int mm = (maskLen == 1 ? mask[0] : mask[ii]) != 0;
	  if (mm)
	    continue;
	  if (AsdfLoadInt(data + ii * sz, sz, isSigned, big) == common) {
	    commonUsed = 1;
	    break;
	  }
	}
      }

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
	    "asdfmask: no unused value available for BLANK", -1));
	  return TCL_ERROR;
	}
	rewrite = 1;
      }
      haveBlank = 1;
    }
  }

  Tcl_Obj* out = Tcl_NewByteArrayObj(NULL, dataLen);
  unsigned char* dst = Tcl_SetByteArrayLength(out, dataLen);
  if (!dst) {
    Tcl_DecrRefCount(out);
    Tcl_SetObjResult(interp,
		     Tcl_NewStringObj("asdfmask: out of memory", -1));
    return TCL_ERROR;
  }

  Tcl_Size nmaskedOut = 0;

  for (Tcl_Size ii = 0; ii < nn; ii++) {
    const unsigned char* ss = data + ii * sz;
    unsigned char* dd = dst + ii * sz;

    if (isFloat) {
      uint64_t raw = 0;
      for (int bb = 0; bb < sz; bb++) {
	unsigned char cc = big ? ss[bb] : ss[sz - 1 - bb];
	raw = (raw << 8) | cc;
      }

      int mm;
      if (mask)
	mm = (maskLen == 1 ? mask[0] : mask[ii]) != 0;
      else if (sz == 4) {
	float ff;
	uint32_t r32 = (uint32_t)raw;
	memcpy(&ff, &r32, 4);
	mm = scalarIsNan ? (ff != ff) : (ff == (float)scalar);
      }
      else {
	double ff;
	memcpy(&ff, &raw, 8);
	mm = scalarIsNan ? (ff != ff) : (ff == scalar);
      }

      if (mm) {
	raw = (sz == 4) ? 0x7fc00000ULL : 0x7ff8000000000000ULL;
	nmaskedOut++;
      }

      AsdfStoreBE(dd, raw, sz);
    }
    else {
      int64_t vv = AsdfLoadInt(ss, sz, isSigned, big);
      int mm = mask ? (maskLen == 1 ? mask[0] : mask[ii]) != 0
		    : (vv == (int64_t)scalar);
      if (mm) {
	nmaskedOut++;
	if (rewrite)
	  vv = blank;
      }
      AsdfStoreBE(dd, (uint64_t)vv, sz);
    }
  }

  if (!nmaskedOut) {
    Tcl_DecrRefCount(out);
    Tcl_SetObjResult(interp, Tcl_NewListObj(0, NULL));
    return TCL_OK;
  }

  Tcl_Obj* res[2];
  res[0] = haveBlank ? Tcl_NewWideIntObj((Tcl_WideInt)blank)
		     : Tcl_NewStringObj("", -1);
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

  Tcl_CreateObjCommand(interp, "asdfbz2decompress", Asdfbz2DecompressCmd,
			NULL, NULL);

  Tcl_CreateObjCommand(interp, "asdfconvert", AsdfConvertCmd, NULL, NULL);

  Tcl_CreateObjCommand(interp, "asdfmask", AsdfMaskCmd, NULL, NULL);

  return TCL_OK;
}
