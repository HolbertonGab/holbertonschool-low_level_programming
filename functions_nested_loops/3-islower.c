#include "main.h"

/**
 * _islower - function that checks for lowercase character.
 *
 * @c: the character to check.
 *
 * Return: 1 if c is lowercase or 0 otherwise.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
