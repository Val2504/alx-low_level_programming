#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root
 * @n: the number whose square root we are looking for
 *
 * Return: value of the natural number
 */
int _sqrt_recursion(int n)
{
	return (_sqrot(n, 1));
}
/**
 * _sqrot - finds the root of a number
 * @n: the number whose root we are looking for
 * @r: the root of the number
 *
 * Return: the root
 */
int _sqrot(int n, int r)
{
	int sqr = r * r;

	if (sqr > n)
	{
		return (-1);
	}
	if (sqr == n)
	{
		return (r);
	}
	return (_sqrot(n, r + 1));
}
