#include "main.h"

/**
 * *_calloc -  allocates memory for an array, using malloc
 * @nmemb: array that a memory is to be allocated for
 * @size: the size in bytes of the element of the array
 *
 * Return:  pointer to the memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *tmp;
	unsigned int n;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	tmp = malloc(nmemb * size);
	if (tmp == NULL)
	{
		return (NULL);
	}
	for (n = 0; n < (nmemb * size); n++)
		tmp[n] = 0;

	return (tmp);
}
