a=$1
case $a in
    [A-Z]*)
        b=`echo $a | tr '[:upper]' '[:lower]'`;;
    [a-z]*)
        b=`echo $a | tr '[:lower]' '[:upper]'`;;
esac
cat $a>$b

