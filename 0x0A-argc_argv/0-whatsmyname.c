#include <stdio.h>
#include "main.h"

/**
  * main - prints the name of the file
  * @argc: the number of command arguments
  * @argv: list of command arguments
  * Return: Always 0
  */

int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", *argv);

	return (0);
}
