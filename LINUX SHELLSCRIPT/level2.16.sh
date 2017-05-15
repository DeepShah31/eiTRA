A
B
a=`date +"%H"`
if [ $a -ge 6 -a $a -le 12 ]
then
 b="Good Morning"
elif [ $a -ge 12 -a $a -le 17 ]
then
 b="Good Afternoon"
elif [ $a -ge 17 -a $a -le 20 ]
then
 b="Good Evening"
else
 b="Good Night"
fi
dialog --title "Greeting" --msgbox "$b" 5 20
