#include "main.h"
#include <stdio.h>

/**
 * *leet - Write a function that encodes a string into 1337.
 *
 * @str : the string.
 *
 * Return: return to the string.
 */
char *leet(char *str)
{
	int i, j;
	char tab1[] = "aAeEoOtTlL";
	char tab2[] = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j <= 10; j++)
		{
			if (str[i] == tab1[j])
			{
				str[i] = tab2[j];
			}
		}
	}
	return (str);
}
