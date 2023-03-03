#include "main.h"

/**
 * rot13 - Encodes a string using rot13.
 *@p: pointer
 *Return: pointer
 */

char *rot13(char *p)
{
	int a, b;
	char c[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char d[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (a = 0; p[a] != '\0'; a++)
	{
		for (b = 0; b < 52; b++)
		{
			if (p[a] == c[b])
			{
				p[a] = d[b];
				break;
			}
		}
	}
	return (p);
}
