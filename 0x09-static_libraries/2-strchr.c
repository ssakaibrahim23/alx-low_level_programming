#include "main.h"
#include <stdio.h>

/**
 * _strchr - Entry point
 * @s: input
 * @c: character input
 * Return: 0 Always
 */

char *_strchr(char *s, char c)
{
	int x = 0;

	for (; s[x] >= '\0'; x++)
	{
		if (s[x] == c)
		{
			return (&s[x]);
		}
	}
	return (0);
}
