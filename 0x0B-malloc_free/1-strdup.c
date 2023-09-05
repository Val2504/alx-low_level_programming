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
	unsigned int len, n;

	if (str == NULL)
	{
		return (NULL);
	}
	for (len = 0; str[len]; len++)/* gets the lenth of the string */
	tmp = malloc((len + 1) * sizeof(char));

	if (tmp == NULL)
	{
		return (NULL);
	}

	for (n = 0; n < len + 1; n++)/* checks that the number */
		/* of the element of the string */
		/* is less than the length */
	{
		tmp[n] = str[n];
	}
	tmp[n] = '\0';

	return (tmp);
}
