#!/bin/zsh

# Script to backup a directory

# Check if the correct number of arguments are provided
if [ "$#" -ne 2 ]; then
   echo "Usage: $0 source_directory backup_directory"
   exit 1
fi

# Assign the arguments to variables for easier access
source_directory=$1
backup_directory=$2

# Check if the backup directory exists, if not create it
if [ ! -d "$backup_directory" ]; then
   echo "The backup directory $backup_directory does not exist."
   echo "Creating backup directory."
   mkdir -p "$backup_directory"
fi

# Use rsync to copy the files from the source directory to the backup directory
# -r for recursive, -u for update (skip files that are newer on the receiver), --exclude'*/' to ignore subdirectories
rsync -ru --exclude='*/' "$source_directory" "$backup_directory"

echo "Backup of $source_directory completed in $backup_directory"

