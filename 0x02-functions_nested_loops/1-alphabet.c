#include "_putchar.c"

/**
 * print_alphabet - Does all the work
 * main - Entry point
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}

	_putchar('\n');
}
