#include "main.h"

/**
 * times_table - Write a function that prints the 9 times table,
 * starting with 0.
 *
 * @num,mult,prod : numerator, multiplicator, product..
 *
 * Return: ?.
 */
void times_table(void)
{
	int num, mult, prod;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0');

		for (mult = 1; mult <= 9; mult++)
		{
			_putchar(44);
			_putchar(32);

			prod = num * mult;

			if (prod <= 9)
			_putchar(32);

			else
			_putchar((prod / 10) + '0');
			_putchar((prod % 10) + '0');
		}
		_putchar('\n');
	}
}
