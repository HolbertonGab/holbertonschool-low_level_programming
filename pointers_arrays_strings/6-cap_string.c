#include "main.h"
#include <stdio.h>

/**
 * *cap_string - function that capitalizes all words of a string.
 *
 * @str : the string.
 *
 * Return: return to the string.
 */
char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i - 1] == ' ' ||
			str[i - 1] == '\t' ||
			str[i - 1] == '\n' ||
			str[i - 1] == ',' ||
			str[i - 1] == ';' ||
			str[i - 1] == '.' ||
			str[i - 1] == '!' ||
			str[i - 1] == '?' ||
			str[i - 1] == '"' ||
			str[i - 1] == '(' ||
			str[i - 1] == ')' ||
			str[i - 1] == '{' ||
			str[i - 1] == '}' ||
			i == 0)
			if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] -= 32;
		}
	}
		return (str);
}
