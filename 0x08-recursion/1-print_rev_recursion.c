#include "main.h"
#include <string.h>
/**
  * _print_rev_recursion - prints a string in reverse
  * @s: string
  */
void _print_rev_recursion(char *s)
{
	char *end = s;

	if (*(end + 0) != '\0')
		end++;

	if (strlen(end) == strlen(s))
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*(end + 0));
		_print_rev_recursion(end--);
	}
}
