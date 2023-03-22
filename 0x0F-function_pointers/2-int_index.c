#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - Searches for an integer
 * @array: array to be searched
 * @size: size of the array
 * @cmp: pointer to aa function
 * Return: -1 if size <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array == NULL || size <= 0 || cmp == NULL)
	{
		return (-1);
	}
	for (a = 0; a < size; a++)
	{
		if (cmp(array[a]))
		{
			return (a);
		}
	}
	return (-1);
}
