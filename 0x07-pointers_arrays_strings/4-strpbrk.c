#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - Searches a string for any of set of bytes
 * @s: string1
 * @accept: string2
 * Return: s or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s != '\0')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}

