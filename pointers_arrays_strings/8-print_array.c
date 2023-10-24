#include "main.h"
#include <stdio.h>

/**
 * print_array - function that prints n elements of an array of integers.
 * @n: this is the length of the array.
 * @a: this is the input array.
 */
void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		printf("%d", a[index]);

		if (index != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
