#include <string.h>
#include "main.h"

/**
 * rev_string - reverses a string
 * @s: strring to be reversed.
 */

void rev_string(char *s)
{
	int s_length = strlen(s) - 1;
	char reversed_s[s_length];
	int i, j;

	j = 0;

	for (i = strlen(s) - 1; i >= 0; i--)
	{
		reversed_s[j] = s[i];
		j++;
	}
}
