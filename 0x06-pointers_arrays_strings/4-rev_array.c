#include "main.h"

/**
 * reverse_array - Reverse the content of an array of int
 * @a: Array
 * @n: string length
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int x, h;

	for (x = 0; x < n; x++)
	{
		n--;
		h = a[x];
		a[x] = a[n];
		a[n] = h;
	}
}
