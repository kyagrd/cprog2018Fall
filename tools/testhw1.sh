#!/bin/bash
GITLABIDS=`sort gitlabids`

HW1ANS=kyagrd/hw1/bin/Debug/hw1

for id in $GITLABIDS
do
	if [ -f "$id/hw1/bin/Debug/hw1" ]
       	then
		echo ==== testing $id ==== $( \
			(test "`diff <(echo 1  0  0 | timeout 0.2 $id/hw1/bin/Debug/hw1) <(echo 1  0  0 | $HW1ANS)`" = ""  && echo 1 || echo 0)  > _hw1$id.txt; \
			(test "`diff <(echo 1  5  1 | timeout 0.2  $id/hw1/bin/Debug/hw1) <(echo 1  5  1 | $HW1ANS)`" = ""  && echo 1 || echo 0) >> _hw1$id.txt; \
			(test "`diff <(echo 1  6  4 | timeout 0.2 $id/hw1/bin/Debug/hw1) <(echo 1  6  4 | $HW1ANS)`" = ""  && echo 1 || echo 0) >> _hw1$id.txt; \
			(test "`diff <(echo 1 25 12 | timeout 0.2 $id/hw1/bin/Debug/hw1) <(echo 1 25 12 | $HW1ANS)`" = ""  && echo 1 || echo 0) >> _hw1$id.txt; \
			(test "`diff <(echo 2  6  6 | timeout 0.2 $id/hw1/bin/Debug/hw1) <(echo 2  6  6 | $HW1ANS)`" = ""  && echo 1 || echo 0) >> _hw1$id.txt; \
			(test "`diff <(echo 3  7  7 | timeout 0.2 $id/hw1/bin/Debug/hw1) <(echo 3  7  7 | $HW1ANS)`" = ""  && echo 1 || echo 0) >> _hw1$id.txt; \
			echo 0`sed s/^/+/ _hw1$id.txt` | bc )

	fi
done
