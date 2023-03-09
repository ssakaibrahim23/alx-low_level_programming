#include "main.h"
#include <stdio.h>

int sqrt_helper(int n, int start, int end);

/**
 * _sqrt_recursion - Prints th natural square root of a num
 * @n: number
 * Return: (-1)
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}
	return (sqrt_helper(n, 1, n));
}
/**
 * sqrt_helper - square root calculation
 * @start: start
 * @end: end calculation
 * @n: number
 * Return: 0 Always
 */

int sqrt_helper(int n, int start, int end)
{
	int m;

	if (end < start)
	{
		return (-1);
	}
	m = (start + end) / 2;
	if (m * m == n)
	{
		return (m);
	}
	else if (m * m > n)
	{
		return (sqrt_helper(n, start, m - 1));
	}
	else
	{
		return (sqrt_helper(n, m + 1, end));
	}
}
