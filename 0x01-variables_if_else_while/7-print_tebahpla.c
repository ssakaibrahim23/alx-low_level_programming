#include <stdio.h>

/**
 * main - Print lowercase alphabet in reverse
 * print using putchar
 * Return: 0
 */
int main(void)
{
	char al;

	for (al = 'z'; al >= 'a'; al--)
		putchar(al);
	return (0);
}
