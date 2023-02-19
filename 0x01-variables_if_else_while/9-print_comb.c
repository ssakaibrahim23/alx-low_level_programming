#include <stdio.h>

/**
 * main - Prints all cmbinations of single-digit numbers
 * in ascending order each separated by ',' followed by a space
 * Return: 0
 */

int main(void)
{
	int no;

	for (no = 48; no < 58; no++)
		putchar(no);

		if (no != 57)
		{
			putchar(',');
			putchar(' ');
		}
		putchar('\n');
	return (0);
}
