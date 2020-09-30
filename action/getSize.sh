#!/bin/bash

size=$( \
    git ls-files ../src \
    | grep ".*\.$1" \
    | xargs du -bch \
    | tail -1 \
    | cut -f1 \
)

if [[ ${size: -1} = +([0-9]) ]]
then
    echo "${size}B"
else
    echo $size
fi
