#!/bin/bash
while who | grep ^user > /dev/null
do
    sleep 10
done

echo "user님 로그아웃 하셨습니다."