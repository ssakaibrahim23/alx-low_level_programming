#include <stdio.h>

/**
 * main - Prints all numbers of base 16 in lowercase
 * followed by anew line
 * Return: 0
 */
int main(void)
{
	int num;
	char low;

	for (num = 0; num <= 10; num++)
		putchar((num % 10) + '0');

	for (low = 'a'; low <= 'f'; low++)
		putchar(low);

	putchar('\n');

	return (0);
}
