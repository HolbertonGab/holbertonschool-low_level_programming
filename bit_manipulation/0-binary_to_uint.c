#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 *
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if there is one or more chars in the
 * string b that is not 0 or 1, or if b is NULL
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 0;
	int length = 0, index = 0;

	if (b == NULL)
		return (0);

	length = strlen(b);

	for (index = 0; index < length; index++)
	{
		if (b[index] != '0' && b[index] != '1')
			return (0);
		if (b[index] == '1')
			number = (number << 1) | 1;
		else
			number = number << 1;
	}
	return (number);
}
