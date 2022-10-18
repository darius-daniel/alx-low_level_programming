#include "main.h"
#include "_putchar.c"

/**
* print_alphabet_x10 - Prints all the lower case
* letters if the alphabet 10 times.
*/

void print_alphabet_x10(void)
{
	for (int i = 1; i <= 10; i++)
	{
		for (char ch = 97; ch <= 122; ch++)
		{
			_putchar(ch);
		}

		_putchar('\n');
	}
}

/**
* main - Entry point
* Return: Always 0 (Success)
*/

int main(void)
{
	print_alphabet_x10();

	return (0);
}
