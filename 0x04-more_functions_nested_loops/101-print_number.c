#include "main.h"

/**
 * print_number - prints an integer
 * @n: number, n
 */

void print_number(int n)
{
	if (n < 10)
	{
		_putchar(n + '0');
	}
	else if (n >= 10 && n < 100)
	{
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
	}
	else if (n >= 100 && n < 100)
	{
		_putchar(n / 100 + '0');
		if (n % 100 < 10)
		{
			_putchar
