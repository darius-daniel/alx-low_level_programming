#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic *.o *.c
ar -rc liball.a *.o
