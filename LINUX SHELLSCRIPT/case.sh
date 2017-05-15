echo "Enter the number"
read a
echo "Enter the number"
read b
echo "Enter your choise"
read c
case "$c" in
          1)
           echo Addition is
           echo `expr $a + $b`;; 
          2)
           echo Subtraction is
           echo `expr $a - $b`;; 
          3)
           echo Multiplication is
           echo `expr $a \* $b`;; 
          4)
           echo Division is
           echo `expr $a / $b`;;
          *)
           echo "Enter valid entry"
esac 

