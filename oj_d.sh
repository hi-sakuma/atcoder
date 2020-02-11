#!/bin/sh
if [ -e ./test ]; then
    rm -r ./test
fi
a=$1
b=${a}_${2}
oj d https://atcoder.jp/contests/$a/tasks/$b
exit 0