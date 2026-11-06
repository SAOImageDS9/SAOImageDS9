# Load the tkdnd package
## Make sure that we can find the tkdnd package even if the user has not yet
## installed the package.
if {[catch {package require tkdnd}]} {
  set DIR [file dirname [file dirname [file normalize [info script]]]]
  source $DIR/library/tkdnd.tcl
  foreach dll [glob -type f $DIR/*tkdnd*[info sharedlibextension]] {
    tkdnd::initialise $DIR/library ../[file tail $dll] tkdnd
  }
}

package require tkdnd::utils

##
## This is a demo showing how a text widget can be a drag source/drop target
##

## This requires tklib...
package require widget::scrolledwindow

set sample_text {Lorem ipsum dolor sit amet, consectetur adipiscing elit. Praesent tempus aliquet velit in fringilla. Quisque fermentum lobortis mi, at mattis lorem. Proin vitae tortor ipsum. Suspendisse id enim est. Nullam vitae magna libero. Nunc vestibulum, ante id convallis porttitor, nisi diam tincidunt mi, sed scelerisque felis sapien vel metus. Nunc fermentum rutrum gravida.

Sed in vestibulum justo. Curabitur placerat sed turpis non vehicula. Praesent tempor erat eu leo porttitor, quis pellentesque neque auctor. Nunc ullamcorper, enim vitae sollicitudin sodales, diam sapien cursus leo, in aliquet leo dolor eget nulla. Nulla scelerisque malesuada dui, eu consectetur massa cursus ut. Pellentesque sit amet sem tortor. Aliquam id ante at lacus euismod mattis vel in ipsum. Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos himenaeos. Suspendisse ornare arcu eu neque auctor, nec malesuada justo volutpat. Maecenas lobortis, sem id convallis dictum, nulla sapien feugiat libero, a dapibus mi lacus in odio. Nullam venenatis elit eget tortor dignissim, ut elementum ante tincidunt. Nam cursus volutpat dolor quis ultricies.

Cras dui massa, tristique id risus et, ornare tristique odio. Vestibulum purus lorem, imperdiet vitae dictum eu, luctus nec urna. Vivamus vel rutrum diam. Phasellus placerat et nisl et aliquam. Sed scelerisque interdum nulla, sed lobortis lorem tincidunt a. Sed tristique tortor vitae eros pulvinar fermentum. Nulla facilisi. Sed sollicitudin, justo et varius egestas, massa sem laoreet nisi, eu porta mauris est sed ante. Proin id semper nisl. Nam eget nunc justo. Ut auctor ipsum nec eros condimentum rhoncus. Quisque sit amet nunc posuere, pharetra arcu in, elementum arcu. Aenean et nisi quis dolor iaculis consequat. Nam erat nulla, gravida aliquam luctus eget, commodo id mi. Sed ut tellus malesuada, ornare diam non, laoreet ipsum.

Curabitur eu elit libero. Aenean consectetur purus eget erat tristique malesuada. Phasellus viverra convallis dui, non semper mauris maximus ac. Cras lobortis ultricies augue ultrices volutpat. Quisque nec aliquam nisl. Mauris orci urna, tempor ac lectus ac, vehicula molestie neque. Sed placerat dolor et felis pulvinar, at cursus urna vestibulum.

Quisque lacinia mi vel est facilisis maximus. Maecenas eleifend vehicula justo, nec congue purus sollicitudin sed. Mauris ornare egestas urna vitae hendrerit.  Pellentesque vel tempor risus, eget porttitor orci. Cras auctor tellus id urna varius, et bibendum libero aliquet. Proin fermentum ultricies libero, sit amet varius nibh cursus non. Phasellus porttitor lorem vitae congue aliquet. Orci varius natoque penatibus et magnis dis parturient montes, nascetur ridiculus mus. Aenean at laoreet leo. Phasellus eu urna quis tellus sodales tincidunt.}

set parent(sources) .sources
set parent(sources.sw) $parent(sources).sw
set parent(sources.sw.text) $parent(sources.sw).text
set parent(targets) .targets
set parent(targets.sw) $parent(targets).sw
set parent(targets.sw.text) $parent(targets.sw).text

ttk::labelframe $parent(sources) -text {Drag Sources}
pack [widget::scrolledwindow $parent(sources.sw)] \
   -padx 2 -pady 2 -fill both -expand true
text $parent(sources.sw.text) -width 60 -height 24
$parent(sources.sw) setwidget $parent(sources.sw.text)

ttk::labelframe $parent(targets) -text {Drop targets}
pack [widget::scrolledwindow $parent(targets.sw)] \
   -padx 2 -pady 2 -fill both -expand true
text $parent(targets.sw.text) -width 60 -height 24
$parent(targets.sw) setwidget $parent(targets.sw.text)

grid $parent(sources) $parent(targets) \
  -padx 2 -pady 2 -sticky snew
grid columnconfigure . 0 -weight 1
grid columnconfigure . 1 -weight 1
grid rowconfigure    . 0 -weight 1


$parent(sources.sw.text) insert end $sample_text

$parent(targets.sw.text) insert end [join [lrepeat 30 \
------------------------------------------------------------ ] \n]

tkdnd::text::drag_source register $parent(sources.sw.text) DND_Text
tkdnd::text::drop_target register $parent(sources.sw.text) DND_Text
tkdnd::text::drop_target register $parent(targets.sw.text) DND_Text
catch {console show}
