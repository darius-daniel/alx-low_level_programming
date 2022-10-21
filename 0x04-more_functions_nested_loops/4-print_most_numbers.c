#include "main.h"

/**
 * print_most_numbers - prints the numbers
 * from 0-9, except 2 and 4, followed by a new line
 */

void print_most_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		if (i != 2 and i != 4)
		{
			_putchar(i + '0');
		}
	}

	_putchar('\n');
}
