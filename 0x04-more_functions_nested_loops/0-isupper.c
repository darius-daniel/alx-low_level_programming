#include "main.h"

/**
 * _isupper - Checks for uppercase characters
 * Return: 1 if uppercases and 0 otherwise
 * @c: character being checked
 */

int _isupper(int c)
{
	c = char c;

	if (c >= 'A' || c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
