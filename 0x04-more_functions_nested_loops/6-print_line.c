#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: denotes the number of times '_' should be
 * printed
 */

void print_line(int n)
{
	int i = 1;

	while (n > 0 && i <= n)
	{
		_putchar('_');
	}

	_putchar('\n');
}
