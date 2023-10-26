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

	while (i[s] != '\0')
	{
		if (i[s] == c)
		{
		return (s);
		}
		s++;
	}
	return (NULL);
}
