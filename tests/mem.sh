#!/bin/sh

program="$*"

if [[ -z "$program" ]] || [[ ! -f "$1" ]]; then
	echo "$program: no such file or directory" 1>&2
	exit 1
fi

var=$(valgrind --tool=memcheck --leak-check=summary $program 2>&1 >/dev/null | tail -n 10 | head -n 1)
var=$(printf "%s\n" $var | head -4 | tail -n 1)

printf "%s" $var
