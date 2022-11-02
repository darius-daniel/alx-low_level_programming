#include "main.h"
#include <string.h>
/**
  * _print_rev_recursion - prints a string in reverse
  * @s: string
  */
void _print_rev_recursion(char *s)
{
	if (!(strlen(s)))
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*(s - 1));
		_print_rev_recursion(s - 1);
	}
}
