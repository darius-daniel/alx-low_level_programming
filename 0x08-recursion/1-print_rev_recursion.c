#include "main.h"
#include <string.h>
/**
  * _print_rev_recursion - prints a string in reverse
  * @s: string
  */
void _print_rev_recursion(char *s)
{
	int end = strlen(s) - 1;

	if (*(s + 0) == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*(s + end));
		_print_rev_recursion(s - 1);
	}
}
