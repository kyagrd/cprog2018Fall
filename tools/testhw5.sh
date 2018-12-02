#!/bin/bash
GITLABIDS=`sort gitlabids`

HW5ANS=kyagrd/hw5/bin/Debug/hw5

WORD1="0 0 `seq 3 27 ` 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0"
WORD2="0 0 `seq -27 -3` 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0"
WORD3=`seq 0 53`
WORD4=`seq -53 0`
WORD5=`seq -27 26`
WORD6="0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0"
WORD7="1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0"
WORD8="1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0"
WORD9="0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 -1 0 0 -1 0 0 -1 0 0 -1 0 0 -1 0 0 -1 0 0 -1 0 0 -1 0 0 -1"
WORD0="1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1"

for id in $GITLABIDS
do
	if [ -f "$id/hw5/bin/Debug/hw5" ]
       	then
		echo ==== testing $id ==== $( \
			(test "`diff <(echo $WORD1 | timeout 1 $id/hw5/bin/Debug/hw5) <(echo $WORD1 | $HW5ANS)`" = ""  && echo 1 || echo 0)  > _hw5$id.txt; \
			(test "`diff <(echo $WORD2 | timeout 1 $id/hw5/bin/Debug/hw5) <(echo $WORD2 | $HW5ANS)`" = ""  && echo 1 || echo 0) >> _hw5$id.txt; \
			(test "`diff <(echo $WORD3 | timeout 1 $id/hw5/bin/Debug/hw5) <(echo $WORD3 | $HW5ANS)`" = ""  && echo 1 || echo 0) >> _hw5$id.txt; \
			(test "`diff <(echo $WORD4 | timeout 1 $id/hw5/bin/Debug/hw5) <(echo $WORD4 | $HW5ANS)`" = ""  && echo 1 || echo 0) >> _hw5$id.txt; \
			(test "`diff <(echo $WORD5 | timeout 1 $id/hw5/bin/Debug/hw5) <(echo $WORD5 | $HW5ANS)`" = ""  && echo 1 || echo 0) >> _hw5$id.txt; \
			(test "`diff <(echo $WORD6 | timeout 1 $id/hw5/bin/Debug/hw5) <(echo $WORD6 | $HW5ANS)`" = ""  && echo 1 || echo 0) >> _hw5$id.txt; \
			(test "`diff <(echo $WORD7 | timeout 1 $id/hw5/bin/Debug/hw5) <(echo $WORD7 | $HW5ANS)`" = ""  && echo 1 || echo 0) >> _hw5$id.txt; \
			(test "`diff <(echo $WORD8 | timeout 1 $id/hw5/bin/Debug/hw5) <(echo $WORD8 | $HW5ANS)`" = ""  && echo 1 || echo 0) >> _hw5$id.txt; \
			(test "`diff <(echo $WORD9 | timeout 1 $id/hw5/bin/Debug/hw5) <(echo $WORD9 | $HW5ANS)`" = ""  && echo 1 || echo 0) >> _hw5$id.txt; \
			(test "`diff <(echo $WORD0 | timeout 1 $id/hw5/bin/Debug/hw5) <(echo $WORD0 | $HW5ANS)`" = ""  && echo 1 || echo 0) >> _hw5$id.txt; \
			echo "$(echo 0`sed s/^/+/ _hw5$id.txt` | bc)/2" | bc)

	fi
done
