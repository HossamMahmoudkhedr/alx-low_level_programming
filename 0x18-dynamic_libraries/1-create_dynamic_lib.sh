#!/bin/bash
gcc -c -fPIC *.c -o ${file%}.o
gcc -shared *.o -o libdynamic.so
