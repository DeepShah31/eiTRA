echo "Enter the number"
read a
echo "Enter the number"
read b
echo "Enter your choise"
read c
 if [ $c -eq 1 ]
    then
      echo Addition is
      echo `expr $a + $b`
    
 elif [ $c -eq 2 ]
    then
      echo Addition is
      echo `expr $a - $b`
    
 elif [ $c -eq 3 ]
    then
      echo Addition is
      echo `expr $a \* $b`
    
 elif [ $c -eq 4 ]
    then
      echo Addition is
      echo `expr $a / $b`
 
else 
     echo "Enter valid choice" 
fi
     
