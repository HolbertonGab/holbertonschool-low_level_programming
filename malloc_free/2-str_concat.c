#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *str_concat - function that concatenates two strings.
 *
 * @s1: the first string.
 * @s2: the second string.
 *
 * Return: 0 if successful
 */
char *str_concat(char *s1, char *s2)
{
	int len1 = 0;
	int len2 = 0;
	int i;
	char *result;

	if (s1 == NULL && s2 == NULL)
	{
		return (NULL);
	}
	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	result = malloc((len1 + len2 + 1) * sizeof(char));
	if (result != NULL)
	{
		for (i = 0; i < len1; i++)
		{
			result[i] = s1[i];
		}
		for (i = 0; i < len2; i++)
		{
			result[len1 + i] = s2[i];
		}
		result[len1 + len2] = '\0';
	}
	return (result);
}
