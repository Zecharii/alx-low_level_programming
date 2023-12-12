#!/bin/bash
gcc -c *.c -fpic && gcc *.o -o -shared liball.so
