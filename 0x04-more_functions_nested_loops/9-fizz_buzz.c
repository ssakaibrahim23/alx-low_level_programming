#include <stdio.h>

/**
 * main - Print numbers 1 - 100 followed by a new line
 * for mul of 3 print 'Fizz' and for mut of 5 print 'Buzz'
 * instead of number
 * For mul of both 3 and 5 print FizzBuzz
 * Return: 0 (Success)
 */

int main(void)
{
	int k;

	for (k = 1; k <= 100; k++)
	{
		if (k % 3 == 0 && k % 5 != 0)
		{
			printf(" Fizz");
		}
		else if (k % 5 == 0 && k % 3 != 0)
		{
			printf(" Buzz");
		}
		else if (k % 3 == 0 && k % 5 == 0)
		{
			printf(" FizzBuzz");
		}
		else if (k == 1)
		{
			printf("%d", k);
		}
		else
		{
			printf(" %d", k);
		}
	}
	printf("\n");
	return (0);
}
