#include <string.h>
#include "main.h"
/**
 * rev_string - reverses a string
 * @s: strring to be reversed.
 */

void rev_string(char *s)
{
	char temp;
	int i, j;

	j = strlen(s) - 1;

	for (i = 0; i < strlen(s) / 2; i++)
	{
		temp = s[i];

		s[i] = s[j];
		s[j] = temp;
		j--;
	}
}
