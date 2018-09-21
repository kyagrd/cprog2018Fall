#!/bin/bash
GITLABIDS=`sort gitlabids`

HW2ANS=kyagrd/hw2/bin/Debug/hw2

WORD1=b
WORD2=bca
WORD3=bcbc
WORD4=aabbaa
WORD5=aabcbaa
WORD6=abcdabc
WORD7=1234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567
WORD8=1234567890123456789012345678901234567890123456789012345678901234321098765432109876543210987654321098765432109876543210987654321

for id in $GITLABIDS
do
	if [ -f "$id/hw2/bin/Debug/hw2" ]
       	then
		echo ==== testing $id ==== $( \
			(test "`diff <(echo $WORD1 | $id/hw2/bin/Debug/hw2) <(echo $WORD1 | $HW2ANS)`" = ""  && echo 1 || echo 0)  > _hw2$id.txt; \
			(test "`diff <(echo $WORD2 | $id/hw2/bin/Debug/hw2) <(echo $WORD2 | $HW2ANS)`" = ""  && echo 1 || echo 0) >> _hw2$id.txt; \
			(test "`diff <(echo $WORD3 | $id/hw2/bin/Debug/hw2) <(echo $WORD3 | $HW2ANS)`" = ""  && echo 1 || echo 0) >> _hw2$id.txt; \
			(test "`diff <(echo $WORD4 | $id/hw2/bin/Debug/hw2) <(echo $WORD4 | $HW2ANS)`" = ""  && echo 1 || echo 0) >> _hw2$id.txt; \
			(test "`diff <(echo $WORD5 | $id/hw2/bin/Debug/hw2) <(echo $WORD5 | $HW2ANS)`" = ""  && echo 1 || echo 0) >> _hw2$id.txt; \
			(test "`diff <(echo $WORD6 | $id/hw2/bin/Debug/hw2) <(echo $WORD6 | $HW2ANS)`" = ""  && echo 1 || echo 0) >> _hw2$id.txt; \
			(test "`diff <(echo $WORD7 | $id/hw2/bin/Debug/hw2) <(echo $WORD7 | $HW2ANS)`" = ""  && echo 1 || echo 0) >> _hw2$id.txt; \
			(test "`diff <(echo $WORD8 | $id/hw2/bin/Debug/hw2) <(echo $WORD8 | $HW2ANS)`" = ""  && echo 1 || echo 0) >> _hw2$id.txt; \
			echo "$(echo 0`sed s/^/+/ _hw2$id.txt` | bc)/2" | bc)

	fi
done
