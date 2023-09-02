#include "main.h"

/**
 * *_memcpy - a function that copies memory area
 * @dest: the memory area that src copies to
 * @src: the memory area that copies to another
 * @n: the tracker that checkes the bytes
 *
 * Return: the pointer copyed to
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int cpy;

	for (cpy = 0; cpy < n; cpy++)
	dest[cpy] = src[cpy];
	return (dest);
}
