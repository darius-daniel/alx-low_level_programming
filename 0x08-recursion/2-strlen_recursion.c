#include "main.h"

/**
  * _strlen_recursion - a functiin that returns the length of a string
  * @s: the string
  * Return: the length of the string
  */
int _strlen_recursion(char *s)
{
	int *len = 0;

	if (*(s + len) == '\0')
	{
		return (len);
	}
	else
	{
		len++;
		_strlen_recursion(s + len);
	}
}
