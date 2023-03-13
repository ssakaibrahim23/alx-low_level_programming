#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Returns a pointer to a newly allocated memory
 * @str: string
 * Return: NULL or Pointer
 */

char *_strdup(char *str)
{
	char *dup;
	unsigned int i = 0, len = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[len])
	{
		len++;
	}
	dup = malloc(sizeof(char) * (len + 1));
	if (dup == NULL)
	{
		return (NULL);
	}
	while ((dup[i] = str[i]) != '\0')
	{
		i++;
	}
	return (dup);
}
