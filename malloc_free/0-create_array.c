#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *create_array - create array of chars.
 *
 * @size: the size of the memory to print.
 * @c: .
 *
 * Return: 0 if successful
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = malloc((size + 1) * sizeof(char));
	if (s == 0)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	s[i] = '\0';
	return (s);
}
