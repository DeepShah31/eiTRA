clear
echo "User name is $USER"
echo "Logname is $LOGNAME"
echo "Current Shell is $SHELL"
echo "Home Directory is $HOME"
echo "Operating System `uname -o`"
echo "Current Path $PATH"
echo "Current Directory `pwd`"
echo "Current Logged Users $nouser"
echo "About OS Version `uname -a`"
echo "Model: `cat /proc/ide/hda/model` "
cat /etc/shells
xinput --list --short
cat /proc/cpuinfo
cat /proc/meminfo
lscpu
 df -T
