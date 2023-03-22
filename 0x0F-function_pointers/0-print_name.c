#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Prints a name
 * @name: string literal
 * @f: function pointer
 * Return: Void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	else
	{
		f(name);
	}
}
