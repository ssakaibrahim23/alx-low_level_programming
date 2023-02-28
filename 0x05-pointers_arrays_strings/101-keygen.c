#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generate random valid passwords
 * for the program 101-crackme.
 * Return: 0 (Success)
 */

int main(void)
{
	char psd[84];
	int x = 0, sum = 0, dh1, dh2;

	srand(time(0));

	while (sum < 2772)
	{
		psd[x] = 33 + rand() % 94;
		sum += psd[x++];
	}

	psd[x] = '\0';

	if (sum != 2772)
	{
		dh1 = (sum - 2772) / 2;
		dh2 = (sum - 2772) / 2;
		if ((sum - 2772) % 2 != 0)
			dh1++;
		for (x = 0; psd[x]; x++)
		{
			if (psd[x] >= (33 + dh1))
			{
				psd[x] -= dh1;
				break;
			}
		}
		for (x = 0; psd[x]; x++)
		{
			if (psd[x] >= (33 + dh2))
			{
				psd[x] -= dh2;
				break;
			}
		}
	}
	printf("%s", psd);
	return (0);
}
