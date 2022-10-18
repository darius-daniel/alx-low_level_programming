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
	int result = n % 10;

	_putchar(result);
	return (result);
}
