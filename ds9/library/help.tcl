#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc HelpDef {} {
    global help
    global ds9

    set help(refman) "$ds9(root)/doc/ref/index.html"
    set help(command) "$ds9(root)/doc/ref/command.html"
    set help(userman) "$ds9(root)/doc/user/index.html"
    set help(faq) "$ds9(root)/doc/faq.html"
    set help(release) "$ds9(root)/doc/release/r7.6.html"
    set help(helpdesk) "$ds9(root)/doc/helpdesk.html"
    set help(story) "$ds9(root)/doc/story.html"
    set help(ack) "$ds9(root)/doc/acknowledgment.html"
    set help(vo) "$ds9(root)/doc/ref/vo.html"

    set help(authors) "William Joye (Smithsonian Astrophysical Observatory)\nEric Mandel (Smithsonian Astrophysical Observatory)\nSteve Murray (Smithsonian Astrophysical Observatory)\n"
    set help(about) "SAOImageDS9\nVersion $ds9(version)\n\nAuthors\n$help(authors)\nSAOImage DS9 development has been made possible by funding from NASA's Applied Information Systems Research Program, Chandra X-ray Science Center (CXC), and the High Energy Astrophysics Science Archive Center (HEASARC). Additional funding was provided by the JWST Mission office at Space Telescope Science Institute to improve capabilities for 3D data visualization.\n\nColormaps\nh5utils: Steven Johnson (MIT)\nViridis: Eric Firing (UW)\nCubehelix: Dave Green (Cavendish)\nGist: David Munro (LLNL)\nTopographic: Tom Patterson (US National Park Service) "
}

proc HelpRef {} {
    global help
    HV hlpref [msgcat::mc {Reference Manual}] $help(refman)
}

proc HelpCommand {} {
    global help
    HV hlpcmd [msgcat::mc {Command}] $help(command)
}

proc HelpUser {} {
    global help
    HV hlpuser [msgcat::mc {User Manual}] $help(userman)
}

proc HelpFAQ {} {
    global help
    HV hlpfaq [msgcat::mc {FAQ}] $help(faq)
}

proc HelpRelease {} {
    global help
    HV hlprelease [msgcat::mc {Release Notes}] $help(release)
}

proc HelpDesk {} {
    global help
    HV hlpdsk [msgcat::mc {Help Desk}] $help(helpdesk)
}

proc HelpStory {} {
    global help
    HV hlpstory [msgcat::mc {Story of SAOImageDS9}] $help(story)
}

proc HelpAck {} {
    global help
    HV hlpack [msgcat::mc {Acknowledgment}] $help(ack)
}

proc HelpVO {} {
    global help
    HV hlvo [msgcat::mc {Virtual Observatory}] $help(vo)
}

proc ProcessSendAboutCmd {proc id param sock fn} {
    global help 
    ProcessSend $proc $id $sock $fn {.txt} "$help(about)\n"
}
