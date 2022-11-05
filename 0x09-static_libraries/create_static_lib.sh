#!/bin/bash
gcc -c -Wall -Werror -Wextra -pedantic *.c
ar -rc liball.a *o
