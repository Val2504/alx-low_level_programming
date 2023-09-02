#include "main.h"

/**
 * _strlen - returns the lenth of a string
 * @s: the pointer or string used
 *
 * Return: lenth of the string
 */
int _strlen(char *s)
{
	int string_len = 0;

	while (s[string_len])
		string_len++;
	return (string_len);
}
