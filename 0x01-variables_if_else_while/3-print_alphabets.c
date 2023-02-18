#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Return: Always 0 (Sucess)
 */

int main(void)

{

	char low;

	for (low = 'a'; low <= 'z'; low++)
	putcher(low);

	for (low = 'A'; low <= 'z'; low++)
	putcher(low);
	putchar('\n');

	return (0);

}
