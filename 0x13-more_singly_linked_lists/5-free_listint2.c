#include "lists.h"

/**
 * free_listint2 -  frees a listint_t list
 * @head: head pointer
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp = NULL;

	if (head == NULL || (*head) == NULL)
	{
		return;
	}

	while ((*head))
	{
		tmp = (*head)->next;
		free((*head));
		(*head) = tmp;
	}
	(*head) = NULL;
}
