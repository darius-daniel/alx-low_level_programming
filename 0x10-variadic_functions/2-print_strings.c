#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
  * print_strings - prints strings, followed, by a new line.
  * @separator: string to be printed between strings.
  * @n: number of strings to be passed to the function.
  * Return: nothing
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strs;
	unsigned int i;
	char *s;

	va_start(strs, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(strs, char *);
		if (s)
			printf("%s", s);
		else
			printf("(nil)");

		if (separator && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(strs);
}
