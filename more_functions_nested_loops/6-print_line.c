#include "main.h"

/**
 * print_line - draw a straight line.
 *
 * @n: the number of times
 */
void print_line(int n)
{
	int i = 0;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
		_putchar('_');
		}
		_putchar('\n');
	}
}
