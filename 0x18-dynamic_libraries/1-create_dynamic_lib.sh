#!/bin/bash
gcc -fpic -c *.c
gcc -shared *.o -o liball.so
