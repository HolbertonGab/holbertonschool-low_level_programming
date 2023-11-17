#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_char - prints a char
 * @ap: argument pointer
 */
void print_char(va_list ap)
{
	printf("%c", va_arg(ap, int));
}

/**
 * print_int - prints an integer
 * @ap: argument pointer
 */
void print_int(va_list ap)
{
	printf("%d", va_arg(ap, int));
}

/**
 * print_float - prints a float
 * @ap: argument pointer
 */
void print_float(va_list ap)
{
	printf("%f", va_arg(ap, double));
}

/**
 * print_str - prints a string
 * @ap: argument pointer
 */
void print_str(va_list ap)
{
	char *s = va_arg(ap, char *);

	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
		printf("%s", s);
}

/**
 * print_all - function that prints anything
 *
 * @format: types of argument passed to the function
 *
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0;
	int j = 0;

	printer_t types[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_str},
		{NULL, NULL}

	};

	va_start(ap, format);

	while (format && format[i])
	{
		while (types[j].symbol != NULL)
		{
			if (format[i] == types[j].symbol[0])
			{
				types[j].print(ap);
				break;
			}
			j++;
		}
		i++;
	}
	va_end(ap);
	printf("\n");
}
