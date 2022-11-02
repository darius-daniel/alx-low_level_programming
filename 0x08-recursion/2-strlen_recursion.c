#include "main.h"

/**
  * _strlen_recursion - a functiin that returns the length of a string
  * @s: the string
  * Return: the length of the string
  */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
