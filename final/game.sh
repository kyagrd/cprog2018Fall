mkfifo fifo1 fifo2
./simpledealer $1 latter >fifo1 &
./simpledealer $1        >fifo2 &
$2 mefirst <fifo2 >>fifo1 &
$3         <fifo1 >>fifo2
sleep 1
rm fifo1 fifo2
