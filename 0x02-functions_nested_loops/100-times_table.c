#include "main.h"

void print_times_table(int n)
{
	if ((n > 0) || (n < 15))
	{
		int row, col, prdct;

		for (row = 0; row <= n; row++)
		{
			for (col = 0; col <= n; col++)
			{
				prdct = row * col;

				if (prdct < 10)
				{
					_putchar(prdct + '0');
					if (col != row)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
					}
				}
				else if (prdct < 100)
				{
					_putchar((prdct / 10) + '0');
					_putchar((prdct % 10) + '0');
					if (col != row)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
					}
				}
				else if (prdct >= 100)
				{
					_putchar((prdct / 100) + '0');
					_putchar(((prdct % 100) / 10) + '0');
					_putchar((prdct % 10) + '0');
					if (col != row)
					{
						_putchar(',');
						_putchar(' ');
					}
				}
			}
			_putchar('\n');
		}
	}
}
