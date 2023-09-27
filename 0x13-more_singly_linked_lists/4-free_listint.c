#include "lists.h"

/**
 * free_listint -  frees a listint_t list
 * @head: head pointer
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *tmp = NULL;

	if (head == NULL)
	{
		return;
	}

	tmp = head->next;

	while (head != NULL)
	{
		free(head);
		head = tmp;

		if (tmp != NULL)
		{
			tmp = tmp->next;
		}
	}
}
