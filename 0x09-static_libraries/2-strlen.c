#include "main.h"

/**
 * _strlen - String length
 * @s: string
 * Return: len
 */

int _strlen(char *s)
{
	int li = 0;

	while (*s != '\0')
	{
		li++;
		s++;
	}
	return (li);
}
