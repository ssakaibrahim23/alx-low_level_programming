#include "main.h"

/**
 * _strcmp - Compares two strings
 * @s1: string one
 * @s2: string two
 * Return: 0 (Success)
 */

int _strcmp(char *s1, char *s2)
{
	int l = 0;

	while (s1[l] != '\0' && s2[l] != '\0')
	{
		if (s1[l] != s2[l])
		{
		return (s1[l] - s2[l]);
		}
		l++;
	}
	return (0);
}
