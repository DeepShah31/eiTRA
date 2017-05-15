a=5
while [ $a -ne 0 ]
do
echo $a
a=`expr $a - 1`
done
