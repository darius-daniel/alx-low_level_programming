#include "search_algos.h"

/**
* interpolation_search - searches for a value in a sorted array of integers
* using the interpolation search algorithm
* @array: a pointer to the first element of the array to search in
* @size: the number of elements in @array
* @value:  the value to search for
* Return: the first index where @value is located. If @value is absent from
* @list or @list is NULL, return -1.
*/
int interpolation_search(int *array, size_t size, int value)
{
	size_t high, low, pos;

	if (array != NULL)
	{
		high = size - 1;
		low = 0;

		while (value >= array[low] && value <= array[high] && low <= high)
		{
			pos = low + (((double)(high -low) / (array[high] - array[low])) * (value - array[low]));
			printf("Value checked at array[%ld] = [%d]\n", pos, array[pos]);
			if (array[pos] == value)
				return pos;
			else if (array[pos] < value)
				low = pos + 1;
			else
				high = pos - 1;
		}
	}

	return (-1); 
}
