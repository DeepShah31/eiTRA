if [ $# -ne 3 ]
then
echo Please enter three argument
else
 if [ $1 -gt $2 ]
 then
    if [ $1 -gt $3 ]
      then
      echo "$1 is greater"
     else
     echo " $3 is greater"
    fi
 else
 echo " $2 is greater"
fi
fi
