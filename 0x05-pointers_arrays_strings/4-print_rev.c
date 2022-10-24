#include <string.h>
#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: the string to be reversed.
 */

void print_rev(char *s)
{
	int i;
	
	if (strlen(s) > 0)
	{
		for (i = strlen(s); i >= 0; i--)
		{
			_putchar(s[i]);
		}
	}

	_putchar('\n');
}
