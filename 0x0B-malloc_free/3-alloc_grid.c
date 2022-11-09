#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2-D array of integers.
 * @width: how many elements in each sub array
 * @height: how many sub arrays
 * Return: Pointer to a 2 dimensional array of integers.
*/
int **alloc_grid(int width, int height)
{
	int **arrOfInts, row, col;

	if (width < 0 || height < 0)
		return (NULL);

	arrOfInts = malloc(sizeof(int *) * height);
	if (arrOfInts == NULL)
	{
		free(arrOfInts);
		return (NULL);
	}

	for (row = 0; row < height; row++)
	{
		arrOfInts[row] = (int *)malloc(sizeof(int) * width);
		if (arrOfInts[row] == NULL)
		{
			while (row >= 0)
			{
				free(arrOfInts[row]);
				row--;
			}
			free(arrOfInts);
			return (NULL);
		}
	}

	for (row = 0; row < height; row++)
	{
		for (col = 0; col < width; col++)
		{
			arrOfInts[row][col] = 0;
		}
	}

	return (arrOfInts);
}