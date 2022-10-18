#include "main.h"
#include "_putchar.c"

/**
* print_alphabet_x10 - Prints all the lower case
* letters if the alphabet 10 times.
*/

void print_alphabet_x10(void)
{
	int i;
	char ch;

	for (i = 1; i <= 10; i++)
	{
		for (ch = 97; ch <= 122; ch++)
		{
			_putchar(ch);
		}

		_putchar('\n');
	}
}
