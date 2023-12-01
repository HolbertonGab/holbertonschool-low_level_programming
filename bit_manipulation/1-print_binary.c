#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * print_binary - function that prints the binary representation of a number
 *
 * @n: -
 *
*/
void print_binary(unsigned long int n)
{
	int num_bits = sizeof(unsigned long int) * 8;
	int i = 0;

	for (i = num_bits - 1; i >= 0; i--)
	{

		unsigned long int bitmask = 1UL << i;

		if (n & bitmask)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
	}
	_putchar('\n');
}
