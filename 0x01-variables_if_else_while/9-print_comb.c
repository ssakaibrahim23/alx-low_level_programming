#include <stdio.h>

/**
 * main - Prints all cmbinations of single-digit numbers
 * in ascending order each separated by ',' followed by a space
 * Return: 0
 */

int main(void)
{
	int no;

	for (no = 0; no < 10; no++)
	{
		putchar(no + '0');
		if (no < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
