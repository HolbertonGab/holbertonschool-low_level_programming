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
	unsigned int len1 = 0;
	unsigned int len2 = 0;
	unsigned int i = 0;


	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
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
	result = malloc((len1 + n + 1) * sizeof(char));
	if (result == NULL)
	{
		return(NULL);
	}
	for (; i < len1; i++)
	{
		result[i] = s1[i];
	}
	for (; i - len1 < n; i++)
	{
		result[i] = s2[i - len1];
	}
	result[len1 + n] = '\0';

	return (result);
}
