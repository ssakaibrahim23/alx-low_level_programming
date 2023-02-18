#include <stdio.h>

/**
 * main - Print all alphabets in lowercase except q & e
 * Return: 0
 */
int main(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
	{
		if (low != 'e' && low != 'q')
			putchar(low);
	}

	putchar('\n');

	return (0);
}
