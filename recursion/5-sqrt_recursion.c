#include "main.h"

/**
 * _calculate_sqrt - func that calculates the square root of a number.
 *
 * @n: an interger
 * @i: index
 *
 * Return: square root of n.
 */
int _calculate_sqrt(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	if (i * i > n)
	{
		return (-1);
	}
	return (_calculate_sqrt(n, i + 1));
}
/**
 * _sqrt_recursion - func that returns the natural square root of a number.
 *
 * @n: an interger
 *
 * Return: natural square root of n if it exists, -1 otherwise.
 */
int _sqrt_recursion(int n)
{

	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (0);
	}
	return (_calculate_sqrt(n, 1));
}
