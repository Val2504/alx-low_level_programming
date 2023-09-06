#include "main.h"

/**
 * *str_concat - adds two string to an allocated space
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to the allocated space
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int len1 = 0, len2 = 0, n1, n2;
	char *tmp = NULL;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;/* gets the length of s1 and s2 */
	tmp = malloc(sizeof(char) * (len1 + len2 + 1));
	/* allocates space */
	if (tmp == NULL)/* checks if a space was provided */
	{
		return (NULL);
	}
	/* a loop that will go through the string and assign the */
	/* of the two strings to the pointer tmp */
	for (n1 = 0; n1 < len1; n1++)
		tmp[n1] = s1[n1];
	for (n2 = 0; n2 <= len2; n2++)
	{
		tmp[n1] = s2[n2];
		n1++;
	}

	return (tmp);
}
