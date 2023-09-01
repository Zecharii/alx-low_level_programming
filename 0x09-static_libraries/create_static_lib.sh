#!/bin/bash
gcc -Wall -Wpedantic -Werror -Wextra -c *.c
ar -rc liball.a *.o
ranlib liball.a
