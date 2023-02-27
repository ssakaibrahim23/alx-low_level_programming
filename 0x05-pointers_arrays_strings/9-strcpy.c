#include "main.h"

/**
 * _strcpy - Copies the stringto the buffer
 * @src: points string
 * @dest: points buffer
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int k;

	for (k = 0; src[k] != '\0'; k++)
	{
	dest[k] = src[k];
	}
	dest[k++] = '\0';
	return (dest);
}
