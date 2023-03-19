#include "main.h"

/**
 * _memcpy - Copies memory addres
 * @dest: destination
 * @src: string coppy
 * @n: num of bytes
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0, i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
