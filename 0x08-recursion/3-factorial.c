#include "main.h"

/**
  * factorial - returns the factorial of a given number
  * @n: the number
  * Return: factorial of the number. But if n is lower than 1, return -1
  */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	elif (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
