#include "main.h"

/**
 * _strlen_recursion - Prints the length of a string
 * @s: string
 * Return: length
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * comperator - Compares characters in th string
 * @s: string
 * @n1: smaller iterate
 * @n2: bigger iterate
 * Return: .
 */

int comperator(char *s, int n1, int n2)
{
	if (*(s + n1) == *(s + n2))
	{
		if (n1 == n2 || n1 == n2 + 1)
		{
			return (1);
		}
		return (0 + comperator(s, n1 + 1, n2 - 1));
	}
	return (0);
}

/**
 * is_palindrome - Prints a palindrome
 * @s: string
 * Return: 1 if a string is a palindrome & 0 if not
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
	{
		return (1);
	}
	return (comperator(s, 0, _strlen_recursion(s) - 1));
}
