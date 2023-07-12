#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in a sorted array of integers using
 * the Jump search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in @array
 * @value: the value to search for
 * Return: If array is NULL or @value not in @array, return -1. Else, return
 * the first index where @value is located
*/
int jump_search(int *array, size_t size, int value)
{
	size_t i, low, high;

	if (array != NULL)
	{
		low = 0;
		high = sqrt(size);

		while (low < size || high <= size)
		{
			printf("Value checked array[%ld] = [%d]\n", low, array[low]);
			if (value >= array[low] && value <= array[high])
				break;

			low = high;
			high += sqrt(size);
		}

		if (low > size - 1)
		{
			high = low;
			low -= sqrt(size);
		}
		printf("Value found between indexed [%ld] and [%ld]\n", low, high);
		if (high > size - 1)
			high = size - 1;
		for (i = low; i <= high; i++)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			if (array[i] == value)
				return (i);
		}
	}

	return (-1);
}
