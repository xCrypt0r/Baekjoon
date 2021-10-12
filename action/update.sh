#!/bin/bash

src="../src"
id=($(
    find $src -type f \
    | grep -oP '\d{4,}' \
    | uniq \
    | tr '\n' ' ' \
))

echo "${#id[@]}문제의 정보를 업데이트 합니다."
node main.js ${id[@]}