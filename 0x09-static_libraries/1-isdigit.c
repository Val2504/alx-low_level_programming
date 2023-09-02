#include "main.h"

/**
 * _isdigit - a program that checks for a digit
 * @c: a variable used
 *
 * Return: 1 if c is digit and 0 otherwise
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
	return (0);
}
