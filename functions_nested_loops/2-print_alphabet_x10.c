#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet.
 *
 */
void print_alphabet_x10(void)
{
	char Alpha;
	int Multiplier = 0;

	while (Multiplier <= 9)
	{
	for (Alpha = 97; Alpha <= 122; Alpha++)
		{
		_putchar(Alpha);
		}
		_putchar('\n');
Multiplier++;
	}
}
