#!/usr/bin/tclsh
#
# Construct the web page for tkhtml
#
# @(#) $Id$
#

set p [open publish.sh w]
puts $p "#!/bin/sh"
puts $p "#"

set SendList {}

set f [open index.html w]
puts $f {
<html>
<head>
<title>An HTML Widget for Tcl/Tk</title>
</head>
<body bgcolor=white>
<h1 align=center>An HTML Widget For Tcl/Tk</h1>
}
puts $f "<p align=center><i>Last update: [clock format [clock seconds]]</i></p>"
puts $f {
<p>"Tkhtml" is a Tcl/Tk widget that displays HTML.  Tkhtml
is implemented in C.  It is a true widget, not a metawidget implemented
using the Text or Canvas widgets of the Tcl/Tk core.  Implementing
Tkhtml in C gives it a number of advantages:</p>

<p>
<ul>
<li> It runs fast and uses little memory.</li>
<li> It supports smooth scrolling.</li>
<li> It supports text wrap-around on images and tables.</li>
<li> It has a full implementation of tables. Complex pages (such as 
     <a href="http://www.scriptics.com/">http://www.scriptics.com/</a>)
     are displayed correctly.</li>
<li> Supports forms. </li>
<li> It supports the &lt;APPLET&gt;, &lt;SCRIPT&gt; and &lt;EMBED&gt;. 
     (Partially.  Full support is pending.) </li>
<li> Support for frames is planned. </li>
</ul>
</p>

<p>Tkhtml can be used with Tcl/Tk8.0 or later.
The shared libraries use the new stubs mechanism, so you
should be able to load Tkhtml with any version of "wish" beginning
with 8.0.6.</p>

<p>At the moment, there is not a lot of software that uses this
widget.  Tkhtml is not an application in and of itself.  It is only
a tool.  But applications are being built around tkhtml.  Check back
later for new developments.</p>

<h2>Mailing List!</h2>

<p><font color=red><b><i>New!</i></b></font>
   A mailing list has been started for users of tkhtml.
   Sign up if you want to recieve notifications of updates or
   ask questions about using tkhtml.</p>

<form method=GET action="http://www.egroups.com/subscribe">
<input type=hidden name="listname" value="tkhtml">
<input type=hidden name="SubmitAction" value="Subscribe">
<p>Enter your e-mail address below and click the button to
   sign up for the tkhtml mailing list:</p>

<p>
<table cellspacing=10>
<tr><td valign=center>
<input type=text name="emailaddr" value="your e-mail" size=21>
</td><td valign=center>
<input type=image border=0 alt="Click here to join tkhtml"
   name="Click here to join tkhtml" SRC="http://www.egroups.com/oems/default/languages/english/images/subscriptionBoxButton.gif">
</td></tr>
</table>
</p>

<p>You can also view the 
  <a href="http://www.egroups.com/group/tkhtml/">archives</a>
  for the mailing list.  To post to this mailing list, send a
  message to <a href="mailto:tkhtml@eGroups.com">tkhtml@eGroups.com</a>.
  The mailing list is hosted by
  <a href="http://www.egroups.com/">eGroups.com</A>
</p>
</form>


<h2>You Can Help!</h2>

<p>If you would like to help, please consider
contributing in the following ways:</p>

<p>
<ul>
<li> Try out tkhtml on your computer and report bugs to
     <a href="mailto:drh@acm.org">drh@acm.org</a>. </li>
<li> Fix bugs and send in patches.  (Write access to the
     CVS repository may be granted to anyone who is serious
     about this.)</li>
<li> Make suggestions for new features.  </li>
<li> Write applications that use tkhtml. </li>
<li> Improve the documentation. </li>
</ul>
</p>

<p>Any help you can provide is appreciated.</p>

<h2>Getting The Widget</h2>

<p>Visit the <a href="download.html">download</a> page for a list of
files available for immediate download.</p>

<p>You can now also obtain the latest tkhtml sources via anonymous CVS.
To access the anonymous CVS server, first install CVS on your system.
(See <a href="http://www.cyclic.com/">http://www.cyclic.com/</a> for 
additional information.)  Then login as follows:</p>

<blockquote><pre>
cvs -d :pserver:cvs@xoli.dyn.dhs.org:/home/cvs/cvsroot login
</pre></blockquote>

<p>You will be prompted for a password.  Use "<tt>cvs</tt>".  After
you get logged in successfully, you can check out the source tree
like this:</p>

<blockquote><pre>
cvs -d :pserver:cvs@xoli.dyn.dhs.org:/home/cvs/cvsroot checkout htmlwidget
</pre></blockquote>

<p>This command creates a directory named "<tt>htmlwidget</tt>" and
fills it with the latest version of the sources.</p>

</body>
</html>
}
close $f
lappend SendList index.html

set f [open download.html w]
puts $f {
<html>
<head>
<title>TkHtml Download Page</title>
</head>
<body bgcolor=white>
<h1 align=center>TkHtml Download Page</h1>
}
puts $f "<p align=center><i>Last update: [clock format [clock seconds]]</i></p>"
puts $f {

<p>The files shown below are available for download.  For the very
latest sources, visit the anonymous CVS server.  Instructions for 
reaching the anonymous CVS server are on the tkhtml 
<a href="index.html">homepage</a>.</p>

<ul>
}
foreach {file desc} {
  tkhtml.tar.gz   {A tarball containing all the latest source code}
  hv.tcl.gz       {The "Html Viewer" example application}
  spec.html       {A raw specification of how the tkhtml widget works}
  tkhtml.so.gz    {Shared library suitable for use on Linux}
  tkhtml.dll.zip  {A DLL suitable for use on Windows95/98/NT/2K}
} {
  if {![file readable $file]} continue
  lappend SendList $file
  puts $f "<li><p><a href=\"$file\">$file</a><br>"
  puts $f "Description: $desc<br>"
  puts $f "Size: [file size $file] bytes<br>"
  puts $f "Last modified: [clock format [file mtime $file]]"
  switch -glob -- $file {
    *.zip -
    *.gz {set access zcat}
    default {set access cat}
  }
  if {![catch {exec $access $file | ident | grep {$Id: }} ident]} {
    puts $f "<br>Version information:"
    puts $f "<pre>\n$ident</pre>"
  }
  puts $f "</p></li>\n"
}
puts $f {
</ul>

<p><a href="index.html">Back</a> to the tkhtml home page</p>

</body>
</html>
}
close $f
lappend SendList download.html

puts $p "scp [lsort $SendList] hwaci@oak.he.net:public_html/sw/tkhtml"
close $p
