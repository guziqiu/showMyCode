#########################################################################
# File Name: 7.until.sh
# Author: 古子秋
# mail: 
# Created Time: Sun 29 Nov 2020 06:48:01 PM CST
#########################################################################
#!/bin/bash
num=0
until [[ $num -eq 100 ]];do
	echo $num
	num=$[ ${num} + 1]
done
