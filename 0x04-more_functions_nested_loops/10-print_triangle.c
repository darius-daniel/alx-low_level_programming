#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a newline
 * @size: size of the triangle
 *
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j, end;

		end = size - 1;

		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
			{
				if (j <= end)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
			end = end - 1;
			_putchar('\n');
		}
	}
}
