#include <string.h>
#include "main.h"

/**
 * puts_half - prints half a string, followed by a new line
 * @str: the string to be printed out (well, half of it)
 */

void puts_half(char *str)
{
	int midpoint;

	if (strlen(str) % 2 == 0)
	{
		midpoint = (strlen(str) - 1) / 2;
	}
	else
	{
		midpoint = (strlen(str) - 2) / 2;
	}

	while (str[midpoint] != '\0')
	{
		_putchar(str[midpoint]);
		midpoint++;
	}

	_putchar('\n');
}
