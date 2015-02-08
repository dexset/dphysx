#!/bin/sh
echo "Building dphysx"
DIR=$(dirname ${BASH_SOURCE[0]})
cd $DIR
if [ ! -d lib ]; then
    mkdir lib
fi
g++ -w -D_DEBUG -c ./src/base.cpp -o ./lib/base.o &&
ar rcs ./lib/libdphysx.a ./lib/base.o
rm ./lib/base.o
