#!/bin/bash

src="../src"

for folder in $(ls $src | sort -n)
do
    node main.js $( \
        find $src/$folder -type f \
        | grep -oP '\d{4,}' \
        | tr '\n' ' ' \
    )
done
