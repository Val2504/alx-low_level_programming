#include "main.h"

/**
 * *string_nconcat -  concatenates two strings
 * @s1: first string pointer
 * @s2: second string pointer
 * @n: tracks the length of the string
 *
 * Return: pointer to the new space
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *tmp = NULL;
	unsigned int len1, len2, n1;

	if (*s1 == '\0')
		len1 = 0;
	else
	{
		len1 = 0;
		while (s1[len1] != '\0')
			len1++;
	}
	if (*s2 == '\0')
		len2 = 0;
	else
	{
		len2 = 0;
		while (s2[len2] != '\0')
			len2++;
	}
	if (n >= len2)
		len2 = n;
	tmp = malloc(sizeof(char) * (len1 + len2 + 1));

	if (tmp == NULL)
	{
		return (NULL);
	}
	for (n1 = 0; n1 < len1; n1++)
		tmp[n1] = s1[n1];
	for (n1 = 0; n1 < len2; n1++)
		tmp[n1 + len1] = s2[n1];
	tmp[len1 + len2] = '\0';

	return (tmp);
}
