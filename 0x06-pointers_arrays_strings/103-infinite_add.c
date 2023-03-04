#include "main.h"

/**
 * rev_string - reverse array
 * @n: parameter for int
 * Return: 0
 */

void rev_string(char *n)
{
	int a = 0, b = 0;
	char s;

	while (*(n + a) != '\0')
	{
		a++;
	}
	a--;

	for (b = 0; b < a; b++, a--)
	{
		s = *(n + b);
		*(n + b) = *(n + a);
		*(n + a) = s;
	}
}

/**
 * infinite_add - Add two numbers
 * @n1: num 1 to be added
 * @n2: num 2 to be added
 * @r: buffer that function will use to store results
 * @size_r: size of buffer
 * Return: 0
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int fl = 0, a = 0, b = 0, c = 0;
	int v1 = 0, v2 = 0, st = 0;

	while (*(n1 + a) != '\0')
		a++;
	while (*(n2 + b) != '\0')
		b++;
	a--;
	b--;
	if (a >= size_r || b >= size_r)
		return (0);
	while (a >= 0 || b >= 0 || fl == 1)
	{
		if (a < 0)
			v1 = 0;
		else
			v1 = *(n1 + a) - '0';
		if (b < 0)
			v2 = 0;
		else
			v2 = *(n2 + b) - '0';
		st = v1 + v2 + fl;
		if (st >= 10)
			fl = 1;
		else
			fl = 0;
		if (c >= (size_r - 1))
			return (0);
		*(r + c) = (st % 10) + '0';
		c++;
		a--;
		b--;
	}
	if (c == size_r)
		return (0);
	*(r + c) = '\0';
	rev_string(r);
	return (r);
}
