// Copyright (C) 1999-2021
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

// printf formats: %lld/%llu with explicit casts, never the size_t
// specifier - fitsy/asdf.C does the same and is validated on mingw, whose C
// runtime has not always understood it.
//
// Include order: C and library headers first, then <string>/<vector>, then
// fitsy's own. This is the order fitsy/asdf.C pins for Windows, where a
// header that pulls in <windows.h> after a using-directive for std makes
// every bare `byte' in the Windows headers ambiguous against std::byte.
// libxml2, the codecs and OpenSSL may all include <windows.h> on mingw, so
// they stay above the using-directive too. Do not tidy.

#include <stdarg.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <errno.h>
#include <ctype.h>
#include <math.h>

#include <libxml/parser.h>
#include <libxml/tree.h>
#include <libxml/xmlerror.h>

#include <zlib.h>
#include <lz4.h>
#include <zstd.h>
#include <openssl/evp.h>

#include <new>
#include <string>
#include <vector>
using namespace std;

#include "xisf.h"

#define XISF_NS "http://www.pixinsight.com/xisf"
#define XISF_MAGIC "XISF0100"

// Byte budget for any single image: geometry * sample size must stay below
// this, so no later product or allocation can overflow. 2^62 is beyond any
// file that exists and well inside long long.
#define XISF_MAXBYTES (1ULL << 62)

// 64 bit file positioning, as fitsy/asdf.C does it: attachment positions
// are whole-file offsets and mingw's stdio has no fseeko/ftello.
#ifdef __WIN32
#define XISF_SEEK(ff,oo,ww) _fseeki64((ff),(long long)(oo),(ww))
#define XISF_TELL(ff) ((long long)_ftelli64(ff))
#else
#define XISF_SEEK(ff,oo,ww) fseeko((ff),(off_t)(oo),(ww))
#define XISF_TELL(ff) ((long long)ftello(ff))
#endif

// ---------------------------------------------------------------- helpers

static vector<string> xisfSplit(const string& ss, char sep)
{
  vector<string> out;
  size_t start = 0;
  for (;;) {
    size_t at = ss.find(sep, start);
    if (at == string::npos) {
      out.push_back(ss.substr(start));
      return out;
    }
    out.push_back(ss.substr(start, at-start));
    start = at+1;
  }
}

static string xisfTrim(const string& ss)
{
  size_t bb = ss.find_first_not_of(" \t\r\n");
  if (bb == string::npos)
    return "";
  size_t ee = ss.find_last_not_of(" \t\r\n");
  return ss.substr(bb, ee-bb+1);
}

// Strict unsigned decimal: digits only, no sign, no overflow. Every size
// and position in an XISF header goes through this, since they come
// straight off disk.
static int xisfULL(const string& ss, unsigned long long* out)
{
  string tt = xisfTrim(ss);
  if (tt.empty() || tt.size() > 20)
    return 0;
  unsigned long long vv = 0;
  for (size_t ii=0; ii<tt.size(); ii++) {
    char cc = tt[ii];
    if (cc < '0' || cc > '9')
      return 0;
    unsigned dd = (unsigned)(cc-'0');
    if (vv > (ULLONG_MAX - dd)/10)
      return 0;
    vv = vv*10 + dd;
  }
  *out = vv;
  return 1;
}

static int xisfDouble(const string& ss, double* out)
{
  string tt = xisfTrim(ss);
  if (tt.empty())
    return 0;
  char* end = NULL;
  errno = 0;
  double vv = strtod(tt.c_str(), &end);
  if (end == tt.c_str() || *end)
    return 0;
  *out = vv;
  return 1;
}

static int xisfIsXisf(xmlNode* nn)
{
  return nn && nn->type == XML_ELEMENT_NODE && nn->ns && nn->ns->href &&
    !strcmp((const char*)nn->ns->href, XISF_NS);
}

static int xisfIs(xmlNode* nn, const char* name)
{
  return xisfIsXisf(nn) && !strcmp((const char*)nn->name, name);
}

static int xisfAttr(xmlNode* nn, const char* name, string* out)
{
  xmlChar* vv = xmlGetProp(nn, (const xmlChar*)name);
  if (!vv)
    return 0;
  *out = (const char*)vv;
  xmlFree(vv);
  return 1;
}

static string xisfContent(xmlNode* nn)
{
  xmlChar* vv = xmlNodeGetContent(nn);
  if (!vv)
    return "";
  string out = (const char*)vv;
  xmlFree(vv);
  return out;
}

static xmlNode* xisfChild(xmlNode* nn, const char* name)
{
  for (xmlNode* cc = nn->children; cc; cc = cc->next)
    if (xisfIs(cc, name))
      return cc;
  return NULL;
}

// base64 (RFC 4648) or hex text -> bytes. Whitespace anywhere is ignored,
// since writers wrap long embedded blocks. 0 on a malformed encoding.
static int xisfDecodeText(const string& text, int hex, string* out)
{
  out->clear();
  if (hex) {
    int half = -1;
    for (size_t ii=0; ii<text.size(); ii++) {
      char cc = text[ii];
      int vv;
      if (cc == ' ' || cc == '\t' || cc == '\r' || cc == '\n')
	continue;
      if (cc >= '0' && cc <= '9')
	vv = cc-'0';
      else if (cc >= 'a' && cc <= 'f')
	vv = cc-'a'+10;
      else if (cc >= 'A' && cc <= 'F')
	vv = cc-'A'+10;
      else
	return 0;
      if (half < 0)
	half = vv;
      else {
	out->push_back((char)((half << 4) | vv));
	half = -1;
      }
    }
    return half < 0;
  }

  unsigned acc = 0;
  int bits = 0;
  int pad = 0;
  for (size_t ii=0; ii<text.size(); ii++) {
    char cc = text[ii];
    int vv;
    if (cc == ' ' || cc == '\t' || cc == '\r' || cc == '\n')
      continue;
    if (cc == '=') {
      pad++;
      continue;
    }
    if (pad)
      return 0;                 // data after padding
    if (cc >= 'A' && cc <= 'Z')
      vv = cc-'A';
    else if (cc >= 'a' && cc <= 'z')
      vv = cc-'a'+26;
    else if (cc >= '0' && cc <= '9')
      vv = cc-'0'+52;
    else if (cc == '+')
      vv = 62;
    else if (cc == '/')
      vv = 63;
    else
      return 0;
    acc = (acc << 6) | (unsigned)vv;
    bits += 6;
    if (bits >= 8) {
      bits -= 8;
      out->push_back((char)((acc >> bits) & 0xff));
    }
  }
  return pad <= 2;
}

static void xisfFlag(unsigned* flags, string* why, unsigned flag,
		     const string& reason)
{
  if (why->empty())
    *why = reason;
  *flags |= flag;
}

static int xisfSampleSize(const string& fmt)
{
  if (fmt == "UInt8")
    return 1;
  if (fmt == "UInt16")
    return 2;
  if (fmt == "UInt32" || fmt == "Float32")
    return 4;
  if (fmt == "UInt64" || fmt == "Float64" || fmt == "Complex32")
    return 8;
  if (fmt == "Complex64")
    return 16;
  return 0;
}

// The checksum algorithms of spec §10.5, canonical name and digest length.
static int xisfChecksumAlgo(const string& algo, string* canon)
{
  static const char* names[][3] = {
    {"sha-1", "sha1", "40"},
    {"sha-256", "sha256", "64"},
    {"sha-512", "sha512", "128"},
    {"sha3-256", NULL, "64"},
    {"sha3-512", NULL, "128"},
  };
  for (size_t ii=0; ii<sizeof(names)/sizeof(names[0]); ii++)
    if (algo == names[ii][0] || (names[ii][1] && algo == names[ii][1])) {
      *canon = names[ii][0];
      return atoi(names[ii][2]);
    }
  return 0;
}

// ---------------------------------------------------------------- blocks

FitsXisfBlock::FitsXisfBlock()
{
  kind_ = NONE;
  pos_ = 0;
  size_ = 0;
  hex_ = 0;
  shuffled_ = 0;
  itemSize_ = 0;
  usize_ = 0;
  big_ = 0;
  unsupported_ = XISF_OK;
}

// Parse a block's location, encoding and integrity attributes. `el' is the
// element that owns the block (Image, Property); for an embedded block the
// compression and checksum attributes live on its <Data> child instead
// (spec §10.6). Problems are recorded on the block, never raised.
static void xisfParseBlock(xmlNode* el, int inlineAllowed, FitsXisfBlock* bb)
{
  unsigned* ff = &bb->unsupported_;
  string* why = &bb->why_;

  string order;
  if (xisfAttr(el, "byteOrder", &order)) {
    if (order == "big")
      bb->big_ = 1;
    else if (order != "little")
      xisfFlag(ff, why, XISF_BYTEORDER, "unknown byteOrder '" + order + "'");
  }

  string loc;
  if (!xisfAttr(el, "location", &loc))
    return;                     // kind NONE: no data block

  xmlNode* holder = el;
  if (!loc.compare(0, 11, "attachment:")) {
    vector<string> tt = xisfSplit(loc, ':');
    unsigned long long pp, ss;
    if (tt.size() != 3 || !xisfULL(tt[1], &pp) || !xisfULL(tt[2], &ss) ||
	pp > (unsigned long long)LLONG_MAX ||
	ss > (unsigned long long)LLONG_MAX) {
      xisfFlag(ff, why, XISF_LOCATION, "malformed location '" + loc + "'");
      return;
    }
    bb->kind_ = FitsXisfBlock::ATTACHMENT;
    bb->pos_ = (long long)pp;
    bb->size_ = (long long)ss;
  }
  else if (loc == "embedded") {
    xmlNode* data = xisfChild(el, "Data");
    string enc;
    if (!data || !xisfAttr(data, "encoding", &enc) ||
	(enc != "base64" && enc != "hex")) {
      xisfFlag(ff, why, XISF_LOCATION,
	       "embedded block without a base64 or hex <Data> element");
      return;
    }
    bb->kind_ = FitsXisfBlock::EMBEDDED;
    bb->hex_ = enc == "hex";
    bb->text_ = xisfContent(data);
    holder = data;
  }
  else if (!loc.compare(0, 7, "inline:")) {
    string enc = loc.substr(7);
    if (enc != "base64" && enc != "hex") {
      xisfFlag(ff, why, XISF_LOCATION, "malformed location '" + loc + "'");
      return;
    }
    if (!inlineAllowed) {
      xisfFlag(ff, why, XISF_LOCATION,
	       "an Image cannot have an inline data block");
      return;
    }
    bb->kind_ = FitsXisfBlock::INLINE;
    bb->hex_ = enc == "hex";
    bb->text_ = xisfContent(el);
  }
  else if (!loc.compare(0, 4, "url(") || !loc.compare(0, 5, "path(")) {
    // Distributed XISF (.xish + .xisb) and external blocks are out of
    // scope (TODO_XISF.md §2.11): never fetch a URL named by a file.
    xisfFlag(ff, why, XISF_LOCATION,
	     "external data blocks (url/path) are not supported");
    return;
  }
  else {
    xisfFlag(ff, why, XISF_LOCATION, "malformed location '" + loc + "'");
    return;
  }

  string comp;
  if (xisfAttr(holder, "compression", &comp)) {
    vector<string> tt = xisfSplit(comp, ':');
    string codec = tt[0];
    if (codec.size() > 3 && !codec.compare(codec.size()-3, 3, "+sh")) {
      bb->shuffled_ = 1;
      codec = codec.substr(0, codec.size()-3);
    }
    // The codec name is checked before anything else. A block whose stored
    // size happens to equal its uncompressed size looks exactly like a raw
    // subblock, and an unknown codec would then load as raw bytes
    // (Tests/xisf/malformed/unknown_codec).
    if (codec != "zlib" && codec != "lz4" && codec != "lz4hc" &&
	codec != "zstd") {
      xisfFlag(ff, why, XISF_CODEC, "unsupported codec '" + tt[0] + "'");
      return;
    }
    unsigned long long uu, it = 0;
    if (tt.size() != (bb->shuffled_ ? 3U : 2U) || !xisfULL(tt[1], &uu) ||
	(bb->shuffled_ && (!xisfULL(tt[2], &it) || it < 1 || it > 1024))) {
      xisfFlag(ff, why, XISF_CODEC, "malformed compression '" + comp + "'");
      return;
    }
    bb->codec_ = codec;
    bb->usize_ = uu;
    bb->itemSize_ = (int)it;

    string sub;
    if (xisfAttr(holder, "subblocks", &sub)) {
      vector<string> ss = xisfSplit(sub, ':');
      unsigned long long sc = 0, su = 0;
      for (size_t ii=0; ii<ss.size(); ii++) {
	vector<string> pp = xisfSplit(ss[ii], ',');
	unsigned long long cc, ux;
	if (pp.size() != 2 || !xisfULL(pp[0], &cc) || !xisfULL(pp[1], &ux) ||
	    cc > XISF_MAXBYTES || ux > XISF_MAXBYTES ||
	    sc > XISF_MAXBYTES || su > XISF_MAXBYTES) {
	  xisfFlag(ff, why, XISF_CODEC, "malformed subblocks '" + sub + "'");
	  return;
	}
	sc += cc;
	su += ux;
	bb->subblocks_.push_back(make_pair(cc, ux));
      }
      if (su != uu) {
	xisfFlag(ff, why, XISF_SIZE,
		 "subblocks do not add up to the uncompressed size");
	return;
      }
      if (bb->kind_ == FitsXisfBlock::ATTACHMENT &&
	  sc != (unsigned long long)bb->size_) {
	xisfFlag(ff, why, XISF_SIZE,
		 "subblocks do not add up to the stored size");
	return;
      }
    }
    else if (bb->kind_ == FitsXisfBlock::ATTACHMENT)
      bb->subblocks_.push_back(make_pair((unsigned long long)bb->size_, uu));
  }

  string ck;
  if (xisfAttr(holder, "checksum", &ck)) {
    size_t at = ck.find(':');
    string canon;
    int len = at == string::npos ? 0 :
      xisfChecksumAlgo(ck.substr(0, at), &canon);
    if (!len) {
      xisfFlag(ff, why, XISF_CHECKSUM, "unsupported checksum '" + ck + "'");
      return;
    }
    // spec §10.5 says lowercase; case does not change the digest, so
    // normalise rather than refuse
    string hex = ck.substr(at+1);
    for (size_t ii=0; ii<hex.size(); ii++)
      if (hex[ii] >= 'A' && hex[ii] <= 'F')
	hex[ii] = (char)(hex[ii]-'A'+'a');
    if ((int)hex.size() != len ||
	hex.find_first_not_of("0123456789abcdef") != string::npos) {
      xisfFlag(ff, why, XISF_CHECKSUM, "malformed checksum '" + ck + "'");
      return;
    }
    bb->checksumAlgo_ = canon;
    bb->checksumHex_ = hex;
  }
}

// ---------------------------------------------------------------- items

FitsXisfProperty::FitsXisfProperty()
{
  hasValue_ = 0;
  length_ = -1;
  rows_ = -1;
  columns_ = -1;
}

static void xisfParseProperty(xmlNode* el, FitsXisfProperty* pp)
{
  xisfAttr(el, "id", &pp->id_);
  xisfAttr(el, "type", &pp->type_);
  pp->hasValue_ = xisfAttr(el, "value", &pp->value_);
  unsigned long long vv;
  string ss;
  if (xisfAttr(el, "length", &ss) && xisfULL(ss, &vv) && vv <= XISF_MAXBYTES)
    pp->length_ = (long long)vv;
  if (xisfAttr(el, "rows", &ss) && xisfULL(ss, &vv) && vv <= XISF_MAXBYTES)
    pp->rows_ = (long long)vv;
  if (xisfAttr(el, "columns", &ss) && xisfULL(ss, &vv) && vv <= XISF_MAXBYTES)
    pp->columns_ = (long long)vv;
  xisfParseBlock(el, 1, &pp->block_);
  if (pp->block_.kind_ == FitsXisfBlock::NONE && !pp->hasValue_)
    pp->text_ = xisfContent(el);   // a String property's character data
}

FitsXisfImage::FitsXisfImage()
{
  index_ = 0;
  ndim_ = 0;
  for (int ii=0; ii<XISF_MAXDIM; ii++)
    dim_[ii] = 0;
  channels_ = 0;
  sampleSize_ = 0;
  hasBounds_ = 0;
  lower_ = 0;
  upper_ = 0;
  colorSpace_ = "Gray";
  planar_ = 1;
  unsupported_ = XISF_OK;
}

unsigned long long FitsXisfImage::bytes() const
{
  if (unsupported_ & XISF_GEOMETRY || !sampleSize_ || !ndim_)
    return 0;
  unsigned long long nn = (unsigned long long)channels_ * sampleSize_;
  for (int ii=0; ii<ndim_; ii++)
    nn *= (unsigned long long)dim_[ii];
  return nn;
}

const FitsXisfProperty* FitsXisfImage::property(const char* id) const
{
  for (size_t ii=0; ii<properties_.size(); ii++)
    if (properties_[ii].id_ == id)
      return &properties_[ii];
  return NULL;
}

static void xisfParseImage(xmlNode* el, FitsXisfImage* im)
{
  unsigned* ff = &im->unsupported_;
  string* why = &im->why_;

  xisfAttr(el, "id", &im->id_);
  xisfAttr(el, "uuid", &im->uuid_);
  xisfAttr(el, "offset", &im->offset_);
  xisfAttr(el, "orientation", &im->orientation_);
  xisfAttr(el, "imageType", &im->imageType_);

  string ss;
  if (!xisfAttr(el, "sampleFormat", &im->sampleFormat_))
    xisfFlag(ff, why, XISF_FORMAT, "no sampleFormat");
  else {
    im->sampleSize_ = xisfSampleSize(im->sampleFormat_);
    if (!im->sampleSize_)
      xisfFlag(ff, why, XISF_FORMAT,
	       "unknown sampleFormat '" + im->sampleFormat_ + "'");
    else if (!im->sampleFormat_.compare(0, 7, "Complex"))
      xisfFlag(ff, why, XISF_FORMAT,
	       im->sampleFormat_ + " samples are not supported");
  }

  // geometry: dim1:...:dimN:channels, x first (spec §11.5.1). The product
  // is bounded as it is formed, so bytes() can never overflow.
  if (!xisfAttr(el, "geometry", &ss))
    xisfFlag(ff, why, XISF_GEOMETRY, "no geometry");
  else {
    vector<string> tt = xisfSplit(ss, ':');
    unsigned long long prod = im->sampleSize_ ? im->sampleSize_ : 1;
    int ok = tt.size() >= 2;
    for (size_t ii=0; ok && ii<tt.size(); ii++) {
      unsigned long long vv;
      if (!xisfULL(tt[ii], &vv) || !vv || vv > XISF_MAXBYTES/prod)
	ok = 0;
      else {
	prod *= vv;
	if (ii+1 == tt.size())
	  im->channels_ = (long long)vv;
	else if (ii < XISF_MAXDIM)
	  im->dim_[ii] = (long long)vv;
      }
    }
    if (!ok)
      xisfFlag(ff, why, XISF_GEOMETRY, "unusable geometry '" + ss + "'");
    else if (tt.size()-1 > XISF_MAXDIM)
      xisfFlag(ff, why, XISF_GEOMETRY, "too many dimensions '" + ss + "'");
    else
      im->ndim_ = (int)tt.size()-1;
  }

  // bounds only sets the display range, which DS9 computes anyway, so a
  // missing or malformed one is tolerated (Tests/xisf/README.md).
  if (xisfAttr(el, "bounds", &ss)) {
    vector<string> tt = xisfSplit(ss, ':');
    if (tt.size() == 2 && xisfDouble(tt[0], &im->lower_) &&
	xisfDouble(tt[1], &im->upper_))
      im->hasBounds_ = 1;
  }

  if (xisfAttr(el, "colorSpace", &ss)) {
    if (ss != "Gray" && ss != "RGB" && ss != "CIELab")
      xisfFlag(ff, why, XISF_COLORSPACE, "unknown colorSpace '" + ss + "'");
    else
      im->colorSpace_ = ss;
  }

  if (xisfAttr(el, "pixelStorage", &ss)) {
    if (ss == "Normal")
      im->planar_ = 0;
    else if (ss != "Planar")
      xisfFlag(ff, why, XISF_STORAGE, "unknown pixelStorage '" + ss + "'");
  }

  xisfParseBlock(el, 0, &im->block_);
  if (im->block_.kind_ == FitsXisfBlock::NONE && !im->block_.unsupported_)
    xisfFlag(&im->block_.unsupported_, &im->block_.why_, XISF_LOCATION,
	     "no data block location");

  for (xmlNode* cc = el->children; cc; cc = cc->next) {
    if (xisfIs(cc, "FITSKeyword")) {
      FitsXisfKeyword kk;
      xisfAttr(cc, "name", &kk.name_);
      xisfAttr(cc, "value", &kk.value_);
      xisfAttr(cc, "comment", &kk.comment_);
      im->keywords_.push_back(kk);
    }
    else if (xisfIs(cc, "Property")) {
      FitsXisfProperty pp;
      xisfParseProperty(cc, &pp);
      im->properties_.push_back(pp);
    }
    // Data (handled above), Thumbnail, ICCProfile, Resolution,
    // RGBWorkingSpace, DisplayFunction, ColorFilterArray, Reference and
    // anything unknown or foreign: ignored (spec §7.2). A Thumbnail's own
    // location is deliberately never looked at - PixInsight has been seen
    // to write one pointing past the end of the file.
  }
}

// ---------------------------------------------------------------- file

FitsXisfFile::FitsXisfFile(const char* fn)
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

  if (XISF_SEEK(stream_, 0, SEEK_END)) {
    setError("unable to size %s", fn);
    return;
  }
  fileSize_ = XISF_TELL(stream_);
  rewind(stream_);

  unsigned len;
  if (!readPreamble(&len))
    return;

  header_.resize(len);
  if (len && fread(&header_[0], 1, len, stream_) != len) {
    setError("unable to read the XISF header");
    return;
  }

  if (!parseHeader())
    return;

  valid_ = 1;
}

FitsXisfFile::~FitsXisfFile()
{
  if (stream_)
    fclose(stream_);
}

void FitsXisfFile::setError(const char* fmt, ...)
{
  char buf[1024];
  va_list args;
  va_start(args, fmt);
  vsnprintf(buf, sizeof(buf), fmt, args);
  va_end(args);
  error_ = buf;
}

// Spec §9.2: "XISF0100", the header length as a little endian uint32, four
// reserved bytes, then the header at byte 16. The reserved bytes "shall be
// zero" binds writers; a reader that refused them would gain nothing.
int FitsXisfFile::readPreamble(unsigned* len)
{
  unsigned char pp[16];
  if (fileSize_ < 16 || fread(pp, 1, 16, stream_) != 16) {
    setError("too short to be an XISF file");
    return 0;
  }
  if (memcmp(pp, XISF_MAGIC, 8)) {
    setError("not an XISF 1.0 monolithic file (bad signature)");
    return 0;
  }
  *len = (unsigned)pp[8] | ((unsigned)pp[9] << 8) |
    ((unsigned)pp[10] << 16) | ((unsigned)pp[11] << 24);
  if (!*len || (long long)*len > fileSize_-16) {
    setError("XISF header length runs past the end of the file");
    return 0;
  }
  return 1;
}

int FitsXisfFile::parseHeader()
{
  // A signed unit carries a detached <Signature> after </xisf> (spec
  // §9.5): two top level elements, which no single document parser
  // accepts. Hand libxml2 only the bytes up to the end of the root. The
  // last </xisf> is the right one: inside the document a literal "<" is
  // always escaped, and a signature never contains the tag.
  size_t end = header_.rfind("</xisf>");
  if (end == string::npos) {
    setError("XISF header is incomplete (no </xisf>)");
    return 0;
  }
  end += 7;

  // Untrusted input: never fetch anything (NONET), never expand entities
  // (no NOENT), and keep libxml2 quiet on stderr - the error comes back
  // through the context instead.
  xmlInitParser();
  xmlParserCtxtPtr ctxt = xmlNewParserCtxt();
  if (!ctxt) {
    setError("unable to allocate an XML parser");
    return 0;
  }
  xmlDocPtr doc = xmlCtxtReadMemory(ctxt, header_.data(), (int)end,
				    "xisf-header", NULL,
				    XML_PARSE_NONET | XML_PARSE_NOERROR |
				    XML_PARSE_NOWARNING);
  if (!doc) {
    const xmlError* ee = xmlCtxtGetLastError(ctxt);
    string msg = ee && ee->message ? xisfTrim(ee->message) : "parse error";
    setError("XISF header is not well formed XML: %s (line %d)",
	     msg.c_str(), ee ? ee->line : 0);
    xmlFreeParserCtxt(ctxt);
    return 0;
  }
  xmlFreeParserCtxt(ctxt);

  int ok = 0;
  xmlNode* root = xmlDocGetRootElement(doc);
  string version;
  if (!root || strcmp((const char*)root->name, "xisf"))
    setError("XISF header has no <xisf> root element");
  else if (!xisfIsXisf(root))
    setError("XISF header root is not in the %s namespace", XISF_NS);
  else if (!xisfAttr(root, "version", &version) || version != "1.0")
    setError("unsupported XISF version '%s'", version.c_str());
  else {
    ok = 1;
    for (xmlNode* cc = root->children; cc; cc = cc->next) {
      if (xisfIs(cc, "Image")) {
	FitsXisfImage im;
	im.index_ = (int)images_.size();
	xisfParseImage(cc, &im);
	checkImage(&im);
	images_.push_back(im);
      }
      else if (xisfIs(cc, "Metadata")) {
	for (xmlNode* mm = cc->children; mm; mm = mm->next)
	  if (xisfIs(mm, "Property")) {
	    FitsXisfProperty pp;
	    xisfParseProperty(mm, &pp);
	    metadata_.push_back(pp);
	  }
      }
    }
  }

  xmlFreeDoc(doc);
  return ok;
}

// What can only be checked with the file in hand: does the block fit in
// it, and does its size agree with the geometry. Folds the block's own
// verdict into the image's, so unsupported_ alone says whether to load.
void FitsXisfFile::checkImage(FitsXisfImage* im)
{
  FitsXisfBlock& bb = im->block_;
  unsigned* ff = &bb.unsupported_;
  string* why = &bb.why_;

  if (!bb.unsupported_ && bb.kind_ == FitsXisfBlock::ATTACHMENT &&
      (bb.pos_ > fileSize_ || bb.size_ > fileSize_ - bb.pos_))
    xisfFlag(ff, why, XISF_SIZE, "data block runs past the end of the file");

  unsigned long long want = im->bytes();
  if (!bb.unsupported_ && want) {
    unsigned long long have = 0;
    int known = 1;
    if (!bb.codec_.empty())
      have = bb.usize_;
    else if (bb.kind_ == FitsXisfBlock::ATTACHMENT)
      have = (unsigned long long)bb.size_;
    else {
      string dec;
      if (!xisfDecodeText(bb.text_, bb.hex_, &dec)) {
	xisfFlag(ff, why, XISF_LOCATION, "malformed embedded data");
	known = 0;
      }
      have = dec.size();
    }
    if (known && have != want) {
      char buf[128];
      snprintf(buf, sizeof(buf),
	       bb.codec_.empty() ?
	       "data block holds %llu bytes, geometry needs %llu" :
	       "data block declares %llu bytes uncompressed, geometry needs %llu",
	       have, want);
      xisfFlag(ff, why, XISF_SIZE, buf);
    }
  }

  if (bb.unsupported_) {
    if (im->why_.empty())
      im->why_ = bb.why_;
    im->unsupported_ |= bb.unsupported_;
  }
}

// Elide the text of any element longer than this: embedded base64 pixels
// and long inline vectors are unreadable and can be megabytes.
#define XISF_PRETTY_MAXTEXT 120

static void xisfElide(xmlNode* nn)
{
  for (xmlNode* cc = nn->children; cc; cc = cc->next) {
    if (cc->type == XML_TEXT_NODE && cc->content) {
      size_t len = strlen((const char*)cc->content);
      if (len > XISF_PRETTY_MAXTEXT) {
	char buf[96];
	snprintf(buf, sizeof(buf), "[%llu characters not shown]",
		 (unsigned long long)len);
	xmlNodeSetContent(cc, (const xmlChar*)buf);
      }
    }
    else if (cc->type == XML_ELEMENT_NODE)
      xisfElide(cc);
  }
}

string FitsXisfFile::prettyHeader()
{
  size_t end = header_.rfind("</xisf>");
  if (end == string::npos)
    return header_;
  end += 7;

  xmlParserCtxtPtr ctxt = xmlNewParserCtxt();
  if (!ctxt)
    return header_;
  // NOBLANKS drops the writer's own indentation so the dump can indent
  // uniformly; same safety options as parseHeader()
  xmlDocPtr doc = xmlCtxtReadMemory(ctxt, header_.data(), (int)end,
				    "xisf-header", NULL,
				    XML_PARSE_NONET | XML_PARSE_NOERROR |
				    XML_PARSE_NOWARNING | XML_PARSE_NOBLANKS);
  xmlFreeParserCtxt(ctxt);
  if (!doc)
    return header_;

  xmlNode* root = xmlDocGetRootElement(doc);
  if (root)
    xisfElide(root);

  xmlChar* mem = NULL;
  int len = 0;
  xmlDocDumpFormatMemoryEnc(doc, &mem, &len, "UTF-8", 1);
  string out = mem ? string((const char*)mem, len) : header_;
  if (mem)
    xmlFree(mem);
  xmlFreeDoc(doc);

  // a signed unit's detached signature, verbatim and noted
  if (end < header_.size() && header_.find('<', end) != string::npos)
    out += "\n<!-- followed by: -->\n" + header_.substr(end);
  return out;
}

const FitsXisfImage* FitsXisfFile::image(int ii)
{
  if (ii < 0 || ii >= (int)images_.size())
    return NULL;
  return &images_[ii];
}

const FitsXisfImage* FitsXisfFile::find(const char* key)
{
  if (!key)
    return NULL;
  for (size_t ii=0; ii<images_.size(); ii++)
    if (images_[ii].id_ == key)
      return &images_[ii];
  unsigned long long nn;
  if (xisfULL(key, &nn) && nn < images_.size())
    return &images_[nn];
  return NULL;
}

char* FitsXisfFile::stored(const FitsXisfBlock& bb, size_t* size)
{
  *size = 0;

  switch (bb.kind_) {
  case FitsXisfBlock::NONE:
    setError("no data block");
    return NULL;

  case FitsXisfBlock::ATTACHMENT: {
    if (bb.pos_ > fileSize_ || bb.size_ > fileSize_ - bb.pos_) {
      setError("data block runs past the end of the file");
      return NULL;
    }
    if ((unsigned long long)bb.size_ > (unsigned long long)SIZE_MAX) {
      setError("data block too large");
      return NULL;
    }
    char* buf = new (std::nothrow) char[bb.size_ ? (size_t)bb.size_ : 1];
    if (!buf) {
      setError("unable to allocate %lld bytes", bb.size_);
      return NULL;
    }
    if (XISF_SEEK(stream_, bb.pos_, SEEK_SET) ||
	(bb.size_ &&
	 fread(buf, 1, (size_t)bb.size_, stream_) != (size_t)bb.size_)) {
      delete [] buf;
      setError("unable to read data block at %lld", bb.pos_);
      return NULL;
    }
    *size = (size_t)bb.size_;
    return buf;
  }

  case FitsXisfBlock::EMBEDDED:
  case FitsXisfBlock::INLINE: {
    string dec;
    if (!xisfDecodeText(bb.text_, bb.hex_, &dec)) {
      setError("malformed %s data", bb.hex_ ? "hex" : "base64");
      return NULL;
    }
    char* buf = new (std::nothrow) char[dec.size() ? dec.size() : 1];
    if (!buf) {
      setError("unable to allocate %llu bytes",
	       (unsigned long long)dec.size());
      return NULL;
    }
    if (!dec.empty())
      memcpy(buf, dec.data(), dec.size());
    *size = dec.size();
    return buf;
  }
  }
  return NULL;
}

// ---------------------------------------------------------------- decoding

// Verify a block's checksum over its stored bytes (spec §10.5: for a
// compressed block, the digest is over the compressed data, and it is
// checked before anything is decompressed). OpenSSL rather than a vendored
// SHA implementation: ds9 already links libcrypto on every platform, and
// one EVP call covers all five algorithms the spec names.
static int xisfVerify(const FitsXisfBlock& bb, const char* data, size_t nn,
		      string* err)
{
  const EVP_MD* md = NULL;
  if (bb.checksumAlgo_ == "sha-1")
    md = EVP_sha1();
  else if (bb.checksumAlgo_ == "sha-256")
    md = EVP_sha256();
  else if (bb.checksumAlgo_ == "sha-512")
    md = EVP_sha512();
  else if (bb.checksumAlgo_ == "sha3-256")
    md = EVP_sha3_256();
  else if (bb.checksumAlgo_ == "sha3-512")
    md = EVP_sha3_512();
  if (!md) {
    *err = "unsupported checksum " + bb.checksumAlgo_;
    return 0;
  }

  unsigned char dig[EVP_MAX_MD_SIZE];
  unsigned int len = 0;
  if (!EVP_Digest(data, nn, dig, &len, md, NULL)) {
    *err = "unable to compute " + bb.checksumAlgo_ + " checksum";
    return 0;
  }
  static const char hex[] = "0123456789abcdef";
  string got;
  for (unsigned ii=0; ii<len; ii++) {
    got.push_back(hex[dig[ii] >> 4]);
    got.push_back(hex[dig[ii] & 0xf]);
  }
  if (got != bb.checksumHex_) {
    *err = bb.checksumAlgo_ + " checksum mismatch: the data block is corrupt";
    return 0;
  }
  return 1;
}

// Decompress one subblock into exactly `uu' bytes at `dst'. The size is
// required to be exact (spec §10.6.1): a subblock that inflates to more or
// fewer bytes than declared makes the whole block invalid.
static int xisfDecompress(const string& codec, const char* src, size_t cc,
			  char* dst, size_t uu, string* err)
{
  if (codec == "zlib") {
    // zlib's lengths are uLong, 32 bit on Windows; the spec caps a zlib
    // subblock at 2^32-1 for this reason, so a larger one is malformed.
    if ((unsigned long long)cc > (unsigned long long)ULONG_MAX ||
	(unsigned long long)uu > (unsigned long long)ULONG_MAX) {
      *err = "zlib subblock too large";
      return 0;
    }
    uLongf dl = (uLongf)uu;
    uLong sl = (uLong)cc;
    int rr = uncompress2((Bytef*)dst, &dl, (const Bytef*)src, &sl);
    if (rr != Z_OK || dl != (uLongf)uu || sl != (uLong)cc) {
      *err = "zlib data does not decompress to its declared size";
      return 0;
    }
    return 1;
  }

  if (codec == "lz4" || codec == "lz4hc") {
    // lz4hc only changes the encoder; both are plain LZ4 block format,
    // with no frame and no size prefix (unlike the chunked framing
    // python-lz4 gives ASDF, which fitsy/asdf.C decodes).
    if (cc > (size_t)LZ4_MAX_INPUT_SIZE || uu > (size_t)INT_MAX) {
      *err = "lz4 subblock too large";
      return 0;
    }
    int rr = LZ4_decompress_safe(src, dst, (int)cc, (int)uu);
    if (rr < 0 || (size_t)rr != uu) {
      *err = "lz4 data does not decompress to its declared size";
      return 0;
    }
    return 1;
  }

  if (codec == "zstd") {
    // One frame per subblock (spec §10.6); ZSTD_decompress also accepts
    // concatenated frames, and refuses to write past `uu'.
    size_t rr = ZSTD_decompress(dst, uu, src, cc);
    if (ZSTD_isError(rr) || rr != uu) {
      *err = "zstd data does not decompress to its declared size";
      return 0;
    }
    return 1;
  }

  *err = "unsupported codec " + codec;
  return 0;
}

// Undo XISF byte shuffling (spec §10.6.2): the block holds byte 0 of every
// item, then byte 1 of every item, and so on; bytes past the last whole
// item are stored unshuffled at the end.
static void xisfUnshuffle(const char* src, char* dst, size_t nn, size_t item)
{
  size_t count = nn / item;
  for (size_t jj=0; jj<item; jj++) {
    const char* ss = src + jj*count;
    for (size_t ii=0; ii<count; ii++)
      dst[ii*item + jj] = ss[ii];
  }
  size_t done = count*item;
  if (done < nn)
    memcpy(dst+done, src+done, nn-done);
}

char* FitsXisfFile::block(const FitsXisfBlock& bb, size_t* size)
{
  *size = 0;
  if (bb.unsupported_) {
    setError("%s", bb.why_.c_str());
    return NULL;
  }

  size_t nn;
  char* data = stored(bb, &nn);
  if (!data)
    return NULL;

  string err;
  if (!bb.checksumAlgo_.empty() && !xisfVerify(bb, data, nn, &err)) {
    delete [] data;
    setError("%s", err.c_str());
    return NULL;
  }

  if (bb.codec_.empty()) {
    *size = nn;
    return data;
  }

  // An embedded block without a subblocks attribute is one subblock; its
  // stored size is only known now, after decoding the text.
  vector<pair<unsigned long long,unsigned long long> > subs = bb.subblocks_;
  if (subs.empty())
    subs.push_back(make_pair((unsigned long long)nn, bb.usize_));
  unsigned long long sc = 0, su = 0;
  for (size_t ii=0; ii<subs.size(); ii++) {
    sc += subs[ii].first;
    su += subs[ii].second;
  }
  if (sc != (unsigned long long)nn || su != bb.usize_ ||
      su > XISF_MAXBYTES || su > (unsigned long long)SIZE_MAX) {
    delete [] data;
    setError("subblock sizes do not match the data block");
    return NULL;
  }

  size_t usize = (size_t)su;
  char* out = new (std::nothrow) char[usize ? usize : 1];
  if (!out) {
    delete [] data;
    setError("unable to allocate %llu bytes", (unsigned long long)usize);
    return NULL;
  }

  // A subblock whose stored size equals its uncompressed size is stored
  // raw (spec §10.6.1, Revision 2): copy it, never decompress it. The codec
  // name was validated when the header was parsed, so an unknown codec can
  // not reach this as a lookalike raw subblock.
  size_t at = 0, to = 0;
  for (size_t ii=0; ii<subs.size(); ii++) {
    size_t cc = (size_t)subs[ii].first;
    size_t uu = (size_t)subs[ii].second;
    if (cc == uu)
      memcpy(out+to, data+at, cc);
    else if (!xisfDecompress(bb.codec_, data+at, cc, out+to, uu, &err)) {
      delete [] data;
      delete [] out;
      setError("%s", err.c_str());
      return NULL;
    }
    at += cc;
    to += uu;
  }
  delete [] data;

  // Shuffling applies to the whole block, before it was split into
  // subblocks, so it is undone only after all of them are decompressed.
  if (bb.shuffled_ && bb.itemSize_ > 1 && usize) {
    char* tmp = new (std::nothrow) char[usize];
    if (!tmp) {
      delete [] out;
      setError("unable to allocate %llu bytes", (unsigned long long)usize);
      return NULL;
    }
    xisfUnshuffle(out, tmp, usize, (size_t)bb.itemSize_);
    delete [] out;
    out = tmp;
  }

  *size = usize;
  return out;
}

// ================================================================ FitsXisf

// ---------------------------------------------------------------- header

// The cards a writer may have copied from whatever file it imported, which
// describe that file's layout and not this image's. Real PixInsight output
// carries BITPIX = 16 and BZERO = 32768 over 0-9 UInt16 pixels
// (Tests/xisf/real/libxisf/test.xisf): honouring that BZERO would show
// 32768-32777. The structure is rebuilt from the geometry instead.
static int xisfStructural(const string& nn)
{
  static const char* names[] = {
    "SIMPLE", "BITPIX", "NAXIS", "EXTEND", "BZERO", "BSCALE", "BLANK",
    "DATAMIN", "DATAMAX", "END", "XTENSION", "PCOUNT", "GCOUNT", "GROUPS",
  };
  for (size_t ii=0; ii<sizeof(names)/sizeof(names[0]); ii++)
    if (nn == names[ii])
      return 1;
  return !nn.compare(0, 5, "NAXIS") && nn.size() > 5 &&
    nn.find_first_not_of("0123456789", 5) == string::npos;
}

// `prefix' followed by axis digits, optionally `_' and more digits, and an
// optional alternate-WCS letter: CTYPE1, CD1_2, PV2_1, CRPIX1A, ...
static int xisfAxisKey(const string& nn, const char* prefix, int pair)
{
  size_t pl = strlen(prefix);
  if (nn.compare(0, pl, prefix) || nn.size() == pl)
    return 0;
  size_t ii = pl;
  size_t dd = ii;
  while (ii < nn.size() && isdigit((unsigned char)nn[ii]))
    ii++;
  if (ii == dd)
    return 0;
  if (pair) {
    if (ii >= nn.size() || nn[ii] != '_')
      return 0;
    dd = ++ii;
    while (ii < nn.size() && isdigit((unsigned char)nn[ii]))
      ii++;
    if (ii == dd)
      return 0;
  }
  if (ii < nn.size() && isupper((unsigned char)nn[ii]))
    ii++;
  return ii == nn.size();
}

// WCS keywords. Phase 4 decides how a keyword-only solution is read (PCL
// documents them as top-down, but writes bottom-up ones next to every
// solution - TODO_XISF.md §2.6); until then none reaches the live header.
static int xisfWcsKeyword(const string& nn)
{
  static const char* axis[] = {"CTYPE", "CRVAL", "CRPIX", "CDELT", "CROTA",
			       "CUNIT", "CNAME", "CRDER", "CSYER"};
  static const char* pair[] = {"CD", "PC", "PV", "PS"};
  for (size_t ii=0; ii<sizeof(axis)/sizeof(axis[0]); ii++)
    if (xisfAxisKey(nn, axis[ii], 0))
      return 1;
  for (size_t ii=0; ii<sizeof(pair)/sizeof(pair[0]); ii++)
    if (xisfAxisKey(nn, pair[ii], 1))
      return 1;
  if (nn == "LONPOLE" || nn == "LATPOLE" || nn == "WCSAXES" ||
      nn == "RADESYS" || nn == "RADECSYS" || nn == "WCSNAME" ||
      nn == "A_ORDER" || nn == "B_ORDER" || nn == "AP_ORDER" ||
      nn == "BP_ORDER" || nn == "A_DMAX" || nn == "B_DMAX")
    return 1;
  // SIP coefficients: A_p_q, B_p_q, AP_p_q, BP_p_q
  const char* sip[] = {"A_", "B_", "AP_", "BP_"};
  for (int ii=0; ii<4; ii++) {
    size_t pl = strlen(sip[ii]);
    if (!nn.compare(0, pl, sip[ii])) {
      string rest = nn.substr(pl);
      size_t us = rest.find('_');
      if (us != string::npos && us > 0 && us+1 < rest.size() &&
	  rest.find_first_not_of("0123456789_") == string::npos)
	return 1;
    }
  }
  return 0;
}

static int xisfFitsName(const string& nn)
{
  if (nn.empty() || nn.size() > 8)
    return 0;
  for (size_t ii=0; ii<nn.size(); ii++) {
    char cc = nn[ii];
    if (!(isupper((unsigned char)cc) || isdigit((unsigned char)cc) ||
	  cc == '-' || cc == '_'))
      return 0;
  }
  return 1;
}

// A FITS string value: quoted, embedded quotes doubled, and cut short
// enough to close its quote by column 80 (`room' columns in all).
static string xisfQuote(const string& text, size_t room)
{
  string out = "'";
  for (size_t ii=0; ii<text.size(); ii++) {
    size_t need = text[ii] == '\'' ? 2 : 1;
    if (out.size() + need + 1 > room)
      break;
    out += text[ii];
    if (text[ii] == '\'')
      out += '\'';
  }
  return out + "'";
}

// A FITS string value as written - quotes and all - back to its text.
static string xisfUnquote(const string& vv)
{
  string out;
  for (size_t ii=1; ii<vv.size(); ii++) {
    if (vv[ii] == '\'') {
      if (ii+1 < vv.size() && vv[ii+1] == '\'')
	ii++;
      else
	break;
    }
    out += vv[ii];
  }
  return out;
}

// One FITS card, laid out as the standard has it: a string value starts at
// column 11, anything else is right justified to column 30, and nothing
// ever runs past column 80. Every card this file writes goes through
// here, never through FitsCard's set* helpers: those copy their value and
// comment into the 80 byte card unbounded, and the values here come from
// the file (Tests/xisf/header/long_values overflowed the heap that way).
static string xisfCard(const string& name, const string& value,
		       const string& comment)
{
  string cc = name.substr(0, 8);
  cc.resize(8, ' ');
  if (name == "COMMENT" || name == "HISTORY" || name.empty())
    cc += comment.empty() ? value : comment;
  else {
    cc += "= ";
    string vv = xisfTrim(value);
    if (!vv.empty() && vv[0] == '\'') {
      if (cc.size() + vv.size() > 80)       // re-close a too long string
	vv = xisfQuote(xisfUnquote(vv), 80-cc.size());
      cc += vv;
    }
    else {
      if (vv.size() < 20)
	cc += string(20-vv.size(), ' ');
      cc += vv;
    }
    if (!comment.empty())
      cc += " / " + comment;
  }
  if (cc.size() > 80)
    cc.resize(80);
  cc.resize(80, ' ');
  return cc;
}

static string xisfReal(double vv)
{
  if (vv == 0)
    vv = 0;                     // not -0
  char buf[64];
  snprintf(buf, sizeof(buf), "%.17G", vv);
  string ss = buf;
  if (ss.find_first_of(".EN") == string::npos)
    ss += ".";                  // keep it a real, not an integer
  return ss;
}

static string xisfInt(long long vv)
{
  char buf[32];
  snprintf(buf, sizeof(buf), "%lld", vv);
  return buf;
}

static void xisfAppendCard(FitsHead* hh, const string& card)
{
  char buf[81];
  memcpy(buf, card.data(), 80);
  buf[80] = '\0';
  hh->cardins(buf, NULL);
}

static void xisfAppendComment(FitsHead* hh, const string& text)
{
  // COMMENT cards hold 72 characters; wrap longer text over several
  for (size_t at=0; at<text.size() || !at; at+=72) {
    xisfAppendCard(hh, xisfCard("COMMENT", "", text.substr(at, 72)));
    if (text.empty())
      break;
  }
}

static const FitsXisfKeyword* xisfFindKeyword(const FitsXisfImage* im,
					      const char* name)
{
  for (size_t ii=0; ii<im->keywords_.size(); ii++)
    if (im->keywords_[ii].name_ == name)
      return &im->keywords_[ii];
  return NULL;
}

// A property's scalar or string value, if it has one inline.
static int xisfPropertyText(const FitsXisfImage* im, const char* id,
			    string* out)
{
  const FitsXisfProperty* pp = im->property(id);
  if (!pp || pp->block_.kind_ != FitsXisfBlock::NONE)
    return 0;
  *out = pp->hasValue_ ? xisfTrim(pp->value_) : pp->text_;
  return !out->empty();
}

// ---------------------------------------------------------------- WCS

static unsigned long long xisfLoadUInt(const unsigned char*, int, int);

// PCL's WCSKeywords::MirrorVertically, for one keyword: the WCS keywords
// stored with an XISF image describe its rows in storage order, top row
// first (PCL WCSKeywords.h), and this reader stores them bottom row
// first. CRPIX2 -> H+1-CRPIX2; CD1_2, CD2_2, PC1_2, PC2_2 negated; CDELT2
// negated only when there is no PC matrix (CD = R(CROTA2) diag(CDELT1,
// CDELT2), so CROTA2 is unchanged); and the SIP terms that correct or
// depend on the vertical axis: in A and AP the coefficient of u^p v^q
// changes sign for odd q, in B and BP for even q. An alternate-WCS letter
// is carried along. Returns the new value text, or the old one.
static string xisfMirror(const string& name, const string& value, int hh,
			 int hasPC)
{
  string nn = name;
  if (nn.size() > 1 && isupper((unsigned char)nn[nn.size()-1]) &&
      isdigit((unsigned char)nn[nn.size()-2]))
    nn.resize(nn.size()-1);    // CRPIX2A -> CRPIX2

  double vv;
  if (!xisfDouble(value, &vv) || !isfinite(vv))
    return value;               // not ours to repair; AST will refuse it

  if (nn == "CRPIX2")
    return xisfReal(hh + 1 - vv);
  if (nn == "CD1_2" || nn == "CD2_2" || nn == "PC1_2" || nn == "PC2_2")
    return xisfReal(-vv);
  if (nn == "CDELT2" && !hasPC)
    return xisfReal(-vv);

  int horiz = !nn.compare(0, 2, "A_") || !nn.compare(0, 3, "AP_");
  int vert = !nn.compare(0, 2, "B_") || !nn.compare(0, 3, "BP_");
  if ((horiz || vert) && xisfWcsKeyword(nn)) {
    size_t us = nn.rfind('_');
    unsigned long long qq;
    if (us != string::npos && xisfULL(nn.substr(us+1), &qq)) {
      int odd = (int)(qq & 1);
      if (horiz == odd)
	return xisfReal(-vv);
    }
  }
  return value;
}

// A Float64 vector or matrix property of exactly `nn' values (the matrix
// as `rows' x nn/rows, row major), decoded from its data block.
int FitsXisf::vectorProperty(const FitsXisfImage* im, const string& id,
			     int nn, int rows, double* out, string* why)
{
  const FitsXisfProperty* pp = im->property(id.c_str());
  if (!pp) {
    *why = "no " + id;
    return 0;
  }
  int matrix = rows > 0;
  if (pp->type_ != (matrix ? "F64Matrix" : "F64Vector") ||
      (matrix ? (pp->rows_ != rows || pp->columns_ != nn/rows) :
       pp->length_ != nn)) {
    *why = id + " is not a " + (matrix ? "2x2 F64Matrix" : "2-element F64Vector");
    return 0;
  }
  size_t len = 0;
  char* buf = xisf_->block(pp->block_, &len);
  if (!buf) {
    *why = id + ": " + (xisf_->error() ? xisf_->error() : "unreadable");
    return 0;
  }
  if (len != (size_t)nn*8) {
    delete [] buf;
    *why = id + " has the wrong size";
    return 0;
  }
  for (int ii=0; ii<nn; ii++) {
    unsigned long long bits = xisfLoadUInt((unsigned char*)buf + ii*8, 8,
					   pp->block_.big_);
    double dd;
    memcpy(&dd, &bits, 8);
    if (!isfinite(dd)) {
      delete [] buf;
      *why = id + " is not finite";
      return 0;
    }
    out[ii] = dd;
  }
  delete [] buf;
  return 1;
}

// FITS WCS cards for the linear layer (layer 1) of an astrometric
// solution under `prefix'. 0, with the reason, if it is unusable - which
// disables the whole solution (spec §11.5.3.7). Layers 2 and 3 are noted
// and not applied: the spec lets a decoder fall back to layer 1, which is
// "the best linear approximation" of the whole image-plane step.
//
// The conversion is PCL's ComputeWCSKeywords: XISF image coordinates have
// the top-left pixel centred at (0.5, 0.5) and y down, so with FITS pixel
// (xf, yf) for the flipped rows, x = xf - 0.5 and y = H + 0.5 - yf. M,
// row major, maps (x - x0, y - y0) to the projection plane in degrees, so
// CRPIX = (x0 + 0.5, H + 0.5 - y0) and CD is M with its second column
// negated.
int FitsXisf::solutionCards(const FitsXisfImage* im, const char* prefix,
			    vector<string>* cards, vector<string>* notes)
{
  string pfx = prefix;
  string why;

  string proj;
  const FitsXisfProperty* pp = im->property((pfx + "ProjectionSystem").c_str());
  if (pp)
    proj = xisfTrim(pp->hasValue_ ? pp->value_ : pp->text_);
  static const char* codes[][2] = {
    {"Gnomonic", "TAN"}, {"Stereographic", "STG"},
    {"ZenithalEqualArea", "ZEA"}, {"Orthographic", "SIN"},
    {"PlateCarree", "CAR"}, {"Mercator", "MER"}, {"HammerAitoff", "AIT"},
  };
  const char* code = NULL;
  for (size_t ii=0; ii<sizeof(codes)/sizeof(codes[0]); ii++)
    if (proj == codes[ii][0])
      code = codes[ii][1];
  if (!code) {
    notes->push_back("XISF astrometric solution not used: " +
		     (proj.empty() ? string("no ProjectionSystem") :
		      "unknown ProjectionSystem '" + proj + "'"));
    return 0;
  }

  double crval[2], ref[2], mm[4];
  if (!vectorProperty(im, pfx + "ReferenceCelestialCoordinates", 2, 0,
		      crval, &why) ||
      !vectorProperty(im, pfx + "ReferenceImageCoordinates", 2, 0, ref,
		      &why) ||
      !vectorProperty(im, pfx + "LinearTransformationMatrix", 4, 2, mm,
		      &why)) {
    notes->push_back("XISF astrometric solution not used: " + why);
    return 0;
  }

  double hh = (double)im->dim_[1];
  cards->push_back(xisfCard("CTYPE1", string("'RA---") + code + "'",
			    "XISF ProjectionSystem " + proj));
  cards->push_back(xisfCard("CTYPE2", string("'DEC--") + code + "'",
			    "XISF ProjectionSystem " + proj));
  cards->push_back(xisfCard("CRVAL1", xisfReal(crval[0]), "[deg]"));
  cards->push_back(xisfCard("CRVAL2", xisfReal(crval[1]), "[deg]"));
  cards->push_back(xisfCard("CRPIX1", xisfReal(ref[0] + 0.5), ""));
  cards->push_back(xisfCard("CRPIX2", xisfReal(hh + 0.5 - ref[1]), ""));
  cards->push_back(xisfCard("CD1_1", xisfReal(mm[0]), "[deg/pixel]"));
  cards->push_back(xisfCard("CD1_2", xisfReal(-mm[1]), "[deg/pixel]"));
  cards->push_back(xisfCard("CD2_1", xisfReal(mm[2]), "[deg/pixel]"));
  cards->push_back(xisfCard("CD2_2", xisfReal(-mm[3]), "[deg/pixel]"));

  double pv[2];
  string dummy;
  if (vectorProperty(im, pfx + "ReferenceNativeCoordinates", 2, 0, pv,
		     &dummy)) {
    cards->push_back(xisfCard("PV1_1", xisfReal(pv[0]),
			      "[deg] native longitude of the reference point"));
    cards->push_back(xisfCard("PV1_2", xisfReal(pv[1]),
			      "[deg] native latitude of the reference point"));
  }
  if (vectorProperty(im, pfx + "CelestialPoleNativeCoordinates", 2, 0, pv,
		     &dummy)) {
    cards->push_back(xisfCard("LONPOLE", xisfReal(pv[0]),
			      "[deg] native longitude of the celestial pole"));
    cards->push_back(xisfCard("LATPOLE", xisfReal(pv[1]),
			      "[deg] native latitude of the celestial pole"));
  }

  // ICRS is the default. GCRS has no FITS RADESYS value (PCL writes
  // 'GCRS' anyway); the difference is aberration and light deflection,
  // tens of arcseconds at most, which the linear layer does not model
  // either - so ICRS, and say so.
  string sys;
  pp = im->property((pfx + "CelestialReferenceSystem").c_str());
  if (pp)
    sys = xisfTrim(pp->hasValue_ ? pp->value_ : pp->text_);
  cards->push_back(xisfCard("RADESYS", "'ICRS'", ""));
  if (!sys.empty() && sys != "ICRS")
    notes->push_back("XISF CelestialReferenceSystem " + sys +
		     " is shown as ICRS");

  for (size_t ii=0; ii<im->properties_.size(); ii++) {
    const string& id = im->properties_[ii].id_;
    if (!id.compare(0, pfx.size(), pfx) &&
	(id.find(":ProjectiveTransformation:") != string::npos ||
	 id.find(":DistortionModel:") != string::npos)) {
      notes->push_back("XISF astrometric solution layers 2/3 (projective, "
		       "distortion) are not applied; the WCS is its linear "
		       "layer 1");
      break;
    }
  }

  notes->push_back(string("WCS from the XISF astrometric solution (") +
		   prefix + "*)");
  return 1;
}

void FitsXisf::buildHeader(const FitsXisfImage* im)
{
  FitsHead* hh = head_;
  vector<string> notes;
  vector<const FitsXisfKeyword*> wcsKeys;

  // bounds only states the display range, and a float image's is usually
  // 0:1 - exactly what DATAMIN/DATAMAX say, for a scale mode that uses
  // them. The keyword list's own DATAMIN/DATAMAX are not used: in real
  // files they describe the file the image was imported from.
  if (im->hasBounds_) {
    xisfAppendCard(hh, xisfCard("DATAMIN", xisfReal(im->lower_),
				"XISF bounds, lower"));
    xisfAppendCard(hh, xisfCard("DATAMAX", xisfReal(im->upper_),
				"XISF bounds, upper"));
  }

  for (size_t ii=0; ii<im->keywords_.size(); ii++) {
    const FitsXisfKeyword& kk = im->keywords_[ii];
    string name = xisfTrim(kk.name_);
    string shown = name + " = " + kk.value_;
    if (xisfStructural(name))
      notes.push_back("XISF keyword not used (structure is from the "
		      "geometry): " + shown);
    else if (xisfWcsKeyword(name))
      wcsKeys.push_back(&kk);
    else if (!name.empty() && !xisfFitsName(name))
      notes.push_back("XISF keyword with a non-FITS name: " + shown);
    else
      xisfAppendCard(hh, xisfCard(name, kk.value_, kk.comment_));
  }

  // FITS equivalents of standard properties (spec §11.5.3), where the
  // keyword list does not already say it. Strings and times verbatim,
  // numbers as written; units converted where the conventional keyword
  // uses others.
  struct Map {const char* id; const char* key; int kind; double scale;
    const char* comm;};
  static const Map map[] = {
    {"Observation:Object:Name", "OBJECT", 0, 1, "XISF Observation:Object:Name"},
    {"Observation:Time:Start", "DATE-OBS", 0, 1, "XISF Observation:Time:Start"},
    {"Observation:Time:End", "DATE-END", 0, 1, "XISF Observation:Time:End"},
    {"Instrument:ExposureTime", "EXPTIME", 1, 1, "[s] XISF Instrument:ExposureTime"},
    {"Instrument:Filter:Name", "FILTER", 0, 1, "XISF Instrument:Filter:Name"},
    {"Instrument:Telescope:Name", "TELESCOP", 0, 1, "XISF Instrument:Telescope:Name"},
    {"Instrument:Camera:Name", "INSTRUME", 0, 1, "XISF Instrument:Camera:Name"},
    {"Instrument:Camera:XBinning", "XBINNING", 2, 1, "XISF Instrument:Camera:XBinning"},
    {"Instrument:Camera:YBinning", "YBINNING", 2, 1, "XISF Instrument:Camera:YBinning"},
    {"Instrument:Sensor:Temperature", "CCD-TEMP", 1, 1, "[C] XISF Instrument:Sensor:Temperature"},
    {"Instrument:Sensor:XPixelSize", "XPIXSZ", 1, 1, "[um] XISF Instrument:Sensor:XPixelSize"},
    {"Instrument:Sensor:YPixelSize", "YPIXSZ", 1, 1, "[um] XISF Instrument:Sensor:YPixelSize"},
    {"Instrument:Telescope:FocalLength", "FOCALLEN", 1, 1000, "[mm] XISF Instrument:Telescope:FocalLength"},
    {"Instrument:Telescope:Aperture", "APTDIA", 1, 1000, "[mm] XISF Instrument:Telescope:Aperture"},
    {"Observation:Location:Latitude", "OBSGEO-B", 1, 1, "[deg] XISF Observation:Location:Latitude"},
    {"Observation:Location:Longitude", "OBSGEO-L", 1, 1, "[deg] XISF Observation:Location:Longitude"},
    {"Observation:Location:Elevation", "OBSGEO-H", 1, 1, "[m] XISF Observation:Location:Elevation"},
  };
  for (size_t ii=0; ii<sizeof(map)/sizeof(map[0]); ii++) {
    string vv;
    if (xisfFindKeyword(im, map[ii].key) ||
	!xisfPropertyText(im, map[ii].id, &vv))
      continue;
    double dd;
    unsigned long long uu;
    if (map[ii].kind == 0)
      xisfAppendCard(hh, xisfCard(map[ii].key, xisfQuote(vv, 70),
				  map[ii].comm));
    else if (map[ii].kind == 2 && xisfULL(vv, &uu) && uu <= INT_MAX)
      xisfAppendCard(hh, xisfCard(map[ii].key, xisfInt((long long)uu),
				  map[ii].comm));
    else if (xisfDouble(vv, &dd))
      xisfAppendCard(hh, xisfCard(map[ii].key, xisfReal(dd*map[ii].scale),
				  map[ii].comm));
  }
  if (!im->imageType_.empty() && !xisfFindKeyword(im, "IMAGETYP"))
    xisfAppendCard(hh, xisfCard("IMAGETYP", xisfQuote(im->imageType_, 70),
				"XISF imageType"));

  // WCS. A standard AstrometricSolution block, unless its Version's major
  // is not 1 (PCL then ignores the block entirely); else a legacy
  // PCL:AstrometricSolution block, which PCL reads with the same meaning.
  // The WCS keywords are used only when the image carries no solution
  // block of either kind - not even an unusable one - because PCL writes
  // bottom-up WCS keywords next to every solution it saves, contrary to
  // the top-down convention it documents for reading them.
  int hasStd = 0, hasLegacy = 0, stdVersionOk = 1;
  for (size_t ii=0; ii<im->properties_.size(); ii++) {
    const string& id = im->properties_[ii].id_;
    if (!id.compare(0, 20, "AstrometricSolution:"))
      hasStd = 1;
    else if (!id.compare(0, 24, "PCL:AstrometricSolution:"))
      hasLegacy = 1;
  }
  if (hasStd) {
    string ver;
    if (xisfPropertyText(im, "AstrometricSolution:Version", &ver)) {
      unsigned long long major;
      if (!xisfULL(ver.substr(0, ver.find('.')), &major) || major != 1) {
	stdVersionOk = 0;
	notes.push_back("XISF astrometric solution not used: unsupported "
			"Version " + ver);
      }
    }
  }

  vector<string> wcsCards;
  int solved = 0;
  if (hasStd && stdVersionOk)
    solved = solutionCards(im, "AstrometricSolution:", &wcsCards, &notes);
  else if (hasLegacy && !hasStd)
    solved = solutionCards(im, "PCL:AstrometricSolution:", &wcsCards,
			   &notes);

  if (hasStd || hasLegacy) {
    for (size_t ii=0; ii<wcsKeys.size(); ii++)
      notes.push_back("XISF WCS keyword not used (" +
		      string(solved ? "superseded by" : "an image with") +
		      " an astrometric solution): " + wcsKeys[ii]->name_ +
		      " = " + wcsKeys[ii]->value_);
  }
  else if (!wcsKeys.empty()) {
    int hasPC = 0;
    for (size_t ii=0; ii<wcsKeys.size(); ii++)
      if (!wcsKeys[ii]->name_.compare(0, 3, "PC1") ||
	  !wcsKeys[ii]->name_.compare(0, 3, "PC2"))
	hasPC = 1;
    for (size_t ii=0; ii<wcsKeys.size(); ii++) {
      const FitsXisfKeyword& kk = *wcsKeys[ii];
      string name = xisfTrim(kk.name_);
      wcsCards.push_back(xisfCard(name, xisfMirror(name, kk.value_,
						     (int)im->dim_[1], hasPC),
				  kk.comment_));
    }
    notes.push_back("WCS from the XISF WCS keywords, which describe the "
		    "rows top down: mirrored for the flip (CRPIX2, CD/PC "
		    "column 2, SIP)");
  }
  for (size_t ii=0; ii<wcsCards.size(); ii++)
    xisfAppendCard(hh, wcsCards[ii]);

  // what was done to get here, and what an XISF reader would otherwise know
  char buf[256];
  snprintf(buf, sizeof(buf), "XISF image %d of %d%s%s, %s %s, %s storage",
	   im->index_+1, xisf_->nimage(),
	   im->id_.empty() ? "" : ", id ", im->id_.c_str(),
	   im->colorSpace_.c_str(), im->sampleFormat_.c_str(),
	   im->planar_ ? "planar" : "normal");
  xisfAppendComment(hh, buf);
  if (im->channels_ > 1) {
    snprintf(buf, sizeof(buf), "Its %lld %s channels are the planes of "
	     "axis 3.", im->channels_, im->colorSpace_.c_str());
    xisfAppendComment(hh, buf);
  }
  xisfAppendComment(hh, "Rows are flipped: XISF row 0 is the top, FITS row "
		    "1 the bottom.");
  if (im->sampleFormat_ == "UInt32")
    xisfAppendComment(hh, "UInt32 samples are widened to 64 bit integers.");
  if (!im->offset_.empty())
    xisfAppendComment(hh, "XISF offset (pedestal added to the data, not "
		      "removed here): " + im->offset_);
  if (!im->orientation_.empty())
    xisfAppendComment(hh, "XISF orientation (display hint, not applied): " +
		      im->orientation_);
  for (size_t ii=0; ii<notes.size(); ii++)
    xisfAppendComment(hh, notes[ii]);

  hh->updateHDU();
}

// ---------------------------------------------------------------- pixels

FitsXisf::FitsXisf(const char* fn, const char* key)
{
  xisf_ = NULL;

  // the ordinary fitsy name parse, as FitsAsdf does it
  parse(fn);
  if (!valid_)
    return;
  valid_ = 0;

  if (!pName_) {
    xisfError_ = "no file name";
    return;
  }

  xisf_ = new FitsXisfFile(pName_);
  if (!xisf_->isValid()) {
    xisfError_ = xisf_->error() ? xisf_->error() : "unable to read";
    return;
  }

  if (!build(key))
    return;

  valid_ = 1;
}

FitsXisf::~FitsXisf()
{
  if (data_)
    delete [] (char*)data_;

  if (xisf_)
    delete xisf_;
}

static unsigned long long xisfLoadUInt(const unsigned char* pp, int sz,
				       int big)
{
  unsigned long long vv = 0;
  for (int ii=0; ii<sz; ii++)
    vv |= (unsigned long long)pp[big ? sz-1-ii : ii] << (8*ii);
  return vv;
}

int xisfLoadable(const FitsXisfImage* im, string* why)
{
  if (im->unsupported_) {
    *why = im->why_;
    return 0;
  }
  // Two spatial dimensions with any number of channels, or three with
  // one. The channels of a 2-D image become the planes of a cube; a 3-D
  // image with several channels would need a fourth axis, which DS9 has
  // no frame for.
  if (im->ndim_ < 2 || im->ndim_ > 3) {
    char buf[32];
    snprintf(buf, sizeof(buf), "%d", im->ndim_);
    *why = string(buf) + "-dimensional images are not supported";
    return 0;
  }
  if (im->ndim_ == 3 && im->channels_ > 1) {
    *why = "3-dimensional images with several channels are not supported";
    return 0;
  }
  long long dd = im->ndim_ == 3 ? im->dim_[2] : im->channels_;
  if (im->dim_[0] > INT_MAX || im->dim_[1] > INT_MAX || dd > INT_MAX) {
    *why = "too large for fitsy";
    return 0;
  }
  return 1;
}

int FitsXisf::build(const char* key)
{
  const FitsXisfImage* im = NULL;
  if (key && *key) {
    im = xisf_->find(key);
    if (!im) {
      xisfError_ = string("no image '") + key + "' in this file";
      return 0;
    }
  }
  else if (!(im = xisf_->image(0))) {
    xisfError_ = "the file contains no images";
    return 0;
  }

  char label[64];
  snprintf(label, sizeof(label), "image %d", im->index_);
  string what = im->id_.empty() ? string(label) : "image " + im->id_;

  string why;
  if (!xisfLoadable(im, &why)) {
    xisfError_ = what + ": " + why;
    return 0;
  }
  long long ww = im->dim_[0];
  long long hh = im->dim_[1];
  long long dd = im->ndim_ == 3 ? im->dim_[2] : im->channels_;
  long long nc = im->channels_;

  int bitpix, widen = 0;
  const string& fmt = im->sampleFormat_;
  if (fmt == "UInt8")
    bitpix = 8;
  else if (fmt == "UInt16")
    bitpix = -16;                       // fitsy's private unsigned 16
  else if (fmt == "UInt32") {
    bitpix = 64;                        // exact in int64
    widen = 1;
  }
  else if (fmt == "UInt64")
    bitpix = 64;                        // checked value by value below
  else if (fmt == "Float32")
    bitpix = -32;
  else if (fmt == "Float64")
    bitpix = -64;
  else {
    xisfError_ = what + ": " + fmt + " samples are not supported";
    return 0;
  }

  size_t len = 0;
  char* buf = xisf_->block(im->block_, &len);
  if (!buf) {
    xisfError_ = what + ": " +
      (xisf_->error() ? xisf_->error() : "unable to read the data block");
    return 0;
  }
  // The container checked the declared size against the geometry, and
  // block() returns exactly the declared size. Re-checked here because
  // everything below indexes the buffer by geometry alone.
  unsigned long long want = im->bytes();
  if (!want || len != want) {
    delete [] buf;
    xisfError_ = what + ": data block size does not match the geometry";
    return 0;
  }

  int insz = im->sampleSize_;
  int outsz = widen ? 8 : insz;
  int big = im->block_.big_;
  size_t plane = (size_t)ww*(size_t)hh;
  size_t total = plane*(size_t)dd;     // bounded: bytes() <= 2^62
  char* out = new (std::nothrow) char[total*outsz ? total*outsz : 1];
  if (!out) {
    delete [] buf;
    xisfError_ = what + ": unable to allocate the image";
    return 0;
  }

  // Plane k is a channel of a 2-D image or a slice of a 3-D one. Output
  // row r is input row H-1-r. In planar storage each row is contiguous; in
  // normal storage a pixel's channels are, so a row is gathered sample by
  // sample.
  int planar = im->planar_ || nc == 1;
  for (long long kk=0; kk<dd; kk++) {
    long long zz = im->ndim_ == 3 ? kk : 0;
    long long cc = im->ndim_ == 3 ? 0 : kk;
    for (long long rr=0; rr<hh; rr++) {
      long long src = hh-1-rr;
      char* dst = out + (((size_t)kk*hh + rr)*ww)*outsz;
      if (planar && !widen) {
	const char* from = buf + (((size_t)kk*hh + src)*ww)*insz;
	memcpy(dst, from, (size_t)ww*insz);
	continue;
      }
      for (long long xx=0; xx<ww; xx++) {
	size_t si = planar ?
	  (((size_t)kk*hh + src)*ww + xx) :
	  ((((size_t)zz*hh + src)*ww + xx)*nc + cc);
	const char* from = buf + si*insz;
	if (widen) {
	  // UInt32 -> int64, written little endian whatever it was read as
	  unsigned long long vv =
	    xisfLoadUInt((const unsigned char*)from, 4, big);
	  for (int bb=0; bb<8; bb++)
	    dst[xx*8+bb] = (char)((vv >> (8*bb)) & 0xff);
	}
	else
	  memcpy(dst + xx*insz, from, insz);
      }
    }
  }
  delete [] buf;

  if (widen)
    big = 0;

  // UInt64 is held as int64, which is exact only below 2^63. A larger
  // value is refused rather than wrapped into a negative number.
  if (fmt == "UInt64") {
    for (size_t ii=0; ii<total; ii++)
      if (xisfLoadUInt((const unsigned char*)out + ii*8, 8, big) >
	  (unsigned long long)LLONG_MAX) {
	delete [] out;
	xisfError_ = what + ": UInt64 value above the int64 range";
	return 0;
      }
  }

  pWidth_ = (int)ww;
  pHeight_ = (int)hh;
  pDepth_ = (int)dd;
  pBitpix_ = bitpix;
  pSkip_ = 0;
  pArch_ = big ? BIG : LITTLE;
  pEncoding_ = RAW;

  if (!validParams()) {
    delete [] out;
    xisfError_ = what + ": unsupported shape or sample format";
    return 0;
  }

  head_ = new FitsHead(pWidth_, pHeight_, pDepth_, pBitpix_);
  if (!head_->isValid()) {
    delete [] out;
    delete head_;
    head_ = NULL;
    xisfError_ = "unable to build a header";
    return 0;
  }
  manageHead_ = 1;
  buildHeader(im);

  data_ = out;
  dataSize_ = total*outsz;
  dataSkip_ = 0;

  setByteSwap();

  return 1;
}
