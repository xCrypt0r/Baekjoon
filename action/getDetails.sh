#!/bin/bash

src="../src"
ext="$1"
lines=$(
    git ls-files $src \
    | grep ".*\.$ext$" \
    | xargs cat \
    | wc -l \
)
size=$( \
    git ls-files $src \
    | grep ".*\.$ext$" \
    | xargs du -bc \
    | tail -1 \
    | cut -f1 \
)

echo $lines $size
