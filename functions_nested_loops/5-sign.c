#include "main.h"

/**
 * print_sign - function that prints the sign of a number.
 *
 * @n: the sign to print.
 *
 * Return: 1 and prints + if greater than 0, return 0 and prints 0 if 0
 * return -1 and prints - if less than 0.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
