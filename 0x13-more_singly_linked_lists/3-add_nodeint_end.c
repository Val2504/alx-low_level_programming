#include "lists.h"

/**
 * add_nodeint_end -  adds a new node at the end of a listint_t list
 * @head: head pointer
 * @n: element in the new node
 *
 * Return: address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tmp = NULL, *tmp2 = NULL;

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

	tmp2 = (*head);
	while (tmp2 != NULL && tmp2->next != NULL)
		tmp2 = tmp2->next;

	if (tmp2 != NULL)
		tmp2->next = tmp;
	else
		(*head) = tmp;

	return (tmp);
}
