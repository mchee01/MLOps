#!/bin/bash
for i in $(grep nologin$ /etc/passwd | cut -d: -f1)
do
    lastlog | grep $i | awk '$2 ~ /**한번도/{print $1}'
done