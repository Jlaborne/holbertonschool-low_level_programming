/**
 * sum_dlistint - Add all data in a dlistint_t.
 * @head: A pointer to the head of the dlistint_t list.
 * Return: The sum of all data
 *
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
