#! /bin/bash

PATH="../../projects/27_day/harib24g/"
DIR=`/bin/ls ${PATH}`

for tmp_ in ${DIR}; do
    if [ -d $tmp_ ]; then
        /bin/cp $PATH/$tmp_/Makefile $tmp_
    fi
done
