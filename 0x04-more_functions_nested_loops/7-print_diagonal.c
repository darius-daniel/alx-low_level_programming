#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times the character should be
 * printed
 */

void print_diagonal(int n)
{
	int i = 1;
	int j;

	while (n > 0 && i <= n)
	{
		j = 1;

		while (j < i)
		{
			_putchar(' ');
			j++;
		}

		_putchar('\\');
		i++;
	}

	_putchar('\n');
}
