#include "lists.h"
/**
 * print_dlistint - A function that prints all the elements of dlistint
 * @h: Pointer to first node
 *
 * Return: Number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int nodes = 0;

	if (h == NULL)
	{
		return (nodes);
	}

	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
