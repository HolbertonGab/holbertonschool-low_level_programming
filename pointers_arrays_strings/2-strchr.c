#include "main.h"
#include <stdio.h>

/**
 * *_strchr - Write a function that locates a character in a string.
 *
 * @s: the string.
 * @c: the first occurrence.
 *
 * Return: returns to first occurence or NULL..
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
		return (s);
		}
		s++;
	}
		if (c == '\0')
		{
		return (s);
		}
	return (0);
}
