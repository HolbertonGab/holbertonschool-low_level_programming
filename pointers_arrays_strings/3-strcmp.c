#include "main.h"
#include <stdio.h>

/**
 * _strcmp - Write a function that compares two strings.
 *
 * @s1: the first string.
 * @s2: the second string.
 *
 * Return: return to 0.
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int j = 0;

	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
		j = s1[i] - s2[i];
		}
		return (j);
	}
	return (0);
}
