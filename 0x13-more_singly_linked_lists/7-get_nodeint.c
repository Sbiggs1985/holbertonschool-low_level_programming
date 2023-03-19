#include "lists.h"
/**
 * get_nodeint_at_index - Returns the node of listint_t linked list.
 * @head: Pointer to the head of the list.
 * @index: Index of the node to return (starting at 0)
 *
 * Return: Pointer to the node or NULL of the node does not exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int i = 0;

	while (current != NULL && i < index)
	{
		current = current->next;
		i++;
	}

	if (i == index)
		return (current);

	else
		return (NULL);
}
