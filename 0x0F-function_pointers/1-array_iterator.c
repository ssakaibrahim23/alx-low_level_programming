#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - Executes a function
 * given as a parameter on each element of an array
 * @array: array
 * @size: size of array
 * @action: pointer to a funtion of integers
 * Return: Void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (x = 0; x < size; x++)
	{
		action(array[x]);
	}
}
