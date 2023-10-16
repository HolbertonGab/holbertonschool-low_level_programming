#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints the numbers from 0 to 9
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	char num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}

	putchar('\n');

	return (0);
}

