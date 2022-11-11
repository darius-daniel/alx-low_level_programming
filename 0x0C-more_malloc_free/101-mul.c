#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - multiplies two positive integers
 * @argc: number of elements in argv
 * @argv: array of arguments passed into main
 * Return: 0 (for success)
*/

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	if (!(atoi(argv[1])) || !(atoi(argv[2])))
	{
		printf("Error\n");
		exit(98);
	}

	printf("%u\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}
