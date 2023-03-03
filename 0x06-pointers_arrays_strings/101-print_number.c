#include "main.h"

/**
 * print_number - Prints an integer using _putchar function
 * @n: int parameter
 * Return: void
 */

void print_number(int n)
{
	unsigned int ui = n;

	if (n < 0)
	{
		_putchar(45);
		ui = -n;
	}
	if (ui / 10 != 0)
	{
		print_number(ui / 10);
	}
	_putchar((ui % 10) + '0');
}
