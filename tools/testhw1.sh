#!/bin/bash
GITLABIDS=`sort gitlabids`

for id in $GITLABIDS
do
	if [ -f "$id/hw1/bin/Debug/hw1" ]
       	then
		echo ==== testing $id ====
		# 아직 채점을 실제로 하지는 않고 hw1 실행파일이 제대로 된 경로에 만들어졌는지만
	fi
done
