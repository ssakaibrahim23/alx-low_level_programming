#include "main.h"

/**
 * _memcpy - Copies memory area
 * @dest: destination pointer
 * @src: source pointer
 * @n: number of bytes
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int x = 0, a = n;

	for (; x < a; x++)
	{
		dest[x] = src[x];
		n--;
	}
	return (dest);
}
