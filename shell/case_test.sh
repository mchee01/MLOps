#!/bin/bash

case $1 in

start|START)
	echo "$1"
	;;
stop|STOP)
	echo $1
	;;
*)
	echo "start 또는 stop만 입력하세요."
esac