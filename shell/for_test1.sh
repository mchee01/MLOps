#!/bin/bash
for i in $(awk '$3 ~ /^[0-9]/{print $3}' lastb.txt | sort -n | uniq)
do
    if [ $(grep -c $i lastb.txt) -ge 40 ]
    then
        echo $i
    fi
done