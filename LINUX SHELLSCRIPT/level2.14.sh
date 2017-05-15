if [ $# -ne 3 ]
then 
echo "Please enter valid input"
else
a=$1
b=$2
c=`expr $1 + $2`
cat $3|head -$c|tail -$b
fi
