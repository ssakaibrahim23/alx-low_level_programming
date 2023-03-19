#include <stdio.h>
#include "main.h"

/**
 * main - Prints number of arguments
 * @argc: arg count
 * @argv: arg vector
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);

	return (0);
}
