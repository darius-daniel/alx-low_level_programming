#include "main.h"

/**
* times_table - Prints out a multiplication table
*/


void times_table(void)
{
	int row;
	int col;
	int product;

	for (row = 0; row <= 9; row++)
	{
		for (col = 0; col <= 9; col++)
		{
			product = row * col;

			_putchar(product + '0');
			_putchar(',');
			_putchar(' ');

			if (product < 10)
			{
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
