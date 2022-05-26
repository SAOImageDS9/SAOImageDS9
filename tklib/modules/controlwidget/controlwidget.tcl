# controlwidget.tcl --
#     Set up the requirements for the controlwidget module/package
#     and source the individual files
#

package require Tk 8.5
package require snit

package require bindDown
package require meter
package require led
package require rdial
package require tachometer
package require voltmeter
package require radioMatrix

package provide controlwidget 0.1
