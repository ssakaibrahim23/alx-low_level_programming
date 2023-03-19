#include <stdio.h>
#include "main.h"

/**
 * main - Prints all argument it recieves
 * @argc: arg count
 * @argv: arg vector
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}
	return (0);
}
