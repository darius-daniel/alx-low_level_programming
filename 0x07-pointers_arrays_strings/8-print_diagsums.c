#include "main.h"

/**
  * print_diagsums - prints the sum of the two diagonals of a square
  * matrix of integers
  * @a: matrix of integers
  * @size: size of matrix
  */
void print_diagsums(int *a, int size)
{
	int sum1 = 0;
	int sum2 = 0;
	int i, j;

	for (i = 0; i < size; i++)
	{
		sum1 = sum1 + *(a + i);
	}

	for (j = size - 1; j >= 0; j--)
	{
		sum2 = sum2 + *(a + j);
	}

	printf("%d, %d\n", sum1, sum2);
}
