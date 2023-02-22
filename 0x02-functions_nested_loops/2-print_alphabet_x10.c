#include "main.h"

/**
 * print_alphabet_x10 - print x10 the alphabet in lowercase
 */

void print_alphabet_x10(void)
{

	int num = 1;
	char low;

	while (num++ <= 10)
	{
	for (low = 'a'; low <= 'z'; low++)
		_putchar(low);
	}
	_putchar('\n');
}
