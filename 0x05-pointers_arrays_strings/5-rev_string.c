#include <string.h>
#include "main.h"
/**
 * swap_char - swaps the position of 2 chars in a string.
 * @a: first char
 * @b: second char
 */

void swap_char(char *a, char *b)
{
	char temp = *a;
	*a = *b;
	*b = temp;
}


/**
 * rev_string - reverses a string
 * @s: strring to be reversed.
 */

void rev_string(char *s)
{
	int s_length = strlen(s) - 1;
	int i, j;

	i = 0;

	for (j = strlen(s) - 1; j >= 0; j--)
	{
		swap_char(s[i], s[j]);
		i++;
	}
}
