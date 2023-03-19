#include "lists.h"
/**
 * insert_nodeint_at_index - Inserts a new node.
 * @head: Pointer to pointer to the head of the list.
 * @idx: Index where the new node should be added (starting at 0).
 * @n: data (n) to be stored in the new node.
 *
 * Return: Pointer to thee new node or NULL if it fails.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current = *head, *prev = NULL, *new_node;
	unsigned int i = 0;

	while (current != NULL && i < idx)
	{
		prev = current;
		current = current->next;
		i++;
	}

	if (i != idx)
		return (NULL);

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = current;

	if (prev == NULL)
		*head = new_node;
	else
		prev->next = new_node;

	return (new_node);
}
