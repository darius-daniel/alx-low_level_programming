#include "main.h"

/**
  * getSqrt - finds the natural square root of a number
  * @n: input number
  * @c: iterator
  * Return: the square root of n
  */
int getSqrt(int n, int c)
{
	if (c % (n / c) == 0)
	{
		if (c * (n / c) == n)
			return (c);
		else
			return (-1);
	}
	return (0 + getSqrt(n, c + 1));
}
/**
  * _sqrt_recursion - returns the natural square root of a number.
  * @n: number for which the sqrt is calculated
  * Return: the square root of n, or -1 if n does not have natural square root
  */
int _sqrt_recursion(int n)
{
	if (n < 1)
		return (-1);
	else if (n == 0)
		return (0);
	else if (n == 1)
		return (1);
	else
		return (getSqrt(n, 2));
}
