#include "main.h"

/**
 * _putchar - writes a single character to stdout
 * @ch: the character to be written
 * Return: a char object
*/
char _putchar(char ch)
{
	return (write(1, &ch, 1));
}
