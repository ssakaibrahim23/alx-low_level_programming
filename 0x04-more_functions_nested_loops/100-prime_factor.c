#include <stdio.h>
#include <math.h>

/**
 * main -  finds and prints the largest prime factor
 * of the number 612852475143
 * Return: 0 (Success)
 */

int main(void)
{
	long int a, ma, b;

	a = 612852475143;
	ma = -1;

	while (a % 2 == 0)
	{
		ma = 2;
		a /= 2;
	}
	for (b = 3; b <= sqrt(a); b = b + 2)
	{
		while (a % b == 0)
		{
			ma = b;
			a = a / b;
		}
	}
	if (a > 2)
		ma = a;
	printf("%ld\n", ma);
	return (0);
}
