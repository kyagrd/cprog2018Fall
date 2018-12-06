FIFO1="_FIFO1_$RANDOM"
FIFO2="_FIFO2_$RANDOM"
mkfifo $FIFO1 $FIFO2
sleep 0.05
cat deal_$1_latter >$FIFO1 &
cat deal_$1_former >$FIFO2 &
($2 mefirst && sleep 0.1) <$FIFO2 >$FIFO1 &
($3         && sleep 0.1) <$FIFO1 >$FIFO2
sleep 0.1
rm $FIFO1 $FIFO2
sleep 0.05
