#include <stdio.h>

/**
 * main - Prits single numbers of base 10 using putchar
 * Return: 0
 */

int main(void)
{
	int nm;

	for (nm = 0; nm < 10; nm++)
		putchar((nm % 10) + '0');
	putchar('\n');
	return (0);
}
