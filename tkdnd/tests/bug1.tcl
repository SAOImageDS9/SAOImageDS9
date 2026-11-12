package require tkdnd
tkdnd::drop_target register . *
bind . <<Drop:DND_Files>>   [list HandleDrop %D]
