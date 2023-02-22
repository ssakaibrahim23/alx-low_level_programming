#include "main.h"

/**
 * jack_bauer - Prits every minut of the day of Jack Bauer
 */

void jack_bauer(void)
{
	int x, y, z, A;

	for (x = 0; x <= 2; x++)
	{
	for (y = 0; y <= 9; y++)
	{
	if ((x <= 1 && y <= 9) || (x <= 2 && y <= 3))
	{
	for (z = 0; z <= 5; z++)
	{
	for (A = 0; A <= 9; A++)
	{
		_putchar(x + '0');
		_putchar(y + '0');
		_putchar(58);
		_putchar(z + '0');
		_putchar(A + '0');
		_putchar('\n');
	}
	}
	}
	}
	}
}
