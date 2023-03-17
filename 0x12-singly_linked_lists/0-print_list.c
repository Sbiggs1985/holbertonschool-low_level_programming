#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - A function that prints elements
 * @h: struct
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	int count = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{

	if (h->str == NULL)
	{
		printf("[%d] %s\n", 0, "(nil)");
	}
	else
	{
		printf("[%d] %s\n", h->len, h->str);
	}

	h = h->next;
	count++;
	}
		return (count);
}
