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
	if (n < 0)
	{
		n = -n;
	}

	int result = n % 10;

	_putchar(result + '0');
	return (result);
}