#include "lists.h"
/**
 * get_dnodeint_at_index - Locate a node of a dlistint_t list.
 * @head: A pointer to the head of the dlistint_t list.
 * @n: The node to locate.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the located node.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
}
