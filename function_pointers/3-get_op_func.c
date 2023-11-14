#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * get_op_func - func that selects the correct func to perform the operation
 *
 * @s: operator passed as argument to the program
 *
 * Return: NULL If s does not match any of the 5 expected operators
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	while (ops[i].op != NULL)
	{
		if (*(ops[i].op) == *s && s[i] == '\0')
			return (ops[i].f);
			i++;
	}
	return (NULL);
}
