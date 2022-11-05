#include <stdio.h>

/**
  * main - prints all arguments passed into it
  * @argc: number of arguments passed into main
  * @argv: array of arguments passed into main
  * Return: always 0
  */

int main(int argc,  char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", *(argv + i));
	}
	return (0);
}

