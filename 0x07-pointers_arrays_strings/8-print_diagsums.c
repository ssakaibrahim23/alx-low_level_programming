#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints sum of 2 diagonal square matrix of int
 * @a: ponter to an array of integers
 * @size: size of an array
 * Return: 0 (Success)
 */

void print_diagsums(int *a, int size)
{
	int l, m, sum1, sum2;

	sum1 = 0;
	sum2 = 0;
	for (l = 0; l < size; l++)
	{
		for (m = 0; m < size; m++)
		{
			if (l == m)
			{
				sum1 += *(a + l * size + m);
			}
			if (l + m == size - 1)
			{
				sum2 += *(a + l * size + m);
			}
		}
	}
	printf("%d, %d\n", sum1, sum2);
}

