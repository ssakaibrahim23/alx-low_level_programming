#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: string to be appended
 * @src: string where dest is to be appended
 * Return: void
 */

char *_strcat(char *dest, char *src)
{
	int a = 0, b = 0;

	while (dest[a] != '\0')
	{
		a++;
	}
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
