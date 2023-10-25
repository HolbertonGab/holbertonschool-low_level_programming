#include "main.h"
#include <stdio.h>

/**
 * *string_toupper - function that changes all lowercase letters to uppercase.
 *
 * @str : the string.
 *
 * Return: return to the string.
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
	}
	return (str);
}
