#! /usr/bin/env bash

version="$1"

cd "$(dirname "$(which "$0")")/.." || exit 1

if [ -z "${version}" ]; then
	version="$(cat configure.ac | grep AC_INIT | head -1 | sed 's@^AC_INIT([^,]*, *@@;s@,.*$@@;s@ *)$@@')"
fi

newBody="$(cat tls.htm | sed 's@\[@<nowiki>[</nowiki>@g' | sed '/<\/body>/,$ d;0,/<body[ >]/ d;/<!--/,/-->/ d' | sed 's/@@VERS@@/'"${version}"'/g' | grep -iv '^<!doctype')"
oldBody="$(fossil wiki export 'Documentation')"

if [ "${newBody}" != "${oldBody}" ]; then
	echo "${newBody}" | fossil wiki commit 'Documentation'
fi
