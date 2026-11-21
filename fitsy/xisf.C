// Copyright (C) 1999-2021
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

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
      setError("unable to allocate %zu bytes", dec.size());
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
    setError("unable to allocate %zu bytes", usize);
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
      setError("unable to allocate %zu bytes", usize);
      return NULL;
    }
    xisfUnshuffle(out, tmp, usize, (size_t)bb.itemSize_);
    delete [] out;
    out = tmp;
  }

  *size = usize;
  return out;
}
