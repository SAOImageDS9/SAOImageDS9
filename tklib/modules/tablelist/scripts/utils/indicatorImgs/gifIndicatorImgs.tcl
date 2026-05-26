#==============================================================================
# Contains procedures that create the GIF images used by the style elements
# Checkbutton.image_ind and Radiobutton.image_ind of the alt, clam, and default
# themes.
#
# Copyright (c) 2022-2024  Csaba Nemethi (E-mail: csaba.nemethi@t-online.de)
#==============================================================================

#------------------------------------------------------------------------------
# themepatch::alt::createCheckbtnIndImgs_gif
#
# Creates the GIF images used by the style element Checkbutton.image_ind of the
# alt theme.
#------------------------------------------------------------------------------
proc themepatch::alt::createCheckbtnIndImgs_gif pct {
    variable ckIndArr
    switch $pct {
	100 {
	    set ckIndArr(default) [image create photo -format gif -data {
R0lGODlhEAAQAMIEAIiIiImJiePj4+Tk5P///////////////yH5BAEKAAcALAAAAAAQABAAAAMn
eLDcrYPISaUIoOq59u5eBYZcRpYnmhLj2ZJvGHvzBwjppTg8EBwJADs=}]
	    set ckIndArr(disabled) [image create photo -format gif -data {
R0lGODlhEAAQAMIFAIiIiImJicbGxsfHx9nZ2f///////////yH5BAEKAAcALAAAAAAQABAAAAMn
eLDcrYPISaUIoOq59u5eBYZcRpYnmhLj2ZJvGHvzBwjppTg8EBwJADs=}]
	    set ckIndArr(pressed) [image create photo -format gif -data {
R0lGODlhEAAQAMIFAIiIiImJibW1tba2tsPDw////////////yH5BAEKAAcALAAAAAAQABAAAAMn
eLDcrYPISaUIoOq59u5eBYZcRpYnmhLj2ZJvGHvzBwjppTg8EBwJADs=}]
	    set ckIndArr(alternate) [image create photo -format gif -data {
R0lGODlhEAAQAMIFAAAAAIiIiImJiePj4+Tk5P///////////yH5BAEKAAcALAAAAAAQABAAAAMt
eLHcraTISeUQoeq59u5eBYZcRpYToK4qKrGsexbjWZN3mHvLMF8KhzAgOCQAADs=}]
	    set ckIndArr(alt_disabled) [image create photo -format gif -data {
R0lGODlhEAAQAMIGAIiIiImJiaOjo8bGxsfHx9nZ2f///////yH5BAEKAAcALAAAAAAQABAAAAMt
eLDcraTISeUIoOq59u5eBYZcRpaToK4qKrGsexbjWZN3mHvLMF8KhxAQOCQAADs=}]
	    set ckIndArr(alt_pressed) [image create photo -format gif -data {
R0lGODlhEAAQAMIGAAAAAIiIiImJibW1tba2tsPDw////////yH5BAEKAAcALAAAAAAQABAAAAMt
eLHcraTISeUQoeq59u5eBYZcRpYToK4qKrGsexbjWZN3mHvLMF8KhzAgOCQAADs=}]
	    set ckIndArr(selected) [image create photo -format gif -data {
R0lGODlhEAAQAIQTAAAAAAEBAQ0NDRERESYmJkxMTFBQUIiIiImJiZWVlZaWlqGhoampqa2trbOz
s7W1tePj4+Tk5OXl5f///////////////////////////////////////////////////yH5BAEK
AB8ALAAAAAAQABAAAAVQ4HeMZFmK0aSurAohRyuv4zzXNiM8Ki5LA0CjF5sZAAVa8SFQqBaAgUSp
cgQCCSBgwfIlrgRkyzf5Rqfd4kohYMjINmJ8fIDMXQiRaX/IhwAAOw==}]
	    set ckIndArr(sel_disabled) [image create photo -format gif -data {
R0lGODlhEAAQAOMOAIiIiImJiaOjo6ampqurq7Ozs7S0tMPDw8XFxcbGxsfHx8nJydTU1NnZ2f//
/////yH5BAEKAA8ALAAAAAAQABAAAARM8IFJa5Wq6c11CkAnbtM4lqYyLBoqMoOQNW5nCAUZNstw
aAjBgKHTLASCA0yA4LgOSAKuU4MKic7d5jCYZU2iGpgGSIw9AYllDUhHAAA7}]
	    set ckIndArr(sel_pressed) [image create photo -format gif -data {
R0lGODlhEAAQAIQTAAAAAAEBAQoKCg0NDR0dHTo6Oj09PXJycnNzc3t7e4GBgYSEhIiIiImJiYqK
iq+vr7W1tba2tsPDw////////////////////////////////////////////////////yH5BAEK
AB8ALAAAAAAQABAAAAVQ4MeMZFmKkaSurAo1TCuv4zzXtiI4Ki4/A8CiF5sZAAVa0SFAqBKAwUOp
agQCByAgwfIdrgRkyyf5Rqfd4gohUMjINmJ8zIDMXQ2Rac/IhwAAOw==}]
	}

	125 {
	    set ckIndArr(default) [image create photo -format gif -data {
R0lGODlhFAAUAOMHAIiIiKWlpaampt3d3d7e3t/f3+Hh4f//////////////////////////////
/////yH5BAEKAAgALAAAAAAUABQAAAREEIFJq6VSjMK790MwEUdpnuhBTEbqmgb7vjHQzml946fO
o74fTCYsBYtHYfK35DVxz1mUNiqWVoDA5sPlhACSi7iCiAAAOw==}]
	    set ckIndArr(disabled) [image create photo -format gif -data {
R0lGODlhFAAUAMIGAIiIiJycnMLCwsPDw8XFxdnZ2f///////yH5BAEKAAcALAAAAAAUABQAAANA
eLDcziqIQau1IixRuv9gISxEaHoEeZ4pUK5h+8KfTIP2jap6l/c/XfA2pBVhx1WStel1RgDJZVrJ
ABSPbOOQAAA7}]
	    set ckIndArr(pressed) [image create photo -format gif -data {
R0lGODlhFAAUAMIHAIiIiJaWlpeXl7KysrOzs7S0tMPDw////yH5BAEKAAcALAAAAAAUABQAAANB
eLDczkoMQqu1I6xhuv+gMSxFaHoFeZ4pUK5h+8KfTIP2jap6l/c/XfA2pBVhx1WStel1RoDA5EKl
ZACKh7ZxSAAAOw==}]
	    set ckIndArr(alternate) [image create photo -format gif -data {
R0lGODlhFAAUAOMJAAAAAIiIiKWlpaampr+/v93d3d7e3t/f3+Hh4f//////////////////////
/////yH5BAEKAA8ALAAAAAAUABQAAARS8IVJq6VylMO794UwGUlpnmhiTEjqmgj7vnHQzml946fO
o74SYUgswmQlgHLJPNpMzCjAuStaCdRfD6lNBLtfbfhXI3VVE8Hmw+aEApKLvPKIAAA7}]
	    set ckIndArr(alt_disabled) [image create photo -format gif -data {
R0lGODlhFAAUAOMIAIiIiJycnKOjo8LCwsPDw8XFxczMzNnZ2f//////////////////////////
/////yH5BAEKAAgALAAAAAAUABQAAARREIFJq6UyDMK790MwDUdpnugxTEXqmgX7vjHQzml946fO
o76SYUgswmQlgXLJPNpMzKjAuStaDdRfD6k9BLtfbfhXI3VVE81n3QkBJJd4BREBADs=}]
	    set ckIndArr(alt_pressed) [image create photo -format gif -data {
R0lGODlhFAAUAOMJAAAAAIiIiJKSkpaWlpeXl7KysrOzs7S0tMPDw///////////////////////
/////yH5BAEKAA8ALAAAAAAUABQAAARS8IVJq6WSFMO798UwFUhpnihSTEfqmgf7vnHQzml946fO
o76SYEgswmQlgHLJPNpMzCjAuStaBdRfD6lFBLtfbfhXI3VVk8Hmw+aEApKLvPKIAAA7}]
	    set ckIndArr(selected) [image create photo -format gif -data {
R0lGODlhFAAUAKUlAAAAAA4ODg8PDxAQEBoaGhwcHC8vLzAwMEpKSlVVVV5eXl9fX2dnZ3JycnNz
c4iIiIqKiouLi5+fn6Wlpaampqurq7CwsLS0tM7Ozt3d3d7e3t/f3+Hh4eLi4uTk5Ozs7O7u7vDw
8Pb29v39/f7+/v//////////////////////////////////////////////////////////////
/////////////////////////////////////////////yH5BAEKAD8ALAAAAAAUABQAAAaJwN9j
SCwaiUJKZsNsOp2ZyVBTqlqv2JJmyMl6rRzu9xt+dMelRsBSLZ+/FwDA0RZ/QwWAoFM3V0kYIlcL
chJgdhEABx9VcQAIV25VEHIGHyAEAAMekXYjCpUJhViSVZ9ycpCkdqagmpyrflcjDAEVXqVonbK6
hw9UvVZbDxNLT8dMUQ9CR81FP0EAOw==}]
	    set ckIndArr(sel_disabled) [image create photo -format gif -data {
R0lGODlhFAAUAIQbAIiIiJycnKOjo6ampqenp6ioqKmpqa2trbOzs7W1tbe3t7m5ubu7u8DAwMLC
wsPDw8TExMXFxcjIyMnJyc7OztPT09XV1dbW1tfX19jY2NnZ2f///////////////////yH5BAEK
AB8ALAAAAAAUABQAAAV84AeMZGmSYuA8bOu6TjA6Wm3fuOaMUe7bEd7vFwT0hhrGQFIrHn8TgYDR
FP4uBsGgUjXaKJibQgoBWhuCg6UWFSBuzho6bbkUBASu2avJjNMJZDhxNX5SUm+DVoV/eTmENhkL
Sz6QSHtPl100mjY7ACovoi0xACInqCUfIQA7}]
	    set ckIndArr(sel_pressed) [image create photo -format gif -data {
R0lGODlhFAAUAKUiAAAAAAsLCwwMDBQUFBUVFSQkJCUlJTk5OUFBQUhISElJSU9PT1dXV1hYWGpq
anp6eoODg4eHh4iIiIqKipaWlpeXl56enq2tra6urrKysrOzs7S0tLa2tri4uLy8vMHBwcLCwsPD
w///////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////yH5BAEKAD8ALAAAAAAUABQAAAaJwJ9k
SCwaicJKRsNsOp0ZyjATqlqv2FBmuMl6rRvu9xuWdMchRiBSLZ+/EwCg0RZ/OwRA4FI3V0EWHlcK
cg9gdg4ABmdxAAdXblWJAAUbHAMAAhiQdh8JcgUIhViRVZ5yco+kdqafmZurflcfCwEQXqVonLK6
hxJUvVZbEhRLT8dMURJCR81FP0EAOw==}]
	}

	150 {
	    set ckIndArr(default) [image create photo -format gif -data {
R0lGODlhGAAYAOMHAIiIiImJibKysrOzs8DAwMTExMfHx///////////////////////////////
/////yH5BAEKAAgALAAAAAAYABgAAARTEIFJq70BhTCI/2D4DUAADEeqriwrTEUrywU832oNxPit
8z2aLSjcEYvAY26oXBqbzmTzB41WU9RrtrqFdqdMbxh8uh5eJoFhzW672S+A5kKnZyIAOw==}]
	    set ckIndArr(disabled) [image create photo -format gif -data {
R0lGODlhGAAYAOMIAIiIiImJiaSkpKWlpa6urrGxsbOzs9nZ2f//////////////////////////
/////yH5BAEKAAgALAAAAAAYABgAAARTEIFJq70BhTCI/2D4DUAADEeqriwrTEUrywU832oNxPit
8z2aLSjcEYvAY26oXBqbzmTzB41WU9RrtrqFdqdMbxh8uh5eJoFhzW672SSA5kKnZyIAOw==}]
	    set ckIndArr(pressed) [image create photo -format gif -data {
R0lGODlhGAAYAMIHAIiIiImJiZ2dnaSkpKampqenp8PDw////yH5BAEKAAcALAAAAAAYABgAAANQ
eLDc/uGEIIa9OF8BAhBGKI4kyQFEqarEkq5w2KJxPL816+brzeu0H8knHBGLsh0yGVwekc9iVDj9
VXnXXLY2Ay0NHI+gQC6bz+WT5MFmRxIAOw==}]
	    set ckIndArr(alternate) [image create photo -format gif -data {
R0lGODlhGAAYAOMJAAAAAH9/f4iIiImJibKysrOzs8DAwMTExMfHx///////////////////////
/////yH5BAEKAA8ALAAAAAAYABgAAARn8IlJq73jjVGM/2D4FcIgFEmqrixLTEcrywc832otxPit
8z2aLSjcEYvAY26YCjifUOfqtwJYr1jrlJnIegFboypKDoSTygQ1vRSz1dz0+j1n1+UT1DvxMhEQ
gIGCg4EvAhoXiYkZEQA7}]
	    set ckIndArr(alt_disabled) [image create photo -format gif -data {
R0lGODlhGAAYAOMKAIiIiImJiaOjo6SkpKWlpa6urrGxsbOzs76+vtnZ2f//////////////////
/////yH5BAEKAA8ALAAAAAAYABgAAARn8IFJq73hhUCK/2D4EUAAEEmqriw7TEYrywY832oNxPit
8z2aLSjcEYvAY26YQjifUOfqtxJYr1jrlJnIegVboypKRoSTygQ1vRSz1dz0+j1n1+UT1DvxMg0O
gIGCg4EkABoXiYkZEQA7}]
	    set ckIndArr(alt_pressed) [image create photo -format gif -data {
R0lGODlhGAAYAOMJAAAAAGFhYYiIiImJiZ2dnaSkpKampqenp8PDw///////////////////////
/////yH5BAEKAA8ALAAAAAAYABgAAARl8IlJq73jjUGK/2D4EcIgEEiqrixLCkYry8YUz3haw3m+
3z2aLTj7EYW8I8uoCjifUOeKmQJYr1jrdKjKegHbZCpKDoSBSh03rRazqe913J2G1ycodopkIhz+
gIGCgC8aF4eHGREAOw==}]
	    set ckIndArr(selected) [image create photo -format gif -data {
R0lGODlhGAAYAKUhAAAAAAICAg4ODg8PDyYmJjIyMkJCQkNDQ0REREhISEtLS2JiYnJycoiIiImJ
iZGRkZycnJ2dnaCgoKurq6+vr7KysrOzs7+/v8DAwMTExMfHx+Li4u3t7fLy8vX19fb29v7+/v//
////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////yH5BAEKAD8ALAAAAAAYABgAAAakwF9j
SCwaj46fw2HBOJ/Q6NPScDQsoax2y+VWhpmuWJwBj8/aciOMPqvZ7c9BQEmb2yEGAKCwr/EZAXsS
fnBjHgR7CCCFWh0PF1x6AAMbW29aCwABEWmCABBcmFmam50fiQAJjJd3IRwFe5yTlV2jWbCyn6G2
rrixe6qsor6/e7VkxbgGAhNuynhZt9Gtf9TEV9deVQ0VGt/g4eLgXw1KR+joSUEAOw==}]
	    set ckIndArr(sel_disabled) [image create photo -format gif -data {
R0lGODlhGAAYAIQXAIiIiImJiaOjo6SkpKWlpaampqurq66urrGxsbKysrOzs7e3t7u7u8HBwcTE
xMXFxcjIyMzMzM3NzdPT09bW1tfX19nZ2f///////////////////////////////////yH5BAEK
AB8ALAAAAAAYABgAAAWY4AeMZGmewRcExOG+cPwSQAAQVq7vPD+MiJ5QiAAOj7oiIIg8KpnNCqIA
SRqbFoZAoLAusZLB9uGFDimGbWL31FEaEZ5WUJiwr5aFYEDOhbcOPG05entkFWkCa4J4FAdbfHN1
PYM5jpBiAoGUeJaPW4pDlW6fk0SdblNVoqhYZa6nX7CMN7M+NQADCru8vb68NAAqJ8TEKSEAOw==}]
	    set ckIndArr(sel_pressed) [image create photo -format gif -data {
R0lGODlhGAAYAKUhAAAAAAICAgsLCx0dHSYmJjIyMjMzMzQ0NDc3Nzk5OUtLS1dXV29vb3d3d3h4
eHp6eoODg4aGhoiIiImJiZKSkpaWlp2dnaSkpKampqenp62trbW1tbm5ubu7u7y8vMLCwsPDw///
////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////yH5BAEKAD8ALAAAAAAYABgAAAalwJ9k
SCwaj5PfZGK5OJ/Q6NMimUgsoKx2y+VSJZiuWIwZhsfobBmcTq/PbY9BENG+29kFAJCwm/EVAXsP
fmxpHQN7Bx+FcBwMFFx6AAIaW3dZCgABDlqBew1cmCCam50eiQAIjJd/WRsEe5yTlV2jILCyggCh
tq5auXuqrKK/wLGUlmTGwAUCEGi3eK2G08XV1oVY2VtUVhYZ4eLj5OJfSkfp6UlBADs=}]
	}

	175 {
	    set ckIndArr(default) [image create photo -format gif -data {
R0lGODlhHAAcAOMIAIiIiIyMjKOjo6SkpKampqioqOrq6uvr6///////////////////////////
/////yH5BAEKAA8ALAAAAAAcABwAAARk8D1Aq724yhlG+WAoikMAcAeirmzrIoYJCG9tCxRh7y2R
80CED6AL7oZFYw2ptDGbrye095tSidZrMiuscrvYL3iblXLNZe9ZnQ5/0Vb4dEgT4wABwzd2wntG
gCMlJxIZhocSEQA7}]
	    set ckIndArr(disabled) [image create photo -format gif -data {
R0lGODlhHAAcAOMIAIiIiIuLi5qampubm5ycnJ6ensvLy9nZ2f//////////////////////////
/////yH5BAEKAAgALAAAAAAcABwAAARkECFAq724yhlG+WAoikMAcMahrmzrHoYJCG9tDxRh7y2R
88CDD6AL7oZFYw2ptDGbrye095tSidZrMiuscrvYL3iblXLNZe9ZnQ5/0Vb4dEgT4wCBFDd2wntG
gCMlJxIZhocSEQA7}]
	    set ckIndArr(pressed) [image create photo -format gif -data {
R0lGODlhHAAcAOMJAIiIiIqKipWVlZaWlpeXl5iYmLi4uLm5ucPDw///////////////////////
/////yH5BAEKAA8ALAAAAAAcABwAAARk8D1Aq724yhlG+WAoikMAcAeirmzrIoYJCG9tDxRh7y2R
80CED6AL7oZFYw2ptDGbrye095tSidZrMiuscrvYL3iblXLNZe9ZnQ5/0Vb4dEgT4wABw/dg4nhG
gCMlJxIZhocSEQA7}]
	    set ckIndArr(alternate) [image create photo -format gif -data {
R0lGODlhHAAcAOMKAAAAAD8/P4iIiIyMjKOjo6SkpKampqioqOrq6uvr6///////////////////
/////yH5BAEKAA8ALAAAAAAcABwAAAR18D1Bq724yjnK+WAoisUgcImirmzrKogpEG9tE5Rh762R
80CFT6AL7oZFYw2ptDGbrye095tSia2AdsvlXpMqgHhMJn9b5fT4zOq6t2zrSioXVut2LD4PltP9
d3V/VkM0ezgCAwh4MSeJHiORIyUnEhmXmBIRADs=}]
	    set ckIndArr(alt_disabled) [image create photo -format gif -data {
R0lGODlhHAAcAOMKAIiIiIuLi5qampubm5ycnJ6enqOjo7GxscvLy9nZ2f//////////////////
/////yH5BAEKAA8ALAAAAAAcABwAAAR18D1Aq724yhlG+WAoikMAcEiirmzrJogJCG9tDxRh7y2R
88CED6AL7oZFYw2ptDGbrye095tSia2DdsvlXpMqg3hMJn9b5fT4zOq6t2zrSioXVut2LD4PltP9
d3V/VkM0ezgAASl1MSeJHiORIyUnEhmXmBIRADs=}]
	    set ckIndArr(alt_pressed) [image create photo -format gif -data {
R0lGODlhHAAcAOMLAAAAADAwMIiIiIqKipWVlZaWlpeXl5iYmLi4uLm5ucPDw///////////////
/////yH5BAEKAA8ALAAAAAAcABwAAAR18D1Bq724yjnK+WAoisUgcImirmzrKogpEG9tF5Rh762R
80CFT6AL7oZFYw2ptDGbrye095tSia2AdsvlXpMqgHhMJn9b5fT4zOq6t2zrSioXVut2LD4PltP9
d3V/VkM0ezgCAwh4CSYcHiORIyUnEhmXmBIRADs=}]
	    set ckIndArr(selected) [image create photo -format gif -data {
R0lGODlhHAAcAKUoAAAAAAcHBwgICA4ODhQUFBgYGCkpKS4uLi8vLzQ0NDU1NT4+PkVFRVVVVVZW
VmlpaYSEhIiIiIyMjJqampubm6Ojo6SkpKampqioqK6urrCwsNHR0dLS0tPT09bW1tjY2NnZ2eHh
4erq6uvr6+/v7/Dw8Pv7+/7+/v//////////////////////////////////////////////////
/////////////////////////////////////////////yH5BAEKAD8ALAAAAAAcABwAAAbEwN8v
Qiwaj8iicCixYJ7QqFRqkUSYI5R2y+16USJrpPItmyvEi3ndvaTZcJQ7oo6v53U7yEDQcPF2KCYJ
AAAIf292EIUADoh0dh4ChQMhj3lrJgqMFG2JWh8NDyVdi4UMJ56QWwuFCiRbHQGUlqqYra6wg4wT
X4BbHASMr6YAqL6fWhvChQezAJVlv1weBYycZtNcy9fH0snbzNHZ4FwdfBls2oG27N+r7qpk8V1o
ERIi9FthV/dOUwCnVLkiJInBg0KCAAA7}]
	    set ckIndArr(sel_disabled) [image create photo -format gif -data {
R0lGODlhHAAcAIQdAIiIiIuLi5qampubm5ycnJ6enqOjo6Wlpaampqenp6ioqKysrK2tra6urrCw
sLKysrW1tbm5ub+/v8TExMjIyMvLy8/Pz9DQ0NHR0dLS0tXV1dbW1tnZ2f///////////yH5BAEK
AB8ALAAAAAAcABwAAAW24PcBZGmeaCmOwVC8cCzLQwCwFafvfO9zFRtA8CsaBySCcdkjJJlQjhOg
jC6nVStmkaDwsFZdw2BgfJ9WCdkAOVOtlwMZkXFnmWPypInWYSARGz1qZA8+YDsOZA0aO3FzdXxv
iWuMYmt7h30cFwmVGoQGhj+IOxaeZAxyBnRFpY4Ka5hGr6aohVebPKeQuZM/F1xevndhksXGO7XJ
OlNEzD1IAAE50DpBN9MuM9wzNTciKeLjIiEAOw==}]
	    set ckIndArr(sel_pressed) [image create photo -format gif -data {
R0lGODlhHAAcAKUnAAAAAAUFBQYGBgsLCw8PDxISEh8fHyMjIyQkJCgoKCkpKS8vLzU1NUFBQUJC
QlBQUGVlZXZ2dnd3d4WFhYeHh4iIiIqKipWVlZaWlpeXl5iYmKCgoKGhoaSkpKWlpaampqysrLe3
t7i4uLm5ucDAwMLCwsPDw///////////////////////////////////////////////////////
/////////////////////////////////////////////yH5BAEKAD8ALAAAAAAcABwAAAbDwN+v
Qiwaj8iicGjBaJ7QqFSKsVSYI5N2y+16TSJr5fItmzHEjHndzaTZcJO7oo6v53X7x0CgcPF2JiQJ
AAAIf292EIUADoh0dh0ChQMgj3lrJAqMEm2JWh4NDyJdi4UMJZ6QWwuFCiFbHAGUlqqYra6wg4wR
X4CxBIyvpgCovp9aG8GFB7MAlWW/XB0FjJxm0lzK1sbRyNrL0NjfXBx8E2zZgbbr3qvtqmTwXWgV
FqTzWiNWTE5T/1OqXBGSpKBBIUEAADs=}]
	}

	200 {
	    set ckIndArr(default) [image create photo -format gif -data {
R0lGODlhIAAgAMIGAIiIiImJiaqqqqurq/Hx8fLy8v///////yH5BAEKAAcALAAAAAAgACAAAANi
eAfc/jCqFat9dBTDu/9gVwhAwGxhqhqEs76hC8+cTMP2veZ6yvegH9AjHNYaRh8yGVwyic7nkSGF
UqtTADa7NRSN32EYOO6VdedbmraeOVDSVkMATxJIAMplL1GY+IB5BwkAOw==}]
	    set ckIndArr(disabled) [image create photo -format gif -data {
R0lGODlhIAAgAMIHAIiIiImJiZ+fn6CgoM/Pz9DQ0NnZ2f///yH5BAEKAAcALAAAAAAgACAAAANi
eAfc/jCqFat9dBTDu/9gVwhAwGxhqhqEs76hC8+cTMP2veZ6yvegH9AjHNYaRh8yGVwyic7nkSGF
UqtTADa7NRSN32EYOO6VdedbmraeOVDSVkMATxJIAMplL1GY+IB5BwkAOw==}]
	    set ckIndArr(pressed) [image create photo -format gif -data {
R0lGODlhIAAgAMIGAIiIiImJiZmZmby8vL29vcPDw////////yH5BAEKAAcALAAAAAAgACAAAANi
eAfc/jCqFat9VIzCu/9gRwhAwBBhqnKDs76hC8+cTMP2veZ6yvegH9AjHNYaRh8yGVwyic7nkSGF
UqtTADa7LRSN32EYOO6VdedbmraeOVDVVkMAZw5IAMplL1GY+IB5BwkAOw==}]
	    set ckIndArr(alternate) [image create photo -format gif -data {
R0lGODlhIAAgAOMHAAAAAIiIiImJiaqqqqurq/Hx8fLy8v//////////////////////////////
/////yH5BAEKAAgALAAAAAAgACAAAARxEKFAq704y5m7vxxhHGRpnmhpDIFAjWksH4U136mN76TO
477fLCiMEYuoI9KkXPYqTiM0mpyaANisdguoUlDccNYbAIvDZPN5m6aemk74Uo6kF+1C/E/P4+/8
QBUwbjQWA4NRBSwBHB+OGhIuj5OMCBEAOw==}]
	    set ckIndArr(alt_disabled) [image create photo -format gif -data {
R0lGODlhIAAgAOMIAIiIiImJiZ+fn6CgoKOjo8/Pz9DQ0NnZ2f//////////////////////////
/////yH5BAEKAAgALAAAAAAgACAAAARxECFAq704y5m7v9xgHGRpnmhpCEBAjWksH4U136mN76TO
477fLCiMEYuoI9KkXPYqTiM0mpyaCNisdkuoUlDccNYLAIvDZPN5m6aemk74Uo6kF+1C/E/P4+/8
QBUwbjQWAoNRBSwAHB+OGhIuj5OMCBEAOw==}]
	    set ckIndArr(alt_pressed) [image create photo -format gif -data {
R0lGODlhIAAgAMIHAAAAAIiIiImJiZmZmby8vL29vcPDw////yH5BAEKAAcALAAAAAAgACAAAANt
eBfc/jCqFat9dBDDu/9gVwyBwBRhqnKEs76hC8+cTMP2veZ6yvegH9AjHNYaRh8yGVx6ANCodApo
MkDUbNQawGqzXO93GmZ+ikb0UA1k99w6+E1Oo8/suAbKzHIM9kwEJAEUF4YSCiaHi4QHCQA7}]
	    set ckIndArr(selected) [image create photo -format gif -data {
R0lGODlhIAAgAIQaAAAAAAQEBAsLCw0NDRoaGhsbG0JCQkREREdHR4iIiImJiY2NjZiYmJmZmaio
qKqqqqurq6ysrK6urrKysrOzs93d3eDg4PHx8fLy8v7+/v///////////////////////yH5BAEK
AB8ALAAAAAAgACAAAAXF4PclZGmeaCqOaeueLIRpdG3feI09iULOuaBQczENjzkjcklTMpHO5zD6
nBAIlBt1aRkAAAVtSarJHL5gMYnMQAMa6oS0izZk4s8MAi2o4KgUVxE4bWgMSWM2BV8BDjZ0Xwd3
f4k1i4yOZWdfAxZBVBEBaI0ahV+Hn5U1DqKMC16Rk4hrOBCtbgB9U6o2rLgAqEJbq7cAkkfDNbZf
usi8OBJXE0vJZDXV1hrY1ttkJkDZN0UlD+DhRDwJLC/sKiI+7fHqHyEAOw==}]
	    set ckIndArr(sel_disabled) [image create photo -format gif -data {
R0lGODlhIAAgAIQVAIiIiImJiZ+fn6CgoKOjo6WlpaampqioqKmpqbGxsbKyssHBwcPDw8fHx8jI
yMnJyc/Pz9DQ0NLS0tPT09nZ2f///////////////////////////////////////////yH5BAEK
AB8ALAAAAAAgACAAAAW54PcBZGmeaCqOaeue7BBRdG3feB0JQEDOuaCQAjENjzkjcklTMpHO5zD6
dBwOjxt1OTEQCAhtSUpTfMFiEplxJjDSAGn3nMBth+ZvQWIf2x5XDThsZ299ajYIZ4I1c18KQVSK
izV5BAYTkX41DW0EgoRfhkmbnJ4LXo9TpTUOnmd7q4g4na+jmrO0npBHd62wfL2sOFYHDku+ZDXJ
yhTMys9kJkDNN0UlAtTVRDwALC/gKiI+4eXeHyEAOw==}]
	    set ckIndArr(sel_pressed) [image create photo -format gif -data {
R0lGODlhIAAgAIQZAAAAAAMDAwgICAoKChQUFBUVFTIyMjQ0NDY2NmxsbHR0dHV1dYCAgIODg4SE
hIWFhYiIiImJiZmZmampqaurq7y8vL29vcLCwsPDw////////////////////////////yH5BAEK
AB8ALAAAAAAgACAAAAXG4PdBZGmeaCqOaeuerFRhdG3feG1JUERauaCQVjENjzkjcklTMpHO5zD6
hBAIkRt1SRkAAAVtSYq5HL5gMYmsQAMWaoi0izZc4s8LAi2Y4KgRVw44bWgKSWM2BV8BDDZ0Xwd3
f4k1i4yOZWdfAxRBVA4BaI0YhV+Hn5U1DKKMCV6Rk4hrOA2tbgB9U6o2rLgAqEJbq7cAkkfDNbZf
usi8OA9XclDPZHjWwtXYTdrbJkDbN0UlEuDhGBU8ECwv7SoiPu7y6x8hADs=}]
	}
    }
}

#------------------------------------------------------------------------------
# themepatch::alt::createRadiobtnIndImgs_gif
#
# Creates the GIF images used by the style element Radiobutton.image_ind of the
# alt theme.
#------------------------------------------------------------------------------
proc themepatch::alt::createRadiobtnIndImgs_gif pct {
    variable rbIndArr
    switch $pct {
	100 {
	    set rbIndArr(default) [image create photo -format gif -data {
R0lGODlhEAAQAIQQAIeHh4iIiImJiZGRkZKSkq6urq+vr7CwsMTExMXFxcbGxujo6Onp6fj4+Pn5
+fr6+v///////////////////////////////////////////////////////////////yH5BAEK
AB8ALAAAAAAQABAAAAVg4CeKQGCaY/oFhMI8z5IQgRocDqTvjlGLgsNuuDMARIQccdggfACK5TJh
YkiJC0FAedU5TNxuo9rdZQOJsg5RS5YbA1HAUC4c5YbGslH4jQAECQsODgsIA3cqK1oBWiohADs=}]
	    set rbIndArr(disabled) [image create photo -format gif -data {
R0lGODlhEAAQAOMPAIeHh4iIiImJiY6Ojo+Pj6KioqOjo7GxsbKyssnJycrKytTU1NXV1dbW1tnZ
2f///yH5BAEKAA8ALAAAAAAQABAAAARX8EkJgrUzv0CQak1yEIEWGIyjrkxRSoKxzmsBSERKzwvx
AIjdDmFRCGkJQUB3VDEszOai2FwlA4eq6lDKVRcDSaBQtU3Gi93CpQF0EgyGaHDTiJUBpSYCADs=}]
	    set rbIndArr(pressed) [image create photo -format gif -data {
R0lGODlhEAAQAOMOAIeHh4iIiImJiYyMjI2NjZubm5ycnKampqenp7i4uL+/v8DAwMHBwcPDw///
/////yH5BAEKAA8ALAAAAAAQABAAAARY8EkJgrUzv0BQYkxyEIEWGEujrktRSoKxzmsBSERKzwrx
AIjd7mBJCGkJQUB3VC0szKai2FwlA4eqivjIVRcDSaBQtU3Gil3rNQEQDonFQjS4acTKgFITAQA7}]
	    set rbIndArr(alternate) [image create photo -format gif -data {
R0lGODlhEAAQAIQRAAAAAIeHh4iIiImJiZGRkZKSkq6urq+vr7CwsMTExMXFxcbGxujo6Onp6fj4
+Pn5+fr6+v///////////////////////////////////////////////////////////yH5BAEK
AB8ALAAAAAAQABAAAAVl4CeKgWCaY/oJxdJAEKMUgiogT6Tvz1GLA8RuuDsERIUccegofAKL5VJh
akiJjIFACeh6u7qHifv16hzV6zArUKh3iVry7SCIBIe34Xg/OJYOBj8jAQUKDA8PDAkEfCorWgJa
KiEAOw==}]
	    set rbIndArr(alt_disabled) [image create photo -format gif -data {
R0lGODlhEAAQAOMPAIeHh4iIiImJiY6Ojo+Pj6KioqOjo7GxsbKyssnJycrKytTU1NXV1dbW1tnZ
2f///yH5BAEKAA8ALAAAAAAQABAAAARb8EkJgrUzv0CQak1yEIEWGIyjrkxRSoKxzmsBSERKzwvx
AIjdDmFRCGkJQUBnaDqbKoaF+XSqFsXjLBk4aFeHUu67GEgCha9tgl7sFi4NoJNgMESDm+asDCg1
EQA7}]
	    set rbIndArr(alt_pressed) [image create photo -format gif -data {
R0lGODlhEAAQAOMPAAAAAIeHh4iIiImJiYyMjI2NjZubm5ycnKampqenp7i4uL+/v8DAwMHBwcPD
w////yH5BAEKAA8ALAAAAAAQABAAAARc8EkZhLUzP1GSao2CFIImHIyjroxRSsOxzqsRSEVKz0vx
BIndDmFRCGmKgUAHaDqbKoaF+XSqFsXjLClAaFfER+7LIEgEhq9tgl7sWq9JoIBQMBgiwk1zVgqU
GhEAOw==}]
	    set rbIndArr(selected) [image create photo -format gif -data {
R0lGODlhEAAQAIQeAAAAAA0NDQ4ODg8PDxERERISEhMTE1BQUFNTU1VVVVZWVoeHh4iIiImJiZGR
kZKSkq6urq+vr7CwsMTExMXFxcbGxtjY2OLi4uPj4+jo6Onp6fj4+Pn5+fr6+v///////yH5BAEK
AB8ALAAAAAAQABAAAAWE4CeKC2OaY/oxT6V1XUY9jMpInKfvXFSLDcluuIssRI+c54IIBA4W3ebx
WVR0lwJgCyBcdBSTRofgchO6TIOhDJi3Ah3H1H4DBlKx7mBXpNcUOhYEZgYYOhM1SVgJAgIKhx4b
DiIMEUREEEeVERuYGxA/IwsPFBkcHBkTDpsqK2sMayohADs=}]
	    set rbIndArr(sel_disabled) [image create photo -format gif -data {
R0lGODlhEAAQAIQVAIeHh4iIiImJiY6Ojo+Pj6KioqOjo6ampqenp7GxsbKysrS0tLW1tcnJycrK
ytHR0dPT09TU1NXV1dbW1tnZ2f///////////////////////////////////////////yH5BAEK
AB8ALAAAAAAQABAAAAV+4CeKQGCaY/oFhOJMU5MQgRoYEqXvUlGLAsNuuCsARIQcBcI4HBYPXYTw
ASh0kINhazhAdAqTQ8fgchm6hiCg1Jq7Oomp/YZTImLdoo6mqAMJOg9uWwhfFAk1SVhNBwyHEQMi
AQVEREYjlBGWET4qAC0NEhIyA0cqk2sBayohADs=}]
	    set rbIndArr(sel_pressed) [image create photo -format gif -data {
R0lGODlhEAAQAIQbAAAAAAoKCgsLCw0NDQ4ODg8PDz09PT8/P0FBQUJCQoeHh4iIiImJiYyMjI2N
jZubm5ycnKWlpaampqenp62tra6urri4uL+/v8DAwMHBwcPDw////////////////////yH5BAEK
AB8ALAAAAAAQABAAAAWB4CeKymKaY/otzmRlmSU5i7pAmKbv2FOLDMhuuHsoRI6chnIIBAwR3cXx
UUx0FAJgCxhQdBKTRXfgchE6C2OhDJi3Ah3G1H4D4pqLWGewJ9JrEjoRA2YFFWA1SVgIAgIJiBoY
DSILD0RERiOWF5g9PyMKDhIWGBgyDUcqlWsLayohADs=}]
	}

	125 {
	    set rbIndArr(default) [image create photo -format gif -data {
R0lGODlhFAAUAIQYAIeHh4iIiImJiYqKiouLi46Ojo+Pj5CQkLCwsLGxsbKysr+/v8DAwMHBwc7O
zs/Pz9vb29zc3N/f3+Dg4OHh4eLi4vf39/j4+P///////////////////////////////yH5BAEK
AB8ALAAAAAAUABQAAAWA4CeOnxCcgUCuY2AoTxQ9iRGwojA0F+b/F8bgRhIcKL/kb2IjDSbKKKZC
aDWkUgbR0MMqL4ZPQOGVJgCBRznqOEXWSogbnpSn6b+2gIzHIG5ceBYFIgEMeAtEH09wEgMkLlBe
EgYqRQMMXUkWC0M4YgYJDxAQDggFip8faCgAOCEAOw==}]
	    set rbIndArr(disabled) [image create photo -format gif -data {
R0lGODlhFAAUAIQUAIeHh4iIiImJiYqKioyMjI2NjaOjo6SkpKWlpa6urq+vr7e3t7i4uMDAwMHB
wcPDw8TExMXFxdTU1NnZ2f///////////////////////////////////////////////yH5BAEK
AB8ALAAAAAAUABQAAAV+4CeOnxCcgUCuY1AgjOMwRxGwoiAo0uT/koRpJShEfsgfxEYSQJLQSWTQ
UkSjidun0LsmJYVP4OCNHgABRhm6ODnWyYYbjnSc1HRfW4DI+ww3XHkSBCIBCXlZI05wDyotBU9e
DwWPiwIJXUhBQzguBwwNDQsGBFo4I2goADghADs=}]
	    set rbIndArr(pressed) [image create photo -format gif -data {
R0lGODlhFAAUAIQUAIeHh4iIiImJiYqKiouLi4yMjJycnJ2dnaOjo6SkpKqqqqurq7GxsbKysrOz
s7S0tLW1tb+/v8DAwMPDw////////////////////////////////////////////////yH5BAEK
AB8ALAAAAAAUABQAAAV+4CeOnxCcgUCuY0AcS9MsRhGwoiAk0uT/koRpJSg8fsjfg3AbCY7JKGTQ
SkSvk0ST0MMmJYVP4OC9GgCBRTmqODXWSYYbjpSn6b+2gIyfGG4FXXARBCIBVnQITSVQZQ4qLQSN
Vw4EkE47gj8RCEM4AQUwDAwKBkw4K2goADghADs=}]
	    set rbIndArr(alternate) [image create photo -format gif -data {
R0lGODlhFAAUAIQZAAAAAIeHh4iIiImJiYqKiouLi46Ojo+Pj5CQkLCwsLGxsbKysr+/v8DAwMHB
wc7Ozs/Pz9vb29zc3N/f3+Dg4OHh4eLi4vf39/j4+P///////////////////////////yH5BAEK
AB8ALAAAAAAUABQAAAWN4CeO3yCcwkCuo3AskCRByiGw4kA4WOb/mAbhRhogKr/kj2IjESjKaMZS
aDmk0gbx0MMqMYePYOGVKgICyI/Bbrt/j5PkB6jb77+InH7v509qPm6DDHApZGVKCTdciT8XBiIC
DY6CRB9PjhMEJC5QXhMHKkUEDV1JFwxDOGIHChAREQ8JBpesH2goATghADs=}]
	    set rbIndArr(alt_disabled) [image create photo -format gif -data {
R0lGODlhFAAUAIQVAIeHh4iIiImJiYqKioyMjI2NjaOjo6SkpKWlpa6urq+vr7e3t7i4uMDAwMHB
wcPDw8TExMXFxczMzNTU1NnZ2f///////////////////////////////////////////yH5BAEK
AB8ALAAAAAAUABQAAAWL4CeOnxCcgUCuY1AgjOMwRxGwoiAoE+X/k4RpJShEfsgfxEYSQJJQSmTQ
UkSjidun0LsmJ4VP4OCNHgABxk/Cbrt/i5PjZ6jb77+GnH7v/xwnaj5uhBJwKQhlUAY3XIpABCIB
CY8+WSNOjw8qLQVPXg8FnJgCCV1IQUM4LgcMDQ0LBgRaOCNoKAA4IQA7}]
	    set rbIndArr(alt_pressed) [image create photo -format gif -data {
R0lGODlhFAAUAIQWAAAAAIeHh4iIiImJiYqKiouLi4yMjJKSkpycnJ2dnaOjo6SkpKqqqqurq7Gx
sbKysrOzs7S0tLW1tb+/v8DAwMPDw////////////////////////////////////////yH5BAEK
AB8ALAAAAAAUABQAAAWM4CeO3yCcwkCuo1AkzfM0iCGw4jAsVOX/lIVpNTBEfshfpHAbDY7JqITQ
WkSvlUWz0MMmKYaPIOG9IgKCxu/Abrt/jNPjB6jb7z+HnH7v509qPm6DB3ApZGVJCDcGXYkVEwUi
AlaPFQpNJVBlECotBZtXEAWeTjuOPxMKQzgCBjAODgwITDgraCgBOCEAOw==}]
	    set rbIndArr(selected) [image create photo -format gif -data {
R0lGODlhFAAUAKUmAAAAAAsLCwwMDA0NDQ4ODj8/P0BAQEFBQUJCQnd3d3p6enx8fIeHh4iIiImJ
iYqKiouLi46Ojo+Pj5CQkLCwsLGxsbKysrOzs7S0tL+/v8DAwMHBwc7Ozs/Pz9vb29zc3N/f3+Dg
4OHh4eLi4vf39/j4+P//////////////////////////////////////////////////////////
/////////////////////////////////////////////yH5BAEKAD8ALAAAAAAUABQAAAa0wJ9w
+HM0jg0HcTlsSCydz6dTkTSYQsdjUzJ5vyXN40p0TETf9DdkJT5C6rhpBGlu0pRCIGCwpDVkEl1e
CQCGhwpgEj8Nfl4Uh5EAF18VDA0dXwWShwdfHEcfXwKchgNfHqGjpQAEqEeZXgasCJ9JjiYWrBhf
FFeCXwqcC18kEUINGmkXBwICCLxfGWQ/b3JqIA9ETnDXJiASSmUPGoNpJBljWIwSFR0eHhwUEdTr
P5dIDFhBADs=}]
	    set rbIndArr(sel_disabled) [image create photo -format gif -data {
R0lGODlhFAAUAIQcAIeHh4iIiImJiYqKioyMjI2NjaOjo6SkpKWlpaampq6urq+vr7CwsLGxsbe3
t7i4uLy8vL29vb6+vsDAwMHBwcPDw8TExMXFxcjIyMnJydTU1NnZ2f///////////////yH5BAEK
AB8ALAAAAAAUABQAAAWn4CeOnxCcgUCuY1AgD0U9RxGwoiAs2ub/GoVpJShcfsifxUYSWJLQzWXQ
WiAxDQSCgUEqbp9CzwcxmM8RYOETOPww57gh8zsAAo9fQ35m/BwnFD8IfGYJPxOBg4UGhz4UJ3k+
DIwNfykIb4x0PgY3Yj8RfBJABCIBCkgZDFoNnD5fI05RSRUqLQVPtBsVBbeyAgpjSEFDOC4HDxMT
DgYEYDgjdygAOCEAOw==}]
	    set rbIndArr(sel_pressed) [image create photo -format gif -data {
R0lGODlhFAAUAIQfAAAAAAgICAkJCQoKCgsLCzAwMDExMTIyMltbW11dXV9fX4eHh4iIiImJiYqK
iouLi4yMjJycnJ2dnaOjo6SkpKqqqqurq7GxsbKysrOzs7S0tLW1tb+/v8DAwMPDw////yH5BAEK
AB8ALAAAAAAUABQAAAWn4CeOX8OcTEOuI/NIFoZZEcSwYtNQnef/HYpp1YBofsif5nEbNY7J6MbR
oiAXhUDAwEBSmo+eDwEomxNAyIch+S3McEDjF1kwLL9C3Hz4VU4YPwJ7ZQM/F4CChAAEhyd4PgaL
fT5/DW0+DIsOdDcQYh4Jewo/HA8iDFY/DQcCAgecPxNNJVBRSBkqLQ+2txkPuk47oKUTQzgMEDAX
FxURTDgrdigLOCEAOw==}]
	}

	150 {
	    set rbIndArr(default) [image create photo -format gif -data {
R0lGODlhGAAYAIQZAIeHh4iIiImJiYuLi4yMjJubm5ycnJ2dnaCgoKGhoaKioqOjo6+vr7CwsLGx
sbKysr29vb6+vr+/v+7u7u/v7/Dw8PHx8fv7+/z8/P///////////////////////////yH5BAEK
AB8ALAAAAAAYABgAAAWd4CeOY2CeZKoK5vFA0GOYgpoGhERlfE9FhIBNFFhYesieRSFUBRqYpDRz
YTRLi+hUemGWCMfttDKofQISsTjSDOzU04lQcICLDayHffswRfZTbAF/gEkQJnqFSA4BAgaKSAU1
AROQGXJEhIqHRGCKZFcBCBeAXVdEDKRwVaclChVqFQmtJAEDEJVJExADtCkAJgUvMQUmAEM2JzTI
IQA7}]
	    set rbIndArr(disabled) [image create photo -format gif -data {
R0lGODlhGAAYAIQYAIeHh4iIiImJiYqKiouLi5WVlZaWlpiYmJmZmZqamqKioqOjo6SkpKWlpays
rK2tra6urs3Nzc7Ozs/Pz9DQ0NbW1tfX19nZ2f///////////////////////////////yH5BAEK
AB8ALAAAAAAYABgAAAWd4CeOY2CeZKoKpsE4DmOYgpoGBCRdfC89hIBNFEhMesgeJSFUBRaWpPRS
UTRLiehUWmGWCMftdDKofQIQsfjRDOzU04hQYICLDSyGfdswPfZTbAF/gEkOJg2FSQwBdIpIBTVu
jxdyRISKh0QEFIpkVwEHFYBdV0QKo3AVC6ZYYVsTCK0kAQMOEVISDgOzKQAmBQ0wDQUmAEM2JzTI
IQA7}]
	    set rbIndArr(pressed) [image create photo -format gif -data {
R0lGODlhGAAYAIQUAIeHh4iIiImJiYqKipGRkZKSkpOTk5SUlJWVlZubm5ycnJ2dnaKioqOjo7q6
uru7u7y8vMHBwcLCwsPDw////////////////////////////////////////////////yH5BAEK
AB8ALAAAAAAYABgAAAWZ4CeOY2CeZKoKprEwzFKYgpoGQ/NMfP80g4BNFEBAesgeBCFUBRSSpHQS
STRLiOhUGmGWBsftFCKofQINsbjRDOzUU4dQYICLC6yFfbswpfdSbGiAUgwmeoRICgECBYlIBDVu
jxNyRH+JhkRgiWRXAQcRgF1XRAmicFWlWGFbEAerJIwMDlIPDCxDIwAmBC8xBCYAuk4njLohADs=}]
	    set rbIndArr(alternate) [image create photo -format gif -data {
R0lGODlhGAAYAIQbAAAAAH9/f4eHh4iIiImJiYuLi4yMjJubm5ycnJ2dnaCgoKGhoaKioqOjo6+v
r7CwsLGxsbKysr29vb6+vr+/v+7u7u/v7/Dw8PHx8fv7+/z8/P///////////////////yH5BAEK
AB8ALAAAAAAYABgAAAWu4CeO42CeZKoSZhJJUoSYhJoOBmVtfG9NhoFNNGhgesgehiFUDR6apHST
cTRLjehUmmGWDMft9FKofQYUsXjSHOzU04qQkICLEawIMsDv+/lIESYTSACGh4iGSGwDhD2JkABI
EiZ6PX+YAUgQAwQIdlsHNQMVoElyRI6mPJREYKsbZFcDChmmXVdEDrZwVbklDBdqFwu/JAMFEqWn
EgXGKQImBy8xByYCQzYnNNkhADs=}]
	    set rbIndArr(alt_disabled) [image create photo -format gif -data {
R0lGODlhGAAYAIQZAIeHh4iIiImJiYqKiouLi5WVlZaWlpiYmJmZmZqamqKioqOjo6SkpKWlpays
rK2tra6urr6+vs3Nzc7Ozs/Pz9DQ0NbW1tfX19nZ2f///////////////////////////yH5BAEK
AB8ALAAAAAAYABgAAAWu4CeOY2CeZKoKpsE4DmOYgpoGBDRhfD89hIBNFEhQesheJSFUBRaXpBRj
UTRLiehUamGWCMftlDKofQIQsfjRDOzUU4lQYICLDSwGMsLv+/lIDSYPSAuGh4iGSGwBhD2JkAtI
DiYNe3+YSAwBdHZbBTVunklyRI6jPJREBBWoGGRXAQcWo11XRAq0cBYLt1hhWxQIviQBAw4SUhMO
A8QpACYFDTANBSYAQzYnNNkhADs=}]
	    set rbIndArr(alt_pressed) [image create photo -format gif -data {
R0lGODlhGAAYAIQWAAAAAGFhYYeHh4iIiImJiYqKipGRkZKSkpOTk5SUlJWVlZubm5ycnJ2dnaKi
oqOjo7q6uru7u7y8vMHBwcLCwsPDw////////////////////////////////////////yH5BAEK
AB8ALAAAAAAYABgAAAWr4CeO42CeZKoSJtI4TnOYhJoOxRNVfB89hYFNNFBIesieRCFUDRiUpLQy
WTRLiuhUOmGWCsftVEKofQYPsfjRHOzUU4iQgICLD6wGMsDv+/lIDSZpPQCGh4iGSGxoSImPAEgO
Jno9f5cBSAwDBAd2WwY1bp9JckSEpDyTRGCpFWRXAwkTpF1XRAu0cFW3WGFbEgm9JJwOEFIRDixD
IwImBi8xBiYCzE4nnMwhADs=}]
	    set rbIndArr(selected) [image create photo -format gif -data {
R0lGODlhGAAYAKUpAAAAAAsLCwwMDA4ODi8vLzAwMDY2Njc3Nzg4ODk5OYeHh4iIiImJiYuLi4yM
jJGRkZKSkpOTk5ubm5ycnJ2dnaCgoKGhoaKioqOjo6+vr7CwsLGxsbKysr29vb6+vr+/v+Tk5O7u
7u/v7/Dw8PHx8fj4+Pn5+fv7+/z8/P//////////////////////////////////////////////
/////////////////////////////////////////////yH5BAEKAD8ALAAAAAAYABgAAAblwJ9w
OFwYj8SkkmGkcDodzsTIUCYXjo8oxe2KPI6FVbjAkLroLukiVi40qLQ8dcq0i5j4XH5iFx1nXSUP
BwEBBxAlaCMNVT8LH2ggBACVlgUgaB5tC1tcJZSWogWKXCFiDBRoD6KtABFoE0wcaAauoghoHEYe
aAK3lgKavL7AlQNoHUa0XbbGuV0bCwwTaBDGr2gSVQshggXABSZdp2S9XSDgrZjJnIBoJhEIAgIJ
EeNdjHcLFSd7fH6ILMjg7x+XOncEXhhhcISFhFcadPCWJkSHBhCVKDAi4UkUCUYUjLFyhMrIIAA7}]
	    set rbIndArr(sel_disabled) [image create photo -format gif -data {
R0lGODlhGAAYAIQfAIeHh4iIiImJiYqKiouLi5WVlZaWlpiYmJmZmZqamqKioqOjo6SkpKWlpaam
pqysrK2tra6urq+vr7CwsMHBwcLCws3Nzc7Ozs/Pz9DQ0NPT09bW1tfX19jY2NnZ2f///yH5BAEK
AB8ALAAAAAAYABgAAAXW4CeOY2CeZKoKpsE8D2OYgpoGRHR5fH9BhIBNFEhgesheJiFUBRacpNSz
UTRLiehUumGWCMcehyJpNCQVLQ8zqH0CEaQGsqjbIRokpBnY8Th0doIQahZCAgZIFIKMCxVIBiwM
SBGNghJIDSYQmZZ2DXqbnZ4LDkgPJqA9laSYPQwBiEgVpI5IBTV9YoGNEB09hkScPXO9eT2oRAQZ
SB0VZQ0TFb89bFcBBxtbXF4kAQra2zwbC1feRuIYCOY3Aw8WUhcPA+wqACYFDTANBSYAQzZO0AAY
AgA7}]
	    set rbIndArr(sel_pressed) [image create photo -format gif -data {
R0lGODlhGAAYAKUiAAAAAAgICAkJCQsLCyQkJCUlJSkpKSoqKisrKywsLG9vb3BwcIeHh4iIiImJ
iYqKipGRkZKSkpOTk5SUlJWVlZubm5ycnJ2dnaKioqOjo66urrq6uru7u7y8vL6+vsHBwcLCwsPD
w///////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////yH5BAEKAD8ALAAAAAAYABgAAAbhwJ9w
OGwYj8Sk0mGUXDCYS8ToUCYbjwwnxO1yMo+GVdigdLrobociVjYsoLQ89Km0i5T4XP5hFx9nXR4K
BwEBBwseaB0OVT8NGWgaBACVlgUaaBltDVtcHpSWogWKXBtiDhJoCqKtAAtoEUwXaAauoghoF0aR
XQK3lgKavGi/wAADaBhGtF22x7ldFg0OEWgLx69oEFWdggXApF2nZL1cGuCtmMqcgGgeCwgCAgmJ
i0xFEx97fH5EDRX28eNS584/MwM7TDB4xQGGDXI4YMA3RggDIxCeRIFghEFFN0eoVQwCADs=}]
	}

	175 {
	    set rbIndArr(default) [image create photo -format gif -data {
R0lGODlhHAAcAIQdAIeHh4iIiImJiYqKiouLi4yMjJOTk5SUlJWVlZ+fn6CgoLCwsLGxsbKysrOz
s7S0tNDQ0NHR0dLS0tPT09XV1djY2NnZ2dra2uHh4eLi4u/v7/Dw8Pr6+v///////////yH5BAEK
AB8ALAAAAAAcABwAAAW54CeOJBCcaECu7IgOh6IcA9q2J/FcXOd3nMuDcLq5Ao3Nb/nbNIq3AEHC
rP4oBRVLmrF6Oxji6gT5ficBAQlpNjO0H6mm/d2I4w+62aE6XfRfFgEmAz2AVhwCJwiHXwcnCo1e
CpCSVgknB5ZVBieFmz+JKH+gHRVaAXmlfCJyoHZwbJsLcHEBZZJoamsEGI1htS4EEYBYwWsBDHNf
GrTHK4oEDhaGPhwWDkS7RkdpMTOKUNwsJinPJCEAOw==}]
	    set rbIndArr(disabled) [image create photo -format gif -data {
R0lGODlhHAAcAIQbAIeHh4iIiImJiYqKiouLi4+Pj5CQkJGRkZiYmKOjo6SkpKWlpaamprm5ubq6
uru7u7y8vL29vb6+vr+/v8DAwMXFxc7Ozs/Pz9XV1dbW1tnZ2f///////////////////yH5BAEK
AB8ALAAAAAAcABwAAAW44CeOJBCcaECu7IgKBoIYAtq258BQmOZrGApjcLq5AovLb/m7LIq3wMDB
rP4gBBVLWrF6NRXi6tT4fh8BAQlpNiu0H6ml/b2I4wy6+RkPUPRfEwEmAj2AVhk1AQeHXwYnCI1e
CJCSVpQBBpZVBSeFmz+JKH+gGhJaAXmlfHEDc5t2cGybCXB9ZZJoamsDXYdhti5TgBFZRicKr14W
tcEsNQMLExlLGRMLRLtGR2kxM4rO2yImKeEkIQA7}]
	    set rbIndArr(pressed) [image create photo -format gif -data {
R0lGODlhHAAcAIQYAIeHh4iIiImJiYqKio2NjY6Ojo+Pj5OTk5SUlJycnJ2dnZ6enqysrK2tra6u
rrCwsLGxsbS0tLW1tbu7u7y8vMDAwMHBwcPDw////////////////////////////////yH5BAEK
AB8ALAAAAAAcABwAAAW04CeOJBCcaECu7IgKBYIUAtq257BA1eVfFchicLq5AgrKb/mjKIq3gKDB
rP4cRJxAYu1eIrXVieH1NqQkZLn8dA0may8l/Aks4mzVCYL3PgImAj19VhYoBoReBScIiV0IjI5W
BycFklUEJ4KXP4YofJwXfyJ2oRdtdW+cFFmkCpwJKkdkjmcCYgIRiRGtYgO0cViyOEhwXhOxwzc1
AwoPFksWDwpEt0ZpmjEzNVDXLCYpyi0hADs=}]
	    set rbIndArr(alternate) [image create photo -format gif -data {
R0lGODlhHAAcAKUfAAAAAD8/P4eHh4iIiImJiYqKiouLi4yMjJOTk5SUlJWVlZ+fn6CgoLCwsLGx
sbKysrOzs7S0tNDQ0NHR0dLS0tPT09XV1djY2NnZ2dra2uHh4eLi4u/v7/Dw8Pr6+v//////////
////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////yH5BAEKACAALAAAAAAcABwAAAbWQJBw
SBQMjsgBcckcIgsJBiNRQDabR0Mk4/l4P55MxHC8OgePznf97TzK14GBwq5/LQclU76x+z8aZEtH
En9/FQMERGiGhg56IHIcjX8dgpERlIYQSkcZmn8YA0YFXaB2HgRHCmwBrq+wsGwJRwxsALi5urps
DLW3u8G4bAtHCa2xya5sCEelp6iqntB1F3oDmdRrnEKS2l6WkIzfDZCRA4XUiIqLBhrQgeZOBhOg
ePKLAw6Tfxzl+EtUGYCAwZQXDxggkGFn5kyiKFOkAWwIwkiSiUOCAAA7}]
	    set rbIndArr(alt_disabled) [image create photo -format gif -data {
R0lGODlhHAAcAIQcAIeHh4iIiImJiYqKiouLi4+Pj5CQkJGRkZiYmKOjo6SkpKWlpaamprGxsbm5
ubq6uru7u7y8vL29vb6+vr+/v8DAwMXFxc7Ozs/Pz9XV1dbW1tnZ2f///////////////yH5BAEK
AB8ALAAAAAAcABwAAAXH4CeOJBCcaECu7IgKBoIYAtq258BU2eZvmQpjcLq5AgvMb/nDLIq3wODB
rP4iBBVLarF6Nxbi6uT4fiEBAQlpNiu0H+ml/cWI4wy6+RkPVPRfFAEmAj2AVho1AQdMDY6PkJBM
BicITAmYmZqaTAiVl5uhmJ0nBo2RqI5MBSeFh4iKfq9VE1oBebNLfHEDc7kbdnBsvwlwfWWzaGpr
A12HYcYuU4ASWUYnCr5eF8XRLDUDCxQaSxoUC0TLRkdpMTOx6zcmKd4rIQA7}]
	    set rbIndArr(alt_pressed) [image create photo -format gif -data {
R0lGODlhHAAcAIQaAAAAADAwMIeHh4iIiImJiYqKio2NjY6Ojo+Pj5OTk5SUlJycnJ2dnZ6enqys
rK2tra6urrCwsLGxsbS0tLW1tbu7u7y8vMDAwMHBwcPDw////////////////////////yH5BAEK
AB8ALAAAAAAcABwAAAXF4CeOpDCc6ECu7IgSh6IcBNq2Z9FIV+ZnF0mjcLq5BgzLb/mzMIq3AeHB
rP4gRByBYu1mJrXVyeH1PqQkZLn8dBUqa68l/Bk04mzVSYL3RgYmBD19VhgoCEwBiouMjEwHJwpM
AJSVlpZMCpGTl52UTAknB4mNpYpMBieChIUpfKxMfyJ2sExtdW+1PhZZswy6GQsqR2SwZwRiBBOs
E71iBcVxWMM4SHBeFcLUNzUFDBEYSxgRDETIRmmqMTM1UOgsJinbLSEAOw==}]
	    set rbIndArr(selected) [image create photo -format gif -data {
R0lGODlhHAAcAKUyAAAAAAEBAQsLCwwMDA0NDQ4ODg8PDy8vLzAwMDExMTIyMnt7e3x8fH19fX5+
foeHh4iIiImJiYqKiouLi4yMjJOTk5SUlJWVlZ+fn6CgoKqqqqurq62trbCwsLGxsbKysrOzs7S0
tNDQ0NHR0dLS0tPT09XV1djY2NnZ2dra2uHh4eLi4unp6erq6uvr6+/v7/Dw8Pr6+v//////////
/////////////////////////////////////////////yH5BAEKAD8ALAAAAAAcABwAAAb+wJ9w
SHxAjkgIcckcIiWWTMYiQTabx0koFZN5ZbFUaHK8OiEf2Hf9hX3KV8iExK5/TRQlU76y+2UqZEtH
In9/JRARRGh1LAsIAgIJDCx1Hno/ci9sGgQAn6AEG2wwgpkhnAGgqwABo2sgSkcpayyerKsFLWso
EEYSXV8LuLgNazERRxdsB8SsCWwWRxlsA86rBGwZ02y31wAFbBhHFmwI35/QaxVHwGsM6AAOx8mz
td7EBi5rJ3oQqGs2qCIWgAObWEI0sdlQAJcBg2tKYWLEpkUDBQMGKHCwj00HTJkgFDJkB5GiRRNU
kGQTCKSTCSNWesHjchEED5v+vPhYc0kcsgkgUATzEgMFCDInzZxJFGVKvZ5KfxhJAnVIEAA7}]
	    set rbIndArr(sel_disabled) [image create photo -format gif -data {
R0lGODlhHAAcAKUgAIeHh4iIiImJiYqKiouLi4+Pj5CQkJGRkZiYmKOjo6SkpKWlpaampq2tra6u
rrm5ubq6uru7u7y8vL29vb6+vr+/v8DAwMXFxcfHx8jIyM7Ozs/Pz9TU1NXV1dbW1tnZ2f//////
////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////yH5BAEKACAALAAAAAAcABwAAAb+QJBw
SAQEjsgAcckcIgUGBMIgQDabxwHD0vl4Px0LY3C8OgOLzXf93SzK18AAwq5/JQQlU36x+z8XZEtH
D39/EQECRGh1HBMNCwsOFBx1CnogchpsGAwJn6AMGWwbgpkMnKCqoKNrb5kBFmscnquqDJVfFQFG
Al1fE7a2E2seVQEHbA3Cqw5sBkcIbAvMt2wI0Wy11Qmoa9gBBsrcn85rBUe+axTkCcRfxkiyX7Tc
DL9eFHoB3l8Z3Bim7RuwaU2GbaECrimFiREbRw4iOZiA70sCTLAKGbKDSNGiAX02rgmE0ckckV4m
5DFzREFBPxoulmRSZcCCCh6KVVhAxqMQmTOJokw5NvOnECNJihIJAgA7}]
	    set rbIndArr(sel_pressed) [image create photo -format gif -data {
R0lGODlhHAAcAKUpAAAAAAEBAQgICAkJCQoKCgsLCyQkJCUlJSYmJl5eXl9fX2BgYIKCgoODg4SE
hIeHh4iIiImJiYqKio2NjY6Ojo+Pj5OTk5SUlJycnJ2dnZ6enqysrK2tra6urrCwsLGxsbKysrOz
s7S0tLW1tbu7u7y8vMDAwMHBwcPDw///////////////////////////////////////////////
/////////////////////////////////////////////yH5BAEKAD8ALAAAAAAcABwAAAb+wJ9w
SHxAjkgIcckcIiOUy4USQTabR4nmY0J5UaaPRnK8OiGZ0nf9LWXKV0iEw65/O2RsZGTvo0RVS0cb
fn4cckRodSAJBwICBwogdW9OEiRsDAQAnJ0EDWwlgT8QGpkBnakAAaBrlUcfayCbqqkFIWseEEYR
XV8JtbULaydIFWwGwaoHbBRHF2wDyqkEbBfPbLTTAAVsFkcUbAfbnMxrE0e9awrkAMNfxUixX7Pb
BSK5SqSmaw2owQEcsKlE6hKbBgVqFRC4pkQeIYrYhFiAYMAABAvwscGgDyIEQoXsHIogKILGkF9E
PBQkASRKPB2ZHMmAyQ8JjjGbVJGQwcMXCWIeMpAhaSZRuihTqsApysRIkpxMggAAOw==}]
	}

	200 {
	    set rbIndArr(default) [image create photo -format gif -data {
R0lGODlhIAAgAKUkAIeHh4iIiImJiZeXl5iYmJmZmZ6enp+fn6CgoKSkpKWlpaampqenp66urq+v
r7CwsLGxscPDw8TExMXFxeDg4OHh4ePj4+Tk5OXl5ebm5uzs7O3t7e7u7vX19fb29vj4+Pn5+fr6
+vz8/P39/f//////////////////////////////////////////////////////////////////
/////////////////////////////////////////////yH5BAEKAD8ALAAAAAAgACAAAAbnwJ9w
SBQKAshkoMhsDpVQqNN5RCImlU0opKlIDknBlFh9bEjotHrjSI5/SEJGTadjBsgpMtGp+9MeDHlM
SAsjf4gkIgqDQ0cDfYmIHgWNcAFzkokXjUgQmpptS5dnoIkagwEIpppgP0cTrJISAVUVsokUShy4
iBtKIL1/IMDCfh9KpcZqqEm3y2q6SRLQahF5AQfVaQajSMrLzUJIDtsNnQEY0BaWj5G9HgSWlwoi
vSIJtU1HfLIeC/OIIBlwwZQFPGLGJHGg4dQ5fW8uITkggYIGECA0UIjQDQmAiAKjREkIktDIiEEA
ADs=}]
	    set rbIndArr(disabled) [image create photo -format gif -data {
R0lGODlhIAAgAKUhAIeHh4iIiImJiZKSkpOTk5SUlJeXl5iYmJubm5ycnJ2dnaKioqOjo6SkpLCw
sLGxsbKyssTExMXFxcbGxsfHx8jIyMzMzM3Nzc7OztLS0tPT09TU1NXV1dbW1tfX19jY2NnZ2f//
////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////yH5BAEKAD8ALAAAAAAgACAAAAblwJ9w
SBQKAshkoMhsDpVQqNN5RB4gkkunY5E8DknBlFhlXEDotPqySI5/SEJFTadTBsgpEpGp+9MaCnlM
SAkff4ggHgmDQ0cDfYmIGgWNcAFzkokTjUgNmpoMg0hnoIkWowemmmA/Rw+rkg8BVRKxiRFKGLeI
F0ocvH8cv8F+G0qlxWqoSbbKarlJsM9pDnkBqtRoBkuXycrMQkgL2m3dlxTPnOeuAZDFGgSWlwke
vB4ItE1HfLEajOyKIBkwwdQEPGLGJGFg4ZS5hG+UHHgQwQIHDhYiOOCGBMAbgVGiQPxISOTHIAA7}]
	    set rbIndArr(pressed) [image create photo -format gif -data {
R0lGODlhIAAgAIQcAIeHh4iIiImJiY+Pj5CQkJGRkZOTk5SUlJaWlpeXl5ubm5ycnJ2dnaWlpaam
prS0tLW1tba2tre3t7m5ubq6uru7u76+vr+/v8DAwMHBwcLCwsPDw////////////////yH5BAEK
AB8ALAAAAAAgACAAAAXW4CeOpCgEaBqUbDuqMOy6J3o4D5Vl0+MYKcGMVFtQNsikkqJIDT8ogkRJ
pUYGqBkKYal6k5ZEloVKaL7oTQYxHp0G3TTaUmhDA1N5GtJGMfR6TSt3R4BpE2MBB4Z6QB8nDoxy
DgE1D5JpDyoVmGgUKhidXxigol4XKoWmSogpl6tKmimRsEkNWQEGtUmOhLufgygKu4IvARGwfIMm
AXCmFgR2dwgZnWuVLSdckmHSJCgDEIYQWEJDKQoTaUwo5k8qBjgTGBg9DUAoAE8lMf3u+2Ri/HMR
AgA7}]
	    set rbIndArr(alternate) [image create photo -format gif -data {
R0lGODlhIAAgAKUlAAAAAIeHh4iIiImJiZeXl5iYmJmZmZ6enp+fn6CgoKSkpKWlpaampqenp66u
rq+vr7CwsLGxscPDw8TExMXFxeDg4OHh4ePj4+Tk5OXl5ebm5uzs7O3t7e7u7vX19fb29vj4+Pn5
+fr6+vz8/P39/f//////////////////////////////////////////////////////////////
/////////////////////////////////////////////yH5BAEKAD8ALAAAAAAgACAAAAb3wJ9w
SBQOBMikoMhsDpVQqNN5RCYoFo5ItLFMEMnBlFiFcErotJrzSI5/yIJGTadnCMgpUuGp+9MfDXlM
SAwkf4glIwuDQ0cEfYmIHwaNcAJzkokYjUgRmpptS5dnoIkbgwIJpppgP0cUrJITAlUWsokVSh10
AL6/wMEAdBxKIb3Cyb50IcbIysJ0IEqladDJdKhJt7h/ukkT3X8SeQII4n4Ho0jV6CXaQkgP7mkO
nQIZ9BeWj5HdHwUsXVowotsIBbWaHOEj6wMDgUSQEMBg6gIeMWOSPNhwyl7CN5eQIJhQYUOIEBsq
SFCHJADIiFGiYHxJSCbIIAA7}]
	    set rbIndArr(alt_disabled) [image create photo -format gif -data {
R0lGODlhIAAgAKUhAIeHh4iIiImJiZKSkpOTk5SUlJeXl5iYmJubm5ycnJ2dnaKioqOjo6SkpLCw
sLGxsbKyssTExMXFxcbGxsfHx8jIyMzMzM3Nzc7OztLS0tPT09TU1NXV1dbW1tfX19jY2NnZ2f//
////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////yH5BAEKAD8ALAAAAAAgACAAAAb2wJ9w
SBQKAshkoMhsDpVQqNN5RB4gkkunY5E8DknBlFhlXEDotPqySI5/SEJFTadTBsgpEpGp+9MaCnlM
SAkff4ggHgmDQ0cDfYmIGgWNcAFzkokTjUgNmpoMg0hnoIkWowemmmA/Rw+rkg8BVRKxiRFKGHQM
vb6/wAx0F0ocvMHIvXQcxcfJwXQbSqVpz8h0qEm2t3+5SbDcfg55AarhdQZLl9TnINlCSAvtaW3q
lxTznPauAZDnGgQsXUrggZsHBLSaHOETSwOjfUWQDJhgagIeMWOSMLBwqh7GN0oOPIhggQMHCxEc
pEMC4E3EKFE+uiQU02UQADs=}]
	    set rbIndArr(alt_pressed) [image create photo -format gif -data {
R0lGODlhIAAgAIQdAAAAAIeHh4iIiImJiY+Pj5CQkJGRkZOTk5SUlJaWlpeXl5ubm5ycnJ2dnaWl
paamprS0tLW1tba2tre3t7m5ubq6uru7u76+vr+/v8DAwMHBwcLCwsPDw////////////yH5BAEK
AB8ALAAAAAAgACAAAAXm4CeOpDgIaCqUbDuqMOy6J4o8UKVpFPQcqcGMVGNUOMiksrJIDT+owkRJ
pUoIqBkqcal6kxdFloVSbL5ojiYxHp0I3TT6YmhDBVN5OtJGNfR6TSt3R4BpFGMCCIZ6QB8nD4xy
DwI1EJJpECoWVACen6ChAFQVKhmdoqmeVBmmqKqiVBgqhUmwqVSIKZeYX5opkb1eDlkCB8JejoTI
S4kCC8xJgi8CEtF8gyYCcMgXBXZ3CRq9a5UtJ1ySYeAkKAQRhhFYQkMpCxRpTCj0TyoHOBQyZOjh
AAiKAE9KxFjILyGZGA1dhAAAOw==}]
	    set rbIndArr(selected) [image create photo -format gif -data {
R0lGODlhIAAgAKU+AAAAAAICAgMDAwsLCwwMDA0NDQ4ODioqKisrKywsLEFBQUJCQkNDQ0RERGho
aGlpaWtra2xsbG5ubm9vb3FxcXJycoeHh4iIiImJiZeXl5iYmJmZmZ6enp+fn6CgoKSkpKWlpaam
pqenp66urq+vr7CwsLGxscPDw8TExMXFxdLS0tPT09TU1NXV1eDg4OHh4ePj4+Tk5OXl5ebm5uzs
7O3t7e7u7vX19fb29vj4+Pn5+fr6+vz8/P39/f///////yH5BAEKAD8ALAAAAAAgACAAAAb+wJ9w
SBRiLsjkpchsDpVQqNN5RHpSr9puR3uhOknMlFgt1XzotLpGSo5/SM1MTafLMsgp8nOr+9M4InlM
SCE9f4g+PCCDQ0cZfYmIOBuNcBdzdSoSCAMDCBMrfjGNSCZ1OQ8BAKytAhA6dW1Ll2dqOQqtuq0L
sWo0gxcedQ67xgARdWA/Ryl0KqvHugIsdCgXVS90EtLGFHQuSjZ0B927CXQ1Sr5pBOa6BXQ663QF
760GdDlKtmnl9wDQ/VKiTc0EgAAqgFOCgs4KAfcEtKBzIs+FDnUg3JNQhwMtJP3Q6GBgrsEOOsA+
XiBRR0cEiLsESDhJZ0SpCzL8sKCQgABPgQQVJtaBYelRJEl+cGiwdAkED6R1eHzA1uQIH6iAQjAl
giRDDKww8IgZk4QEjUQ0bFJ9cwlJBxQuaOjQQcPFCY9ILLDlGiXK2L2E/LINAgA7}]
	    set rbIndArr(sel_disabled) [image create photo -format gif -data {
R0lGODlhIAAgAKUqAIeHh4iIiImJiZKSkpOTk5SUlJeXl5iYmJubm5ycnJ2dnaKioqOjo6SkpKWl
paampqysrK2trbCwsLGxsbKysrm5ubq6uru7u8TExMXFxcbGxsfHx8jIyMzMzM3Nzc7Ozs/Pz9DQ
0NLS0tPT09TU1NXV1dbW1tfX19jY2NnZ2f//////////////////////////////////////////
/////////////////////////////////////////////yH5BAEKAD8ALAAAAAAgACAAAAb+wJ9w
SBQKAshkoMhsDpVQqNN5RB4oGY/J1MlMDknBlFhleFLotNqzSI5/SAJHTadvBsgpEiGq+9MjCnlM
SAkof4gpJwmDQ0cDfYmIIwWNcAFzdSEXEQ4OERYhfhqNSA11JxUNDKytDRaHdAyDSGdqJxKtuq0T
sWkdtAd1FbvFDBZ1YD9HE3Qhq8a6DSB0EwFVGXQX0cUXdBhKH3QQ3LsQdB5KJXQO5boPdCXqdA/u
rfBqJEq2aeT2DOfUAEuSTY2Ffwy8qQGXpJmaZ/YaiFIjIU8AYXQOulOoxsCSS/zQoJhQjoIvNAOF
IFlQB4UFaNIunETT5uOlDX5AXIDgCcJKhYl0SNlcFgCSpEkELF1KcOIoKgTXmhzh4xQQo6FFkAzQ
UFUDHjFjkjDokKhDTbBvlByYgKFDiRIdMEjwiATAm6xRoqC9S0jv3SAAOw==}]
	    set rbIndArr(sel_pressed) [image create photo -format gif -data {
R0lGODlhIAAgAKUyAAAAAAICAggICAkJCQoKCgsLCyAgICEhISIiIjIyMjMzMzQ0NFBQUFJSUlNT
U1RUVFVVVVZWVldXV4eHh4iIiImJiY+Pj5CQkJGRkZOTk5SUlJaWlpeXl5ubm5ycnJ2dnaGhoaKi
oqOjo6WlpaamprS0tLW1tba2tre3t7m5ubq6uru7u76+vr+/v8DAwMHBwcLCwsPDw///////////
/////////////////////////////////////////////yH5BAEKAD8ALAAAAAAgACAAAAb+wJ9w
SBRWKMgkpchsDpVQqNN5RGpIJdXrlSqRMsnKlFj1qGLotFrVSY5/yAtKTaefLMgpcsOq+9MsHHlM
SBwwf4gxLxuDQ0cWfYmILBiNcBRzdSAPBwICBxAgfiaNSB91LAwBAKytAQ2Ram1Ll2dqLAmtuq0J
sWgpgxQadQy7xgAOdWA/RyR0IKvHugEhdCQUVSV0D9LGEXQlSit0Bt27CHQqSi50A+a6BHQu63QE
760FdC1Ktmnl9wDQqQGWRJsaCAABSACnxJkaaPcCiKAzIg+FDHUa3HugjBaSfmhYKDC3oEW6YBQ6
oHIQbdoDk3RmPaFwwk+ICAgGDEAgYWJGHVK0jFCAJGnSBUuXNrwoWmcRtiZH+DAFJCgooaEmpprA
I2ZMkg4pErFB0vWNkgxYUrhw0WUEGCQT3hSJQres3KtQ7DoJAgA7}]
	}
    }
}

#------------------------------------------------------------------------------
# themepatch::clam::createCheckbtnIndImgs_gif
#
# Creates the GIF images used by the style element Checkbutton.image_ind of the
# clam theme.
#------------------------------------------------------------------------------
proc themepatch::clam::createCheckbtnIndImgs_gif pct {
    variable ckIndArr
    switch $pct {
	100 {
	    set ckIndArr(default) [image create photo -format gif -data {
R0lGODlhEAAQAMIEAJ6Zkp6akejn5eno5v///////////////yH5BAEKAAcALAAAAAAQABAAAAMn
eLHcrYPISaUAoeq59u5eBYZcRpYnmhLj2ZJvGHvzFwjppTh8ABwJADs=}]
	    set ckIndArr(disabled) [image create photo -format gif -data {
R0lGODlhEAAQAMIFAJ6Zkp6akc3Lxc7Lxtza1f///////////yH5BAEKAAcALAAAAAAQABAAAAMn
eLHcrYPISaUAoeq59u5eBYZcRpYnmhLj2ZJvGHvzFwjppTh8ABwJADs=}]
	    set ckIndArr(pressed) [image create photo -format gif -data {
R0lGODlhEAAQAMIFAJ6Zkp6akbOupbSvpbq1q////////////yH5BAEKAAcALAAAAAAQABAAAAMn
eLHcrYPISaUAoeq59u5eBYZcRpYnmhLj2ZJvGHvzFwjpAChOH+wJADs=}]
	    set ckIndArr(alternate) [image create photo -format gif -data {
R0lGODlhEAAQAKEBAFiVvP///////////yH5BAEKAAIALAAAAAAQABAAAAIWFI6Zpu0Po5y0poAz
flrbD4aixUxCAQA7}]
	    set ckIndArr(alt_disabled) [image create photo -format gif -data {
R0lGODlhEAAQAKEBAKCgoP///////////yH5BAEKAAIALAAAAAAQABAAAAIWFI6Zpu0Po5y0poAz
flrbD4aixUxCAQA7}]
	    set ckIndArr(alt_pressed) [image create photo -format gif -data {
R0lGODlhEAAQAKECAH+22IC22P///////yH5BAEKAAMALAAAAAAQABAAAAIYXICpOet6npy02nuF
3lpyjoXiSJZBY50FADs=}]
	    set ckIndArr(selected) [image create photo -format gif -data {
R0lGODlhEAAQAOMOAFiVvGaewmifwmifw9jm79zp8d7q8uLs8+Lt8+Tu9OXu9Ofv9efw9efw9v//
/////yH5BAEKAA8ALAAAAAAQABAAAAQ78IFJa5U26817JkYwBQaxFQ4SBIhTbMHhLImjCFxQOw2e
74xBTsZQ2IQalIrl2oBEAJLJQ61aARjqIwIAOw==}]
	    set ckIndArr(sel_disabled) [image create photo -format gif -data {
R0lGODlhEAAQAOMLAKCgoKioqKmpqenp6evr6+zs7O7u7u/v7/Dw8PHx8fLy8v//////////////
/////yH5BAEKAA8ALAAAAAAQABAAAAQ68IFJa5U26817HkUwBcWwEcsRBMdCbIGxJMiCCBy7LAqe
1zOfJjar3U6pVeulAYkAJJNnSq0CMNNHBAA7}]
	    set ckIndArr(sel_pressed) [image create photo -format gif -data {
R0lGODlhEAAQAIQQAH+22IC22Iq824u93Iy93OHu9uTw9+Xw9+jy+Ony+Orz+evz+ev0+e30+e31
+e31+v///////////////////////////////////////////////////////////////yH5BAEK
AB8ALAAAAAAQABAAAAVC4BcAZGmW36ma4+q+MFAcAikchWtAiSAkEINLgIA4FhDG4CVQQCCPJdMJ
JTCLDSfDutr1fkHXrAa45WLotDqQQrNDADs=}]
	}

	125 {
	    set ckIndArr(default) [image create photo -format gif -data {
R0lGODlhFAAUAOMJAJ6akZ+akZ2bkbazrLazreTi4OTj4eXk4ufm4///////////////////////
/////yH5BAEKAA8ALAAAAAAUABQAAARF8AlAq71UknK6/18xUEZinmiaGBSivifSwrAMuLRq4zm6
96kfMDYbmoRG5FAJZPacOShNWiMZTSzAgAPqdkSAB2ZsCTwiADs=}]
	    set ckIndArr(disabled) [image create photo -format gif -data {
R0lGODlhFAAUAOMJAJ6akZ+akZ2bka2qosvHwsvIw8vJw83KxNza1f//////////////////////
/////yH5BAEKAA8ALAAAAAAUABQAAARF8AlAq71UDmK6/x8xUAVinmiKFNShvufRwrAMuLRq4zm6
96kfMDYbmoRG5FAJZPacOShNWiMZTSzABsT1iAAPjNgSeEQAADs=}]
	    set ckIndArr(pressed) [image create photo -format gif -data {
R0lGODlhFAAUAOMKAJ6akZ+akZ2bkaWgmKWhl6WhmLKtpLKupLOvpLq1q///////////////////
/////yH5BAEKAA8ALAAAAAAUABQAAARG8AlAq71UDnO6/59BUEZinmiaGBSivifSwrAMuLRq4zm6
96kfMDYbmoRG5FAJZPacOShNWiMZTSwAgQPqdgwFwANDtgQeEQA7}]
	    set ckIndArr(alternate) [image create photo -format gif -data {
R0lGODlhFAAUAMIGAFiUvFiVu1iVvFiVvVmVvIKwzf///////yH5BAEKAAcALAAAAAAUABQAAAMs
eAPS/g8QBasV7Oqsu/9gKI5OYZ5oZ6xsq7Zwh84Fad943nEjcR+YECBwSAAAOw==}]
	    set ckIndArr(alt_disabled) [image create photo -format gif -data {
R0lGODlhFAAUAKECAKCgoLi4uP///////yH5BAEKAAMALAAAAAAUABQAAAIgHI6paOsPo5y02otX
2LxHAYbiJ5ZRhwbZyrbu6zbXUAAAOw==}]
	    set ckIndArr(alt_pressed) [image create photo -format gif -data {
R0lGODlhFAAUAMIFAH+113+22IC22IC22Z/I4v///////////yH5BAEKAAcALAAAAAAUABQAAAMn
eBLc/gEoSN+oOOvNu/8gIY5kVpxoaqZsRr4EKM90bVMCIA/H9R0JADs=}]
	    set ckIndArr(selected) [image create photo -format gif -data {
R0lGODlhFAAUAIQQAFiUvFiVu1iVvFiVvVmVvIezz4i0z4m00Iu10MTa5/L3+vr8/fv9/fv9/vz9
/vz+/v///////////////////////////////////////////////////////////////yH5BAEK
AB8ALAAAAAAUABQAAAVe4DcAQmmeJ0CIaOsK5CvHcm3fQqIYp6EkNQVkcSgdFhBFzYAkHoe8WgH5
aEAYCFzBCnFktQwI5PG1TbuOa/nFHB6ei+hLSDQilTKdXOAD4v6AJTSBBIEmHzB/AAEfIQA7}]
	    set ckIndArr(sel_disabled) [image create photo -format gif -data {
R0lGODlhFAAUAOMJAKCgoLu7u7y8vL29vd3d3fj4+Pz8/P39/f7+/v//////////////////////
/////yH5BAEKAA8ALAAAAAAUABQAAARG8IFJq6Xy6s27/+BGFEIlFERXJEYJCEZSdDAr1K0XxMiR
HANQwPcLCokIoy528AE9uFssx1lRazPOyDU5pULgsHhcyYQfEQA7}]
	    set ckIndArr(sel_pressed) [image create photo -format gif -data {
R0lGODlhFAAUAOMOAH+113+22IC22IC22aPL46TL46XL46bM5NLl8fX5/Pv9/vz9/vz+/v3+/v//
/////yH5BAEKAA8ALAAAAAAUABQAAART8IlAq70BSMzv6GAojiSFJIVVJEiYOIpBGYqThEUd03Aa
ErXGwrE4kAgMh6NhPA6XTRFwmSyKcjADT+HrvGKz2g106gZWrZJ6zQ4IAO3B47N+RAAAOw==}]
	}

	150 {
	    set ckIndArr(default) [image create photo -format gif -data {
R0lGODlhGAAYAOMMAJ2akJ6akZ+akZ6bkZ+bkZ+bksC+uMG+uMG+ucvJxM/NyNLQzP//////////
/////yH5BAEKAA8ALAAAAAAYABgAAARZ8AURqr34ggcKSmAojiESAALCrGzruscQKG9dKxVt7ys+
8zyfDnjLEW3CY/GndCWbrSe0Z5xSmVbpVAvlNr1K8FFMJAN9KivjcAocFvC4fB43BAicjF6/iQAA
Ow==}]
	    set ckIndArr(disabled) [image create photo -format gif -data {
R0lGODlhGAAYAOMNAJ2akJ6akZ+akZ6bkZ+bkZ+bkrSxqbSxqrWxqbu4sL26s7+8ttza1f//////
/////yH5BAEKAA8ALAAAAAAYABgAAARZ8AURqr34ggfKSWAojuERAMLBrGzrusgQKG9dKxVt7ys+
8zyfDnjLEW3CY/GndCWbrSe0Z5xSmVbpVAvlNr1K8FFMJAN9KisDcQogFvC4fB43BAicjF6/iQAA
Ow==}]
	    set ckIndArr(pressed) [image create photo -format gif -data {
R0lGODlhGAAYAOMLAJ2akJ6akZ+akZ6bkZ+bkaijm6ikmqumnayonq2pn7q1q///////////////
/////yH5BAEKAA8ALAAAAAAYABgAAARY8AURqr34ggdCOWAojmERAEKhrGzrusYQIG9dIxVt7ys+
8zyfDnjLEW3CY/GndCWbrSe0Z5xSmVbpVAvlNr1K8FFMJAN9KqvCcAoYEvC4fB5nEziZfH4TAQA7}]
	    set ckIndArr(alternate) [image create photo -format gif -data {
R0lGODlhGAAYAMIFAFiUu1eVvFiVvFmVvazK3v///////////yH5BAEKAAcALAAAAAAYABgAAAMt
eCHc/g8cAKsV9OrNu/9gKI5kyRBoqqJc4b6w28Y0t96Eqe987/+6DGkwIUkSADs=}]
	    set ckIndArr(alt_disabled) [image create photo -format gif -data {
R0lGODlhGAAYAMIEAJ+fn6CgoKGhodDQ0P///////////////yH5BAEKAAcALAAAAAAYABgAAAMt
eLHc/uCAR2uYNuvNu/9gKI7kMpxoem5E674tC8+bag9lru987+eYkUAyiiQAADs=}]
	    set ckIndArr(alt_pressed) [image create photo -format gif -data {
R0lGODlhGAAYAMIEAH+113+22IC22L/b7P///////////////yH5BAEKAAcALAAAAAAYABgAAAMt
eCHR/hCqSGtjNuvNu/9gKI5kMJxoem5E674tC8+bag9lru9875cYEmAyOiQAADs=}]
	    set ckIndArr(selected) [image create photo -format gif -data {
R0lGODlhGAAYAIQQAFiUu1eVvFiVvFmVvFmVvVmWvbDN37fR4rjS4rvU5LzU5L/W5b/X5sDX5vj6
/Pr8/f///////////////////////////////////////////////////////////////yH5BAEK
AB8ALAAAAAAYABgAAAVk4BcIZGmeJ/ABaOsK7CvPdG3fuGA8R2EWh4eB5oBAFj5BYWF00BDGY2EZ
RdAGiSgja2QkZ9io9nvlGhvksth7C4shbPVZMX5GkVSjdVaUkvJOMzs9P0FDOYiJiosoMYoEK4oq
IQA7}]
	    set ckIndArr(sel_disabled) [image create photo -format gif -data {
R0lGODlhGAAYAOMLAJ+fn6CgoKGhodLS0tbW1tjY2NnZ2dra2tvb2/v7+/z8/P//////////////
/////yH5BAEKAA8ALAAAAAAYABgAAARa8IVJq73ggct72F4ojmRpnsGgEEIlEMowJstytIFw1MlI
1DaBDkggFYAIAxI3OgJrCKbxGUU5odLmE1u6IrxZzq92G9aKIlpwYu6JVCwXTIaq2+94TF6guWci
ADs=}]
	    set ckIndArr(sel_pressed) [image create photo -format gif -data {
R0lGODlhGAAYAOMMAH+113+22IC22IC32MLc7Mjg7svh78vi787j8M/k8Pn8/fv9/v//////////
/////yH5BAEKAA8ALAAAAAAYABgAAARb8AURqr0Yy8x7pV4ojmRpnsRSDNdQLMSoMAzCBgNCK2NB
14Pcr0Ay/BCH421k/NFspyYtsSxJgVHnsxqSIrxcjm8rpBFFMyxOx+CJUqvWK3aq2+/4ECgP2OAf
EQA7}]
	}

	175 {
	    set ckIndArr(default) [image create photo -format gif -data {
R0lGODlhHAAcAOMMAJ6akZ+akZ6bkKGdlKGelbSxqrWyq7azrbi1ru7t7O7u7O/u7P//////////
/////yH5BAEKAA8ALAAAAAAcABwAAARq8D1Aq724ykkM+mAoigYBPAKxMGzrvjCjDAFQxHheUEfu
vwfeb8gIAnpEnxGZxC2buSc0Jp0ChdbrMatlcovYL3grHnu51W8aHVa32WTxOju3Gm/lXUohTtAm
AwUjg4MFAycSNRmLGAESEQA7}]
	    set ckIndArr(disabled) [image create photo -format gif -data {
R0lGODlhHAAcAOMOAJ6akZ+akZ6bkKCck6CdlKyooKypoKypoa2poa2qoq+ro9HPydLPydza1f//
/////yH5BAEKAA8ALAAAAAAcABwAAARq8D1Aq724ykmQ+mAoiggBPALBNGzrvnCzDAFgxHh+UEnu
vwneb9gIAnpEnxGZxC2buSc0Jp0ChdbrMatlcovYL3grHnu51W8aHVa32WTxOju3Gm/lXWohngUm
AwUjg4MFAycSNRmLGH8PEQA7}]
	    set ckIndArr(pressed) [image create photo -format gif -data {
R0lGODlhHAAcAOMOAJ6akZ+akZ6bkJ+bkZ+bkqSgl6Wgl6WgmKWhl6ahmLWwp7awprWxprq1q///
/////yH5BAEKAA8ALAAAAAAcABwAAARq8D1Aq724yklQ+mAoiggBPAKxNGzrvnDDDAFQxHhuUEfu
vwfeb9gIAnpEnxGZxC2buSc0Jp0ChdbrMatlcovYL3grHnu51W8aHVa32WTxOju3Gm/lXYohVtAm
AwUjg4MFAycSNRmLGAESEQA7}]
	    set ckIndArr(alternate) [image create photo -format gif -data {
R0lGODlhHAAcAMIDAFiUvFiVvNbl7v///////////////////yH5BAEKAAQALAAAAAAcABwAAAM7
SBQQ/jDGppa8GNrMJWhdKI5kaZ5oqq5sGwpwLMvjYN84Xue8Pc7AmGtILBqPyOQDpEQBNqzKJ/VR
JAAAOw==}]
	    set ckIndArr(alt_disabled) [image create photo -format gif -data {
R0lGODlhHAAcAKECAKCgoOjo6P///////yH5BAEKAAMALAAAAAAcABwAAAIw3ICpy2nXogRw2ouz
3rz7D4biSC7BiaZpJrTu+7Lw3GbqjZb6zvf+DwxyKqLHyFAAADs=}]
	    set ckIndArr(alt_pressed) [image create photo -format gif -data {
R0lGODlhHAAcAMIEAH+12H+22IC22N/t9f///////////////yH5BAEKAAcALAAAAAAcABwAAAM6
eCfR/jAGoY68uNnMIehgw4RkaZ5oqq5sqw5wLMshYd84Xue8Hc7AmGtILBqPyORx5AJsWpWPynlI
AAA7}]
	    set ckIndArr(selected) [image create photo -format gif -data {
R0lGODlhHAAcAIQSAFiUvFiVvGqhw2uhxG2ixJvA19rn8Nro8Nvo8efw9ujw9ury9+vy9+3z+O30
+O70+PX5+/b5+////////////////////////////////////////////////////////yH5BAEK
AB8ALAAAAAAcABwAAAWB4PcFQGCeaJqW4qi+MOrGtAqUda7vfO//gULkMFAJDJHCDiKRKIqngaIJ
2SGaTqgUe9gJElgGYdtUCHhfbIMRJvjS2KYYKFjEHW7ggI195H1kcXM9gQ52cn85gWKBZlZYTyaB
XTpMWShkVTpCREZISkChoqMwOKSnKzOkLTehNyIhADs=}]
	    set ckIndArr(sel_disabled) [image create photo -format gif -data {
R0lGODlhHAAcAOMNAKCgoKqqqqurq6ysrMbGxurq6uvr6/Ly8vPz8/T09PX19fn5+fr6+v//////
/////yH5BAEKAA8ALAAAAAAcABwAAARw8D1Aq724ypm7B9wnjmRpnmiqEkwhYEHBEOXSNMdbCce9
lIYbTscTFkqB3g0xKN4OAVNSmEgImaipcDlQBRBbRVclAAvFZOUWe3I2FFauyc10Q4HCHMV9JNmG
Fk4/JCwuMDI0KoqLjI2OKCGNG44SEQA7}]
	    set ckIndArr(sel_pressed) [image create photo -format gif -data {
R0lGODlhHAAcAIQRAH+12H+22IC22I2+3I6+3I+/3bPT6OLv9uPv9uPv9+31+e31+u/2+vD2+vH3
+/f7/fj7/f///////////////////////////////////////////////////////////yH5BAEK
AB8ALAAAAAAcABwAAAWB4PcJQWmeaBoI4qe+cOnGNArUeEnmfO//MQMEQUgNDhBD7hGJLIomwqL5
yCWaTqgUi8gNFFhGYdtcDHhfrKMRLvjS2KYYOGDEHW4gwa7O+8hxcz2ADnwRgjiAYoBmVlhPJYBd
OExZJ2RVOEJERkhKQKChoqM1O6QBADOkLTehqR8hADs=}]
	}

	200 {
	    set ckIndArr(default) [image create photo -format gif -data {
R0lGODlhIAAgAOMLAJ2akp6akZ+akZ6bkZ6bkrm3sLq3sLu4sfT08vT08/X08///////////////
/////yH5BAEKAA8ALAAAAAAgACAAAARs8D0Rqr04YyCf/mA2BYeynGiqrmhiBESVsHR9Ipets/nu
n73fLii0EYu0I3KlXKaaTqAlmpxSmdbrM6uVVrrbL9gbGJPNC2hU7WQv3Uh4US6k/+y+ywyMCwAC
BntXCAUVHiGIGgMdMYmOARIRADs=}]
	    set ckIndArr(disabled) [image create photo -format gif -data {
R0lGODlhIAAgAOMMAJ2akp6akZ+akZ6bkZ6bkrCspK+tpLGtpdXTzdXTztbTzdza1f//////////
/////yH5BAEKAA8ALAAAAAAgACAAAARs8D0Rqr04YyCf/mA2BYeynGiqrmhSBESVsHR9Ipets/nu
n73fLii0EYu0I3KlXKaaTqAlmpxSmdbrM6uVVrrbL9gbGJPNC2hU7WQv3Uh4US6k/+y+ywyMCwAC
BXtXCAYVHiGIGgMdMYmOARIRADs=}]
	    set ckIndArr(pressed) [image create photo -format gif -data {
R0lGODlhIAAgAOMJAJ2akp6akZ+akZ6bkZ6bkqaimKeimLeyqLq1q///////////////////////
/////yH5BAEKAA8ALAAAAAAgACAAAARr8D0Rqr04YyCf/mA2BcaBnGiqruhRBERlsnSNHJets/nu
n73fLii0EYu0I3KlXKaaTqAlmpxSmdbrM6uVVrrbL9gbGJPNCGhU7WQv3Uh4US6k/+y+y6yLCwAC
BXtULhUeIYcaAx0xiI0BEhEAOw==}]
	    set ckIndArr(alternate) [image create photo -format gif -data {
R0lGODlhIAAgAMIGAFeUvFiUvFeVvFiVvFiVvVmVvP///////yH5BAEKAAcALAAAAAAgACAAAAM/
eAc1/jDKV4Q6YeodF/9b0YBkaZ5oqq5s675wLM+pYd94bpx6f/O+HjCYoxmPyKRyyWweRzSBkXAw
XqAu6iEBADs=}]
	    set ckIndArr(alt_disabled) [image create photo -format gif -data {
R0lGODlhIAAgAKECAKCgoKGhof///////yH5BAEKAAMALAAAAAAgACAAAAI03ICpy23Xolxw2hiu
3rz7D4biSJbmiaahwLbuK3Tw3Mr0bN+vyvf+DwwKh8Tip4J6ZE6GAgA7}]
	    set ckIndArr(alt_pressed) [image create photo -format gif -data {
R0lGODlhIAAgAMIDAH+22IC22H+32P///////////////////yH5BAEKAAQALAAAAAAgACAAAAM+
SBQB/jDK1xSZOMewtM/MJ45kaZ5oqq5s675wjA50bd9Die+1zu++301GLBqPyKRyWWzInDJBB8ZR
QFlSQgIAOw==}]
	    set ckIndArr(selected) [image create photo -format gif -data {
R0lGODlhIAAgAIQSAFeUvFiUvFeVvFiVvFiVvVmVvIq10I230Y630o+40pC40pG505S71O30+O70
+Pz9/v3+/v7+/v///////////////////////////////////////////////////////yH5BAEK
AB8ALAAAAAAgACAAAAWa4PcBxWCeaKqehSB+wSrP6Ujfc1HifO//wKBwSBwYHA6E7IA0/BoSyWOh
WjyijWdUSj1Zt1kf4hqdmr7lAzBBlkAYivZbyN5GINv5sL6N6okJeHYMRSYKglERhEVxfX6LQo2J
iH8/km4MfJhAY1tmA2hSaj5QZV1nbWE9pZ8oaKo8R0lLTYW2t7i5Nzu6AwK9AwQfwC+8hcIfIQA7}]
	    set ckIndArr(sel_disabled) [image create photo -format gif -data {
R0lGODlhIAAgAOMJAKCgoKGhoby8vL6+vr+/v8DAwMLCwvX19f7+/v//////////////////////
/////yH5BAEKAA8ALAAAAAAgACAAAAR58D1Aq704y5m7v9wndsFonmiqrmzrVsJxEN0gC+mRJEiB
FYjdIbfj+SrA4hBFCO56lORzoGoWEQYpz8CyPp1bl7cYfo3LLy26pX5y2WBE/K3SYsfYavxop6J0
T0dRYEsngFAXUoUmMTM1Ny+RkpOUlZaTIZUbJZQSEQA7}]
	    set ckIndArr(sel_pressed) [image create photo -format gif -data {
R0lGODlhIAAgAIQPAH+22IC22H+32KXM5KjN5KnO5arO5avP5a3Q5vH3+/L4+/3+/v3+//7+/v7+
/////////////////////////////////////////////////////////////////////yH5BAEK
ABAALAAAAAAgACAAAAWXIAQFAWCeaKqepQitcJwGo2zH5K3vfO//wKDQNFAoCjCCcdBLPB6Lg+qw
eCaaT6j0RM1eeYXqM2rqjgm+cJaBMIgfbKD66XCsEcJ5Fo4fFhp7Dn1DBnZZgkMAbntPcUGLdICN
gz2QfHqOYG9kAGZQaDxOY1tlb187opwoZqc6RUdJS4mztLW2NiW3ALm6AjW2NCK8ib4QIQA7}]
	}
    }
}

#------------------------------------------------------------------------------
# themepatch::clam::createRadiobtnIndImgs_gif
#
# Creates the GIF images used by the style element Radiobutton.image_ind of the
# clam theme.
#------------------------------------------------------------------------------
proc themepatch::clam::createRadiobtnIndImgs_gif pct {
    variable rbIndArr
    switch $pct {
	100 {
	    set rbIndArr(default) [image create photo -format gif -data {
R0lGODlhEAAQAIQbAJ6ZkZ+ZkZ2akZ6akJ6akZ6akp+akZ2bkZ6bkJ6bkaaimqajm6ejm726tL67
tb68ts/NydDOyuzr6ezs6u3s6u3s6/n5+fr5+fr6+fr6+vv7+v///////////////////yH5BAEK
AB8ALAAAAAAQABAAAAVm4CeKSEEQ5qh+yRJRmjZFTLASD7btPOYMI8ODR+Q5CqKFrki8KD6ICJMJ
OVWmxQmAkMESMaeld3M5UcY7LUGKhgg+DPHU8vwEHOMGYnRwXJgWDQQrBQoQEhkZEhAKeysiBFuR
byohADs=}]
	    set rbIndArr(disabled) [image create photo -format gif -data {
R0lGODlhEAAQAIQcAJ6ZkZ+ZkZ2akZ6akJ6akZ6akp+akZ2bkZ6bkJ6bkaOfl6Ogl6Sgl7KuprKv
p7KwqL26tL67tNDNx9DOyNDOydHOyNjW0dnW0dnX0dnX0trY0tza1f///////////////yH5BAEK
AB8ALAAAAAAQABAAAAVm4CeKSEEQ5qh+yRJVmjZFTLASD7btPOYMI8ODR+Q5CqKFrki8KD6ICJMJ
OVGmxQmAkMESMaeld3M5VcY7LUGKhgg+DPHU8vwEHOMGYnRwXJgWDQQrBQoQEhkZEhAKeysiBFuR
byohADs=}]
	    set rbIndArr(pressed) [image create photo -format gif -data {
R0lGODlhEAAQAIQcAJ6ZkZ+ZkZ2akZ6akJ6akZ6akp+akZ2bkZ6bkJ6bkaCck6Gck6CdlKGdlKei
maejmaejmqynnqyon62on7SwprWwpbWwprizqrmzqrm0qbm0qrq1q////////////////yH5BAEK
AB8ALAAAAAAQABAAAAVm4CeKSEEQ5qh+CSNZmkZNTbASULbtfPYMIwOER+Q9CiKGrkjEKD4ICZMZ
OVmmRQqAcMESM6eld4OxjndawuS8kQg+DfH0shAFHmMHYnR4YJgXDgQrBQoRFRcXFRILeysiBFuR
byohADs=}]
	    set rbIndArr(alternate) [image create photo -format gif -data {
R0lGODlhEAAQAOMHAFiUvFmUvFiVu1iVvFiVvVmVvFiWvf//////////////////////////////
/////yH5BAEKAAgALAAAAAAQABAAAAQ7EEk5ai0zI2P7AFrheaAkjKNAoSPCokTwekR33PhtFWKV
5x3ZzELoDQcB13EgASwntRcmc2JpoNGYJgIAOw==}]
	    set rbIndArr(alt_disabled) [image create photo -format gif -data {
R0lGODlhEAAQAMIDAJ+fn6CgoKGhof///////////////////yH5BAEKAAQALAAAAAAQABAAAAMm
SKrRDSsSR52sWCzMA+vVBI5kNZzo2aVp2QFuAMVfuZEXKN0OFCUAOw==}]
	    set rbIndArr(alt_pressed) [image create photo -format gif -data {
R0lGODlhEAAQAOMJAH+113+12H+213+22H+22YC22IC22X+314C32P//////////////////////
/////yH5BAEKAA8ALAAAAAAQABAAAAQ+8EkZTClmzP2G/15xcAhoetOpEpJ6Fk/gnoAw30mu59/1
7TuQ7UZ0jQpF2ONQDEyQMwCHAAUVnBwJADTaRAAAOw==}]
	    set rbIndArr(selected) [image create photo -format gif -data {
R0lGODlhEAAQAIQPAFiUvFmUvFiVu1iVvFiVvVmVvFiWvVyXvrDN37HO4LLO4O30+O70+O/1+O/1
+f///////////////////////////////////////////////////////////////////yH5BAEK
ABAALAAAAAAQABAAAAVQICSKQ1kWYwoZZjsAauG6sCjMs0DiM+QeigYjcWgRAq3EY/lIGF0N5sPR
KshMDOnChTQpmQjjtXRIMIZFU8DHc4kA7daIEEelbjzVnD44qkIAOw==}]
	    set rbIndArr(sel_disabled) [image create photo -format gif -data {
R0lGODlhEAAQAOMIAJ+fn6CgoKGhoaKiotLS0tPT0/X19fb29v//////////////////////////
/////yH5BAEKAA8ALAAAAAAQABAAAAQ88EkZagUzP8ut7qAwgWRAld3GDcVhFAMaFEiNFPJhI4ds
7AYZzUboAFYFwytmwcg4p6cpivpUNdQAJhMBADs=}]
	    set rbIndArr(sel_pressed) [image create photo -format gif -data {
R0lGODlhEAAQAIQPAH+113+12H+213+22H+22YC22IC22X+314C32IK42cPd7cTd7fH3+/L4+/P4
+////////////////////////////////////////////////////////////////////yH5BAEK
ABAALAAAAAAQABAAAAVTICSKgVEUxjCu0OC+bnGwCGy7460Ton4XkAAssWg0FAkYQABTPJ4Phc/V
gD4csBOsCmXYmC8nVDpNKIxI2KwwfQEhh7YrMGJPASyCPUtniQBqLCEAOw==}]
	}

	125 {
	    set rbIndArr(default) [image create photo -format gif -data {
R0lGODlhFAAUAKUoAJ6ZkZ+ZkJ2akJ2akZ6akJ6akZ6akp+akZ6bkqCck6CclKOfl6Ogl6Sgl6Sg
mKShmL+8tr+8t7+9t8C9t8G+uMvIw8vJxMzKxczKxtfW0tjW09jX0+Hg3eLg3uLh3uLh3+Xk4eXk
4ubk4ubl4+fm5Pn4+Pn5+Pn5+f//////////////////////////////////////////////////
/////////////////////////////////////////////yH5BAEKAD8ALAAAAAAUABQAAAaWwJ9w
+CMACgUAgcgcAhqTjcezkTAKTSEigTmhvuDTJYElIh4jsBo8cpSFifR6TlIMC5i5HmU5CBtee2sm
DD8DFIJ6EgcFG4lzGUcfj2sdSB6UahwFAxqZYBkFBBOfXxAAPwwmnyULQgYXnxWocCKUIQlEBQ62
giAOAkwBCRarayUVZFk/BgwRGh0dGRALBstEjEgFfk1BADs=}]
	    set rbIndArr(disabled) [image create photo -format gif -data {
R0lGODlhFAAUAKUoAJ6ZkZ+ZkJ2akJ2akZ6akJ6akZ6akp+akZ6bkp+bkp+bk6GdlaGelaKelaKf
lbOvqbOwqLOwqbSwqLWxqbu3sLu4sLu4sbu4sry5scLAucPAusPBusnGwMrGwcnHwcvJwsvJw8zJ
w8zJxMzKxM3KxNjV0djW0dza1f//////////////////////////////////////////////////
/////////////////////////////////////////////yH5BAEKAD8ALAAAAAAUABQAAAaWwJ9w
+CMACgUAgcgcAhqSjceziTAKTSEicTGdvmCTJYElIhwisBo8apSFidF6fiIphoULnV45CBtee2sm
DD8DE4J0EQcFG4lzGUcej2sdSJOUYBwFAxqZYBkFBBKfXxAAPwyBlCULQgYYnxSocCGUIAlEBQ22
gh8NAkwBCRWrYCUUZFk/BgwPGh0dGRALBstEjEgFfk1BADs=}]
	    set rbIndArr(pressed) [image create photo -format gif -data {
R0lGODlhFAAUAKUmAJ6ZkZ+ZkJ2akJ2akZ6akJ6akZ6akp+akZ6bkp+bkZ+bkp+bk6Cbk5+ckqCc
kqejmqijmqikmqumnKumnaunnaunnqynna6qoK+qoa+robKso7Gto7GtpLKto7OtpLKupLOupLOu
pbizqrmzqri0qbq1q///////////////////////////////////////////////////////////
/////////////////////////////////////////////yH5BAEKAD8ALAAAAAAUABQAAAaXwJ9w
+CMACgUAgcgcAhyQTKeTeTQKTSEiURGVvmARRYElIhogsBocYpSFidB6XgIZhoUKnT45CB1ee2sk
DT8DEYJ0DwcFGYlzF0ccj2saSB2UahsFAxiZYBcFBBCfXxAAPw0knyMLQgYWnxKoQgoelB8KRAUM
t4IgDAJMAQoTq2sjEmRZPwYNDxgaGhcQC3fMQ4xIBX5NQQA7}]
	    set rbIndArr(alternate) [image create photo -format gif -data {
R0lGODlhFAAUAOMJAFiUu1eVvFiVu1iVvFiVvVmVvFiWvFmWvIKwzf//////////////////////
/////yH5BAEKAA8ALAAAAAAUABQAAARQ8Mn5RBmjCMon/qDRSQFofhtVnmxAsfAwGTEs1faBsxeI
/MAgqPdJGI/IGnKZqAWfCBBBsGM9qiYJFYvxcCnbHYCjw7lGYVNqNCkQMITCKAIAOw==}]
	    set rbIndArr(alt_disabled) [image create photo -format gif -data {
R0lGODlhFAAUAMIEAJ+fn6CgoKGhobi4uP///////////////yH5BAEKAAcALAAAAAAUABQAAAM7
eLoXEi6wuaC9kjbM4exgpoRdRZbbiaUqObxwfD0XYd84ie+EG/8tFSs4ClpMRKQKMKGdNMMVVOmh
JAAAOw==}]
	    set rbIndArr(alt_pressed) [image create photo -format gif -data {
R0lGODlhFAAUAOMIAH+12H+12YC12H+213+22H+22YC22J/I4v//////////////////////////
/////yH5BAEKAA8ALAAAAAAUABQAAARM8Mn5grkm0D2J/5/BSQVoglt5rgTFspPxroI0w8PNyt/h
/0AQ74MoGo+zoxIxAzoPIEBAdwI8qCYS9tPZurwUAHX0UJ0KZJeYIB5FAAA7}]
	    set rbIndArr(selected) [image create photo -format gif -data {
R0lGODlhFAAUAIQQAFiUu1eVvFiVu1iVvFiVvVmVvFiWvFmWvFmWvZi+1pm+1pm/1pq/18ve6szf
683f6////////////////////////////////////////////////////////////////yH5BAEK
AB8ALAAAAAAUABQAAAVu4CeOn1AMQyGQ7Ii+sNGKAWy/K1nffEDywMHIEASKbgjGw7E42T4HG+IB
qUIeCJsTxrBaFdob1QtxFFFjb+M8WJAhCRtBIE2Xt6/PraBoNBR4KCJ0bDAuhYIjhGwALFFnPjOL
NjkzIwUEKAQFMyEAOw==}]
	    set rbIndArr(sel_disabled) [image create photo -format gif -data {
R0lGODlhFAAUAOMHAJ+fn6CgoKGhocXFxcbGxuLi4uPj4///////////////////////////////
/////yH5BAEKAAgALAAAAAAUABQAAARPEMmJggg20D2x/xpXgSS2lWgopWXHtuMnEEUxtKRgHPxR
XC9Cr3eTkQpDXuEVQCaXr0HyUGQJnEocaVCrflZMkCusijEBG+BLZCaxKW5OBAA7}]
	    set rbIndArr(sel_pressed) [image create photo -format gif -data {
R0lGODlhFAAUAIQPAH+12H+12YC12H+213+22H+22YC22IC32LDS57HS57HT57LT59fo89jp89np
8////////////////////////////////////////////////////////////////////yH5BAEK
ABAALAAAAAAUABQAAAVnICSOUGCcRkCuI+G+r8GKBWzDa33vBMnzI8NvJxDdDotGQ7GDDGwHx2P6
aBxuQtiCSk3YsrAGd9oYusRjhpmgGD8QNkAAiibfAJBdgsHw3mhrNi2BLj6EPSQAgTMQOjcFjD6K
BIozIQA7}]
	}

	150 {
	    set rbIndArr(default) [image create photo -format gif -data {
R0lGODlhGAAYAKUnAJ6ZkZ2akZ6akJ6akZ6akp+akZ2bkZ6bkJ6bkZ6bkqGdlKGela6qo66ro66r
pK+rpLGup7OvqLOwqbSxqr67tb+8tr+9t8C9t8C+uMG+uMnHwsrIw8vIw/Hw7/Hx7/Lx8PLy8PLy
8fPy8fPz8vT08vz7+/z8/P//////////////////////////////////////////////////////
/////////////////////////////////////////////yH5BAEKAD8ALAAAAAAYABgAAAauwJ9w
OCQABgMAgchsHgePjEaTcSATTeZgwfmcvuDPRjHICgcTEngNHknKzUHFxK6fTBT4EE23101vQwAL
an52IgoIZxyGhhtwAyCNfh5lBg+Thg0DBBmZfhdHG592jwOjpGwaAwEYqWwWAwYOr2sMZQMdtSeV
Z6ivq0IFCiOvIQoCexAlpIB6ZxR9jXjPexIijSER1UQDChoedR0aZGZDB0gMGFMYt6zmTQJI8+ZB
ADs=}]
	    set rbIndArr(disabled) [image create photo -format gif -data {
R0lGODlhGAAYAKUoAJ6ZkZ2akZ6akJ6akZ6akp+akZ2bkZ6bkJ6bkZ6bkqCck6CdlKiknKilnKil
namlnaqnn6ynn6uooKypoLKvp7Ovp7OwqLOwqbSwqLSxqbWxqbm2r7m3r7q3sLu3sNPQy9PRy9TR
zNTSzNTSzdXTzdrX0trY09za1f//////////////////////////////////////////////////
/////////////////////////////////////////////yH5BAEKAD8ALAAAAAAYABgAAAavwJ9w
OCQABgMAgchsHgcPzWajcSATTeZg4QmdvuBQRzHICgcTEngNHknKzYHFxK6fTBT4EE23101vQwAL
an52IgoIZx6Ghh1wAyKNfiBlBg+Thg0DBBqZfhhHHZ92jwOjpGwbAwEZqWwXAwYOr2sMZQMftSeV
Z6ivHHAFCiOviAJ7ECWkgHpnFH2NJhXOexKShiIR1UQDChsgdR8cZGZDB0gMGRwcGbes5k0CSPTm
QQA7}]
	    set rbIndArr(pressed) [image create photo -format gif -data {
R0lGODlhGAAYAKUlAJ6ZkZ2akZ6akJ6akZ6akp+akZ2bkZ6bkJ6bkZ6bkp+bkZ+bkqOelaOelqKf
lqOflaOflqSflqSgl6ejmaejmqijmqikmqqmnKqmnaumnKumnaunnbaxp7axqLexqLayp7ayqLey
qLm0qrm0q7q1q///////////////////////////////////////////////////////////////
/////////////////////////////////////////////yH5BAEKAD8ALAAAAAAYABgAAAauwJ9w
OCQABgMAgchsHgcNy+VicSATTeZgkemQvuDORjHICgeSEHgNBknKzUFFxK6TRhP4EE2310dvQwAL
an52HgsIZxmGhhtwAx+NfhxlBg2Thg8DBBaZfhVHGp92jwMbpHUXAwGeqWsUAwYOr2sMZQMctSSV
Z6O1GHAFCiCvIAsCexB9mYB6ZxMjzRXPexIejSAR1URbF7psHBgL3EwHSAwWGBgWt6xmWQJI8/BB
ADs=}]
	    set rbIndArr(alternate) [image create photo -format gif -data {
R0lGODlhGAAYAOMLAFiUvFmUu1eVu1eVvFiVu1iVvFiVvVmVvFeWvFiWu6zK3v//////////////
/////yH5BAEKAA8ALAAAAAAYABgAAARa8Mk50SnlIMo7wGCYdZxoYgcpnWxBtm0Js6kUzO324PDK
s7sfS0AQKY7I5FF0ES2e0OgTJ60ucMqsQmQQDoPekC8MGpMHk2ZY5n0JVQ91Dw5mJeilbsEggEcA
ADs=}]
	    set rbIndArr(alt_disabled) [image create photo -format gif -data {
R0lGODlhGAAYAMIEAJ+fn6CgoKGhodDQ0P///////////////yH5BAEKAAcALAAAAAAYABgAAANL
eLoLEkEARiu8GIpKs7+c8o0BR5LdiYrqybbjC3vHTD7ZoO+8nuEYgnBIFLaKSEKrxxzYZpsnrSbF
yKSTqy31NG1Ds9BCtRFzNeIEADs=}]
	    set rbIndArr(alt_pressed) [image create photo -format gif -data {
R0lGODlhGAAYAMIGAH+12H+22H+22YC22H+32L/b7P///////yH5BAEKAAcALAAAAAAYABgAAANZ
eLo7/ixKMYK9d8iIO9bb4Y3XRp4Bh5KguJ6EUr0jSJ8HcZ9CV/zA4K8zwxiOyOTxpWwaXsJooQPQ
7UauK0am3R4AXQugEY4Ub6Zd6HDGrb+o2JsxAAfA6wQAOw==}]
	    set rbIndArr(selected) [image create photo -format gif -data {
R0lGODlhGAAYAIQWAFiUvFmUu1eVu1eVvFiVu1iVvFiVvVmVvFeWvFiWu2KbwGKcwHuryn2sy6HE
2aLE2qPE2qPF2s3f687g68/g7M/h7P///////////////////////////////////////yH5BAEK
AB8ALAAAAAAYABgAAAV94CeOI3IUxYGQbAugcJy2rGyjBy3efEH3vRqQlxMFhr3Vp9d4PBrBpW1R
sVgtFMVNaqterZObgGBrfL8M28kWOV8hSFTbbXnEC2Z6WmbgUdwSYlwxChNfElo2OzwMDw57W4N3
MAMja5MoQpg/kzofl0Ceiz0JojV9BQYCniEAOw==}]
	    set rbIndArr(sel_disabled) [image create photo -format gif -data {
R0lGODlhGAAYAOMKAJ+fn6CgoKGhoaamprS0tLW1tcrKysvLy+Pj4+Tk5P//////////////////
/////yH5BAEKAA8ALAAAAAAYABgAAARm8Mk5gQhBAMo7/iAmdFxofqR0rgHJsuULq/JLn4VhFPM5
JIqgAjE4PVZAYRBxupgKSiXB5AwdokJDDXPFKrRbqHe6DSCwTOrRNDgLicb1iaAjx8unzQ2PifFd
eClyMoJ7TYV+IoIRADs=}]
	    set rbIndArr(sel_pressed) [image create photo -format gif -data {
R0lGODlhGAAYAIQQAH+12H+22H+22YC22H+32Ie62oe72prF4JvG4bfW6bjW6bjX6bnX6tnp89nq
9Nrq9P///////////////////////////////////////////////////////////////yH5BAEK
AB8ALAAAAAAYABgAAAV84CeO42CeZKoKQ+C+76CmcA3L82fv78z/ARqQh9MNfwRRa4dQKBBE0c7w
gFghj8LuQ9hVr1YHT2BDgMEH27LGOF8XR1fbDVHEA2Z6ugbo2r5gDTxGNQUOgVo2SjwHCgl7Wx8A
dzYAJZQwKWt3PpQ5H5s/nyKTSKOapZOfIQA7}]
	}

	175 {
	    set rbIndArr(default) [image create photo -format gif -data {
R0lGODlhHAAcAKUvAJ2ZkZ6ZkZ2akJ2akZ6akJ6akZ6akp+akZ6bkZ6bkp+bkZ+bkqCck6CclKGd
lKGelaekm6iknKilnbGup7Kvp7+8tr+8t8C9t8C+uMG+ucG/ucK/usLAutnX09nX1NrY1drZ1dvZ
1tzb2N3b2N/e2+Df3OHf3OHg3ebl4+fm4+fm5PLx8PLy8fv7+vv7+///////////////////////
/////////////////////////////////////////////yH5BAEKAD8ALAAAAAAcABwAAAbZwJ9w
SFQYAoWkgUBsOoeDJCMymUQYycDzeSg0OCbXa/xymTaN5HZIKGBY5DiZdSkg1gUHSM4njx4FT3kq
fYUvKQ53RF0ehoYhBQlEbo6OFoFCAw0rlYYsDpgFHJ2OGoFtJ6SGJQUABgxiqn0tC20SsoYRSBS4
hRNJE719vwMRwnwQUrHHL7QEbSbMYyShG9IvGZgBm8wsaUMFF8wVmEJJHcKQAk15KbgoDYrsDR+q
IqBrbRachivk8lsSeNFQokWcFiUypFm3ZlKSBVSsLEhSrmETAG0oMmkYBAA7}]
	    set rbIndArr(disabled) [image create photo -format gif -data {
R0lGODlhHAAcAKUuAJ2ZkZ6ZkZ2akJ2akZ6akJ6akZ6akp+akZ6bkZ6bkp+bkZ+bkp+bk6Cck6Cd
lKSgmKWgmKShl6Shmaqnn6unnrOvqbOwqLSwqLSxqbSxqrWxq7SyqrWyqsTBusTBu8TCu8XCvMXD
vcbDvcfFv8jGwMnGv8nGwMzJxM3KxNTRzNTSzNnX09rY0tza1f//////////////////////////
/////////////////////////////////////////////yH5BAEKAD8ALAAAAAAcABwAAAbYwJ9w
SFQYAoWkgUBsOoeD5OIxmTwWycDzeSgwOKVVa9xalTSM5HZIKGBU5DhZdSkg1oXGR84nixwFT3ko
fYUtKA13RF0dhoYgBQlEbo6OFYFCAwwplYYqDZgFHJ2OG4FtJqSGJAUABgtiqn0sC20SsoYQSBS4
hRNJE719vwMPwnwRUrHHLbQEbSXMYyOhGtItGZgBm8wqaUMFF8wWmEJJjb2QAk2DuCcMiuwMHqoh
oGttFZyGKeTxWwm8bCDBIg4LEhnSrFszSQqEKhCwqGH4BECbJAWYMAwCADs=}]
	    set rbIndArr(pressed) [image create photo -format gif -data {
R0lGODlhHAAcAKUoAJ2ZkZ6ZkZ2akJ2akZ6akJ6akZ6akp+akZ6bkZ6bkp+bkZ+bkqGck6Gdk6Gd
lKOflqOfl6Sglqejmqijmqijm6ikmqikm6mkm6+qoK+qobCqoa+robCrobCrorCsorKsorGto7Ou
pLOupbOvpLaxqLayqLm0qrq1q///////////////////////////////////////////////////
/////////////////////////////////////////////yH5BAEKAD8ALAAAAAAcABwAAAbWwJ9w
SFQYAoWkgUBsOoeD5ILxeDAWycDzeSgYLB/TaXwyfS6G5HZIKFRK5Di5NCkg1oXFRs4nd7BPeSJ9
hCcjC3dEXRmFhRwFCURujY0SBVAGJJSFJYA/BRabjRWXbSCihSAFAAYLYqh9JgVtDrCFDkgRtoQP
SQ+7fRAFAwzAfA1Sr8Zls20fy2Mel58X0CcU0wGZyyVpQwUTy3WSBRjAjwJNeSO2IQaJ6gYaqB0K
009tEpqFJHXwWwm8VAChrAwICmnSrSGXxEEVB0nULHwCoE1EJguDAAA7}]
	    set rbIndArr(alternate) [image create photo -format gif -data {
R0lGODlhHAAcAOMKAFiUvFmUvFiVu1iVvFiVvVmVvFiWu1iWvFiWvdbl7v//////////////////
/////yH5BAEKAA8ALAAAAAAcABwAAARx8MlJxyljkBOo/1MmjlkBggCpjme4vlkLzwBIzLiX4rnL
z74fjCAR8h4II05wUNJWiah0OlVhVIqsdrtdXUfcsFZILUtVhK9TBQisX8W3SqKWD4Lyin1g8Nzy
HztKNSdrLXE/fYcTfzCLIAIAfwSELREAOw==}]
	    set rbIndArr(alt_disabled) [image create photo -format gif -data {
R0lGODlhHAAcAMIEAJ+fn6CgoKGhoejo6P///////////////yH5BAEKAAcALAAAAAAcABwAAANX
eLos4SEGRuuSGAtrs8/c9Y1RSJ5ThaLUujIuq8TvQbM3CuQnlA3AoFDo8WEIyKRSGVs6k7GhNMi7
GauYGRZ0uGJF25Q23Np2qqZcaOxaw2RuCsC4WScAADs=}]
	    set rbIndArr(alt_pressed) [image create photo -format gif -data {
R0lGODlhHAAcAOMIAH+113+12H+213+22H+22YC22IC32N/t9f//////////////////////////
/////yH5BAEKAA8ALAAAAAAcABwAAARu8MlJxyg4DEG7n1YoWsX3aWNqESaovldbwPQ303BJoXhe
9TgXkBaQDHsP3vEFWPZuooN0SqWmoCKEdsvlqrCWrng7rJqnqYDBSROwX8Z3SgJ+6x5yEYWQj1Hq
Q3c/bC1OgjaBLR1KV4omTSgajhEAOw==}]
	    set rbIndArr(selected) [image create photo -format gif -data {
R0lGODlhHAAcAIQbAFiUvFmUvFiVu1iVvFiVvVmVvFiWu1iWvFiWvV+Zv1+av2Gav2GbwGKbwHip
yXmqyXqrynuryrnT47rT47vU5LzU5ODr8+Hs8+Ls8/j7/Pn7/f///////////////////yH5BAEK
AB8ALAAAAAAcABwAAAWk4CeO5HAUw0AcAem+YyrPaQHDAK3Pd7z/qR5wCIARhkhXDpn0MYfOnwIC
UQwJImCjotlsNBQG8IP4NTDe9OYi3gkOv4paPfktdYru3JtJ7FA7EXtqDz+ANA+DaQ5PMnmKfTsE
hzQUihJ2AT8MF3sWCz9ZmxN6GRKgoR+UOgkPD35Qoo2psrM0Bi5Htjwvd7NFN7sDPbVIuMQjumPI
LwIAugTAPSEAOw==}]
	    set rbIndArr(sel_disabled) [image create photo -format gif -data {
R0lGODlhHAAcAIQQAJ+fn6CgoKGhoaSkpKWlpaamprKysrOzs7S0tNfX19jY2NnZ2e3t7e7u7vv7
+/z8/P///////////////////////////////////////////////////////////////yH5BAEK
AB8ALAAAAAAcABwAAAWL4CeOpBCYQRqQbDuqMCy4bmzH9Hvvac7/qxYQyBoOSUaiCDg4HAZKXmHx
gEAeCgLvI21Yv5CG9gbgLcBgxQ5lG1TRVgfUxo4h4OBDMnXAfw17AW5+coEBCn4JazwEXmgMYzZL
OwQKbw4JkZIfdW1Oc1uThjg6ozBFpj1Cpj6GOaJGr0hKsiwAdTOvIQA7}]
	    set rbIndArr(sel_pressed) [image create photo -format gif -data {
R0lGODlhHAAcAIQXAH+113+12H+213+22H+22YC22IC32IS52oW52oa62oe62pjE35jE4JnF4JrF
4Mng78rh78vh78vi7+fy+Ojy+Pr8/fr8/v///////////////////////////////////yH5BAEK
AB8ALAAAAAAcABwAAAWg4CeO5DAUaDAIZOuOZiybxfuqc24SNqz/p14BSHwNicAaCYdMlppIHxDR
aCCIARFQIbFcLpZIAvhhzhSUr/pCGesAQMl6DUnqEN75t3LQHXMOemsNP38yDYJqC1AxeIl8OgEG
PxGJD0ACPwlpcxNuOVqaEHkVD5+gH4Y5BwwMfU6hjD8kBLJ+LaqySi22Mj29uza5hT0tZjnBxSRw
OCrKIQA7}]
	}

	200 {
	    set rbIndArr(default) [image create photo -format gif -data {
R0lGODlhIAAgAKUyAJ6ZkZ6Zkp+ZkJ2akp6akJ6akZ+akZ6bkZ6bkp+bkaqnn6unn6uooKyoobCt
pbCtprGtprGup7Kvp7SxqrWyq7azrLe0rb26tL67tb+8tr+8t87Mx87MyM/NyM/NydDOyubl4+fm
4+no5urp5+rq6O/v7fDv7vDw7vHw7/f29vf39vj39/r5+fr6+fr6+vv7+v39/P39/f//////////
/////////////////////////////////////////////yH5BAEKAD8ALAAAAAAgACAAAAb+wJ9w
SBQeCsjkoMhsDpPQaMHgdCKSEU/o9HqZQp5IUlAlApAZlGzNbp8wyfIPySC17/fRAllFUlJ4gWwr
FnxMSBYxgosyMBWGQ1cLKoyMKw0FBERIdpWMIpBIGp6ecAdCSGqkjCaGBRKrnhAFP0cfsZUdBWcF
IbiMIFCqv4EnmUguxIIuUC3KgSzCz3itBEgg03fBBQMFHtltG5lzEeBsDrRzBSfmJYYGBRjmF9xP
BSPZoOlCAgUKlMpWMCiQoAiSCjCIwaBQAEGTAAUmAIpFCNKhAgtErBKhoEAAOQmQYDDBqAS9hnKE
WEMCoQMIEy5cmADB4QGUlESOSIkCAKcIE2srrVGREwQAOw==}]
	    set rbIndArr(disabled) [image create photo -format gif -data {
R0lGODlhIAAgAKU3AJ6ZkZ6Zkp+ZkJ2akp6akJ6akZ+akZ6bkZ6bkp+bkaaimqajmqejm6mmnqqm
naqmnqqnn6unnqyooK2poa2qoq6qoq6rorKuprKup7Kvp7Ovp7OvqbOwqL26sr26s726tL67tMzJ
xMzKxM3KxM7Lxc7Mxs/Mxs7Nx9LQytLQy9PQy9LRytPRy9fU0NfVz9jV0NnW0dnX0dnX0trY0tvZ
09vZ1Nza1f///////////////////////////////////yH5BAEKAD8ALAAAAAAgACAAAAb+wJ9w
SBQeCsjkoMhsDpPQaMHgdCKSkM9oNZulRh9IUlAlApAclm3Nbq8yyfIPuTi173eTAllFTlp4gWwv
FXxMSBY1gos2NBSGQ1cKLoyMLwwFBERIdpWMJJBIG56eGgUHQkhqpIwphgURrJ4PBT9HILKVHgVn
BSO5jCJQKsCLK5lIMsWCMlAxy4EwUKvQba4ESCHVd8IFAwUf220dmXMQ4mwOtXMFK+gohgYFGegY
3k8FJtslkD8CBZOgvVhQIEERJBRoFKMxoQCCJgEKSAAk64WFfgcBkmBVYk8AOQmQaEjBCMUFJA/l
/MCG5IEHESlkyEghwkMDKCqJHJESBUAJTifYWGKjIicIADs=}]
	    set rbIndArr(pressed) [image create photo -format gif -data {
R0lGODlhIAAgAKUwAJ6ZkZ6Zkp+ZkJ2akp6akJ6akZ+akZ6bkZ6bkp+bkaKdlKGelKKelKKelaOf
lqOfl6SflqSglqSgl6Whl6WhmKeimaejmaejmqijmqynnaynnqyonqyon62on7OupLOupbOvpLOv
pbSvpbSwprWxp7axp7axqLiyqbizqbizqrmzqrm0qbm0qrm0q7q1qrq1q///////////////////
/////////////////////////////////////////////yH5BAEKAD8ALAAAAAAgACAAAAb+wJ9w
SBQeCsjkoMhsDpPQaMHgdCKSDg2oxGKVQJxHUlAlApAY02vNbpcsyfIPyRi173eRAllFTk54gWwo
E3xMSBQtgosvLoUFRVcKKIyMKA0FBERIdpWMIYZzBReenhgFB0JIaqWMJYYFEa2eEJBHHbOVGwVn
BSC5jB9QJcCLrwRIKcWCKVAry4EqUKzQbplIHtV3wgUDBRzabRmZcw/hbA6QosThJIYGBRbnFd1P
BSLaIqE/AgULlMtQMCiQoIgfF8VcSCiAoEmAAhIAzUJBYZ/BAgpCtBKxoEAAOQnQsBNEgh5DOUKQ
IYGw4UOJFClKfNCQLg7KIUekRAFw0wkHMpXIqMgJAgA7}]
	    set rbIndArr(alternate) [image create photo -format gif -data {
R0lGODlhIAAgAOMMAFiUvFmUvFeVvFiVu1iVvFiVvVmVvFmVvVeWvFiWvFiWvVmWvP//////////
/////yH5BAEKAA8ALAAAAAAgACAAAAR88MlJJSKFYFy7n1oojt8njOi4lFSWviH7uHBd0rXdJXmv
VSdfL0ARCkFGn0KSPD6avscFmgNQrwSGdsvtMl5WlHe8BafI5CR6jKXi2iLBE45i0knzu6aAvAMo
C3oHFXoedCVtMgZUMhIBRgB/jRMKPZKTHQIDBJEEAwONEQA7}]
	    set rbIndArr(alt_disabled) [image create photo -format gif -data {
R0lGODlhIAAgAMIDAJ+fn6CgoKGhof///////////////////yH5BAEKAAQALAAAAAAgACAAAANf
SLqs8TCIRusSMUdrtY8Tt3wkJBJlGnCqWmFt2sQxQ7fXjaO6y/elH3BIJA2OyKRycFs6kc2nMypV
FnuwawYg1D4c3k1XGxoXGdlrGayttDvE0/DEptFtuzsFAIj06QkAOw==}]
	    set rbIndArr(alt_pressed) [image create photo -format gif -data {
R0lGODlhIAAgAOMLAH+113+12IC12H+213+22H+22YC214C22H+32H+32YC32P//////////////
/////yH5BAEKAA8ALAAAAAAgACAAAASH8MlJJTo4j8r7JGAohoHnFWMqHqX5qXBYuM8R36Bp43gn
8DxFBQXkbV5FHjKpfDCBB8kT+EBMeYXdNUZMLb7gsHjBHJvBKu3ofE7D2GaYepsqDOixEh4mme+j
DwF7I0c1gyEUgocAQ4OAFX5PJnSPHndPlSYDkTAJNBUEnCAHM58eAQYiqZ8RADs=}]
	    set rbIndArr(selected) [image create photo -format gif -data {
R0lGODlhIAAgAIQbAFiUvFmUvFeVvFiVu1iVvFiVvVmVvFmVvVeWvFiWvFiWvVmWvFyXvl2Yvmqg
w5/C2J/C2aDD2drn8Nro8Nvo8dzp8eDr8uDr8/b5+/f6/Pj6/P///////////////////yH5BAEK
AB8ALAAAAAAgACAAAAW14CeOpIgQBYGiZeuOaizP7yvM+LzUZJr/Md7HByzWiEVjK5Fsqko3ZzNA
kkphVqdClGxEKBoNBdJIcoGOy2bNtjiMp19Dza5byj9AMVLvbx5ZMhV+dRNFej8ZhGwZh0CKixsY
gTGDkYaUBBCRf0VIMw0WixYMQAIfRQ6ifW5KSQwPExkZEg+lrplABVi5MwAkC70zByXCMi7GBDXC
QgaZQiIBVgC/0CMKTdXWLQIDBNQEAwPQIQA7}]
	    set rbIndArr(sel_disabled) [image create photo -format gif -data {
R0lGODlhIAAgAOMNAJ+fn6CgoKGhoaKioqOjo6qqqsjIyMnJyerq6uvr6+3t7fr6+vv7+///////
/////yH5BAEKAA8ALAAAAAAgACAAAASU8MlJZbg4iMr7FFmYeZ5oZhs5nSymPm0ckLLcgXVc5TnF
158fENYiHBIMRuJA0BFPBUVjSlUUWk8TQUrtKprCy6FLbhjCl0S5i0AHGGsqww2PNxZutb2NHtvP
LDhaXGUKAywAWSJRhVcsFi0DBghJCAaHWIpuKCubIhSCnho7ohcdpTSbL24vkD+tPkOwHAAAGbat
EQA7}]
	    set rbIndArr(sel_pressed) [image create photo -format gif -data {
R0lGODlhIAAgAIQYAH+113+12IC12H+213+22H+22YC214C22H+32H+32YC32IK42YO42Y2+3LXV
6bbV6eLv9uPv9uPv9+Tw9+fx+Ofy+Pj7/fn8/f///////////////////////////////yH5BAEK
AB8ALAAAAAAgACAAAAW44CeOpIgcaDqUbDsScCzHgesWcy4ftf3qwFjB9zkEjzCbEYlsCZhMRQkH
Za5+VSY2q/0gGQ/J5SJ5MI4H0bFRwbjflMbxgwgy2u885QwsLHUPeYIYDkFUQBODeRFcMheKbxdB
fzqPkBgWk0eJl4yaQIGXhX0DdhSQFAtBNWungnFzRUcLDhFjEA6qkyIBjUhXsr5AJL3COQBTxjst
lMI2ymk+pY3RRAPNRwlEJQTYO0PbLgEGMuTbIQA7}]
	}
    }
}

#------------------------------------------------------------------------------
# themepatch::default::createCheckbtnIndImgs_gif
#
# Creates the GIF images used by the style element Checkbutton.image_ind of the
# default theme.
#------------------------------------------------------------------------------
proc themepatch::default::createCheckbtnIndImgs_gif pct {
    variable ckIndArr
    switch $pct {
	100 {
	    set ckIndArr(default) [image create photo -format gif -data {
R0lGODlhEAAQAOMLAIiIiIyMjI2NjY6Ojo+Pj5CQkJGRkcbGxsfHx/Ly8vPz8///////////////
/////yH5BAEKAA8ALAAAAAAQABAAAAQ+8L0igL1WGPkCUksohsoRTMioigcFrqpSwbBFr/Y95nrI
9z9d8DakAQQvXWJgOPQWB0LnkFQlTBwKBiOQPiIAOw==}]
	    set ckIndArr(disabled) [image create photo -format gif -data {
R0lGODlhEAAQAOMKAIiIiIuLi4yMjI2NjY6OjrKysrOzs9DQ0NHR0dnZ2f//////////////////
/////yH5BAEKAA8ALAAAAAAQABAAAAQ98L0hgL1WEPmCQUkohkgRTMaoigUFrioSADBs1euNj/oe
9j7gTogj1gCC1+6gKfgSrU5BqTqYOBQMRiOJAAA7}]
	    set ckIndArr(pressed) [image create photo -format gif -data {
R0lGODlhEAAQAOMJAIiIiIqKiouLi4yMjKenp6ioqLy8vL29vcPDw///////////////////////
/////yH5BAEKAA8ALAAAAAAQABAAAAQ+8L0hgL1WDPkCOUgohgcRTMWoigQFruoRADBs1euNj/oe
9j7gTogj1gCC186gIfgQBEHnUzOYOBQMRiB9RAAAOw==}]
	    set ckIndArr(alternate) [image create photo -format gif -data {
R0lGODlhEAAQAMIEAElphEpphEpphUpqg////////////////yH5BAEKAAcALAAAAAAQABAAAAMf
eBfcHkKtR9msOOvNOydgCGKi6J1oSgnecGmAtLlHAgA7}]
	    set ckIndArr(alt_disabled) [image create photo -format gif -data {
R0lGODlhEAAQAMIDAKKioqOjo6SkpP///////////////////yH5BAEKAAQALAAAAAAQABAAAAMd
SBTczoqAR2G94urNu39DKIbXOH5oqq7O4kXZpiQAOw==}]
	    set ckIndArr(alt_pressed) [image create photo -format gif -data {
R0lGODlhEAAQAMIGAFeUvFiUvFeVvFiVvFiVvVmVvP///////yH5BAEKAAcALAAAAAAQABAAAAMl
eAc1/q4IdQK8cOE9SuNgKI7kY5zoyaVp6b7bRwolcZSUvNlHAgA7}]
	    set ckIndArr(selected) [image create photo -format gif -data {
R0lGODlhEAAQAIQRAElphEpphEpphUpqg1x4kX+VqICWqYSZrIecrY2gsZWnt8bQ2MnS2uTp7fP1
9/b3+f7+/////////////////////////////////////////////////////////////yH5BAEK
AB8ALAAAAAAQABAAAAU/4PcFZGkGgjieLLm2cCyzyFPMAeFEB75EjFbhoSAlIg5CywCBKHSRREzR
bABnVKQS+0DgZoJvYPCSAVQz8icEADs=}]
	    set ckIndArr(sel_disabled) [image create photo -format gif -data {
R0lGODlhEAAQAOMOAKKioqOjo6SkpKysrL6+vsHBwcLCwsXFxcnJyeLi4uTk5PHx8fn5+fr6+v//
/////yH5BAEKAA8ALAAAAAAQABAAAAQ38L1Aq6Xygctx/8InikZDjNTAOAUaJI7SEQ1CHQ4zzI6D
qI6DCNFbxFDE3A7ZMLie0MkzExpJIgA7}]
	    set ckIndArr(sel_pressed) [image create photo -format gif -data {
R0lGODlhEAAQAIQTAFeUvFiUvFeVvFiVvFiVvVmVvGmgw4i0z4q10I630pC505a81Z3B2Mve6s3f
6+bv9fT4+/b6/P7//////////////////////////////////////////////////////yH5BAEK
AB8ALAAAAAAQABAAAAVH4PcBxWCeZiGIX4C+6AjPQ1HS+KxER24akEnCN2hMHLNDhGFaTCCGGUIi
YQAnCxyD+jj6ts/oN6KY3YgDAXpA+KxZ51n7EwIAOw==}]
	}

	125 {
	    set ckIndArr(default) [image create photo -format gif -data {
R0lGODlhFAAUAOMNAIiIiImJiYqKiouLi4yMjLe3t7i4uNra2tvb297e3t/f3+Dg4OHh4f//////
/////yH5BAEKAA8ALAAAAAAUABQAAARc8EkigL1YECmHMIgijiRiBIIkLE3rvq8SPIMB33DhIXjf
HBWGD8ewCIewIuCIdCmZzcYz6jRSW9NrlrqNdptFAe8KJNiuhU1AQU3MHoKA4UCqKw6FwHtSwfg1
HBEAOw==}]
	    set ckIndArr(disabled) [image create photo -format gif -data {
R0lGODlhFAAUAOMOAIeHh4iIiImJiYqKiouLi6ioqKmpqcDAwMHBwcLCwsPDw8TExMXFxdnZ2f//
/////yH5BAEKAA8ALAAAAAAUABQAAARb8Ekigr1YECnFMIgijiRiWNKwNGzrukrwfG/9FoOA2Hxz
DAFGz8awCIevYhCZNDJdyuOzEZ2yqlbsVPvkMos6q29AMIgNm4BimpA9LIYDaa44nACcBwXDD5A5
EQA7}]
	    set ckIndArr(pressed) [image create photo -format gif -data {
R0lGODlhFAAUAOMLAIeHh4iIiImJiYqKiouLi6CgoLGxsbKysrOzs7S0tMPDw///////////////
/////yH5BAEKAA8ALAAAAAAUABQAAARa8Mkhgr1YDCl1MUgojkZhTYmiriyLBM9QtHRbUEatK0aV
7rSE5QdkCQPEouqYVDKVxiF09ZwqqlMsVOsMCHLWnsyqKBAeAcT0AEMHPqM4ohQAcB6ECmYvOEsi
ADs=}]
	    set ckIndArr(alternate) [image create photo -format gif -data {
R0lGODlhFAAUAMIGAElpg0lphEppg0pphEtphHePo////////yH5BAEKAAcALAAAAAAUABQAAAMy
eCrT/i0oBaCFRN3tDuMcAY5kaZ5coa4saLxw7MY0yN4Fqu+muAe8w07hO02ExYtokgAAOw==}]
	    set ckIndArr(alt_disabled) [image create photo -format gif -data {
R0lGODlhFAAUAMIEAKKioqOjo6SkpLq6uv///////////////yH5BAEKAAcALAAAAAAUABQAAAMq
eBrc7mq9OSW94eANtv9gKG5DaZ4boa5syr7kKY90bd+iRluhEB2dTyQBADs=}]
	    set ckIndArr(alt_pressed) [image create photo -format gif -data {
R0lGODlhFAAUAOMIAFiUu1iUvFiVvFiVvVmVvFiWvFiWvYKwzf//////////////////////////
/////yH5BAEKAA8ALAAAAAAUABQAAAQ38Mkhqr21SAmwx9rzjdZDkSOBkurqvjB8zHSNIniu33qP
1sBDbEgsGgvFgIgoQcYMm0cLpZREAAA7}]
	    set ckIndArr(selected) [image create photo -format gif -data {
R0lGODlhFAAUAKUiAElpg0lphEppg0pphEtphEtqhEtqhVBuiFVyi1ZzjFd0jV15kV96km2GnH+V
qIKXqoaarY6hspytvJ2uvK27yK68yLbCzbzH0bzI0sPN1srT293j6N7j6Ovv8e3w8vT29/T2+PX3
+P//////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////yH5BAEKAD8ALAAAAAAUABQAAAZnwJ9Q
MCgaj8WAUAhAOpEE4XNq/BGpVAJ2u62EHtyjQySihIuIjgjEmBYah+OFHKFKRBtFcSzSYCdkHAoJ
HiIfC1gGGIEZdFyKZGR+YZCGiGcGFiEQWWdIAZ5HP6FFQlqhS6OnU1pLQQA7}]
	    set ckIndArr(sel_disabled) [image create photo -format gif -data {
R0lGODlhFAAUAIQYAKKioqOjo6SkpKampqioqKmpqaqqqq2trbW1tb6+vr+/v8HBwcbGxs3NzdbW
1tra2t3d3eDg4OTk5O7u7vX19fb29vn5+fr6+v///////////////////////////////yH5BAEK
AB8ALAAAAAAUABQAAAVT4CcGZGma4niuq8q+wQfPwGzfzqXcZoJhDh6JQMFcDjDEwAT5MWANzMRA
8mEks6jUUKhgLEiYoCmNOG/j3w/LS3/D7cdlIazbUfeYzC5IfWo3KSEAOw==}]
	    set ckIndArr(sel_pressed) [image create photo -format gif -data {
R0lGODlhFAAUAKUiAFiUu1iUvFiVvFiVvVmVvFiWvFiWvVmWvV6ZvmKbwGOcwGSdwWqgw2uhxHip
yYm00Iy20Y+40pe91aTF2qXG27TP4bTQ4bzU5MHY5sfc6c/g7ODr8uDr8+3z+O70+PX4+/X5+/b5
+///////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////yH5BAEKAD8ALAAAAAAUABQAAAZqwJ9w
ICgaj8WCUAhAOpHK33Nq/BGpUwKWqt0KLCGI9/gQiSrjYqIjAjWyDsQRY5ZQJ6LNolgWabAUZhwL
Ch4iHwxYB3QiHBl1XotmZn9jkoeJaQcXIRFpnwWfRgFSogJCoZ8GSz9dWKRCQQA7}]
	}

	150 {
	    set ckIndArr(default) [image create photo -format gif -data {
R0lGODlhGAAYAIQPAIiIiImJiYqKio6OjqCgoKGhoaKior29vb6+vsDAwMPDw8fHx9vb29zc3N3d
3f///////////////////////////////////////////////////////////////////yH5BAEK
ABAALAAAAAAYABgAAAV9ICRCQQCcaHoGwjiaxpHMdD0fBdCKweA8wKBw+GgMAiLAj8gUNgAkQ3Ma
LJQQVOrBpMhOFaeulwkGiMfD8hkdVLPT4bfQLQfS63d5/r1n99FgAVh1D1sCBYQPBC0ADXUMUBAC
A45sDEcvAAQHC52en50HBABILpImKqksLiEAOw==}]
	    set ckIndArr(disabled) [image create photo -format gif -data {
R0lGODlhGAAYAIQQAIiIiImJiYqKioyMjJiYmJmZmZqamqysrK2tra6urrCwsLOzs8DAwMHBwcLC
wtnZ2f///////////////////////////////////////////////////////////////yH5BAEK
ABAALAAAAAAYABgAAAV6ICRCQQCcaHoGwjiexpHMdD0fBRC8g/P8wKDw0RgARADfcBlsHAMGphRY
KCGm08NJgZUqtl3mF8AND8dlcxCtFrLbwDf8IYfX23d13rwPj69zDwcsBYEPBC0ADXMMRyQDi2oM
AztIAAQHC5qbnJoHBDouIgImKqYsLiEAOw==}]
	    set ckIndArr(pressed) [image create photo -format gif -data {
R0lGODlhGAAYAOMOAIiIiImJiYqKiouLi5SUlJWVlaKioqOjo6SkpKWlpaenp7GxsbKyssPDw///
/////yH5BAEKAA8ALAAAAAAYABgAAARx8MkXArg43yDmvIWBjGQ5GgQQfAPTvHAsN8wASIA77zFz
BwWeEEaoHIZDwyWBFCaWTd4TwIzOplVrDKuVcbuwL7ghBpe7Z23auo5Oj+OGgUOINwid3Hhxo7S6
CwMrOAAEBgqIiYqIKCoeEgIWGpMcHhEAOw==}]
	    set ckIndArr(alternate) [image create photo -format gif -data {
R0lGODlhGAAYAMIFAEpphEpphUtphElqg6W0wv///////////yH5BAEKAAcALAAAAAAYABgAAAM6
eHoB/hCGtaK9ruINFf/AAYLCuJVmqq5s6xBwLMNgYd+4Xec8OP8El3BIVKGKQlFS6dKwKJ7jaUBJ
AAA7}]
	    set ckIndArr(alt_disabled) [image create photo -format gif -data {
R0lGODlhGAAYAMIEAKKioqOjo6SkpNHR0f///////////////yH5BAEKAAcALAAAAAAYABgAAAM0
eHrR/jCsFWulNj+luwReKI5kaZ4oNKxsu3pELM8xTN+eqw9p7//ADqjHSHGMR9Mk6RFMEgA7}]
	    set ckIndArr(alt_pressed) [image create photo -format gif -data {
R0lGODlhGAAYAMIGAFiUvFeVvFiVu1iVvFiWvKzK3v///////yH5BAEKAAcALAAAAAAYABgAAAM7
eHoy/hCKtUi8OFTMoz5d+ByAaJ5oqq5sixZwLMOmYd+4Xee8Of8Fl3BILKpKQ5BQEXB9Ds3Vc6Gi
JAAAOw==}]
	    set ckIndArr(selected) [image create photo -format gif -data {
R0lGODlhGAAYAIQeAEpphEpphUtphElqg0tqhFBuiFFviVNxild0jV96knSMoHePo4OYq4aarY2h
spCjs5CjtJiqua68yLnF0MrT28zV3M/X3s/Y39DY39zi5+Tp7fT2+PX3+P7+/v///////yH5BAEK
AB8ALAAAAAAYABgAAAVy4Cd+AWCeKBqMY+q+ZgvPqEjfwIfjwj73vsKFw/C5JB4PxYhSdJIOpsmg
SVoItENkkUJ6NonbxNN5nJxJCG5MNheqngr2hsgky16wr35/etRGfElxc4F2X2FSAAgYHA03QIqS
MDqTOZWTMoosNpE/AywhADs=}]
	    set ckIndArr(sel_disabled) [image create photo -format gif -data {
R0lGODlhGAAYAIQaAKKioqOjo6SkpKampqenp6ioqKmpqa2trbi4uLq6usDAwMHBwcXFxcbGxsfH
x8vLy9bW1tzc3OTk5OXl5ebm5ufn5+3t7fHx8fr6+v7+/v///////////////////////yH5BAEK
AB8ALAAAAAAYABgAAAVl4Cd+QWmeaDCOaduybnyKcq0Cdq7v7lBhCt4JotFIhCVEpshAEi5FSq3w
SKCIGsyhFtFkGiZl0WHresEDqGaSM1iKX6xW54YvNeRdvbhG7ud+PwtIQjiEJiSHKomHMEgrNDoC
KyEAOw==}]
	    set ckIndArr(sel_pressed) [image create photo -format gif -data {
R0lGODlhGAAYAKUfAFiUvFeVvFiVu1iVvFmVvFiWvF6Zvl+Zv2Gav2ScwWuhxH+uy4KwzYy20Y+4
0pa81Zi+1pm+1qDD2bTQ4b/W5c7g69Dh7NLj7dPj7dTk7t7q8ubv9fX5+/b5+/7+/v//////////
////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////yH5BAEKACAALAAAAAAYABgAAAZ5QJAQ
JBgYj0ikYDgsJJ/QQBNKTUpB1ewRBNB6v2CvAdNphJOTz6dyPi486kd7cNioL4QsQsJAqzkKWhQf
HhBucB8RXoOEhgZ2HxZ5WgkaaoVpH4BglZeIimGdapGToZaagXMJGR0Oc21dr1uyRkIBslcgt225
Q2dMQQA7}]
	}

	175 {
	    set ckIndArr(default) [image create photo -format gif -data {
R0lGODlhHAAcAIQRAIeHh4iIiImJiY2NjY6Ojo+Pj5+fn6CgoKGhoaampqioqM3Nzc7Ozs/Pz+np
6erq6vv7+////////////////////////////////////////////////////////////yH5BAEK
AB8ALAAAAAAcABwAAAWS4Cd+QGCeaIqOrDkcSizP8zEEAvsFRQNFwKBwGIEwCoER70FsNh+FXKnh
rA4ZAQCA8LN6ITcBwkuOHASBRNmbMKnX1XYaHnfTnfL3fZjfE/t+QoCBQIOEhoGIfop7jHeOdG0C
B4RBBgIAA12BYCcMlVhJAgVMfg4ESSI8DJtlEAuoOmgvNLUyNiY6IiVoKr69LCEAOw==}]
	    set ckIndArr(disabled) [image create photo -format gif -data {
R0lGODlhHAAcAIQQAIeHh4iIiImJiYuLi4yMjI2NjZiYmJmZmZycnJ6enre3t7i4uMrKysvLy9bW
1tnZ2f///////////////////////////////////////////////////////////////yH5BAEK
ABAALAAAAAAcABwAAAWOICRCQGCeaIqOrEkYSSzPs0EEAgsFxeI8wKBw+HAoCoERr0FsNhuFXGnh
rA4XAQCA8LN6HQPcwUt+GAQBRNmLMKnX1XYaHnfTnfL3fZjfE/t+QoCBQIOEhoGIfop7jHeOdG0C
BoRBZ1tdgQ43JgqVWEkCBUx+DDdKPZllRqcsaC80sTI2JjoiJWgqurksIQA7}]
	    set ckIndArr(pressed) [image create photo -format gif -data {
R0lGODlhHAAcAIQQAIeHh4iIiImJiYuLi4yMjJOTk5SUlJWVlZeXl5iYmKqqqqurq7i4uLm5ucHB
wcPDw////////////////////////////////////////////////////////////////yH5BAEK
ABAALAAAAAAcABwAAAWOICRCQGCeaIqOrDkYSSzPszEEAgsFw+I8wKBw+HAoCIFRgNAgOp0NQq60
eFqHiwAAMPhdv46b4PAtPwyCAML8RZjWbKtbHZe/6885HD/U84l+f0KBgkCEhYeCiX+LfI14j3Vu
AgaFQQUCXF6CYScKlllJAkyCDDdKBD51RqcsaS80sTI2JjoiJWkqurksIQA7}]
	    set ckIndArr(alternate) [image create photo -format gif -data {
R0lGODlhHAAcAOMHAElog0lohElphEpphEtphEtqg9La4f//////////////////////////////
/////yH5BAEKAAgALAAAAAAcABwAAARGEEkEhr0448m1/wOHgGQ2lehFpWnBssQrz3Rt33h+GXzv
+6yDcEgkBotIIevH7Ome0Kh0Sq2SBKPnKSfCiSSFQCxFCGAnEQA7}]
	    set ckIndArr(alt_disabled) [image create photo -format gif -data {
R0lGODlhHAAcAMIEAKKioqOjo6SkpOjo6P///////////////yH5BAEKAAcALAAAAAAcABwAAAM+
eHoQ/jA+saq8ONSTe1xe+DBiaZ5oqq5s677YIM80XRJ4ruv37uOlmnAGKxqPyKTyIigCODCQa9Pa
KFTPRQIAOw==}]
	    set ckIndArr(alt_pressed) [image create photo -format gif -data {
R0lGODlhHAAcAOMIAFmUvFeVvFiVvFmVu1mVvFiWvFiWvdbl7v//////////////////////////
/////yH5BAEKAA8ALAAAAAAcABwAAARK8Mk3grg462umJ1sYEt4jnuEEoixGtfBVxHR9rnau73zv
a4egcDiMIY7IZNKobB5jxKjwR61arzbcz1I1VAEPLW/yK/VKEh14EgEAOw==}]
	    set ckIndArr(selected) [image create photo -format gif -data {
R0lGODlhHAAcAKUlAElog0lohElphEpphEtphEtqg0tqhE1rhlVyi1VyjF97kmV/lmaAl2eBmGmD
mWqDmmuEmoKXqoOZq5GktJKktaGxv7TBzMLM1sPN1s7W3tPb4dng5drg5t7j6N7k6eLn6+7x8/Hz
9fX3+Pn6+/r7/P//////////////////////////////////////////////////////////////
/////////////////////////////////////////////yH5BAEKAD8ALAAAAAAcABwAAAaMwJ/w
BxgYj8gkcshUOp8D5g9KTQ6r2CMxmy1wuYSvmLv4hCJj5YFTKnXSyUq7dIEfG6O2SGEfHDZzE1kM
GBYIcXMZBlkabRsJRw4kenyMc49+bG0UXw8hlwlybYpiEJ9tHpMle2kNIHOBdqawpLKnrH0DDmYS
ub6/wEYCU8BXvlK5UkIFAWFZBAHDQ0EAOw==}]
	    set ckIndArr(sel_disabled) [image create photo -format gif -data {
R0lGODlhHAAcAIQZAKKioqOjo6SkpKioqKmpqa6urrGxsbKysrOzs7S0tL+/v8DAwMfHx8/Pz9nZ
2eDg4Obm5unp6ezs7O7u7vDw8Pb29vj4+Pr6+vz8/P///////////////////////////yH5BAEK
AB8ALAAAAAAcABwAAAV74Cd+QGCeaHoKY6u+cNB+cZ2Odn6Seu//wCDMQLEohCiBJJOZIE8NZubx
DBwwzEvhqZQydIaHY5CKMiG9CFNCOCGwGW1ayg50md8ewkInmDNoPwl8TBNwckAHFVJeSIOMgY6E
iE8IRQtVmZoCmiYANJ04mTNVMyJCnyMhADs=}]
	    set ckIndArr(sel_pressed) [image create photo -format gif -data {
R0lGODlhHAAcAKUkAFmUvFeVvFiVvFmVu1mVvFiWvFiWvVuXvWKbwGKcwGyhxHGlxnKlxnOmx3Wn
yHWoyHaoyIy20Y230Zm/1pq/16nI3LrT48fb6Mfc6dLi7dbl79zp8d3p8eDr8+Hs8+Tu9O/1+fL3
+vb5+/r8/f//////////////////////////////////////////////////////////////////
/////////////////////////////////////////////yH5BAEKAD8ALAAAAAAcABwAAAaQwJ/w
NwgIjsik8mgYOgnLaJTg/Emv0SEUy0USu+BjIUwuX7flxScUMS8PHBKp41ZW5KRLHdkYyUUKewIH
G3gTYAwYFgh2eBloWBpyGwlIDn4kgGGSk5VweBRkDyF4lHdyj2UQpHIemJpmDSB4hnurtKm2rLCC
DmsSYJCCR0bDSQbGSAA/wntDyVXDVUJ1y0NBADs=}]
	}

	200 {
	    set ckIndArr(default) [image create photo -format gif -data {
R0lGODlhIAAgAIQRAIeHh4iIiImJiYuLi4yMjJWVlbq6uru7u7y8vOTk5OXl5ebm5unp6erq6vj4
+Pn5+fr6+v///////////////////////////////////////////////////////////yH5BAEK
AB8ALAAAAAAgACAAAAWZ4CeKQWmeaBqM7CeocAy05XAoUKTvfB9BisOgNHoVGr6kMsIoED8BAnJJ
5TGG0ACiyt0ZTotuVxF4BR5i7uOU7rLb1Td8KZ8n6/YePr/b8yN+fIF5g3aFc4dwiW2LaY1ij24m
aH87DicKlTsJZSUHmjpfKwEDDJpXKx8AAQWmfE0BMySkBgmUYg8JBkOpIzG/Ki2+ZsAoLy0hADs=}]
	    set ckIndArr(disabled) [image create photo -format gif -data {
R0lGODlhIAAgAIQQAIeHh4iIiImJiYqKipGRkaqqqqurq8bGxsfHx8jIyMrKysvLy9TU1NXV1dbW
1tnZ2f///////////////////////////////////////////////////////////////yH5BAEK
ABAALAAAAAAgACAAAAWYICSKQWmeaBqMLCSocAy05WAgzqPvfP84CMOgNHoRFr6k8qEgECGBAXJJ
5SmG0IChyt0VToluFxF4BRpibuOU7rLb1Td8KZ8n6/YePr/b8x9+fIF5g3aFc4dwiW2LaY1ij24m
aH87DCcIlTsHZSVbmg9fK1EKmlcrEAABBKV8TQEzJFEFB5RiDQcFQ6gjMb4qLb1mvygvLSEAOw==}]
	    set ckIndArr(pressed) [image create photo -format gif -data {
R0lGODlhIAAgAIQRAIeHh4iIiImJiYqKio6Ojo+Pj6GhoaKiorW1tba2tre3t7i4uLm5ub+/v8DA
wMHBwcPDw////////////////////////////////////////////////////////////yH5BAEK
AB8ALAAAAAAgACAAAAWV4CeKQWmeaBqM7CeocAy0pWAkD6TvfA89CcNrJXoRGL6kErIglEgD5HLK
W7w+pQN1uzOcFFxuIjB0hLeO05mrXlPb7iU8npzTe/b7Lq+H8PV/d4F0g3GFbodriWeLYY1sJmZ9
Ow0nCZM7CGQlBpg6XitkC5hWRAABBKN6CwUBMyRkBgiSYQ4IQk8sMbsqLSObvClXLCEAOw==}]
	    set ckIndArr(alternate) [image create photo -format gif -data {
R0lGODlhIAAgAOMIAEpohUtohEpphEpphUtphEtphUpqhEtqhP//////////////////////////
/////yH5BAEKAA8ALAAAAAAgACAAAART8ElpiLg4a0zA/E+xjSQ2gGVaTmq7HZIrY48xz8B9W3rv
/8CgcEgszhDIpHKJuDGfSSf0KZ0ujdisdsvten857UP8GGANk4ARdBiiQZIcT8YDRQAAOw==}]
	    set ckIndArr(alt_disabled) [image create photo -format gif -data {
R0lGODlhIAAgAMIDAKKioqOjo6SkpP///////////////////yH5BAEKAAQALAAAAAAgACAAAANF
SKoi8TBK6JYlM+soLtigtjhhKSlmChGk6r5wLM90bd94Lg987/8DF3DYExKHxuNPx2w6n9CodCpq
MnQdFC67uHEvtEsCADs=}]
	    set ckIndArr(alt_pressed) [image create photo -format gif -data {
R0lGODlhIAAgAOMHAFiUvFmUvFiVu1iVvFiVvVmVvFiWvf//////////////////////////////
/////yH5BAEKAAgALAAAAAAgACAAAARXEEk5qr04l8mRyWBoAV0hniApCWiLCZQrV8hsE4EtE7ps
9sCgcEgsGo+Dg3LJbB5szugSKo1Sq02kdsvteom/bW5LCCMDta0EoJbwjBsOq9iZEN43NCcCADs=}]
	    set ckIndArr(selected) [image create photo -format gif -data {
R0lGODlhIAAgAIQbAEpohUtohEpphEpphUtphEtphUpqhEtqhGB7k2J9lICWqYGWqYOZq4WarIaa
rYicrpKltZOmtpusu83V3c/X3tDY3+zv8u3w8vb3+ff5+vz9/f///////////////////yH5BAEK
AB8ALAAAAAAgACAAAAWj4CeKBiGcaKqiBDC+X7HONDrAdV6Per8eIp8Q9TEMh4Dj0aRsHheXi8JJ
Q2A2Gwv1R8Fmt6qIdwMBo6zeysEsOEy8mcRQEW2sxN7I0YLVPFJoWBRrQ3x9f21dWBgISg0aXn4C
eFh6TQ+QfRJXgoRNDpljG3FgmKIblqWhG4NsAqBYpK4CDFELs7izSbknH7wCIgO5BiMBuDCeW8Qw
IklMQkwwIQA7}]
	    set ckIndArr(sel_disabled) [image create photo -format gif -data {
R0lGODlhIAAgAIQUAKKioqOjo6SkpK6urq+vr76+vr+/v8DAwMHBwcLCwsjIyMzMzOXl5ebm5ufn
5/X19fb29vr6+vv7+/7+/v///////////////////////////////////////////////yH5BAEK
AB8ALAAAAAAgACAAAAWQ4CeKghCcaKqi5uh+ayynwgvMuDyaea+KviDqwxMaj8ikcmaAQArL1SBC
oTyiqkbVikUpthRFNzDdOsYBxlZCEBaciNV3KxY+qpNEqlxtHO94eidaVREDRwgTW3kBc1V1RwmK
eAtUfUuJYGttS5KaYV2eW35jmRRsaAEHTgaprq+pMK8krjVAaLYjY7kvUS8hADs=}]
	    set ckIndArr(sel_pressed) [image create photo -format gif -data {
R0lGODlhIAAgAIQZAFiUvFmUvFiVu1iVvFiVvVmVvFiWvWyixG6jxYq10I230Y630o+40pG505u/
15vA16PE2tDh7NLj7dTk7u30+O70+Pb6/Pj6/Pz9/v///////////////////////////yH5BAEK
AB8ALAAAAAAgACAAAAWo4CeKQ2meaFqM7GekcGwCbSHfMC0KeI8KJJ+w9BkaCQGjkKAU2pqlRKWS
gMYOlkyGYlVJtNsu6gHOOMQmLHjyFBci4AtiKK0sUmTww0jRYhonaloSbT59foADBV9aFgdKCxhg
fwN5WntNDZJ+EFmDhUYMm2UZcmKapBmYp6MZhGglolqmsCUKU1VOtSlJuyYEoLUBRb5EHwDFAyNM
tSssPLAty8xHwywhADs=}]
	}
    }
}

#------------------------------------------------------------------------------
# themepatch::default::createRadiobtnIndImgs_gif
#
# Creates the GIF images used by the style element Radiobutton.image_ind of the
# default theme.
#------------------------------------------------------------------------------
proc themepatch::default::createRadiobtnIndImgs_gif pct {
    variable rbIndArr
    switch $pct {
	100 {
	    set rbIndArr(default) [image create photo -format gif -data {
R0lGODlhEAAQAIQQAIeHh4iIiImJiZGRkZKSkq6urq+vr7CwsMTExMXFxcbGxujo6Onp6fj4+Pn5
+fr6+v///////////////////////////////////////////////////////////////yH5BAEK
AB8ALAAAAAAQABAAAAVg4CeKQGCaY/oFhMI8z5IQgRocDqTvjlGLgsNuuDMARIQccdggfACK5TJh
YkiJC0FAedU5TNxuo9rdZQOJsg5RS5YbA1HAUC4c5YbGslH4jQAECQsODgsIA3cqK1oBWiohADs=}]
	    set rbIndArr(disabled) [image create photo -format gif -data {
R0lGODlhEAAQAOMPAIeHh4iIiImJiY6Ojo+Pj6KioqOjo7GxsbKyssnJycrKytTU1NXV1dbW1tnZ
2f///yH5BAEKAA8ALAAAAAAQABAAAARX8EkJgrUzv0CQak1yEIEWGIyjrkxRSoKxzmsBSERKzwvx
AIjdDmFRCGkJQUB3VDEszOai2FwlA4eq6lDKVRcDSaBQtU3Gi93CpQF0EgyGaHDTiJUBpSYCADs=}]
	    set rbIndArr(pressed) [image create photo -format gif -data {
R0lGODlhEAAQAOMOAIeHh4iIiImJiYyMjI2NjZubm5ycnKampqenp7i4uL+/v8DAwMHBwcPDw///
/////yH5BAEKAA8ALAAAAAAQABAAAARY8EkJgrUzv0BQYkxyEIEWGEujrktRSoKxzmsBSERKzwrx
AIjd7mBJCGkJQUB3VC0szKai2FwlA4eqivjIVRcDSaBQtU3Gil3rNQEQDonFQjS4acTKgFITAQA7}]
	    set rbIndArr(alternate) [image create photo -format gif -data {
R0lGODlhEAAQAOMIAEpohUtohEpphEpphUtphEtphUpqhEtqhP//////////////////////////
/////yH5BAEKAA8ALAAAAAAQABAAAAQ28ElpiBAEzP3K/d/AgeQ3leghoehjsCUAo9aF3PjN5vk8
yz5T8CIZBA2TgI9zYCE5EhmhxokAADs=}]
	    set rbIndArr(alt_disabled) [image create photo -format gif -data {
R0lGODlhEAAQAMIDAKKioqOjo6SkpP///////////////////yH5BAEKAAQALAAAAAAQABAAAAMp
SKoiEW5J8qoVE9j9luOcAoLEN54oN6zsOrZtKs8UXcqYiObLyU8hSQIAOw==}]
	    set rbIndArr(alt_pressed) [image create photo -format gif -data {
R0lGODlhEAAQAOMHAFiUvFmUvFiVu1iVvFiVvVmVvFiWvf//////////////////////////////
/////yH5BAEKAAgALAAAAAAQABAAAAQ7EEk5ai0zI2P7AFrheaAkjKNAoSPCokTwekR33PhtFWKV
5x3ZzELoDQcB13EgASwntRcmc2JpoNGYJgIAOw==}]
	    set rbIndArr(selected) [image create photo -format gif -data {
R0lGODlhEAAQAIQQAEpohUtohEpphEpphUtphEtphUpqhEtqhE5th6q4xau5xqu6xuzv8u3w8u3w
8+7x8////////////////////////////////////////////////////////////////yH5BAEK
AB8ALAAAAAAQABAAAAVP4CeKBiEIBDCuX3G+78DC9DvW+CHi+GfAiIWjoUDAADQFZAlR0EwvBxPy
4J0aU4ZVoGQmaMgXQtEgGmGfLfozUAsMo4CadeDBWSIkAcoKAQA7}]
	    set rbIndArr(sel_disabled) [image create photo -format gif -data {
R0lGODlhEAAQAOMHAKKioqOjo6SkpKWlpdTU1PX19fb29v//////////////////////////////
/////yH5BAEKAAgALAAAAAAQABAAAAQ+EEkpRAh2anS7FxvgjddkkaSEosh5DYRhEMN6EUd+EHZg
6AdD76cr9HA6ng0mo404vQ4liplEQRobdgP1bCIAOw==}]
	    set rbIndArr(sel_pressed) [image create photo -format gif -data {
R0lGODlhEAAQAIQPAFiUvFmUvFiVu1iVvFiVvVmVvFiWvVyXvrDN37HO4LLO4O30+O70+O/1+O/1
+f///////////////////////////////////////////////////////////////////yH5BAEK
ABAALAAAAAAQABAAAAVQICSKQ1kWYwoZZjsAauG6sCjMs0DiM+QeigYjcWgRAq3EY/lIGF0N5sPR
KshMDOnChTQpmQjjtXRIMIZFU8DHc4kA7daIEEelbjzVnD44qkIAOw==}]
	}

	125 {
	    set rbIndArr(default) [image create photo -format gif -data {
R0lGODlhFAAUAIQYAIeHh4iIiImJiYqKiouLi46Ojo+Pj5CQkLCwsLGxsbKysr+/v8DAwMHBwc7O
zs/Pz9vb29zc3N/f3+Dg4OHh4eLi4vf39/j4+P///////////////////////////////yH5BAEK
AB8ALAAAAAAUABQAAAWA4CeOnxCcgUCuY2AoTxQ9iRGwojA0F+b/F8bgRhIcKL/kb2IjDSbKKKZC
aDWkUgbR0MMqL4ZPQOGVJgCBRznqOEXWSogbnpSn6b+2gIzHIG5ceBYFIgEMeAtEH09wEgMkLlBe
EgYqRQMMXUkWC0M4YgYJDxAQDggFip8faCgAOCEAOw==}]
	    set rbIndArr(disabled) [image create photo -format gif -data {
R0lGODlhFAAUAIQUAIeHh4iIiImJiYqKioyMjI2NjaOjo6SkpKWlpa6urq+vr7e3t7i4uMDAwMHB
wcPDw8TExMXFxdTU1NnZ2f///////////////////////////////////////////////yH5BAEK
AB8ALAAAAAAUABQAAAV+4CeOnxCcgUCuY1AgjOMwRxGwoiAo0uT/koRpJShEfsgfxEYSQJLQSWTQ
UkSjidun0LsmJYVP4OCNHgABRhm6ODnWyYYbjnSc1HRfW4DI+ww3XHkSBCIBCXlZI05wDyotBU9e
DwWPiwIJXUhBQzguBwwNDQsGBFo4I2goADghADs=}]
	    set rbIndArr(pressed) [image create photo -format gif -data {
R0lGODlhFAAUAIQUAIeHh4iIiImJiYqKiouLi4yMjJycnJ2dnaOjo6SkpKqqqqurq7GxsbKysrOz
s7S0tLW1tb+/v8DAwMPDw////////////////////////////////////////////////yH5BAEK
AB8ALAAAAAAUABQAAAV+4CeOnxCcgUCuY0AcS9MsRhGwoiAk0uT/koRpJSg8fsjfg3AbCY7JKGTQ
SkSvk0ST0MMmJYVP4OC9GgCBRTmqODXWSYYbjpSn6b+2gIyfGG4FXXARBCIBVnQITSVQZQ4qLQSN
Vw4EkE47gj8RCEM4AQUwDAwKBkw4K2goADghADs=}]
	    set rbIndArr(alternate) [image create photo -format gif -data {
R0lGODlhFAAUAOMKAEpohElpg0lphEppg0pphEtphEpqhEtqg0tqhHePo///////////////////
/////yH5BAEKAA8ALAAAAAAUABQAAARQ8Mn5ALkE0D2xx5x0fCQhbGNJap1atu77xOoT0CXyJXzv
fwWPYkgsegpBTHGpiPmeCY/BgvsMZlWPJJklwKoUQTawGeBYHC4wtEEYkAZEKAIAOw==}]
	    set rbIndArr(alt_disabled) [image create photo -format gif -data {
R0lGODlhFAAUAMIEAKKioqOjo6SkpLq6uv///////////////yH5BAEKAAcALAAAAAAUABQAAAM5
eLoX/iyuR6E8oGoX89YC833TSDbmhqbs4L6wScx0Lde4Ce8D5bGaFZAjHJaMR2AEGLqYLktP5pIA
ADs=}]
	    set rbIndArr(alt_pressed) [image create photo -format gif -data {
R0lGODlhFAAUAOMJAFiUu1eVvFiVu1iVvFiVvVmVvFiWvFmWvIKwzf//////////////////////
/////yH5BAEKAA8ALAAAAAAUABQAAARQ8Mn5RBmjCMon/qDRSQFofhtVnmxAsfAwGTEs1faBsxeI
/MAgqPdJGI/IGnKZqAWfCBBBsGM9qiYJFYvxcCnbHYCjw7lGYVNqNCkQMITCKAIAOw==}]
	    set rbIndArr(selected) [image create photo -format gif -data {
R0lGODlhFAAUAIQSAEpohElpg0lphEppg0pphEtphEpqhEtqg0tqhEtqhZCjs5CjtJGktJKktcfR
2cjR2cjS2snS2v///////////////////////////////////////////////////////yH5BAEK
AB8ALAAAAAAUABQAAAVu4CeOH0CcBECuI+qirHi8NCGsc02rrV73vt+HlmhAHgwE7RN4JSKSqASS
eClfDal0QSu8INro41XwusBhR/DECEsUL4PJlUCLr6jB0LpwOBZ4MB9may5AhQQkAogEASsDhTws
hGQxKwgGZQYIMSEAOw==}]
	    set rbIndArr(sel_disabled) [image create photo -format gif -data {
R0lGODlhFAAUAOMIAKKioqOjo6SkpMbGxsfHx+Li4uPj4+Tk5P//////////////////////////
/////yH5BAEKAA8ALAAAAAAUABQAAARR8Mn5gr00z8uxfkAnWlk4igJ1ntvKVp1AGAYxwpxwIDxi
CC4LodezBQ1EniEYQCYLzGFy0DHlnMrbiFAoGDsSpqglDqjK5nMw9XF9MgFT6BMBADs=}]
	    set rbIndArr(sel_pressed) [image create photo -format gif -data {
R0lGODlhFAAUAIQQAFiUu1eVvFiVu1iVvFiVvVmVvFiWvFmWvFmWvZi+1pm+1pm/1pq/18ve6szf
683f6////////////////////////////////////////////////////////////////yH5BAEK
AB8ALAAAAAAUABQAAAVu4CeOn1AMQyGQ7Ii+sNGKAWy/K1nffEDywMHIEASKbgjGw7E42T4HG+IB
qUIeCJsTxrBaFdob1QtxFFFjb+M8WJAhCRtBIE2Xt6/PraBoNBR4KCJ0bDAuhYIjhGwALFFnPjOL
NjkzIwUEKAQFMyEAOw==}]
	}

	150 {
	    set rbIndArr(default) [image create photo -format gif -data {
R0lGODlhGAAYAIQZAIeHh4iIiImJiYuLi4yMjJubm5ycnJ2dnaCgoKGhoaKioqOjo6+vr7CwsLGx
sbKysr29vb6+vr+/v+7u7u/v7/Dw8PHx8fv7+/z8/P///////////////////////////yH5BAEK
AB8ALAAAAAAYABgAAAWd4CeOY2CeZKoK5vFA0GOYgpoGhERlfE9FhIBNFFhYesieRSFUBRqYpDRz
YTRLi+hUemGWCMfttDKofQISsTjSDOzU04lQcICLDayHffswRfZTbAF/gEkQJnqFSA4BAgaKSAU1
AROQGXJEhIqHRGCKZFcBCBeAXVdEDKRwVaclChVqFQmtJAEDEJVJExADtCkAJgUvMQUmAEM2JzTI
IQA7}]
	    set rbIndArr(disabled) [image create photo -format gif -data {
R0lGODlhGAAYAIQYAIeHh4iIiImJiYqKiouLi5WVlZaWlpiYmJmZmZqamqKioqOjo6SkpKWlpays
rK2tra6urs3Nzc7Ozs/Pz9DQ0NbW1tfX19nZ2f///////////////////////////////yH5BAEK
AB8ALAAAAAAYABgAAAWd4CeOY2CeZKoKpsE4DmOYgpoGBCRdfC89hIBNFEhMesgeJSFUBRaWpPRS
UTRLiehUWmGWCMftdDKofQIQsfjRDOzU04hQYICLDSyGfdswPfZTbAF/gEkOJg2FSQwBdIpIBTVu
jxdyRISKh0QEFIpkVwEHFYBdV0QKo3AVC6ZYYVsTCK0kAQMOEVISDgOzKQAmBQ0wDQUmAEM2JzTI
IQA7}]
	    set rbIndArr(pressed) [image create photo -format gif -data {
R0lGODlhGAAYAIQUAIeHh4iIiImJiYqKipGRkZKSkpOTk5SUlJWVlZubm5ycnJ2dnaKioqOjo7q6
uru7u7y8vMHBwcLCwsPDw////////////////////////////////////////////////yH5BAEK
AB8ALAAAAAAYABgAAAWZ4CeOY2CeZKoKprEwzFKYgpoGQ/NMfP80g4BNFEBAesgeBCFUBRSSpHQS
STRLiOhUGmGWBsftFCKofQINsbjRDOzUU4dQYICLC6yFfbswpfdSbGiAUgwmeoRICgECBYlIBDVu
jxNyRH+JhkRgiWRXAQcRgF1XRAmicFWlWGFbEAerJIwMDlIPDCxDIwAmBC8xBCYAuk4njLohADs=}]
	    set rbIndArr(alternate) [image create photo -format gif -data {
R0lGODlhGAAYAOMHAElphEpphEtphEpqhEpqhUtqhKW0wv//////////////////////////////
/////yH5BAEKAAgALAAAAAAYABgAAARaEMk5QbgB0M0t/hi3CWB5iZKpBuK6ju6bxu5Mq/ZdIvpa
kB+DcEgUloCYg3LJVIIEyEtzeqAVrwbQoKcq8LigHJj1HQcIEzM5DW71UOUYXLKtzSmBAXTgRUUA
ADs=}]
	    set rbIndArr(alt_disabled) [image create photo -format gif -data {
R0lGODlhGAAYAMIEAKKioqOjo6SkpNHR0f///////////////yH5BAEKAAcALAAAAAAYABgAAANJ
eLor8UGwSaG1krLLoVZdGGiiOJXlgqLgah6uGc/BYN+4vRJ87/O7n3CVKw4uAFoIprS0mo8nVDXd
KEmzD3OlVThEma4qGUhqEwA7}]
	    set rbIndArr(alt_pressed) [image create photo -format gif -data {
R0lGODlhGAAYAOMLAFiUvFmUu1eVu1eVvFiVu1iVvFiVvVmVvFeWvFiWu6zK3v//////////////
/////yH5BAEKAA8ALAAAAAAYABgAAARa8Mk50SnlIMo7wGCYdZxoYgcpnWxBtm0Js6kUzO324PDK
s7sfS0AQKY7I5FF0ES2e0OgTJ60ucMqsQmQQDoPekC8MGpMHk2ZY5n0JVQ91Dw5mJeilbsEggEcA
ADs=}]
	    set rbIndArr(selected) [image create photo -format gif -data {
R0lGODlhGAAYAIQSAElphEpphEtphEpqhEpqhUtqhFVyi1VyjHCInnCJnnKKn5mrupqru5usu5yt
u8nS2srT28vU3P///////////////////////////////////////////////////////yH5BAEK
AB8ALAAAAAAYABgAAAV34CeOIxCcAUCurIm+KLsKcH3Koq0H8r7Pvl8u6BvaFAyGQmg7RCRQCcRg
++ieUSjEVqDBFNlswuZ9OcLRRk1QRp3REgbxBIaPYQMdBP3gWmsGe1EPVDVGNQkMCwhMczYEI46G
JJIxLJU4f0SZInlFnJQDbAMFmSEAOw==}]
	    set rbIndArr(sel_disabled) [image create photo -format gif -data {
R0lGODlhGAAYAOMLAKKioqOjo6SkpKioqKmpqba2tre3t8vLy8zMzOTk5OXl5f//////////////
/////yH5BAEKAA8ALAAAAAAYABgAAARn8Mk5RbhB0M2x9xpHfSQmSmUaiKq6te0Ew2hqIIjhPiWh
LMBFYlDilX5BYGKGMSSTBWYA8QwipNTq4sp0aqMfQCpRXRZLA3JwWDSWCogDuC1NyeqeF37VqZ/c
NH8PFiohgjJiAWJ/EQA7}]
	    set rbIndArr(sel_pressed) [image create photo -format gif -data {
R0lGODlhGAAYAIQWAFiUvFmUu1eVu1eVvFiVu1iVvFiVvVmVvFeWvFiWu2KbwGKcwHuryn2sy6HE
2aLE2qPE2qPF2s3f687g68/g7M/h7P///////////////////////////////////////yH5BAEK
AB8ALAAAAAAYABgAAAV94CeOI3IUxYGQbAugcJy2rGyjBy3efEH3vRqQlxMFhr3Vp9d4PBrBpW1R
sVgtFMVNaqterZObgGBrfL8M28kWOV8hSFTbbXnEC2Z6WmbgUdwSYlwxChNfElo2OzwMDw57W4N3
MAMja5MoQpg/kzofl0Ceiz0JojV9BQYCniEAOw==}]
	}

	175 {
	    set rbIndArr(default) [image create photo -format gif -data {
R0lGODlhHAAcAIQdAIeHh4iIiImJiYqKiouLi4yMjJOTk5SUlJWVlZ+fn6CgoLCwsLGxsbKysrOz
s7S0tNDQ0NHR0dLS0tPT09XV1djY2NnZ2dra2uHh4eLi4u/v7/Dw8Pr6+v///////////yH5BAEK
AB8ALAAAAAAcABwAAAW54CeOJBCcaECu7IgOh6IcA9q2J/FcXOd3nMuDcLq5Ao3Nb/nbNIq3AEHC
rP4oBRVLmrF6Oxji6gT5ficBAQlpNjO0H6mm/d2I4w+62aE6XfRfFgEmAz2AVhwCJwiHXwcnCo1e
CpCSVgknB5ZVBieFmz+JKH+gHRVaAXmlfCJyoHZwbJsLcHEBZZJoamsEGI1htS4EEYBYwWsBDHNf
GrTHK4oEDhaGPhwWDkS7RkdpMTOKUNwsJinPJCEAOw==}]
	    set rbIndArr(disabled) [image create photo -format gif -data {
R0lGODlhHAAcAIQbAIeHh4iIiImJiYqKiouLi4+Pj5CQkJGRkZiYmKOjo6SkpKWlpaamprm5ubq6
uru7u7y8vL29vb6+vr+/v8DAwMXFxc7Ozs/Pz9XV1dbW1tnZ2f///////////////////yH5BAEK
AB8ALAAAAAAcABwAAAW44CeOJBCcaECu7IgKBoIYAtq258BQmOZrGApjcLq5AovLb/m7LIq3wMDB
rP4gBBVLWrF6NRXi6tT4fh8BAQlpNiu0H6ml/b2I4wy6+RkPUPRfEwEmAj2AVhk1AQeHXwYnCI1e
CJCSVpQBBpZVBSeFmz+JKH+gGhJaAXmlfHEDc5t2cGybCXB9ZZJoamsDXYdhti5TgBFZRicKr14W
tcEsNQMLExlLGRMLRLtGR2kxM4rO2yImKeEkIQA7}]
	    set rbIndArr(pressed) [image create photo -format gif -data {
R0lGODlhHAAcAIQYAIeHh4iIiImJiYqKio2NjY6Ojo+Pj5OTk5SUlJycnJ2dnZ6enqysrK2tra6u
rrCwsLGxsbS0tLW1tbu7u7y8vMDAwMHBwcPDw////////////////////////////////yH5BAEK
AB8ALAAAAAAcABwAAAW04CeOJBCcaECu7IgKBYIUAtq257BA1eVfFchicLq5AgrKb/mjKIq3gKDB
rP4cRJxAYu1eIrXVieH1NqQkZLn8dA0may8l/Aks4mzVCYL3PgImAj19VhYoBoReBScIiV0IjI5W
BycFklUEJ4KXP4YofJwXfyJ2oRdtdW+cFFmkCpwJKkdkjmcCYgIRiRGtYgO0cViyOEhwXhOxwzc1
AwoPFksWDwpEt0ZpmjEzNVDXLCYpyi0hADs=}]
	    set rbIndArr(alternate) [image create photo -format gif -data {
R0lGODlhHAAcAOMJAElphEppg0pphEtphElqg0pqg0pqhEtqg9La4f//////////////////////
/////yH5BAEKAA8ALAAAAAAcABwAAARo8MlJDxDYAEC7n1goht83nmMJoqzAlW0smHL7rnVLULmM
9yyDBOgjygoXIxHBbDqdqMEpQa1arSfp9Mql9p7g5smgjCXLqQf6NFyLfmieO9BZ3+RKlfH+IfTo
KhRkMYElBQIGAwNkhREAOw==}]
	    set rbIndArr(alt_disabled) [image create photo -format gif -data {
R0lGODlhHAAcAMIEAKKioqOjo6SkpOjo6P///////////////yH5BAEKAAcALAAAAAAcABwAAANZ
eLoc7iAARut6OFsbs3/b9Y1OSJ6BhaJUt45C857iTE6HzQp676ODoHA4nBGOyGTSqGweZ8So0ANw
/TLWaymnxSi63i9Y1qWUK1dTL6TgzdiMrAeukkBS7AQAOw==}]
	    set rbIndArr(alt_pressed) [image create photo -format gif -data {
R0lGODlhHAAcAOMKAFiUvFmUvFiVu1iVvFiVvVmVvFiWu1iWvFiWvdbl7v//////////////////
/////yH5BAEKAA8ALAAAAAAcABwAAARx8MlJxyljkBOo/1MmjlkBggCpjme4vlkLzwBIzLiX4rnL
z74fjCAR8h4II05wUNJWiah0OlVhVIqsdrtdXUfcsFZILUtVhK9TBQisX8W3SqKWD4Lyin1g8Nzy
HztKNSdrLXE/fYcTfzCLIAIAfwSELREAOw==}]
	    set rbIndArr(selected) [image create photo -format gif -data {
R0lGODlhHAAcAIQaAElphEppg0pphEtphElqg0pqg0pqhEtqg1FviVJviVNxilRxi1Vyi22GnG6H
nW+InXCInrPAy7TBzLXCzbbCzd7j6N7k6d/l6fj5+vn6+////////////////////////yH5BAEK
AB8ALAAAAAAcABwAAAWb4CeO5AEIqAEAZOuOaCzH7zvfcw3jvMDWvaDAJuz9dsUegZQUInmJxyMR
NIh6DEpGo8lMFr0P9sItayxgXOGEo5jNkmYssX1zMQjeAAexmx04ezgOfmUNcgJ0hXg4Bj0ThRFG
PAsWdhUKPFeUEnUYEZmaYkEIDQ15QU+IMkyrMwEtrjFHra46q7QvBE2wOiSOqb4vBQIGAwOOwiEA
Ow==}]
	    set rbIndArr(sel_disabled) [image create photo -format gif -data {
R0lGODlhHAAcAOMOAKKioqOjo6SkpKenp6ioqLW1tba2ttjY2NnZ2dra2u7u7u/v7/v7+/z8/P//
/////yH5BAEKAA8ALAAAAAAcABwAAASK8MlJg7UgAMr7vGDoeVloXuN3rlbKvoEHw1w5r0J1vyo7
GIbBa/NgERINh6OBILAeghVhoaw6FM7dJWG1IrSWQbKrZAi1BrK1AC6oq2yt+G0+AWwhxPvAwoMI
CmRYKxJGCGMMB1knhS8DBQVnT41gJjqVIpeYMR2bnDKVKRJRO6IUfpamnRoYnyMRADs=}]
	    set rbIndArr(sel_pressed) [image create photo -format gif -data {
R0lGODlhHAAcAIQbAFiUvFmUvFiVu1iVvFiVvVmVvFiWu1iWvFiWvV+Zv1+av2Gav2GbwGKbwHip
yXmqyXqrynuryrnT47rT47vU5LzU5ODr8+Hs8+Ls8/j7/Pn7/f///////////////////yH5BAEK
AB8ALAAAAAAcABwAAAWk4CeO5HAUw0AcAem+YyrPaQHDAK3Pd7z/qR5wCIARhkhXDpn0MYfOnwIC
UQwJImCjotlsNBQG8IP4NTDe9OYi3gkOv4paPfktdYru3JtJ7FA7EXtqDz+ANA+DaQ5PMnmKfTsE
hzQUihJ2AT8MF3sWCz9ZmxN6GRKgoR+UOgkPD35Qoo2psrM0Bi5Htjwvd7NFN7sDPbVIuMQjumPI
LwIAugTAPSEAOw==}]
	}

	200 {
	    set rbIndArr(default) [image create photo -format gif -data {
R0lGODlhIAAgAKUkAIeHh4iIiImJiZeXl5iYmJmZmZ6enp+fn6CgoKSkpKWlpaampqenp66urq+v
r7CwsLGxscPDw8TExMXFxeDg4OHh4ePj4+Tk5OXl5ebm5uzs7O3t7e7u7vX19fb29vj4+Pn5+fr6
+vz8/P39/f//////////////////////////////////////////////////////////////////
/////////////////////////////////////////////yH5BAEKAD8ALAAAAAAgACAAAAbnwJ9w
SBQKAshkoMhsDpVQqNN5RCImlU0opKlIDknBlFh9bEjotHrjSI5/SEJGTadjBsgpMtGp+9MeDHlM
SAsjf4gkIgqDQ0cDfYmIHgWNcAFzkokXjUgQmpptS5dnoIkagwEIpppgP0cTrJISAVUVsokUShy4
iBtKIL1/IMDCfh9KpcZqqEm3y2q6SRLQahF5AQfVaQajSMrLzUJIDtsNnQEY0BaWj5G9HgSWlwoi
vSIJtU1HfLIeC/OIIBlwwZQFPGLGJHGg4dQ5fW8uITkggYIGECA0UIjQDQmAiAKjREkIktDIiEEA
ADs=}]
	    set rbIndArr(disabled) [image create photo -format gif -data {
R0lGODlhIAAgAKUhAIeHh4iIiImJiZKSkpOTk5SUlJeXl5iYmJubm5ycnJ2dnaKioqOjo6SkpLCw
sLGxsbKyssTExMXFxcbGxsfHx8jIyMzMzM3Nzc7OztLS0tPT09TU1NXV1dbW1tfX19jY2NnZ2f//
////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////yH5BAEKAD8ALAAAAAAgACAAAAblwJ9w
SBQKAshkoMhsDpVQqNN5RB4gkkunY5E8DknBlFhlXEDotPqySI5/SEJFTadTBsgpEpGp+9MaCnlM
SAkff4ggHgmDQ0cDfYmIGgWNcAFzkokTjUgNmpoMg0hnoIkWowemmmA/Rw+rkg8BVRKxiRFKGLeI
F0ocvH8cv8F+G0qlxWqoSbbKarlJsM9pDnkBqtRoBkuXycrMQkgL2m3dlxTPnOeuAZDFGgSWlwke
vB4ItE1HfLEajOyKIBkwwdQEPGLGJGFg4ZS5hG+UHHgQwQIHDhYiOOCGBMAbgVGiQPxISOTHIAA7}]
	    set rbIndArr(pressed) [image create photo -format gif -data {
R0lGODlhIAAgAIQcAIeHh4iIiImJiY+Pj5CQkJGRkZOTk5SUlJaWlpeXl5ubm5ycnJ2dnaWlpaam
prS0tLW1tba2tre3t7m5ubq6uru7u76+vr+/v8DAwMHBwcLCwsPDw////////////////yH5BAEK
AB8ALAAAAAAgACAAAAXW4CeOpCgEaBqUbDuqMOy6J3o4D5Vl0+MYKcGMVFtQNsikkqJIDT8ogkRJ
pUYGqBkKYal6k5ZEloVKaL7oTQYxHp0G3TTaUmhDA1N5GtJGMfR6TSt3R4BpE2MBB4Z6QB8nDoxy
DgE1D5JpDyoVmGgUKhidXxigol4XKoWmSogpl6tKmimRsEkNWQEGtUmOhLufgygKu4IvARGwfIMm
AXCmFgR2dwgZnWuVLSdckmHSJCgDEIYQWEJDKQoTaUwo5k8qBjgTGBg9DUAoAE8lMf3u+2Ri/HMR
AgA7}]
	    set rbIndArr(alternate) [image create photo -format gif -data {
R0lGODlhIAAgAIQPAEpohEpohUtohElphElphUppg0pphEpphUtphEtphUlqg0pqhEpqhUtqg0tq
hP///////////////////////////////////////////////////////////////////yH5BAEK
ABAALAAAAAAgACAAAAV+ICSOpGgcRnoKZeuOjirPxvs2dK4WNqn/qh4ESAzYiEhjC8k8lHBM5MAX
RSJgVWbClGVyu8QhWIoajx/otHr9yLLfaTf8LZ+vdWXzT6D/McR9NF+BMoOEBiyGgSQFhwYLJYcK
LoEENgF6QgBgk0IQA1k8niMJUqMvDHknNUIhADs=}]
	    set rbIndArr(alt_disabled) [image create photo -format gif -data {
R0lGODlhIAAgAMIDAKKioqOjo6SkpP///////////////////yH5BAEKAAQALAAAAAAgACAAAANf
SLqs8TCARusCMUdrsf4Qx4BkKJZowKVpxbKN95bTMsOKfJfO3hK+VnBITA2OyKRycFs6kc2nMypV
Fn2660ar6XFNX0gNGB59x96ioJL1rYZol28tyt3odRsuL8/gOQkAOw==}]
	    set rbIndArr(alt_pressed) [image create photo -format gif -data {
R0lGODlhIAAgAOMMAFiUvFmUvFeVvFiVu1iVvFiVvVmVvFmVvVeWvFiWvFiWvVmWvP//////////
/////yH5BAEKAA8ALAAAAAAgACAAAAR88MlJJSKFYFy7n1oojt8njOi4lFSWviH7uHBd0rXdJXmv
VSdfL0ARCkFGn0KSPD6avscFmgNQrwSGdsvtMl5WlHe8BafI5CR6jKXi2iLBE45i0knzu6aAvAMo
C3oHFXoedCVtMgZUMhIBRgB/jRMKPZKTHQIDBJEEAwONEQA7}]
	    set rbIndArr(selected) [image create photo -format gif -data {
R0lGODlhIAAgAIQeAEpohEpohUtohElphElphUppg0pphEpphUtphEtphUlqg0pqhEpqhUtqg0tq
hE5th09th115kZepuJepuZiqudfd5Nfe5Njf5Nnf5d3j6N7j6PX3+Pb4+ff5+v///////yH5BAEK
AB8ALAAAAAAgACAAAAWy4CeOpGgcRnoKZeuOjirPxvs2dK4WNqn/qt4HSAzYiEhjC8k8lHBM5MAX
RSJgVWbCBIRQLp3OZQIhcnURjWfNzkSAwx9Eza5nyroBSkep+z0SWTIYf3UWgiochWwciCmKix4b
jgaEkYc/ezkTkYBAAnIZixkPPwxxaKJ+bnCoOg8SFhwcFRKlrZQ/LGe5MiQFvTILJcEpCi7BBDYB
uUIAiMdCHwNZPNIjCVLXLwyaJzVCIQA7}]
	    set rbIndArr(sel_disabled) [image create photo -format gif -data {
R0lGODlhIAAgAOMOAKKioqOjo6SkpKWlpaampq2trcrKysvLy+rq6uvr6+zs7O7u7vr6+vv7+///
/////yH5BAEKAA8ALAAAAAAgACAAAASU8MlJZbg4gMr7BFmYeR4onhhJoWyqtnBAxnFH05V5t9u0
4xLdr2VpEQ6JRiNhIMCKqMLCQa0uCkTjtMpdOIeXA3fsMIAvCjI3cQ401NVG+w13MNrpOvtsqJd5
LARbZAsDWSxShFgsUCgDBkkNCAaGRA9tLD2XmCIrnBmajZgCHUJnM22hNmCkKkE/ra4+QLKrIbEk
EQA7}]
	    set rbIndArr(sel_pressed) [image create photo -format gif -data {
R0lGODlhIAAgAIQbAFiUvFmUvFeVvFiVu1iVvFiVvVmVvFmVvVeWvFiWvFiWvVmWvFyXvl2Yvmqg
w5/C2J/C2aDD2drn8Nro8Nvo8dzp8eDr8uDr8/b5+/f6/Pj6/P///////////////////yH5BAEK
AB8ALAAAAAAgACAAAAW14CeOpIgQBYGiZeuOaizP7yvM+LzUZJr/Md7HByzWiEVjK5Fsqko3ZzNA
kkphVqdClGxEKBoNBdJIcoGOy2bNtjiMp19Dza5byj9AMVLvbx5ZMhV+dRNFej8ZhGwZh0CKixsY
gTGDkYaUBBCRf0VIMw0WixYMQAIfRQ6ifW5KSQwPExkZEg+lrplABVi5MwAkC70zByXCMi7GBDXC
QgaZQiIBVgC/0CMKTdXWLQIDBNQEAwPQIQA7}]
	}
    }
}
