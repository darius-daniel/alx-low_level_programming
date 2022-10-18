#include "main.h"

/**
* print_alphabet_x10 - Prints all the lower case
* letters if the alphabet 10 times.
*/

void print_alphabet_x10(void)
{
	int i = 1;
	char ch = 'a';

	while (i <= 10)
	{
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}

		_putchar('\n');
		i++;
	}
}
