#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min: first content of the array
 * @max: second content of the array
 *
 * Return: pointer to the allocated memory
 */
int *array_range(int min, int max)
{
	int *tmp = NULL;
	int n;

	if (min > max)
	{
		return (NULL);
	}

	tmp = malloc(sizeof(int) * (min + max));
	if (tmp == NULL)
	{
		return (NULL);
	}
	for (n = 0; n < (min + max); n++)
		tmp[n] = min + max;
	return (tmp);
}
