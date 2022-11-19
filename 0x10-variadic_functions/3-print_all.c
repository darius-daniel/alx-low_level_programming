#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
  * print_all - a function that prints anything
  * @format: list of types of arguments passed to the function
  * Return: Nothing
  */
void print_all(const char * const format, ...)
{
	const char type_args[] = "cifs";
	int i, j = 0, k = 0;
	char *str;
	va_list items;

	va_start(items, format);
	while (format[j] != '\0')
	{
		switch (format[j])
		{
		case ('c'):
			printf("%c", va_arg(items, int));
			k = 1;
			break;
		case ('i'):
			printf("%d", va_arg(items, int));
			k = 1;
			break;
		case ('f'):
			printf("%f", va_arg(items, double));
			k = 1;
			break;
		case ('s'):
			str = va_arg(itrms, char *);
			switch (*str)
			{
			case ('\0'):
				printf("(nil)");
			default:
				printf("%s", str);
			}
			k = 1;
			break;
		}
		if (k && format[j + 1] != '\0')
			printf(", ");
		j++;
	}
	printf("\n");
	va_end(items);
}
