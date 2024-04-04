#include "lists.h"

/**
 * free_dnodeint - Free a dlistint_t list.
 * @head: A pointer to the head of the dlistint_t list.
 *
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
