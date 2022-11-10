#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: first number in the array (lower limit/range)
 * @max: last number in the array (upper limit / range);
 * Return: pointer to the newly created array.
*/

int *array_range(int min, int max)
{
	int *range, i, j;

	if (min > max)
		return (NULL);

	range = malloc(sizeof(int) * ((max - min) + 1));
	if (range == NULL)
	{
		free(range);
		return (NULL);
	}

	j = 0;
	for (i = min; i <= max; i++)
	{
		range[j] = min + j;
		j++;
	}

	return (range);
}