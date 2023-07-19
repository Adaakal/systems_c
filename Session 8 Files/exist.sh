#!/bin/bash

#check if the user supplied exactly one argument
if [ "$#" -ne 1 ] ; then
   echo "You must supply exactly one argument. "
   echo "Example: $0 /etc"
   exit 1  # return with value 1
fi 

#Check if the file/directory exists
test -e "$1" # Perform the actual test
if [ "$?" -eq 0 ]; then
   echo "File or directory exists"
elif [ "$?" -eq 1 ]; then
   echo "File or directory does not exist"
   exit 3 #return with a special code so other programs can use
          #this value to see if a file doesn't exist
else
   echo "Unknown return value from test..."
   exit 1  #unknown error occured, exit with 1
fi
exit 0  #if the file or directory exists, exit with 0
