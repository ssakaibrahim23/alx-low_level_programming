#include "main.h"

/**
 * factorial - Prints the factorial of a given number
 * @n: input number
 * Return: -1 to indicate an error & 0 for success
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
