#include <stdio.h>

/**
 * _strlen - Returns the lenth of the string
 * @str: character of the string
 * Return: length of string
 */

size_t _strlen(const char *str)
{
	size_t l = 0;

	while (*str++)
	l++;
	return (l);
}
