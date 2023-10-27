#include "main.h"
#include <stdio.h>

/**
 * _strspn - Write a function that locates a character in a string.
 *
 * @s: bytes of the initial segment.
 * @accept: bytes.
 *
 * Return: returns to number of bytes in s.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != s[i]; j++)
		{
			if (accept[j] == '\0')
				return (i);
		}
	}
	return (i);
}
