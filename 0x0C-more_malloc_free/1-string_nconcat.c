#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenetes 2 strings
 * @s1: string 1
 * @s2: string 2
 * @n: number
 * Return: pointer otherwise NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int a = 0, b = 0, k = 0, l = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[a])
		a++;
	while (s2[k])
		k++;
	if (n >= k)
		l = a + k;
	else
		l = a + n;

	s = malloc(sizeof(char) * l + 1);

	if (s == NULL)
		return (NULL);
	while (b < l)
	{
		if (b <= a)
		{
			s[b] = s2[b];
		}
		if (b >= a)
		{
			s[b] = s2[k];
			k++;
		}
	}
	s[b] = '\0';
	return (s);
}
