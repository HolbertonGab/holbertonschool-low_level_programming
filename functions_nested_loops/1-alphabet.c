#include "main.h"

/**
 * main - prints the alphabet, in lowercase, followed by a new line.
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 97; letter <= 122; letter++)
	{
		_putchar(letter);
	}
		_putchar('\n');
}
