#include "main.h"

/**
 * _isalpha - Checks alphabetic char
 * @c: Char to br returned
 * Return: 1 for alphabetic char or 0 for anything
 */

int _isalpha(int c)

{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}
