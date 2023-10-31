#include "main.h"
/**
 * _strlen_recursion - function that return the length of a string.
 * @s: the string.
 *
 * Return: Always 0.
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (s[i] != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
