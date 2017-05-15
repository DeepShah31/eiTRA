echo "Enter the number"
read n
i=1
while [ $i -le 10 ]
do
echo `expr $i \* $n`
i=`expr $i + 1`
done
exit 0
