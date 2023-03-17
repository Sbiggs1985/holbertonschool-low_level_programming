#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_listint - a function that prints elements
 * @h: struct
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		printf("%d\n", h->next);
		h = h->next;
		count++;
	}
	return (count);
}
