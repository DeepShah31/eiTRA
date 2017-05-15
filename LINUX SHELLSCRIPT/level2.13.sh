cat "$1" > /tmp/file.$$   2>/tmp/file0.$$

grep "*"  /tmp/file.$$    >/tmp/file0.$$

if [ $? -eq 1 ]
then
    echo "Symbol Required"
else
    echo "Symbol Not required"    
fi    

rm -f /tmp/file.$$
rm -f /tmp/file0.$$

