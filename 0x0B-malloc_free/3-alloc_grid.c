#include "main.h"

/**
 * **alloc_grid - creates 2 dimentional array
 * @width: wight of the array
 * @height: height of the array
 *
 * Return: pointer to the array
 */
int **alloc_grid(int width, int height)
{
	int **tmp = NULL;
	int n1, n2;

	if (width <= 0 || height  <= 0)
	{
		return (NULL);
	}
	tmp = malloc(sizeof(int *) * height);
	if (tmp == NULL)
	{
		free(tmp);
		return (NULL);
	}
	for (n1 = 0; n1 < height; n1++)
	{
		tmp[n1] = malloc(sizeof(int *) * width);
		if (tmp[n1] == NULL)
		{
			for (n1--; n1 >= 0; n1--)
				free(tmp);
			free(tmp[n1]);
			return (NULL);
		}
	}
	for (n1 = 0; n1 < height; n1++)
		for (n2 = 0; n2 < width; n2++)
			tmp[n1][n2] = 0;

	return (tmp);
}
