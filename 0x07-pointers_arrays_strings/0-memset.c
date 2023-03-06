#include "main.h"

/**
 * _memset - Fills memory with constant byte
 * @s: address of memory to be filled
 * @b: value desired
 * @n: number of bytes
 * Return: array
 */

char *_memset(char *s, char b, unsigned int n)
{
	int x = 0;

	for (; n > 0; x++)
	{
		s[x] = b;
		n--;
	}
	return (s);
}
