#include "main.h"
/**
 * _strlen_recursion - returns the lenth of a string
 * @s: string pointer
 *
 * Return: length of a string
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s == '\0')
	{
		return ('\0');
	}
	else
	{
		s++;
		len = 1 + _strlen_recursion(s);
	}
	return (len);
}
