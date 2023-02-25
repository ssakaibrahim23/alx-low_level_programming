#include "main.h"

/**
 * print_numbe - Prints an int using only _putchar
 * @n: number of int too be printed
 */

void print_number(int n)
{
	unsigned int d;

	if (n < 0)
	{
		d = -n;
		_putchar(45);
	}
	else
	{
		d = n;
	}
	if (d / 10)
	{
		print_number(d / 10);
	}
	_putchar((d % 10) + '0');
}
