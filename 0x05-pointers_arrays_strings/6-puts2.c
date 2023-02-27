#include "main.h"

/**
 * puts2 - Prints every char of a string starting with 0
 * @str: String
 * Return: void
 */

void puts2(char *str)
{
	int x, y = 0;

	while (str[y] != '\0')
	{
		y++;
	}
	for (x = 0; x < y; x += 2)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}
