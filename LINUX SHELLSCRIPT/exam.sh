if [ $# -ne 1 ]
then
echo "enter atleat 1 number"
else
fact = 1
while [ $n -ge 0 ]
do

fact =`expr fact \* x`
x=n - 1
echo $fact
`expr $n - 1` 
done
fi

