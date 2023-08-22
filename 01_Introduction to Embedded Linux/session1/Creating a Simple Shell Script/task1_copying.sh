#!/bin/sh
echo "enter the path of the file you need to copy"
read copy
echo "enter the path of the destination"
read destination
if [ ! -e "$destination" ];
then
echo "the destination does not exist"
mkdir $copy
fi
cp "$copy" "$destination"