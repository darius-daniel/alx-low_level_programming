0-preprocessor => Write a script that runs a C file through the preprocessor and save the result into another file.
	The C file name will be saved in the variable __*$CFILE*__
	The output should be saved in the file __*c*__

1-compiler => a script that compiles a C file but does not link.
	The C file name will be saved in the variable $CFILE
	The output file should be named the same as the C file, but with the extension .o instead of .c.
		Example: if the C file is main.c, the output file should be main.o

2-assembler => a script that generates the assembly code of a C code and save it in an output file.

3-name => a script that compiles a C file and creates an executable named __*cisfun*__
