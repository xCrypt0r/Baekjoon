#!/bin/bash

ext="$1"

if [[ -z $ext ]]; then
    pattern="../src/*.*"
else
    pattern="../src/*.$ext"
fi

lines=$(
    git ls-files $pattern \
    | xargs cat \
    | wc -l \
)
size=$( \
    git ls-files $pattern \
    | xargs du -bc \
    | tail -1 \
    | cut -f1 \
)

echo "$lines $size"