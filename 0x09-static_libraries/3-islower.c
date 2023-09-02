#include "main.h"

/**
 * _islower - a c program thta checks lowercase alphabets
 *
 * @c: a variable that was used
 *
 * Return: 0 (success)
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
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
