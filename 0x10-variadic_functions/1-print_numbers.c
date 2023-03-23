#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers, followed by a new line
 * @separator: a string to be printed between numbers
 * @n: number of integers passed to the function
 * @...: variable numbers
 * Return: Void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbs;
	unsigned int x;
	int num;

	va_start(numbs, n);
	for (x = 0; x < n; x++)
	{
		num = va_arg(numbs, int);
		printf("%d", num);

		if (x != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(numbs);
	printf("\n");
}
