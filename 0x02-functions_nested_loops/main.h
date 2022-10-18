#include <unistd.h>

void _putchar(char ch);

void print_alphabet(void);

void print_alphabet_x10(void);

void _putchar(ch)
{
	ch = char ch;

	write (1, ch, 1);
}

void print_alphabet(void)
{
	char ch;

	for (ch = '97'; ch <= '122'; ch++)
	{
		_putchar(ch);
	}
}

