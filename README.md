### TclXML, TclDOM and TclXSLT

Contents
--------

-   [TclXML](#id18498)
-   [TclDOM](#id18546)
-   [TclXSLT](#id18594)
-   [Installation](#id18619)
    -   [Dependencies](#id18633)
    -   [Pure-Tcl Installation](#id18747)
    -   [Compiled Installation](#id18776)
        -   [Unix/Linux](#id18786)
        -   [Windows (MSYS/MINGW)](#id18948)
        -   [Windows (NMAKE/VC++ 6.0)](#id18987)
        -   [Macintosh OS X](#id19109)
-   [Usage](#id19193)
    -   [Parsing XML, Streaming](#id19216)
    -   [Parsing XML with DOM](#id19244)
    -   [Transforming XML with XSLT](#id19268)
-   [XPath](#id19306)

### TclXML, TclDOM and TclXSLT

This package provides XML parsers, DOM scripting and XSL Transformations
for [Tcl](http://www.tcl.tk). In previous distributions, these features
were supplied as separate packages. Now they have been combined into a
single package to make installation easier.

Contact [Steve Ball](mailto:Steve.Ball@explain.com.au) for information
about this release.

### TclXML

TclXML provides a streaming parser for XML documents. This is the
lowest-level interface for processing XML documents in Tcl. The package
has a generic front-end interface with plugin parser implementations. A
number of parser implementations or wrappers are provided:

-   Gnome libxml2 library. This package is known as TclXML/libxml2.

-   A generic Tcl implementation (which does not require compilation).
    This package is known as TclXML/tcl.

Both of these implementations may be installed at the same time. See
[the manual page](doc/tclxml.html) for more information.

### TclDOM

TclDOM provides a tree view for XML documents. This is usually the best
interface for scripting XML documents using Tcl. The package has two
implementations:

-   Gnome libxml2 library. This package is known as TclDOM/libxml2.

-   A generic Tcl implementation (which does not require compilation).
    This package is known as TclDOM/tcl.

Only one of these will be installed.

See [the manual page](doc/tcldom.html) for more information.

### TclXSLT

TclXSLT provides a method to invoke XSL Transformations upon XML
documents. This package is a wrapper for the libxslt library.

See [the manual page](doc/tclxslt.html) for more information.

### Installation

#### Dependencies

Tcllib

[http://www.tcl.tk/software/tcllib/](http://www.tcl.tk/software/tcllib/)

In order for the Tcl-only parser to resolve external entities, the
tcllib package must be installed.

Be sure to get a version which includes the `uri` package. Version 1.11
or better is recommended.

-   [GZip'd tarball](ftp://prdownloads.sf.net/tcllib/tcllib-1.11.tar.gz)

-   [ZIP file](ftp://prdownloads.sf.net/tcllib/tcllib-1.11.zip)

The latest CVS snapshot may be found at [the SourceForge project
page](http://sourceforge.net/projects/tcllib).

libxml2

libxml2 is required for the compiled version of the TclXML/libxml2
package. libiconv may also be required.

The source code for libxml2 and libiconv is *not* supplied with this
package. Download libxml2 from [xmlsoft.org](http://xmlsoft.org/)
separately. libiconv may also be required; download from a GNU mirror
site.

Version 2.7.2 (or better) is recommended.

#### Pure-Tcl Installation

### no compilation required

Run the configure script and invoke the command:

    make install

If the pure-Tcl parser is good enough for you, then read no further.

#### Compiled Installation

##### Unix/Linux

You must have Tcl/Tk version 8.2 or better installed on your system.
Tcl/Tk 8.3 or better is recommended.

1.  Make sure you have Tcllib 1.11 (or better) installed. Tcllib is
    still required, even for the compiled parser.

2.  If you wish to use TclXML/libxml2, make sure libxml2-2.7.2 (or
    better) is installed.

3.  Unpack the TclXML distribution and **cd** into the `tclxml-3.2`
    directory.

4.  Run the `configure` script, with the --prefix and --enable-threads
    switches (the latter only if Tcl has been built with threads
    enabled). Use the --with-xml2-config switch to specify the location
    of the libxml2 configuration script, `xml2Conf.sh`. Similarly, use
    the --with-xslt-config if necessary.

    TclXML/libxml2 may be configured to statically link the libxml2 and
    libxslt libraries to the libtclxml.so shared library. This is
    advantageous when using TclXML/libxml2 in a StarKit. To statically
    link the libraries use the --with-xml-static switch.

    For example, on my system I have Tcl 8.5 installed in
    `/usr/local/tcl8.5` and libxm2 installed in `/usr/local/gnome`. I
    also need to statically link the libraries. Therefore I would use
    the command:

        ./configure --prefix=/usr/local/tcl8.5 --enable-threads --with-xml2-config=/usr/local/gnome/bin/xml2Conf.sh --with-xml-static=1

5.  make

6.  Don't test the package using make test until all of the packages are
    installed (it is a current deficiency of the build system that the
    package cannot be tested before installation - we hope to fix this
    soon!).
7.  make install

    You may need to do this as root, depending on your installation.

8.  make test

9.  make doc

10. make install-doc

##### Windows (MSYS/MINGW)

[Advice: ActiveTcl includes binaries for TclXML.]

You must have Tcl/Tk version 8.2 or better installed on your system.
Tcl/Tk 8.5.5 or better is recommended.

Before starting, download the binaries for libxml2 (or build them from
source). [xmlsoft](http://xmlsoft.org/) has a link to the MS Windows
binary distribution.

If you have a TEA build environment setup, just use the normal
configure/make/make install pattern.

##### Windows (NMAKE/VC++ 6.0)

TclXML/libxml2 is built with MSYS/MINGW, see above, so this build system
is untested.

Alternatively, the `win` subdirectory contains a `makefile.vc` file for
Visual Studio C++ v6.0. In a Command Prompt window set up your
environment so that `nmake` is on the path (by running `VCVARS32.BAT`),
then type the following:

    nmake -f makefile.vc TCLDIR=C:\Path\To\Tcl INSTALLDIR=C:\Path\To\Tcl LIBZDIR=C:\Path\To\libz LIBICONVDIR=C:\Path\To\libiconv LIBXML2DIR=C:\Path\To\libxml2 LIBXSLTDIR=C:\Path\To\libxslt

As an example, on my system I have Tcl installed in `C:\Tcl` and the
libxml2 and libxslt binaries unpacked in the directory `C:\gnome`.
Accordingly, I would use the following command line:

    nmake -f makefile.vc TCLDIR=C:\Tcl INSTALLDIR=C:\Tcl LIBZDIR=C:\gnome\zlib-1.1.4.win32 LIBICONVDIR=C:\gnome\libiconv-1.9.1.win32 LIBXML2DIR=C:\gnome\libxml2-2.7.2.win32 LIBXSLTDIR=C:\gnome\libxslt-1.1.24.win32

Install the package by appending 'install' to the command line used
above, for example:

    nmake -f makefile.vc TCLDIR=C:\Path\To\Tcl INSTALLDIR=C:\Path\To\Tcl LIBZDIR=C:\Path\To\libz LIBICONVDIR=C:\Path\To\libiconv LIBXML2DIR=C:\Path\To\libxml2 LIBXSLTDIR=C:\Path\To\libxslt install

##### Macintosh OS X

Binary distributions of libxml2, libxslt and TclXML as frameworks are
provided by [Explain](http://www.explain.com.au/oss/).

There are two ways to build TclXML under Mac OS X:

1.  The usual Unix way, see above.

2.  As an embedded Framework using Xcode.

The `macosx` directory contains the Xcode files for building under OS X
(Leopard/Panther). TclXML/libxml2 has been tested on OS X 10.5 (or is
that X.5?).

Start-up the project. Make sure that the references to the libxml2 and
Tcl external frameworks are correct. Select the 'Make' target and build.
This builds everything. The result is two Mac OS X Frameworks; a
"normal" and an "embedded". The embedded framework will be in the
`embedded` subdirectory of the Build Products directory. Copy
`tclxml.framework` to any of the usual places for frameworks
(`~/Library/Frameworks`, `/Library/Frameworks`, etc).

For earlier version of OS X using Project Builder, you will have to
retrieve a previous version of the Project Builder files from the CVS
repository.

### Usage

See [the website](http://tclxml.sourceforge.net/) for links to tutorials
and the reference manual.

In the meantime, here's a quick tutorial:

#### Parsing XML, Streaming

This is the lowest-level access to an XML document; use SAX-like events
to stream through the document. The simple program below counts the
number of characters in the content of an XML document.

    package require xml 3.2

    set parser [xml::parser]
    $parser configure -elementstartcommand EStart \
        -characterdatacommand PCData

    proc EStart {tag attlist args} {
        array set attr $attlist
        puts "Element \"$tag\" started with [array size attr] attributes"
    }

    proc PCData text {
        incr ::count [string length $text]
    }

    set count 0
    $parser parse [read stdin]

    puts "The document contains $count characters"
    exit 0

#### Parsing XML with DOM

This is the next level up in accessing an XML document; use the Document
Object Model (DOM) to view the XML document as a tree. The simple
program below counts the number of characters in the content of an XML
document.

    package require xml 3.2

    set doc [dom::parse [read stdin]]
    set count 0
    foreach textNode [dom::selectNode $doc //text()] {
        incr count [string length [$textNode cget -nodeValue]]
    }

    puts "The document contains $count characters"
          

#### Transforming XML with XSLT

This is the highest level in processing an XML document; use a XSL
stylesheet to transform a XML document. The simple program below reads
two XML documents, compiles one into a XSL stylesheet and performs the
transformation.

    package require xml 3.2

    set chan [open "count.xsl"]
    set styleDoc [dom::parse [read $chan]]
    close $chan
    set sourceDoc [dom::parse [read stdin]]

    set style [xslt::compile $styleDoc]
    set resultDoc [$style transform $sourceDoc]

    puts [dom::serialize $resultDoc]
          

The XSL stylesheet `count.xsl`, which counts the number of characters in
the source document, looks like this:

    <xsl:stylesheet version='1.0'
      xmlns:xsl='http://www.w3.org/1999/XSL/Transform'>

      <xsl:template match='/'>
        <xsl:text>The document contains </xsl:text>
        <xsl:call-template name='add'>
          <xsl:with-param name='nodes' select='//text()'/>
        </xsl:call-template>
        <xsl:text> characters.
    </xsl:text>
      </xsl:template>

      <xsl:template name='add'>
        <xsl:param name='sum' select='0'/>
        <xsl:param name='nodes' select='/..'/>

        <xsl:choose>
          <xsl:when test='not($nodes)'>
            <xsl:value-of select='$sum'/>
          </xsl:when>
          <xsl:otherwise>
            <xsl:call-template name='add'>
              <xsl:with-param name='sum'
                select='$sum + string-length($nodes[1])'/>
              <xsl:with-param name='nodes'
                select='$nodes[position() != 1]'/>
            </xsl:call-template>
          </xsl:otherwise>
        </xsl:choose>
      </xsl:template>
    </xsl:stylesheet>

### XPath

In addition to XML parsing packages, TclXML also provides a package for
parsing XPath location paths. The XPath package only parsing the path's
syntax, it does interpret the path. See
[TclDOM](http://tclxml.sourceforge.net/tcldom.html) for a package that
will interpret XPath location paths.

This package is in its infancy, and does not support the full range of
XPath features. Only a very limited subset of location paths are
supported, of the form "/simple/example[2]". Paths within predicates
will definitely fail.

To use the XPath package:

    package require xpath

To parse a location path:

    xpath::split {/simple/example}

This returns a Tcl list, each element of which is a three element
sublist: {axis node-test {?predicate ...?}}.
