#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers
 *
 * @n: the number of integers passed to the function
 * @separator: string to be printed
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		if (i == 0)
			printf("%d", va_arg(ap, unsigned int));

		else
			printf(", %d", va_arg(ap, unsigned int));
	}
	if (separator != NULL && i < (n - 1))
	{
		printf("%s", separator);
	}
	va_end(ap);
	printf("\n");
}
