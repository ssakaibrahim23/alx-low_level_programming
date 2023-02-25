#include "main.h"

/**
 * print_line - Function that graws atraight line in terminal
 * @n: number of times char should be printed
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int a;

		for (a = 1; a <= n; a++)

		{
			_putchar(95);
		}
		_putchar('\n');
	}
}
