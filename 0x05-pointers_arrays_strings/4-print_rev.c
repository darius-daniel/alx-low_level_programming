#include <string.h>
#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: the string to be reversed.
 */

void print_rev(char *s)
{
	int i;
	char rev_str[] = strrev(s);
	
	if (strlen(rev_str) > 0)
	{
		for (i = 0; i < strlen(rev_str); i++)
		{
			_putchar(rev_str[i]);
		}
	}

	_putchar('\n');
}
