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
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);

		if (num != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
