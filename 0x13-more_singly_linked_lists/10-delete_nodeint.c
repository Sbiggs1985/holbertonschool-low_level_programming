#include "lists.h"
/**
 * delete_nodeint_at_index - Deletes the node at a given index.
 * @head: Pointer to pointer to the head of the list.
 * @index: Index
 * Return: NULL
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = *head;
	listint_t *node_to_delete;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		node_to_delete = *head;
		*head = (*head)->next;
		free(node_to_delete);
		return (1);
	}

	while (temp && index != 0)
	{
		if (i == index - 1)
			break;
		temp = temp->next;
		i++;
	}

	if (!temp)
		return (-1);

	node_to_delete = temp->next;
	temp->next = temp->next->next;
	free(node_to_delete);
	return (1);
}
