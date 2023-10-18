#include "main.h"

/**
 * print_last_digit - Write a function that prints the last digit of a number.
 *
 * @n: the number to be printed.
 *
 * Return: the last digit of numbers.
 */
int print_last_digit(int n)
{
	int lastDigit;

	lastDigit = n % 10;

	if (n < 0)
	{
	lastDigit = lastDigit * -1;
	}
	_putchar(lastDigit + '0');
	return (lastDigit);
}
