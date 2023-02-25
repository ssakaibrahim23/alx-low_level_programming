#include "main.h"

/**
 * print_diagonal - Print diagonal line on the terminal
 * @n: number of times char \ is printed
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int a, b;

		for (a = 0; a < n; a++)
		{
		for (b = 0; b < n; b++)
		{
			if (b == a)
				_putchar(92);
			else if (b < a)
				_putchar(32);
		}
		_putchar('\n');
		}
	}
}
