#!/bin/bash

gcc -c -Wall -Werror -Wextra -pedantic -std=gnu89 *.o *.c

ar -rcs liball.c *.o
