#include "main.h"
#include <stdio.h>

/**
 * reverse_array - Write a function that reverses array of integers.
 *
 * @a: array of integers..
 * @n: is the number of elements of the array.
 *
 */
void reverse_array(int *a, int n)
{
	int i;
	int temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
