#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _atoi - converts a string to an integer
 * @s: the string to be converted
 * Return: return the resulting integer
 */

int _atoi(char *s)
{
	int num = atoi(s);
	int count = 0;
	int i;
}

int main(void)
{
	int nb;

	nb = _atoi("- 98");
	printf("%d\n", nb);

	return 0;
}
