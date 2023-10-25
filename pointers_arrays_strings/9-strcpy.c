#include "main.h"
#include <stdio.h>

/**
 * *_strcpy - Write a function that copies the string.
 * @dest: destination of the string.
 * @src: source of the string.
 *
 * Return: return to destination.
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	{
	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	}
		dest[i] = '\0';

	return (dest);
}
