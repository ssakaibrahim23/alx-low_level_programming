#include "main.h"

/**
 * print_alphabet_x10 - print 10 times the alphabet in lowercase
 */

void print_alphabet_x10(void)
{

	int alc = 0;
	char low;

	while (alc++ <= 9)
	{
	for (low = 'a'; low <= 'z'; low++)
		_putchar(low);
	}
	_putchar('\n');

}
