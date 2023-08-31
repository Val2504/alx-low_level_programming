#include "main.h"
/**
 * _pow_recursion - returns the power of a number
 * @x: the value of the number whose power is being returned
 * @y: the power to raise
 *
 * Return: x(value that will be raised to a power)
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	else
	{
		x = x * _pow_recursion(x, (y - 1));
	}
	return (x);
}
