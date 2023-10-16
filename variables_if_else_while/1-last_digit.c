#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n, LastDig;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	LastDig = n % 10;

	if (LastDig > 5)
	{
		printf("last digit of %d is %d and is greater than 5\n", n, LastDig);
	}
	else if (LastDig == 0)
	{
		printf("last digit of %d is %d and is 0\n", n, LastDig);
	}
	else if (LastDig < 6 && LastDig != 0)
	{
		printf("last digit of %d is %d and is less tjan 6 and not 0\n", n, LastDig);
	}

	return (0);
}
