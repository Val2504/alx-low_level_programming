#include "main.h"
/**
 * _isupper - a program that checks for uppercase alphabets
 *@c: a variable that checks uppercase
 * Return: 1 when (success) 0 otherwise
 */
int _isupper(int c)
{
	if ((c >= 65) && (c <= 90))
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
