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
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}

		_putchar('\\');

		if (i != n)
		{
			_putchar('\n');
		}

		i++;
	}

	_putchar('\n');
}
