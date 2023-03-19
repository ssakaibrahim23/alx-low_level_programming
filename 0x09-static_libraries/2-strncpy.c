#include "main.h"

/**
 * _strncpy - String coppy
 * @dest: destination
 * @src: string input
 * @n: number
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a;

	a = n;
	while (a < n && src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	while (a > n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}
