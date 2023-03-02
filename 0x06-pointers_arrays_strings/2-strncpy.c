#include "main.h"

/**
 * _strncpy - Copies a string
 * @dest: string1
 * @src: string2
 * @n: length of string
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int k = 0;

	while (k < n && src[k] != '\0')
	{
		dest[k] = src[k];
		k++;
	}
	while (k < n)
	{
		dest[k] = '\0';
		k++;
	}
	return (dest);
}
