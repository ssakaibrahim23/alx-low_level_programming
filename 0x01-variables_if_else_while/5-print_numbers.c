#include <stdio.h>

/**
 * main - Program that prints all single numbers of base 10
 * Return: 0
 */
int main(void)
{
	int bs;

	for (bs = 0; bs <= 9; bs++)
		printf("%d", bs);
	printf("\n");

	return (0);
}
