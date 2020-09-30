#!/bin/bash

git ls-files ../src | grep ".*\.$1" | xargs cat | wc -l
