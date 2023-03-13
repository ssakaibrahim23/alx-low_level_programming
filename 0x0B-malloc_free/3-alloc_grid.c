#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - Returns a pointer to a 2D array of integers
 * @width: Widith
 * @height: Height
 * Return: Pointer
 */

int **alloc_grid(int width, int height)
{
	int i, j, **array;

	if (height <= 0 || width <= 0)
	{
		return (NULL);
	}
	array = (int **) malloc(sizeof(int) * width);

	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		array[i] = (int *)malloc(sizeof(int) * width);

		if (array[i] == NULL)
		{
			free(array);
			for (j = 0; j <= i; j++)
				free(array[j]);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			array[i][j] = 0;
		}
	}
	return (array);
}
