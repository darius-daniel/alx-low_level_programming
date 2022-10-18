#include "main.h"

/**
* print_to_98 - prints a set of numbers from n to 98
* @n: Maximum value to count to
*/

void print_to_98(int n)
{
	if (n > 98)
	{
		while (n >= 98)
		{
			_putchar(n);
			n--;
		}
	}
	else
	{
		int i = 98;

		while (i <= n)
		{
			_putchar(i);
			i++;
		}
	}

	_putchar('\n');
}
