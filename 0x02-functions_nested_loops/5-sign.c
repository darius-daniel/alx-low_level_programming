#include "main.h"

/**
* print_sign - Test inout parameter to ascertain
* if number is +ve or -ve
* @n - The value subject to a test
* Return - 0 or 1 depending on the input
*/

int print_sign(int n)
{
	int result;

	if (n == 0)
	{
		result = 0;
	}
	else if (n < 0)
	{
		result = -1;
	}
	else
	{
		result = 1;
	}
	return (result);
}
