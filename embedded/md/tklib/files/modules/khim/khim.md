
[//000000001]: # (khim \- Kevin's Hacky Input Method)
[//000000002]: # (Generated from file 'khim\.man' by tcllib/doctools with format 'markdown')
[//000000003]: # (khim\(n\) 1\.0\.3 tklib "Kevin's Hacky Input Method")

<hr> [ <a href="../../../../toc.md">Main Table Of Contents</a> &#124; <a
href="../../../toc.md">Table Of Contents</a> &#124; <a
href="../../../../index.md">Keyword Index</a> &#124; <a
href="../../../../toc0.md">Categories</a> &#124; <a
href="../../../../toc1.md">Modules</a> &#124; <a
href="../../../../toc2.md">Applications</a> ] <hr>

# NAME

khim \- Provides key bindings for entering international characters on a keyboard
that does not support them

# <a name='toc'></a>Table Of Contents

  - [Table Of Contents](#toc)

  - [Synopsis](#synopsis)

  - [Description](#section1)

  - [PROCEDURES](#section2)

  - [LOCALISATION](#section3)

  - [ACKNOWLEDGMENTS](#section4)

  - [Bugs, Ideas, Feedback](#section5)

  - [Keywords](#keywords)

# <a name='synopsis'></a>SYNOPSIS

package require Tcl  
package require khim ?1\.0\.3?  

[__::khim::getOptions__ *path*](#1)  
[__::khim::getConfig__](#2)  
[__::khim::setConfig__ *version* *enabled* *compose* *map*](#3)  
[__::khim::showHelp__ *path*](#4)  

# <a name='description'></a>DESCRIPTION

This package provides a set of key bindings to allow a user to enter arbitrary
characters on a keyboard that does not support them\. It works by designating
some seldom\-used key of the keyboard as a "Compose" key \(this key is distinct
from any key so labeled, and is often "Pause," "F12" or "L2"\), and having the
"Compose" key, followed by a two\-key sequence, have the effect of inserting some
character in a widget\. In addition, the "Compose" key, when struck twice in
succession, brings up a dialog containing a Unicode character map, allowing
arbitrary characters to be inserted\.

The vast bulk of the package's functionality is implemented in a single bindtag,
__KHIM__\. An application can request that any text or entry widget use the
package to allow for entry of arbitrary characters by placing this binding tag
ahead of the __Text__ or __Entry__ binding tag for the widget:

    text .t -width 80 -height 24
    bindtags .t {.t KHIM Text . all}

Note that the __KHIM__ tag must precede the __Text__ or __Entry__
class binding, or the package will not function correctly\.

# <a name='section2'></a>PROCEDURES

In addition to commands supporting the KHIM binding tag, the following commands
are exported from the package:

  - <a name='1'></a>__::khim::getOptions__ *path*

    Posts a top\-level modal dialog with the path name *path* that prompts the
    user for KHIM options\. The user is allowed to reconfigure the key sequences
    for the "Compose" key, change the choice of key to use for the "Compose"
    function, and enable/disable the KHIM key bindings entirely\.

  - <a name='2'></a>__::khim::getConfig__

    Returns a Tcl script that restores the current configuration of KHIM: the
    enabled/disabled state, the choice of "Compose" key, and the key sequences
    that may be composed\. This script is designed to be saved to a configuration
    file for use in a subsequent invocation of the same application:

    # Save KHIM configuration
    set f [open ~/.khimrc w]
    puts $f [::khim::getConfig]
    close $f

    # Restore KHIM configuration
    source ~/.khimrc

  - <a name='3'></a>__::khim::setConfig__ *version* *enabled* *compose* *map*

    Restores an earlier saved configuration\. Few, if any, applications will call
    this command in any other way than to evaluate it as returned from
    __::khim::getConfig__\.

  - <a name='4'></a>__::khim::showHelp__ *path*

    Displays a top\-level dialog giving user\-level help for KHIM; the dialog will
    have the path name *path*\.

# <a name='section3'></a>LOCALISATION

Programmers who wish to make KHIM available in a non\-English\-speaking locale may
do so by providing a __\.msg__ file with the appropriate localised text\. The
catalog requires the following messages:

  - __Apply__

    Text that will appear on the "Apply" button in the dialog that sets KHIM
    options\.

  - __Cancel__

    Text that will appear on the "Cancel" button in several dialogs\.

  - __Change__

    Text that will appear on the "Change" button, which alters the binding of a
    pair of composed characters \(creating or replacing as appropriate\)\.

  - __Character__

    Text that will appear on the label of the entry widget that accepts a
    character resulting from a composed sequence\.

  - __\{Compose Key\}__

    Window title for a dialog that prompts the user to strike the key that will
    be used for the "Compose" key\.

  - __\{Compose key:\}__

    Label that identifies a component showing the "Compose" key choice in the
    KHIM options dialog\.

  - __\{Composed sequence must be two characters long\}__

    Error message that is displayed if the user attempts to define a "Compose"
    sequence that is shorter or longer than two characters\.

  - __Delete__

    Text for a button that deletes a "Compose" sequence\.

  - __Help\.\.\.__

    Text for a button that displays the KHIM user help dialog\.

  - __HELPTEXT__

    Complete text for the user\-level help for KHIM\. Refer to "en\.msg" for the
    English\-language version of the help\.

  - __\{Input key sequence\}__

    Text for a label of the entry widget that prompts the user for a
    two\-character sequence to use with the "Compose" key\.

  - __\{Insert Character\}__

    Window title of the dialog box that displays a Unicode character map and
    prompts the user to select a character to insert\.

  - __\{Key sequences\}__

    Text for a label at the head of a listbox showing the composed sequences
    that are currently bound\.

  - __\{KHIM Controls\}__

    Window title for the dialog box that prompts for KHIM settings\.

  - __\{KHIM Help\}__

    Window title for the window that display help text for KHIM\.

  - __OK__

    Label for the OK button on several dialogs\.

  - __Select code page:__

    Label for a spinbox that prompts the user for a Unicode code page number\.

  - __SELECT COMPOSE KEY__

    A message, which should be composed in short lines, prompting the user to
    press the key that will become the "Compose" key in KHIM\.

  - __Unicode\.\.\.__

    Text for a button that brings up the character map to select the character
    to which a composed sequence binds\.

  - __\{Use KHIM\}__

    Text for a checkbutton that asks whether the user wishes to use KHIM to
    manage composed key sequences\.

# <a name='section4'></a>ACKNOWLEDGMENTS

KHIM was originally inspired by the key bindings that Brent Welch developed for
the 'sedit' editor used in the 'exmh' mail user agent\. The code for KHIM is
entirely separate from that for 'sedit'\.

# <a name='section5'></a>Bugs, Ideas, Feedback

This document, and the package it describes, will undoubtedly contain bugs and
other problems\. Please report such in the category *khim* of the [Tklib
Trackers](http://core\.tcl\.tk/tklib/reportlist)\. Please also report any ideas
for enhancements you may have for either package and/or documentation\.

# <a name='keywords'></a>KEYWORDS

[character](\.\./\.\./\.\./\.\./index\.md\#character),
[i18n](\.\./\.\./\.\./\.\./index\.md\#i18n), [input](\.\./\.\./\.\./\.\./index\.md\#input),
[international](\.\./\.\./\.\./\.\./index\.md\#international),
[method](\.\./\.\./\.\./\.\./index\.md\#method)
