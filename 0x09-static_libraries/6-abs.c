#include "main.h"

/**
 * _abs - a program that gives the absolute value
 * @u: a variable used
 *
 * Return: 0 (success)
 */
int _abs(int u)
{
	if (u >= 0)
	{
		return (u);
	}
	else
	{
		return (u * -1);
	}
	_putchar('\n');
	return (0);
}
