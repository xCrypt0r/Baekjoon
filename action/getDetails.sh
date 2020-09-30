#!/bin/bash

lines=$(
    git ls-files ../src \
    | grep ".*\.$1" \
    | xargs cat \
    | wc -l \
)
size=$( \
    git ls-files ../src \
    | grep ".*\.$1" \
    | xargs du -bc \
    | tail -1 \
    | cut -f1 \
)

echo "$lines $size"
