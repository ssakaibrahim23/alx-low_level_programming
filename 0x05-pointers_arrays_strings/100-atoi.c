#include "main.h"

/**
 * _atoi - Convert a string to int
 * @s: string
 * Return: An integer
 */

int _atoi(char *s)
{
	int x = 0, mi = 1, li = 0;
	unsigned int u = 0;

	while (s[x])
	{
	if (s[x] == 45)
	{
	mi *= -1;
	}
	while (s[x] >= 48 && s[x] <= 57)
	{
		li = 1;
		u = (u * 10) + (s[x] - '0');
		x++;
	}
	if (li == 1)
	{
	break;
	}
	x++;
	}
	u *= mi;
	return (u);
}
