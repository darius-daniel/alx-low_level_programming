#!/bin/bash
gcc -c *.c
ar scr libmy.a *.o
ar scr liball.a *.o
