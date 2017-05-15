a=$1
b=$3
case "$2" in
          +)
           echo Addition is
           echo `expr $a + $b`;;
          -)
           echo Subtraction is
           echo `expr $a - $b`;;
          \*)
           echo Multiplication is
           echo `expr $a \* $b`;;
          /)
           echo Division is
           echo `expr $a / $b`;;
          *)
           echo "Enter valid entry"
esac

