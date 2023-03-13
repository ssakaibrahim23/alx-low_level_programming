#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates 2 strings
 * @s1: string 1
 * @s2: string 2
 * Return: NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *s;
	unsigned int i = 0, j = 0, l1 = 0, l2 = 0;

	while (s1 && s1[l1])
	{
		l1++;
	}
	while (s2 && s2[l2])
	{
		l2++;
	}
	s = malloc(sizeof(char) * (l1 + l2 + 1));
	if (s == NULL)
	{
		return (NULL);
	}

	i = 0;
	j = 0;

	if (s1)
	{
		while (i < l1)
		{
			s[i] = s1[i];
			i++;
		}
	}
	if (s2)
	{
		while (i < (l1 + l2))
		{
			s[i] = s2[j];
			i++;
			j++;
		}
	}
	s[i] = '\0';
	return (s);
}
