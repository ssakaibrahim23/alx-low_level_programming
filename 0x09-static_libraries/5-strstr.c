#include "main.h"

/**
 * _strstr - Entry
 * @haystack: input
 * @needle: input
 * Return: 0 (Success)
 */

char *_strstr(char *haystack, char *needle)
{
	char *l = haystack, *m = needle;

	for (; *haystack != '\0'; haystack++)
	{
		while (*l == *m && *m != '\0')
		{
			l++;
			m++;
		}
		if (*m == '\0')
		{
			return (haystack);
		}
	}
	return (0);
}
