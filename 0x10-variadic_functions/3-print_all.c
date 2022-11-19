#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
  * print_all - a function that prints anything
  * @format: list of types of arguments passed to the function
  * @c: char
  * @i: integer
  * @f: float
  * @s: char s (print (nil) if string is NULL)
  * Return: Nothing
  */
void print_all(const char * const format, ...)
{
	const char type_args[] = "cifs";
	int i, j = 0, k = 0;
	char *str;
	va_list items;

	va_start(items, format);
	while (format[j] != '\0'){
		switch (format[j]){
			case ('c'):
				printf("%c", va_arg(items, int));
				break;
			case ('i'):
				printf("%d", va_arg(items, int));
				break;
			case ('f'):
				printf("%f", va_arg(items, double));
				break;
			case ('s'):
				str = va_arg(itrms, char *);
				switch (*str){
					case ('\0'):
						printf("(nil)");
						break;
					default:
						printf("%s", str);
						break;
				}
		}
		while (type_args[i] != '\0')
		{
			if (type_args[i] == format[j])
				k = 1;
			i++;
		}
		if (k && format[j + 1] != '\0')
			printf(", ");
		j++;
	}
	printf("\n");
	va_end(items);
}
