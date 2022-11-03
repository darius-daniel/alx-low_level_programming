#include "main.h"

/**
  * is_prime - detects if an input number is a prime number.
  * @n: input number.
  * @c: iterator.
  * Return: 1 if n is a prime number. 0 if n is not a prime number
  */
int is_prime(int n, int c)
{
	if (n % c == 0)
	{
		if (n == c)
			return (1);
		else
			return (0);
	}
	else
	{
		if (c <= 7)
		{
			if (c == 2)
				c += 1;
			else
				c += 2;
		}
	}
	return (0 + is_prime(n, c));
}
/**
  * is_prime_number - detects if an number is a prime number or not
  * @n: input number
  * Return: 1 if n is a prime number. 0 if not
  */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (is_prime(n, 2));
}
