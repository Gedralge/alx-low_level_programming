#!/bin/bash
gcc -fPIC -c *.c
gcc -shared -c liball.so *.o
