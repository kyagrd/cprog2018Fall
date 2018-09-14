#!/bin/bash
GITLABIDS=`sort gitlabids`

for id in $GITLABIDS
do
	if [ -d "$id" ]
       	then
	       	# sem -j+0 --id cprogpull "echo start pull $id; (cd -- $id && git pull); echo end pull $id" &
	       	echo start pull $id; (cd -- $id && git pull); echo end pull $id
	else
		# sem -j+0 --id cprogpull "echo start clone $id; git clone git@gitlab.com:$id/cprog.git $id; echo end clone $id" &
		echo start clone $id; git clone git@gitlab.com:$id/cprog.git $id; echo end clone $id
	fi
done

# sem --wait --id cprogpull
