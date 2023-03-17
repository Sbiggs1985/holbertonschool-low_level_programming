#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node - Adds a node
 * @head: Head and or first node in the linked list
 * @str: string
 * Return: The address of the new element or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	int i, count = 0;
	list_t *new;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		count++;

	new->len = i;
	new->str = strdup(str);
	new->next = *head;

	*head = new;

	return (new);
}
