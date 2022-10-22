#include <stdio.h>

/**
 * main - Prints 1-100, but replaces multiples of three
 * with 'fizz', multiples of 5 with 'buzz',
 * and multiples of both 3 and 5 with 'fizzbuzz'
 *
 * Return: Always 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else
		{
			printf("%d", i);
		}

		if (i != 100)
		{
			printf(" ");
		}
	}

	printf("\n");
	return (0);
}
