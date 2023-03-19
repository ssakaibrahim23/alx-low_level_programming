#include "main.h"

/**
 * _atoi - Converts astring into an int
 * @s: string
 * Return: int
 */

int _atoi(char *s)
{
	unsigned int r = 0;
	int sn = 1, a = 0;

	while (!(s[a] <= '9' && s[a] >= '0') && s[a] != '\0')
	{
		if (s[a] == '-')
		{
			sn *= -1;
		}
		a++;
	}
	while (s[a] <= '9' && (s[a] >= '0' && s[a] != '\0'))
	{
		r = (r * 10) + (s[a] - '0');
		a++;
	}
	r *= sn;
	return (r);
}

