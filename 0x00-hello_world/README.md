0-preprocessor => Write a script that runs a C file through the preprocessor and save the result into another file.
	The C file name will be saved in the variable __*$CFILE*__
	The output should be saved in the file __*c*__

1-compiler => a script that compiles a C file but does not link.
	The C file name will be saved in the variable $CFILE
	The output file should be named the same as the C file, but with the extension .o instead of .c.
		Example: if the C file is main.c, the output file should be main.o

2-assembler => a script that generates the assembly code of a C code and save it in an output file.

3-name => a script that compiles a C file and creates an executable named __*cisfun*__

4-puts.c => a C program that prints exactly "Programming is like building a multilingual puzzle, followed by a new line.

5-printf.c => a C program that prints exactly, "with proper grammar, but the outcome is a piece of art,", followed by a new line.
	Use the function printf
	You are not allowed to use the function puts
	Your program should return 0
	Your program should compile without warning when using the -Wall gcc option

100-intel => a script that generates the assembly code (Intel syntax) of a C code and save it in an output file.

101-quotes => a C program that prints exactly, "and that piece of art is useful" - Dora Korpar, 2015-10-19", followed by a new line, to the standard error.
	You are not allowed to use any functions listed in the NAME section of the man (3) printf or man (3) puts
	Your program should return 1
	Your program should compile without any warnings when using the -Wall gcc option
