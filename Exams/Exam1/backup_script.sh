#!bin/bash
echo $USERNAME
echo $HOSTNAME
echo "$(date)"

mkdir backupss

for arg in "$@"
do 
	
	sudo tar -czf "backup_<$arg>_<$(date +%Y-%m-%d-%H-%M-%S)>.tar.gz" "$arg"
	mv *.gz backupss
	
	if [ $? -eq 0 ]; then
		echo "Backup $arg successfully "
	else
		echo "Backup $arg failed"
	fi

done
