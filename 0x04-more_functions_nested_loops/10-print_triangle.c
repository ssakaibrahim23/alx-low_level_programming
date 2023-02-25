#include "main.h"

/**
 * print_triangle - Prints a triangle followed by a new line
 * @size: The size of triangle
 */

void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int a, b;

		for (a = 1; a <= size; a++)
		{
		for (b = a; b < size; b++)
		{
			_putchar(32);
		}
		for (b = 1; b <= a; b++)
		{
			_putchar(35);
		}
		_putchar('\n');
		}
	}
}
