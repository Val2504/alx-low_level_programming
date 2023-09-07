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
	int n, tplen;

	if (min > max)
	{
		return (NULL);
	}
	tplen = max - min + 1;
	tmp = malloc(sizeof(int) * tplen);
	if (tmp == NULL)
	{
		return (NULL);
	}
	for (n = 0; n < tplen; n++)
	{
		tmp[n] = min;
		min++;
	}

	return (tmp);
}
