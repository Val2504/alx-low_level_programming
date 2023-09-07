#include "main.h"

/**
 * *malloc_checked -  allocates memory using malloc
 * @b: the amount of space that malloc will allocate
 *
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *tmp = NULL;

	if (b == 0)
	{
		return (NULL);
	}
	tmp = malloc(b);
	if (tmp == NULL)
	{
		exit(98);
	}

	return (tmp);
}
