#!/bin/sh
gcc -c -fPIC *.c
gcc -shared *.o -o liball.so
