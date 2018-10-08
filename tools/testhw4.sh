#!/bin/bash
GITLABIDS=`sort gitlabids`

HW3ANS=kyagrd/hw4/bin/Debug/hw4

WORD1="0 0 `seq 4 11 ` 1 0 0 0 0 0 0 0 0 0"
WORD2="0 0 `seq -11 -4` 1 0 0 0 0 0 0 0 0 0"
WORD3=`seq 0 19`
WORD4=`seq -19 0`
WORD5=`seq -9 10`
WORD6="0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0"
WORD7="1 0 0 0 0 0 0 0 0 0 0 1 0 0 0 0 0 0 0 0"
WORD8="1 0 0 0 0 0 0 0 0 0 1 0 0 0 0 0 0 0 0 0"

for id in $GITLABIDS
do
	if [ -f "$id/hw4/bin/Debug/hw4" ]
       	then
		echo ==== testing $id ==== $( \
			(test "`diff <(echo $WORD1 | timeout 1 $id/hw4/bin/Debug/hw4) <(echo $WORD1 | $HW3ANS)`" = ""  && echo 1 || echo 0)  > _hw4$id.txt; \
			(test "`diff <(echo $WORD2 | timeout 1 $id/hw4/bin/Debug/hw4) <(echo $WORD2 | $HW3ANS)`" = ""  && echo 1 || echo 0) >> _hw4$id.txt; \
			(test "`diff <(echo $WORD3 | timeout 1 $id/hw4/bin/Debug/hw4) <(echo $WORD3 | $HW3ANS)`" = ""  && echo 1 || echo 0) >> _hw4$id.txt; \
			(test "`diff <(echo $WORD4 | timeout 1 $id/hw4/bin/Debug/hw4) <(echo $WORD4 | $HW3ANS)`" = ""  && echo 1 || echo 0) >> _hw4$id.txt; \
			(test "`diff <(echo $WORD5 | timeout 1 $id/hw4/bin/Debug/hw4) <(echo $WORD5 | $HW3ANS)`" = ""  && echo 1 || echo 0) >> _hw4$id.txt; \
			(test "`diff <(echo $WORD6 | timeout 1 $id/hw4/bin/Debug/hw4) <(echo $WORD6 | $HW3ANS)`" = ""  && echo 1 || echo 0) >> _hw4$id.txt; \
			(test "`diff <(echo $WORD7 | timeout 1 $id/hw4/bin/Debug/hw4) <(echo $WORD7 | $HW3ANS)`" = ""  && echo 1 || echo 0) >> _hw4$id.txt; \
			(test "`diff <(echo $WORD8 | timeout 1 $id/hw4/bin/Debug/hw4) <(echo $WORD8 | $HW3ANS)`" = ""  && echo 1 || echo 0) >> _hw4$id.txt; \
			echo "$(echo 0`sed s/^/+/ _hw4$id.txt` | bc)/2" | bc)

	fi
done
