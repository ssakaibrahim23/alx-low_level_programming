#include "main.h"

/**
 * rev_string - Reverse a string
 * @s: string
 */

void rev_string(char *s)
{
	int x = 0, ind = 0;
	char m;

	while (s[ind++])
	x++;
	for (ind = x - 1; ind >= x / 2; ind--)
	{
		m = s[ind];
		s[ind] = s[x - ind - 1];
		s[x - ind - 1] = m;
	}
}
