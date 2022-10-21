#include "main.h"

/**
 * print_square - prints a square followed by a newline
 * @size: size of the square
 */

void print_square(int size)
{
	int i, j;
	i = 1;

	while (size > 0 && i <= size)
	{
		while (j <= size)
		{
			_putchar('#');
			j++;
		}

		if (i != size)
		{
			_putchar('\n');
		}
		i++;
	}
	_putchar('\n');
}
