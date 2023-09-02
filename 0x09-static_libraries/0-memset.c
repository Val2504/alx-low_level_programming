#include "main.h"

/**
 * *_memset - this is a function that filles a block of memory
 * @s: this is a str pointer that points to the address of b
 * @b: this is a constant value
 * @n: this tracks the number of values
 *
 * Return: the value of pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int item;

	for (item = 0; item < n; item++)
		s[item] = b;
	return (s);
}
