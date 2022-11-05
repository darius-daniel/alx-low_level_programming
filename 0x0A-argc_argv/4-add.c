#include <stdio.h>
#include <stdlib.h>

/**
  * main - adds positive numbers
  * @argc: number of numbers to be summed
  * @argv: array of numbers to be summed
  * Return: 0 for success, 1 for error
  */

int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	for (i = 0; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' && argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}
