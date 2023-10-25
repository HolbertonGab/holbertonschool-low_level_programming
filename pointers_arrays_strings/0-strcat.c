#include "main.h"
#include <stdio.h>

/**
 * *_strcat - Write a function that concanate the string.
 * @dest: destination of the string.
 * @src: source of the string.
 *
 * Return: return to destination.
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j;


	while (dest[i] != '\0')
	{
		i++;
	}
	for (j = 0; src[j] != '\0'; i++, j++)
	{
		dest[i] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}
