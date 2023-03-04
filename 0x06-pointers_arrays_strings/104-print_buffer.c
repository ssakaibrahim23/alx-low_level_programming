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
		printf("\n");
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
			printf(" ");
		if (j % 2)
		{
			printf(" ");
		}
	}
	for (j = 0; j < i; j++)
	{
		int k = *(b + x + j);

		if (k < 32 || k > 132)
		{
			k = '.';
		}
		printf("%c", k);
	}
	printf("\n");
	x += 10;
	}
}
