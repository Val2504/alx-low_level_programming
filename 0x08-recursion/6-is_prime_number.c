#include "main.h"
#include <stdio.h>
int prime_number(int n, int r);
/**
 * is_prime_number - a function that returns the 1 if n
 * is a prime number and 0 otherwise
 * @n: the number to check
 *
 * Return: the actual value
 */
int is_prime_number(int n)
{
	return (prime_number(n, 1));
}
/**
 * prime_number - checks if a number is a prime number
 * @n: the number to check
 * @r: acts like a whole number
 *
 * Return: the prime number
 */
int prime_number(int n, int r)
{
	if (n <= 1)
		return (0);

	if (n % r == 0 && r > 1)
		return (0);

	if ((n / r) < r)
		return (1);

	return (prime_number(n, r + 1));
}
