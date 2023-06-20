#!/bin/bash
gcc -c -fPIC *.c -o *.o
gcc -shared *.o -o libdynamic.so
