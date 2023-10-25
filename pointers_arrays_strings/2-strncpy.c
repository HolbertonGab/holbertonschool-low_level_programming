#include "main.h"
#include <stdio.h>

/**
 * *_strncpy - Write a function that copies a string.
 *
 * @dest: destination of the string.
 * @src: source of the string.
 * @n: .
 *
 * Return: return to destination.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i]; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n ; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
