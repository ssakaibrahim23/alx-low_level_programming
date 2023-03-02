#include "main.h"

/**
 * _strncat - Concatenates two strings
 * @dest: string input1
 * @src: string input2
 * @n: length of string
 * Return: void
 */

char *_strncat(char *dest, char *src, int n)
{
	int a = 0, b = 0;

	while (dest[a] != '\0')
	{
		a++;
	}
	while (b < n && src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
