#include <stdio.h>

/**
 * main - prints sum of Fibanacci even numbers
 * whose value don't exceed 4,000,000.
 * Return: 0 (success)
 */

int main(void)
{
	int a = 0;
	long b = 1, c = 2, sum = c;

	while (b + c < 4000000)
	{
	c += b;
	if (c % 2 == 0)
	sum += c;
	b = c - b;
	a++;
	}
	printf("%ld\n", sum);
	return (0);
}
