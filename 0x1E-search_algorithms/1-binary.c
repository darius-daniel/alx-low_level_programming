#include "search_algos.h"


/* Prototypes for helper functions */
int search(int *array, size_t left, size_t right, int value);
void print_list(int *array, size_t start, size_t stop);

/**
* binary_search - searches for a value in a sorted array of integer using
* the Binary search algorithm
* @array: a pointer to the first element of the array to search in
* @size: the number of elements in @array
* @value: the value to search for
* Return: If @value is missing from @array or if @array is NULL, return -1.
* Else, return index where @value is located
*/
int binary_search(int *array, size_t size, int value)
{
	if (array != NULL)
		return (search(array, 0, size - 1, value));

	return (-1);
}

/**
* print_list - print a sub_list being searched for a value
* @array: the array being searched
* @start: the starting index of the sub-array
* @stop: the index of the last element of the sub_array
*/
void print_list(int *array, size_t start, size_t stop)
{
	size_t i;

	printf("Searching in array: ");
	for (i = start; i <= stop; i++)
	{
		if (i == stop)
			printf("%d\n", array[i]);
		else
			printf("%d, ", array[i]);
	}
}

/**
* search - does the actual work of searching
* @array: the array it is searching in
* @left: the left-most index of @array
* @right: the right-most index of @array
* @value: the value searched for in @array
* Return: if the value is not found, -1. Else, return the index
* where the value is located in the array
*/
int search(int *array, size_t left, size_t right, int value)
{
	int mid = left + (right - left) / 2;

	if (left <= right)
	{
		print_list(array, left, right);
		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
			return (search(array, left, mid - 1, value));
		else
			return (search(array, mid + 1, right, value));
	}

	return (-1);
}
