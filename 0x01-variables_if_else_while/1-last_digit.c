#include <stdlib.h>

#include <time.h>

#include <stdio.h>


/**
 * main - This program will assign a random number to the variable n
 * Rturn: (0)
 */
int main(void)

{

	int n, lstd;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	lstd = n % 10;
	if (lstd > 5)
	{
	printf("Last digit of %d is %d and is greater than 5\n", n, lstd);
	}
	else if (lstd == 0)
	{
	printf("Last digit of %d is %d and is 0\n", n, lstd);
	}
	else if (lstd < 6 && lstd != 0)
	{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lstd);
	}
	return (0);
}
