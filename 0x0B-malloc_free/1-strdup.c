#include "main.h"

/**
 * *_strdup - copies a string to a newly allocated space
 * @str: the string that is to be copied
 *
 * Return: the pointer to the newly allocated space
 */
char *_strdup(char *str)
{
	char *tmp = NULL;
	unsigned int len, n = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[len])
		len++;/* gets the lenth of the string */
	tmp = malloc(sizeof(char) * (len + 1));

	if (tmp == NULL)
	{
		return (NULL);
	}

	for (n = 0; n < len + 1; n++)/* checks that the number */
		/* of the element of the string */
		/* is less than the length */
		tmp[n] = str[n];
	tmp[n] = '\0';

	return (tmp);
}
