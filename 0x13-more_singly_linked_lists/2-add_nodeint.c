#include "lists.h"

/**
 * add_nodeint -  adds a new node at the beginning of a listint_t list
 * @head: head pointer
 * @n: element of the list
 *
 * Return: address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *tmp = NULL;

	if (head == NULL)
	{
		return (0);
	}

	tmp = malloc(sizeof(listint_t));
	if (tmp == NULL)
	{
		return (NULL);
	}
	tmp->n = n;
	tmp->next = NULL;

	tmp->next = (*head);
	(*head) = tmp;

	return ((*head));
}
