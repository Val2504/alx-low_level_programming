#include "main.h"

/**
 * *create_array - creates an array of chars, and initializes it with
 * a specific char
 * @size: allocates the number of element in the array
 * @c: this is the char that will be used to initialize the array created
 *
 * Return: pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *tmp = NULL;
	unsigned int n;

	if (size == 0)
	{
		return (NULL);
	}

	tmp = malloc(sizeof(char) * size);

	if (tmp == NULL)
	{
		return (NULL);
	}
	for (n = 0; n < size; n++)
	{
		tmp[n] = c;
	}

	return (tmp);
}
