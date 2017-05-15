if [ $# -ne 2 ]
then 
echo "Enter two numbers"
else
a=$1
while [ $a -le $2 ]
do
echo $a
a=`expr $a + 1`

done
fi
