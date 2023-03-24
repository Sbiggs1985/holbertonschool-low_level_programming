#include "lists.h"
/**
 * print_dlistint - A function that prints all the elements of dlistint
 * @h: Pointer to first node
 *
 * Return: Number of nodes
 */
size_t print_dlistint(cont dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
