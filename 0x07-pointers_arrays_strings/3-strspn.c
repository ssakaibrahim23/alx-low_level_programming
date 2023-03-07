#include "main.h"

/**
 * _strspn - Gets the length of a prifix substring
 * @s: pointer
 * @accept: pointer
 * Return: 0 (success)
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0;
	int x;

	while (*s)
	{
		for (x = 0; accept[x]; x++)
		{
			if (*s == accept[x])
			{
				a++;
				break;
			}
			else if (accept[x + 1] == '\0')
				return (a);
		}
		s++;
	}
	return (a);
}
