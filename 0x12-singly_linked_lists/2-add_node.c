#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: head pointer
 * @str: the pointer that needs to be duplicated
 *
 * Return: address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *tmp = NULL;
	int count = 0;

	if (head == 0)
	{
		return (0);
	}
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
			free(tmp);
			tmp = NULL;
			return (NULL);
		}
		tmp->len = 0;
	}
	else
	{
		tmp->str = strdup(str);
		if (tmp->str == NULL)
		{
			free(tmp);
			tmp = NULL;
			return (NULL);
		}
		for (tmp->len = 0; tmp->str[count] != '\0'; count++)
			tmp->len++;
	}
	tmp->next = *head;
	*head = tmp;

	return (*head);
}
