#include "main.h"
#include <stdio.h>

/**
 * *_strpbrk -function that searches a string for any of a set of bytes.
 *
 * @s: bytes of the initial segment.
 * @accept: bytes.
 *
 * Return: returns to number of bytes in s.
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			return (s + i);
		}
	}
	return (NULL);
}
