#!/bin/bash

gcc -Wall -pedantic -Werror -Wextra -c -std=gnu89 *.c
ar -rcs liball.a *.o
ranlib liball.a

