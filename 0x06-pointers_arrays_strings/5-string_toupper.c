#include "main.h"

/**
 * string_toupper - Changes lowercase of a string to uppercase
 * @s: pointer
 * Return: character
 */

char *string_toupper(char *s)
{
	int f = 0;

	while (s[f] != '\0')
	{
		if (s[f] >= 'a' && s[f] <= 'z')
			s[f] = s[f] - 32;
		f++;
	}
	return (s);
}
