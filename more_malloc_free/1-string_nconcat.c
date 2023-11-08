#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "main.h"

/**
 * *string_nconcat - function that concatenates two strings.
 *
 * @s1: first string.
 * @s2: second string.
 * @n: the n bytes.
 *
 * Return: 0 if succesful
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result = 0;
	unsigned int len1;
	unsigned int len2;
	unsigned int i = 0;


	while (s1 == NULL && s2 == NULL)
	{
		continue;
	}
	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	if (n >= len2)
	{
		n = len2;
	}
	result = malloc((len1 + n + 1) * sizeof(unsigned int));
	if (result == NULL)
	{
		exit(1);
	}
	for (; i < len1; i++)
	{
		result[i] = s1[i];
	}
	for (; i < n; i++)
	{
		result[len1 + i] = s2[i];
	}
	result[len1 + n] = '\0';

	return (result);
}
