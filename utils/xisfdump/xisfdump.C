// xisfdump - print what fitsy's XISF container reader (fitsy/xisf.{h,C})
// makes of each file, in a line format Tests/xisf/check_container.py
// compares against the fixture manifest and an independent decoder.
//
// Standalone on purpose: it links fitsy/xisf.C alone, so the container
// reader can be tested without the frame, the grammar or a ds9 build.
//
//   make -C utils/xisfdump
//   utils/xisfdump/xisfdump file.xisf ...
//   utils/xisfdump/xisfdump --fits [--image key] file.xisf ...
//
// --fits builds the FitsFile ds9 will load (FitsXisf) and prints it
// instead of the container:
//   file <path>
//   fits error <message>
//   fits <width> <height> <depth> <bitpix>
//   card <card, trailing blanks trimmed>   every header card, in order
//   plane <k> <fnv1a64>                    each plane's samples, little
//                                          endian whatever the arch
//
// Output, per file:
//   file <path>
//   error <message>                         container refused
//   images <n>
//   image <i> <key>=<value> ...             one line per <Image>
//   stored <i> <bytes> <fnv1a64>            its block as stored, if readable
//   block <i> <bytes> <fnv1a64> | block <i> error <message>

#include <stdio.h>
#include <string.h>

#include <string>
#include <vector>

#include "xisf.h"

static unsigned long long fnv1a64(const char* pp, size_t nn)
{
  unsigned long long hh = 0xcbf29ce484222325ULL;
  for (size_t ii=0; ii<nn; ii++) {
    hh ^= (unsigned char)pp[ii];
    hh *= 0x100000001b3ULL;
  }
  return hh;
}

static const char* kindName(FitsXisfBlock::Kind kk)
{
  switch (kk) {
  case FitsXisfBlock::NONE: return "none";
  case FitsXisfBlock::ATTACHMENT: return "attachment";
  case FitsXisfBlock::EMBEDDED: return "embedded";
  case FitsXisfBlock::INLINE: return "inline";
  }
  return "?";
}

static void dump(const char* fn)
{
  printf("file %s\n", fn);
  FitsXisfFile xf(fn);
  if (!xf.isValid()) {
    printf("error %s\n", xf.error() ? xf.error() : "unknown");
    return;
  }
  printf("images %d\n", xf.nimage());
  for (int ii=0; ii<xf.nimage(); ii++) {
    const FitsXisfImage* im = xf.image(ii);
    const FitsXisfBlock& bb = im->block_;
    std::string geom;
    for (int dd=0; dd<im->ndim_; dd++) {
      char buf[32];
      snprintf(buf, sizeof(buf), "%lld:", im->dim_[dd]);
      geom += buf;
    }
    char ch[32];
    snprintf(ch, sizeof(ch), "%lld", im->channels_);
    geom += ch;

    printf("image %d id=%s geometry=%s format=%s color=%s storage=%s "
	   "order=%s location=%s codec=%s%s checksum=%s keywords=%d "
	   "properties=%d bytes=%llu status=%s\n",
	   ii, im->id_.empty() ? "-" : im->id_.c_str(), geom.c_str(),
	   im->sampleFormat_.c_str(), im->colorSpace_.c_str(),
	   im->planar_ ? "planar" : "normal", bb.big_ ? "big" : "little",
	   kindName(bb.kind_), bb.codec_.empty() ? "-" : bb.codec_.c_str(),
	   bb.shuffled_ ? "+sh" : "",
	   bb.checksumAlgo_.empty() ? "-" : bb.checksumAlgo_.c_str(),
	   (int)im->keywords_.size(), (int)im->properties_.size(),
	   im->bytes(),
	   im->unsupported_ ? ("unsupported:" + im->why_).c_str() : "ok");

    if (bb.kind_ != FitsXisfBlock::NONE && !(bb.unsupported_)) {
      size_t nn;
      char* pp = xf.stored(bb, &nn);
      if (pp) {
	printf("stored %d %zu %016llx\n", ii, nn, fnv1a64(pp, nn));
	delete [] pp;
      }
      else
	printf("stored %d error %s\n", ii, xf.error());
    }
    size_t nn;
    char* pp = xf.block(bb, &nn);
    if (pp) {
      printf("block %d %zu %016llx\n", ii, nn, fnv1a64(pp, nn));
      delete [] pp;
    }
    else
      printf("block %d error %s\n", ii, xf.error());
  }
}

// fitsy reports through tksao's internalError, which a standalone build
// does not link; print instead.
void internalError(const char* msg)
{
  printf("internal %s\n", msg);
}

static void dumpFits(const char* fn, const char* key)
{
  printf("file %s\n", fn);
  FitsXisf ff(fn, key);
  if (!ff.isValid()) {
    printf("fits error %s\n",
	   ff.errorMessage() ? ff.errorMessage() : "unknown");
    return;
  }
  FitsHead* hh = ff.head();
  int ww = hh->naxis(0);
  int ht = hh->naxis(1);
  int dd = hh->naxes() > 2 ? hh->naxis(2) : 1;
  int bp = hh->bitpix();
  printf("fits %d %d %d %d\n", ww, ht, dd, bp);

  const char* cards = hh->cards();
  for (int ii=0; ii<hh->ncard(); ii++) {
    std::string cc(cards + ii*80, 80);
    size_t end = cc.find_last_not_of(' ');
    printf("card %s\n", end == std::string::npos ? "" :
	   cc.substr(0, end+1).c_str());
  }

  size_t sz = (size_t)(bp < 0 ? -bp : bp)/8;
  size_t plane = (size_t)ww*ht*sz;
  const char* data = (const char*)ff.data();
  std::vector<char> tmp(plane);
  for (int kk=0; kk<dd; kk++) {
    memcpy(tmp.data(), data + kk*plane, plane);
    if (ff.byteswap())
      for (size_t ii=0; ii<plane; ii+=sz)
	for (size_t jj=0; jj<sz/2; jj++)
	  std::swap(tmp[ii+jj], tmp[ii+sz-1-jj]);
    printf("plane %d %016llx\n", kk, fnv1a64(tmp.data(), plane));
  }
}

int main(int argc, char** argv)
{
  int fits = 0;
  const char* key = NULL;
  int ii = 1;
  for (; ii<argc && !strncmp(argv[ii], "--", 2); ii++) {
    if (!strcmp(argv[ii], "--fits"))
      fits = 1;
    else if (!strcmp(argv[ii], "--image") && ii+1 < argc)
      key = argv[++ii];
    else
      break;
  }
  if (ii >= argc) {
    fprintf(stderr, "usage: %s [--fits [--image key]] file.xisf ...\n",
	    argv[0]);
    return 2;
  }
  for (; ii<argc; ii++) {
    if (fits)
      dumpFits(argv[ii], key);
    else
      dump(argv[ii]);
  }
  return 0;
}
