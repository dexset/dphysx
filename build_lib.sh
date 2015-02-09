#!/bin/sh
echo "Building dphysx"
DIR=$(dirname ${BASH_SOURCE[0]})
cd $DIR
if [ ! -d lib ]; then
    mkdir lib
fi
NAMES=$(find -wholename "./src/*.cpp" | sed 's/\.\/src\///g' | sed 's/\.cpp//g')
for NAME in $NAMES ; do
    echo Building $NAME.cpp
    if !( g++ -w -D_DEBUG -c ./src/$NAME.cpp -o ./lib/$NAME.o ); then
        echo Compilation error...
        exit 0;
    fi
done
NAMES=$(find -wholename "./src/*.cpp" | sed "s/\.\/src\//\.\/lib\//g" | sed 's/\.cpp/\.o/g')
echo Building lib
ar rcs ./lib/libdphysx.a $NAMES
echo Done
rm $NAMES
