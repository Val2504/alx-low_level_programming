#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: head pointer
 * @str: duplicated string
 *
 * Return: address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tmp = NULL, *tmp2 = NULL;
	int count = 0;

	tmp = malloc(sizeof(list_t));
	if (tmp == NULL)
	{
		return (NULL);
	}
	if (str == 0 || str[0] == '\0')
	{
		tmp->str = strdup("");
		if (!tmp->str)
		{
			free(tmp), tmp = NULL;
			return (NULL);
		}
		tmp->len = 0;
	}
	else
	{
		tmp->str = strdup(str);
		if (tmp->str == NULL)
		{
			free(tmp), tmp = NULL;
			return (NULL);
		}
		for (tmp->len = 0; tmp->str[count] != '\0'; count++)
			tmp->len++;
	}
	if ((*head) != NULL)
	{
		for (tmp2 = (*head); tmp2->next != NULL; tmp2 = tmp2->next)
			;
		tmp2->next = tmp, tmp->next = NULL;
	}
	else
		tmp->next = NULL, (*head) = tmp;
	return (tmp);
}
