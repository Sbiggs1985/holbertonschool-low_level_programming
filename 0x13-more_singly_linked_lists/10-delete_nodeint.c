#include "lists.h"
/**
 * delete_nodeint_at_index - Deletes the node at a given index.
 * @head: Pointer to pointer to the head of the list.
 * @index - index of the node
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head, *prev = NULL;
	unsigned int i = 0;

	while (current != NULL && i < index)
	{
		prev = current;
		current = current->next;
		i++;
	}

	if (i != index)
		return (-1);

	if (prev == NULL)
		*head = current->next;
	else
		prev->next = current->next;

	free(current);

	return (1);
}
