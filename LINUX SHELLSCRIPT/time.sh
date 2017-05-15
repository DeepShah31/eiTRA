readseconds ()
{
echo "Enter the Seconds"
read a
}
readseconds
if [ $a -lt 0 ]
then 
  echo "Please enter valid Seconds"
  readseconds
fi
b=`expr $a % 60`
c=`expr $a / 60` 
d=`expr $c % 60`
e=`expr $c / 60` 
echo $a seconds in hours:minutes:seconds is $e:$d:$b


