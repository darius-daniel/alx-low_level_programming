#include "main.h"

/**
* print_last_digit - Prints the last digit of
* the input parameter
* @n: The input parameter
* Return: Returns the last last digit of a
* given number
*/

int print_last_digit(int n)
{
	int result;

	if (n < 0)
	{
		n = -n;
	}

	result = n % 10;

	if (result < 0)
	{
		result = -result;
	}

	_putchar(result + '0');
	return (result);
}
