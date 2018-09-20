#!/bin/bash
GITLABIDS=`sort gitlabids`

for id in $GITLABIDS
do
	if [ -f "$id/hw0/bin/Debug/hw0" ]
       	then
		echo ==== testing $id ==== $( \
			(test "`echo 1   | $id/hw0/bin/Debug/hw0`" = 1     && echo 1 || echo 0)  > _hw0$id.txt; \
			(test "`echo 5   | $id/hw0/bin/Debug/hw0`" = 25    && echo 1 || echo 0) >> _hw0$id.txt; \
			(test "`echo 10  | $id/hw0/bin/Debug/hw0`" = 100   && echo 1 || echo 0) >> _hw0$id.txt; \
			(test "`echo 79  | $id/hw0/bin/Debug/hw0`" = 6241  && echo 1 || echo 0) >> _hw0$id.txt; \
			(test "`echo 123 | $id/hw0/bin/Debug/hw0`" = 15129 && echo 1 || echo 0) >> _hw0$id.txt; \
			echo 0`sed s/^/+/ _hw0$id.txt` | bc )
	fi
done
