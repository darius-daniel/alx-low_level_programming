#include <string.h>
#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: the string to be reversed.
 */

void print_rev(char *s)
{
	int len = strlen(s);
	int i;

	for (i = len; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
