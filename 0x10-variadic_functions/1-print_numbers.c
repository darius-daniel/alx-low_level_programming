#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
  * print_numbers - prints all numbers, followed by  a new line.
  * @separator: the string to be printed between numbers
  * @n: number of integers passed as parameters
  * Return: Nothing
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int i;
	int num;

	va_start(nums, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(nums, int);
		if (i == n - 1)
			printf("%d\n", num);
		else if (separator != NULL)
			printf("%d%s", num, separator);
		else
			printf("%d", num);
	}
	va_end(nums);
}
