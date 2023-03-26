#include "lists.h"
/**
 * sum_dlistint - Returns the sum
 * @head: Head
 * Return: Sum of nodes
 */
int sum_dlistint(dlistint_t *head)
{
	size_t res = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		res += head->n;
		head = head->next;
	}

	return (res);
}
