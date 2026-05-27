# List of SAOImageDS9 packages

Last updated 2026-05-26

| name       | version    | SAO | dirty | upstream                                                             | latest                          |
| ---------- | ---------- | --- | ----- | -------------------------------------------------------------------- | ------------------------------- |
| ast        | 9.2.14     |     |       | https://github.com/Starlink/ast                                      | 9.2.14                          |
| awthemes   | **10.4.0** |     |       | https://sourceforge.net/projects/tcl-awthemes/                       | 10.4.0                          |
| ds9        | 8.7        | y   |       |                                                                      |                                 |
| fickle     | 2.04       | y   |       | https://github.com/wjoye/fickle                                      | previous upstream abandoned     |
| fitsy      |            | y   |       |                                                                      |                                 |
| funtools   | 1.4.8      | y   | y     | https://github.com/ericmandel/funtools                               | abandoned                       |
| openssl    | **3.2.0**  |     |       | https://github.com/openssl/openssl                                   | 4.0.0                           |
| scidthemes | **1.0**    |     |       | https://sourceforge.net/projects/scid/files/Scid/Additional%20Files/ | 1.0                             |
| taccle     |            | y   |       | https://github.com/wjoye/taccle                                      | previous upstream abandoned     |
| tcl8.6     | 8.6.15     |     |       | https://github.com/tcltk/tcl                                         | 8.6.18/9.0.3                    |
| tclfitsy   |            | y   |       |                                                                      |                                 |
| tcllib     | **1.2**    |     |       | https://github.com/tcltk/tcllib                                      | 2.0                             |
| tclsignal  | **1.4.5**  | y   |       | https://github.com/wjoye/tclsignal                                   | 1.4.5                           |
| tclxml     | 3.2        | y   | y     | https://tclxml.sourceforge.net/tclxml.html                           | forked from 3.2                 |
| tclxmlrpc  | 1.0        | y   |       |                                                                      |                                 |
| tclzipfs   | 1.0.1      | y   |       | https://github.com/wjoye/tclzipfs                                    | ?not sure if incl. in 9?        |
| tk8.6      | 8.6.15     |     |       | https://github.com/tcltk/tk                                          | 8.6.15/9.0.1                    |
| tkagif     | 1.0.5      | y   |       | https://github.com/wjoye/tkagif                                      | 1.0.5                           |
| tkblt      | 3.2.23     | y   |       | https://github.com/wjoye/tkblt                                       | previous upstream abandoned (1) |
| tkcon      | 2.7.11     | y   |       | https://github.com/wjoye/tkcon                                       | previous upstream abandoned     |
| tkhtml1    | 1.0.11     | y   |       | https://github.com/wjoye/tkhtml1                                     | previous upstream abandoned (2) |
| **tkimg**  | 2.0.1      |     |       | https://sourceforge.net/projects/tkimg/                              | 2.1.1 (4)                       |
| tklib      | **0.9**    |     |       | https://github.com/tcltk/tklib                                       | 0.9                             |
| tkmpeg     | 1.0.10     | y   |       | https://github.com/wjoye/tkmpeg                                      | 1.0.10                          |
| tksao      |            | y   |       |                                                                      |                                 |
| **tksvg**  | 0.7.2      |     |       | https://github.com/wjoye/tksvg                                       | 0.7.2 (3)                       |
| tktable    | 2.12       | y   | y     | https://github.com/wjoye/tktable                                     | previous upstream abandoned     |
| tls        | **2.0**    |     | y     | https://core.tcl-lang.org/tcltls/index                               | 2.0 (5)                         |
| ttkthemes  | **3.3.0**  |     |       | https://github.com/TkinterEP/ttkthemes/                              | 3.3.0                           |
| vector     |            | y   |       |                                                                      |                                 |
| xpa        | 2.1.20     | y   |       | https://github.com/ericmandel/xpa                                    | 2.1.20                          |
| ---        |            |     |       |                                                                      |                                 |
| compilers  |            | y   |       |                                                                      |                                 |
| macos      |            | y   |       |                                                                      |                                 |
| tclconfig  | 2016-03-11 | ?   |       | https://core.tcl-lang.org/tclconfig                                  | 2016-03-11                      |
| tkmacosx   |            | y   |       |                                                                      |                                 |
| tkwin      |            | y   |       |                                                                      |                                 |
| unix       |            | y   |       |                                                                      |                                 |
| win        |            | y   |       |                                                                      |                                 |
|            |            |     |       |                                                                      |                                 |

(1) There is a newer fork 'version 4' at https://sourceforge.net/p/blt/src/ci/master/tree/. Should review and decide if adopt or keep separate.

(2) There was a newer tkhtml3, https://wiki.tcl-lang.org/page/tkhtml3, but seems to have disappeared.

(3) There is a newer version https://github.com/tcltk-depot/tksvg , v 0.16 but not sure how this works and plays with tcl/tk9

(4) There are problems trying to use 2.1.1; stick with 2.0.1.

(5) Small tweaks to work with ds9.
