#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - returns a pointer to a new string which is a duplicate of str.
 *
 * @str: pointer of the string.
 *
 * Return: 0 if successful
 */
char *_strdup(char *str)
{
	int i;
	int length = 0;
	char *newstr;

	while (str[length] != '\0')
	{
		length++;
	}
	newstr = malloc((length + 1) * sizeof(char));
	if (newstr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= length; i++)
	{
		newstr[i] = str[i];
	}
	return (newstr);
}
