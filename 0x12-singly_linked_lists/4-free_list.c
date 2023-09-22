#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: head pointer
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *tmp = NULL;
	list_t *tmp2 = NULL;

	tmp = head;
	tmp2 = tmp;
	while (tmp != NULL)
	{
		tmp2 = tmp;
		tmp = tmp->next;
		free(tmp2->str);
		free(tmp2);
	}
}
