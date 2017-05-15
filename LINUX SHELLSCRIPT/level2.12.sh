if [ $# -ne 1 ]
a=$1
then
  echo "Usage - $0 file-name"
fi

if [ -f $a ]
then
echo "$a exist"
else
echo "$a does not exist"
fi

