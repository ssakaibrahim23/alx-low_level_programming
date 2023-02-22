#include "main.h"

/**
 * print_alphabet - print alphabet in lowercase
 * followed by a new line
 */

void print_alphabet(void)
{
	char alphlow;

	for (alphlow = 'a'; alphlow <= 'z'; alphlow++)
	{
		_putchar(alphlow);
	}
	_putchar('\n');
}
