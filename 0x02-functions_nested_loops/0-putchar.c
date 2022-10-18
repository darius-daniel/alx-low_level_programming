#include "main.h"
#include "_putchar.c"

/**
* main - Entry point
* Return: Always 0 (Success)
*/

int main(void)
{
	char text[10] = "_putchar\n";
	int i;

	for (i = 0; i <= 10; i++)
	{
		_putchar(text[i]);
	}

	return (0);
}
