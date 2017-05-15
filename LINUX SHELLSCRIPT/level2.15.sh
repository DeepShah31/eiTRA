if [ $# -eq 0 ]
then 
 echo "Please enter valid argument"
fi
a=$1
case $a in
         -c)
             clear
             echo "$a cleared screen";;
         -d)
             ls
             echo "$a displays list of files";;
         -m)
             mc
             echo "$a  midnight commander shwll";;
         -e)
             gedit
             echo "$a gedit screen";;
          *)
              echo "invalid input";;
esac


