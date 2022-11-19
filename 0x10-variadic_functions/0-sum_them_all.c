#include <stdarg.h>
#include "variadic_functions.h"

/**
  * sum_them_all - computes the sum of all its parameters
  * @n: the number of parameters passed to the function
  * Return: thr sum of the parameters
  */
int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
		return (0);

	int sum = 0, i, num;
	va_list nums;

	va_start(nums, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(nums, int);
		sum += num;
	}
	va_end(nums);
	return (sum);
}
