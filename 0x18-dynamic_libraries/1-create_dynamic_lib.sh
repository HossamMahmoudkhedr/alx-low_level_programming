#!/bin/bash
gcc -c -fPIC *.c -o ${file%.c}.o
gcc -shared *.o -o libdynamic.so
