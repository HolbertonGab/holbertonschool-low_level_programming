#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints the numbers of base 16 .
 *
 * Return: Always (Success)
 *
 */

int main(void)
{
	char num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}

	for (num = 'a'; num <= 'f'; num++)
	{
		putchar(num);
	}

	putchar('\n');

	return (0);
}
