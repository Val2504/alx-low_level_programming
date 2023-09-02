#include "main.h"

/**
 * _isalpha - a function that prints alphabets
 * @c: a variable used
 *
 * Return: 0 (success)
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90)
			|| (c >= 97 && c <= 122))
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
