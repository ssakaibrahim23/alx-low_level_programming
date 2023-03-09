#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: the string to check
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int a, b, len;

	len = strlen(s);
	for (a = 0, b = len - 1; a < len / 2; a++, b--)
	{
		if (s[a] != s[b])
		{
			return (0);
		}
	}
	return (1);
}
