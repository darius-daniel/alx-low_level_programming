#include <string.h>
#include "main.h"
/**
 * rev_string - reverses a string
 * @s: strring to be reversed.
 */

void rev_string(char *s)
{
	int i, j;

	i = 0;

	for (j = strlen(s) - 1; j >= 0; j--)
	{
		char temp = s[j];

		s[j] = s[i];
		s[i] = temp;
		i++;
	}
}
