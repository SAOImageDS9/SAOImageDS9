// Copyright (C) 1999-2021
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

// The include order below is load bearing on Windows and must not be
// tidied. bzlib.h includes <windows.h> under _WIN32, whose rpcndr.h does
// `typedef unsigned char byte' and then uses a bare `byte' in wtypesbase.h,
// objidl.h and a dozen more places. C++17 has std::byte, so if any
// using-directive for std is in effect when those headers are parsed,
// every one of those uses is ambiguous and the build dies with pages of
// "reference to `byte' is ambiguous". The codec headers therefore come
// first, before <string>/<vector> and before anything in fitsy - note
// that card.h, which head.h and file.h both pull in, carries its own
// `using namespace std', so including a fitsy header first is enough to
// trigger it.

#include <stdarg.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

#include <zlib.h>
#include <lz4.h>
#include <bzlib.h>

#include <new>
#include <string>
#include <vector>
using namespace std;

#include "asdf.h"
#include "head.h"
#include "util.h"

// ASDF binary block magic (asdf-standard file_layout).
static const char ASDF_BLK[4] = {(char)0xd3, 'B', 'L', 'K'};

// 64 bit file positioning. A block offset is a whole-file offset, and a
// real Roman file is already ~200MB, so the 2GB a 32 bit long reaches is
// not comfortably far away. mingw's stdio has no fseeko/ftello; its
// _fseeki64/_ftelli64 are the equivalents.
#ifdef __WIN32
#define ASDF_SEEK(ff,oo,ww) _fseeki64((ff),(long long)(oo),(ww))
#define ASDF_TELL(ff) ((long long)_ftelli64(ff))
#else
#define ASDF_SEEK(ff,oo,ww) fseeko((ff),(off_t)(oo),(ww))
#define ASDF_TELL(ff) ((long long)ftello(ff))
#endif

// Read size of one block header's fixed part: flags(4) compression(4)
// allocated(8) used(8) decoded(8) checksum(16). Only the first 32 bytes
// are used here; a writer may declare a longer header and anything past
// this is skipped.
#define ASDF_BLKHDR 32

// ---------------------------------------------------------------- helpers

static unsigned asdfBE16(const unsigned char* pp)
{
  return ((unsigned)pp[0] << 8) | (unsigned)pp[1];
}

static unsigned long long asdfBE64(const unsigned char* pp)
{
  unsigned long long vv = 0;
  for (int ii=0; ii<8; ii++)
    vv = (vv << 8) | (unsigned long long)pp[ii];
  return vv;
}

// Index of the first ASDF block magic at or after `from', or -1.
static long long asdfFindBlk(const char* pp, size_t nn, size_t from)
{
  if (nn < 4)
    return -1;
  for (size_t ii=from; ii+4<=nn; ii++)
    if (!memcmp(pp+ii, ASDF_BLK, 4))
      return (long long)ii;
  return -1;
}

static string asdfTrim(const string& ss)
{
  size_t aa = ss.find_first_not_of(" \t\r\n");
  if (aa == string::npos)
    return string();
  size_t bb = ss.find_last_not_of(" \t\r\n");
  return ss.substr(aa, bb-aa+1);
}

// asdf's own spellings of the non-finite floats, plus anything strtod
// accepts. Used for a scalar `mask'.
static int asdfDouble(const string& ss, double* out)
{
  if (ss == ".nan" || ss == ".NaN" || ss == ".NAN") {
    *out = strtod("nan", NULL);
    return 1;
  }
  if (ss == ".inf" || ss == "+.inf") {
    *out = strtod("inf", NULL);
    return 1;
  }
  if (ss == "-.inf") {
    *out = -strtod("inf", NULL);
    return 1;
  }

  const char* cc = ss.c_str();
  char* end = NULL;
  double vv = strtod(cc, &end);
  if (end == cc || (end && *end))
    return 0;
  *out = vv;
  return 1;
}

int asdfBitpix(const char* datatype)
{
  // -16 is not a FITS BITPIX at all - it is fitsy's own private code for
  // unsigned 16 bit (fitsy/parser.Y's compact atype rule maps 'u' to it,
  // and FitsFile::validParams accepts it alongside the real FITS values).
  // uint32/uint64/int8/float16 have no representation here and are
  // deliberately left unmapped rather than coerced to a narrower or
  // differently signed type - see asdfWiden.
  if (!datatype)
    return 0;
  if (!strcmp(datatype,"float32")) return -32;
  if (!strcmp(datatype,"float64")) return -64;
  if (!strcmp(datatype,"int16")) return 16;
  if (!strcmp(datatype,"uint16")) return -16;
  if (!strcmp(datatype,"int32")) return 32;
  if (!strcmp(datatype,"int64")) return 64;
  if (!strcmp(datatype,"uint8")) return 8;
  if (!strcmp(datatype,"bool8")) return 8;
  return 0;
}

const char* asdfWiden(const char* datatype)
{
  // Losslessness is the whole justification: a narrowing or sign changing
  // coercion would quietly alter pixel values, which is worse than
  // refusing the array. uint64 has no lossless target in fitsy's set and
  // so is deliberately absent.
  //
  //   float16 -> float32  half has an 11 bit significand and 5 bit
  //                       exponent, every value of which (subnormals, inf
  //                       and nan included) is exact in single.
  //   uint32  -> int64    zero extension; int64's positive range covers
  //                       all of uint32.
  if (!datatype)
    return NULL;
  if (!strcmp(datatype,"float16")) return "float32";
  if (!strcmp(datatype,"uint32")) return "int64";
  return NULL;
}

// ---------------------------------------------------------- FitsAsdfNode

FitsAsdfNode::FitsAsdfNode()
{
  source_ = -1;
  big_ = -1;
  ndim_ = 0;
  for (int ii=0; ii<ASDF_MAXDIM; ii++)
    dim_[ii] = 0;
  unsupported_ = ASDF_OK;
  hasMaskScalar_ = 0;
  maskScalar_ = 0;
}

// ---------------------------------------------------------- FitsAsdfFile

FitsAsdfFile::FitsAsdfFile(const char* fn)
{
  stream_ = NULL;
  fileSize_ = 0;
  valid_ = 0;

  if (!fn || !*fn) {
    setError("no file name");
    return;
  }

  stream_ = fopen(fn, "rb");
  if (!stream_) {
    setError("unable to open %s", fn);
    return;
  }

  if (ASDF_SEEK(stream_, 0, SEEK_END)) {
    setError("unable to size %s", fn);
    return;
  }
  fileSize_ = ASDF_TELL(stream_);
  rewind(stream_);

  if (!readTree())
    return;
  if (!readBlockOffsets())
    return;

  enumNdarrays();

  valid_ = 1;
}

FitsAsdfFile::~FitsAsdfFile()
{
  if (stream_)
    fclose(stream_);
}

void FitsAsdfFile::setError(const char* fmt, ...)
{
  char buf[1024];
  va_list args;
  va_start(args, fmt);
  vsnprintf(buf, sizeof(buf), fmt, args);
  va_end(args);
  error_ = buf;
}

// Everything before the first binary block: the YAML tree, verbatim, and
// also exactly what the header viewer shows. ASDF never writes a large
// array inline - only a `source: N' reference beside its datatype and
// shape - so even a 197MB Roman file's tree is tens of kilobytes.
int FitsAsdfFile::readTree()
{
  // The mandatory ASCII magic first, so that a FITS file - or any other
  // non-ASDF file - handed to the ASDF loader is told what is actually
  // wrong, rather than failing further down with a confusing "could not
  // find ndarray" from the tree walk.
  char magic[6];
  if (fread(magic, 1, sizeof(magic), stream_) != sizeof(magic) ||
      strncmp(magic, "#ASDF ", 6)) {
    setError("not an ASDF file");
    return 0;
  }
  rewind(stream_);

  const size_t CHUNK = 65536;
  char* buf = new char[CHUNK];

  while (1) {
    size_t got = fread(buf, 1, CHUNK, stream_);
    if (!got)
      break;

    size_t from = tree_.size() >= 3 ? tree_.size()-3 : 0;
    tree_.append(buf, got);

    // the magic may straddle two chunks, so the search restarts three
    // bytes back into what was already appended
    long long at = asdfFindBlk(tree_.data(), tree_.size(), from);
    if (at >= 0) {
      tree_.resize((size_t)at);
      delete [] buf;
      return 1;
    }

    if (got < CHUNK)
      break;
  }

  delete [] buf;

  // A tree with no blocks at all is legal - every ndarray in it would be
  // inline - and is not an error here. The load path refuses it when it
  // looks for a block.
  return 1;
}

// The offset of every binary block, by walking them from the first one.
//
// Deliberately not read from the trailing `#ASDF BLOCK INDEX' section:
// that section is optional in asdf-standard, whereas each block header
// carries its own allocated size and the blocks are laid out
// contiguously, so walking always works and needs no fallback. It costs
// one 38 byte read per block - tens of them in a real file.
int FitsAsdfFile::readBlockOffsets()
{
  long long off = (long long)tree_.size();

  while (off + 6 + ASDF_BLKHDR <= fileSize_) {
    if (ASDF_SEEK(stream_, off, SEEK_SET))
      break;

    unsigned char hh[6+ASDF_BLKHDR];
    if (fread(hh, 1, sizeof(hh), stream_) != sizeof(hh))
      break;

    if (memcmp(hh, ASDF_BLK, 4))
      break;

    unsigned hdrsize = asdfBE16(hh+4);
    if (hdrsize < ASDF_BLKHDR)
      break;

    unsigned long long allocated = asdfBE64(hh+6+8);

    blocks_.push_back(off);

    long long next = off + 6 + (long long)hdrsize + (long long)allocated;
    if (next <= off || next > fileSize_)
      break;
    off = next;
  }

  return 1;
}

const FitsAsdfNode* FitsAsdfFile::node(int ii)
{
  if (ii < 0 || ii >= (int)nodes_.size())
    return NULL;
  return &nodes_[ii];
}

const FitsAsdfNode* FitsAsdfFile::find(const char* path)
{
  if (!path)
    return NULL;
  for (size_t ii=0; ii<nodes_.size(); ii++)
    if (nodes_[ii].path_ == path)
      return &nodes_[ii];
  return NULL;
}

// Enumerates every block sourced core/ndarray node in the tree, anywhere
// in it, with a root relative slash path (roman/data,
// roman/meta/wcs/steps/0/transform/forward/1/coefficients).
//
// A real indent walker rather than bounded regexps, because a path needs
// the enclosing structure, not just the node. Checked against every
// sample file: all core/ndarray nodes in all of them are block style
// mapping values - none inside a flow mapping, none as a bare sequence
// element - with consistent 2 space indentation, so mapping keys plus
// sequence elements is full coverage in practice. An ndarray written in
// flow style ({source: 0, ...}) is skipped rather than misread.
//
// Sequence elements get a numeric path component, which matters: a GWCS
// document has many `coefficients' keys and only the step index tells
// them apart. The element is pushed at indent+1 - a half level - so that
// a following element at the same indent pops it while leaving its parent
// key, and a deeper mapping key pops neither.
void FitsAsdfFile::enumNdarrays()
{
  // {indent, name}
  vector<pair<int,string> > stack;
  // indent -> next sequence index
  vector<pair<int,int> > seq;

  // A *stack* of nodes being collected, innermost last, each
  // {path, indent, fields}. It has to be a stack rather than one node
  // because a core/ndarray may contain another: asdf serializes a numpy
  // masked array as a `mask:' ndarray nested inside the `data:' one, and
  // the parent's own datatype/shape follow *after* that nested block.
  // Collecting into a single node merged the two, last write winning, so
  // `data' came back carrying the mask's `source:'.
  vector<string> pendPath;
  vector<int> pendIndent;
  vector<vector<pair<string,string> > > pendFields;

  size_t pos = 0;
  while (pos <= tree_.size()) {
    size_t nl = tree_.find('\n', pos);
    string line = tree_.substr(pos, nl == string::npos ?
			       string::npos : nl-pos);
    if (nl == string::npos)
      pos = tree_.size()+1;
    else
      pos = nl+1;

    // right trim
    size_t rr = line.find_last_not_of(" \t\r");
    line = rr == string::npos ? string() : line.substr(0, rr+1);

    size_t ll = line.find_first_not_of(" \t");
    string body = ll == string::npos ? string() : line.substr(ll);

    if (body.empty() || body[0] == '#' || body[0] == '%' ||
	!body.compare(0,3,"---") || !body.compare(0,3,"..."))
      continue;

    int ind = (int)(line.size() - body.size());

    if (body == "-" || !body.compare(0,2,"- ")) {
      while (!stack.empty() && stack.back().first > ind)
	stack.pop_back();

      int idx = 0;
      size_t ss = 0;
      for (; ss<seq.size(); ss++)
	if (seq[ss].first == ind)
	  break;
      if (ss == seq.size())
	seq.push_back(pair<int,int>(ind,0));
      idx = seq[ss].second;
      seq[ss].second = idx+1;

      char num[32];
      snprintf(num, sizeof(num), "%d", idx);
      stack.push_back(pair<int,string>(ind+1, string(num)));

      // YAML's compact form puts the element's first key on the dash line
      // itself, two columns further in
      body = body.size() > 2 ? body.substr(2) : string();
      ind += 2;
      if (body.empty())
	continue;
    }

    // key: value, with the ndarray schema's own key charset
    size_t colon = body.find(':');
    if (colon == string::npos || colon == 0)
      continue;
    string kk = body.substr(0, colon);
    int ok = 1;
    for (size_t cc=0; cc<kk.size(); cc++) {
      char ch = kk[cc];
      if (!((ch>='A'&&ch<='Z') || (ch>='a'&&ch<='z') || (ch>='0'&&ch<='9') ||
	    ch=='_' || ch=='.' || ch=='+' || ch=='-')) {
	ok = 0;
	break;
      }
    }
    if (!ok)
      continue;
    string vv = body.substr(colon+1);

    // a key at or outside a collecting node's own indent ends it, and
    // ends everything nested inside it too
    while (!pendPath.empty() && ind <= pendIndent.back()) {
      flushNode(pendPath.back(), pendIndent.back(), pendFields.back());
      pendPath.pop_back();
      pendIndent.pop_back();
      pendFields.pop_back();
    }

    while (!stack.empty() && stack.back().first >= ind)
      stack.pop_back();
    stack.push_back(pair<int,string>(ind,kk));
    for (size_t ss=0; ss<seq.size(); ) {
      if (seq[ss].first >= ind)
	seq.erase(seq.begin()+ss);
      else
	ss++;
    }

    string tv = asdfTrim(vv);
    if (!tv.compare(0,14,"!core/ndarray-")) {
      string path;
      for (size_t ss=0; ss<stack.size(); ss++) {
	if (ss)
	  path += '/';
	path += stack[ss].second;
      }
      pendPath.push_back(path);
      pendIndent.push_back(ind);
      pendFields.push_back(vector<pair<string,string> >());
      continue;
    }

    // an ordinary key belongs to the innermost node still collecting
    if (!pendPath.empty())
      pendFields.back().push_back(pair<string,string>(kk,tv));
  }

  while (!pendPath.empty()) {
    flushNode(pendPath.back(), pendIndent.back(), pendFields.back());
    pendPath.pop_back();
    pendIndent.pop_back();
    pendFields.pop_back();
  }
}

// Records one enumerated node if it is block sourced and carries the
// fields the load path needs. An inline (`data:') ndarray is skipped
// rather than reported: it has no block to read, and the WCS path is the
// only thing that consumes those.
void FitsAsdfFile::flushNode(const string& path, int,
			     const vector<pair<string,string> >& fields)
{
  string source, datatype, shape, byteorder, offset, strides, mask;
  int hasSource=0, hasDatatype=0, hasShape=0;
  int hasByteorder=0, hasOffset=0, hasStrides=0, hasMask=0;

  for (size_t ii=0; ii<fields.size(); ii++) {
    const string& kk = fields[ii].first;
    const string& vv = fields[ii].second;
    if (kk == "source") {source = vv; hasSource=1;}
    else if (kk == "datatype") {datatype = vv; hasDatatype=1;}
    else if (kk == "shape") {shape = vv; hasShape=1;}
    else if (kk == "byteorder") {byteorder = vv; hasByteorder=1;}
    else if (kk == "offset") {offset = vv; hasOffset=1;}
    else if (kk == "strides") {strides = vv; hasStrides=1;}
    else if (kk == "mask") {mask = vv; hasMask=1;}
  }

  if (!hasSource || !hasDatatype || !hasShape)
    return;

  // source must be a plain integer block index
  if (source.empty())
    return;
  for (size_t ii=0; ii<source.size(); ii++)
    if (source[ii] < '0' || source[ii] > '9')
      return;

  // shape is [a, b, ...]
  if (shape.size() < 2 || shape[0] != '[' || shape[shape.size()-1] != ']')
    return;

  FitsAsdfNode nn;
  nn.path_ = path;
  nn.source_ = atoi(source.c_str());
  nn.datatype_ = datatype;

  {
    string body = shape.substr(1, shape.size()-2);
    size_t at = 0;
    while (at < body.size()) {
      size_t comma = body.find(',', at);
      string tok = asdfTrim(body.substr(at, comma == string::npos ?
					string::npos : comma-at));
      if (!tok.empty()) {
	for (size_t ii=0; ii<tok.size(); ii++)
	  if (tok[ii] < '0' || tok[ii] > '9')
	    return;
	if (nn.ndim_ < ASDF_MAXDIM)
	  nn.dim_[nn.ndim_] = atoll(tok.c_str());
	nn.ndim_++;
      }
      if (comma == string::npos)
	break;
      at = comma+1;
    }
  }
  if (!nn.ndim_)
    return;

  // No default for byteorder on purpose. The ndarray schema's
  // `dependencies' make shape, datatype and byteorder all mandatory
  // whenever `source' is present, so a block backed array with no
  // byteorder can only come from a malformed file - and picking an order
  // for it silently byte swaps every pixel when the guess is wrong, which
  // is worse than refusing.
  if (hasByteorder)
    nn.big_ = byteorder == "big" ? 1 : 0;
  else
    nn.unsupported_ |= ASDF_BYTEORDER;

  // asdf-standard's core/ndarray lets `offset' and `strides' describe a
  // non-contiguous view into the block, in which case the block's raw
  // bytes are NOT the array and handing them on would render the wrong
  // pixels with no complaint. No sample file uses either, so rather than
  // implement striding on speculation, record it and let the caller
  // refuse. A zero offset is just the default, spelled out.
  if (hasStrides)
    nn.unsupported_ |= ASDF_STRIDES;
  if (hasOffset && offset != "0")
    nn.unsupported_ |= ASDF_OFFSET;

  // A scalar `mask:' names the missing value sentinel outright. An
  // ndarray mask is found separately as this node's own `<path>/mask'
  // entry. A complex mask (asdf allows complex-1.0.0) is not a number
  // usable as a sentinel, so it is recorded as unsupported rather than
  // ignored.
  if (hasMask && mask.compare(0,14,"!core/ndarray-")) {
    double dd;
    if (asdfDouble(mask, &dd)) {
      nn.hasMaskScalar_ = 1;
      nn.maskScalar_ = dd;
    }
    else
      nn.unsupported_ |= ASDF_MASK;
  }

  nodes_.push_back(nn);
}

// ASDF's lz4 framing (see asdf/_compression.py upstream): the payload is
// a sequence of chunks, each preceded by its own 4 byte big endian
// compressed length, and each chunk itself carries a leading 4 byte
// little endian decoded size prefix - python-lz4's lz4.block convention.
static int asdfLz4(const char* src, size_t srcLen, char* dst, size_t dstLen,
		   string& err)
{
  size_t inAt = 0, outAt = 0;

  while (inAt < srcLen && outAt < dstLen) {
    if (inAt+4 > srcLen) {
      err = "truncated lz4 chunk length";
      return 0;
    }
    const unsigned char* pp = (const unsigned char*)src+inAt;
    size_t clen = ((size_t)pp[0]<<24) | ((size_t)pp[1]<<16) |
      ((size_t)pp[2]<<8) | (size_t)pp[3];
    inAt += 4;

    if (clen < 4 || inAt+clen > srcLen) {
      err = "truncated lz4 chunk";
      return 0;
    }

    const unsigned char* cc = (const unsigned char*)src+inAt;
    size_t want = (size_t)cc[0] | ((size_t)cc[1]<<8) |
      ((size_t)cc[2]<<16) | ((size_t)cc[3]<<24);
    // written as a subtraction so a huge `want' cannot wrap the sum
    if (want > dstLen-outAt) {
      err = "lz4 output exceeds block decoded size";
      return 0;
    }
    // LZ4_decompress_safe counts in int, so a chunk past INT_MAX would be
    // handed a negative length and read wildly out of bounds
    if (clen-4 > (size_t)INT_MAX || want > (size_t)INT_MAX) {
      err = "lz4 chunk too large";
      return 0;
    }

    int got = LZ4_decompress_safe((const char*)(cc+4), dst+outAt,
				  (int)(clen-4), (int)want);
    if (got < 0 || (size_t)got != want) {
      err = "lz4 decompress failed";
      return 0;
    }

    inAt += clen;
    outAt += want;
  }

  if (outAt != dstLen) {
    err = "short lz4 decompress";
    return 0;
  }
  return 1;
}

// An asdf bzp2 block payload is one plain bzip2 stream - unlike lz4,
// bzip2 has a stream format, so there is no chunk framing. The streaming
// API rather than BZ2_bzBuffToBuffDecompress because that one takes
// `unsigned int' lengths and cannot span concatenated streams; tolerating
// a concatenation costs one re-init and means a block from another writer
// is not silently truncated.
static int asdfBzp2(const char* src, size_t srcLen, char* dst, size_t dstLen,
		    string& err)
{
  bz_stream strm;
  memset(&strm, 0, sizeof(strm));
  if (BZ2_bzDecompressInit(&strm, 0, 0) != BZ_OK) {
    err = "bzip2 init failed";
    return 0;
  }

  size_t inAt = 0, outAt = 0;
  int done = 0;

  while (!done) {
    size_t inLeft = srcLen-inAt;
    size_t outLeft = dstLen-outAt;

    strm.next_in = (char*)src+inAt;
    strm.avail_in = inLeft > (size_t)UINT_MAX ? UINT_MAX : (unsigned)inLeft;
    strm.next_out = dst+outAt;
    strm.avail_out = outLeft > (size_t)UINT_MAX ? UINT_MAX : (unsigned)outLeft;

    unsigned inBefore = strm.avail_in, outBefore = strm.avail_out;
    int rc = BZ2_bzDecompress(&strm);

    inAt += inBefore - strm.avail_in;
    outAt += outBefore - strm.avail_out;

    if (rc == BZ_STREAM_END) {
      if (inAt >= srcLen || outAt >= dstLen) {
	done = 1;
      }
      else {
	// a concatenated stream follows
	BZ2_bzDecompressEnd(&strm);
	memset(&strm, 0, sizeof(strm));
	if (BZ2_bzDecompressInit(&strm, 0, 0) != BZ_OK) {
	  err = "bzip2 re-init failed";
	  done = 1;
	}
      }
      continue;
    }

    if (rc != BZ_OK) {
      err = "bzip2 decompress failed";
      break;
    }

    // BZ_OK means "not finished yet". If it also made no progress then
    // the payload disagrees with the header's decoded size.
    if (inBefore == strm.avail_in && outBefore == strm.avail_out) {
      err = outAt >= dstLen ? "bzip2 output exceeds block decoded size"
	: "truncated bzip2 stream";
      break;
    }
  }

  BZ2_bzDecompressEnd(&strm);

  if (err.empty() && outAt != dstLen)
    err = "short bzip2 decompress";

  return err.empty();
}

char* FitsAsdfFile::block(int source, size_t* size)
{
  *size = 0;

  if (source < 0 || source >= (int)blocks_.size()) {
    setError("block index %d out of range", source);
    return NULL;
  }

  long long off = blocks_[source];
  if (ASDF_SEEK(stream_, off, SEEK_SET)) {
    setError("unable to seek to block %d", source);
    return NULL;
  }

  unsigned char hh[6+ASDF_BLKHDR];
  if (fread(hh, 1, sizeof(hh), stream_) != sizeof(hh) ||
      memcmp(hh, ASDF_BLK, 4)) {
    setError("no binary block at offset %lld", off);
    return NULL;
  }

  unsigned hdrsize = asdfBE16(hh+4);
  char comp[5];
  memcpy(comp, hh+6+4, 4);
  comp[4] = '\0';
  for (int ii=0; ii<4; ii++)
    if (comp[ii] == '\0' || comp[ii] == ' ')
      comp[ii] = '\0';

  unsigned long long used = asdfBE64(hh+6+16);
  unsigned long long decoded = asdfBE64(hh+6+24);

  if (!decoded) {
    setError("block %d is empty", source);
    return NULL;
  }

  // Both sizes come straight off disk, so a malformed or hostile file can
  // put anything in them. Every use below - the end-of-file test, two
  // allocations, and the codec calls - has to be safe for the whole 64 bit
  // range rather than trusting them to be sane.
  long long payload = off + 6 + (long long)hdrsize;
  if (payload > fileSize_ || used > (unsigned long long)(fileSize_-payload)) {
    setError("block %d runs past the end of the file", source);
    return NULL;
  }
  // `decoded' is not bounded by the file - that is the point of
  // compression - so it only has to be addressable here, and the
  // allocation below reports failure rather than throwing.
  if (decoded > (unsigned long long)SIZE_MAX) {
    setError("block %d declares %llu bytes, more than this build can "
	     "address", source, decoded);
    return NULL;
  }
  if (ASDF_SEEK(stream_, payload, SEEK_SET)) {
    setError("unable to seek to block %d payload", source);
    return NULL;
  }

  char* dst = new (std::nothrow) char[(size_t)decoded];
  if (!dst) {
    setError("unable to allocate %llu bytes for block %d", decoded, source);
    return NULL;
  }

  if (!*comp) {
    // uncompressed: the payload *is* the array
    if (used < decoded || fread(dst, 1, (size_t)decoded, stream_) != decoded) {
      delete [] dst;
      setError("truncated block %d", source);
      return NULL;
    }
    *size = (size_t)decoded;
    return dst;
  }

  char* src = new (std::nothrow) char[(size_t)used];
  if (!src) {
    delete [] dst;
    setError("unable to allocate %llu bytes for block %d", used, source);
    return NULL;
  }
  if (fread(src, 1, (size_t)used, stream_) != used) {
    delete [] src;
    delete [] dst;
    setError("truncated block %d", source);
    return NULL;
  }

  string err;
  int ok = 0;

  if (!strcmp(comp,"zlib")) {
    // zlib counts in uLong, which is `unsigned long' - 32 bits on Windows,
    // so this is a real truncation risk there and not a theoretical one
    if (used > (unsigned long long)ULONG_MAX ||
	decoded > (unsigned long long)ULONG_MAX)
      err = "block too large for zlib";
    else {
      uLongf dlen = (uLongf)decoded;
      int rc = uncompress((Bytef*)dst, &dlen, (const Bytef*)src, (uLong)used);
      if (rc != Z_OK)
	err = "zlib decompress failed";
      else if (dlen != (uLongf)decoded)
	err = "short zlib decompress";
      else
	ok = 1;
    }
  }
  else if (!strcmp(comp,"lz4"))
    ok = asdfLz4(src, (size_t)used, dst, (size_t)decoded, err);
  else if (!strcmp(comp,"bzp2"))
    ok = asdfBzp2(src, (size_t)used, dst, (size_t)decoded, err);
  else
    err = string("unsupported block compression: ") + comp;

  delete [] src;

  if (!ok) {
    delete [] dst;
    setError("%s", err.c_str());
    return NULL;
  }

  *size = (size_t)decoded;
  return dst;
}

// -------------------------------------------------------------- widening

// The widenings asdfWiden names, done here because they are far too slow
// over 16.7M elements in Tcl. Output is little endian regardless of the
// input's byteorder, so the caller sets LITTLE rather than tracking it.

static uint32_t asdfHalfToFloatBits(uint16_t hh)
{
  uint32_t sign = (uint32_t)(hh >> 15) << 31;
  uint32_t exp = (uint32_t)((hh >> 10) & 0x1f);
  uint32_t mant = (uint32_t)(hh & 0x3ff);

  // inf / nan: exponent all ones is preserved as such
  if (exp == 0x1f)
    return sign | 0x7f800000u | (mant << 13);

  // normalized: rebias 15 -> 127, mantissa 10 bits -> 23
  if (exp)
    return sign | ((exp + 112u) << 23) | (mant << 13);

  // zero
  if (!mant)
    return sign;

  // subnormal half, which is a *normalized* float. With p the index of
  // the high set bit of mant, the value is 2^(p-24) * (1 + r/2^p), so the
  // float exponent is p+103 and the mantissa is r shifted up to 23 bits.
  int pp = 9;
  while (!(mant & (1u << pp)))
    pp--;
  uint32_t rr = mant & ((1u << pp) - 1);

  return sign | ((uint32_t)(pp + 103) << 23) | (rr << (23 - pp));
}

static char* asdfWidenBuffer(const char* src, size_t srcLen,
			     const char* from, const char* to, int big,
			     size_t* outLen, string& err)
{
  int srcSize, dstSize;
  if (!strcmp(from,"float16") && !strcmp(to,"float32")) {
    srcSize = 2;
    dstSize = 4;
  }
  else if (!strcmp(from,"uint32") && !strcmp(to,"int64")) {
    srcSize = 4;
    dstSize = 8;
  }
  else {
    err = string("unsupported conversion ") + from + " -> " + to;
    return NULL;
  }

  if (srcLen % srcSize) {
    err = string("buffer length is not a multiple of the ") + from +
      " element size";
    return NULL;
  }

  size_t nn = srcLen/srcSize;
  char* dst = new char[nn*dstSize];

  for (size_t ii=0; ii<nn; ii++) {
    const unsigned char* ss = (const unsigned char*)src + ii*srcSize;
    unsigned char* dd = (unsigned char*)dst + ii*dstSize;

    if (srcSize == 2) {
      uint16_t hh = big ? (uint16_t)((ss[0]<<8) | ss[1])
	: (uint16_t)((ss[1]<<8) | ss[0]);
      uint32_t bits = asdfHalfToFloatBits(hh);
      dd[0] = (unsigned char)(bits);
      dd[1] = (unsigned char)(bits >> 8);
      dd[2] = (unsigned char)(bits >> 16);
      dd[3] = (unsigned char)(bits >> 24);
    }
    else {
      uint32_t uu = big
	? ((uint32_t)ss[0]<<24) | ((uint32_t)ss[1]<<16) |
	  ((uint32_t)ss[2]<<8) | (uint32_t)ss[3]
	: ((uint32_t)ss[3]<<24) | ((uint32_t)ss[2]<<16) |
	  ((uint32_t)ss[1]<<8) | (uint32_t)ss[0];
      uint64_t vv = (uint64_t)uu;
      for (int bb=0; bb<8; bb++)
	dd[bb] = (unsigned char)(vv >> (8*bb));
    }
  }

  *outLen = nn*dstSize;
  return dst;
}

// ------------------------------------------------------------------ mask
//
// asdf represents a numpy masked array as an explicit boolean `mask'
// ndarray beside the data; the core/ndarray schema also allows a scalar
// `mask', which "is used to represent missing values" - the FITS BLANK
// convention exactly. Both are mapped onto what FITS already does, so
// DS9's existing machinery does the work with nothing promoted to float:
//
//   integer data -> a BLANK sentinel value. FitsData keeps the native
//                   integer storage and substitutes NAN only at the
//                   getValueFloat() boundary, while minmax skips blank
//                   pixels (tksao/frame/fitsdata.C).
//   float data   -> NaN written into the masked pixels, which is the FITS
//                   convention for float nulls and costs nothing since
//                   the data is already floating point.
//
// Scalar matching is exact, deliberately unlike numpy's
// ma.masked_values() (rtol=1e-5): a fill value is stored exactly in
// practice, and exact equality is both predictable and what FITS BLANK
// means. A scalar mask of NaN means "NaN values are missing", so the test
// is isnan() rather than equality, the same way asdf's own reader does it.

static int64_t asdfLoadInt(const unsigned char* pp, int sz, int isSigned,
			   int big)
{
  uint64_t uu = 0;
  for (int ii=0; ii<sz; ii++) {
    unsigned char bb = big ? pp[ii] : pp[sz-1-ii];
    uu = (uu << 8) | bb;
  }

  if (isSigned && sz < 8) {
    uint64_t sign = (uint64_t)1 << (sz*8-1);
    if (uu & sign)
      uu |= ~((sign << 1) - 1);
  }

  return (int64_t)uu;
}

static void asdfStoreInt(unsigned char* dd, uint64_t uu, int sz, int big)
{
  for (int bb=0; bb<sz; bb++) {
    unsigned char cc = (unsigned char)(uu >> (8*bb));
    if (big)
      dd[sz-1-bb] = cc;
    else
      dd[bb] = cc;
  }
}

// Resolves a mask, rewriting `data' in place and in its own byteorder.
// Returns 1 when something was masked, 0 when nothing was (or the mask
// cannot be represented - the caller then loads the array unchanged).
// *hasBlank/*blank carry the BLANK keyword for an integer type.
static int asdfApplyMask(char* data, size_t dataLen, const char* datatype,
			 int big, const char* mask, size_t maskLen,
			 int haveScalar, double scalar,
			 int* hasBlank, long long* blank, string& err)
{
  *hasBlank = 0;
  *blank = 0;

  int sz, isFloat, isSigned = 0;
  int64_t tmin = 0, tmax = 0;

  // Only the datatypes with a real FITS BITPIX are eligible. That
  // excludes uint16 (it would need FITS's BZERO unsigned offset
  // convention) and the widened types - those load without nulls rather
  // than as if they had none.
  if (!strcmp(datatype,"uint8")) {
    sz = 1; isFloat = 0; isSigned = 0; tmin = 0; tmax = 255;
  }
  else if (!strcmp(datatype,"int16")) {
    sz = 2; isFloat = 0; isSigned = 1; tmin = -32768; tmax = 32767;
  }
  else if (!strcmp(datatype,"int32")) {
    sz = 4; isFloat = 0; isSigned = 1;
    tmin = -2147483648LL; tmax = 2147483647LL;
  }
  else if (!strcmp(datatype,"int64")) {
    // Not INT64_MIN/MAX. tmin/tmax are only ever used as BLANK candidates
    // (and to ask whether an unmasked pixel already holds one), and FITS
    // carries BLANK as an int the whole way down - FitsImageHDU::blank_
    // and FitsData::blank_ are both int - so a wider sentinel would be
    // truncated on the way in and then stop comparing equal to the very
    // pixels it was chosen to mark. For every other type here the full
    // range already fits, so this is the only one that has to be clamped.
    sz = 8; isFloat = 0; isSigned = 1; tmin = INT_MIN; tmax = INT_MAX;
  }
  else if (!strcmp(datatype,"float32")) {
    sz = 4; isFloat = 1;
  }
  else if (!strcmp(datatype,"float64")) {
    sz = 8; isFloat = 1;
  }
  else
    return 0;

  if (dataLen % sz)
    return 0;
  size_t nn = dataLen/sz;

  // The mask must be broadcastable to the data's shape. Only the
  // degenerate cases are accepted: one element per pixel, or a single
  // element covering everything. Anything else is refused rather than
  // guessed at, since a wrong partial broadcast would mismark real
  // pixels.
  if (mask && maskLen != nn && maskLen != 1) {
    err = "mask is not broadcastable to the array's shape";
    return 0;
  }

  int scalarIsNan = haveScalar && scalar != scalar;
  int64_t iscalar = haveScalar ? (int64_t)scalar : 0;
  int rewrite = 0;

  if (!isFloat) {
    int64_t common = 0;
    size_t nmasked = 0;
    int uniq = 1, minUsed = 0, maxUsed = 0;

    for (size_t ii=0; ii<nn; ii++) {
      int64_t vv = asdfLoadInt((const unsigned char*)data+ii*sz, sz,
			       isSigned, big);
      int mm = mask ? (maskLen == 1 ? mask[0] : mask[ii]) != 0
	: (vv == iscalar);
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
      }
    }

    if (!nmasked)
      return 0;

    if (haveScalar) {
      // a scalar mask names the sentinel outright, so there is nothing to
      // choose and nothing to rewrite - but it still has to be a value
      // FITS can carry, and there is no second choice available if it is
      // not, since rewriting the pixels would discard what the file said
      if (iscalar < INT_MIN || iscalar > INT_MAX) {
	err = "scalar mask value is outside the FITS BLANK range";
	return 0;
      }
      *blank = iscalar;
      *hasBlank = 1;
    }
    else {
      // Can the masked pixels' own value serve as BLANK? Only if they all
      // share one value and no unmasked pixel also carries it.
      int commonUsed = 0;
      if (uniq && mask) {
	for (size_t ii=0; ii<nn; ii++) {
	  if ((maskLen == 1 ? mask[0] : mask[ii]) != 0)
	    continue;
	  if (asdfLoadInt((const unsigned char*)data+ii*sz, sz,
			  isSigned, big) == common) {
	    commonUsed = 1;
	    break;
	  }
	}
      }

      // The masked pixels' own value is the first choice - it needs no
      // rewrite - but only if FITS can hold it; otherwise fall through to
      // the candidates, which are in range by construction.
      if (uniq && !commonUsed && common >= INT_MIN && common <= INT_MAX)
	*blank = common;
      else {
	int64_t c0 = isSigned ? tmin : tmax;
	int64_t c1 = isSigned ? tmax : tmin;
	int u0 = isSigned ? minUsed : maxUsed;
	int u1 = isSigned ? maxUsed : minUsed;

	if (!u0)
	  *blank = c0;
	else if (!u1)
	  *blank = c1;
	else {
	  err = "no unused value available for BLANK";
	  return 0;
	}
	rewrite = 1;
      }
      *hasBlank = 1;
    }
  }

  // second pass: mark the masked pixels
  size_t nout = 0;
  for (size_t ii=0; ii<nn; ii++) {
    unsigned char* dd = (unsigned char*)data + ii*sz;

    int mm;
    if (mask)
      mm = (maskLen == 1 ? mask[0] : mask[ii]) != 0;
    else if (isFloat) {
      uint64_t raw = 0;
      for (int bb=0; bb<sz; bb++) {
	unsigned char cc = big ? dd[bb] : dd[sz-1-bb];
	raw = (raw << 8) | cc;
      }
      if (sz == 4) {
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
    }
    else
      mm = asdfLoadInt(dd, sz, isSigned, big) == iscalar;

    if (!mm)
      continue;
    nout++;

    if (isFloat)
      asdfStoreInt(dd, sz == 4 ? 0x7fc00000ULL : 0x7ff8000000000000ULL,
		   sz, big);
    else if (rewrite)
      asdfStoreInt(dd, (uint64_t)*blank, sz, big);
  }

  if (!nout) {
    *hasBlank = 0;
    *blank = 0;
    return 0;
  }

  return 1;
}

// -------------------------------------------------------------- FitsAsdf

FitsAsdf::FitsAsdf(const char* fn, const char* path)
{
  asdf_ = NULL;

  // the ordinary fitsy name/extension/section parse, so an ASDF file can
  // still be named with a block or section spec
  parse(fn);
  if (!valid_)
    return;
  valid_ = 0;

  if (!pName_) {
    asdfError_ = "no file name";
    return;
  }

  asdf_ = new FitsAsdfFile(pName_);
  if (!asdf_->isValid()) {
    asdfError_ = asdf_->error() ? asdf_->error() : "unable to read";
    return;
  }

  if (!build(path && *path ? path : "roman/data"))
    return;

  valid_ = 1;
}

FitsAsdf::~FitsAsdf()
{
  if (data_)
    delete [] (char*)data_;

  if (asdf_)
    delete asdf_;
}

// ------------------------------------------------------------ FitsAsdfNext

FitsAsdfNext::FitsAsdfNext(FitsFile* prev)
{
  primary_ = prev->primary();
  managePrimary_ = 0;

  head_ = prev->head();
  manageHead_ = 0;

  FitsImageHDU* hdu = head_ ? (FitsImageHDU*)head_->hdu() : NULL;
  if (!hdu)
    return;

  data_ = (char*)prev->data() + hdu->imgbytes();
  dataSize_ = 0;
  dataSkip_ = 0;

  ext_ = prev->ext();
  inherit_ = prev->inherit();
  byteswap_ = prev->byteswap();
  endian_ = prev->endian();

  pcoord_ = prev->pcoord();
  pxvalid_ = prev->pxvalid();
  pxmin_ = prev->pxmin();
  pxmax_ = prev->pxmax();
  pyvalid_ = prev->pyvalid();
  pymin_ = prev->pymin();
  pymax_ = prev->pymax();
  pzvalid_ = prev->pzvalid();
  pzmin_ = prev->pzmin();
  pzmax_ = prev->pzmax();
  pbvalid_ = prev->pbvalid();
  pblock_ = prev->pblock();

  valid_ = 1;
}

int FitsAsdf::build(const char* path)
{
  const FitsAsdfNode* nn = asdf_->find(path);
  if (!nn) {
    asdfError_ = string("could not find ndarray ") + path;
    return 0;
  }

  if (nn->unsupported_ & ASDF_BYTEORDER) {
    asdfError_ = string("ndarray has no byteorder ") + path;
    return 0;
  }
  if (nn->unsupported_ & (ASDF_STRIDES|ASDF_OFFSET)) {
    asdfError_ = string("unsupported ndarray view ") + path;
    return 0;
  }

  // ASDF/numpy shape is row major, fastest varying axis last; a FITS
  // header wants NAXIS1 first. Rank 3 loads as a data cube, which covers
  // roman/amp33 ([10,4096,128]) and the border_ref_pix_* set. Anything
  // else is refused rather than silently truncated.
  if (nn->ndim_ != 2 && nn->ndim_ != 3) {
    asdfError_ = string("unsupported ndarray rank ") + path;
    return 0;
  }

  // fitsy carries its dimensions as int, so a dimension that does not fit
  // is refused rather than truncated into a plausible looking shape
  for (int ii=0; ii<nn->ndim_; ii++) {
    if (nn->dim_[ii] <= 0 || nn->dim_[ii] > INT_MAX) {
      asdfError_ = string("unsupported ndarray shape ") + path;
      return 0;
    }
  }

  int xdim, ydim, zdim = 1;
  if (nn->ndim_ == 2) {
    ydim = (int)nn->dim_[0];
    xdim = (int)nn->dim_[1];
  }
  else {
    zdim = (int)nn->dim_[0];
    ydim = (int)nn->dim_[1];
    xdim = (int)nn->dim_[2];
  }

  const char* datatype = nn->datatype_.c_str();
  const char* widen = NULL;
  int bitpix = asdfBitpix(datatype);
  if (!bitpix) {
    widen = asdfWiden(datatype);
    if (!widen) {
      asdfError_ = string("unsupported ndarray datatype ") + datatype;
      return 0;
    }
    bitpix = asdfBitpix(widen);
  }

  size_t len = 0;
  char* buf = asdf_->block(nn->source_, &len);
  if (!buf) {
    asdfError_ = asdf_->error() ? asdf_->error() : "unable to read block";
    return 0;
  }

  int big = nn->big_;

  if (widen) {
    string err;
    size_t wlen = 0;
    char* wide = asdfWidenBuffer(buf, len, datatype, widen, big, &wlen, err);
    delete [] buf;
    if (!wide) {
      asdfError_ = err;
      return 0;
    }
    buf = wide;
    len = wlen;
    // the widened buffer is written little endian whatever it was read as
    big = 0;
  }

  // The block may have decompressed short of what the shape declares.
  // Checked here because nothing below ever checks the buffer against the
  // dimensions: a short block would otherwise render as real pixels
  // followed by whatever memory follows.
  //
  // Computed with a division test rather than a bare product: each
  // dimension is separately allowed up to INT_MAX above, so three of them
  // times the pixel size overflows size_t easily, and a wrapped `want'
  // turns this check into the opposite of what it is for - a tiny buffer
  // would sail through it.
  size_t psize = (size_t)(abs(bitpix)/8);
  size_t want = psize;
  int dims[3] = {xdim, ydim, zdim};
  for (int ii=0; ii<3; ii++) {
    if (want > SIZE_MAX/(size_t)dims[ii]) {
      delete [] buf;
      asdfError_ = string("ndarray is too large to address ") + path;
      return 0;
    }
    want *= (size_t)dims[ii];
  }

  if (len < want) {
    delete [] buf;
    asdfError_ = string("block too short for declared shape ") + path;
    return 0;
  }

  // A mask is resolved for a plain 2-d array of a directly representable
  // datatype only. A widened one is excluded because its BITPIX is no
  // longer the datatype the mask was written against, and a cube because
  // FITS BLANK is per-file rather than per-plane and no sample file has
  // one.
  int hasBlank = 0;
  long long blank = 0;

  if (nn->ndim_ == 2 && !widen) {
    const FitsAsdfNode* mn =
      asdf_->find((nn->path_ + "/mask").c_str());

    char* mask = NULL;
    size_t maskLen = 0;

    if (mn && !mn->unsupported_) {
      mask = asdf_->block(mn->source_, &maskLen);
      if (!mask) {
	// Not fatal - the pixels are fine and the array loads without
	// nulls - but not silent either, or a corrupt mask block looks
	// exactly like a file that simply has no mask. The Tcl side warns
	// about masks it can see are unsupported from the tree alone; only
	// here can a *runtime* failure be reported. Same channel and same
	// "Warning:" prefix convention as fitsimage.C's no-inverse notice.
	string mm = string("Warning: ASDF: unreadable mask block, loading "
			   "without null values: ") +
	  (asdf_->error() ? asdf_->error() : "unknown");
	internalError(mm.c_str());
      }
    }

    if (mask || nn->hasMaskScalar_) {
      string err;
      asdfApplyMask(buf, want, datatype, big, mask, maskLen,
		    mask ? 0 : nn->hasMaskScalar_, nn->maskScalar_,
		    &hasBlank, &blank, err);
      if (!err.empty()) {
	string mm = string("Warning: ASDF: ") + err +
	  ", loading without null values";
	internalError(mm.c_str());
      }
    }

    if (mask)
      delete [] mask;
  }

  pWidth_ = xdim;
  pHeight_ = ydim;
  pDepth_ = zdim;
  pBitpix_ = bitpix;
  pSkip_ = 0;
  pArch_ = big ? BIG : LITTLE;
  pEncoding_ = RAW;

  if (!validParams()) {
    delete [] buf;
    asdfError_ = string("unsupported ndarray shape or datatype ") + path;
    return 0;
  }

  head_ = new FitsHead(pWidth_, pHeight_, pDepth_, pBitpix_);
  if (!head_->isValid()) {
    delete [] buf;
    delete head_;
    head_ = NULL;
    asdfError_ = "unable to build a header";
    return 0;
  }
  manageHead_ = 1;

  // BLANK is the whole reason this path builds its own header rather than
  // going through the array loader: fitsy's array spec grammar has no
  // such keyword, so an in-memory FITS file used to be synthesized just
  // to carry one.
  if (hasBlank && pBitpix_ > 0) {
    head_->appendInteger("BLANK", (int)blank, "Null pixel value");
    head_->updateHDU();
  }

  data_ = buf;
  dataSize_ = len;
  dataSkip_ = 0;

  setByteSwap();

  return 1;
}
