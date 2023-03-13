#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of character
 * @size: number of bytes
 * @c: character
 * Return: NULL if size is 0 otherwise pointer
 */

char *create_array(unsigned int size, char c)
{
	char *array = malloc(size);

	if (size == 0 || array == 0)
	{
		return (NULL);
	}
	while (size--)
	{
		array[size] = c;
	}
	return (array);
}
