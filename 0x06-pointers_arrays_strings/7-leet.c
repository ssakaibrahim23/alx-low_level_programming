#include "main.h"

/**
 * leet - Encodes string into 1337
 * @s: input
 *
 *Return: s
 */

char *leet(char *s)
{
	int x, y;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; y < 10; y++)
		{
			if (s[x] == s1[y])
			{
				s[x] = s2[y];
			}
		}
	}
	return (s);
}
