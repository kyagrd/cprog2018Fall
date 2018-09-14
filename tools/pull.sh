#!/bin/bash
GITLABIDS=`cat gitlabids`

for id in $GITLABIDS
do
	if [ ! -d "$(id)" ]
       	then
		git clone git@gitlab.com:$id/cprog.git $id ;
	else
		cd $id && git pull
	fi
done

