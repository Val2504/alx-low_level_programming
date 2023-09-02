#include "main.h"
#include <stdio.h>

/**
 * *_strchr - a function that locates a character in a string
 * @s: the string pointer
 * @c: the charcter we want to locate
 *
 * Return: the pointer if found, NULL when not found
 */
char *_strchr(char *s, char c)
{
	int chara = 0;

	while (s[chara] >= '\0')
	{
		if (s[chara] == c)
		{
			return (s + chara);
		}
		chara++;
	}
	return (NULL);
}
