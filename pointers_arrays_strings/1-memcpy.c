#include "main.h"
#include <stdio.h>

/**
 * *_memcpy - Write a function that copies memory area.
 *
 * @dest: destination of memory area.
 * @src: source of memory area.
 * @n: bytes of the memory area.
 *
 * Return: returns to destination.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
