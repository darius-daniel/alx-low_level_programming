#include "main.h"
#include <string.h>

/**
 * puts2 - prints every other character of a string,
 * starting with the first character, followed by a new line
 * @str: string to be printed.
 */

void puts2(char *str)
{
	int len_str = strlen(str) - 1;
	int i;

	for (i = 0; i <= len_str; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
}
