#!/bin/bash
gcc -c -fPIC *.c
gcc -shared *.o -o libdynamic.so
