#include "main.h"

/**
 * _isalpha - function that checks for lowercase or uppercase character.
 *
 * @c: the character to check.
 *
 * Return: 1 if c is lowercase or uppercase, 0 otherwise.
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
	{
		return (1);
	}
	return (0);
}
