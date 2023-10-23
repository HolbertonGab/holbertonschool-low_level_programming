#include "main.h"
/**
 * swap_int - function that swaps the values of two integers.
 * @a: value of integer a.
 * @b: value of integer b.
 */
void swap_int(int *a, int *b)
{
	int swap = 0;

	swap = *b;
	*b = *a;
	*a = swap;
}
