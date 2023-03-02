#include "main.h"

/**
 * cap_string - Capitalises all words of a string
 * @s: String
 *Return: pointer
 */

char *cap_string(char *s)
{
	int leng = 0;

	while (s[leng])
	{
		while (!(s[leng] >= 'a' && s[leng] <= 'z'))
			leng++;
		if (s[leng - 1] == ' ' ||
		s[leng - 1] == '\t' ||
		s[leng - 1] == '\n' ||
		s[leng - 1] == ',' ||
		s[leng - 1] == ';' ||
		s[leng - 1] == '.' ||
		s[leng - 1] == '!' ||
		s[leng - 1] == '?' ||
		s[leng - 1] == '"' ||
		s[leng - 1] == '(' ||
		s[leng - 1] == ')' ||
		s[leng - 1] == '{' ||
		s[leng - 1] == '}' ||
		leng == 0)
			s[leng] -= 32;
		leng++;
	}
	return (s);
}
