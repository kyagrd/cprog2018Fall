#!/bin/bash
GITLABIDS=`sort gitlabids`

HW3ANS=kyagrd/hw3/bin/Debug/hw3

WORD1=`./random-word-generator  10`
WORD2=`./random-word-generator  20`
WORD4=`./random-word-generator  30`
WORD5=`./random-word-generator  50`
WORD6=`./random-word-generator  60 `
WORD7=`./random-word-generator  80`
WORD8=`./random-word-generator 100`


for id in $GITLABIDS
do
	if [ -f "$id/hw3/bin/Debug/hw3" ]
       	then
		echo ==== testing $id ==== $( \
			(test "`diff <(echo $WORD1 | timeout 1 $id/hw3/bin/Debug/hw3) <(echo $WORD1 | $HW3ANS)`" = ""  && echo 1 || echo 0)  > _hw3$id.txt; \
			(test "`diff <(echo $WORD2 | timeout 1 $id/hw3/bin/Debug/hw3) <(echo $WORD2 | $HW3ANS)`" = ""  && echo 1 || echo 0) >> _hw3$id.txt; \
			(test "`diff <(echo $WORD3 | timeout 1 $id/hw3/bin/Debug/hw3) <(echo $WORD3 | $HW3ANS)`" = ""  && echo 1 || echo 0) >> _hw3$id.txt; \
			(test "`diff <(echo $WORD4 | timeout 1 $id/hw3/bin/Debug/hw3) <(echo $WORD4 | $HW3ANS)`" = ""  && echo 1 || echo 0) >> _hw3$id.txt; \
			(test "`diff <(echo $WORD5 | timeout 1 $id/hw3/bin/Debug/hw3) <(echo $WORD5 | $HW3ANS)`" = ""  && echo 1 || echo 0) >> _hw3$id.txt; \
			(test "`diff <(echo $WORD6 | timeout 1 $id/hw3/bin/Debug/hw3) <(echo $WORD6 | $HW3ANS)`" = ""  && echo 1 || echo 0) >> _hw3$id.txt; \
			(test "`diff <(echo $WORD7 | timeout 1 $id/hw3/bin/Debug/hw3) <(echo $WORD7 | $HW3ANS)`" = ""  && echo 1 || echo 0) >> _hw3$id.txt; \
			(test "`diff <(echo $WORD8 | timeout 1 $id/hw3/bin/Debug/hw3) <(echo $WORD8 | $HW3ANS)`" = ""  && echo 1 || echo 0) >> _hw3$id.txt; \
			echo "$(echo 0`sed s/^/+/ _hw3$id.txt` | bc)/2" | bc)

	fi
done
