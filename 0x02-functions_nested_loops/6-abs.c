#include "main.h"

/**
 * _abs - Computes absolute value of an integer
 * @c: Check for value
 * Return: Val of number or zero
 */

int _abs(int c)

{
	if (c < 0)
	{
		int val;

		val = c * -1;
		return (val);
	}
	return (c);
}
