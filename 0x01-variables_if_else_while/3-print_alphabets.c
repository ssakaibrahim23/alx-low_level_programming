#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Return: Always 0 (Sucess)
 */

int main(void)

{

	char lu;

	for (lu = 'a'; lu <= 'z'; lu++)
	putchar(lu);

	for (lu = 'A'; lu <= 'Z'; lu++)
	putchar(lu);
	putchar('\n');

	return (0);

}
