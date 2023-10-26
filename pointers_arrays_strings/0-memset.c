#include "main.h"
#include <stdio.h>

/**
 * *_memset - Write a function that fills memory with a constant byte.
 *
 * @s: memory area.
 * @b: constante byte.
 * @n: bytes of the memory area.
 *
 * Return: return to the string.
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}
	return (s);
}
