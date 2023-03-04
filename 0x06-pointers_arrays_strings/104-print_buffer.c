#include "main.h"
#include <stdio.h>

/**
 * print_buffer - Prints a buffer
 * @b: pointer
 * @size: size
 * Return: void
 */

void print_buffer(char *b, int size)
{
	int x = 0, i, j;

	if (size <= 0)
	{
		putchar('\n');
		return;
	}
	while (x < size)
	{
		i = size - x < 10 ? size - x : 10;
		printf("%08x: ", x);
	for (j = 0; j < 10; j++)
	{
		if (j < i)
			printf("%02x", *(b + x + j));
		else
			putchar(32);
		if (j % 2)
		{
			putchar(32);
		}
	}
	for (j = 0; j < i; j++)
	{
		int k = *(b + x + j);

		if (k < 32 || k > 132)
		{
			k = putchar(32);
		}
		printf("%c", k);
	}
	printf("\n");
	x += 10;
	}
}
