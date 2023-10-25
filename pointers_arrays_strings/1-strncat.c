#include "main.h"
#include <stdio.h>

/**
 * *_strncat - Write a function that concanate the string.
 *
 * @dest: destination of the string.
 * @src: source of the string.
 * @n: limit of the concatenation.
 *
 * Return: return to destination.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i])
	{
		i++;
	}
	while (j < n && src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i + n + 1] = '\0';

	return (dest);
}
