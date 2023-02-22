#include "main.h"

/**
 * print_sign - Prints the sign of number
 * @n: the number checked
 * Return: 1, -1, 0 if n is is greater, less than or equal zero
 */

int print_sign(int n)

{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
