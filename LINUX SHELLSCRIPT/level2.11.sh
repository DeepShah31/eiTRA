echo Enter the Number
read a
b=0
c=0
while [ $a -gt 0 ]
do
  b=`expr $a % 10`
  c=`expr $c + $b`
  a=`expr $a / 10`
done
echo "Addition of number is $c "

