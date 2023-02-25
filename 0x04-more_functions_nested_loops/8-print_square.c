#include "main.h"

/**
 * print_square - Prints a square
 * @size: the square
 */

void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int l, m;

		for (l = 0; l < size; l++)
		{
		for (m = 0; m < size; m++)
		{
			_putchar(35);
		}
		_putchar('\n');
		}
	}
}
