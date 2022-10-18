#include "main.h"

/**
* jack_bauer - prints all the minutes in a day
*/

void jack_bauer(void)
{
	int n1, n2, n3, n4;

	for (n1 = 0; n1 <= 2; n1++)
	{
		for (n2 = 0; n2 <= 3; n2++)
		{
			for (n3 = 0; n3 <= 5; n3++)
			{
				for (n4 = 0; n4 <= 9; n4++)
				{
					_putchar(n1 + '0');
					_putchar(n2 + '0');
					_putchar(':');
					_putchar(n3 + '0');
					_putchar(n4 + '0');
					_putchar('\n');
				}
			}
		}
	}
} 
