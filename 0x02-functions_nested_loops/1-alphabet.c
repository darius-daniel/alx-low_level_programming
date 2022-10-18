#include "_putchar.c"

/**
 * print_alphabet - Does all the work
 * main - Entry point
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char ch;

	for (ch = 97; ch <= 122; ch++)
	{
		_putchar(ch);
	}

	_putchar('\n');
}

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	print_alphabet();
	return (0);
}
