@echo off

REM Build HTML and nroff documentation without using the Makefile.
REM Can be used when working on the documentation.

dtplite -ext html -module "Img 2.0 Reference Manual" -o html -exclude *.inc html .

md mann
for %%i in ("*.man") do (
    echo %%i to nroff
    dtplite -ext n -o mann nroff %%i
)
