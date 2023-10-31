#include "main.h"

/**
 * if_prime - func that check if number is prime.
 *
 * @n: the number to be checked
 * @i: the iteration times
 *
 * Return: 1 if the input integer is a prime number, otherwise return 0..
 */
int if_prime(int n, int i)
{

	if (n <= 1)
	{
		return (0);
	}
	if (n % i == 0 && i > 1)
	{
		return (0);
	}
	if ((n / i) < i)
	{
		return (1);
	}
	return (if_prime(n, i + 1));
}
/**
 * is_prime_number- Returns if a number is prime.
 *
 * @n: the number to be checked
 *
 * Return: integer value
 */
int is_prime_number(int n)

	return (if_prime(n, 1));
}
