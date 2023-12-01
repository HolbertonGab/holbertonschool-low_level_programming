#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * print_binary - prints a number as binary string
 * @n: the number to print
 *
 */
void print_binary(unsigned long int n)
{
	int bit = sizeof(n) * 8, printed = 0;

	while (bit)
	{
		if (n & 1L << --bit)
		{
			_putchar('1');
			printed++;
		}
		else if (printed)
			_putchar('0');
	}
	if (!printed)
		_putchar('0');
}
