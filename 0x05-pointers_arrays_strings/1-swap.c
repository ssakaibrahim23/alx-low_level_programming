#include <stdio.h>

/**
 * swap_int - Swaps the values of two integers
 * @a: integer to be swaped
 * @b: integer to be swaped
 */

void swap_int(int *a, int *b)
{
	int swap = *a;

	*a = *b;
	*b = swap;
}
