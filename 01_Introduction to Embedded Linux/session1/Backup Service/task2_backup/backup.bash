#!/bin/bash

timestamp=$( data +"%Y-%m-%d )

rsync -ra /home/Desktop/newfolder  /home/Desktop/backups/backup-$timestamp

cd /home/Desktop/backups/

folders=$(ls -d */ | wc -l)

if [ "$folders" -gt 5 ]; then
old=$( ls -td */ | tail -n 1)
rm -rf "$old"
fi

