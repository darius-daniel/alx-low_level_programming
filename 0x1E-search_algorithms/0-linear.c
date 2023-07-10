#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers using Linear
 * search algorithm
 * @array: a pointer to the first element of the first array to search in.
 * @size:  the number of element in array
 * @value: the value to search for
 * Return: if @value not in @array or @array is NULL, return -1.
 * Else, return the first index where @value is located
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			if (array[i] == value)
				return (i);
		}
	}

	return (-1);
}
